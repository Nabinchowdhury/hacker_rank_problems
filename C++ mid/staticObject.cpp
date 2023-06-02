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

Person fun(){
    char n[100]= "Krishan";
    Person nabin(n, 5.9, 26);
    return nabin;
}
int main()
{
    Person nabin= fun();
    cout<< nabin.name<<" "<<nabin.height<<" "<<nabin.age;
    return 0;
}