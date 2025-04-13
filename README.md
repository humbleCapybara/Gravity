# 🎱 Gravity Ball with Raylib

This is a simple project using the [Raylib](https://www.raylib.com/) library where a ball drops due to gravity and simulates basic physics. It's a great starting point if you're learning game development or physics simulation in C.

## 🚀 Features

- Simple physics-based gravity simulation
- Ball drops and bounces
- Clean Raylib rendering
- Beginner-friendly code

---

## 🛠️ Built With

- **Language:** C  
- **Library:** [Raylib](https://www.raylib.com/) — a simple and easy-to-use library to learn game programming

---

## 📂 Project Structure

Gravity-Ball/ <br>
├── main.c # Main source code <br>
├── README.md # This file <br>
└── Makefile / build <br>


---

## 🧪 How to Run

### Prerequisites:
- [Raylib installed](https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux)
- GCC or any C compiler

### Compile and Run:
```bash
gcc main.c -o gravity -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
./gravity
