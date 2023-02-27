/*
** EPITECH PROJECT, 2023
** SpecialComponent
** File description:
** The file contains all the methods of the SpecialComponent classes.
*/

#include "SpecialComponent.hpp"

nts::InputComponent::InputComponent()
{
    _pins.resize(1);
}

void nts::InputComponent::setState(Tristate state)
{
    _state = state;
}

void nts::InputComponent::simulate(std::size_t tick)
{
    if (_state != Undefined)
    {
        _pins[0].setState(_state);
        _state = Undefined;
    }
}

nts::Tristate nts::InputComponent::compute(std::size_t pin)
{
    return (_pins[0].getState());
}

nts::OutputComponent::OutputComponent()
{
    _pins.resize(1);
    _npin = 1;
}

nts::Tristate nts::OutputComponent::compute(std::size_t pin)
{
    if (pin == 1)
        return (_pins[0].compute());
    return (Undefined);
}

nts::TrueComponent::TrueComponent()
{
    _pins.resize(1);
}

nts::Tristate nts::TrueComponent::compute(std::size_t pin)
{
    if (pin == 1)
        return (nts::True);
    return (nts::Undefined);
}

nts::FalseComponent::FalseComponent()
{
    _pins.resize(1);
}

nts::Tristate nts::FalseComponent::compute(std::size_t pin)
{
    if (pin == 1)
        return (nts::False);
    return (nts::Undefined);
}

nts::ClockComponent::ClockComponent()
{
    _state = Undefined;
    _pins.resize(1);
}

void nts::ClockComponent::setState(Tristate state)
{
    _state = state;
}

void nts::ClockComponent::simulate(std::size_t tick)
{
    size_t i;

    for (i = 0; i < tick; i++)
    {
        if (_state != Undefined)
        {
            _pins[0].setState(_state);
            _state = Undefined;
        }
        else if (_pins[0].getState() != Undefined)
            _pins[0].setState((_pins[0].getState() == nts::True) ? nts::False : nts::True);
    }
}

nts::Tristate nts::ClockComponent::compute(std::size_t pin)
{
    if (pin == 1)
        return (_pins[0].getState());
    return (Undefined);
}