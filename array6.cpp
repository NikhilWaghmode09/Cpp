//Program to store sum of elements of an array.
#include<bits/stdc++.h>
using namespace std;
int sum_arr(int array1[], int size){
    int sumn = 0;
    for(int i=0;i<size;i++){
        sumn+=array1[i];
    }
    return sumn;
}
int main(){
    int size;
    cout<<"Enter size of the array:";
    cin>>size;
    cout<<"\nEnter numbers in array:";
    int num[10000];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"\nSum of the numbers is: "<<sum_arr(num,size);
    return 0;
}