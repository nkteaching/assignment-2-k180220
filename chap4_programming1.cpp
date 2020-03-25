#include<bits/stdc++.h>
using namespace std;
int isPalindrome(char str[])
{
	int len=strlen(str);
	stack<char> s;
	int i;
	int mid=len/2;
	for(i=0;i<mid;i++)
	{
		s.push(str[i]);
	}
	if(len%2!=0)  //middle character is ignored when odd
	{
		i++;
	}
	while(str[i]!='\0')
	{
		char x=s.top();
		s.pop();
		if(x!=str[i])
		{
			return 0;
		}
		i++;
	}
	return 1;
}
int main()
{
	char arr[]={"madam"};
	if(isPalindrome(arr)==1)
	{
		cout<<"palindrome"<<endl;	
	}	
	else
	{
		cout<<"not a palindrome"<<endl;
	}
}
