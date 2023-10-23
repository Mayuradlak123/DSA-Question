#include "cpp.h"
using namespace std;

class minimumPlatform
{
public:
    int minPlatform(int n, int *arr, int *dep)
    {
        int platform = 0, maxPlatform = 0, i = 0, j = 0;
       bubbleSort(n,arr);
       bubbleSort(n,dep);
       while(i<n ){
          if(arr[i]<=dep[j]){
            platform++;
            i++;
              maxPlatform =max(maxPlatform,platform);
          } 
         else if(arr[i]>=dep[j]){
            platform--;
            j++;
         }
        
       }
       return maxPlatform;
    }
};
int main(int argc, char const *argv[])
{
    int i, n;
    cout << "Enter Number of Train : " << endl;
    cin >> n;
    int arr[n], dep[n];
    cout << "Enter Arrival Time  :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Departer Time  :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> dep[i];
    }
    printf("Minimum Platform Required : %d ", minimumPlatform().minPlatform(n, arr, dep));
    return 0;
}
/**
 * Ex    int arrival[] = {100,500,300};
    int departure[] = {900,400,600};
    ANS=2
*/