/*
** EPITECH PROJECT, 2023
** AdvancedComponent
** File description:
** The file contains all the methods of the AdvancedComponent classes.
*/

#include "AdvancedComponent.hpp"

nts::Component4008::Component4008()
{
    _comps.resize(4);
    _comps[0] = std::make_unique<nts::SumComponent>();
    _comps[1] = std::make_unique<nts::SumComponent>();
    _comps[2] = std::make_unique<nts::SumComponent>();
    _comps[3] = std::make_unique<nts::SumComponent>();

    _npin = 16;
    _pins.resize(16);
    _comps[0]->setLink(1, *this, 7);
    _comps[0]->setLink(2, *this, 6);
    _comps[0]->setLink(3, *this, 9);

    _comps[1]->setLink(1, *this, 5);
    _comps[1]->setLink(2, *this, 4);
    _comps[1]->setLink(3, *_comps[0], 5);

    _comps[2]->setLink(1, *this, 3);
    _comps[2]->setLink(2, *this, 2);
    _comps[2]->setLink(3, *_comps[1], 5);

    _comps[3]->setLink(1, *this, 1);
    _comps[3]->setLink(2, *this, 15);
    _comps[3]->setLink(3, *_comps[2], 5);

    setLink(10, *_comps[0], 4);
    setLink(11, *_comps[1], 4);
    setLink(12, *_comps[2], 4);
    setLink(13, *_comps[3], 4);
    setLink(14, *_comps[3], 5);
}

nts::Component4013::Component4013()
{
    _comps.resize(2);
    _comps[0] = std::make_unique<nts::DFlipFlopComponent>();
    _comps[1] = std::make_unique<nts::DFlipFlopComponent>();

    _npin = 14;
    _pins.resize(14);
    _comps[0]->setLink(1, *this, 3);
    _comps[0]->setLink(2, *this, 5);
    _comps[0]->setLink(3, *this, 4);
    _comps[0]->setLink(4, *this, 6);
    setLink(1, *_comps[0], 5);
    setLink(2, *_comps[0], 6);

    _comps[1]->setLink(1, *this, 11);
    _comps[1]->setLink(2, *this, 9);
    _comps[1]->setLink(3, *this, 10);
    _comps[1]->setLink(4, *this, 8);
    setLink(13, *_comps[1], 5);
    setLink(12, *_comps[1], 6);
}

std::unique_ptr<nts::IComponent> nts::Component4008::clone()
{
    return std::make_unique<nts::Component4008>();
}

std::unique_ptr<nts::IComponent> nts::Component4013::clone()
{
    return std::make_unique<nts::Component4013>();
}

std::unique_ptr<nts::IComponent> nts::Component4017::clone()
{
    return std::make_unique<nts::Component4017>();
}

std::unique_ptr<nts::IComponent> nts::Component4094::clone()
{
    return std::make_unique<nts::Component4094>();
}

std::unique_ptr<nts::IComponent> nts::Component4512::clone()
{
    return std::make_unique<nts::Component4512>();
}

std::unique_ptr<nts::IComponent> nts::Component4514::clone()
{
    return std::make_unique<nts::Component4514>();
}

std::unique_ptr<nts::IComponent> nts::Component4801::clone()
{
    return std::make_unique<nts::Component4801>();
}

std::unique_ptr<nts::IComponent> nts::Component2716::clone()
{
    return std::make_unique<nts::Component2716>();
}
