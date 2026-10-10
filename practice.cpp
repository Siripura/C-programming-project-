#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct datta{
    string name;
    int age;
    string country;
};
int main(){
    vector <datta> dta;
    datta obj;
    cout<<" Please enter name: ";
    cin>>obj.name;
    cout<<" Please enter age: ";
    cin>>obj.age;
    cout<<" Please enter country: ";
    cin>>obj.country;

    dta.push_back(obj);

    for(const datta& stu : dta){
        cout<<"name: "<<stu.name<<" \n"
            <<"age: "<<stu.age<<" \n"
            <<"country: "<<stu.country<<" \n";
    }

    



    return 0;
}