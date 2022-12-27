// In this Question We are cheking how many
//charecter we need to add in front of string to make 
// String Pallindrom 
#include<bits/stdc++.h>
using namespace std;

// function for checking string is palindrome or not
bool ispalindrome(string str)
{
	int l = str.length();
	int j;
	
	for(int i = 0, j = l - 1; i <= j; i++, j--)
	{
		if(str[i] != str[j])
			return false;
	}
	return true;
}

// Driver code
int main()
{
	string str;
	cout <<"Enter an string for make Pallindrom : "<<endl;
	cin>>str;
	
	int cnt = 0;

	
	while(str.length()>0)
	{	
        if(ispalindrome(str))
		{
			break;
		}
		else
		{
		cnt++;
		
		str.erase(str.begin() + str.length() - 1);
		}
	}
	cout << "Minimum number of character required : "<<endl;
	// if(flag)
		cout << cnt;

return 0;
}
/*// C++ program for getting minimum character to be
// added at front to make string palindrome
#include<bits/stdc++.h>
using namespace std;

// function for checking string is palindrome or not
bool ispalindrome(string s)
{
	int l = s.length();
	int j;
	
	for(int i = 0, j = l - 1; i <= j; i++, j--)
	{
		if(s[i] != s[j])
			return false;
	}
	return true;
}

// Driver code
int main()
{
	string s = "BABABAA";
	int cnt = 0;
	int flag = 0;
	
	while(s.length()>0)
	{
		// if string becomes palindrome then break
		if(ispalindrome(s))
		{
			flag = 1;
			break;
		}
		else
		{
		cnt++;
		
		// erase the last element of the string
		s.erase(s.begin() + s.length() - 1);
		}
	}
	
	// print the number of insertion at front
	if(flag)
		cout << cnt;
}
*/
