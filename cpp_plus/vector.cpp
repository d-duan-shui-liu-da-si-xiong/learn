#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 0; i < 400; i++) {
        vec.push_back(i);
    }
    cout << "vector capacity: " << vec.capacity() << endl;
    cout << "vector size: " << vec.size() << endl;

    for (auto itr = vec.begin(); itr != vec.end(); itr++) {
        cout << *itr << endl;
    }

    return 0;
}