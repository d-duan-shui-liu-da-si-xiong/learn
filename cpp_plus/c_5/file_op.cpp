#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const char *city[] = {
        "fo shan",
        "shen zhen",
        "guang zhou",
        "dong guang"
    };

    ofstream out_file;
    out_file.open("./city");
    for (const char *t : city) {
        out_file << t << endl;
    }
    out_file.close();

    return 0;
}