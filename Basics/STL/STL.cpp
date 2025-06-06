#include<bits/stdc++.h>
using namespace std;

// void explainPair(){
//     pair<int,int> p={1,2};
//     cout<<p.first<<" "<<p.second;
//     pair<int , pair<int, int>> p={1,{1,3}};
//     cout<<p.first<<" "<< p.second;
//     pair<int,int>arr[]={{2,3},{2,4}};
//     cout<< arr[1].second;
// }
void explainVector(){
    vector<int> v;
    // insert element in vector
    v.push_back(1); //{1}
    v.emplace_back(2); //{1,2}

    vector<int>ve(5,100);//{100,100,100,100,100}
    cout<<ve[3]<<endl;//accesing the element in vector

    // Iterator in vector is used to excess vector element
    vector<int>::iterator it=v.begin(); //it will point at ve[0]

    // auto
    for(auto i=ve.begin();i!=ve.end();i++){
        cout<<*(i)<<" ";
    }
    // for each
    for(auto it:v){
        cout<<it<<endl;
        cout<<it<<endl;
    }
    cout<<"ERASE"<<endl;
    v.erase(v.begin()+1);
    cout<<" "<< v[1]<<endl;
}
void explainStack(){
    stack<int> st;
    // insert in stack
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(4);//{4,3,2,1}
    st.push(5);
    // st.top();//4 prints 4
    cout<< st.top() <<endl;
    cout<<st.size() <<endl;
    cout<<st.empty()<<endl;
}
void explainQueue(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);//{1,2,3,4}
    cout<<q.back()<<endl; //4
    cout<<q.front()<<endl;//1

}
int main(){
    cout<<"STL in C++"<<endl;
    explainQueue();
}