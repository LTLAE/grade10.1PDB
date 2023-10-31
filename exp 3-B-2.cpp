#include <iostream>
#include <string>
using namespace std;

int main() {
    struct students{
        int ID;
        string name;
        int MT;
        int EN;
        int PH;
    }student_01,student_02,student_03,student_04,student_05;

    cout << "Input information of student01" << endl;
    cout << "Name: ";
    cin >> student_01.name;
    cout << '\r' << "ID: ";
    cin >> student_01.ID;
    cout << '\r' << "MT score: ";
    cin >> student_01.MT;
    cout << '\r' << "EN score: ";
    cin >> student_01.EN;
    cout << '\r' << "PH score: ";
    cin >> student_01.PH;

    cout << "Input information of student02" << endl;
    cout << "Name: ";
    cin >> student_02.name;
    cout << '\r' << "ID: ";
    cin >> student_02.ID;
    cout << '\r' << "MT score: ";
    cin >> student_02.MT;
    cout << '\r' << "EN score: ";
    cin >> student_02.EN;
    cout << '\r' << "PH score: ";
    cin >> student_02.PH;

    cout << "Input information of student03" << endl;
    cout << "Name: ";
    cin >> student_03.name;
    cout << '\r' << "ID: ";
    cin >> student_03.ID;
    cout << '\r' << "MT score: ";
    cin >> student_03.MT;
    cout << '\r' << "EN score: ";
    cin >> student_03.EN;
    cout << '\r' << "PH score: ";
    cin >> student_03.PH;

    cout << "Input information of student04" << endl;
    cout << "Name: ";
    cin >> student_04.name;
    cout << '\r' << "ID: ";
    cin >> student_04.ID;
    cout << '\r' << "MT score: ";
    cin >> student_04.MT;
    cout << '\r' << "EN score: ";
    cin >> student_04.EN;
    cout << '\r' << "PH score: ";
    cin >> student_04.PH;

    cout << "Input information of student05" << endl;
    cout << "Name: ";
    cin >> student_05.name;
    cout << '\r' << "ID: ";
    cin >> student_05.ID;
    cout << '\r' << "MT score: ";
    cin >> student_05.MT;
    cout << '\r' << "EN score: ";
    cin >> student_05.EN;
    cout << '\r' << "PH score: ";
    cin >> student_05.PH;

    // list scoresheet
    cout << "ID" << '\t' << "Name"  << '\t' << "Math score"  << '\t' << "English score"  << '\t' << "Physics score" << "Average score" << endl;
    cout << student_01.ID << '\t'  << student_01.name << '\t'  << student_01.MT << '\t'  << student_01.EN << '\t'  << student_01.PH  << '\t' << (student_01.MT+student_01.EN+student_01.PH)/3 <<  endl;
    cout << student_02.ID << '\t'  << student_02.name << '\t'  << student_02.MT << '\t'  << student_02.EN << '\t'  << student_02.PH << '\t' << (student_02.MT+student_02.EN+student_02.PH)/3 << endl;
    cout << student_03.ID << '\t'  << student_03.name << '\t'  << student_03.MT << '\t'  << student_03.EN << '\t'  << student_03.PH << '\t' << (student_03.MT+student_03.EN+student_03.PH)/3  << endl;
    cout << student_04.ID << '\t'  << student_04.name << '\t'  << student_04.MT << '\t'  << student_04.EN << '\t'  << student_04.PH << '\t' << (student_04.MT+student_04.EN+student_04.PH)/3  << endl;
    cout << student_05.ID << '\t'  << student_05.name << '\t'  << student_05.MT << '\t'  << student_05.EN << '\t'  << student_05.PH << '\t' << (student_05.MT+student_05.EN+student_05.PH)/3  << endl;

}
