# OOP in C++  
A comprehensive collection of Object-Oriented Programming (OOP) concepts in C++ demonstrated through example files.

---

## 📂 Repository Structure & Purpose

This repository is organized by concept. Each `.cpp` file demonstrates a particular OOP feature or technique.  
You’ll find:

- Constructors  
- Copy Constructors  
- Multiple / Overloaded Constructors  
- Access Modifiers  
- Functions inside classes & pointers  
- `this` keyword  
- User-defined data types  
- Dynamic memory / pointer objects  
- Custom vector implementation  
- Operator Overloading  
- Method Overriding  
- Polymorphism  
- Inheritance (single, multilevel, multiple)  

Use the files to see how these concepts are practically applied, while this README gives you the theoretical foundation.

---

## 🧱 Core OOP Concepts Explained

### 1. Constructors  
- A **constructor** is a special method that is called when an object is instantiated.  
- It is used to **initialize** an object’s data members.  
- Has the **same name** as the class and **no return type**.  
- Invoked automatically when an object is created.  

**Types & Variants:**
- **Default Constructor**: No parameters.  
- **Parameterized Constructor**: Accepts arguments to set initial state.  
- **Copy Constructor**: Creates a new object as a copy of another object.  
- **Overloaded Constructors**: Multiple constructors with different parameter lists.

---

### 2. Copy Constructor & Rule of Three  

- The **copy constructor** is called when creating a new object from an existing one.  
- Needed for classes that manage **dynamic resources**.  
- **Rule of Three**: If you define one of these, define all three:  
  - Copy constructor  
  - Copy assignment operator  
  - Destructor  

---

### 3. Access Specifiers (Access Modifiers)

Control visibility of class members:

- `public` → accessible from anywhere.  
- `private` → accessible only within the class.  
- `protected` → accessible in class + derived classes.  

This supports **encapsulation**.

---

### 4. Member Functions & Pointers to Objects

- Define the **behavior** of objects.  
- Can be called using `obj.method()` or `ptr->method()`.  
- The `this` pointer refers to the current instance.

---

### 5. The `this` Keyword

- A pointer to the current object instance.  
- Useful for disambiguation between member variables and parameters.  
- Enables **method chaining** by returning `*this`.

---

### 6. Dynamic Memory & Custom Containers

- Dynamic allocation with `new` / `delete`.  
- Objects can be allocated dynamically and accessed via pointers.  
- Custom vector implementation demonstrates building containers with resizing and indexing.

---

### 7. Operator Overloading

- Allows operators (`+`, `-`, `==`, `[]`, etc.) to work with user-defined classes.  
- Makes classes more **intuitive** to use.  
- Example: Overloading `+` for complex numbers.

---

### 8. Method Overriding & Polymorphism

- **Method Overriding**: Redefining base class methods in derived classes.  
- **Polymorphism**: Same interface, different behavior at runtime using **virtual functions**.  

---

### 9. Inheritance

- **Single Inheritance** → one base, one derived.  
- **Multilevel Inheritance** → chain of inheritance.  
- **Multiple Inheritance** → one class inherits from multiple bases.  

**Diamond Problem** is resolved using **virtual inheritance**.

---

## 🛠 Usage & Navigation

1. Browse `.cpp` files by concept.  
2. Read theory in this README.  
3. Run files individually to see outputs.  

---

## ✅ Summary

This repository covers:  

- Constructors (default, parameterized, copy, overload)  
- Copy control & Rule of Three  
- Encapsulation (access modifiers)  
- Member functions, pointers, `this` keyword  
- Dynamic memory & custom containers  
- Operator overloading  
- Method overriding & polymorphism  
- Inheritance (single, multilevel, multiple)  

Together, these form the **four pillars of OOP** in C++:  
- **Encapsulation**  
- **Abstraction**  
- **Inheritance**  
- **Polymorphism**

---

## 📌 Tips for Further Improvement

- Add **UML class diagrams** to visualize relationships.  
- Include **comments in code files** linking theory to implementation.  
- Add **tests or example usage** for each concept.  
- Expand into **virtual destructors, abstract classes, interfaces**.  

---

🚀 Happy Learning & Coding in C++ OOP!  
