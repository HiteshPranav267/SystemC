# Combinational Circuits in SystemC


# 1 Overview

Combinational circuits are digital circuits in which the output depends only on the current input values.

There is no dependency on past input values or stored states.

Characteristics of combinational circuits:

No memory elements  
No feedback loops  
Output changes immediately with input changes  

Examples of combinational circuits include:

Adders  
Multiplexers  
Decoders  
Encoders  
Comparators  
Logic gates  


In SystemC, combinational circuits are typically modeled using:

SC_METHOD processes


# 2 Modeling Combinational Logic in SystemC

Combinational circuits are implemented using processes that execute whenever input signals change.

The most common construct used is:

SC_METHOD

Important properties:

The process does not contain wait statements  
Execution is triggered by a sensitivity list  
The process must return void  


Example sensitivity list

sensitive << a << b << c

Whenever any of these signals change, the process executes.



# 3 Basic Logic Gates

Logic gates form the basic building blocks of combinational circuits.

Common gates include:

AND  
OR  
NOT  
NAND  
NOR  
XOR  


SystemC implementation examples are provided in:

examples/and_gate.cpp  
examples/or_gate.cpp  
examples/not_gate.cpp  
examples/xor_gate.cpp  


Key modeling concepts demonstrated:

Input and output ports  
SC_METHOD processes  
Sensitivity lists  



# 4 Multiplexer

A multiplexer selects one of several inputs and forwards it to a single output.

Example: 2-to-1 Multiplexer

Inputs

A  
B  
Select


Output

Y


Logic

If Select = 0 → Y = A  
If Select = 1 → Y = B


Source file

examples/mux2.cpp


Concepts demonstrated

Conditional logic  
Combinational decision logic  
Input selection using control signals



# 5 Decoder

A decoder converts binary input signals into multiple output lines.

Example: 2-to-4 Decoder

Inputs

A  
B


Outputs

D0  
D1  
D2  
D3


Logic equations

D0 = A'B'  
D1 = A'B  
D2 = AB'  
D3 = AB


Source file

examples/decoder.cpp


Concepts demonstrated

Multiple outputs  
Boolean expression modeling  
Combinational decoding logic



# 6 Encoder

An encoder performs the opposite operation of a decoder.

It converts multiple input signals into a binary code.

Example: 4-to-2 Encoder

Inputs

D0  
D1  
D2  
D3


Outputs

A  
B


The output represents the binary index of the active input line.

Source file

examples/encoder.cpp


Concepts demonstrated

Priority encoding  
Input-to-binary conversion  
Combinational logic implementation



# 7 Comparator

A comparator compares two binary numbers and determines their relationship.

Inputs

A  
B


Outputs

A_equal_B  
A_greater_B  
A_less_B


Source file

examples/comparator.cpp


Concepts demonstrated

Relational operations  
Boolean comparisons  
Decision logic



# 8 Arithmetic Circuits

Arithmetic circuits perform mathematical operations.

Examples include:

Half Adder  
Full Adder  
Subtractors  


Half adder and full adder implementations were discussed earlier.

Example source files

examples/half_adder.cpp  
examples/full_adder.cpp


Concepts demonstrated

Binary addition  
Carry generation  
Hierarchical module design



# 9 Combinational Circuit Design Flow

The typical process for designing a combinational circuit involves:

1 Define the problem and required inputs/outputs

2 Create a truth table

3 Derive Boolean expressions

4 Simplify the expressions if possible

5 Implement the logic in SystemC

6 Verify the design using simulation



# 10 SystemC Simulation for Combinational Circuits

Simulation allows verification of circuit behavior.

Typical simulation steps:

Create signals for inputs and outputs

Instantiate the module

Connect ports to signals

Apply input stimulus

Run simulation using sc_start()



# Example Directory Structure

systemc-notes

docs
    1_systemc_intro.md
    2_systemc_examples.md
    3_systemc_datatypes.md
    4_systemc_combinational_circuits.md

examples
    and_gate.cpp
    or_gate.cpp
    not_gate.cpp
    xor_gate.cpp
    mux2.cpp
    decoder.cpp
    encoder.cpp
    comparator.cpp



# Summary

Combinational circuits produce outputs that depend only on current inputs.

SystemC models combinational circuits using:

Modules  
Ports  
Signals  
SC_METHOD processes  

Typical examples include logic gates, multiplexers, decoders, encoders, and comparators.

These circuits form the foundation for building more complex digital systems.
