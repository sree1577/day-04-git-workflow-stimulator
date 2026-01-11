# Git Workflow Simulator (C++)

This project simulates a real-world Git collaboration workflow using a modular C++ codebase.  
It demonstrates how features can be added incrementally in a forked repository while preserving existing functionality.

---

## 📌 Overview
The Git Workflow Simulator is a console-based C++ application designed to mimic how different features are developed and managed in a collaborative Git environment.  
The project follows best practices such as modular design, feature-based development, and clean extension of existing code.

---

## ✨ Features
- Core workflow simulation (Login, Dashboard)
- Profile feature added as an extension
- Settings feature added as an extension
- Feature toggle system to enable/disable features
- Modular design using header (`.h`) and source (`.cpp`) files
- Safe feature additions without modifying original logic

---

## 🧠 Concepts Practiced
- Forking and extending existing repositories
- Feature-based development
- Modular programming in C++
- Header and source file separation
- Maintaining backward compatibility
- Clean and readable code structure
- Git collaboration workflow simulation

---

## 🛠 Tech Stack
- C++
- Git
- GitHub

---

## ▶ How to Run

### Compile
```bash
g++ main.cpp features/profile.cpp features/settings.cpp features/feature_toggle.cpp -o app
./app

---

### Output

Welcome to Git Workflow Simulator (C++)
Login feature active
Dashboard feature active
Profile feature active
Settings feature active

Feature Status:
Login: ON
Dashboard: ON
Profile: ON
Settings: OFF