#include <bits/stdc++.h>
using namespace std;
int main(){
    int *p,size;
    cout<<"Enter size of array  : ";
    cin>>size;
    p = new int[size];
    cout<<"Enter the value of array : "<<endl;
    for(int i = 0;i<size;i++){
        cin>>p[i];
    }
    cout<<endl;
    for(int i = 0; i<size; i++){
        cout<<p[i]<<endl;

    }
    cout<<"Reverse of the array : "<<endl;

    for(int i = size-1; i>=0;i--){
        cout<<p[i]<<endl;
    }
    delete[] p;

    return 0;
}

