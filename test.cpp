#include <iostream>
#include <functional>
using namespace std;

function<int(int)> createSumFunc(int n)
{
    return [n](int x)
    {
        return x + n;
    };
}

int main()
{
    function sum5 = createSumFunc(5);

    cout << sum5(4) << endl;

    return 0;
}