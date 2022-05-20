#include "Feedback.h"
#include "Order.h"
#include "Product.h"

class customer
{
  private :
    int customerID;
    string name;
    string email;
    string address;
    int age;
    feedback *Feedback[SIZE];
    int noOfFeedback;
    Order *order[SIZE];
    Product *product[SIZE];
 
  public  :
    customer();
    customer(string cname, string cemail, string caddress,int cage);
    void setCustomerID(int customerID );
    void addFeedback(feedback *o);
    void displayCustomerDetails();
};


