#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int n,i;
   cin>>n;
   int arr[n];
   
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   int maxNUM=INT_MIN;
   int minNUM=INT_MAX;
   
    for(i=0;i<n;i++){
           maxNUM=max(maxNUM,arr[i]);
           minNUM=min(minNUM,arr[i]);
       }
   }
   
   cout<<maxNUM<<" "<<minNUM;

    return 0;
}