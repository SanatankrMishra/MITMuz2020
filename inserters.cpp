#include <iostream>
#include <cstring>
using namespace std;

class phonebook{
        char name[80];
        int areacode;
        int prefix;
        int num;
    public:
        phonebook(char *n,int a,int p, int nm){
            strcpy(name,n);
            areacode=a;
            prefix=p;
            num=nm;
        }
        friend ostream &operator<<(ostream &stream, phonebook o);
};

ostream &operator<<(ostream &stream, phonebook o){
    stream<<o.name<<" ";
    stream<<" (" <<o.areacode << ") ";
    stream<<o.prefix<< "-"<< o.num << "\n";
    return stream;
}

int main(){

    phonebook a("Ted", 111, 555, 1234);
    phonebook b("Alice", 312, 555, 5768);
    phonebook c("Tom", 212, 555,9991);

    cout<<a<<b<<c;

    return 0;
}
