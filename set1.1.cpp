#include <iostream>

using namespace std;

string solve(string s)
{
   for(int i=0;i<s.length();i++)
    {
        if(!isdigit(s[i]))
		{
            return "it is not Numeric";
        }
    }
    return "it is Numeric";
}

int main()
{
   cout<< "Is '123' a numeric string \n"         <<solve("123");
   cout<< "\n\nIs 'qwe' a numeric string \n"     <<solve("qwe");
   cout<< "\n\nIs 'dsdfsdgg' a numeric string \n"<<solve("dsdfsdgg");
   cout<< "\n\nIs '2352344' a numeric string \n" <<solve("2352344");
   cout<< "\n\nIs '13ef' a numeric string \n"    <<solve("13ef");
}
