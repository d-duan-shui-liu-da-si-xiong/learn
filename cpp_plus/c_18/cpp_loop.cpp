#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 9, 3, 7, 2, 5, 4};
    for (int i : arr) {
        cout << i << ",";
    }
    cout << endl;
    
    return 0;
}