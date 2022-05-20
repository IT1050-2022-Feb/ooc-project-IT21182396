#include<cstring>

class PROPOSAL{
	private:
		int proposalID;
		char proposalName;
	public:
		PROPOSAL(){};
		PROPOSAL(int pno,const char pname[] ){
			proposalID=pno;
			strcpy(proposalName,pname);
		}
		void setProposalID();
		void submitProposal();
		void displayProposalDetailst();
		~PROPOSAL();	
};



