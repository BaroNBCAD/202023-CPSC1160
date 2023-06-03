#include <iostream>
#include <ctime>
using namespace std;

  // Get a dice
int getDice() {
    int i1 = 1 + (int)(rand() % 6);
    int i2 = 1 + (int)(rand() % 6);

    cout <<"You rolled " << i1 << " + " << i2 << " = " << (i1 + i2) << endl;
    return (i1 + i2);
}

int main() {
    srand(time(0));
    int dice = getDice();
    if (dice == 7 || dice == 11) {
      cout <<"You win" << endl;
      return 1;
    }
    else if (dice == 2 || dice == 3 || dice == 12) {
      cout <<"You lose" << endl;
      return 2;
    }

    int point = dice;
    cout <<"point is " << point << endl;
    do {
      dice = getDice();
    } while (dice != 7 && dice != point);

    if (dice == 7)
      cout <<"You lose";
    else
      cout <<"You win";
    
    return 0;
}

