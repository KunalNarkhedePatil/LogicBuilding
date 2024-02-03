#include <iostream>
using namespace std;
int StrLenX(char *Str)
{
    int iCnt = 0;
    while (*Str != '\0')
    {
        iCnt++;
        Str++;
    }
    return iCnt;
}
void CpyStrX(char *Str,char *CpyStr)
{
    while(*Str!='\0')
    {
        *CpyStr=*Str;
        Str++;
        CpyStr++;
    }
    *CpyStr='\0';
}
bool StrCmpX(char *Str,char *Str1)
{
    if(StrLenX(Str)!=StrLenX(Str1))
    {
        
        return false;
    }
    while(*Str!='\0')
    {
        if(*Str!=*Str1)
        {
            return false;
        }
        Str++;
        Str1++;
    }
    return true;
}

int main()
{
    char Str[50];
    char Str1[50];
    char CpyStr[50];

    cout << "Enter the String" << endl;
    cin.getline(Str, 30);

    cout<<"Enter the Another String"<<endl;
    cin.getline(Str1,30);


    cout << "String is " << Str << endl;
    //cout << "Length of string is " << StrLenX(Str) << endl;
    //CpyStrX(Str,CpyStr);
    //cout<<"Copied String is "<<CpyStr<<endl;

    if(StrCmpX(Str,Str1))
    {
        cout<<"String is Equal"<<endl;
    }
    else
    {
        cout<<"String is not Equal"<<endl;
    }
    
    return 0;
}