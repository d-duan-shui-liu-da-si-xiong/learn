#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool f3(int x) {return x % 3 == 0;}
int main()
{
    vector<int> r_v(100000);
    generate(r_v.begin(), r_v.end(), rand);

    for (auto it : r_v) {
        // cout << it << endl;
    }

    int cnt = 10086;

    cout << count_if(r_v.begin(), r_v.end(), f3) << endl;
    cout << count_if(r_v.begin(), r_v.end(),
        [&](int x){cout << cnt << endl;return x % 3 == 0;}) << endl;

    return 0;
}