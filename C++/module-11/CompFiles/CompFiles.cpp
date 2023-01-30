#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    register int i;
    int numread;
    unsigned char buf1[1024], buf2[1024];
    if(argc!=3){
        cout << "Использование: comp files <файл1> <файл2>\n";
        return 1;
    }
    ifstream f1 (argv[1], ios::in|ios::binary);
    if(!f1){
        cout <<"Не могу открыть первый файл\n";
       return 1;
    }
     ifstream f2 (argv[2], ios::in|ios::binary);
    if(!f2){
        cout <<"Не могу открыть второй файл\n";
       return 1;
    }
    cout << "Сравнение файлов ...\n " ;
do {
f1.read (( char *) buf1 , sizeof buf1 );
f2.read (( char *) buf2 , sizeof buf2 );
if ( f1.gcount () != f2.gcount () ) {
cout << "Файлы имеют разную длинуЛ п";
f1.close ();
f2.close ();
return 0;
}
for(i= 0; i< f1.gcount(); i++)
if ( buf1 [ i ] != buf2 [ i ] ) {
cout << "ФайлыразличаютсяЛп";
f1.close ();
f2.close ();
return 0;
}
} while ( !f1.eof () && !f2.eof () ) ;
cout << "Файлы совпадаютЛп";
f1.close ();
f2.close ();
return 0 ;
}