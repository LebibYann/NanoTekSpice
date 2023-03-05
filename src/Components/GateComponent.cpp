/*
** EPITECH PROJECT, 2023
** GateComponent
** File description:
** The file contains all the methods of the GateComponent classes.
*/

#include "GateComponent.hpp"

nts::Component4001::Component4001()
{
    _comps.resize(8);
    _comps[0] = std::make_unique<nts::OrComponent>();
    _comps[1] = std::make_unique<nts::OrComponent>();
    _comps[2] = std::make_unique<nts::OrComponent>();
    _comps[3] = std::make_unique<nts::OrComponent>();
    _comps[4] = std::make_unique<nts::NotComponent>();
    _comps[5] = std::make_unique<nts::NotComponent>();
    _comps[6] = std::make_unique<nts::NotComponent>();
    _comps[7] = std::make_unique<nts::NotComponent>();

    _pins.resize(14);
    _npin = 14;
    _comps[0]->setLink(1, *this, 1);
    _comps[0]->setLink(2, *this, 2);
    _comps[4]->setLink(1, *_comps[0], 3);
    setLink(3, *_comps[4], 2);

    _comps[1]->setLink(1, *this, 5);
    _comps[1]->setLink(2, *this, 6);
    _comps[5]->setLink(1, *_comps[1], 3);
    setLink(4, *_comps[5], 2);

    _comps[2]->setLink(1, *this, 8);
    _comps[2]->setLink(2, *this, 9);
    _comps[6]->setLink(1, *_comps[2], 3);
    setLink(10, *_comps[6], 2);

    _comps[3]->setLink(1, *this, 12);
    _comps[3]->setLink(2, *this, 13);
    _comps[7]->setLink(1, *_comps[3], 3);
    setLink(11, *_comps[7], 2);
    
    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::OUTPUT);
    _pins[3].setType(nts::OUTPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::INPUT);
    _pins[6].setType(nts::FREE);
    _pins[7].setType(nts::INPUT);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::OUTPUT);
    _pins[11].setType(nts::INPUT);
    _pins[12].setType(nts::INPUT);
    _pins[13].setType(nts::FREE);
}

nts::Component4011::Component4011()
{
    _comps.resize(8);
    _comps[0] = std::make_unique<nts::AndComponent>();
    _comps[1] = std::make_unique<nts::AndComponent>();
    _comps[2] = std::make_unique<nts::AndComponent>();
    _comps[3] = std::make_unique<nts::AndComponent>();
    _comps[4] = std::make_unique<nts::NotComponent>();
    _comps[5] = std::make_unique<nts::NotComponent>();
    _comps[6] = std::make_unique<nts::NotComponent>();
    _comps[7] = std::make_unique<nts::NotComponent>();

    _pins.resize(14);
    _npin = 14;
    _comps[0]->setLink(1, *this, 1);
    _comps[0]->setLink(2, *this, 2);
    _comps[4]->setLink(1, *_comps[0], 3);
    setLink(3, *_comps[4], 2);

    _comps[1]->setLink(1, *this, 5);
    _comps[1]->setLink(2, *this, 6);
    _comps[5]->setLink(1, *_comps[1], 3);
    setLink(4, *_comps[5], 2);

    _comps[2]->setLink(1, *this, 8);
    _comps[2]->setLink(2, *this, 9);
    _comps[6]->setLink(1, *_comps[2], 3);
    setLink(10, *_comps[6], 2);

    _comps[3]->setLink(1, *this, 12);
    _comps[3]->setLink(2, *this, 13);
    _comps[7]->setLink(1, *_comps[3], 3);
    setLink(11, *_comps[7], 2);
    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::OUTPUT);
    _pins[3].setType(nts::OUTPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::INPUT);
    _pins[6].setType(nts::FREE);
    _pins[7].setType(nts::INPUT);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::OUTPUT);
    _pins[11].setType(nts::INPUT);
    _pins[12].setType(nts::INPUT);
    _pins[13].setType(nts::FREE);
}

nts::Component4030::Component4030()
{
    _comps.resize(4);
    _comps[0] = std::make_unique<nts::XorComponent>();
    _comps[1] = std::make_unique<nts::XorComponent>();
    _comps[2] = std::make_unique<nts::XorComponent>();
    _comps[3] = std::make_unique<nts::XorComponent>();

    _pins.resize(14);
    _npin = 14;
    _comps[0]->setLink(1, *this, 1);
    _comps[0]->setLink(2, *this, 2);
    setLink(3, *_comps[0], 3);

    _comps[1]->setLink(1, *this, 5);
    _comps[1]->setLink(2, *this, 6);
    setLink(4, *_comps[1], 3);

    _comps[2]->setLink(1, *this, 8);
    _comps[2]->setLink(2, *this, 9);
    setLink(10, *_comps[2], 3);

    _comps[3]->setLink(1, *this, 12);
    _comps[3]->setLink(2, *this, 13);
    setLink(11, *_comps[3], 3);
    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::OUTPUT);
    _pins[3].setType(nts::OUTPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::INPUT);
    _pins[6].setType(nts::FREE);
    _pins[7].setType(nts::INPUT);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::OUTPUT);
    _pins[11].setType(nts::INPUT);
    _pins[12].setType(nts::INPUT);
    _pins[13].setType(nts::FREE);
}

