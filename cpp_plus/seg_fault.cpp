#include <iostream>

int add_test_segment()
{
    int *p = NULL;
    // *p = 900;
    printf("%d\n",  *p);

     return -1;
}

int main()
{
    int i;
    printf("%p\n", main);
    printf("%p\n", add_test_segment);
    i = add_test_segment();

    return 0;
}