#include"Customer.h"
#include"DESIGNER.h"
using namespace std;

Order::Order(int oID)
{
	  orderID=oID;
      
}

void Order:: displayOrderDetails(const char desc[],customer *cus1, Designer*d1)
{
		strcpy(orderDescription,desc);
    cus=cus1;
    designer=d1;
    cout<<"Order id:"<<orderID<<endl;
    cout<<"Order description: "<<orderDescription<<endl;
		  
}