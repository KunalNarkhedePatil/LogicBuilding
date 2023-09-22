#include<iostream>
#include<string.h>
using namespace std;
class Demo
{
   public:
   char *Str1;
   char *Str2;

   Demo(char *Str1,char *Str2)
   {
      this->Str1=Str1;
      this->Str2=Str2;
   }

   void countLength()
   {
      int iCnt=0;

      while(*Str1!='\0')
      {
         iCnt++;
         Str1++;
      }
      cout<<"Length of string is "<<iCnt<<endl;
   }
   int countLength(char *Str)
   {
      int iCnt=0;

      while(*Str!='\0')
      {
         iCnt++;
         Str++;
      }
      return iCnt;
   }
   void StrRevX()
   {
      char * Start=Str1;
      char * End=Str1;

      while(*End!='\0')
      {
        End++;
      }
      End--;

      while(Start<=End)
      {
        char Temp=*Start;
        *Start=*End;
        *End=Temp;
        Start++;
        End--;
      }
   }
   void toggleCase()
   {
      while(*Str1!='\0')
      {
         if(*Str1>='a' && *Str1<='z')
         {
            *Str1=*Str1-32;
         }
         else if(*Str1>='A' && *Str1<='Z')
         {
            *Str1=*Str1+32;
         }
         Str1++;
      }
   }
   void comStrX()
   {
      int iFlag=true;
      if(countLength(Str1)!=countLength(Str2))
      {
          cout<<"not equal\n";
          return;
      }
      while(*Str1!='\0')
      {
          if(*Str1!=*Str2)
          {
              iFlag=false;
          }
          Str1++;
          Str2++;
      }
     if(iFlag==true)
     {
        cout<<"equal\n";
     }
     else
     {
        cout<<"not equal\n";
     }
   }
   void checkStrPalindrome()
   {
      char *Start=Str1;
      char *End=Str1;
      bool iFlag=true;
      while(Start<=End)
      {
          if(*Start != *End)
          {
              iFlag=false;
              break;
          }
          Start++;
          End--;
      }
      if(iFlag==true)
      {
        cout<<"palindromic";
      }
      else
      {
        cout<<"not palindromic";
      }
   }
   bool checkStrPalindrome(string Str)
   {
      //cout<<Str<<endl;
      int start=0;
      int end=Str.length()-1;
      int iflag=1;
      while(start<=end)
      {
        if(Str[start]!=Str[end])
        {
            iflag=0;
            break;
        }
        start++;
        end--;
      }
      if(iflag==0)
      {
          return false;
      }
      else
      {
        return true;
      }
   }
   bool countWordPalindromic()
   {
      int iCnt=0;

      string word="";
      while(*Str1!='\0')
      {
           if(*Str1==' ' ||*Str1=='\n')
           {  
              if(checkStrPalindrome(word))
              {
                iCnt++;
              }
              word="";
              Str1++;
           }
           word.push_back(*Str1);
           //cout<<word<<endl;
          Str1++;
      }
      if(checkStrPalindrome(word))
      {
         iCnt++;
      }
      cout<<"Count is :"<<iCnt<<endl;
   }
   void countEachElementFreq()
   {
      int size=countLength(Str1);
      int *Freq=new int[size];

      for(int i=0;i<size;i++)
      {
         Freq[i]=-1;
      }

   

      int iCnt=0;

      for(int i=0;i<size;i++)
      {
         iCnt=1;
         for(int j=i+1;j<size;j++)
         {
            if(Str1[i]==Str1[j])
            {
               iCnt++;
               Freq[j]=0;
            }
         }
         if(Freq[i]!=0)
         {
            Freq[i]=iCnt;
         }
      }

      for(int i=0;i<size;i++)
      {
         if(Freq[i]!=0)
         {
            cout<<Str1[i]<<"="<<Freq[i]<<" times"<<endl;
         }
      }
   }
};
int main()
{
    char str1[100];
    char str2[100];

    cout<<"Enter the string\n";
    cin.getline(str1,30);

    //cout<<"Enter the another string\n";
    //cin.getline(str2,30);

    Demo *dobj=new Demo(str1,str2);

    //dobj->countLength();
    //dobj->StrRevX();
    //dobj->toggleCase();
    //dobj->comStrX();
    //dobj->countWordPalindromic();
    //dobj->comStrX();
    //dobj->countWordPalindromic();

    dobj->countEachElementFreq();
    //cout<<str1<<endl;

    return 0;
}