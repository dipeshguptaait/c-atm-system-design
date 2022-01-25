#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pin;
    int entry;
    double deposit=0.0,withdraw=0.0,balance=0.0;
    int password=1234;
    int count=0;
    bool istrue=true;
    do
    {
       cout<<"---welcome to indian bank atm---"<<endl;
       cout<<"please inter your pin number"<<endl;
        cin>>pin;
     if(pin==password)
     {
       do{
           cout<<"---welcome to indian bank---"<<endl;
           cout<<"1.deposit money"<<endl;
           cout<<"2.withdraw money"<<endl;
           cout<<"3.check your bank balance"<<endl;
          cout<<"4.exit menu"<<endl;
          cout<<"choose any option"<<endl;
          cin>>entry;
          switch(entry)
         {
            case 1:
          cout<<"enter deposit amount"<<endl;
          cin>>deposit;
          balance=balance+deposit;
            break;
           case 2:
            cout<<"enter withdrawal amout"<<endl;
            cin>>withdraw;
            if(balance<withdraw)
            {
                cout<<"not enough money to withdrawal";
            }
           else
             balance=balance-withdraw;
              break;
          case 3: 
          cout<<"your balance is"<<endl;
         cout<<balance<<endl;
            break;
          case 4:
         cout<<"--thanks for visited atm--"<<endl;
         istrue=false;
         break;           
        default:
            break;
        }
       }while(istrue!=false);

    }
    else 
    {
         count++;
         if(count==5)
         {
             istrue=false;
         }
         else cout<<"wrong pin"<<endl;
    }
   
    }while(istrue!=false);

    return 0;
}