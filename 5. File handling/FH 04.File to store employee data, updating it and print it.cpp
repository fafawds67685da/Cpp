#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    ifstream in;
    int ch=0;
    char c;
    string name;
    int id, salary;
    while(ch!=4)
    {
        printf("\t Enter 1 add another employee data \n\t Enter 2 display the data yet \n\t Enter 3 to format the file \n\t Enter 4 to terminate \n");
        scanf("%d",&ch);
        cin.ignore();

        switch(ch)
        {
        case 1:
            out.open("abc.txt",ios::app);
            printf("\t Enter the employee name \n");
            getline(cin,name);
            //cin.ignore();
            printf("\t Enter the employee id \n");
            cin>>id;
            printf("\t Enter the employee salary \n");
            cin>>salary;
            out<<"Emplyee name : "<<name<<"\n"<<"ID :"<<id<<"\n"<<"Salary :"<<salary<<" \n\n";
            out.close();
            break;

        case 2:
            in.open("abc.txt");
            c=in.get();
            while(!in.eof())
            {
                cout<<c;
                c=in.get();
            }
            in.close();
            break;

        case 3:
            out.open("abc.txt");
            out.close();
            break;

        case 4:
            break;



        }
    }
}
