/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** main
*/

#include "Terminal.hpp"

int main(void)
{
    nts::Circuit circuit;

    try{
        circuit.addComponent("clock", "a");
        circuit.addComponent("clock", "b");
        circuit.addComponent("4071", "or");
        circuit.addComponent("output", "s");
        circuit.linkComponent("a", 1, "or", 1);
        circuit.linkComponent("b", 1, "or", 2);
        circuit.linkComponent("or", 3, "s", 1);
    }catch(nts::Circuit::ComponentError &e)
    {
        std::cerr << e.what() << std::endl;
        return (84);
    }
    nts::Terminal terminal(circuit);
    terminal.Start();
    return (0);
}