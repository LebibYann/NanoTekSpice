# NanoTekSpice: a digital logic circuit simulator

NanoTekSpice reads a circuit description file, builds the circuit from logic components, and simulates it tick by tick from an interactive shell. It is a small take on [SPICE](https://en.wikipedia.org/wiki/SPICE)-style simulators for digital electronics.

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)

## Features

- Elementary gates: AND, OR, XOR, NOT
- Special components: input, output, clock, true, false
- Real 4000-series chips: 4001, 4008 (4-bit adder), 4011, 4013 (dual D flip-flop), 4017, 4030, 4069, 4071, 4081
- Parser for `.nts` circuit files with comments, and bidirectional links between pins
- Interactive shell to set inputs, run a tick and display the state of the circuit

## Design

Every part implements a common `IComponent` interface through an abstract `AComponent` base class. A `Factory` creates components by name, and a `Circuit` owns them and propagates values through `Link` objects between `Pin`s. Complex chips are built by composing simpler components, the same way the real chip is wired.

## My contribution

Team project of 2 at Epitech (2023). I wrote:

- The `IComponent` / `AComponent` hierarchy and the elementary, gate and special components
- The advanced components (4-bit adder, dual flip-flop) and the shared building blocks (sum, D flip-flop)
- The `.nts` file parser, the links between components and the interactive shell
- The Makefile

## Build and run

Requires `g++` and `make`.

```bash
make
./nanotekspice circuit.nts
```

Example `circuit.nts`:

```
# a single AND gate
.chipsets:
input a
input b
and gate
output out

.links:
a:1 gate:1
b:1 gate:2
gate:3 out:1
```

Shell commands:

| Command | Effect |
| --- | --- |
| `a=1` | Set input `a` to 1 (also `0` or `U` for undefined) |
| `simulate` | Run one tick |
| `display` | Print the current tick, inputs and outputs |
| `loop` | Simulate and display until Ctrl+C |
| `exit` | Quit |

## Team

- [Yann Lebib](https://github.com/LebibYann)
- Ethan Nguyen
