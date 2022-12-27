
 #include<bits/stdc++.h>
using namespace std;

// function for checking string is palindrome or not
bool ispalindrome(string s)
{
	int i,j,n = s.length();
	
	for(i = 0, j = n - 1; i <= j; i++, j--)
	{
		if(s[i] != s[j])
			return false;
		
	}
	return true;
}

// Driver code
int main()
{
	string s ;
    cout << "Enter an String : "<<endl;
cin>>s;
	int count = 0;
	//abbbaaa
	
	while(s.length()>0)
	{
		// if string becomes palindrome then break
		if(ispalindrome(s))
		{
			
			break;
		}
		else
		{
		count++;
		
		// erase the last element of the string
		s.erase(s.begin() + s.length() - 1);
		}
	}
		cout << count;
        return 0;
}
