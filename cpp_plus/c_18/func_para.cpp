#include <iostream>

using namespace std;

typedef int(*call_back)(int, int);

int add(int a, int b)
{
    return a + b;
}

int multi(int a, int b)
{
    return a * b;
}

int main()
{
    call_back f;
    f = add;
    cout << f(3, 2) << endl;
    f = multi;
    cout << f(3, 2) << endl;

    return 0;
}