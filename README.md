# Interactive Systems [Application] –  Winter 22/23

# Arduino and Prototyping

***Disclaimer:*** *This repo documents an Interaction Design course held at [KISD](https://kisd.de) in the winter term 2022/23. In the "sessions" section you can find supporting material to the four sessions for consolidation or rework in case of missed meetings. Please keep in mind that the transcript was not written for (scientific) completeness _and that reading without participation_ in the course is of limited value.
*

## Coding Summary of Session 1

**All Arduino Files can be found inside the _src_ folder!**

### Building Blocks of Coding

After a short intro into arduino, cybernetics, and system theory we started using the Arduino Uno and recapped some basic building blocks of coding and started to apply them to the arduino ecosystem:

* Syntax & Basic Flow
* Variables
* Conditionals
* Loops
* Arrays
* Functions
* Classes, Objects, Libraries

### Basic Syntax

```arduino
// everything after a double slash is a comment, thus not interpreted as code

void setup() { … } // is executed once, when the Arduino gets power 

void loop() { … } // is executed after setup() forever 

{ … } // form a block: hold together functions 

( … ) // parenthesis: hold parameters in order to specify functions

; // semicolon: indicates that a instruction is finished
```

### Basic Flow

![1668792317802](image/README/1668792317802.png)

### First Examples

**Serial_Monitor_Hello World**
