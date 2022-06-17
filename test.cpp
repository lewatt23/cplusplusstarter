#include <iostream>
using namespace std;

// pass by reference
int sumReference(int &a)
{
    a = 3;
    return a + 3;
}

// pass by value
int sum5(int a)
{
    a = 3;
    return a + 4;
}

int main()
{
    int age = 25;

    cout << "age" << &age << endl;
    cout << "sum" << sum5(age) << endl;

    return 0;
}