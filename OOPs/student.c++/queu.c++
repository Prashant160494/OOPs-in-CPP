#include <iostream>
using namespace std;

class Queue {
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue
    void enqueue(int value) {
        if (rear == 99) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = value;
            cout << value << " inserted.\n";
        }
    }

    // Dequeue
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
        } else {
            cout << arr[front] << " deleted.\n";
            front++;
        }
    }

    // Peek (Front Element)
    void peek() {
        if (front == -1 || front > rear)
            cout << "Queue is Empty\n";
        else
            cout << "Front Element: " << arr[front] << endl;
    }

    // Display
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
        } else {
            cout << "Queue Elements: ";
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    // isEmpty
    void isEmpty() {
        if (front == -1 || front > rear)
            cout << "Queue is Empty\n";
        else
            cout << "Queue is Not Empty\n";
    }

    // isFull
    void isFull() {
        if (rear == 99)
            cout << "Queue is Full\n";
        else
            cout << "Queue is Not Full\n";
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();

    q.dequeue();

    q.display();

    q.isEmpty();

    q.isFull();

    return 0;
}