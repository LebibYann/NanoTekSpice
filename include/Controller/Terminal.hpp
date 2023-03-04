/*
** EPITECH PROJECT, 2023
** Terminal
** File description:
** The header contains all the methods of the terminal class.
*/

#pragma once

#include <sstream>

#include "Circuit.hpp"

namespace nts
{
    class Terminal
    {
    public:
        Terminal(Circuit &circuit);
        void Start();
        bool readLine();
    private:
        Circuit &_circuit;
    };
}