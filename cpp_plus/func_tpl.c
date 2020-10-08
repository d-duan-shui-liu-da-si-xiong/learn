#include <stdio.h>
#include <math.h>
#define PI 3.14

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
    int num = 100;
    for (int i = 0; i < 50000; i++) {
        pow(num, 100);
        // m_power2(num, 100);
    }
	printf("PI is: %f\n", PI);

    return 0;
}
