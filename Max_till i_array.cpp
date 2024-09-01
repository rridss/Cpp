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
    
    int maxno=arr[0];
        
    for(i=0;i<n;i++){
        int maxno=max(maxno,arr[i]);
        cout<<maxno<<" ";
        
        
        
    }
    
    return 0;
}