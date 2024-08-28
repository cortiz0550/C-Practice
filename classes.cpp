#include <iostream>

class Tricycle {
    public:
        Tricycle(int initial_age);
        ~Tricycle();
        int get_speed();
        void set_speed(int speed);
        int get_wheel_size();
        void set_wheel_size(int size);
        void pedal();
        void brake();
    
    private:
        int speed;
        int wheel_size = 4;

};

// Constructor for class
Tricycle::Tricycle(int initial_speed) {
    set_speed(initial_speed);
}

// Destructor
Tricycle::~Tricycle() {
    // Do nothing
}

int Tricycle::get_wheel_size() {
    return wheel_size;
}

void Tricycle::set_wheel_size(int new_size) {
    if (new_size >= 4) {
        wheel_size = new_size;
    }

}

// Get speed
int Tricycle::get_speed() {
    return speed;
}

// Set speed
void Tricycle::set_speed(int new_speed) {
    if (new_speed >= 0) {
        speed = new_speed;
    }
}

void Tricycle::pedal() {
    set_speed(speed + 1);
    std::cout <<"\n Pedaling; tricycle speed" << get_speed() << "mph\n";
}

void Tricycle::brake() {
    set_speed(speed - 1);
    std::cout <<"\n Braking; tricycle speed " << get_speed() << " mph\n";
}

int main() {
    Tricycle blue(10);
    Tricycle red(3);
    red.set_wheel_size(20);

    std::cout << red.get_wheel_size();
    blue.brake();

    return 0;
}