#include<iostream>
using namespace std;

#define MAX 100 // Maximum size of Stack

class Stack {
    int top;
    int arr[MAX]; // Array to hold stack elements

public:
    Stack() { top = -1; } // Constructor initializes top to -1

    // Function to push an element onto the stack
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack." << endl;
        }
    }

    // Function to pop an element from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }

    // Function to display the top element
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " popped from stack." << endl;
    cout << "Top element is " << s.peek() << endl;

    return 0;
}
