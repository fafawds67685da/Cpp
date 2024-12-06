#include<iostream>
using namespace std;
class BANK
{
    string name , type;
    int acno,bal,add;
    public :
            BANK(string a,string b,int c,int d)
            {
                
            name=a;
            type=b;
            acno=c;
            bal=d;
            add=0;
            }
            void deposit()
            {
                cout<<"\t Enter money to be deposited \n";
                cin>>add;
                bal+=add;
            }
            void withdraw()
            {
                cout<<"\t Enter money to be withdraw \n";
                cin>>add;
                if(add>bal)
                {
                    cout<<"\t Not enough balance \n";
                }
                else
                {
                    bal-=add;
                }
            }
            void check_bal()
            {
                cout<<"\t Current balance is \n"<<bal<<"\n";
            }
            void display()
            {
                cout<<"\t id name is         : "<<name<<"\n";
                cout<<"\t Account type is    : "<<type<<"\n";
                cout<<"\t Account number is  : "<<acno<<"\n";
                cout<<"\t Account balance is : "<<bal<<"\n";
            }
            
};
int main()
{
    string name , type;
    int acno,bal,ch=0;
    cout<<"\t Enter id name \n";
    getline(cin,name);
    cout<<"\t Enter account type \n";
    getline(cin,type);
    cout<<"\t Enter account number \n";
    cin>>acno;
    cout<<"\t Enter account balance \n";
    cin>>bal;
    BANK ob(name,type,acno,bal);
    while(ch!=4)
    {
        cout<<"\t Enter 1 to deposit \n\t Enter 2 to withdraw \n\t enter 3 to check balance\n\t Enter 4 to stop the program \n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                ob.deposit();
                break;
            }
            case 2:
            {
                ob.withdraw();
                break;
            }
            case 3:
            {
                ob.check_bal();
                break;
            }
            case 4:
            {
                ob.display();
                break;
            }
            default :
            {
                cout<<"\t INVALID CHOICE \n";
                break;
            }

        }
    }
    return 0;
}