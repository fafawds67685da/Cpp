#include<iostream>
using namespace std;
class hotel
{
    string name;
    int rno,rent,nod,amt;
    static int n;
    public:
        hotel()
        {
            name="";
            rno=0;
            nod=0;
            rent =0;
            amt=0;
        }
        void total_amount()
        {
            
            cout<<"\t Enter roon number \n";
            
            cin>>rno;
            cout<<"\t Enter no of days \n";
            cin>>nod;
            cout<<"\t Enter room rent \n";
            cin>>rent;
            cout<<"\t Enter customer name \n";
            getline(cin,name);
            
            amt=nod*rent;
            n+=1;
            
            if(amt>10000)
            {
                amt*=1.05;
            }
        }
        void show_details()
        {
            cout<<"\t customer name is       : "<<name<<"\n";
            cout<<"\t roon muber is          : "<<rno<<"\n";
            cout<<"\t no of days spend is    : "<<nod<<"\n";
            cout<<"\t amount due is          : "<<amt<<"\n";
        }
        void static rooms_booked()
        {
            cout<<"\t no of booked rooms  are :"<<n<<"\n";
        }


};
int hotel::n = 0;
int main()
{
    hotel ob;
    int ch=0;
    while(ch!=4)
    {
        cout<<"\t Enter 1 to input customer details and compute  room rent \n\t Enter 2 to show the details now\n\t Enter 3 to know no of booked rooms\n\t enter 4 to end the program \n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                ob.total_amount();
                break;
            }
            case 2:
            {
                ob.show_details();
                break;
            }
            case 3:
            {
                hotel::rooms_booked();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                cout<<"\t INVALID CHOICE !!! \n";
                break;
            }
        }
    }
    return 0;
}