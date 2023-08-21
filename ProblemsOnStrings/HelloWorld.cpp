#include <iostream>
#define MAX 100
using namespace std;
class Demo
{
public:
    char *Str;
    Demo(char *Str)
    {
        this->Str = Str;
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    Demo *dobj = new Demo(Str);

    return 0;
}