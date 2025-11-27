# Assignment 18 - OOP Part-II

## Assignment Questions

1. **Assignment Activity** - Comprehensive OOP implementation

   **Problem Statement**: Complete assignment demonstrating advanced OOP concepts including inheritance, polymorphism, and proper class design. This integrates multiple OOP principles in a practical implementation.

   **Interview Context**: "Design a system using advanced OOP concepts. How would you implement inheritance and polymorphism together?"

   **Technical Details**:
   - Time Complexity: O(1) for most operations - efficient object-oriented design
   - Space Complexity: O(1) per object - optimal memory usage
   - Design Pattern: Inheritance with proper encapsulation and polymorphism
   - Key Concepts: Advanced class relationships and method overriding

   **Example**: Advanced OOP implementation
   Output: `Comprehensive OOP system demonstration`

2. **Guess the Output - Constructor/Destructor Order** - Understanding object lifecycle

   **Problem Statement**: Predict the output of constructor and destructor calls in inheritance hierarchy. This demonstrates understanding of object creation and destruction order in inheritance.

   **Interview Context**: "What's the order of constructor and destructor calls in inheritance? Why does this order matter?"

   **Technical Details**:
   - Concept: Constructor calls from base to derived, destructor calls from derived to base
   - Memory Management: Understanding object lifecycle in inheritance
   - RAII Principle: Resource Acquisition Is Initialization pattern
   - Debugging Skill: Predicting program behavior without execution

   **Example**: Inheritance with constructor/destructor calls
   Output:
   ```
   constructor A.
   constructor B.
   code end..
   destructor B.
   destructor A.
   ```

3. **Guess the Output - Advanced Polymorphism** - Complex inheritance scenarios

   **Problem Statement**: Analyze complex inheritance and polymorphism scenarios to predict program output. This tests deep understanding of virtual functions and method resolution.

   **Interview Context**: "Predict the output of this complex inheritance scenario. How does virtual function resolution work?"

   **Technical Details**:
   - Virtual Function Table: Understanding vtable mechanism
   - Method Resolution: Runtime vs compile-time binding
   - Inheritance Chain: Complex multi-level inheritance behavior
   - Polymorphic Behavior: Dynamic method dispatch understanding

   **Example**: Complex polymorphism scenario
   Output: `Advanced polymorphism behavior demonstration`

4. **BankAccount System** - Real-world OOP application

   **Problem Statement**: Design and implement a complete banking system using advanced OOP principles including encapsulation, validation, exception handling, and user interaction. This demonstrates practical application of OOP concepts.

   **Interview Context**: "Design a banking system with proper encapsulation and error handling. How would you ensure data integrity?"

   **Technical Details**:
   - Time Complexity: O(1) for all banking operations
   - Space Complexity: O(1) per account - efficient memory usage
   - Design Pattern: Encapsulation with validation and exception handling
   - Error Handling: Exception-based error management
   - User Interface: Menu-driven system with input validation

   **Class Features**:
   - Private: accountNumber, balance
   - Validation: Account number (10+ digits), positive amounts
   - Operations: deposit, withdraw, balance inquiry
   - Exception Handling: Invalid inputs and insufficient funds

   **Example**: Banking system operations
   Output:
   ```
   Account created successfully!
   Successfully Deposited: 1000
   Successfully Withdrawn: 500
   ======= Account Details =======
   Account No : 1234567890
   Balance    : 500
   ===============================
   ```

5. **Student and Person Relation** - Inheritance implementation

   **Problem Statement**: Implement inheritance relationship between Person and Student classes demonstrating proper base-derived class design with constructor chaining and method overriding.

   **Interview Context**: "Implement a Person-Student inheritance relationship. How do you handle constructor chaining and method overriding?"

   **Technical Details**:
   - Inheritance Type: Single inheritance with proper constructor chaining
   - Method Overriding: Specialized behavior in derived class
   - Code Reusability: Base class functionality extension
   - Encapsulation: Proper access control in inheritance hierarchy

   **Example**: Person-Student inheritance
   Output: `Inheritance relationship with proper method calls`

6. **Case Study 1** - Complex OOP scenario analysis

   **Problem Statement**: Analyze and implement a complex real-world scenario using multiple OOP concepts including inheritance, polymorphism, and composition. This tests comprehensive OOP understanding.

   **Interview Context**: "Analyze this complex OOP scenario. How would you design the class hierarchy and relationships?"

   **Technical Details**:
   - Multiple Concepts: Integration of inheritance, polymorphism, composition
   - Design Analysis: Understanding requirements and translating to OOP design
   - Class Relationships: Proper modeling of real-world entities
   - System Architecture: Scalable and maintainable design patterns

   **Example**: Complex OOP system implementation
   Output: `Comprehensive case study solution`

7. **Case Study 2** - Advanced OOP design patterns

   **Problem Statement**: Implement advanced OOP design patterns and analyze their effectiveness in solving complex software design problems. This demonstrates mastery of OOP principles.

   **Interview Context**: "Implement this advanced OOP design. What design patterns would you use and why?"

   **Technical Details**:
   - Design Patterns: Advanced OOP patterns implementation
   - System Design: Scalable architecture with proper abstraction
   - Code Organization: Modular and maintainable code structure
   - Performance Optimization: Efficient OOP design choices

   **Example**: Advanced design pattern implementation
   Output: `Sophisticated OOP design solution`