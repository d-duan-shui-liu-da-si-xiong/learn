#include <iostream>

using namespace std;

int main()
{
    char msg[] = "I am linxiaolong.";
    for (char c : msg) {
        cout << c;
    }
    cout << endl;

    const char *city[] = {
        "fo shan",
        "shen zhen",
        "guang zhou",
        "dong guang"
    };
    for (const char *t : city) {
        cout << t << endl;
    }
    
    return 0;
}