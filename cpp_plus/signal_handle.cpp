#include <iostream>
#include <csignal>
#include <execinfo.h>

using namespace std;

void printStack()
{
    size_t len = 1024;
    size_t size;
    void *func[len];
    char **funcs;

    size = backtrace(func, len);
    funcs = (char **)backtrace_symbols(func, size);
    for (int i = 0; i < size; i++) {
        printf("%d %s\n", i, funcs[i]);
    }
}

void signalHandler(int sig)
{
    cout << "encount an error: ";
    cout << sig << endl;
    cout << "stack: " << endl;
    printStack();

    exit(sig);
}
void construct_error()
{
    int *p = NULL;
    *p = 123;
}

void construct_error2()
{
    construct_error();
}

int main()
{
    //reg signal handler
    signal(SIGSEGV, signalHandler);
    construct_error2();

    return 0;
}