# Grocery Store List Simulation

## Project Objective
This project simulates a grocery store list developed in C++ as part of a Data Structures and Algorithms (DSA) course. It employs various data structures such as queues and nodes to manage a list of grocery items efficiently.

## Key Features
- **Queue Implementation:** Uses custom queue and queue node classes to manage the list of grocery items.
- **Add and Remove Items:** Allows adding items to the grocery list and removing them from the list.
- **Display List:** Displays the current list of grocery items.
- **Testing Module:** Includes a testing module to verify the functionality of the implemented features.

## Technologies Used
- **C++:** Core programming language used for implementing the project.
- **Custom Data Structures:** Implementation of queues and nodes to handle grocery list management.

## Files Included
- **main.cpp:** The main driver of the program.
- **Data.cpp / Data.h:** Contains the implementation of the data handling functionalities.
- **PA5.h:** Header file for program constants and function prototypes.
- **Queue.cpp / Queue.h:** Contains the implementation of the queue class.
- **QueueNode.cpp / QueueNode.h:** Contains the implementation of the queue node class.
- **Tests.cpp / Tests.h:** Contains the implementation of the testing module.

## Installation Instructions
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/yourusername/grocery-store-list.git
   cd grocery-store-list
2. **Compile the Program:**
   Use the provided Makefile or a C++ compiler to build the project:
   ```bash
   make
   ```
   Alternatively, you can compile the program manually:
   ```bash
   g++ -o grocery-store-list main.cpp Data.cpp Queue.cpp QueueNode.cpp Tests.cpp
   
## Usage Instructions
1. **Run the Program:**
   After compiling, run the executable:
   ```bash
   ./grocery-store-list

2. **Commands:**
   - **Add Item:** Add a new item to the grocery list.
   - **Remove Item:** Remove an item from the grocery list.
   - **Display List:** Display the current grocery list.
   - **Run Tests:** Execute the tests to verify the functionality of the program.

3. **Menu Navigation:**
   Follow the on-screen instructions to navigate through the menu and perform various grocery list management operations.

## Additional Information
- **Acknowledgements**: Special thanks to the course instructor and teaching assistants for their guidance and support throughout the project.
- **Future Enhancements:** Plans to add features like saving and loading the grocery list from a file, a graphical user interface, and additional list management functionalities.
- **Contributions:** Contributions are welcome! Feel free to fork the repository, submit issues, and create pull requests.
