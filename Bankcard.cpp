#include "Bankcard.h"
#include<string>
using namespace std;

Bankcard::Bankcard (float amt,int number, string type, int code):Payment( amt ){
      
              cardNum=number;
              cardType=type;
              cardCVVcode=code;
          }


void Bankcard:: displayBankcard(){
           cout<<"Bank Card Details :"<<endl<<endl;
           cout<<"Card Number :"<<cardNum<< endl;
           cout<<"Card Type :"<<cardType<<endl;
           cout<<"Card Code :"<<cardCVVcode<<endl;
           displayAmount();
        }
