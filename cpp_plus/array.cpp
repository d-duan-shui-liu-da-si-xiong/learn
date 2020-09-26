#include <iostream>

int main()
{
    using namespace std;

    float loans[2] = {0};
	cout << sizeof(loans) / sizeof(loans[0]) << endl;
    cout << sizeof(loans) << endl;
    cout << sizeof(loans[0]) << endl;

    //not init value
    for (int i = 0; i < sizeof(loans) / sizeof(loans[0]); i++) {
        cout << loans[i] << endl;
    }

    //char string
    char say[] = "Hello";
    cout << say << endl;
    cout << sizeof(say) << endl;
    for (int i = 0; i < sizeof(say); i++) {
        cout << say[i] << " ";
    }

    //string
    char *str = "linxiaolong";
    cout << str << endl;

    return 0;
}
