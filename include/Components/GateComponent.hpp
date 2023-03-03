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
    class GateComponent : public CircuitComponent
    {
    };

    class Component4001 : public GateComponent
    {
        public:
            Component4001();
    };

    class Component4011 : public GateComponent
    {
        Component4011();
    };

    class Component4030 : public GateComponent
    {
        Component4030();
    };

    class Component4069 : public GateComponent
    {
        Component4069();
    };

    class Component4071 : public GateComponent
    {
        Component4071();
    };

    class Component4081 : public GateComponent
    {
        Component4081();
    };
}