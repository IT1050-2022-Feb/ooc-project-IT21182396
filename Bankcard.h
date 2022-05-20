#include<string>
#include "Payment.h"
using namespace std;

class Bankcard: public Payment{
 protected:
 int cardNum;
 string cardType;
 int cardCVVcode;
 public:
 void authorized();
 Bankcard();
 Bankcard (float amt,int number, string type, int code): Payment(amt); 
 void displayBankcard(); 
};
