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
};

int main() {
    Stack s;
    int n, value;

    cout << "Enter the number of elements to insert in the stack: ";
    cin >> n;

    // Inserting values into the stack
    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        s.push(value);
    }

    // Popping and printing all values
    cout << "Stack values popped in reverse order: ";
    while (!s.isEmpty()) {
        cout << s.pop() << " ";
    }

    return 0;
}
