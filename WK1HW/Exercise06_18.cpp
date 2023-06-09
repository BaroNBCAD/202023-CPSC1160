#include <iostream>
using namespace std;

  /** Check if a string is a valid password */
bool isValidPassword(string s) {
    // Only letters and digits?
    for (int i = 0; i < s.length(); i++) {
      if (!isalpha(s.at(i)) && 
          !isdigit(s.at(i)))
        return false;
    }
    
    // Check length
    if (s.length() < 8)
      return false;
    
    // Count the number of digits
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
      if (isdigit(s.at(i)))
        count++;
    }
    
    if (count >= 2)
      return true;
    else 
      return false;
}

int main() {
    // Prompt the user to enter a password
    
    cout <<("Enter a string for password: ");
    string s;
    getline(cin, s);

    if (isValidPassword(s)) {
      cout <<"Valid password" << endl;
    }
    else {
      cout << "Invalid password" << endl;
    }

    return 0;
}

