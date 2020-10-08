#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++) {
        cout << "argv" << i << ": "
             << argv[i] << endl;
    }
    
    if (argc < 2) {
        cout << "输入文件名" << endl;
    }

    ifstream in_file;
    string str;
    in_file.open(argv[1]);
    while (getline(in_file, str)) {
        cout << str << endl;
    }
    in_file.close();

    return 0;
}