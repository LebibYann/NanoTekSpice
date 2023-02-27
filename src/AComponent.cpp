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

nts::Acomponent::Pin::Pin() : _computed(false), _state(Undefined)
{
}

void nts::Acomponent::Pin::setLink(Link link)
{
    _links.push_back(link);
}

nts::Tristate nts::Acomponent::Pin::getState() const
{
    return (_state);
}

nts::Tristate nts::Acomponent::Pin::compute()
{
    Tristate result = Undefined;
    Tristate current;
    size_t i;

    if (_computed)
        return (_state);
    _computed = true;
    for (i = 0; i < _links.size(); i++){
        current = _links[i].compute();
        if (current > result){
            result = current;
        }
    }
    _computed = false;
    _state = result;
    return (result);
}

void nts::Acomponent::simulate(std::size_t tick)
{
}

void nts::Acomponent::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    if (pin <= _npin)
        _pins[pin - 1].setLink(Link(&other, otherPin));
}
