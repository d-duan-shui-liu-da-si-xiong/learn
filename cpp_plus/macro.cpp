#include <iostream>

#define concat(a, b) a##b

int main()
{
    using namespace std;

    cout << __DATE__ << endl;
    cout << __FILE__ << endl;
    cout << __LINE__ << endl;
    cout << __TIME__ << endl;

    int x, y, xy;
    x = 100;
    y = 200;
    xy = 1000;
    cout << concat(x, y) << endl;

    return 0;
}