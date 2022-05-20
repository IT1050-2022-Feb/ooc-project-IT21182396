#include"Proposal.h"
#include"Order.h"
#define SIZE 2
class DESIGNER{
 
 private:	
	int dID;
	string dName;
	string dEmail;
	PROPOSAL *propsal[SIZE];
  Order *order[SIZE];
	
 public:
 	void setDesignerDetails(int di,string dnam,string mail);
 	void displayDesignerDetails();
 	void selectDesigner();
  DESIGNER();
	DESIGNER(int p1,int p2,string p1n,string p2n);
	void DisplayProposals();
 	~DESIGNER();
};





