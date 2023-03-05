/*
** EPITECH PROJECT, 2023
** ExtraComponent.cpp
** File description:
** The file contains all the methods of the ExtraComponent classes.
*/

#include "ExtraComponent.hpp"

nts::SumComponent::SumComponent()
{
    _npin = 5;
    _pins.resize(5);

    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::INPUT);
    _pins[3].setType(nts::FREE);
    _pins[4].setType(nts::FREE);
}

nts::Tristate nts::SumComponent::compute(std::size_t pin)
{
    if (pin < 3)
        return (_pins[pin - 1].compute());
    nts::Tristate a = _pins[0].compute();
    nts::Tristate b = _pins[1].compute();
    nts::Tristate c = _pins[2].compute();
    if (pin == 4)
        return ((a ^ b) ^ c);
    if (pin == 5)
        return (((a ^ b) & c) | (a & b));
    return (nts::Undefined);
}

std::unique_ptr<nts::IComponent> nts::SumComponent::clone()
{
    return (std::make_unique<SumComponent>());
}

nts::DFlipFlopComponent::DFlipFlopComponent()
{
    _npin = 6;
    _pins.resize(6);

    _pins[0].setType(nts::INPUT);
    _pins[1].setType(nts::INPUT);
    _pins[2].setType(nts::INPUT);
    _pins[3].setType(nts::INPUT);
    _pins[4].setType(nts::FREE);
    _pins[5].setType(nts::FREE);
}

nts::Tristate nts::DFlipFlopComponent::compute(std::size_t pin)
{
    if (pin < 4)
        return (_pins[pin - 1].compute());
    nts::Tristate clk = _pins[0].compute();
    nts::Tristate d = _pins[1].compute();
    nts::Tristate r = _pins[2].compute();
    nts::Tristate s = _pins[3].compute();

    if (clk == 1 && d == 0 && r == 0 && s == 0){
        _pins[4].setState(nts::False);
        _pins[5].setState(nts::True);
    }else if (clk == 1 && d == 1 && r == 0 && s == 0){
        _pins[4].setState(nts::True);
        _pins[5].setState(nts::False);
    }else if (r == 1 && s == 0){
        _pins[4].setState(nts::False);
        _pins[5].setState(nts::True);
    }else if (r == 0 && s == 1){
        _pins[4].setState(nts::True);
        _pins[5].setState(nts::False);
    }else if (r == 1 && s == 1){
        _pins[4].setState(nts::True);
        _pins[5].setState(nts::True);
    }
    return (_pins[pin - 1].getState());
}

std::unique_ptr<nts::IComponent> nts::DFlipFlopComponent::clone()
{
    return (std::make_unique<DFlipFlopComponent>());
}