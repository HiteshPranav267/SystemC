# SystemC Example Designs

This section demonstrates basic SystemC modeling using simple digital circuits.  
The examples illustrate how modules, ports, signals, and processes are used to build hierarchical hardware models.

Example source files are located in the **examples/** directory.


# 1 Half Adder Example

A half adder performs addition of two binary inputs.

Inputs  
A  
B  

Outputs  
Sum  
Carry


Truth Table

A  B | Sum Carry  
0  0 |  0   0  
0  1 |  1   0  
1  0 |  1   0  
1  1 |  0   1  


Sum = A XOR B  
Carry = A AND B


## SystemC Implementation

The half adder is implemented as a SystemC module using:

Ports  
Processes  
Sensitivity list


Source file

examples/half_adder.cpp


Key Concepts Demonstrated

- SC_MODULE declaration
- Input and output ports
- SC_METHOD process
- Sensitivity list
- Basic combinational logic



# 2 Two to Four Decoder Example

A decoder converts binary input signals into multiple output lines.

For a 2:4 decoder:

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


Key Concepts Demonstrated

- Combinational logic modeling
- Multiple outputs
- Sensitivity to multiple inputs



# 3 Structural Modeling Example
## Full Adder Using Half Adders

A full adder adds three inputs.

Inputs

A  
B  
Carry_in  

Outputs

Sum  
Carry_out  


A full adder can be constructed using two half adders and an OR gate.


Architecture

Half Adder 1  
Half Adder 2  
OR Gate


Connections

Half Adder 1  
Inputs: A, B  
Outputs: S1, C1  

Half Adder 2  
Inputs: S1, Carry_in  
Outputs: Sum, C2  

Carry_out = C1 OR C2


Source file

examples/full_adder.cpp


Key Concepts Demonstrated

- Hierarchical module design
- Module instantiation
- Internal signals
- Structural modeling



# 4 SystemC Testbench Example

A SystemC testbench is used to verify the functionality of a design.

A typical testbench consists of three components.


Driver

Generates stimulus for the design.


Design Under Test (DUT)

The hardware module being tested.


Monitor

Observes and prints output values.


Testbench Architecture

Driver → DUT → Monitor


The testbench applies different input combinations to the design and observes the outputs.


Source file

examples/full_adder_testbench.cpp


Key Concepts Demonstrated

- sc_main entry point
- Signal creation
- Module instantiation
- Simulation execution using sc_start()



# Directory Structure

The repository structure for these examples is as follows


systemc_examples

docs
    2_systemc_examples.md

examples
    half_adder.cpp
    decoder.cpp
    full_adder.cpp
    full_adder_testbench.cpp



# Summary

These examples demonstrate fundamental SystemC modeling techniques:

Module creation  
Process definition  
Sensitivity lists  
Signal-based communication  
Hierarchical design  
Simulation using testbenches


These concepts form the foundation for building larger SystemC-based hardware system models.
