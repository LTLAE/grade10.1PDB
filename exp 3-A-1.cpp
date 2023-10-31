#include <iostream>
using namespace std;

int main() {
    // input students' test results here
    //make sure that the length of MT EN PH are the same ! ! ! ! !
    int  MT [30] = {76 , 78 , 81 , 96 , 94 , 84 , 93 , 62 , 88 , 60 ,
                    64 ,72 , 91 , 86 , 87 , 65 , 73 , 95 , 69 , 100 ,
                    89 ,74 , 90 , 77 , 71 , 82 , 97 , 99 , 80 , 63};
    int EN [30] = {66 , 91 , 94 , 85 , 89 , 83 , 86 , 93 , 68 , 79 ,
                   77 , 92 , 99 , 76 , 81 , 80 , 61 , 72 , 71 , 62 ,
                   64 , 98 , 75 , 73 , 63 , 97 , 82 , 65 , 87 , 95};
    int PH [30] = {85,90,76,99,67,69,89,86,95,61,
                   82,70,64,94,79,93,73,96,75,62,
                   97,80,74,72,83,87,92,100,91,77};

    // students' ID start at 01 and end at 30
    // students' name are student_ID
    // for example here's a student named student_01, whose id is 01

    //cal total score
    int totalscore [sizeof (MT) / sizeof (MT[0])];
    for(int timer=0;timer!=sizeof (MT) / sizeof (MT[0]);timer++) totalscore[timer]=MT[timer]+EN[timer]+PH[timer];

    //cal avg score
    int avgscore [sizeof (MT) / sizeof (MT[0])];
    for(int timer=0;timer!=sizeof (MT) / sizeof (MT[0]);timer++) avgscore[timer]=MT[timer]+EN[timer]+PH[timer]/3;


}
