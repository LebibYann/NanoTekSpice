/*
** EPITECH PROJECT, 2023
** AComponent
** File description:
** The header contains the AComponent class.
*/

#pragma once

#include "IComponent.hpp"
#include <vector>

namespace nts
{   
    class Acomponent : public IComponent
    {
        public:
            class Link{
                public:
                    Link(IComponent *comp, std::size_t pin) : _comp(comp), _pin(pin) {}
                    Tristate compute();
                private:
                    IComponent *_comp;
                    std::size_t _pin;
            };
            class Pin{
                public:
                    Pin();
                    Tristate compute();
                    void setLink(Link link);
                    Tristate getState() const;
                    void setState(Tristate state);
                private:
                    bool _computed;
                    Tristate _state;
                    std::vector<Link> _links;
            };
            void simulate(std::size_t tick);
            void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
            void setState(nts::Tristate state);
        protected:
            std::size_t _npin;
            std::vector<Pin> _pins;
    };
}