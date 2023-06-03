#include <iostream>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));
    int* counts = new int[10];

    for (int i = 0; i < 10; i++) {
      counts[i] = 0;
    }

    for (int i = 0; i < 100; i++) {
      int value = (int)(rand() % 10);
      counts[value]++;
    }

    for (int i = 0; i < 10; i++) { //or, declare a variable for length = 10
      cout << "Count for " << i << " is " << counts[i] << endl;
    }

    delete[] counts;
    return 0;
}

