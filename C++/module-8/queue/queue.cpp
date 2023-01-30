#include <iostream>
using namespace std;
const int maxQsize = 100;
class Queue
{
    char q[maxQsize];
    int size;
    int putloc, getloc;

public:
    Queue(int len)
    {
        if (len > maxQsize)
            len = maxQsize;
        else if (len <= 0)
            len = 1;
        size = len;
        putloc = getloc = 0;
    };
    void put(char ch)
    {
        if (putloc == size)
        {
            cout << " -- Очередь полна.\n";
            return;
        }
        putloc++;
        q[putloc] = ch;
    };
    char get()
    {
        if (getloc == putloc)
        {
            cout << " -- Очередь пуста.\n";
            return 0;
        }
        getloc++;
        return q[getloc];
    }
};
int main()
{
    Queue bigQ(100);
    Queue smallQ(4);
    char ch;
    int i;
    cout << "Используем bigQ для хранения латинского алфавита\n";
    for (i = 0; i < 26; i++)
        bigQ.put('A' + i);
    cout << "BigQ: ";
    for (i = 0; i < 26; i++)
    {
        ch = bigQ.get();
        if (ch != 0)
            cout << ch;
    }
    cout << "\n\n";
    cout << "Используем smallQ для демонстрации ошибок\n";
    for (i = 0; i < 5; i++)
    {
        cout << "Пытаемся записать" << (char)('Z' - i);
        smallQ.put('Z' - i);
        cout << " \r ";
    }
    cout << "\n";
    cout << "Содержимое smallQ: ";
    for (i = 0; i < 5; i++)
    {
        ch = smallQ.get();
        if (ch != 0)
            cout << ch;
    }
    cout << "\n";
}