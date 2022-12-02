//Arrays with functions
/*This time we'll make a function for reading and printing an array*/

#include<bits\stdc++.h>
using namespace std;
//function to print values for an array.
//(auto keyword is used in arguments since the u can use the function for array of any datatype)
void printArray(auto arr[], int size){
        cout<<"Array: ";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
//function to read values for an array.
//(auto keyword is used in arguments since the u can use the function for array of any datatype)
void readArray(auto arr[], int size){
    cout<<"Enter your inputs for the array: ";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cout<<endl;
    }
int main(){
    int array1[3]={1,2,3};
    //function call for print array1.
    printArray(array1,3);

    int array2[5];
    readArray(array2,5); // reads
    printArray(array2,5); // inputs

    char char1[4]={'a','b','c','d'};
    printArray(char1,4);
    return 0;
}