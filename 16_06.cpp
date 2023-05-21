#include <iostream>
using namespace std;

class sequence
{
    public:
    int n;
    int array[10];
    int ch;


    sequence()
    {}
        void output()
        {

            cin>>n;
            for(int i=0;i<n;i++)
            {
                cin>>array[i];
            }
        }

    sequence operator < (sequence s)
    {
        int s1,s2;

        for(int i=0;i<n;i++)
        {
            if(array[i]<0)
            {
                s1-=array[i];
            }
            else
            {}
        }
        for (int i=0;i<n;i++)
        {
            if(s.array[i]<0)
            {
                s2-=s.array[i];
            }
            else
            {}
            if(s1>s2)
            {
                ch=1;
                cout<<1<<endl;
            }
            else
            {
                ch=0;
                cout<<0<<endl;
            }
        }

    }
    sequence operator>(sequence s)
    {
        int s1,s2;
        for (int i=0;i<n;i++)
        {
         if(array[i]>0)
         {
             s1+=array[i];
         }

        else{}
        }


    for (int i=0;i<n;i++)
    {
        if(s.array[i]>0)
        {
            s2+=s.array[i];
        }
        else
        {}
        if(s1>s2)
        {
            ch=1;
            cout<<1<<endl;
        }
        else
        {
            ch=0;
            cout<<0<<endl;

        }
    }
    }
};

int main()
{
    int o1,o2,choice;
    sequence s1,s2;
    s1.output();
    s2.output();
    s1>s2;
    s1<s2;

    return 0;
}
