#include <iostream>
#include <string>
using namespace std;

string output;
int addchar(){
    char cha;
    cin >> cha;
    if(cha=='.') return cha;
    else{
        output+=cha;
        addchar();
    }
}

int main() {
    cout << "Please input your string and end with ." << endl;
    addchar();
    cout << output << "."<< endl;
}