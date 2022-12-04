//ARRAY_NAME STORES THE ADDRESS OF THE FIRST ELEMENT OF ARRAY.
//so remember whenever you pass an array to a funct. and 
//update it in funct. the orginal array is changed unlike varaibles.
#include<bits/stdc++.h>
using namespace std;
void update1(int n1){
    n1= n1+1;
    cout<<"\nUpdated Value of int inside the function: "<<n1<<endl;
}
void update2(int arr1[],int size){
    //updating array's 3rd element
    arr1[2]=120;
    cout<<"\nArray inside the function is: ";
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
}
int main(){
    int n = 6;
    update1(n);
    cout<<"Value of int outside of function.(which remains same as original): "<<n<<endl;

    cout<<"\nHowever this is not the case with arrays.\n";

    int array1[3]={1,2,3};
    // cout<<array1; //THIS GIVES THE ADDRESS OF THE ARRAY.
    update2(array1,3);
    cout<<"\nArray outside the function is: ";
    for(int i=0;i<3;i++){
        cout<<array1[i]<<" ";
    }
    return 0;
}