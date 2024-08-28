#include <iostream>
#include <climits>
using namespace std;

int binarysearch(int arr[],int n, int key){
     int low=0,high=n-1;
     
     while(low<=high){
         int mid=(low+high)/2;
         if(arr[mid]==key){
             return mid;  
         }
         else if(arr[mid]<key){
             low=mid+1;
         }
         else{
             high=mid-1;
         }
     }
     return -1;  
}
     
int main()
{
   int n,i;
   cin>>n;
   int key;
   cout<<"enter key: ";
   cin>>key;
   
   int arr[n];
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
  
   // Capture the result of binarysearch and print it
   
    int result = binarysearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}