#include <iostream>
using namespace std;

class MyCalculator
{
public:
    int Addition(int iNo1, int iNo2)
    {
        if (iNo1 < 0)
        {
            iNo1 = -iNo1;
        }

        if (iNo2 < 0)
        {
            iNo2 = -iNo2;
        }

        return iNo1+iNo2;
    }
    int Subtraction(int iNo1, int iNo2)
    {

        if (iNo1 < 0)
        {
            iNo1 = -iNo1;
        }

        if (iNo2 < 0)
        {
            iNo2 = -iNo2;
        }
        return iNo1-iNo2;
    }
    int Multiplication(int iNo1, int iNo2)
    {

        if (iNo1 < 0)
        {
            iNo1 = -iNo1;
        }

        if (iNo2 < 0)
        {
            iNo2 = -iNo2;
        }
        return iNo1*iNo2;
    }
    float Division(int iNo1, int iNo2)
    {

        if (iNo1 < 0)
        {
            iNo1 = -iNo1;
        }

        if (iNo2 < 0)
        {
            iNo2 = -iNo2;
        }
        return iNo1/iNo2;
    }
};