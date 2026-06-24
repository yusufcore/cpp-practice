#include <iostream>
using namespace std;

int main(){
    int age = 20;
    double pi = 3.14159;
    char grade = 'A';
    bool isStudent = true;

    cout << "age = " << age << '\n';
    cout << "pi = " << pi << '\n';
    cout << "grade = " << grade << '\n';
    cout << "isStudent = " << isStudent << '\n';

    cout << endl;

    cout << "sizeof(age) = " << sizeof(age) << '\n';
    cout << "sizeof(pi) = " << sizeof(pi) << '\n';
    cout << "sizeof(grade) = " << sizeof(grade) << '\n';
    cout << "sizeof(isStudent) = " << sizeof(isStudent)<< '\n';

    cout << endl;

    cout << "Address of (age) = " << &age << '\n';
    cout << "Address of (pi) = " << &pi << '\n';
    cout << "Address of (grade) = " << (void*)&grade << '\n';  // void* --> treats char as a generic pointer and prints the address of grade instead of its stored value.
    cout << "Address of (isStudent) = " << &isStudent << '\n';

    
}