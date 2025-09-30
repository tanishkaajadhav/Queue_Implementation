AIM:

To implement queue operations (add, delete, display) using an array in C++.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. Operations include Add (enqueue) to insert elements at the rear, Delete (dequeue) to remove elements from the front, and Display to show all elements. Queue overflow occurs when adding to a full queue, and underflow occurs when deleting from an empty queue.

ALGORITHM:

Start the program and include necessary header files.

Initialize an array to store queue elements, and set front = rear = -1.

Accept the size of the queue from the user.

Display menu options: Add, Delete, Display, Exit.

For Add:
 Check if queue is full → Display “Queue Overflow” if yes.
 Else, input element, increment rear, and insert element.
 If front = -1, set front = 0.

For Delete:
 Check if queue is empty → Display “Queue Underflow” if yes.
 Else, remove element from front and increment front.
 If front > rear, reset front = rear = -1.

For Display:
 Traverse array from front to rear and print elements.

Repeat menu operations until user chooses Exit.

Stop the program.

CONCLUSION:

The program successfully implements queue operations using an array, handling Add, Delete, and Display operations with proper overflow and underflow checks.
