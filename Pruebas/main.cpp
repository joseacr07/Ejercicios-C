#include <iostream>
#include <string>

using namespace std;

int main ()
{ 
    cout <<"hello world..." <<endl;

    cout << "please give me your name " << endl;

    // read user imput
    string str_name; 
    getline (cin, str_name);

    cout <<"name; " <<str_name << endl;

    return 0;
}