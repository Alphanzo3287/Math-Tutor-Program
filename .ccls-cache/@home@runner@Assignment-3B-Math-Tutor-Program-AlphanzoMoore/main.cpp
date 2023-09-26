#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    const int MIN_NUMBER = 1;  // Minimum value for random numbers
    const int MAX_NUMBER = 1000;  // Maximum value for random numbers

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate two random numbers within the specified range
    int num1 = rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
    int num2 = rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;

    // Display the math problem for the student
    cout << "Solve the following addition problem:" << endl;
    cout << num1 << " + " << num2 << " = ?" << endl;

    // Wait for the student to press a key before revealing the answer
    cout << "Press any key to see the answer...";
    cin.get();  // Wait for a key press

    // Calculate and display the correct answer
    int correctAnswer = num1 + num2;
    cout << "The correct answer is: " << correctAnswer << endl;

    return 0;
}
