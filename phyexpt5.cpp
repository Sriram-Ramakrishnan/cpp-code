#include <iostream>
#include <cmath>
#include <string>

using namespace std;
class expt6{
private:
    float a_o_p = 60;
struct readings{
    float msr;
    float vsr;
    float tsr;};

struct row{
    struct readings r1;
    struct readings r2;
    float min_d;
    float u;
    };
    struct row table[2];

public:
    double deg_rad(double angle){
        return angle*3.1416/180;}
    double min_deg(double vsr){
        return vsr/60;}
    void input(){
        float num,denom;
        for (int i=0;i<2;i++){
        cout << "MSR for ray 1:"; cin >> table[i].r1.msr;
        cout << "VSR for ray 1:"; cin >> table[i].r1.vsr;
        cout << "MSR for ray 2:"; cin >> table[i].r2.msr;
        cout << "VSR for ray 2:"; cin >> table[i].r2.vsr;
        table[i].r1.tsr = table[i].r1.msr + min_deg(table[i].r1.vsr);
        table[i].r2.tsr = table[i].r2.msr + min_deg(table[i].r2.vsr);
        table[i].min_d = table[i].r2.tsr - table[i].r1.tsr;
        num = deg_rad(a_o_p + table[i].min_d); denom = deg_rad(a_o_p);
        table[i].u = sin(num/2)/sin(denom/2);
    }}

    void printtable(){
        float avg = 0 ;
        cout << "\n   R1  " << "    R2   " << " Min Dev" << "  RI" << endl;
        std::cout.precision(6);
        for (int i=0;i<2;i++){
            std::cout << table[i].r1.tsr << " "
                 << table[i].r2.tsr << " "
                 << table[i].min_d << " "
                 << table[i].u << endl;
            avg += table[i].u;
        }
        cout << "Average Refractive Index is: " << avg/2 ;}
};

int main(){
    expt6 standard;
    standard.input();
    standard.printtable();
    return 0;
}
