#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double cdegree, fdegree;
    cout << "please input degree celsius" << endl;
    cin >> cdegree;
    fdegree = cdegree * 9 / 5 + 32;
    cout << fixed << setprecision(2) << "degree fahrenheit = " << fdegree << endl;
}