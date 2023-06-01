#include<iostream>

using namespace std;

toggleChars(char str[])
{
    for (int i=0;str[i]!='\0';i++)
	{
        if(str[i]>='A' && str[i]<='Z')
        {
        	str[i]=str[i]+'a'-'A';
		}
        else if(str[i]>='a' && str[i]<='z')
        {
        	str[i]=str[i]+'A'-'a';
		} 
    }
}
int main(){
   char str[]="TIRTH_GONDALIYA";
   
   cout<<"String before toggle=>"<<str;
   
   printf("\n==================================================\n");
   
   toggleChars(str);
   cout<<"String after toggle=>"<<str;
   
   return 0;
}
