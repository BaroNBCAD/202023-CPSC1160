#include <iostream>

using namespace std;


double* findingMys(int *N, double * xCoords, double * yCoords){
    ///
    double* result = new double[4];

    //X
    double* maxX = new double;
    *maxX = xCoords[0];
    double* minX = new double;
    *minX = xCoords[0];

    //Y
    double* maxY = new double;
    *maxY = yCoords[0];
    double* minY = new double;
    *minY = yCoords[0];


    ///
    int* temp = new int;
    for (*temp = 0; *temp < *N; (*temp)++){
        //x
        if (xCoords[*temp] > *maxX)
            *maxX = xCoords[*temp];
        if (xCoords[*temp] < *minX)
            *minX = xCoords[*temp];

        //Y
        if (yCoords[*temp] > *maxY)
            *maxY = yCoords[*temp];
        if (yCoords[*temp] < *minY)
            *minY = yCoords[*temp];
    }

    //centerX
    result[0] = *minX + (*maxX - *minX)/2;
    //centerY
    result[1] = *minY + (*maxY - *minY)/2;
    //width
    result[2] = *maxX - *minX;
    //height
    result[3] = *maxY - *minY;

    ///
    delete maxX;
    maxX=nullptr;
    delete minX;
    minX=nullptr;
    delete maxY;
    maxY=nullptr;
    delete minY;
    minY=nullptr;
    delete temp;
    temp=nullptr;
    return result;
    result=nullptr;
}

void ShowBoundingRectangle(int *N, double * xCoords, double * yCoords){

    cout << "If n = " << *N << ", ";

    //Outputting xCoords
    cout << "xCoords = {";
    int *temp = new int;
    for (*temp = 0; *temp < *N - 1; (*temp)++){
        cout << xCoords[*temp] << ", ";
    }
    cout << xCoords[*temp] << "} ";

    cout << "and ";

    //Outputting yCoords
    cout << "yCoords = {";
    for (*temp = 0; *temp < *N - 1; (*temp)++){
        cout << yCoords[*temp] << ", ";
    }
    cout << yCoords[*temp] << "} ";

    ///
    cout << "the output should be as follows: " << endl;

    double* result = findingMys(N, xCoords, yCoords);
    cout << "Center x and y: " << result[0] << ", " << result[1] << endl;
    cout << "Width: " << result[2] << endl;
    cout << "Height: " << result[3] << endl;

    ///
    delete temp;
    temp=nullptr;
    delete result;
    result=nullptr;

    return;
}

int main(){
    ///
    int* N = new int;
    cout << "Enter number of points: ";
    cin >> *N;
    cout << endl;

    ///
    double *xCoords = new double[*N];
    double *yCoords = new double[*N];

    cout <<"Please input each point in order (x,y)." << endl;
    int* temp = new int;
    for (*temp = 0; *temp < *N; (*temp)++){
        cout << "(x, y) for point " << *temp + 1 << ": ";
        cin >> xCoords[*temp];
        cin >> yCoords[*temp];
    }
    cout << endl;
    //or, input xCoords and yCoords separately



    //Output function:
    ShowBoundingRectangle(N, xCoords, yCoords);

    ///
    delete N;
    N=nullptr;
    delete[] xCoords;
    xCoords=nullptr;
    delete[] yCoords;
    yCoords=nullptr;
    delete temp;
    temp=nullptr;
    return 0;
}
