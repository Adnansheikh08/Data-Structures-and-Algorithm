#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1={1,1,2,3,4,5};
    vector<int> arr2={2,3,4,4,5,6};
    int ch;
    cout<<"Enter your Choice"<<endl;
    cin>>ch;
    set<int>st;
    vector<int>Union;
    
    switch(ch){
        case 1:
        for(int i=0;i<arr1.size();i++){
            st.insert(arr1[i]);   
        }
        for(int i=0;i<arr2.size();i++){
            st.insert(arr2[i]);
            
        }
        
        for (int val : st) {          // iterate over the set
    Union.push_back(val);     // safely append each element
}
        cout<<"Loop"<<endl;
        for(int i=0;i<Union.size();i++){
            cout<<Union[i]<<endl;
        }
        break;
        default:
        break;
    }
}