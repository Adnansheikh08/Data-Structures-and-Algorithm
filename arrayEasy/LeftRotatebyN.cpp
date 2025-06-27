#include <bits/stdc++.h>
using namespace std;
void Optimal(int arr[],int d,int n){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cout<<"Enter the Size of Array"<<endl;
    cin>>n;
     //n=7 d=20 20/7=6 only have to rotate it by six
    cout<<"Enter the Number of places to rotate"<<endl;
    int d;
    cin>>d;
    d=d%n;
    int arr[n];
    cout<<"Enter the Elements of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ch;
    cout<<"Enter the choice"<<endl;
    cin>>ch;
    int temp[d];
    switch (ch)
    {
    case 1:
        for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    //int j=0;//Brute Froce
    for(int i=n-d;i<n;i++){
        //arr[i]=temp[j];
        //j++;
        arr[i] = temp[i-(n-d)];//Better Approach
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
        break;
    case 2:
    Optimal(arr,d,n);
    cout<<"Optimal Solution"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    break;
    default:
        cout<<"LOL"<<endl;
        break;
    }
    
}