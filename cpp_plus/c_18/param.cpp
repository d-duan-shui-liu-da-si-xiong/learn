#include <iostream>

using namespace std;

typedef struct _light
{
    int32_t light_type;
    int32_t light_switch;
    int32_t light_darkness;
} LIGHT_S;

void modify_light_pro(LIGHT_S *light)
{
    light->light_darkness = 99;
    light->light_switch = 1;
    light->light_type = 100;
}

int main()
{
    LIGHT_S l_001;
    modify_light_pro(&l_001);
    cout << l_001.light_darkness << endl;
    cout << l_001.light_switch << endl;
    cout << l_001.light_type << endl;
    
    return 0;
}