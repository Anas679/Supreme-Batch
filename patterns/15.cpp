#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r = 0; r<n; r+=1){
            for(int c = 0; c<r+1; c+=1){
                cout<<r+1;
                if(c !=r)
                cout<<"*";
            }
            cout<<endl;
    }

    for(int r = 0; r<n; r+=1){
            for(int c = 0; c<n-r; c+=1){
                cout<<n-r;
                if(c !=n-r-1)
                cout<<"*";
            }
            cout<<endl;
    }
}