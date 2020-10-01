#include <iostream>

static int cnt = 0;
int g_normal = 1;

void print_cnt()
{
    printf("cnt is: %d\n", cnt);
    // print_cnt();
}



int main()
{
    using namespace std;

    while (cnt < 10) {
        print_cnt();
        cnt++;
    }
    int l_normal;
    int *p_int = new int;
    printf("static g: %p\n", &cnt);
    printf("g nomal: %p\n", &g_normal);
    printf("local mormal: %p\n", &l_normal);
    printf("local new: %p\n", p_int);
    delete p_int;

    char p_[1024 * 1024 * 1024] = {0};
    
    return 0;
}