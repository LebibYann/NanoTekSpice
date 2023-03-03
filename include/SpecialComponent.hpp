/*
** EPITECH PROJECT, 2023
** SpecialComponent
** File description:
** The header contains all the SpecialComponent classes.
*/

#pragma once

#include "AComponent.hpp"

namespace nts
{
    class SpecialComponent : public Acomponent
    {
    };

    class InputComponent : public SpecialComponent
    {
        public:
            InputComponent();
            void setState(Tristate state);
            void simulate(std::size_t tick);
            Tristate compute(std::size_t pin);
        protected:
            Tristate _state;
            bool _changed;
    };

    class OutputComponent : public SpecialComponent
    {
        public:
            OutputComponent();
            Tristate compute(std::size_t pin);
    };

    class TrueComponent : public SpecialComponent
    {
        public:
            TrueComponent();
            Tristate compute(std::size_t pin);
    };

    class FalseComponent : public SpecialComponent
    {
        public:
            FalseComponent();
            Tristate compute(std::size_t pin);
    };

    class ClockComponent : public SpecialComponent
    {
        public:
            ClockComponent();
            void setState(Tristate state);
            void simulate(std::size_t tick);
            Tristate compute(std::size_t pin);
        protected:
            Tristate _state;
            bool _changed;
    };
}
