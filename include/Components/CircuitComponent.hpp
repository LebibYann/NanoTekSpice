/*
** EPITECH PROJECT, 2023
** CircuitComponent
** File description:
** The header contains all the dependances of the CircuitComponent classes.
*/

#pragma once

#include "AComponent.hpp"

namespace nts
{
    class CircuitComponent : public Acomponent
    {
    public:
        ~CircuitComponent();
        nts::Tristate compute(std::size_t pin);

    protected:
        std::vector<std::unique_ptr<nts::IComponent>> _comps;
    };
}
