## 📘 Object Oriented Programming in C++ – Login Form Application

This project was created in **Semester 3 (CA408: Object Oriented Programming Using C++)** as a case-study project.  
It implements a console-based **Login, Registration, and Forgot-Password system** using fundamental OOP concepts such as classes, objects, encapsulation, file handling, and modular programming in C++.

The application stores user details in multiple text files and verifies credentials during login using file comparison logic.

---

## 📘 Project Overview

This console application performs the following operations:

### ✔ User Registration
- Stores:
  - Name  
  - Username  
  - Mobile Number  
  - Password  
- Saves data into files like:
  - `First_file.txt`
  - `user_name.txt`
  - `name.txt`
  - `number.txt`
  - `pass_word.txt`

### ✔ User Login
- Takes username & password as input  
- Searches the stored records  
- Prints whether login is successful or failed  

### ✔ Forgot Password
- Verifies:
  - Name  
  - Username  
  - Mobile number  
- If details match, shows the stored password

### ✔ UI & Formatting
- Uses `system("Color 4E")` (Windows console color)
- Prints a custom ASCII logo with `logo()`  
- Clean, menu-driven interface

---

## 📂 Repository Structure

```text
oop-login-system/
├── docs/
│   └── OOP_Login_Case_Study.pdf
|   └── sample_run.png
├── src/
│   └── login_app.cpp
└── README.md
```
---

## 🛠️ Features Implemented
- Object-oriented programming with C++ classes:
  - reg – registration
  - login – login & credential check
  - for_pass – forgot password flow
- File handling using fstream
- Line-by-line reading & string comparison
- Console-based menu system
- Basic credential verification logic

---

## ▶️ How to Run

**Using g++ (MinGW) in terminal:**
```bash
cd src
g++ login_app.cpp -o login_app
login_app.exe
```

**Using CodeBlocks / Dev-C++ / Visual Studio / VS Code:**
- Open oop-login-system as a project/folder
- Add src/login_app.cpp to the project
- Build and run it

---

## 🧪 Sample Output
```text
 ---------------------------------------------
 ---------------------------------------------
                                             
            YOU'RE WELCOME ANY TIME.         
                                             
 ---------------------------------------------
 ---------------------------------------------

 =.=.  >>Press 1 For LOGIN:
 =.=.  >>Press 2 For REG.:
 =.=.  >>Press 3 For FORGOTT PASSWORD:
 =.=.  >>Press 4 For EXIT:

Enter your choice:
```
---

## Academic Context
- **Course:** CA408 – Object Oriented Programming Using C++
- **Semester:** 3
- **Title:** Login Form Application (Case Study)
- **Focus:** Applying OOP & file handling to build a simple authentication system.

---

## 📄 License
This project is for learning and academic purposes.
