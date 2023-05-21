#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/**

A structure is like
 xxx 11111 xxxxxxx 111111 etc
 So to exactly print it properly as a table
 We first need to know the table spaces
 For that, we need to experiment if we can print n spaces:
 So here is the code for that:

    string str; int n;
    cout << "Enter number of white spaces:"; cin >> n;
    str = std::string(5, ' ') + "lolcat";
    cout << str;

 U can print n spaces Gg
 Now what are the fns reqd
 First off we need to print as a table so
    1) n space shud be a final function for equal printing
    2) Function to calculate the column space
    3) Function to concatenate the separate columns into one string

**/

int colspace(string);

struct student{
    int rollno;
    string name;
    double mark1;
    double mark2;
    };
int main(){
    struct student s1;
    void *ptr;
    ptr = &s1.rollno;
    cout << ptr;
    cout << "Roll No:"; cin >> *ptr; ptr++;
    cout << "Name:"; cin >> *ptr; ptr++;
    cout << "Mark 1:"; cin >> *ptr; ptr++;
    cout << "Mark 2:"; cin >> *ptr; ptr++;
    cout << s1.rollno << ",";
    cout << s1.name << ",";
    cout << s1.mark1 << ",";
    cout << s1.mark2 << ",";

    struct test{
    int a, b, c;
    bool d, e;
    int f;
    long g, h;
};
    test* t = new test;   // create the testing struct
    int* ptr = (int*) t;
    for (int i=0;i<8;i++){
        cout << ptr << ":";
        cin >> *ptr;
        ptr++;
    } ptr = (int*) t;
    for (int i=0;i<8;i++){
        cout << ptr << " : " << *ptr << endl;
        ptr++;
    }
    return 0;

}
