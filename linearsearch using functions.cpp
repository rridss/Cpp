#include <iostream>
#include <climits>
using namespace std;

void linearsearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at index: "<<i;
            return;
            // return will help us exit from whole linearsearch function
            // break will only exit loop and element not found will also e printed which will get wrong
        }
    }
    cout<<"element not found";
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
   
   linearsearch(arr,n,key);
    return 0;
}