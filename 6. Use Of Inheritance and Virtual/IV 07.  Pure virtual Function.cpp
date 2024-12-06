#include<iostream>
using namespace std;
class cal_vol
{
public:
    int r,h;
    cal_vol(){}
    void get_data()
    {
        cin>>r>>h;
    }
    void virtual vol()=0;
};

class cone: public cal_vol
{
public:
    void vol()
    {
        printf("\t For Cone \n");
        get_data();
        cout<<0.33 * 3.14 * r*r*h<<" \n";
    }
};


int main()
{
    cal_vol* ob1;
    cone ob;
    ob1=&ob;

    ob1->vol();

    return 0;
}
