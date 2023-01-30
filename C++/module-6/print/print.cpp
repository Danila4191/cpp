#include <iostream>
using namespace std;
void println(bool b);
void println(int i);
void println(long i);
void println(char ch);
void println(char *str);
void println(double d);

void print(bool b);
void print(int i);
void print(long i);
void print(char ch);
void print(char *str);
void print(double d);
int main(){
    println(true);
    println(10);
    println("Это проверка");
    println("x");
    println(99L);
    println(123.23);

    print("Вот некоторые значения: ");
    print(false);
    print(" ");
    print(88);
    print(" ");
    print(10000L);
    print(" ");
    print(100.01);

    println(" end!");

    return 0;
}
void println(bool b)
{
    if (b)
        cout << "true\n";
    else
        cout << "false\n";
}
void println(int i)
{
    cout << i << "\n";
}
void println(long i)
{
    cout << i << "\n";
}
void println(char ch)
{
    cout << ch << "\n";
}
void println(char *str)
{
    cout << str << "\n";
}
void println(double d)
{
    cout << d << "\n";
}

void print(bool b)
{
    if (b)
        cout << "true\n";
    else
        cout << "false\n";
}
void print(int i)
{
    cout << i;
}
void print(long i)
{
    cout << i;
}
void print(char ch)
{
    cout << ch;
}
void print(char *str)
{
    cout << str;
}
void print(double d)
{
    cout << d;
}