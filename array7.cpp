//Linear Search.
#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int n){
    bool temp=0;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            temp=1;
            //cout<<"\nElement found at"<<i<<"index\n";
        }
        else{
            //cout<<"Element not found:/";
        }
    }
    return temp;
}

int main(){
    int size,find;
    cin>>size>>find;
    int arr1[10]={1,2,3,4,5,6,7,8,9,0};
    //check is 0 is present or not.
    cout<<search(arr1,size,find);
    
    
    
    
    return 0;
}