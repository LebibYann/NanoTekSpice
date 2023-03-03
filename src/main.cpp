/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** main
*/

#include "IComponent.hpp"
#include "SpecialComponent.hpp"
#include "ElementaryComponent.hpp"
#include "GateComponent.hpp"
#include <iostream>
#include <memory>

std ::ostream &operator<<(std ::ostream &s, nts ::Tristate v)
{
    if (v == nts::Undefined)
        return (s << 'U');
    return (s << static_cast<int>(v));
}

int main(void)
{
    std::unique_ptr<nts::IComponent> gate = std::make_unique<nts::XorComponent>();
    std::unique_ptr<nts::IComponent> input1 = std::make_unique<nts::TrueComponent>();
    std::unique_ptr<nts::IComponent> input2 = std::make_unique<nts::FalseComponent>();
    std::unique_ptr<nts::IComponent> output = std::make_unique<nts::OutputComponent>();
    std::unique_ptr<nts::IComponent> chip = std::make_unique<nts::Component4001>();
    chip -> setLink(1, *input1, 1);
    chip -> setLink(2, *input2, 1);
    output->setLink(1, *chip, 3);
    std ::cout << " !(" << input1 -> compute(1) << "||" << input2 -> compute(1) << ")->" << output -> compute (1) << std :: endl ;
    return (0);
}
