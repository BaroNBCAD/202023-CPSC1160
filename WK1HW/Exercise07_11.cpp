// Exercise06_11.java: Compute deviation
#include <iostream>
#include <cmath>
using namespace std;


/** Method for printing array */
void printArray(double x[]) {
    for (int i = 0; i < 10; i++)
        cout << x[i] << " ";
    cout << endl;
}


/** Method for computing mean of an array of double values*/
double mean(double x[]) {
    double sum = 0;

    for (int i = 0; i < 10; i++)
        sum += x[i];

    return sum / 10;
}

/** Method for computing mean of an array of int values*/
double mean(int x[]) {
    int sum = 0;

    for (int i = 0; i < 10; i++)
        sum += x[i];

    return sum / 10;
}

  /** Method for computing deviation of int values*/
double deviation(int x[]) {
    double mean1 = mean(x);
    double squareSum = 0;

    for (int i = 0; i < 10; i++) {
        squareSum += pow(x[i] - mean1, 2);
    }

    return sqrt(squareSum / (10 - 1));
}

/** Method for computing deviation of double values*/
double deviation(double x[]) {
    double mean1 = mean(x);
    double squareSum = 0;

    for (int i = 0; i < 10; i++) {
        squareSum += pow(x[i] - mean1, 2);
    }

    return sqrt(squareSum / (10 - 1));
}

int main() {
    double* numbers = new double[10];

    cout << "Enter ten numbers: ";

    for (int i = 0; i < 10; i++) //or length = 10
        cin >> numbers[i];

    // Display mean and deviation
    cout << "The mean is " << mean(numbers) << endl;
    cout << "The standard deviation is " << deviation(numbers) << endl;
        
    delete[] numbers;
    return 0;
}

