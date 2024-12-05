#pragma once

using namespace System;

ref class Link {
public:
    String^ label;
    String^ imagePath;
    Link^ next;
    Link^ previous;

    Link(String^ label, String^ imagePath) {
        this->label = label;
        this->imagePath = imagePath;
        next = previous = nullptr;
    }

    void displayNode();
};

void Link::displayNode() {
    // Display the label and image path (for demonstration purposes)
    Console::WriteLine("Label: " + label + ", Image Path: " + imagePath);
}

