#include <iostream>
#include <string>

using namespace std;


int main(){

    string s; 
    string newS;

    cin >> s; // Eingabe mit Char
    for(int i = 0; i < s.length();i++){
        if(int(s[i]) >= 97 && int(s[i]) <= 122){
            newS += s[i];
        }
    }
    cout << newS << endl;

}
#include <iostream>
#include <string>

using namespace std;


int main(){

    char c;

    cin >> c; // Eingabe mit Char
    while(c < 48 || c > 57){
        cout << "Neue Eingabe erforderlich" << endl;
        cin >> c;
    }

    int zahl = int(c) - 48;

    while(zahl >= 0){
        cout << zahl << endl;
        zahl -= 1;
    }

}