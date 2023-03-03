/*
** EPITECH PROJECT, 2023
** GateComponent
** File description:
** The header contains all the GateComponent class declarations.
*/

#pragma once

#include "CircuitComponent.hpp"
#include "ElementaryComponent.hpp"

namespace nts
{
    class GateComponent : public CircuitComponent {};

    class Component4001 : public GateComponent
    {
    public:
        Component4001();
        std::unique_ptr<nts::IComponent> nts::Component4001::clone();
    };

    class Component4011 : public GateComponent
    {
    public:
        Component4011();
        std::unique_ptr<nts::IComponent> nts::Component4011::clone();
    };

    class Component4030 : public GateComponent
    {
    public:
        Component4030();
        std::unique_ptr<nts::IComponent> nts::Component4030::clone();
    };

    class Component4069 : public GateComponent
    {
    public:
        Component4069();
        std::unique_ptr<nts::IComponent> nts::Component4069::clone();
    };

    class Component4071 : public GateComponent
    {
    public:
        Component4071();
        std::unique_ptr<nts::IComponent> nts::Component4071::clone();
    };

    class Component4081 : public GateComponent
    {
    public:
        Component4081();
        std::unique_ptr<nts::IComponent> nts::Component4081::clone();
    };
}
