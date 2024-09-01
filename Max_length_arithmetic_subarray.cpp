//  find maximum length arithmetic subarray(Arith_Sub contains atleast two elements). so in AS   THE diff between consecutive integrers are equal. example[3,3,3] and[9,10]

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
    int previous_diff= arr[1]-arr[0];
    int ans=2;
    int j=2;
    int current=2;
    // current is the current length of arithmetic subarray and ans is the maximum length of subarray that is the main answer. 
    // Since the first two elements can always be considered as part of an arithmetic progression (with only two elements), the initial answer is set to 2.
    while(j<n){
        if(previous_diff == arr[j]-arr[j-1]){
            current++;
        }
        else{
            previous_diff= arr[j]-arr[j-1];
            current=2;
        }
        ans=max(ans,current);
        j++;
    }
    cout<<ans<<" ";
    
    return 0;
}