#include <iostream>

using namespace std;

bool isVowel(char letter);

int main()
{
    char userChar;
    
    cout << "Please enter a character: ";
    cin >> userChar;
    
    if (isVowel(userChar)) 
        cout << userChar << " is a vowel: 1" << endl;
    else
        cout << userChar << " is a vowel: 0" << endl;
    
    return 0;
}

bool isVowel(char letter) {
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            
            return true;
            break;
        default:
            return false;
    }
} 
