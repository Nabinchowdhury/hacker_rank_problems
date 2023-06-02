#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        char name [100];
        float height;
        int age;

        Person( char *n, float h, int s){
            strcpy(name, n);
            height = h;
            age = s;
        }
};

int main()
{
    char n[100]="Nabin";
    char a[100]="Arpita";
    Person *nabin= new Person(n, 5.9, 26);
    Person *arpita= new Person(a, 5.2, 22);
    if ((*nabin).age == (*arpita).age){
        return 0;
    }
    else if((*nabin).age > arpita->age){
        cout<< (*nabin).name;
    }
    else if((*nabin).age < (*arpita).age){
        cout<< (*arpita).name;
    }
    return 0;
}