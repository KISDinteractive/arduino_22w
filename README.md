# Interactive Systems [Application] –  Arduino and Prototyping | w22/23

***Disclaimer:*** *This repo documents an Interaction Design course held at [KISD](https://kisd.de) in the winter term 2022/23. In the "sessions" section you can find supporting material to the four sessions for consolidation or rework in case of missed meetings. Please keep in mind that the transcript was not written for (scientific) completeness _and that reading without participation_ in the course is of limited value.
*

---

## Coding Summary of Session 1

_All Arduino Files can be found inside the [src](https://github.com/KISDinteractive/arduino_22w/tree/main/src) folder!_

**Building Blocks of Coding:**

After a short intro into Arduino, Physical Computing, Cybernetics, and System Theory (check the presentation slides for more information on these) - we started using the Arduino Uno and recapped some basic building blocks of coding and started to apply them to the Arduino ecosystem:

* Syntax & Basic Flow
* Variables
* Conditionals
* Loops
* Arrays
* Functions
* Classes, Objects, Libraries

**Basic Syntax**

```c++
// everything after a double slash is a comment, thus not interpreted as code

void setup() { … } // is executed once, when the Arduino gets power 

void loop() { … } // is executed after setup() forever 

{ … } // form a block: hold together functions 

( … ) // parenthesis: hold parameters in order to specify functions

; // semicolon: indicates that a instruction is finished
```

**Basic Flow**

![1668792317802](image/README/1668792317802.png)

**First Examples:**

**0_serialMonitorHelloWorld**

_In order to make the Arduino say "Hello World", we establish serial communication between the Arduino and the computer through the USB cable. This will be very useful later if we want to monitor e.g. values from sensors or we want to debug our code. To initialize the serial channel, we use the command `Serial.begin(9600);` inside the setup(). After we have done that, we can send data and/or text with the `Serial.println(); `command. Text is sent with quotation marks `"..."` , while values and variables are sent without._

```c++
void setup() {
  Serial.begin(9600); //initalizing Serial Communication
}

void loop() {
  Serial.println("Hello World"); // Send the text "Hello World" to the computer in a new line
}
```

**1_blink**

_The real "Hello World" - at least in the realm of physical computing - is not so much a text output, but blinking LEDs. In order to achieve this, we connect a LED (for now, use a blue or green one) to pin 13. For that, we connect the long leg of the LED to pin 13, and the shorter leg of the led to GND, which is located directly above pin 13)._

_Since pin 0 - 13 are GPIO (=General Purpose Input/Output) -pins, we need to tell the Arduino if we are connecting an input device (sensor) or an output device (actuator) by using the `pinMode()` command inside the setup(). `pinMode()` expects two parameters. The first one is the pin number we are referring to, the second one is the mode this pin should behave (INPUT or OUTPUT)._

_Inside the loop() we use the command `digitalWrite()` (again 2 parameters, the first one refers to the pin, and the second one if it should to turned on=HIGH or off=LOW). Since we wouldn't be able to see the blinking if the LED would blink at full speed, we need to throw in a `delay()` after each change of the LED's state. The `delay()` command expects just one parameter, which is the time it should block the further execution of the code. Since the time is defined in milliseconds, we need the value 1000 to wait for a second._

```c++
void setup() {
  pinMode(13, OUTPUT);  // there is an output connected to pin 13
}

void loop() {
  digitalWrite(13, HIGH); // turn led on
  delay(1000);  // blocks futher execution for 1 second (=1000 ms)
  digitalWrite(13, LOW); // turn led of
  delay(1000); // wait again for 1 s
}
```

**2_blinkWithVariables**

_We know variables already from the [fundamentals course](https://github.com/KISDinteractive/fundamentals22w). Now we use 2 of them here to abstract the concrete number we use for specifying the `delay()` function, and the pin number we are referring to inside the `pinMode()`and the `digitalWrite()` functions. Thus, if we would change the LED pin or wanted our blinking to happen with a different speed, we need only to adjust the two values at the top and don't need to deep dive into the setup() and loop()._

```c++
int delayValue = 1000; // create a global variable of type int, named "delayValue", holding the value 1000 
int ledPin = 13; // create a global variable of type int, named "ledPin", holding the value 13 

void setup() {
  pinMode(ledPin, OUTPUT); //using the variable "ledPin" as first parameter of the pinMode() function
}

void loop() {
  digitalWrite(ledPin, HIGH); // using "ledPin" as input for digitalWrite()
  delay(delayValue); // using "delayValue" as input for delay()
  digitalWrite(ledPin, LOW);
  delay(delayValue);
}
```

**3_simpleSOS**

_Exercise: Use your skills to program a LED-driven, visual SOS (3x short, 3x long, 3x short)!_

_Possible Solution:_

```c++
int shortValue = 100;
int longValue = 500;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //s -----
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);

  //0 -----
  digitalWrite(ledPin, HIGH);
  delay(longValue);
  digitalWrite(ledPin, LOW);
  delay(longValue);
  digitalWrite(ledPin, HIGH);
  delay(longValue);
  digitalWrite(ledPin, LOW);
  delay(longValue);
  digitalWrite(ledPin, HIGH);
  delay(longValue);
  digitalWrite(ledPin, LOW);
  delay(longValue);

  //s -----
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);

  delay(1000);
}
```
