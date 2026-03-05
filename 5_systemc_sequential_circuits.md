# Sequential Circuits in SystemC


# 1 Overview

Sequential circuits are digital circuits whose outputs depend on:

Current input values  
Previous system states  

Unlike combinational circuits, sequential circuits contain memory elements.

These memory elements store past information which influences future outputs.


Examples of sequential circuits include:

Flip-flops  
Registers  
Counters  
Shift registers  
Finite state machines  


Sequential circuits are widely used in digital systems such as processors, controllers, and communication systems.



# 2 Characteristics of Sequential Circuits

Sequential circuits differ from combinational circuits in several ways.

Key characteristics include:

Presence of memory elements  
Dependence on clock signals  
Outputs depend on both current inputs and previous states  
State transitions occur based on clock events



# 3 Clock in Sequential Circuits

Most sequential circuits are synchronous and operate using a clock signal.

The clock synchronizes operations across different parts of the system.

Common clock-triggered events include:

Rising edge trigger  
Falling edge trigger


In SystemC, clock signals are modeled using:

sc_clock



Example clock declaration

sc_clock clk("clk", 10, SC_NS)



# 4 Modeling Sequential Circuits in SystemC

Sequential circuits are typically modeled using:

SC_THREAD  
SC_CTHREAD


SC_METHOD may also be used for simple sequential behavior.


Important differences between process types:

SC_METHOD

Does not allow wait statements  
Triggered by sensitivity list  


SC_THREAD

Allows wait statements  
Used to describe sequential behavior  


SC_CTHREAD

Clocked thread process  
Used specifically for synchronous hardware modeling



# 5 D Flip-Flop

A D flip-flop stores a single bit of data.

Inputs

D  
Clock  


Output

Q


Behavior

On the clock edge, the output Q takes the value of input D.


Example source file

examples/d_flipflop.cpp


Concepts demonstrated

Clock sensitivity  
State storage  
Sequential logic modeling



# 6 Register

A register stores multiple bits of data.

Registers are constructed using multiple flip-flops.

Inputs

Data input  
Clock  


Outputs

Stored data values


Registers are used for:

Temporary storage  
Data transfer between modules  
Pipeline stages


Example source file

examples/register.cpp



# 7 Counter

A counter is a sequential circuit that counts clock pulses.

Counters are widely used in digital systems.

Types of counters include:

Up counter  
Down counter  
Up-down counter


Example source file

examples/counter.cpp


Concepts demonstrated

State transitions  
Clock-triggered operations  
Sequential increment operations



# 8 Shift Register

A shift register moves data sequentially through a series of storage elements.

Shift registers are commonly used for:

Serial communication  
Data buffering  
Data alignment


Example source file

examples/shift_register.cpp


Concepts demonstrated

Sequential data movement  
Register chaining  
Clock-driven state updates



# 9 Sequential Circuit Simulation

Simulation of sequential circuits requires a clock signal.

Typical simulation steps include:

Create clock signal

Declare input and output signals

Instantiate the sequential module

Apply stimulus

Run simulation using sc_start()



# Example Repository Structure


systemc-notes

docs
    1_systemc_intro.md
    2_systemc_examples.md
    3_systemc_datatypes.md
    4_systemc_combinational_circuits.md
    5_systemc_sequential_circuits.md

examples
    d_flipflop.cpp
    register.cpp
    counter.cpp
    shift_register.cpp



# Summary

Sequential circuits differ from combinational circuits because they include memory elements.

Their outputs depend on both current inputs and previous states.

SystemC models sequential circuits using clock-driven processes such as:

SC_THREAD  
SC_CTHREAD  

Common sequential components include flip-flops, registers, counters, and shift registers.

These circuits are fundamental for designing processors, controllers, and digital communication systems.
