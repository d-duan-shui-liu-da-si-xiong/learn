#include <iostream>

typedef void (*PTRFUNC)(const char *);

void writeLog(const char *c)
{
    printf("%s\n", c);
}

int main()
{
    using namespace std;

    PTRFUNC pf[10];
    for (int i = 0; i < 10; i++) {
        pf[i] = writeLog;
    }

    string s = "I am linxiaolong.";
    const char *c_str = "I am linxiaolong.";

    for (int i = 0; i < 10; i++) {
        pf[i](s.c_str());
    }

    //address of function, arry, int
    cout << pf[0] << endl;
    cout << s << &s << endl;
    cout << pf << endl;
    cout << pf[0] << endl;
    printf("addr of pf: %p\n", pf[0]);
    cout << &pf[0] << endl;
    cout << &c_str << endl;
    printf("%p\n", &c_str);

    //addr of pointer, addr of pointed
    int *p = NULL;
    int i = 123456;
    printf("addr of p:%p\taddr of pointed:%p\n", &p, p);
    p = &i;
    printf("addr of p:%p\taddr of pointed:%p\n", &p, p);
    cout << &i << endl;

    return 0;
}