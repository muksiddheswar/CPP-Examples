#include <iostream>
using namespace std;

void login(string* user_name, string* password)
{
    cout << "User Name: ";
    cin >> *user_name;
    cout << "User Password: ";
    cin >> *password;
    // getline(cin, password);
}

int main ()
{
    string name = "Sid.";
    string pass = "pass";
    login(&name, &pass);
    cout << name << endl << pass;

    return 0;
}