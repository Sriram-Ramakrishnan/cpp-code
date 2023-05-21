#include <iostream>
using namespace std;

class sequence{
    protected:
    int n;
    int array[10];
    int ch;

    public:
    sequence(){}
    void input(){
        int n; cin >> n;
        for(int i=0;i<n;i++){
            cin >> array[i];
        }
    }
    int operator<(sequence s){
        int s1,s2;
        for(int i=0;i<n;i++){
            if(array[i]<0){
                s1-=array[i];
            }
            else{}
        }

        for(int i=0;i<n;i++){
            if(s.array[i]<0){
                s2-=s.array[i];
            }
        else{}
        }
        if(s1>s2){
            ch = 1;
        }
        else{
            ch = 0;
        }
        cout << ch;
        return ch;
    }

    int operator>(sequence s){
        int s1,s2;
        for(int i=0;i<n;i++){
            if(array[i]>0){
                s1+=array[i];
            }
            else{}
        }

        for(int i=0;i<n;i++){
            if(s.array[i]>0){
                s2+=s.array[i];
            }
        else{}
        }
        if(s1>s2){
            ch = 1;
        }
        else{
            ch = 0;
        }
        cout << ch;
        return ch;
    }
};

int main(){
    sequence s1,s2;
    s1.input();
    s2.input();
    int o1,o2,choice;
    cin>>choice;
    cin>>o1;
    cin>>o2;

    if(o1==1){
        if(choice==1){
            s1>s2;
        }
        else{
            s1<s2;
        }
    }
    else{
        if(choice==1){
            s2>s1;
        }
        else{
            s2<s1;
        }
    }
    return 0;
}
