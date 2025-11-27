# 18 - OOP Part-II

## Overview

Advanced Object-Oriented Programming concepts in C++. This module covers polymorphism, abstraction, static members, friend functions, and templates - essential for building sophisticated and flexible software systems with advanced OOP features.

## Topics Covered

- Polymorphism (compile-time and runtime)
- Function overloading and operator overloading
- Virtual functions and function overriding
- Pure virtual functions and abstraction
- Static keyword applications
- Friend functions and classes
- Function and class templates
- Generic programming concepts

## Questions Solved

1. **Polymorphism - Function Overloading** - Compile-time polymorphism

   **Problem Statement**: Implement function overloading to demonstrate compile-time polymorphism. Multiple functions with same name but different parameters, resolved at compile time based on function signature.

   **Interview Context**: "What is function overloading? How does the compiler resolve overloaded functions?"

   **Example**: Overloaded show() functions for int and string
   Output: 
   ```
   int : 25
   string : Hello
   ```

2. **Polymorphism - Operator Overloading** - Custom operator behavior

   **Problem Statement**: Implement operator overloading to define custom behavior for operators with user-defined classes. Understanding how to make objects work with standard operators.

   **Interview Context**: "How do you overload operators in C++? What operators can and cannot be overloaded?"

   **Example**: Overloading + operator for custom class
   Output: `Custom addition operation result`

3. **Polymorphism - Runtime Function Overriding** - Method overriding without virtual

   **Problem Statement**: Demonstrate function overriding in inheritance without virtual keyword. Understanding early binding and how base class pointers behave with derived class objects.

   **Interview Context**: "What happens when you override a function without virtual keyword? Explain early vs late binding."

   **Example**: Function overriding without virtual
   Output: `Base class function called (early binding)`

4. **Polymorphism - Runtime Virtual Function** - Late binding with virtual

   **Problem Statement**: Implement virtual functions to achieve runtime polymorphism. Understanding how virtual keyword enables late binding and proper function resolution at runtime.

   **Interview Context**: "What are virtual functions? How do they enable runtime polymorphism?"

   **Example**: Virtual function demonstration
   Output:
   ```
   Child hello
   Child hello
   ```

5. **Abstraction - Pure Virtual Function** - Abstract classes and interfaces

   **Problem Statement**: Create abstract classes using pure virtual functions to define interfaces. Understanding abstraction principles and enforcing implementation in derived classes.

   **Interview Context**: "What are pure virtual functions? How do they create abstract classes?"

   **Example**: Abstract Shape class with concrete implementations
   Output:
   ```
   Draw Circle
   Draw Square
   ```

6. **Static Keyword in Function** - Static local variables

   **Problem Statement**: Demonstrate static variables in functions that retain their values between function calls. Understanding static storage duration and initialization behavior.

   **Interview Context**: "What does static keyword do in functions? How do static variables behave?"

   **Example**: Static counter in function
   Output: `Counter increments across function calls`

7. **Static Keyword in Class** - Static data members

   **Problem Statement**: Implement static data members that are shared among all objects of a class. Understanding class-level variables and their memory allocation.

   **Interview Context**: "What are static data members? How are they different from instance variables?"

   **Example**: Static member shared across objects
   Output: `Shared data among all class instances`

8. **Static Keyword in Object** - Static member functions

   **Problem Statement**: Create static member functions that can be called without object instantiation. Understanding static methods and their limitations with instance members.

   **Interview Context**: "What are static member functions? What are their restrictions?"

   **Example**: Static function calls without objects
   Output: `Static function called without object creation`

9. **Friend Function and Class** - Breaking encapsulation selectively

   **Problem Statement**: Implement friend functions and classes to allow controlled access to private members. Understanding when and how to break encapsulation safely.

   **Interview Context**: "What are friend functions? When would you use them and why?"

   **Example**: Friend function accessing private members
   Output: `Friend function accessing private data`

10. **Templates in Function** - Generic function programming

    **Problem Statement**: Create function templates to write generic functions that work with multiple data types. Understanding template instantiation and type deduction.

    **Interview Context**: "What are function templates? How do they enable generic programming?"

    **Example**: Generic swap function for different types
    Output:
    ```
    Swapping values...
    Before: 10 | 20
    After : 20 | 10
    
    Swapping values...
    Before: X | Y
    After : Y | X
    
    Swapping values...
    Before: Hello | World
    After : World | Hello
    ```

11. **Template in Class** - Generic class programming

    **Problem Statement**: Implement class templates to create generic classes that can work with different data types. Understanding template specialization and instantiation.

    **Interview Context**: "What are class templates? How do they differ from function templates?"

    **Example**: Generic container class for different types
    Output: `Template class working with multiple data types`