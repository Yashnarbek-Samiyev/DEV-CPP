#include <iostream>
#include <vector>
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Your application code goes here

    return 0;
}


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
    int capacity;
    int count;

public:
    CircularBuffer(int bufferSize) : capacity(bufferSize), count(0) {
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count == capacity;
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
            tail->next = head;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }

        count++;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Circular buffer is empty. Cannot dequeue." << std::endl;
            return -1;
        }

        int value = head->data;

        if (count == 1) {
            delete head;
            head = nullptr;
            tail = nullptr;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }

        count--;
        return value;
    }
};
