#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int n,i;
   cin>>n;
   int arr[n];
   int key;
   cout<<"enter key ";
   cin>>key;
   
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at: "<<i;
            break;
        }
    }
    // if key not found after complete traversel
    if(i==n){
        cout<<"key not found";
    }
    return 0;
}