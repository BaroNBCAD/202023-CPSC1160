/*

    max(): using professor Muntaseer's method

*/

#include <iostream>
#include <ctime>

using namespace std;

const double ERROR = -99.99;

int max(int* list, int arraySize, int start, int end){
    //base case
    if (start==end){
        return list[start];
    }

    //recursive case
    int middleIndex = (start+end)/2;
    int maxFromLeft = max(list, arraySize, start, middleIndex);
    int maxFromRight = max(list, arraySize, middleIndex+1, end);
    
    if (maxFromLeft < maxFromRight)
        return maxFromRight;
    else
        return maxFromLeft;

}

int max(int* list, int arraySize){
    if (arraySize == 0)
        return ERROR;
    return max(list, arraySize, 0, arraySize-1);
}

int main(){
    srand(time(0));
    int* list = new int[10];

    for (int i =0; i < 10; i++){
        list[i] = rand()%15+1;
        cout << list[i] << " ";
    }
    cout << endl;
    cout << "Max: " << max(list, 1) << endl;

    delete[] list;
    list=nullptr;
    return 0;

    return 0;
}
