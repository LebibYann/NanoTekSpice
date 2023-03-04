/*
** EPITECH PROJECT, 2023
** AdvancedComponent
** File description:
** The header contains all the AdvancedComponent class declarations.
*/

#pragma once

#include "ExtraComponent.hpp"
#include "SpecialComponent.hpp"

namespace nts
{
    class AdvancedComponent : public CircuitComponent{};

    class Component4008 : public AdvancedComponent
    {
    public:
        Component4008();
        std::unique_ptr<nts::IComponent> clone();
    };

    class Component4013 : public AdvancedComponent
    {
    public:
        Component4013();
        std::unique_ptr<nts::IComponent> clone();
    };
}
