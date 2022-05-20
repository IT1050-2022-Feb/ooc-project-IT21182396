#include"Customer.h"
#include"DESIGNER.h"

class Order{
	private:
		int orderID;
	  char orderDescription[50];
    Customer *cus;//association relationship to Customer
	 	Designer *designer;//association relationship to Designer class

	public:
	 	Order();
   	Order(int oID);
   	void displayOrderDetails(const char desc[], customer*cus1, Designer*d1);	
   	~Order();
};

