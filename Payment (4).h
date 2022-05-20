#include "Cart.h"


class Payment{
 protected:
 float amount;
 int paymentID;
 float paymentDate;
 Cart *cart;
 
 public:
 Payment();
 Payment(float amt);
 void validatePayment();
 void setPaymentID();
 void setPaymentData();
 void displayPaymentDetails();
 void calcPayments();
 void displayAmount();
 
 };
