#include <iostream>
using namespace  std;

int jiecheng(int input){
    int sum=1;
    for(int timer=0,xiang=input;timer!=input;sum=sum*xiang,timer++,xiang--);
    return sum;
}
int main() {
    int xia,shang;
    start:
    cout << "To calculate nCm, please input n and m. Separate them with space: ";
    cin >> xia >> shang;
    //check whether input is valid
    if(xia<shang||xia<=0||shang<0){
        cout << "Your input is invalid, please re-enter them." << endl;
        goto start;
    }
    int xia_minus_shang=xia-shang; //prevent bug
    cout << "Your result is " << jiecheng(xia)/jiecheng(xia_minus_shang)/jiecheng(shang) << endl;
}