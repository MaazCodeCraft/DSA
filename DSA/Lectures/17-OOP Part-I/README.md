# 17 - OOP Part-I

## Overview

Introduction to Object-Oriented Programming (OOP) concepts in C++. This module covers fundamental OOP principles including classes, objects, constructors, inheritance, and various OOP relationships essential for building robust and maintainable software systems.

## Topics Covered

- Classes and objects fundamentals
- Access modifiers (public, private, protected)
- Constructors (default, parameterized, copy)
- This pointer and memory management
- Setters and getters (encapsulation)
- Shallow vs deep copy concepts
- Destructors and object lifecycle
- Const functions and immutability
- Object relationships (composition, aggregation)
- Inheritance types and modes

## Questions Solved

1. **Classes and Objects** - Basic class definition and object creation

   **Problem Statement**: Create a Student class with properties and methods to demonstrate basic class structure, object instantiation, and member function calls. Understanding the fundamental building blocks of OOP.

   **Interview Context**: "Explain classes and objects. How do you define a class and create objects in C++?"

   **Example**: Student class with name, rollNo, cgpa
   Output: 
   ```
   Name: Maaz Ur Rahman
   Roll No: 302
   CGPA: 95%
   Name: Ali
   Roll No: 303
   CGPA: 93%
   ```

2. **Access Modifiers** - Understanding public, private, and protected access

   **Problem Statement**: Demonstrate different access levels in classes and how they control member visibility. Understanding encapsulation principles and data hiding mechanisms.

   **Interview Context**: "What are access modifiers? Explain the difference between public, private, and protected members."

   **Example**: Class with different access levels
   Output: `Compilation errors for accessing private members`

3. **Default Constructor** - Automatic constructor creation and usage

   **Problem Statement**: Understand how default constructors work, when they're called, and how to define custom default constructors for object initialization.

   **Interview Context**: "What is a default constructor? When is it called automatically?"

   **Example**: Default constructor call
   Output: `Default constructor are called.`

4. **Parameterized Constructor** - Constructor with parameters

   **Problem Statement**: Create constructors that accept parameters for object initialization. Understanding constructor overloading and different initialization approaches.

   **Interview Context**: "How do you create constructors with parameters? Can you have multiple constructors?"

   **Example**: Multiple constructor types
   Output:
   ```
   Default constructor are called.
   Before Setting Values.
   Name: 
   Roll No: 0
   After Setting Values.
   Name: Maaz Ur Rahman
   Roll No: 302
   Parameterized constructor are called.
   Name: Ali
   Roll No: 300
   ```

5. **This Pointer** - Understanding object self-reference

   **Problem Statement**: Explore the this pointer concept for resolving naming conflicts and returning object references. Understanding how objects reference themselves.

   **Interview Context**: "What is the this pointer? When and why would you use it?"

   **Example**: This pointer usage for parameter disambiguation
   Output: `Object initialization with this pointer`

6. **Setters and Getters** - Encapsulation through accessor methods

   **Problem Statement**: Implement data validation and controlled access to private members using setter and getter methods. Demonstrating encapsulation principles.

   **Interview Context**: "Why use setters and getters? How do they provide data validation and encapsulation?"

   **Example**: Validation in setters
   Output:
   ```
   Parameterized constructor are called.
   Name: Maaz Ur Rahman
   CNIC No: 1320152520121
   Default constructor are called.
   Name must be at least 3 character long.
   
   123321789123
   ```

7. **Copy Constructor** - Object copying mechanisms

   **Problem Statement**: Understand how objects are copied and when copy constructors are invoked. Exploring default vs custom copy constructor behavior.

   **Interview Context**: "What is a copy constructor? When is it called automatically?"

   **Example**: Copy constructor invocation
   Output:
   ```
   Parameterized constructor are called.
   Name: Ali
   Roll No: 300
   Copy constructor are called.
   Name: Ali
   Roll No: 305
   Name: Ali
   Roll No: 300
   ```

8. **Shallow Copy** - Understanding shallow copying issues

   **Problem Statement**: Demonstrate shallow copy problems with dynamic memory allocation and pointer members. Understanding when default copy constructor fails.

   **Interview Context**: "What is shallow copy? What problems can it cause with dynamic memory?"

   **Example**: Shallow copy with pointers
   Output: `Memory sharing issues between objects`

