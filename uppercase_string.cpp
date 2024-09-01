#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n];
    int i=0;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(arr[i]>='A' && arr[i]<='Z'){
        cout<< "Uppercase";}
    else{
        cout<<"Lowercase";
    }
    
   
    return 0;
}
