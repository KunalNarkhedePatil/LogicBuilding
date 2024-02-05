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
void Swap(char *P,char *Q)
{
    char Temp=*P;
    *P=*Q;
    *Q=Temp;
}
void StrRevX(char *Str)
{
    char *End=Str;

    while(*End!='\0')
    {
        End++;
    }
    End--;

    char *Start=Str;

    while(Start<=End)
    {
        Swap(Start,End);
        Start++;
        End--;
    }
}
void LowerToUpper(char *Str)
{
    while(*Str!='\0')
    {
        if(*Str>='a' && *Str<='z')
        {
            *Str=*Str-32;
        }
        Str++;
    }
}
void UpperToLower(char *Str)
{
    while(*Str!='\0')
    {
        if(*Str>-'A' && *Str<='Z')
        {
            *Str=*Str+32;
        }
        Str++;
    }
}
void ToggleCase(char *Str)
{
    while(*Str!='\0')
    {
        if(*Str>='a' && *Str<='z')
        {
            *Str=*Str-32;
        }
        else if(*Str>='A' && *Str<='Z')
        {
            *Str=*Str+32;
        }
        Str++;
    }
}
int countWord(char *Str)
{
    int iCnt=0;
   while(*Str!='\0')
   {
      if(*Str==' ' || *Str==',' ||*Str=='\n')
      {
          iCnt++;
      }
      Str++;
   }
   return iCnt+1;
}
int CountCapital(char *Str)
{
    int iCnt=0;

    while(*Str!='\0')
    {
        if(*Str>='A' && *Str<='Z')
        {
            iCnt++;
        }
        Str++;
    }
    return iCnt;
}
void checkVowelInString(char *Str)
{
    bool flag=false;

    while(*Str!='\0')
    {
        if(*Str=='A'||*Str=='E'||*Str=='I'||*Str=='O'||*Str=='U'||*Str=='a'||*Str=='e'||*Str=='i'||*Str=='o'||*Str=='u')
        {
            flag=true;
            break;
        }
        Str++;
    }
    if(flag==true)
    {
        cout<<"String contain voewls"<<endl;
    }
    else
    {
        cout<<"String contain not voewls"<<endl;
    }

}
bool checkStringPalindrome(char *Str)
{
    char *Temp=Str;

    while(*Temp!='\0')
    {
        cout<<*Temp<<endl;
        Temp++;
    }
    bool flag=true;

    char *End=Str;

    while(*End!='\0')
    {
        End++;
    }
    End--;
    cout<<*End<<endl;


    while(Str<=End)
    {
        if(*Str!=*End)
        {
            flag=false;
        }
        Str++;
        End--;
    }
    if(flag==true)
    {
        return true;
        //cout<<"Palindromic"<<endl;
    }
    else
    {
        return false;
        //cout<<"Not Palindromic"<<endl;
    }
}
int main()
{
    char Str[50];
    //char Str1[50];
    //char CpyStr[50];

    cout << "Enter the String" << endl;
    cin.getline(Str, 30);

    // cout<<"Enter the Another String"<<endl;
    // cin.getline(Str1,30);


    cout << "String is " << Str << endl;
    //cout << "Length of string is " << StrLenX(Str) << endl;
    //CpyStrX(Str,CpyStr);
    //cout<<"Copied String is "<<CpyStr<<endl;

    // if(StrCmpX(Str,Str1))
    // {
    //     cout<<"String is Equal"<<endl;
    // }
    // else
    // {
    //     cout<<"String is not Equal"<<endl;
    // }
    
    //StrRevX(Str);
    //cout<<"Reverse String is "<<Str<<endl;

    //LowerToUpper(Str);
    //UpperToLower(Str);
    //ToggleCase(Str);
    //cout<<"String is "<<Str<<endl;

    //cout<<"Number of word in the String are "<<countWord(Str)<<endl;
    //cout<<"Number of Capital Character is "<<CountCapital(Str)<<endl;
    //checkVowelInString(Str);

    //checkStringPalindrome(Str);

    



    return 0;
}