#include <iostream>
using namespace std;
// Function pointer for addition and subtraction
typedef int (*BinaryOperation)(int, int);

// Function to perform addition
int addition(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtraction(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;
    char operation;

    // Read input
    cout << "Enter a number, an operator (+ or -), and another number: ";
    cin >> num1 >> operation >> num2;

    // Define and initialize function pointer based on the operator
    BinaryOperation operationFunction;
    if (operation == '+') {
        operationFunction = addition;
    }
    else if (operation == '-') {
        operationFunction = subtraction;
    }
    else {
        cerr << "Invalid operator. Only + and - are supported." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and print the result using the function pointer
    int result = operationFunction(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}
