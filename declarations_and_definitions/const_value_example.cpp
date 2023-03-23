#include <iostream>
using namespace std;

int main() {
    char x[] = "HEAT";
    char y[] = "GREAT";

    char * p1 = x; // Non Const pointer; Non Const data
    p1[0] = 'M';
    cout << p1 << endl;
    

    const char * p2 = x; // Non Const pointer; Const data
    // p2[0] = 'G'; // Not possible
    p2 = y;
    cout << p2 << endl;    


    char const *  p4 = x; // Non Const pointer; Const data
    p4= y;
    // p4[0] = 'G'; // Not possible


    char * const p3 = x; // Const pointer; Non Const data
    p3[0] = 'G';
    // p3 = y; // Not possible
    cout << x << endl;
    cout << p3 << endl;



}