#include<iostream>

using namespace std;

int main() 
{
    char c;
    int l_vowel,u_vowel;
    printf("Enter an alphabet:");
    scanf("%c",&c);

    l_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    u_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    
    printf("\n================================\n\n");
    
    if (l_vowel||u_vowel)
    {
    	printf("%c is a vowel.",c);
	}
    else
    {
    	printf("%c is a consonant.",c);
	}
	
    return 0;
}

