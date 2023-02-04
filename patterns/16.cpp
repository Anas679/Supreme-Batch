#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r = 0; r<n; r+=1){
        int c;
            for(int c = 0; c<r+1; c+=1){
                cout<< c+1 ;
            }
           

            //remaining counting
            for(int c=r; c>=1; c=c-1){
                cout<<endl;
            }
        cout<<endl;
    }
}    