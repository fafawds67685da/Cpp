#include<iostream>
using namespace std;
class carRental
{
    string car_id,car_type;
    int car_rent;
    static int n;
    public:
        carRental(string a , string b , int c)
        {
            car_id=a;
            car_type=b;
            car_rent=0;
        }
        void set_rent(string a)
        {
            car_type=a;

            if(car_type=="small"||car_type=="Small"||car_type=="SMALL")
            {
                car_rent+=500;
                n+=1;
            }
            else if(car_type=="van"||car_type=="Van"||car_type=="VAN")
            {
                car_rent+=1000;
                n+=1;
            }
            else if(car_type=="bus"||car_type=="Bus"||car_type=="BUS")
            {
                car_rent+=2000;
                n+=1;
            }
            else
            {
                cout<<"\t WRONG CAR TYPE !! \n";
                car_type=="";
                car_rent+=0;
                n+=1;
            }

        }
        void show_details()
        {
            cout<<"\t Car rent is    : "<<car_rent<<"\n";
        }
        void static no_cars()
        {
            cout<<"\t no of cars are :"<<n<<"\n";
        }


};
int carRental::n = 0;
int main()
{
    string car_id,car_type;
    
    cout<<"\t Enter car id \n";
    getline(cin,car_id);
    carRental ob(car_id,"",0);
    int ch=0;
    while(ch!=4)
    {
        cout<<"\t Enter 1 to input car details and compute rent \n\t Enter 2 to show the car rent uptill now\n\t Enter 3 to know no of cars\n\t enter 4 to end the program \n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"\t Enter car type \n";
                cin.ignore();
                getline(cin,car_type);
                ob.set_rent(car_type);
                break;
            }
            case 2:
            {
                ob.show_details();
                break;
            }
            case 3:
            {
                carRental::no_cars();
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