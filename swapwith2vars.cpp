/* Logic is that a+b is total and if you substract a from total then you get b and then since new value of
a becomes a and then go on to substract the new a from total to get new b */
#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    cout<<"Original values:\na="<<a<<"\n"<<"b="<<b<<"\nNew values:\n";
    b=a+b;
    a=b-a;
    b=b-a;
    cout<<"a="<<a<<"\n"<<"b="<<b;
    return 0;
}
