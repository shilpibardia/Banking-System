#include <iostream>
#include <algorithm>
using namespace std;

class Bank{
    private:
        double salary;
    public:
    void createAccount(int acc_no){
        cout<<"Account Number: "<< acc_no<<endl;
        cout<<"Account Created"<<endl;
    }
    void setSalary(double s){
        salary=s;
    }
    double getSalary(){
        return salary;
    }
};
int main(){
    Bank b1;
    b1.createAccount(1000);
    b1.setSalary(543.65);

    cout<<"Salary: "<<b1.getSalary()<<endl;

    return 0;
}