# OOP in C++

This repository demonstrates and explores important **Object-Oriented Programming (OOP)** concepts in **C++** using multiple example files.  
Below are the theoretical explanations of the key concepts covered.

---

## 🚀 Constructors

### Definition & Purpose
A **constructor** is a special member function of a class that is automatically invoked whenever an object of that class is created.  
It is responsible for **initializing the new object**.

### Characteristics of Constructors
- They have the **same name as the class**.  
- They do **not have a return type**, not even `void`.  
- Usually declared **public**, unless object creation needs to be restricted.  
- They are **automatically called** when an object is created.  

### Types of Constructors
1. **Default Constructor**  
   - Can be called with no parameters.  
   - If not provided, the compiler generates an implicit one.  

2. **Parameterized Constructor**  
   - Takes arguments to initialize objects with specific values.  

3. **Copy Constructor**  
   - Creates a new object as a **copy of an existing object**.  
   - The compiler provides a default shallow copy constructor, but a user-defined one may be needed for classes that handle **dynamic memory**.  

### Constructor Overloading
- You can define **multiple constructors** with different parameter lists.  
- This allows flexible ways of creating and initializing objects.  

### Initialization Lists
- A more efficient way to initialize data members.  
- Especially required for `const` members, references, or base class initialization.  

### Important Note
- If you define **any non-default constructor** and don’t define a default one, the compiler will **not** generate a default constructor automatically.

---

## 📋 Copy Constructor & Rule of Three

### Copy Constructor Recap
- Used to make a **new object** by copying the state of an existing one.  
- Critical when classes manage resources (memory, file handles, etc.), as a **shallow copy** may cause bugs like **double deletion**.  

### Rule of Three
If a class defines one of the following, it should generally define all three:
1. Copy Constructor  
2. Copy Assignment Operator  
3. Destructor  

This ensures safe and consistent **resource management**.  

---

## 🔒 Access Modifiers

Access specifiers control the visibility of class members:

- **public** → accessible from anywhere the object is visible.  
- **private** → accessible only within the class itself.  
- **protected** → accessible in the class and its derived (child) classes.  

They enforce **encapsulation**, hiding internal state while exposing only necessary behavior.

---

## 🧬 Inheritance

### Definition
**Inheritance** allows one class (derived/child) to acquire the properties and behaviors of another class (base/parent).  
This promotes **code reuse** and models real-world “is-a” relationships.

### Modes of Inheritance
- **Public** → base public/protected remain public/protected in derived.  
- **Protected** → base public/protected become protected in derived.  
- **Private** → base public/protected become private in derived.  

### Types of Inheritance
- **Single** → One derived class inherits from one base class.  
- **Multiple** → One class inherits from more than one base class.  
- **Multilevel** → A class inherits from a class that is itself derived from another.  
- **Hierarchical** → Multiple classes inherit from a single base class.  
- **Hybrid** → Combination of multiple inheritance types.  

### Problems & Solutions
- **Diamond Problem** → Ambiguity when multiple inheritance paths lead to the same base.  
- **Virtual Inheritance** → Used to resolve the diamond problem by ensuring only one shared base subobject.

---

## ⚡ Other Key Concepts

### `this` Keyword
- Refers to the **current object**.  
- Useful for disambiguating data members from parameters.  
- Supports **method chaining** by returning `*this`.

### Dynamic Memory & Resource Management
- Objects that allocate resources (`new`, file handles, sockets) must release them properly (`delete`, `close`).  
- Resource-managing classes should follow the **Rule of Three** to prevent memory leaks and double frees.  

### Custom Data Structures
- Building custom containers (like a vector) illustrates how to handle:  
  - Internal capacity  
  - Resizing  
  - Safe indexing  
  - Correct use of constructors, destructors, and copy semantics  

---

## ✅ Summary
This repository covers the core OOP principles in C++:
- Constructors (Default, Parameterized, Copy, Overloaded)  
- Copy Constructor, Rule of Three  
- Access Modifiers (Encapsulation)  
- Inheritance (types, modes, problems, solutions)  
- Other essentials (`this`, dynamic memory, custom data structures)  

Together, these concepts form the **foundation of modern C++ OOP programming**.
