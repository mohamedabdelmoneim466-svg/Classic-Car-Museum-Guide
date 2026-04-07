# Classic Car Museum Guide

Simple console application that displays a small interactive menu describing classic cars.

## Requirements

- Microsoft Visual Studio (project provided)
- Or any C++ compiler (C++11 or later)

## Build & run (Visual Studio)

1. Open the `Classic Car Museum Guide` project/solution in Visual Studio.
2. Build the solution (Build > Build Solution).
3. Run the program (Debug > Start Without Debugging or Ctrl+F5).

## Build & run (command line using g++)

From the project folder that contains `main.cpp`:

```powershell
g++ -std=c++11 -O2 -o Museum main.cpp
./Museum
```

## Sample output

Below is an example of the program output (user input shown after the menu):

************************************************
Welcome to the Classic Car Museum!
************************************************
Please select a car to learn more about it:
************************************************
1. Ford Mustang (1964)
************************************************
2. Volkswagen Beetle (1963)
************************************************
3. Dodge Charger (1969)
************************************************
4. Chevrolet Corvette C2 (1963)
************************************************
5. Porsche 911 (1964)
************************************************
6. Exit
************************************************

# User types: `1`

*************************************************
Car name: Ford Mustang (1964)
*************************************************
 * Engine: 4.7L V8
 * Horsepower: 271 hp
 * Top Speed: 120 mph
 * 0-60 mph: 7.5 seconds
 * Notable Features: Iconic design, affordable price, and strong performance.

The program will then return to the menu until the user selects `6` to exit.
