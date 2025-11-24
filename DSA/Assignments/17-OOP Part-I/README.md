# Assignment 17 - OOP Part-I

## Assignment Questions

1. **User Class Activity** - Complete class implementation with validation

   **Problem Statement**: Create a User class with proper encapsulation, validation, and constructor implementation. The class should have private id and password, public username, parameterized constructor, and getter/setter methods with validation logic.

   **Interview Context**: "Design a User class with proper encapsulation and validation. How would you implement data validation in setters?"

   **Technical Details**:
   - Time Complexity: O(1) for all operations - constant time access and validation
   - Space Complexity: O(1) - fixed memory per object regardless of input size
   - Design Pattern: Encapsulation with data validation and controlled access
   - Key Concepts: Private data members, public interface, constructor chaining, validation logic

   **Class Requirements**:
   - Private: id, password
   - Public: username
   - Constructor: parameterized with username, userId, password
   - Validation: id must be 5+ digits, password must be 8+ characters
   - Methods: getId(), getPassword(), setId(), setPass(), printDetails()

   **Example**: Valid and invalid user creation
   Output: 
   ```
   Username : algonix
   User Id : 54321
   Password : pass12345
   Id must be 5 charcter long.
   Password must be at least 8 charcter long.
   Username : al
   User Id : -1
   Password : 
   ```