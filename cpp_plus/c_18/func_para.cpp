#include <iostream>
#include <cstring>

using namespace std;

typedef int(*call_back)(int, int);
typedef struct _radar {
    int idx;
    call_back pf_get_ver;
} RADAR;

int add(int a, int b)
{
    return a + b;
}

int multi(int a, int b)
{
    return a * b;
}

void process_data(int x, int y, call_back f)
{
    cout << f(x, y) << endl;
}
int main()
{
    call_back f;
    f = add;
    cout << f(3, 2) << endl;
    f = multi;
    cout << f(3, 2) << endl;

    process_data(3, 2, add);
    process_data(3, 2, multi);

    RADAR r1;
    // memset(&r1, 0x0, sizeof(r1));
    printf("int(idx)=%d, func(callback)=%p\n",
        r1.idx, r1.pf_get_ver);
    printf("func pointer sizeof=%d\n", sizeof(r1.pf_get_ver));
    printf("add addr=%p\n", add);
    printf("multi addr=%p\n", multi);
    printf("main addr=%p\n", main);
    // r1.pf_get_ver(2, 3);

    return 0;
}