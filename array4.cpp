//Program to print maximum and minimum of an array.
#include<bits/stdc++.h>
using namespace std;

void getInput(int array[],int n){
    cout<<"Enter your inputs for the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
}

int getMax(int array[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max= array[i];
        }
    }
    return max;
}

int getMin(int array[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min= array[i];
        }
    }
    return min;
}

int main(){
    int num[4];
    //taking inputs for array elements.
    getInput(num,4);
    //calling function which returns the max from the array.
    cout<<"\nMaximum is "<<getMax(num,4)<<".\n";
    //calling function which returns the min from the array.
    cout<<"\nMinimum is "<<getMin(num,4)<<".\n";
    //cout<<INT_MAX<<INT_MIN;
    return 0;
}