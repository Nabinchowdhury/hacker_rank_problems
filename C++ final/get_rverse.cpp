//Sample Input 0
//3
//Rakib 7 B 90 85
//Sakib 10 A 85 61
//Ahsan 9 C 36 58

//Sample Output 0
//Ahsan 9 C 36 58
//Sakib 10 A 85 61
//Rakib 7 B 90 85


#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        string s;
        int math_marks;
        int eng_marks;
};

int main()
{
    int n;
    cin>>n;
    Student a[100];
    for(int i=0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
    }
    for(int i=n-1; i>=0; i--){
        cout<<a[i].nm<<" " <<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}