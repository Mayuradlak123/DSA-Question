#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k;

    cout <<" Enter size of array : "<<endl;

    cin>>n;

    int a[n];

    cout <<"Enter element of array :"<<endl;

    for(i=0;i<n;i++){

        cin>>a[i];
    }
    cout <<"Subsequence of given array : "<<endl;

    for(i=0;i<n;i++){

        for(j=i;j<n;j++){

            for(k=i;k<=j;k++){
                
                cout <<a[k]<<" ";
            }
            cout <<endl;
        }
    }
}

/*
// C++ code to print all possible subarrays for given array
// using recursion

#include <bits/stdc++.h>
using namespace std;

// Recursive function to print all possible subarrays for
// given array
void printSubArrays(vector<int> arr, int start, int end)
{
	// Stop if we have reached the end of the array
	if (end == arr.size())
		return;
	// Increment the end point and start from 0
	else if (start > end)
		printSubArrays(arr, 0, end + 1);
	// Print the subarray and increment the starting point
	else {
	
		for (int i = start; i < end; i++)
			cout << arr[i] << ", ";
		cout <<arr[end]<<endl;  
		printSubArrays(arr, start + 1, end);
	}
	return;
}

int main()
{
	vector<int> arr = { 1, 2, 3 };
	printSubArrays(arr, 0, 0);
	return 0;
}


*/