9. **Deep Copy** - Implementing proper object copying

   **Problem Statement**: Implement deep copy to handle dynamic memory properly in copy operations. Understanding how to avoid shallow copy problems.

   **Interview Context**: "How do you implement deep copy? Why is it necessary for classes with dynamic memory?"

   **Example**: Deep copy implementation
   Output: `Independent memory allocation for each object`

10. **Destructor** - Object cleanup and resource management

    **Problem Statement**: Understand destructor calls, automatic cleanup, and proper resource deallocation. Managing object lifecycle and memory cleanup.

    **Interview Context**: "What is a destructor? When is it called and why is it important?"

    **Example**: Destructor calls
    Output: `Destructor called for object cleanup`

11. **Const Functions** - Immutable member functions

    **Problem Statement**: Create const member functions that don't modify object state. Understanding const correctness and immutability in OOP.

    **Interview Context**: "What are const member functions? Why would you make a function const?"

    **Example**: Const function usage
    Output: `Const functions preserve object state`

12. **Composition** - "Has-a" relationship between classes

    **Problem Statement**: Implement composition where one class contains objects of another class. Understanding strong ownership relationships.

    **Interview Context**: "What is composition? How is it different from inheritance?"

    **Example**: Car has Engine relationship
    Output: `Composition relationship demonstration`

13. **Aggregation** - Weak "has-a" relationship

    **Problem Statement**: Implement aggregation where objects can exist independently. Understanding loose coupling between classes.

    **Interview Context**: "What is aggregation? How does it differ from composition?"

    **Example**: Department has Students relationship
    Output: `Aggregation relationship demonstration`

14. **Inheritance** - Basic "is-a" relationship

    **Problem Statement**: Implement basic inheritance to demonstrate code reuse and hierarchical relationships. Understanding parent-child class relationships.

    **Interview Context**: "What is inheritance? How does it promote code reuse?"

    **Example**: Animal-Fish inheritance
    Output: `Basic inheritance structure`

15. **Mode of Inheritance** - Public, private, protected inheritance

    **Problem Statement**: Explore different inheritance modes and their effects on member accessibility. Understanding inheritance access control.

    **Interview Context**: "What are different modes of inheritance? How do they affect member access?"

    **Example**: Different inheritance modes
    Output: `Access level changes with inheritance modes`

16. **Single Inheritance** - One parent, one child relationship

    **Problem Statement**: Implement single inheritance with proper constructor calls and member access. Understanding simple inheritance hierarchy.

    **Interview Context**: "Implement single inheritance. How are constructors called in inheritance?"

    **Example**: Single inheritance chain
    Output: `Parent and child constructor calls`

17. **Multi-level Inheritance** - Chain of inheritance

    **Problem Statement**: Create inheritance chain with multiple levels. Understanding constructor/destructor call order in inheritance hierarchy.

    **Interview Context**: "What is multi-level inheritance? What's the order of constructor calls?"

    **Example**: Grandparent-Parent-Child chain
    Output: `Multi-level constructor call sequence`

18. **Multiple Inheritance** - Multiple parent classes

    **Problem Statement**: Implement multiple inheritance where a class inherits from multiple base classes. Understanding constructor order and diamond problem basics.

    **Interview Context**: "What is multiple inheritance? What challenges does it present?"

    **Example**: TA inherits from both Student and Teacher
    Output:
    ```
    Student object has been created.
    Teacher object has been created.
    TA object has been created.
    Maaz
    300
    3.87
    100000
    CS
    TA object has been destroy.
    Teacher object has been destroy.
    Student object has been destroy.
    ```

19. **Hierarchical Inheritance** - One parent, multiple children

    **Problem Statement**: Implement hierarchical inheritance where multiple classes inherit from single base class. Understanding shared base class functionality.

    **Interview Context**: "What is hierarchical inheritance? How do multiple derived classes share base functionality?"

    **Example**: Multiple classes inheriting from Animal
    Output: `Hierarchical inheritance structure`