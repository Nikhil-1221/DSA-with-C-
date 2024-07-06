#include<iostream>
using namespace std;
int main(){
    // Operator
    int a=2;
    int b=3;
    // And Operator
    cout<<"a&b => "<<(a&b)<<endl;
    //Or Operator
    cout<<"a|b => "<<(a|b)<<endl;
    // NOT Operator
    cout<<"~a => "<<(~a)<<"         "<<"~b => "<<(~b)<<endl;
    // Xor Operator
    cout<<"a^b =>"<<(a^b)<<endl;
    //Left Shift
    cout<<"a<<1 => "<<(a<<1)<<"       "<<"a<<2 => "<<(a<<2)<<endl;
    // Right Shift
    cout<<"a>>1 => "<<(a>>1)<<"       "<<"a>>2 => "<<(a>>2)<<endl;

    // Negative no
    a=-2;
    //Left Shift
    cout<<"a<<1 => "<<(a<<1)<<"       "<<"a<<2 => "<<(a<<2)<<endl;
    // Right Shift
    cout<<"a>>1 => "<<(a>>1)<<"       "<<"a>>2 => "<<(a>>2)<<endl;


}