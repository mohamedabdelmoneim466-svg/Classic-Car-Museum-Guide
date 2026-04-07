<img width="966" height="611" alt="image" src="https://github.com/user-attachments/assets/acf70969-6470-4729-823b-9f10e9216ceb" />

# 🏎️ Classic Car Museum Console App

A simple and interactive C++ console application that serves as a virtual tour of classic cars. Users can browse a curated list of legendary vehicles and view their technical specifications.

## 🌟 Features

- **Interactive Menu:** Easy-to-navigate numbered menu.
- **Detailed Specs:** Provides engine type, horsepower, top speed, 0-60 mph timing, and key features for each car.
- **Input Validation:** Robust error handling to prevent crashes if a user enters non-integer values.
- **Looping System:** Allows users to check multiple cars without restarting the program.

## 🚗 Featured Cars

1. **Ford Mustang (1964)** - The original pony car.
2. **Volkswagen Beetle (1963)** - The cultural icon of reliability.
3. **Dodge Charger (1969)** - The pure American muscle.
4. **Chevrolet Corvette C2 (1963)** - A masterpiece of design and engineering.
5. **Porsche 911 (1964)** - The timeless rear-engine sports car.

## 🛠️ Technical Implementation

- **Language:** C++
- **Logic:** `while` loop for continuous execution and `switch-case` for efficient menu routing.
- **Safety:** Utilizes `std::numeric_limits` to clear input buffers and handle invalid data types.

## 🚀 How to Run

1. Copy the code into a file named `main.cpp`.
2. Compile using a C++ compiler (like G++):
   ```bash
   g++ main.cpp -o CarMuseum
