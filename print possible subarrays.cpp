// print all possible subarray of an array 
// so made one starting point(loop i), 
// then one ending point(loop j which will go from i to ending point n), 
// and one kloop which will print all subarray between i and j

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<"\n";
        }
        
    }
    
    return 0;
}