#include <iostream>
#include "math.h"

using namespace std;

template <typename T>
inline T m_power(T const n, int m)
{
    // cout << "sizeof T: " << sizeof(T) << endl;
    T ret = 1;
    for (int i = 0; i < m; i++) {
        // cout << n << ret << endl;
        ret *= n;
    }
    
    return ret;
}

int m_power2(int n, int m)
{
    int ret = 1;
    for (int i = 0; i < m; i++) {
        ret *= n;
    }
    return ret;
}

int main()
{
    double num = 100.98;
    // printf("%d\n", pow(num, 100));
    // printf("%d\n", m_power(num, 100));
    cout << "size of float: " << sizeof(num) << endl;
    cout << "size of double: " << sizeof(double) << endl;
    for (int i = 0; i < 10000; i++) {
        pow(num, 100);
        // m_power2(num, 100);
    }

    return 0;
}