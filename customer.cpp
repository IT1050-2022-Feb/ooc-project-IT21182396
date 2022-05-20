#include"customer.h"
#include<string>

customer::customer(string cname, string cemail, string caddress,int cage)
  {
    name = cname;
    email = cemail;
    address = caddress;
    age = cage;
    noOfFeedback=0;
  }

void customer::addFeedback(feedback *o)
{
  if (noOfFeedback < SIZE)
      Feedback[noOfFeedback]=o;
      noOfFeedback++;
}


 void customer::displayCustomerDetails()
  {
        cout<<"Customer name :"<< name<< endl;
        cout<<"Customer email :"<< email<< endl;
        cout<<"Customer address :"<< address<< endl;
        cout<<"Customer age :"<< age<< endl;

    for(int i=0; i<noOfFeedback; i++)
      Feedback[i] -> displayFeedback();
  }