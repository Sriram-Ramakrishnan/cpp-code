#include <iostream>
using namespace std;
class sample{
    int a,b;
    public:
        sample()
        {
            a=10;
            b=20;
         }
         ~sample()
         {
             cout<<"\n a="<<a<<endl;
             cout<<"\n b="<<b<<endl;
             cout<<"deleted..........";
         }

      };

int main()
      {
          sample s;
          return 0;
      }
