# 🎯 Guess the Number – C++

## 📘 Overview
This project is a **console-based Number Guessing Game** built using **C++**.  
The program randomly generates a number between 1 and 100, and the player has to guess it. After each guess, the game gives feedback — whether the guess is **too high**, **too low**, or **correct** — until the player wins.

This is **Task 1** of my **C++ Internship at CodSoft**.

---

## 🧠 Features
- 🎲 Random number generation  
- 🔁 Continuous guessing until correct  
- 💬 Real-time feedback (too high / too low)  
- 🧮 Displays total number of attempts  
- 💻 Simple and beginner-friendly console interface  

---

## ⚙️ How It Works
1. The program generates a random number between 1 and 100.  
2. The user enters their guess.  
3. The program compares the guess with the target number:  
   - If the guess is higher → *"Too high! Try again."*  
   - If the guess is lower → *"Too low! Try again."*  
   - If the guess is correct → *"You guessed it in X attempts!"*  

---

## 🧩 Code Explanation
Key C++ concepts used in this program:
- `rand()` and `srand(time(0))` for random number generation  
- `do-while` loop for continuous guessing  
- Conditional statements (`if-else`) for feedback logic  
- Basic input/output using `cin` and `cout`  

---
