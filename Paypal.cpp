#include"Paypal.h"

paypal::paypal(float amt,float pay, int aacNo):Payment(amt){
              paypalID=pay;
              accountNumber=aacNo; 
          }

void paypal:: displayPaypal(){
           cout<<"Paypal Details :"<<endl<<endl;
           
           cout<<"Paypal ID :"<<paypalID<< endl;
           cout<<"Account Number :"<<accountNumber<<endl;
           displayAmount();
        }