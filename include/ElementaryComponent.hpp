/*
** EPITECH PROJECT, 2023
** ElementaryComponent
** File description:
** The header contains the elementary component class.
*/

#pragma once

#include "AComponent.hpp"

namespace nts
{
    class ElementaryComponent : public Acomponent
    {
    };

    class AndComponent : public ElementaryComponent
    {
    public:
        AndComponent();
        Tristate compute(std::size_t pin);
    };

    class OrComponent : public ElementaryComponent
    {
    public:
        OrComponent();
        Tristate compute(std::size_t pin);
    };

    class XorComponent : public ElementaryComponent
    {
    public:
        XorComponent();
        Tristate compute(std::size_t pin);
    };
    class NotComponent : public ElementaryComponent
    {
    public:
        NotComponent();
        Tristate compute(std::size_t pin);
    };
}

nts::Tristate operator&(nts::Tristate, nts::Tristate);
nts::Tristate operator|(nts::Tristate, nts::Tristate);
nts::Tristate operator^(nts::Tristate, nts::Tristate);
nts::Tristate operator!(nts::Tristate);
