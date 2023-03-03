/*
** EPITECH PROJECT, 2023
** ExtraComponent.hpp
** File description:
** The file contains all the ExtraComponent class declarations
*/

#pragma once

#include "ElementaryComponent.hpp"
#include "CircuitComponent.hpp"

namespace nts
{
    class ExtraComponent : public CircuitComponent
    {
    };

    class SumComponent : public ExtraComponent
    {
        public:
            SumComponent();
    };

    class DFlipFlopComponent : public ExtraComponent
    {
        public:
            DFlipFlopComponent();
    };

    class TFlipFlopComponent : public ExtraComponent
    {
        public:
            TFlipFlopComponent();
    };
}
