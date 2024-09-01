#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // SUM OF ALL SUBARRAY
    cout<<"sum of al subarray are :";
    for(i=0;i<n;i++){
        
        int sum=0;

        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<"\n";
            
        }
    }
    
    return 0;
}