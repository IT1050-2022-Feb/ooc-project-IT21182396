#include<Proposal.h>
#include<cstring>

using namespace std;

void PROPOSAL:: displayProposalDetailst(){
			cout<<"Propoal ID:"<<proposalID<<endl;
			cout<<"Propoal Name:"<<proposalName<<endl;
		}

PROPOSAL::~PROPOSAL(){
			cout<<"Deleting Proposal ID:"<<proposalID<<endl;
		}