#include <iostream>

struct ant_year_end
{
    int year;
    int month;
};

int main()
{
    using namespace std;

    ant_year_end aye;
    cout << aye.year << endl;

    return 0;
}