#include <iostream>
using namespace std;

void pattern7(int n){
    cout<<"Pattern 7"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
           cout<<" "; 
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"x";
        }
        for(int j=0;j<n-i-1;j++){
           cout<<" "; 
        }
        cout<<""<<endl;
    }    
}
void pattern8(int n){
    cout<<"Pattern 8"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           cout<<" "; 
        }
        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"x";
        }
        for(int j=0;j<i;j++){
           cout<<" "; 
        }
        cout<<""<<endl;
    }  
}
void pattern9(int n){
    cout<<"Pattern 9"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"x";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<""<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"x";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<""<<endl;
    }
}
void pattern10(int n){
    cout<<"patten 10"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"x";
        }
        cout<<""<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<"x";
        }
        cout<<""<<endl;
    }

}
void pattern11(int n){
    cout<<"Pattern 11"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<""<<endl;
    }
}
void pattern12(int n){
    int space=2*(n-1);
    cout<<"Pattern 12"<<endl;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=0;j<=space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<""<<endl;
        space=space-2;

    }
}
void pattern13(int n){
    
    int count=0;
    for(int i=0;i<n;i++){
        for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++){
              
              cout<<ch<<" ";
          }
        // ch=ch-count;
        // count=0;
        cout<<""<<endl;
    }
}
int main(){
    int t;
    cout<<"Enter the T"<<endl;
    cin>>t;
    pattern13(t);
}