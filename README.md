# A repository containing SystemC explanations and codes for the course Architectures for Hardware Acceleration (UE23EC342BB) at PES University ECE Dept.

## Overview

This repository contains structured notes and example implementations for learning **SystemC** as part of the course **Architectures for Hardware Acceleration (UE23EC342BB)** offered by the **Electronics and Communication Engineering Department at PES University**.

The purpose of this repository is to provide:

* Clear explanations of SystemC concepts used in the course
* Organized notes for revision and reference
* Practical SystemC code examples corresponding to the concepts
* A structured learning path from basic SystemC concepts to hardware modeling

The material follows the flow of the lecture slides used in the course.

---

# How to Use This Repository

This repository is designed to be read **topic by topic in sequence**.

Each topic contains:

* A **documentation file** explaining the concept
* **Example SystemC code** demonstrating the concept

Recommended reading order:

1. SystemC Introduction
2. SystemC Examples
3. SystemC Data Types
4. Combinational Circuits
5. Sequential Circuits

For each topic:

1. Read the explanation in the **docs folder**
2. Then examine the related code examples in the **examples folder**

---

# Repository Structure

The repository is divided into two main sections:

docs
examples

## docs

The **docs directory** contains explanation notes written in Markdown.

Each file explains one major topic covered in the course.

Example:

docs/

* 1_systemc_intro.md
* 2_systemc_examples.md
* 3_systemc_datatypes.md
* 4_systemc_combinational_circuits.md
* 5_systemc_sequential_circuits.md

These files contain:

* Concept explanations
* Important SystemC constructs
* Design methodology
* References to example code files

## examples

The **examples directory** contains SystemC source files that demonstrate the concepts explained in the documentation.

Example structure:

examples/

Basic examples

* half_adder.cpp
* decoder.cpp
* full_adder.cpp
* full_adder_testbench.cpp

SystemC datatype examples

* sc_bit_example.cpp
* sc_bv_example.cpp
* sc_logic_example.cpp
* sc_lv_example.cpp
* sc_int_example.cpp
* sc_uint_example.cpp

Combinational circuit examples

* and_gate.cpp
* or_gate.cpp
* not_gate.cpp
* xor_gate.cpp
* mux2.cpp
* encoder.cpp
* comparator.cpp

Sequential circuit examples

* d_flipflop.cpp
* register.cpp
* counter.cpp
* shift_register.cpp

---

# How Topics Map to Code

Each documentation file references code files that demonstrate the concept.

Example:

SystemC data types
Documentation → docs/3_systemc_datatypes.md
Example programs → examples/sc_bit_example.cpp, sc_bv_example.cpp, etc.

Combinational circuits
Documentation → docs/4_systemc_combinational_circuits.md
Example programs → logic gate implementations and multiplexers.

Sequential circuits
Documentation → docs/5_systemc_sequential_circuits.md
Example programs → flip-flops, registers, counters, and shift registers.

---

# Learning Approach

This repository is designed to follow a **concept → implementation approach**.

Step 1
Understand the concept through the documentation.

Step 2
Look at the SystemC code implementation.

Step 3
Modify the code and run simulations to understand behavior.

---

# Running the Code

SystemC programs typically require:

* A C++ compiler
* SystemC library installation

Compilation is usually done using a command similar to:

g++ program.cpp -lsystemc -o program

Then run using:

./program

---

# Purpose of This Repository

This repository serves as:

* A structured reference for the course
* A learning resource for SystemC modeling
* A practical code collection for digital design examples
* A revision guide before exams

---

# Topics Covered

SystemC basics
Modules, processes, ports, and signals

SystemC data types
Hardware-oriented data types used for modeling signals

Combinational circuits
Logic gates, multiplexers, decoders, encoders, comparators

Sequential circuits
Flip-flops, registers, counters, and shift registers

---

# Notes

This repository is intended for **educational use** as part of the course.

The examples focus on demonstrating **conceptual understanding of SystemC modeling**, rather than full industrial implementations.
