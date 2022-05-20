#include"Payment"
#include<string>
using namespace std;

class paypal: public Payment{
 protected:
 int paypalID;
 int accountNumber;
 
 public:
 void authorized();
 paypal();
 paypal(float amt,float pay, int aacNo):Payment(amt);
 void displayPaypal(); 
};
