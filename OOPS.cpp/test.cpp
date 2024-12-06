#include <iostream>

using namespace std;

class rectangle {
public:
    float length;
    float width;

    rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }

    void displayDetails() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    rectangle rect(5.0, 31.0); 

    rect.displayDetails();

    return 0;
}