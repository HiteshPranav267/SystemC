# SystemC Data Types


# 1 Overview

SystemC provides a rich set of data types that are used for modeling hardware systems at different abstraction levels.

These data types allow accurate representation of:

Binary values  
Logic values  
Bit vectors  
Signed integers  
Unsigned integers  

SystemC supports two major categories of data types:

C++ Data Types  
SystemC Data Types


# 2 C++ Data Types Supported in SystemC

SystemC models are written in C++, therefore standard C++ data types can also be used.

Examples include:

int  
char  
short  
long  
float  
double  
bool  

These types are useful for high-level modeling and algorithm development.

However, C++ data types do not accurately represent hardware behavior such as:

Bit-level operations  
Multi-valued logic  
Fixed width arithmetic

For this reason SystemC provides specialized hardware-oriented data types.



# 3 SystemC Data Types for RTL Modeling

SystemC provides a number of data types specifically designed for RTL modeling.

Important SystemC data types include:

sc_bit  
sc_logic  
sc_bv  
sc_lv  
sc_int  
sc_uint  


These types allow designers to represent hardware signals and registers precisely.



# 4 Bit Type (sc_bit)

The sc_bit type represents a single binary value.

Possible values:

0  
1


Example usage

examples/sc_bit_example.cpp


Typical operations supported by sc_bit include:

Logical AND  
Logical OR  
Logical XOR  
Logical NOT  


Key characteristics

Represents a single binary value  
Only supports two states (0 and 1)  
Used for simple binary signals



# 5 Arbitrary Width Bit Vector (sc_bv)

The sc_bv data type represents a vector of bits.

It is essentially a collection of sc_bit values.

The width of the vector is specified when the type is declared.

Example

sc_bv<8>

This creates an 8-bit vector.

Bit indexing

The rightmost index is 0.  
The most significant bit is at index W-1.

For example

sc_bv<8>

Index range

7 down to 0


Example usage

examples/sc_bv_example.cpp


Features of sc_bv

Represents arbitrary width bit vectors  
Supports bit-level operations  
Useful for representing registers and buses



# 6 Methods Supported by sc_bv

The sc_bv type supports several useful methods.

Examples include:

Accessing individual bits  
Assigning values  
Performing bit operations

Typical operations include

Bitwise AND  
Bitwise OR  
Bitwise XOR  
Bitwise NOT  

These operations allow manipulation of bit vectors similar to hardware signals.



# 7 Logic Type (sc_logic)

The sc_logic type represents a multi-valued logic signal.

Possible values include

0  
1  
Z (high impedance)  
X (unknown)


This type is useful for modeling digital logic circuits where signals may have more than two values.

Example usage

examples/sc_logic_example.cpp


Applications of sc_logic

Tri-state buses  
Unknown logic states  
Simulation of digital circuits



# 8 Arbitrary Width Logic Vector (sc_lv)

The sc_lv data type represents a vector of sc_logic values.

Example

sc_lv<8>

This represents an 8-bit logic vector.

Possible values for each bit include

0  
1  
X  
Z


Example usage

examples/sc_lv_example.cpp


Features

Supports multi-valued logic vectors  
Useful for bus modeling and digital simulation  
Allows representation of undefined and high-impedance states



# 9 Signed Integer Type (sc_int)

The sc_int type represents a signed integer.

Maximum width

64 bits


The width can be specified explicitly.

Example

sc_int<16>

This creates a 16-bit signed integer.

Key characteristics

Uses two’s complement representation  
Sign bit located at index W-1  
Least significant bit at index 0


Example usage

examples/sc_int_example.cpp


Important behavior

During arithmetic operations, operands may be expanded to 64 bits.

After computation, results are truncated to the declared width.



# 10 Unsigned Integer Type (sc_uint)

The sc_uint type represents an unsigned integer.

Maximum width

64 bits


Example

sc_uint<8>

This represents an 8-bit unsigned integer.


Key characteristics

No sign bit  
Values are always non-negative  
Least significant bit is index 0


Example usage

examples/sc_uint_example.cpp


Conversions

sc_uint values can be assigned to sc_int and vice versa.

During conversions

Signed values preserve sign bits  
Unsigned values are interpreted as positive numbers



# 11 Resolved Data Types

Resolved data types are used when multiple drivers drive the same signal.

In hardware systems multiple modules may attempt to drive the same signal.

SystemC resolves such conflicts using resolved types.

Resolution determines the final value of the signal based on all drivers.

Resolved types are commonly used for

Shared buses  
Tri-state signals  
Multi-driver communication lines



# 12 User Defined Data Types

SystemC also allows creation of custom data types using:

enum  
struct  


Signals can be declared using these custom types.

However, certain overloaded functions must be provided to allow the data type to be used correctly within SystemC signals.



# 13 Recommended Data Types

For RTL modeling the commonly recommended data types include

sc_bit  
sc_logic  
sc_bv  
sc_lv  
sc_int  
sc_uint  


These types allow accurate representation of hardware signals and operations.


# Summary

SystemC provides specialized data types that allow hardware systems to be modeled accurately.

Important categories include

Bit types  
Logic types  
Bit vectors  
Signed integers  
Unsigned integers  
Resolved types  

These data types enable precise modeling of digital systems, including registers, buses, and logic operations.
