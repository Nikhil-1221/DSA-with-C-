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
// int main(){
//     int a=1;
//     int b=2;

//     if((a--) > 0 || (++b)>2){
//         cout<<"Stage1 - Inside If ";
//     }
//     else{
//         cout<<"Stage2 - Inside else ";
//     }
//     cout<<a<<" "<<b<<endl;
// }

//  int main(){
//     int a=1;
//     int b=a++;
//     int c=++a;
//     cout<<a<<endl<<b<<endl<<c<<endl;
// }

                    // For loop
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Print counting from 1 to n"<<endl;
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// withiout initialization inside for loop
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Print counting from 1 to n"<<endl;
//     int i=1;
//     for(;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// withiout increment or decrement  inside for loop
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Print counting from 1 to n"<<endl;
//     int i=1;
//     for(;i<=n;){
//         cout<<i<<endl;
//         i++;
//     }
// }

// withiout conditions inside for loop
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Print counting from 1 to n"<<endl;
//     int i=1;
//     for(;;){
//         if(i<=n){
//         cout<<i<<endl;
//         }
//         i++;
//     }
// }

// withiout conditions inside for loop and using break key word
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     cout<<"Print counting from 1 to n"<<endl;
//     int i=1;
//     for(;;){
//         if(i<=n){
//         cout<<i<<endl;
//         }
//         else{
//             break;
//         }
//         i++;
//     }
// }

// for loop using multiple initialization , conditions and increment or decrement
// int main(){
//     for(int a=2,b=4;a>=0 && b>=1;a--,b--){
//         cout<<a<<"      "<<b<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         // sum=sum+i;
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }

//Fibonacci Series
// int main(){
//     int n,first,second;
//     cout<<"No fo element in fibonacci series :";
//     cin>>n;
//     cout<<"first two element of fibonacci series :"<<endl;
//     cin>>first>>second;
//     cout<<first<<" "<<second<<" ";
//     for(int i=0;i<n;i++){
//         int next=first+second;
//         first=second;
//         second=next;
//         cout<<next<<" ";
//     }
// }

// Prime No
// int main(){
//     int n;
//     bool flag=true;
//     cin>>n;
//     for(int i=2;i<n;i++){
        
//         if(n%i==0){
//             flag=false;
//             break;
//         }
// }
//     if(flag){
//             cout<<"Prime";
//     }
//     else{
//         cout<<"NOt Prime";
//     }
// }

                    // continue
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Hi"<<endl;
//         cout<<"Hello"<<endl;
//         continue;
//         cout<<"Reply to kar de"<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"Good Morning"<<endl;
//         if(i==2){
//         continue;
//         }
//         cout<<i<<" Reply to kar de"<<endl;
//     }
// }

// int main(){
//     for(int i=0;i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }

// int main(){
//     for(int i=0;i<=15;i+=2){
//         cout<<i<<" ";
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//         cout<<i<<" "<<j<<endl;
//         }
//     }
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             if(i+j==5){
//                 break;
//             }
//         cout<<i<<" "<<j<<endl;
//         }
//     }
// }

            // variable and scope
// int main(){
//     int a=0;
//     cout<<a<<endl;
//     if(true){
//         int a=5;
//         cout<<a<<endl;
//         a++;
//         cout<<a<<endl;
//     }
//     cout<<a<<endl;
// }
// int main(){
//     int a=0;
//     cout<<a<<endl;
//     if(true){
//         // int a=5;
//         cout<<a<<endl;
//         a++;
//         cout<<a<<endl;
//     }
//     cout<<a<<endl;
// }

// int main(){
//     int i=4;
//     for(i;i<5;i++){
//         cout<<i<<endl;
//     }
// }