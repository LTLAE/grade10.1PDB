#include <iostream>
#include <stdlib.h>
using namespace std;

double search(int month,double pr[]){
    double sum=0;
    for(int timer=0; timer!=300; timer++){
        if(pr[timer]==month) sum++;
    }
    sum/=300;
    return sum;
}

int main() {
    double *pr = new double;

    srand((unsigned)time(NULL));            //using random number generator by 一个农夫 ( www.cnblogs.com/afarmer )
    for(int timer=0;timer!=300;timer++){
        pr[timer]=(rand() % (12))+ 1;       //using random number generator by 一个农夫 ( www.cnblogs.com/afarmer )
    }

    int sum;
    for(int timer=0;timer!=300;timer++){
    }

    for(int timer=1;timer!=12;timer++){
        cout << "The birth rate of month " << timer << " is " << search(timer,pr) << endl;
    }

    delete pr;
}