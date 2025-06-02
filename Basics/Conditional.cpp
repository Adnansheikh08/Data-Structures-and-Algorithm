//conditional statement if-else switch statement
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a number 1-7"<<endl;
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;        
    default:
        cout<<"KUCH BHI"<<endl;
        break;
    }
}
