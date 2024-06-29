#include<iostream>
using namespace std;

// 3
// ***
// ***
// ***
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// 3
// 111
// 222
// 333
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// 3
// 123
// 123
// 123
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// 3
// 321
// 321
// 321
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// 3
// 1 2 3 
// 4 5 6 
// 7 8 9
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

//Triangle 

// 3
// * 
// * * 
// * * * 
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// 3
// 1
// 2 2
// 3 3 3
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// 1 
// 1 2 
// 1 2 3 
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<col<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// 1 
// 2 3 
// 4 5 6 
// int main(){
//     int n;
//     cin>>n;
//     int row = 1,count =1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// 1
// 2 3
// 3 4 5
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         int value=row;
//         while(col<=row){
//             cout<<value<<" ";
//             value++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// 1 
// 2 3 
// 3 4 5 
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row+col-1<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// 1 
// 2 1 
// 3 2 1
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row-col+1<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// AAA
// BBB
// CCC
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<ch;
//             col++;
//         }
//         ch++;
//         row++;
//         cout<<endl;
//     }
// }

// 3
// AAA
// AAA
// BBB
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<ch;
//             col++;
//         }
//         ch=ch+row-1;
//         row++;
//         cout<<endl;
//     }
// }

// 3
// A B C
// A B C
// A B C
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         char ch='A';
//         int col=1;
//         while(col<=n){
//             cout<<ch<<" ";
//             ch=ch+1;
//             col++;
//         }
//         row++;
//         cout<<endl;
//     }
// }

// 3
// A A B 
// A A B 
// A A B 
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         char ch='A';
//         int col=1;
//         while(col<=n){
//             cout<<ch<<" ";
//             ch=ch+col-1;
//             col++;
//         }
//         row++;
//         cout<<endl;
//     }
// }

// 3
// A B C 
// D E F 
// G H I 
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<ch<<" ";
//             ch++;
//             col++;
//         }
//         row++;
//         cout<<endl;
//     }
// }

// 3
// ABC
// BCD
// CDE
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch1=ch+row+col-2;
//             cout<<ch1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// A
// BB
// CCC
// int main(){
//     int n;
//     cin>>n;
//     int row =1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch='A'+row-1;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// A
// AB
// ABC
// int main(){
//     int n;
//     cin>>n;
//     int row =1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch='A'+col-1;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 3
// A
// BC
// DEF
// int main(){
//     int n;
//     cin>>n;
//     int row =1;
//     char ch = 'A';
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<ch;
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

int main(){
    int n;
    cin>>n;
    
}