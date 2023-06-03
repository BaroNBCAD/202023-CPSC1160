#include <iostream>

using namespace std;

int* locateLargest(double** a, int* row, int* col){
    int* location = new int[2];
    //or, instead of using 2 int vars here, you can use 2 pointer int
    int* temp1 = new int;
    int* temp2 = new int;
    double* largest =  new double;
    *largest = a[0][0];

    //
    for (*temp1 = 0; *temp1 < *row; (*temp1)++)
      for (*temp2 = 0; *temp2 < *col; (*temp2)++) {
        if (*largest < a[*temp1][*temp2]) {
          *largest = a[*temp1][*temp2];
          location[0] = *temp1;
          location[1] = *temp2;
        }
      }

    // Deallocate
    delete temp1;
    temp1=nullptr;
    delete temp2;
    temp2=nullptr;
    delete largest;
    largest=nullptr;
    
    return location;
}

int main(){

    int *row = new int;
    int *col = new int;
    int *temp1 = new int;
    int *temp2 = new int;

    //
    cout << "Enter the number of rows and columns of the array: ";
    cin >> *row;
    cin >> *col;

    //
    cout << "Enter the array: ";
    double** a = new double*[*row];
    for (*temp1 = 0; *temp1 < *row; (*temp1)++){
        a[*temp1] = new double[*col];
        for (*temp2 = 0; *temp2 < *col; (*temp2)++){
            cin >> a[*temp1][*temp2];
        }
    }


    //
    int* location = locateLargest(a, row, col);
    cout << "The location of the largest element is at (" << location[0] << ", " << location[1] << ")";


    // Deallocate
    for (*temp1 = 0; *temp1 < *row; (*temp1)++){
        delete[] a[*temp1];
        a[*temp1]=nullptr;
    }
    delete[] a;
    a=nullptr;
    delete row;
    row=nullptr;
    delete col;
    col=nullptr;
    delete temp1;
    temp1=nullptr;
    delete temp2;
    temp2=nullptr;
    delete location;
    location=nullptr;

    return 0;
}
