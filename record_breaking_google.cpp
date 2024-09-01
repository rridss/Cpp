#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    
    arr[n] = -1; // Placeholder for the comparison of the last element
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (n == 1) {
        cout << "1" << endl;  // If there's only one element, it's always a record-breaking day
        return 0;
    }
    
    int record_breaking_days = 0;
    int maxno = -1;  // Initialize to -1 to handle any values in the array
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxno && arr[i] > arr[i + 1]) {
            record_breaking_days++;
        }
        maxno = max(maxno, arr[i]);
    }
    
    cout << record_breaking_days << endl;

    return 0;
}
