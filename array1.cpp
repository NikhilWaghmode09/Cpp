/*Initializing the array.
Getting elements in an array from user
Printing the entire array
Accessing any element from an array using it's index.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    //Initializing the array. since we provided only first two elements the rest will be 0
    int Phone[10]={9,1};
    cout<<"Initialized an Array: ";
    
    for(int i=0;i<10;i++)
    {
        cout<<Phone[i]<<" ";
    }
    cout<<endl;

    //Getting elements in an array from user
    for(int i=0;i<10;i++) 
    {
        cin>>n;
        Phone[i]=n;
    }
    cout<<"ARRAY:";

    //Printing the entire array
    for(int i=0;i<10;i++) 
    {
        cout<<Phone[i]<<" ";
    }
    //Accessing the 8th element from an array using it's index.
    cout<<"\n8th Element: "<<Phone[7]; 
    return 0;
}