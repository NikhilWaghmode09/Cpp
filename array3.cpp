//Types of Arrays

#include<bits\stdc++.h>
using namespace std;
//function to print values for an array.
//(auto keyword is used in arguments since the u can use the function for array of any datatype)
void printArray(auto arr[],int size){
        cout<<"Array: ";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

//function to read values for an array.
//(auto keyword is used in arguments since the u can use the function for array of any datatype)
void readArray(auto arr[],int size){
    cout<<"Enter your inputs for the array: ";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cout<<endl;
    }

int main(){
    int int1[4];
    cout<<"Integer ";
    printArray(int1,4);

    char char1[4];
    readArray(char1,4);
    cout<<"Character ";
    printArray(char1,4);

    bool bool1[4]={0};
    cout<<"Boolean ";
    printArray(bool1,4);

    float float1[4];
    cout<<"Float ";
    printArray(float1,4);

    double double1[4];
    cout<<"Double ";
    printArray(double1,4);
    //note that since we haven't initialized any values the outputs will be garbage values.
    return 0;
}