# Queue_In_C_Plus_Plus
# Aim: To study and implement Queue implementation using array.
# Software Required:
Visual Studio
# Theory:
A queue is a linear data structure that consists of elements arranged in a sequential order where one end is used to add elements, and another for removing them which results in the FIFO (First-In First-Out) order of operations.

The queue is a linear data structure that has the following properties:-

+ It works on the principle of FIFO (First In First Out)
+ It has mainly 2 pointers to perform operations: Front & Rear. The Rear is for insertion and the Front is for deletion
+ It is a linear data structure that gives sequential one-way access to the elements. Even though we can implement it using an array, we cannot access any element through
+ indices directly because access to elements is given only through the rear and front pointers.

<ins>Applications of Queue</ins>:
Due to its FIFO nature, queue is a widely utilised data structure in a variety of real world applications :-
+ Computer Science Fundamentals: its utilised in mostly the core operating system concepts like Job Scheduling Algorithms, Memory management for processing, basically putting the processes inside a queue so that they can be executed concurrently by the processor
  
+ Algorithms: To store addresses of tree nodes, linked list nodes, and Graph Nodes BFS (Breadth First Search) etc.
  
+ Real World Application: In a music or video player app you must've seen the option "Add to Queue" which is basically the Enqueue operation
  
 # Implemnetaion:

 This concept was demonstrated using a singke code that shows queuing, dequeuing and enqueuing in C++
 
# Algorithms:

Algorithm: Implement Queue using Array

1. Start
2. Define a class `Queue` with:
     An integer array `arr[SIZE]`.
     Two integer variables `front` and `rear` initialized to `-1`.
     Functions: `enqueue()`, `dequeue()`, and `display()`.
3. Enqueue operation (`enqueue(value)`)
   1. If `rear == SIZE - 1`, display *"Queue Overflow!"* and return.
   2. If `front == -1`, set `front = 0`.
   3. Increment `rear` and insert the value into `arr[rear]`.
   4. Display confirmation message.
4. Dequeue operation (`dequeue()`)
   1. If `front == -1` OR `front > rear`, display *"Queue Underflow!"* and return.
   2. Display the element `arr[front]` being removed.
   3. Increment `front`.
5. Display operation (`display()`)
   1. If `front == -1` OR `front > rear`, display *"Queue is empty"*.
   2. Otherwise, print all elements from `arr[front]` to `arr[rear]`.
6. In `main()`
   1. Create an object `q` of class `Queue`.
   2. Perform enqueue, dequeue, and display operations to test queue behavior.
7. End
 # Conclusion:
 Through the above code the concept of queuing and its applications was seen in C++.
