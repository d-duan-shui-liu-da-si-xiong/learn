#include <iostream>
#include <csignal>
#include <execinfo.h>

using namespace std;

void printStack(int s)
{
    size_t len = 1024;
    size_t size;
    void *func[len];
    char **funcs;

    signal(s, SIG_DFL);
    size = backtrace(func, len);
    funcs = (char **)backtrace_symbols(func, size);
    for (int i = 0; i < size; i++) {
        printf("%d %s\n", i, funcs[i]);
    }
    free(funcs);
}

void signalHandler(int sig)
{
    cout << "encount an error: ";
    cout << sig << endl;
    cout << "stack: " << endl;
    printStack(sig);

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

//g++ -rdynamic signal_handle.cpp -o signal_handle
//rdynamic produce function name
int main()
{
    //reg signal handler
    signal(SIGSEGV, signalHandler);
    construct_error2();

    return 0;
}