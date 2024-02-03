#include <iostream>
using namespace std;
int StrLenX(char *Str)
{
   int iCnt=0;
   while(*Str!='\0')
   {
      iCnt++;
      Str++;
   }
   return iCnt;
}
int main()
{
    char Str[50];
    cout << "Enter the string\n";
    cin.getline(Str, 30);

    cout << "String is :" << Str << endl;
    cout<<"Length of string is "<<StrLenX(Str)<<endl;

    return 0;
}