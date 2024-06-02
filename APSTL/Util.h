#pragma once
#include <cstdlib>
#include <ctime>

class Util
{
public:
    static int* MakeRandomIntArray(int const LENGTH);
    void static Swap(int &a,int &b)
    {
        int _temp = a;
        a = b;
        b = _temp;
    }
    

};
