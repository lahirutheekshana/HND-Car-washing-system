// Vehicle.h
#pragma once

ref class Vehicle {
public:
    System::String^ owner;
    int number;
    System::String^ manufacture;
    int year;
    System::String^ color;
    System::String^ type;


    Vehicle(System::String^ owner, int number, System::String^ manufacture, int year, System::String^ color, System::String^ type) {
        this->owner = owner;
        this->number = number;
        this->manufacture = manufacture;
        this->year = year;
        this->color = color;
        this->type = type;
    }

    // Destructor (if needed)
    ~Vehicle() {
        // Clean up resources if necessary...
    }
};