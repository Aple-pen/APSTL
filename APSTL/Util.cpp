#include "Util.h"

int* Util::MakeRandomIntArray(int const LENGTH)
{
    int* array = new int[LENGTH];
    int idx = 0;
    srand(time(NULL));
    while (idx < LENGTH)
    {
        bool flag = false;
        auto ran = (rand() % 36) + 1;
        for(int i =0;i<LENGTH;i++)
        {
            if(array[i] == ran)
            {
                flag = true;
                break;
            }
        }
        if (flag) continue;
        array[idx++] = ran;
    }
    return array;
}
