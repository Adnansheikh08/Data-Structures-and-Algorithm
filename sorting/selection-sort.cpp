#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int n,int arr[]){
    int min;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main(){
    int n;
    cout<<"Enter the Size of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Before Sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    cout<<"Array After Sorting"<<endl;
    SelectionSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}