/*
** EPITECH PROJECT, 2023
** ElementaryComponent
** File description:
** The header contains all the Elementary components and her methods.
*/

#include "ElementaryComponent.hpp"

nts::AndComponent::AndComponent()
{
    _pins.resize(3);
    _npin = 3;
}

nts::Tristate nts::AndComponent::compute(std::size_t pin)
{
    nts::Tristate state;

    if (pin == 3)
        state = _pins[0].compute() & _pins[1].compute();
    else
        state = _pins[pin - 1].compute();
    return (state);
}

nts::NorComponent::NorComponent()
{
    _pins.resize(3);
    _npin = 3;
}

nts::Tristate nts::NorComponent::compute(std::size_t pin)
{
    nts::Tristate state;

    if (pin == 3)
        state = Nor(_pins[0].compute(), _pins[1].compute());
    else
        state = _pins[pin - 1].compute();
    return (state);
}

nts::OrComponent::OrComponent()
{
    _pins.resize(3);
    _npin = 3;
}

nts::Tristate nts::OrComponent::compute(std::size_t pin)
{
   nts::Tristate state;

    if (pin == 3)
        state = _pins[0].compute() | _pins[1].compute();
    else
        state = _pins[pin - 1].compute();
    return (state);
}

nts::XorComponent::XorComponent()
{
    _pins.resize(3);
    _npin = 3;
}

nts::Tristate nts::XorComponent::compute(std::size_t pin)
{
    nts::Tristate state;

    if (pin == 3)
        state = _pins[0].compute() ^ _pins[1].compute();
    else
        state = _pins[pin - 1].compute();
    return (state);
}

nts::NotComponent::NotComponent()
{
    _pins.resize(2);
    _npin = 2;
}

nts::Tristate nts::NotComponent::compute(std::size_t pin)
{
    nts::Tristate state;

    if (pin == 2)
        state = !_pins[0].compute();
    else
        state = _pins[pin - 1].compute();
    return (state);
}

nts::Tristate operator&(nts::Tristate first, nts::Tristate second)
{
    if (first == nts::Undefined && second == nts::False)
        return (nts::False);
    if (second == nts::Undefined && first == nts::False)
        return (nts::False);
    if (first == nts::Undefined || second == nts::Undefined)
        return (nts::Undefined);
    return (static_cast<nts::Tristate>(static_cast<int>(first) & static_cast<int>(second)));
}

nts::Tristate Nor(nts::Tristate first, nts::Tristate second){
    if (first == nts::Undefined && second == nts::True)
        return (nts::False);
    if (second == nts::Undefined && first == nts::True)
        return (nts::False);
    if (first == nts::Undefined || second == nts::Undefined)
        return (nts::Undefined);
    return (!(static_cast<nts::Tristate>(static_cast<int>(first) | static_cast<int>(second))));
}

nts::Tristate operator|(nts::Tristate first, nts::Tristate second)
{
    if (first == nts::Undefined && second == nts::True)
        return (nts::True);
    if (second == nts::Undefined && first == nts::True)
        return (nts::True);
    if (first == nts::Undefined || second == nts::Undefined)
        return (nts::Undefined);
    return (static_cast<nts::Tristate>(static_cast<int>(first) | static_cast<int>(second)));
}

nts::Tristate operator^(nts::Tristate first, nts::Tristate second)
{
    if (first == nts::Undefined || second == nts::Undefined)
        return (nts::Undefined);
    return (static_cast<nts::Tristate>(static_cast<int>(first) ^ static_cast<int>(second)));
}

nts::Tristate operator!(nts::Tristate first)
{
    if (first == nts::Undefined)
        return (nts::Undefined);
    return (static_cast<nts::Tristate>(!static_cast<int>(first)));
}