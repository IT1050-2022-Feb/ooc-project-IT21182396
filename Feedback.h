#include "Customer.h"
class feedback
{
  private :
    string feedbackID;
    string fDescription[200];
    customer *cus;

  public  :
    feedback(string fID, customer *fCus);
    string getGiveFeedback();
    void setReplyFeedback(string fReply);
    void displayFeedback();
};