nts::Component4069::Component4069()
{
    _comps.resize(6);
    _comps[0] = std::make_unique<nts::NotComponent>();
    _comps[1] = std::make_unique<nts::NotComponent>();
    _comps[2] = std::make_unique<nts::NotComponent>();
    _comps[3] = std::make_unique<nts::NotComponent>();
    _comps[4] = std::make_unique<nts::NotComponent>();
    _comps[5] = std::make_unique<nts::NotComponent>();

    _pins.resize(14);
    _npin = 14;
    _comps[0]->setLink(1, *this, 1);
    setLink(2, *_comps[0], 2);
    _comps[1]->setLink(1, *this, 3);
    setLink(4, *_comps[1], 2);
    _comps[2]->setLink(1, *this, 5);
    setLink(6, *_comps[2], 2);
    _comps[3]->setLink(1, *this, 9);
    setLink(8, *_comps[3], 2);
    _comps[4]->setLink(1, *this, 11);
    setLink(10, *_comps[4], 2);
    _comps[5]->setLink(1, *this, 13);
    setLink(12, *_comps[5], 2);
    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::OUTPUT);
    _pins[2].setType(nts::INPUT);
    _pins[3].setType(nts::OUTPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::OUTPUT);
    _pins[6].setType(nts::FREE);
    _pins[7].setType(nts::OUTPUT);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::INPUT);
    _pins[11].setType(nts::OUTPUT);
    _pins[12].setType(nts::INPUT);
    _pins[13].setType(nts::FREE);
}

nts::Component4071::Component4071()
{
    _comps.resize(4);
    _comps[0] = std::make_unique<nts::OrComponent>();
    _comps[1] = std::make_unique<nts::OrComponent>();
    _comps[2] = std::make_unique<nts::OrComponent>();
    _comps[3] = std::make_unique<nts::OrComponent>();

    _pins.resize(14);
    _npin = 14;
    _comps[0]->setLink(1, *this, 1);
    _comps[0]->setLink(2, *this, 2);
    setLink(3, *_comps[0], 3);

    _comps[1]->setLink(1, *this, 5);
    _comps[1]->setLink(2, *this, 6);
    setLink(4, *_comps[1], 3);

    _comps[2]->setLink(1, *this, 8);
    _comps[2]->setLink(2, *this, 9);
    setLink(10, *_comps[2], 3);

    _comps[3]->setLink(1, *this, 12);
    _comps[3]->setLink(2, *this, 13);
    setLink(11, *_comps[3], 3);
    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::OUTPUT);
    _pins[3].setType(nts::OUTPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::INPUT);
    _pins[6].setType(nts::FREE);
    _pins[7].setType(nts::INPUT);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::OUTPUT);
    _pins[11].setType(nts::INPUT);
    _pins[12].setType(nts::INPUT);
    _pins[13].setType(nts::FREE);
}

nts::Component4081::Component4081()
{
    _comps.resize(4);
    _comps[0] = std::make_unique<nts::AndComponent>();
    _comps[1] = std::make_unique<nts::AndComponent>();
    _comps[2] = std::make_unique<nts::AndComponent>();
    _comps[3] = std::make_unique<nts::AndComponent>();

    _pins.resize(14);
    _npin = 14;
    _comps[0]->setLink(1, *this, 1);
    _comps[0]->setLink(2, *this, 2);
    setLink(3, *_comps[0], 3);

    _comps[1]->setLink(1, *this, 5);
    _comps[1]->setLink(2, *this, 6);
    setLink(4, *_comps[1], 3);

    _comps[2]->setLink(1, *this, 8);
    _comps[2]->setLink(2, *this, 9);
    setLink(10, *_comps[2], 3);

    _comps[3]->setLink(1, *this, 12);
    _comps[3]->setLink(2, *this, 13);
    setLink(11, *_comps[3], 3);
    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::OUTPUT);
    _pins[3].setType(nts::OUTPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::INPUT);
    _pins[6].setType(nts::FREE);
    _pins[7].setType(nts::INPUT);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::OUTPUT);
    _pins[11].setType(nts::INPUT);
    _pins[12].setType(nts::INPUT);
    _pins[13].setType(nts::FREE);
}

std::unique_ptr<nts::IComponent> nts::Component4001::clone()
{
    return std::make_unique<nts::Component4001>();
}

std::unique_ptr<nts::IComponent> nts::Component4011::clone()
{
    return std::make_unique<nts::Component4011>();
}

std::unique_ptr<nts::IComponent> nts::Component4030::clone()
{
    return std::make_unique<nts::Component4030>();
}

std::unique_ptr<nts::IComponent> nts::Component4069::clone()
{
    return std::make_unique<nts::Component4069>();
}

std::unique_ptr<nts::IComponent> nts::Component4071::clone()
{
    return std::make_unique<nts::Component4071>();
}

std::unique_ptr<nts::IComponent> nts::Component4081::clone()
{
    return std::make_unique<nts::Component4081>();
}