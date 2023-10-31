#include <iostream>
#include <string>
using namespace std;

int main() {
    string string1,string2;
    cout << "Input first string: ";
    cin >> string1;
    cout << '\r' << "Input second string: ";
    cin >> string2;

    string string3;
    int digits=0;
    for(int timer=0;timer!=string1.length();digits++,timer++){
        char passer = string1 [timer];
        string3 += passer;
    }

    for(int timer=0;timer!=string2.length();digits++,timer++){
        char passer = string2 [timer];
        string3 += passer;
    }

    cout << "Combine result: " << string3 << endl;

}