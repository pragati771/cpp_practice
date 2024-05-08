#include <iostream>
using namespace std;

class ComplexNumber {
private:
    float real;
    float imaginary;

public:
    // Default constructor
    ComplexNumber() {
        real = 0.0;
        imaginary = 0.0;
    }

    // Parameterized constructor
    ComplexNumber(float r, float i) {
        real = r;
        imaginary = i;
    }

    // Getter for real part
    float getReal() {
        return real;
    }

    // Setter for real part
    void setReal(float r) {
        real = r;
    }

    // Getter for imaginary part
    float getImaginary() {
        return imaginary;
    }

    // Setter for imaginary part
    void setImaginary(float i) {
        imaginary = i;
    }

    // Display function
    void display() {
        if (imaginary >= 0) {
            cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
        } else {
            cout << "Complex number: " << real << " - " << -imaginary << "i" << endl;
        }
    }
};

int main() {
    // Creating objects of ComplexNumber class
    ComplexNumber num1; // Default constructor
    ComplexNumber num2(3.5, -2.8); // Parameterized constructor

    // Displaying num1 and num2
    cout << "Complex number 1:\n";
    num1.display();
    cout << endl;

    cout << "Complex number 2:\n";
    num2.display();
    cout << endl;

    // Using getters and setters
    num1.setReal(2.0);
    num1.setImaginary(4.6);

    cout << "Updated complex number 1:\n";
    num1.display();

    return 0;
}

