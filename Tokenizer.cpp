#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {

    char str[100]; 
    char token[100];
    char *x, *y;

    cout << "Please Enter some characters: ";
    cin.getline(str, 100);

    x = str;
    
    cout << " The Tokens Are: " << endl;
    cout << "------------------" << endl; 

    while (*x) {
        
        while (*x == ' ' && *x) {
            x++;
        }
        
        if (!*x) break;

        y = token;

      
        while (*x != ' ' && *x) {
            *y = *x;
            y++; 
            x++;
        }

        *y = '\0';
        cout << "Token: " << token << '\n';
    }

    return 0;
}
