#include"feedback.h"
#include<string>
using namespace std;

feedback::feedback (string fID , customer *fCus)
{
  feedbackID = fID;
  cus = fCus;
  cus ->addFeedback(this);
}

void feedback::displayFeedback()
  {
    cout<< "feedback ID  :"<< feedbackID << endl;
  }