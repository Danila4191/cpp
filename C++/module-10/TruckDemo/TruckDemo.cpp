#include <iostream>
using namespace std;
class Vehicle
{
    int passengers;
    int fuelcap;
    int mpg;

public:
    Vehicle(int p, int f, int m)
    {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }
 int range()
{
    return mpg * fuelcap;
}
int get_passengers(){return passengers;}
int get_fuelcap(){return fuelcap;}
int get_mpg(){return mpg;}
};
class Truck : public Vehicle {
    int cargocap;
    public:
    Truck(int p,int f,int m, int c): Vehicle(p,f,m)
    {
        cargocap = c;
    }
    int get_cargocap(){return cargocap;}
};
int main(){
    Truck semi(2,200,7,44000);
    Truck pickup(3,28,15,2000);
    int dist = 252;
   cout << "Фургон может везти " << semi.get_cargocap( ) <<
" фунтов груза \n " ;
cout << "Он имеет дальность пробега " <<
semi.range() << " миль\n";
cout << "Пробег в " << dist << " миль требует " <<
dist / semi.get_mpg() <<
" галлонов топлива .\n \n" ;
cout << "Пикап может везти " << pickup.get_cargocap() <<
" фунтов грузa\n " ;
cout << "Он имеет дальность пробега " <<
pickup.range()<< " миль\n";
cout << "Пробег в " << dist << " миль требует " <<
dist / pickup.get_mpg() <<
" галлонов топлива\n";
return 0;

}