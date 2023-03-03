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
        std::unique_ptr<nts::IComponent> nts::Component4008::clone();
    };

    class Component4013 : public AdvancedComponent
    {
    public:
        Component4013();
        std::unique_ptr<nts::IComponent> nts::Component4013::clone();
    };

    class Component4017 : public AdvancedComponent
    {
    public:
        Component4017();
        std::unique_ptr<nts::IComponent> nts::Component4017::clone();
    };

    class Component4094 : public AdvancedComponent
    {
    public:
        Component4094();
        std::unique_ptr<nts::IComponent> nts::Component4094::clone();
    };

    class Component4512 : public AdvancedComponent
    {
    public:
        Component4512();
        std::unique_ptr<nts::IComponent> nts::Component4512::clone();
    };

    class Component4514 : public AdvancedComponent
    {
    public:
        Component4514();
        std::unique_ptr<nts::IComponent> nts::Component4514::clone();
    };

    class Component4801 : public AdvancedComponent
    {
    public:
        Component4801();
        std::unique_ptr<nts::IComponent> nts::Component4801::clone();
    };

    class Component2716 : public AdvancedComponent
    {
    public:
        Component2716();
        std::unique_ptr<nts::IComponent> nts::Component2716::clone();
    };
}
