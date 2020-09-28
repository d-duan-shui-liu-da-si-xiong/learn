#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char *p = new char[10];
    memcpy(p, "linxiaolong", 9);
    cout << p << endl;
    /* 编译器知道p所指向内存的大小，但是这些信息是不公开的
    无法通过sizeof来获取 */
    cout << sizeof(p) << endl;
    cout << strlen(p) << endl;

    cout << system("dir ") << endl;
    

    delete [] p;
}