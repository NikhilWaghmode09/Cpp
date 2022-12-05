//Linear Search.
#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
    bool temp=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            temp=1;
        }
    }
    return temp;
}

int main(){
    int find;
    cout<<"Enter the element which is to be found: ";
    cin>>find;

    int arr1[1000]={1,2,3,4,5,6,7,8,9,0};
    //check if 0 is present or not.
    bool found = search(arr1,10,find);
    if(found){
        cout<<"\nElement found.";
    }
    else{
        cout<<"Element not found:/";
    }

    return 0;
}
