#include <iostream>
using namespace std;

int main() 
{
    string codeInput;
    cin >> codeInput;

    for(int i = 0; i < codeInput.length(); i++){

        if (i>0){
            char answer = ((codeInput[i]-64+codeInput[i-1]-64)%26)+64;
            cout << answer;
        } else {
            cout << codeInput[i];
        }
    }
}