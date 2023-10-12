#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class CircularBuffer {
private:
    Node* head;
    Node* tail;
    int size;
    int count;

public:
    CircularBuffer(int bufferSize) : size(bufferSize), head(nullptr), tail(nullptr), count(0) {}

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count == size;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Circular buffer is full. Cannot enqueue." << std::endl;
            return;
        }

        Node* newNode = new Node(value);
        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        tail->next = head;
        count++;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Circular buffer is empty. Cannot dequeue." << std::endl;
            return -1;
        }

        int value = head->data;
        Node* temp = head;
        if (head == tail) {
            head = nullptr;
            tail = nullptr;
        } else {
            head = head->next;
            tail->next = head;
        }
        delete temp;
        count--;
        return value;
    }
};
