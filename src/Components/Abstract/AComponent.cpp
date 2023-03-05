/*
** EPITECH PROJECT, 2023
** AComponent
** File description:
** The file contains all the dependances of the AComponent class.
*/

#include "AComponent.hpp"

nts::Pin &nts::Acomponent::getPin(std::size_t pin)
{
    if (pin > _npin)
        throw LinkError("Bad link syntax.");
    return (_pins[pin - 1]);
}

nts::Tristate nts::Link::compute()
{
    return (_comp->compute(_pin));
}

nts::Pin::Pin() : _computed(false), _state(Undefined){}

void nts::Pin::setLink(Link Link)
{
    _links.push_back(Link);
}

nts::Tristate nts::Pin::getState() const
{
    return (_state);
}

void nts::Pin::setState(Tristate state)
{
    _state = state;
}

nts::Tristate nts::Pin::compute()
{
    Tristate result = nts::Undefined;
    Tristate current;
    std::size_t i;

    if (_computed)
       return (_state);
    _computed = true;
    for (i = 0; i < _links.size(); i++){
        current = _links[i].compute();
        if (current > result)
            result = current;
    }
    _state = result;
    _computed = false;
    return (result);
}

void nts::Acomponent::simulate(std::size_t tick) 
{
    (void) tick;
}

void nts::Acomponent::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    if (pin <= _npin){
        _pins[pin - 1].setLink(Link(&other, otherPin));
        nts::Pin &lpin = (other.getPin(otherPin));
        lpin.setLink(Link(this, pin));
    }
    else
        throw LinkError("Bad link syntax.");
}

void nts::Acomponent::setState(nts::Tristate state) 
{
    (void) state;
}
