# Books Management System

This is a console-based application for managing a collection of books. The application allows users to search for, update, and manage book details such as title, author, category, and price. The system uses a **Doubly Linked List** to store and manage the books efficiently, allowing for easy addition, removal, and traversal of the book collection.

## Features

- **Add a Book**: Allows users to add a new book with the title, author, category, and price.
- **Search for a Book**: Search books by title and view their details.
- **Update Book Details**: Allows users to update the title, author, category, and price of an existing book.
- **Display Book Information**: Prints the details of a book in a formatted manner.

## Data Structure Used

This project uses a **Doubly Linked List** to store the books in the library. Each book is represented as a node in the list, containing the following attributes:

- **Title**
- **Author**
- **Category**
- **Price**

A doubly linked list allows traversal in both directions (forward and backward), making it easy to access, update, or remove books from the collection efficiently.

## Technologies Used

- **C++**: The program is written in C++ and uses basic input/output operations.
- **termcolor**: The termcolor library is used to add color to console outputs for better visibility.
- **Doubly Linked List**: The main data structure used to manage the collection of books.

## Setup

To run this project, ensure you have a C++ compiler installed on your system. Here are the general steps to compile and run the project:

1. **Clone the repository**:

    ```bash
    git clone https://github.com/marwan779/DS_project.git

    cd executables
    ```

2. **Run the program**:

    - For Linux/macOS:
        ```bash
        ./books_management_linux
        ```
    - For Windows:
        ```bash
        .\books_management_windows.exe
        ```

    Or, if you prefer to compile it yourself, follow the next steps:

3. **Compile the code**:

    - For Linux/macOS:
        ```bash
        g++ -o books_management main.cpp
        ```

    - For Windows (using MinGW or another compiler):
        ```bash
        g++ -o books_management_windows.exe main.cpp
        ```

4. **Run the compiled program**:

    - For Linux/macOS:
        ```bash
        ./books_management
        ```
    - For Windows:
        ```bash
        .\books_management_windows.exe
        ```

## Usage

### Add a Book

1. The program will prompt you to enter the book title, author, category, and price.
2. It will save the book to the collection using the doubly linked list.

### Search for a Book

1. The program will prompt you to enter the book title.
2. If the book is found, it will display the book details.

### Update a Book

1. The program will prompt you to enter the title of the book you want to update.
2. After finding the book, you can update its title, author, category, and price.

### Example

Here is a typical session when updating a book:

```mathematica
Enter Book Title: The Great Gatsby
Book found!

Enter New Data

Enter Book Title: The Great Gatsby Updated
Enter Book Author: F. Scott Fitzgerald
1. Fiction
2. History
3. Mystery
4. Science
Choose Book Category: 1
Enter Book Price: 19.99
Update Done
```

## Code Structure

- **Book Class**: Represents a book with attributes like title, author, category, and price.
- **DoublyLinkedList Class**: Manages the list of books, providing methods to add, remove, search, and update books.
- **BooksManagement Class**: Handles the management of the books, including adding, updating, and searching for books.
- **Library**: A container class or function (not shown here) responsible for storing and managing the collection of books using the doubly linked list.

## File Structure
```
.
├── Book.h
├── BooksManagement.cpp
├── BooksManagement.h
├── DoubleLinkedList.cpp
├── DoubleLinkedList.h
├── README.md
├── executables
│   ├── books_management_linux
│   └── books_management_windows.exe
├── main.cpp
└── termcolor.hpp
```
