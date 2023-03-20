#include <iostream>
using namespace std;

int revseArr(int arr2[4]){
    for (int i = 4; i>0;i--){
        cout<<arr2[i];
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    int arr1[n];
    for (int i = 0; i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Hello manoj"<<endl;
    revseArr(arr1);
    return 0;
}