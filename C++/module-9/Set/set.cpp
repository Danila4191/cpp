#include <iostream>
using namespace std;
const int MaxSize = 100;
class Set
{
    int len;
    char members[MaxSize];
    int find(char ch);

public:
    Set() { len = 0; }
    int getLength() { return len; }
    void showset();
    bool isMember(char ch);
    Set operator +(char ch);
    Set operator -(char ch);
    Set operator +(Set ob2);
    Set operator -(Set ob2);
   
};
    int Set::find (char ch){
        int i;
        for (i = 0; i < len; i++)
            if (members[i] == ch)
                return i;
        return -1;
    }
    void Set::showset()
    {
        cout << "{ ";
        for (int i = 0; i < len; i++)
            cout << members[i] << " ";
        cout << "}\n";
    }
    bool Set::isMember(char ch)
    {
        if (find(ch) != -1)
            return true;
        return false;
    }
    Set Set::operator+(char ch)
    {
        Set newset;
        if (len == MaxSize)
        {
            cout << "Множество полно\n";
            return *this;
        }
        newset = *this;
        if (find(ch) == -1)
        {
            newset.members[newset.len] = ch;
            newset.len++;
        }
        return newset;
    }
    Set Set::operator-(char ch)
    {
        Set newset;
        int i = find(ch);
        for (int j = 0; j < len; j++)
            if (j != i)
                newset = newset + members[j];
        return newset;
    }
    Set Set::operator+(Set ob2)
    {
        Set newset = *this;
        for (int i = 0; i < ob2.len; i++)
            newset = newset + ob2.members[i];
        return newset;
    }
    Set Set::operator-(Set ob2)
    {
        Set newset = *this;
        for (int i = 0; i < ob2.len; i++)
            newset = newset + ob2.members[i];
        return newset;
    }

int main()
{
    Set s1;
    Set s2;
    Set s3;

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';
    cout << "sl после добавления А В С: ";
    s1.showset();
    cout << "\n";
    cout << "Проверяем на членство, используя isMember().\n";
    if (s1.isMember('B'))
        cout << "В является членом sl. \n ";
    else
        cout << "В не является членом sl . \n ";
    if (s1.isMember(' T '))
        cout << "T является членом sl . \n ";
     else cout << "T не является членом sl. \n ";
    cout << "\n";
    s1 = s1 - 'B';
    cout << " sl после sl = sl - 'B ': ";
    s1.showset();
    s1 = s1 - 'А';
    cout << "sl после sl = sl - 'A': ";
    s1.showset();
    s1 = s1 - 'C';
    cout << "sl после a l = sl - 'C': ";
    s1.showset();
    cout << "\n";
    s1 = s1 + 'A';
    s1 = s1 + ' В';
    s1 = s1 + 'С';
    cout << " sl после добавления А В С: ";
    s1.showset();
    cout << "\n";
    s2 = s2 + 'A';
    s2 = s2 + 'X ';
    s2 = s2 + 'W';
    cout << "s2 после добавления A X W: ";
    s2.showset();
    cout << "\n";
    s3 = s1 + s2;
    cout << "s3 после s3 = sl + s2: ";
    s3.showset();
    s3 = s3 - s1;
    cout << "s3 после s3 - sl : ";
    s3.showset();
    cout << "\n";
    cout << "s2 после s2 = s2 - s2: ";
    s2 = s2 - s2;
    s2.showset();
    cout << "\n";
    s2 = s2 + 'C';
    s2 = s2 + ' B ';
    s2 = s2 + 'А';
    cout << "s2 после добавления С В А: ";
    s2.showset();
    return 0;
};