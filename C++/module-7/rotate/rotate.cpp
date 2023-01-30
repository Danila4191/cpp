#include <iostream>
using namespace std;
unsigned char rrotate(unsigned char val, int n);
unsigned char lrotate(unsigned char val, int n);
void show_binary(unsigned int u);
int main()
{
    char ch ='T';
    cout<<"ИСходное значение в двоичном коде:\n";
    show_binary(ch);
    cout << "Циклический сдвиг врпаво 8 раз:\n";
    for(int i=0;i<8;i++){
        ch=rrotate(ch,1);
        show_binary(ch);

    }
    cout<<" Циклический сдвиг влево 8 раз : \n " ;
    for(int i=0;i<8;i++){
        ch=lrotate(ch,1);
        show_binary(ch);

    }
    return 0;
}
unsigned char lrotate(unsigned char val, int n)
{
    unsigned int t;
       t= val;
    for(int i=0; i< n; i++){
        t=t<<1;
        if(t&256)
        t=t|1;
    };
    return t;
}
unsigned char rrotate(unsigned char val, int n)
{
    unsigned int t;
    t= val;
    t = t << 8 ;
    for(int i=0; i< n; i++){
        t=t>>1;
        if(t&128)
        t=t|32768;
        t = t >> 8;
    }
    return t;
}
void show_binary(unsigned int u){
    int t;
    for(t=128;t>0;t=t/2)
    if(u&t)cout<< "1 ";
    else cout<< "0 ";
    cout<<"\n";
}