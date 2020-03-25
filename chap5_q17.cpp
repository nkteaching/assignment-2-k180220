#include<bits/stdc++.h>
using namespace std;
//bool exact(char *text,char *x)
//{
//	if(*text=='\0'&&*x!='\0')
//	{
//		return false;
//	}
//	if(*x=='\0')
//	{
//		return true;
//	}
//	if(*text==*x)
//	{
//		return isPresent(text+1,x+1);
//	}
//	return false;
//}
//bool isPresent(char *text,char *x)  //to check if character occurs in the string
//{
//	if(*text=='\0')
//	{
//		return false;
//	}
//	if(*text==*x)
//	{
//		if(exact(text,x))
//		{
//			return 1;
//		}
//		else
//		{
//			return isPresent(text+1,x);
//		}
//	}
//	return isPresent(text+1,x);
//}
int count(string s1,string s2)  //to count the number of occurences in a string
{
	int n1=s1.length();
	int n2=s2.length();
	if(n1==0||n1<n2)
	{
		return 0;
	}
	if(s1.substr(0,n2).compare(s2)==0)
	{
		return count(s1.substr(n2-1),s2)+1;
	}
	return count(s1.substr(n2-1),s2);
}
void delete_char(char *s,char x)  //to delete all occurencesof the character from string
{
	static int i=0;
	static int j=0;
	if(!s[i])
	{
		return;
	}
	else
	{
		s[i]=s[i+j];
		if(s[i]==x)
		{
			j++;
			i--;
		}
		i++;
		delete_char(s,x);
	}
}
int main()
{
	char s1[]="hatred";
    char s2[]="hat";
//    if(isPresent(s1, s2))
//    {
//        cout<<"present"<< endl;
//    }
//    else
//    {
//        cout<<"not present"<<endl;
//    }
    string x1="hihihihellohihihi";
    string x2="hi";
    cout<<count(x1,x2)<<endl;
    char y[]="hollow";
    char x='o';
    delete_char(y,x);
}
