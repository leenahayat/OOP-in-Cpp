# OOP in C++  
A comprehensive collection of OOP (Object-Oriented Programming) concepts in C++ demonstrated through example files.

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
- Its main job is to **initialize** the object’s data members.  
- It has the **same name** as the class and **no return type**.  
- It’s invoked automatically when an object is created.  

**Types & Variants:**
- **Default Constructor**: No parameters; either user-defined or compiler-provided.
- **Parameterized Constructor**: Accepts arguments to set initial state.
- **Copy Constructor**: Creates a new object as a copy of an existing one; crucial for safe copying when internal pointers/resources are involved.
- **Overloaded Constructors**: You may define multiple constructors with different parameter lists; the compiler chooses based on the arguments.

**Important Notes:**
- If you define any non-default constructor and do **not** define a default one, the compiler will **not** auto-generate a default constructor.
- Use **initialization lists** (in C++) when initializing members, especially for `const` or reference members or base classes, for efficiency.

---

### 2. Copy Constructor & Rule of Three  

- The **copy constructor** is used when creating a new object from an existing object.  
- If the class owns dynamically allocated resources (like a `new` pointer), a shallow default copy may cause problems (double deletion, dangling pointers).  
- **Rule of Three**: If a class defines one of the following, it should probably define all three:
  1. Copy constructor  
  2. Copy assignment operator  
  3. Destructor  
  This ensures correct resource management.

---

### 3. Access Specifiers (Access Modifiers)

These control visibility and encapsulation of class members:

- `public` — accessible from any code that has the object.  
- `private` — accessible only within the class itself (and friends).  
- `protected` — accessible in the class and derived classes (but not from outside).

Using these correctly helps **hide internal representation** and expose only safe interfaces.

---

### 4. Member Functions & Pointers to Objects

- Member functions define the **behavior** of objects.  
- You can call them on objects or via pointers (`obj.method()` or `ptr->method()`).  
- Functions might accept object pointers or references to modify state.  
- Use of `this` pointer: inside a member function, `this` points to the current instance. Useful when parameter names and member names collide, or for chaining methods.

---

### 5. The `this` Keyword

- `this` is a pointer to the current object instance.  
- You can use `this->member` to refer to the object’s members explicitly.  
- It is helpful in disambiguation (when local variable and member names are the same) and in returning the current object (for method chaining).

---

### 6. Dynamic Memory, Pointer Objects & Custom Containers

- **Dynamic allocation** (`new` / `delete`) allows you to allocate memory at runtime on the heap.  
- When using raw pointers and dynamic memory, careful management is needed to avoid memory leaks or invalid access.  
- Objects themselves can be allocated dynamically (`Class *obj = new Class(...)`) and accessed via pointers (`obj->member`).  
- A custom vector implementation shows how to manage capacity, resizing, indexing, removal, etc. It is a demonstration of building a container from scratch with OOP principles.

---

### 7. Operator Overloading

- C++ allows you to **overload** operators (`+`, `-`, `==`, `[]`, etc.) for custom classes.  
- This can make classes behave more naturally (e.g. adding two `Complex` numbers using `+`).  
- Overloading must maintain clear semantics and avoid ambiguity.

---

### 8. Method Overriding & Polymorphism

- **Method Overriding**: In derived classes, you can provide a new implementation of a base class method (same signature).  
- **Polymorphism**: The ability for objects to be treated as instances of their base type, and for the correct method to be called at runtime (if virtual functions are used).  
- This allows writing code that works with base class pointers/references but behaves differently depending on the actual derived class type.

---

### 9. Inheritance

Inheritance enables one class to derive or extend another class:

- **Single Inheritance**: A derived class inherits from one base class.  
- **Multilevel Inheritance**: A class inherits from a derived class, forming a chain (A → B → C).  
- **Multiple Inheritance**: A class inherits from more than one base class (causes ambiguity, diamond problem).  

**Challenges & Solutions:**
- The **diamond problem** arises when two base paths share a common ancestor class, leading to ambiguity.  
- **Virtual inheritance** is a technique to resolve it, ensuring only one instance of the shared base exists.

---

## 🛠 Usage & Navigation

1. Browse through each `.cpp` file named after a concept.  
2. Read the code to see how theory translates into implementation.  
3. Compare different files to see interactions (e.g., inheritance + polymorphism, operator overloading + constructors).  

---

## ✅ Summary

By combining both theory and examples, this repository covers:

- Constructors (default, parameterized, copy, overload)  
- Copy control & Rule of Three  
- Encapsulation & Access modifiers  
- Member functions, pointers, `this` keyword  
- Dynamic memory & custom containers  
- Operator overloading  
- Method overriding & polymorphism  
- Inheritance (single, multilevel, multiple)  

Together, these topics form a solid foundation in **C++ OOP** and help you write clean, maintainable, object-oriented C++ code.

---


Happy coding! 🚀  
