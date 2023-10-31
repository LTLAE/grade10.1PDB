#include <string>
#include <iostream>
using namespace std;

string delete_string(string input){
    int pos;
    string search,replace;
    cout << "Input One Character Only!" << endl;
    cout << "Please input your character to be replace: ";
    cin >> search;
    cout << "Please input your character to replace: ";
    cin >> replace;

    while((pos = input.find(search)) != std::string::npos)
    {
        input.replace(pos, search.length(), replace);
    }

    return input;
}