// frequency of character

#include <iostream>
using namespace std;
#include <algorithm>
int main() {
    string s="cdcccbeee";
    int count=0;
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
        // This loop initializes all elements of the freq array to 0.
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;  
        // freq will increase if an elemtn is found at particular index.
    }
    char ans ='a';
    int maxF=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF= freq[i];
            ans= i+'a';   
        }
    }
    cout<<maxF<<" "<<ans;
    return 0;
}
    

 
 
