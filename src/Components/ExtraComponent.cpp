/*
** EPITECH PROJECT, 2023
** ExtraComponent.cpp
** File description:
** The file contains all the methods of the ExtraComponent classes.
*/

#include "ExtraComponent.hpp"

nts::SumComponent::SumComponent()
{
    _comps.resize(5);
    _comps[0] = std::make_unique<nts::XorComponent>();
    _comps[1] = std::make_unique<nts::XorComponent>();
    _comps[2] = std::make_unique<nts::AndComponent>();
    _comps[3] = std::make_unique<nts::AndComponent>();
    _comps[4] = std::make_unique<nts::OrComponent>();

    _npin = 5;
    _pins.resize(5);
    _comps[0]->setLink(1, *this, 1);
    _comps[0]->setLink(2, *this, 2);

    _comps[1]->setLink(1, *_comps[0], 3);
    _comps[1]->setLink(2, *this, 3);

    _comps[2]->setLink(1, *_comps[0], 3);
    _comps[2]->setLink(2, *this, 3);

    _comps[3]->setLink(1, *this, 1);
    _comps[3]->setLink(2, *this, 2);

    _comps[4]->setLink(1, *_comps[2], 3);
    _comps[4]->setLink(2, *_comps[3], 3);

    setLink(4, *_comps[1], 3);
    setLink(5, *_comps[4], 3);
}

nts::DFlipFlopComponent::DFlipFlopComponent()
{
    _comps.resize(11);
    _comps[0] = std::make_unique<nts::NorComponent>();
    _comps[1] = std::make_unique<nts::NorComponent>();
    _comps[2] = std::make_unique<nts::NorComponent>();
    _comps[3] = std::make_unique<nts::NorComponent>();
    _comps[4] = std::make_unique<nts::AndComponent>();
    _comps[5] = std::make_unique<nts::AndComponent>();
    _comps[6] = std::make_unique<nts::OrComponent>();
    _comps[7] = std::make_unique<nts::OrComponent>();
    _comps[8] = std::make_unique<nts::OrComponent>();
    _comps[9] = std::make_unique<nts::NotComponent>();
    _comps[10] = std::make_unique<nts::NotComponent>();

    _npin = 6;
    _pins.resize(6);
    _comps[0]->setLink(1, *this, 1);
    _comps[0]->setLink(2, *this, 2);

    _comps[9]->setLink(1, *this, 2);

    _comps[1]->setLink(1, *this, 1);
    _comps[1]->setLink(2, *_comps[9], 2);

    _comps[2]->setLink(1, *_comps[0], 3);
    _comps[2]->setLink(2, *_comps[3], 3);

    _comps[3]->setLink(1, *_comps[1], 3);
    _comps[3]->setLink(2, *_comps[2], 3);

    _comps[6]->setLink(1, *this, 3);
    _comps[6]->setLink(2, *this, 4);

    _comps[10]->setLink(1, *_comps[6], 3);

    _comps[4]->setLink(1, *_comps[2], 3);
    _comps[4]->setLink(2, *_comps[10], 2);

    _comps[5]->setLink(1, *_comps[3], 3);
    _comps[5]->setLink(2, *_comps[10], 2);

    _comps[7]->setLink(1, *_comps[4], 3);
    _comps[7]->setLink(2, *this, 4);

    _comps[8]->setLink(1, *_comps[5], 3);
    _comps[8]->setLink(2, *this, 3);

    setLink(5, *_comps[7], 3);
    setLink(6, *_comps[8], 3);
}