// Array implementation Of Queue 

// For implementing queue, we need to keep track of two indices, front and rear. 
// We enqueue an item at the rear and dequeue an item from the front. If we simply increment front and rear indices, then there may be problems, the front may reach the end of the array. 
// The solution to this problem is to increase front and rear in circular manner.

// Steps for ENQUEUE

// Check the queue is full or not
// If full, print overflow and exit
// If queue is not full, increment tail and add the element
// Steps for DEQUEUE

// Check queue is empty or not
// if empty, print underflow and exit
// if not empty, print element at the head and increment head

//Method 1: Simple version:

#include <bits/stdc++.h> 


using namespace std;

struct Queue{
    int front, rear, capacity;
    int *queue;
    Queue(int c){
        front = rear = 0;
        capacity = c;
        queue = new int;
    }
    ~Queue(){
        delete [] queue;
    }
};



// int main(){
//     myQueue q;
//     int choice, data;
//     while (1){
//         cout <<"\n\n***** MENU *****\n";
//         cout <<("1. Enqueue\n2. Dequeue\n3. Display\n4. Front\n5. Rear\n6. Exit");
//         cout << ("\nEnter your choice: ");
//         cin >> choice;
//     switch (choice)
//         {
//     case 1:
//         cout <<"Enter the number to push into the queue: ";
//         cin >> data;
//         q.Enqueue(data);
//         break;
//     case 2:
//         q.Dequeue();
//         break;
//     // case 3:
//     //     q.Display();
//         break;
//     case 4:
//         cout <<"The current front of the queue is: " << q.queue.front() <<endl;
//     case 5:
//         cout <<"The current rear of the queue is: " << q.queue.back()<<endl;
//     case 6:
//         exit(0);
//     default:
//         cout <<"Error selection ! Try again !";
//         break;
//         }
//     }
