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
    class ElementaryComponent : public Acomponent {};

    class AndComponent : public ElementaryComponent
    {
    public:
        AndComponent();
        nts::Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> nts::AndComponent::clone();
    };

    class NorComponent : public ElementaryComponent
    {
    public:
        NorComponent();
        nts::Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> nts::NorComponent::clone();
    };

    class OrComponent : public ElementaryComponent
    {
    public:
        OrComponent();
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> nts::OrComponent::clone();
    };

    class XorComponent : public ElementaryComponent
    {
    public:
        XorComponent();
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> nts::XorComponent::clone();
    };

    class NotComponent : public ElementaryComponent
    {
    public:
        NotComponent();
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> nts::NotComponent::clone();
    };
}

nts::Tristate Nand(nts::Tristate, nts::Tristate);
nts::Tristate Nor(nts::Tristate, nts::Tristate);
nts::Tristate operator&(nts::Tristate, nts::Tristate);
nts::Tristate operator|(nts::Tristate, nts::Tristate);
nts::Tristate operator^(nts::Tristate, nts::Tristate);
nts::Tristate operator!(nts::Tristate);
