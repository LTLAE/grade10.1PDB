#include <iostream>
using namespace std;

// using runoob.com's bubble sort example
//because I can't write one

template<typename T> //整数或浮点数皆可使用,若要使用类(class)或结构体(struct)时必须重载大于(>)运算符
void bubble_sort(T arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    // number part
    double input1[4];
    double *ip1[4];

    // set pointer
    for(int timer=0;timer<4;timer++){
        ip1[timer] = &input1 [timer];
    }

    //IO
    cout << "Input 4 numbers. separate them with enter." << endl;
    for(int timer=0;timer<4;timer++){
        cin >> *ip1[timer];
    }

    bubble_sort(*ip1, 4);

    for(int timer=0;timer<4;timer++){
        cout << *ip1[timer] << '\t' ;
    }
    cout << endl;

    // string part
    string input2[4];
    string *ip2[4];

    // set pointer
    for(int timer=0;timer<4;timer++){
        ip2[timer] = &input2 [timer];
    }

    //IO
    cout << "Input 4 strings. separate them with enter." << endl;
    for(int timer=0;timer<4;timer++){
        cin >> *ip2[timer];
    }

    bubble_sort(*ip2, 4);

    for(int timer=0;timer<4;timer++){
        cout << *ip2[timer] << '\t' ;
    }
    cout << endl;
}
