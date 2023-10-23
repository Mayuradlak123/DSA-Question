#include "cpp.h"
using namespace std;

class medianOfArray
{
public:
    double findMedian(int n, int *arr)
    {
       if(n==0){return -1;}
        int i;
        mergeSort(arr, 0, n);
        if (n % 2 == 0)
        {
            double median = (arr[(n / 2)] + arr[(n / 2) - 1]) / 2;
            return median;
        }
        return double(arr[n / 2]);
    }
    double findMean(int n, int *arr){
       if(n==0){return -1;}

        int sum =0,i;
        for (i=0; i<n; i++){
            sum += arr[i];
        }
        return double(sum/n);
    }
};

int main(int argc, char const *argv[])
{
    medianOfArray object;

    int i,n;
    cout <<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout << " Enter elements of array:"<< endl;
     for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Median of Array :"<< (object.findMedian(n,arr))<<endl;
    cout <<"Mean of Array : "<<(object.findMean(n,arr))<<endl;
    return 0;
}
