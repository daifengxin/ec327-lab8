#include <iostream>
#include <string>

using namespace std;

string swapNthCase(const string & str, const int n);

//DO NOT MODIFY THE MAIN FUNCTION

int main(){
    //prompt for string
    string str;
    int n;
    cout << "Enter word: ";
    cin >> str;
    cout << "Enter N: ";
    cin >> n;
    //swap cases
    cout << "Swapped every Nth case: " << swapNthCase(str, n) << endl;

    return 0;
}

/*
 * Sample run:
 * Enter word: qwer.....qwerqwerqwer
 * Enter N: 3
 * Swapped every Nth case: qwEr.....qwErqWerQweR
 */
string swapNthCase(const string & str, const int n){
    //implement function here
    string newStr = str;
    for(int i = 0; i < str.length(); i++){
        if((i+1) % n == 0){
            if(str[i] >= 'a' && str[i] <= 'z'){
                newStr[i] = str[i] - 32;
            }else if(str[i] >= 'A' && str[i] <= 'Z'){
                newStr[i] = str[i] + 32;
            }
        }
    }
    return newStr;
}
