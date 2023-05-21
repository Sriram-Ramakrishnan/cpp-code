#include<iostream>
using namespace std;
class student{
protected:
    int reg_no;
    string name;
    string branch;
public:
    void getdata(){
        cout << "Name:"; cin >> name;
        cout << "Reg no:"; cin >> reg_no;
        cout << "Branch:"; cin >> branch;}
};

class sports : public student{
protected:
    string sports_name;
    string position;
    int sport_fees;
public:
    void sport_getdata(){
        cout << "Name of the sport:"; cin >> sports_name;
        cout << "Role you play in your respective sport:"; cin >> position;
        cout << "Fees paid"; cin >> sport_fees;
    }
    void print_s(){
        cout << "Name of the sport:" << sports_name << endl;
        cout << "Role you play in your respective sport:" << position << endl;
        cout << "Fees paid:" << sport_fees << endl;
    }
};

class cultural: public student{
protected:
    string cultural_name;
    string designation;
public:
    void cul_getdata(){
        cout << "Name of art form:"; cin >> cultural_name;
        cout << "Designation:"; cin >> designation;
    }
    void print_c(){
        cout << "Art:" << cultural_name << endl;
        cout << "Designation:" << designation << endl;
    }
};

class social_service: public student{
protected:
    string social_event;
    string designation;
    int charity;
public:
    void soc_getdata(){
        cout << "Name of the social event you were in:"; cin >> social_event;
        cout << "Designation:"; cin >> designation;
        cout << "Amount of money donated:"; cin >> charity;
    }
    void print_ss(){
        cout << "Social event:" << social_event << endl;
        cout << "Designation:"<< designation << endl;
        cout << "Amount of money donated:"<< charity << endl;
            }
};

int main(){
    sports a;cultural b;social_service c;
    a.getdata();a.sport_getdata();
    b.getdata();b.cul_getdata();
    c.getdata();c.soc_getdata();

    a.print_s();
    b.print_c();
    c.print_ss();
}
