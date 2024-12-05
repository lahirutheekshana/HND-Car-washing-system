#pragma once
#include "Low.h"  
#include "vehicle.cpp"

ref class circularQueue {
private:
    array<Vehicle^>^ queArray;  // Use array of managed pointers
    int maxSize;
    int front;
    int rear;
    int items;

public:
    circularQueue(int size);
    ~circularQueue();
    bool isEmpty();
    bool isFull();
    void enqueue(Vehicle^ vehicle);
    Vehicle^ dequeue();
    Vehicle^ peekFront();
    Vehicle^ peekRear();
    int getItems();
};

circularQueue::circularQueue(int size) {
    this->queArray = gcnew array<Vehicle^>(size);  // Use array of managed pointers
    this->maxSize = size;
    this->front = 0;
    this->rear = -1;
    this->items = 0;
}

circularQueue::~circularQueue() {
    delete queArray;  // Managed arrays handle their own memory
}

bool circularQueue::isEmpty() {
    return (items == 0);
}

bool circularQueue::isFull() {
    return (items == maxSize);
}

void circularQueue::enqueue(Vehicle^ vehicle) {
    if (isFull()) {
        return;
    }
    else {
        if (rear == maxSize - 1) {
            rear = 0;
        }
        else {
            rear++;
        }
        items++;
        queArray[rear] = vehicle;
    }
}

Vehicle^ circularQueue::dequeue() {
    if (isEmpty()) {
        return nullptr;
    }
    else {
        Vehicle^ temp = queArray[front];
        items--;

        if (front == maxSize - 1) {
            front = 0;
        }
        else {
            front++;
        }
        return temp;
    }
}

Vehicle^ circularQueue::peekFront() {
    if (isEmpty()) {
        // Optionally, handle empty queue scenario here.
        return nullptr;
    }
    else {
        return queArray[front];
    }
}

Vehicle^ circularQueue::peekRear() {
    if (isEmpty()) {
        // Optionally, handle empty queue scenario here.
        return nullptr;
    }
    else {
        return queArray[rear];
    }
}

int circularQueue::getItems() {
    return items;
}