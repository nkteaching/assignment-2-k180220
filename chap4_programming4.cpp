#include<bits/stdc++.h>
using namespace std;
string addingLargeNumbers(string str1, string str2) 
{  
	if (str1.length() > str2.length()) 
	{
		swap(str1,str2);
	}
	string str3= ""; //for final result
	int n1 = str1.length();
	int n2 = str2.length(); 
	reverse(str1.begin(), str1.end()); 
	reverse(str2.begin(), str2.end()); 
	int carry = 0; 
	for (int i=0; i<n1; i++) 
	{ 
		int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
		str3.push_back(sum%10 + '0'); //adds element to end of stack while increasing size by 1
		carry = sum/10; 
	} 
	for (int i=n1; i<n2; i++) 
	{ 
		int sum = ((str2[i]-'0')+carry); 
		str3.push_back(sum%10 + '0'); 
		carry = sum/10; 
	} 
	if (carry) 
	{
		str3.push_back(carry+'0'); 
	}
	reverse(str3.begin(),str3.end()); 
	return str3; 
} 
int main() 
{ 
	string str1 = "100002"; 
	string str2 = "900001"; 
	cout<<addingLargeNumbers(str1, str2); 
} 

