/*
** EPITECH PROJECT, 2023
** CircuitComponent
** File description:
** The header contains all the methods of the the CircuitComponent class.
*/

#include "CircuitComponent.hpp"

nts::CircuitComponent::~CircuitComponent()
{
    size_t i;

    for (i = 0; i < _comps.size(); i++)
        _comps[i].reset();
}

nts::Tristate nts::CircuitComponent::compute(std::size_t pin)
{
    if (pin > _npin)
        return (nts::Undefined);
    return (_pins[pin - 1].compute());
}