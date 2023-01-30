#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[] = "Helllo";
    char *start, *end;
    int len;
    char t;
    cout <<"Исходная: "<< str <<"\n";
    len = strlen(str) ;
    start  = str;
    end = &str[len-1];
    while(start < end){
        t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }
     
return 0;
}