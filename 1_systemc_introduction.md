# Introduction to SystemC

## Contents
- Introduction to SystemC
- SystemC Basics
- SystemC Capabilities


# 1. Introduction to SystemC

Modern digital system designs are becoming increasingly:

- Larger in size
- Faster in operating speed
- More complex in functionality

Because of this rapid growth in complexity, describing systems only at the hardware level (such as RTL or gate level) is no longer sufficient.

Designers must describe systems at higher levels of abstraction. This allows engineers to model and evaluate system behavior before detailed implementation.

Using higher levels of abstraction enables the following:

Faster Simulation  
High-level models run significantly faster than low-level RTL or gate-level simulations.

Hardware / Software Co-Simulation  
Both hardware and software components of a system can be modeled and simulated together.

Architectural Exploration  
Designers can experiment with different architectural choices and system organizations before committing to implementation.


# 2. SystemC Basics

SystemC was developed to provide a unified language framework for system-level modeling and design.

The key motivations behind the development and standardization of SystemC include:

System Level Design  
Allows modeling of entire systems rather than only hardware blocks.

Describing Hardware Architectures  
SystemC enables modeling of processors, accelerators, buses, and memory systems.

Describing Software Architectures  
Software components interacting with hardware can also be represented.

Verification  
SystemC models can be used to verify system behavior before implementation.

IP Exchange  
SystemC enables reusable IP blocks that can be shared and integrated across different designs.


# 3. SystemC Capabilities


## Modules

Modules are the fundamental building blocks of a SystemC design.

A module is defined using a module class called SC_MODULE.

A module can contain:

- Processes
- Ports
- Signals
- Other modules

This allows hierarchical system modeling where large systems are constructed from smaller modules.


## Processes

Processes describe the functionality or behavior of a module.

Processes exist inside modules and represent concurrent hardware activities.

There are two types of SystemC processes:

SC_METHOD  
A lightweight process used for combinational behavior.

SC_THREAD  
A process that can suspend and resume execution and is used to model sequential behavior.

Processes define concurrent behavior, meaning multiple processes can execute simultaneously.

Processes themselves are not hierarchical.


## Ports

Ports provide the interface through which modules communicate with each other.

A module can contain multiple ports.

The three basic types of ports are:

Input ports  
Receive signals from other modules.

Output ports  
Send signals to other modules.

Inout ports  
Allow bidirectional communication.

SystemC also supports creation of custom ports using user-defined interfaces.


## Signals

Signals carry values between modules and processes.

They are used to connect different modules together.

Signals allow communication between processes and module instances.

There are two types of signals:

Resolved signals  
These signals can have multiple drivers.

Unresolved signals  
These signals can only have a single driver.

Signals update after a delta delay similar to traditional HDL simulators.


## Rich Set of Data Types

SystemC supports a wide variety of data types to support multiple design domains and abstraction levels.

Supported data types include:

Fixed precision data types for fast simulation  
Arbitrary precision integers for large numbers  
Fixed-point data types used in DSP applications  

SystemC also supports:

2-value logic  
4-value logic  

Additionally, any standard C++ data type can be used within SystemC models.


## Clocks

SystemC provides built-in support for clocks.

Clocks allow modeling of synchronous digital systems and sequential circuits.


## Event-Based Simulation

SystemC uses a lightweight event-based simulation kernel.

This allows efficient simulation of system behavior and provides high simulation speed.

Event-based simulation activates processes only when relevant events occur.


## Multiple Abstraction Levels

SystemC supports modeling at different abstraction levels.

Designs can start at a very high level and gradually move toward detailed hardware descriptions.

SystemC supports models ranging from:

High-level functional models  
Untimed behavioral models  
Clock cycle-accurate models  
RTL-level models

Designs can be refined iteratively from high-level models down to RTL implementations.


## Communication Protocols

SystemC provides mechanisms to model communication protocols and interfaces at different levels of abstraction.

This enables designers to represent communication between system components accurately.


## Debugging Support

SystemC allows runtime error checking during simulation.

Debugging can be performed using standard C++ debugging tools.


## Waveform Tracing

SystemC supports waveform tracing for analyzing simulation results.

Simulation results can be saved in several waveform formats including:

VCD (Value Change Dump)  
WIF (Waveform Interchange Format)  
ISDB (Integrated Signal Data Base)


## Concurrency Modeling

SystemC supports modeling of concurrency and interactions between processes.

Multiple processes can execute simultaneously, mimicking real hardware behavior.


## Integration with C/C++

SystemC can integrate with existing IP written in C or C++.

This allows reuse of existing code and models.


## RTL Synthesis Support

SystemC supports flows that enable RTL synthesis from SystemC models.


## Embedded Processor Code Generation

SystemC models can also be used to generate code for embedded processors.


## Ease of Modeling

SystemC is based on the C++ programming language.

This makes it easier for software engineers and hardware designers to use the same language for system modeling.


## Hardware and Software Modeling

SystemC enables designers to describe both hardware and software using a single language.

This simplifies system-level design and verification.


## Communication Mechanisms

Communication between modules and processes is supported through:

Channels  
Interfaces  
Events


## System Level Design

SystemC facilitates system-level design tasks such as:

Communication refinement  
Mapping system specifications to hardware and software implementations


## Models of Computation

SystemC supports different models of computation depending on:

Time representation  
Process activation mechanisms  
Communication between processes

Examples of supported computation models include:

Kahn process networks  
Static multi-rate dataflow  
Dynamic multi-rate dataflow  
Communicating sequential processes


## System Specification and Verification

SystemC allows development and verification of complex system specifications.

It also supports refinement of system specifications into mixed hardware and software implementations.


## Waveform Formats

VCD  
Value Change Dump format defined in IEEE Standard 1364.

WIF  
Waveform Interchange Format.

ISDB  
Integrated Signal Data Base.
