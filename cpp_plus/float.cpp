#include <iostream>

int main()
{
    using namespace std;
    float loans = .30;

    int iLoans = loans * 100;
    cout << loans << endl;
    printf("%.20f\n", loans);
    cout << iLoans << endl;
    printf("%.3f\n", loans * 100000000000);

    return 0;
}