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
    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::INPUT);
    _pins[3].setType(nts::INPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::INPUT);
    _pins[6].setType(nts::INPUT);
    _pins[7].setType(nts::FREE);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::OUTPUT);
    _pins[11].setType(nts::OUTPUT);
    _pins[12].setType(nts::OUTPUT);
    _pins[13].setType(nts::OUTPUT);
    _pins[14].setType(nts::INPUT);
    _pins[15].setType(nts::FREE);
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
    _pins[0].setType(nts::OUTPUT);
    _pins[1].setType(nts::OUTPUT);
    _pins[2].setType(nts::INPUT);
    _pins[3].setType(nts::INPUT);
    _pins[4].setType(nts::INPUT);
    _pins[5].setType(nts::INPUT);
    _pins[6].setType(nts::FREE);
    _pins[7].setType(nts::INPUT);
    _pins[8].setType(nts::INPUT);
    _pins[9].setType(nts::INPUT);
    _pins[10].setType(nts::INPUT);
    _pins[11].setType(nts::OUTPUT);
    _pins[12].setType(nts::OUTPUT);
    _pins[13].setType(nts::FREE);
}

nts::Component4017::Component4017()
{
    _comps.resize(20);
    _comps[0] = std::make_unique<nts::DFlipFlopComponent>();
    _comps[1] = std::make_unique<nts::DFlipFlopComponent>();
    _comps[2] = std::make_unique<nts::DFlipFlopComponent>();
    _comps[3] = std::make_unique<nts::DFlipFlopComponent>();
    _comps[4] = std::make_unique<nts::DFlipFlopComponent>();
    _comps[5] = std::make_unique<nts::FalseComponent>();
    _comps[6] = std::make_unique<nts::NotComponent>();
    _comps[7] = std::make_unique<nts::AndComponent>();
    _comps[8] = std::make_unique<nts::AndComponent>();
    _comps[9] = std::make_unique<nts::OrComponent>();
    _comps[10] = std::make_unique<nts::NorComponent>();
    _comps[11] = std::make_unique<nts::NorComponent>();
    _comps[12] = std::make_unique<nts::NorComponent>();
    _comps[13] = std::make_unique<nts::NorComponent>();
    _comps[14] = std::make_unique<nts::NorComponent>();
    _comps[15] = std::make_unique<nts::NorComponent>();
    _comps[16] = std::make_unique<nts::NorComponent>();
    _comps[17] = std::make_unique<nts::NorComponent>();
    _comps[18] = std::make_unique<nts::NorComponent>();
    _comps[19] = std::make_unique<nts::NorComponent>();

    _npin = 15;
    _pins.resize(15);
    _comps[6]->setLink(1, *this, 13);
    _comps[7]->setLink(1, *_comps[6], 2);
    _comps[7]->setLink(2, *this, 14);

    _comps[9]->setLink(1, *_comps[2], 5);
    _comps[9]->setLink(2, *_comps[0], 5);
    _comps[8]->setLink(1, *_comps[9], 3);
    _comps[8]->setLink(2, *_comps[1], 5);

    _comps[0]->setLink(1, *_comps[7], 3);
    _comps[1]->setLink(1, *_comps[7], 3);
    _comps[2]->setLink(1, *_comps[7], 3);
    _comps[3]->setLink(1, *_comps[7], 3);
    _comps[4]->setLink(1, *_comps[7], 3);

    _comps[0]->setLink(2, *_comps[4], 6);
    _comps[1]->setLink(2, *_comps[0], 5);
    _comps[2]->setLink(2, *_comps[8], 3);
    _comps[3]->setLink(2, *_comps[2], 5);
    _comps[4]->setLink(2, *_comps[3], 5);

    _comps[0]->setLink(3, *this, 15);
    _comps[1]->setLink(3, *this, 15);
    _comps[2]->setLink(3, *this, 15);
    _comps[3]->setLink(3, *this, 15);
    _comps[4]->setLink(3, *this, 15);

    _comps[0]->setLink(4, *_comps[5], 1);
    _comps[1]->setLink(4, *_comps[5], 1);
    _comps[2]->setLink(4, *_comps[5], 1);
    _comps[3]->setLink(4, *_comps[5], 1);
    _comps[4]->setLink(4, *_comps[5], 1);

    _comps[10]->setLink(1, *_comps[4], 5);
    _comps[10]->setLink(2, *_comps[0], 5);
    setLink(3, *_comps[10], 3);

    _comps[11]->setLink(1, *_comps[1], 5);
    _comps[11]->setLink(2, *_comps[0], 6);
    setLink(2, *_comps[11], 3);

    _comps[12]->setLink(1, *_comps[1], 6);
    _comps[12]->setLink(2, *_comps[2], 5);
    setLink(4, *_comps[12], 3);

    _comps[13]->setLink(1, *_comps[3], 5);
    _comps[13]->setLink(2, *_comps[2], 6);
    setLink(7, *_comps[13], 3);

    _comps[14]->setLink(1, *_comps[4], 5);
    _comps[14]->setLink(2, *_comps[3], 6);
    setLink(10, *_comps[14], 3);

    _comps[15]->setLink(1, *_comps[0], 6);
    _comps[15]->setLink(2, *_comps[4], 6);
    setLink(1, *_comps[15], 3);

    _comps[16]->setLink(1, *_comps[0], 5);
    _comps[16]->setLink(2, *_comps[1], 6);
    setLink(5, *_comps[16], 3);

    _comps[17]->setLink(1, *_comps[1], 5);
    _comps[17]->setLink(2, *_comps[2], 6);
    setLink(6, *_comps[17], 3);

    _comps[18]->setLink(1, *_comps[3], 6);
    _comps[18]->setLink(2, *_comps[2], 5);
    setLink(9, *_comps[18], 3);

    _comps[19]->setLink(1, *_comps[3], 5);
    _comps[19]->setLink(2, *_comps[4], 6);
    setLink(11, *_comps[19], 3);

    setLink(12, *_comps[4], 6);
    _pins[0].setType(nts::OUTPUT);
    _pins[1].setType(nts::OUTPUT);
    _pins[2].setType(nts::OUTPUT);
    _pins[3].setType(nts::OUTPUT);
    _pins[4].setType(nts::OUTPUT);
    _pins[5].setType(nts::OUTPUT);
    _pins[6].setType(nts::OUTPUT);
    _pins[7].setType(nts::FREE);
    _pins[8].setType(nts::OUTPUT);
    _pins[9].setType(nts::OUTPUT);
    _pins[10].setType(nts::OUTPUT);
    _pins[11].setType(nts::OUTPUT);
    _pins[12].setType(nts::INPUT);
    _pins[13].setType(nts::INPUT);
    _pins[14].setType(nts::INPUT);
    
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
