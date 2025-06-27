#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array"<<endl;
    vector<int>temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ch;
    cout<<"Enter A Choice"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1://brute force
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    break;
    case 2 :{//optimal solution
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }
        for(int i=j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
    }
    default:
        break;
    }
    
}