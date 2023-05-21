#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class nrr {
    private:
        double total_s = 0,total_o = 0;
        double s_overs = 0,o_overs = 0;
    public:
        double ncalc(double score, double overs){
            double avg;
            avg = score/overs;
            return avg;}

        void inputscore(int n){
            double score,over;
            for (int i=0;i<n;i++){
                cout << "Runs scored by team in Match " << (i+1) << ":" << endl;
                cin >> score;
                cout << "Overs in Match " << (i+1) << ":" << endl;
                cin >> over;
                total_s += score; s_overs += over_appr(over);
                cout << "Runs scored by opponent in Match " << (i+1) << ":" << endl;
                cin >> score;
                cout << "Overs in Match " << (i+1) << ":" << endl;
                cin >> over;
                total_o += score; o_overs += over_appr(over);
            }   }

        double over_appr(double over){
            double e_over;
            e_over = over - (int) over;
            over = over - e_over;
            e_over = e_over*10/6;
            over = over + e_over;
            return over;}

        void print_nrr(){
            cout << "The Net Run rate is:"<< ncalc(total_s,s_overs) - ncalc(total_o,o_overs) << endl;}
};

int main(){
    fstream fin;
    fin.open("Nrr_data.csv", ios::in);
    double num;
    cout << "Enter Number:";
    cin >> num;
    nrr csk;
    csk.inputscore(num);
    csk.print_nrr();
    return 0;
}
