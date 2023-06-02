//Sample Input 0
//5
//Munna 8 D 25 50 30
//Shojoy 9 E 26 40 50
//Asif 10 C 27 55 60
//Joy 9 G 28 66 45
//Bijoy 7 E 29 68 99

//Sample Output 0
//Bijoy 7 E 29 68 99
//Asif 10 C 27 55 60
//Joy 9 G 28 66 45
//Shojoy 9 E 26 40 50
//Munna 8 D 25 50 30


#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        string s;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp(Student a, Student b){
    if(a.math_marks+ a.eng_marks != b.math_marks+ b.eng_marks){
        if(a.math_marks+ a.eng_marks< b.math_marks+ b.eng_marks) return false;
        else return true;
    }
    else{
        if( a.id> b.id ) return false;
        else return true;
    }
}

int main()
{
    int n;
    cin>>n;
    Student a[100];
    for(int i=0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].nm<<" " <<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }

    return 0;
}