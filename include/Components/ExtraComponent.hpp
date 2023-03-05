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
            std::unique_ptr<nts::IComponent> clone();
    };

    class DFlipFlopComponent : public ExtraComponent
    {
        public:
            DFlipFlopComponent();
            std::unique_ptr<nts::IComponent> clone();
    };

}
