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
    cout<<"sorted array by selection sort: ";
    for(i=0;i<n-1;i++){
        // find minimum element in unsorted array
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        //  swap the min element found with first element i of unsorted array
        if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
            
        }

    }
    // print sorted array
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}