# ⚔️🤝 Brawl or Befriend

**Brawl or Befriend** is a text-based C++ adventure game I created in **December 2023**.

This was one of my first programming projects, built while I was learning the basics of C++ and game logic. The game lets the player choose a character, weapon, and location, then decide whether to fight or befriend the opponent they encounter.

---

## 🎮 Overview

In **Brawl or Befriend**, the player enters a fantasy-style scenario where they meet an opponent based on the location they choose.

Instead of only fighting, the game gives the player two paths:

* ⚔️ **Brawl**: Attack the opponent until their health reaches zero
* 🤝 **Befriend**: Increase the friendship meter until the opponent becomes your friend

The project was designed as a simple command-line game, but it helped me practice important programming concepts in a fun way.

---

## ✨ Features

### 🧍 Character Selection

The player can choose from four characters:

* Charlotte
* Bob
* Monica
* Steve

Each character has their own set of attack and befriending actions.

---

### 🧰 Weapon Selection

The player can choose a weapon before starting the game:

* Umbrella
* Frying pan
* Pencil
* Shoe

This added a fun role-playing element to the game.

---

### 🗺️ Location Selection

The player can choose where the encounter takes place:

* Swamp
* Desert
* Village
* Forest

Each location introduces a different opponent, such as a goblin, mummy, golem, or skeleton.

---

### ⚔️ Brawl Mode

If the player chooses to attack, they enter a turn-based battle.

The player selects attacks, and the opponent responds with a random move. The game continues until either the player or opponent runs out of health.

---

### 🤝 Befriend Mode

If the player chooses to befriend the opponent, they can use friendly actions like hugs, compliments, jokes, gifts, dances, or smiles.

The goal is to raise the friendship meter to 100 before the player loses all their health.

---

### 🎲 Random Opponent Actions

The opponent chooses a random move each turn, making the game less predictable.

Opponent actions include:

* Slice
* Sneak attack
* Double kick
* Power up

---

## 🛠️ Tech Stack

* C++
* Standard input/output
* Functions
* Conditional statements
* Switch statements
* While loops
* Random number generation

---

## 🧠 What I Learned

This project helped me understand the basics of building a complete program from start to finish.

Through this game, I practiced:

* Writing and organizing functions
* Using global variables
* Handling user input
* Creating menus with `cin` and `cout`
* Using `if`, `else if`, and `switch` statements
* Building turn-based game logic
* Using loops to keep the game running
* Adding randomness with `rand()`
* Thinking through win, lose, and draw conditions

This was an important early project because it helped me move from writing small code exercises to creating an interactive program with multiple choices and outcomes.

---

## 🚀 How to Run

### 1. Clone the repository

```bash
git clone https://github.com/your-username/brawl-or-befriend.git
cd brawl-or-befriend
```

### 2. Compile the program

```bash
g++ main.cpp -o brawl-or-befriend
```

### 3. Run the game

```bash
./brawl-or-befriend
```

On Windows, run:

```bash
brawl-or-befriend.exe
```

---

## 📂 Repository Structure

```txt
Brawl-or-Befriend/
├── main.cpp
└── README.md
```

---

## 🕹️ Example Gameplay Flow

```txt
+* Welcome to Brawl or Befriend! *+

Choose your player:
1. Charlotte
2. Bob
3. Monica
4. Steve

Choose your weapon:
1. Umbrella
2. Frying pan
3. Pencil
4. Shoe

Choose your location:
1. Swamp
2. Desert
3. Village
4. Forest

A goblin approaches.
Do you wish to attack or befriend the goblin?
```

From there, the player chooses whether to fight or befriend the opponent.

---

## 🧩 Known Limitations

Since this was one of my earliest C++ projects, the code is written in a beginner-friendly style and has room for improvement.

Some possible improvements include:

* Replacing global variables with classes or structs
* Adding input validation
* Making the weapon choice affect gameplay
* Improving the random number system
* Adding a play-again option
* Preventing health values from going below zero
* Organizing character actions in a cleaner way
* Adding more opponents, locations, and endings

---

## 🔮 Future Improvements

If I were to rebuild this project, I would improve it by adding:

* Object-oriented programming with classes for players and enemies
* A better combat system
* Different stats for each character
* Weapon-based damage bonuses
* More story elements
* Save/load functionality
* A cleaner UI for the command-line experience

---

## 📚 Project Reflection

**Brawl or Befriend** represents one of my first steps into programming and game development.

Although it is a simple command-line project, it helped me understand how code can be used to create interactive experiences. It also gave me practice thinking through logic, choices, outcomes, and user interaction.

This project is part of my early programming journey and shows how I started building complete projects in C++.

---

## 👨‍💻 Author

Created by **Sankalp Khira** in December 2023.
