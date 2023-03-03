/*
** EPITECH PROJECT, 2023
** AComponent
** File description:
** The file contains all the dependances of the AComponent class.
*/

#include "AComponent.hpp"

nts::Tristate nts::Acomponent::Link::compute()
{
    return (_comp->compute(_pin));
}

nts::Acomponent::Pin::Pin() : _computed(false), _state(Undefined), _link(nullptr) {}

void nts::Acomponent::Pin::setLink(Link link)
{
    _link = std::make_unique<Link>(link);
}

nts::Tristate nts::Acomponent::Pin::getState() const
{
    return (_state);
}

void nts::Acomponent::Pin::setState(Tristate state)
{
    _state = state;
}

nts::Tristate nts::Acomponent::Pin::compute()
{
    Tristate result;

    if (_computed)
       return (_state);
    _computed = true;
    if (_link == nullptr)
        result = nts::Undefined;
    else
        result = _link->compute();
    _state = result;
    _computed = false;
    return (result);
}

void nts::Acomponent::simulate(std::size_t tick) {}

void nts::Acomponent::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    if (pin <= _npin)
        _pins[pin - 1].setLink(Link(&other, otherPin));
}

void nts::Acomponent::setState(nts::Tristate state) {}
