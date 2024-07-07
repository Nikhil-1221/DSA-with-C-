#include<iostream>
using namespace std;
// int main(){
//     // Operator
//     int a=2;
//     int b=3;
//     // And Operator
//     cout<<"a&b => "<<(a&b)<<endl;
//     //Or Operator
//     cout<<"a|b => "<<(a|b)<<endl;
//     // NOT Operator
//     cout<<"~a => "<<(~a)<<"         "<<"~b => "<<(~b)<<endl;
//     // Xor Operator
//     cout<<"a^b =>"<<(a^b)<<endl;
//     //Left Shift
//     cout<<"a<<1 => "<<(a<<1)<<"       "<<"a<<2 => "<<(a<<2)<<endl;
//     // Right Shift
//     cout<<"a>>1 => "<<(a>>1)<<"       "<<"a>>2 => "<<(a>>2)<<endl;

//     // Negative no
//     a=-2;
//     //Left Shift
//     cout<<"a<<1 => "<<(a<<1)<<"       "<<"a<<2 => "<<(a<<2)<<endl;
//     // Right Shift
//     cout<<"a>>1 => "<<(a>>1)<<"       "<<"a>>2 => "<<(a>>2)<<endl;
    
//     // Incremen / Decrement Operator
//     int c=8,i=2;
//     int sum = c+i++;//POST INCREMENT/DECREMENT
//     cout<<"sum = "<<sum<<"          i = "<<i<<endl;
//     c=8,i=2;
//     sum = c+--i;//PRE INCREMENT/DECREMENT
//     cout<<"sum = "<<sum<<"          i = "<<i<<endl;

//     i=7;
//     cout<<(++i)<<endl;
//     //i=8  output=8
//     cout<<(i++)<<endl;
//     //output=8  i=9
//     cout<<(--i)<<endl;
//     //i=8  output=8
//     cout<<(i--)<<endl;
//     // output=8  i=7
// }

// int main(){
//     int a,b=1;
//     a=10;
//     if(++a)
//         cout<<b;
//     else
//         cout<<++b;
// }


// int main(){
//     int a=1;
//     int b=2;
//     if(a-- > 0 && ++b > 2){
//         cout<<"Stage1 - Inside If ";
//     }else{
//         cout<<"Stage2 - Ina=side else";
//     }
//     cout<<a<<" "<<b<<endl;
// }

// Problem of the Day
// OUTPUT

int main(){
    int a=1;
    int b=2;

    if((a--) > 0 || (++b)>2){
        cout<<"Stage1 - Inside If ";
    }
    else{
        cout<<"Stage2 - Inside else ";
    }
    cout<<a<<" "<<b<<endl;
}
