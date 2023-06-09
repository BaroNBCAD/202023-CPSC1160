/*

    Q2: using professor Muntaseer's method

*/

#include <iostream>

using namespace std;

const double ERROR = -99.99;

double F(int n){
    //VERY special base case
    if (n <= 0){
        return ERROR;
    }

    //base case
    if (n == 1){
        return 1.0/3;
    }

    //recursive case
    double smallSolution = 1.0/(n*(n+2));
    double nextCall = smallSolution + F(n-1);
    return nextCall;
}

int main(){

    for (int i=0; i<10;i++){
        cout << F(i) << endl;
    }
    return 0;
}
