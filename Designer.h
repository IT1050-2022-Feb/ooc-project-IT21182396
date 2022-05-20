#include"DESIGNER.h"
#include<cstring>

using namespace std;


DESIGNER::DESIGNER(){
    	propsal[0]=new PROPOSAL(123,"abc");
    	propsal[1]=new PROPOSAL(456,"def");	
	}

DESIGNER::DESIGNER(int p1,int p2,string p1n,string p2n){
		
		propsal[0]=new PROPOSAL(p1,p1n);
    	propsal[1]=new PROPOSAL(p2,p2n);
		
	}

void DESIGNER:: DisplayProposals(){
		for(int i=0;i<SIZE;i++){
			propsal[i]->displayProposalDetailst();
		}


   	DESIGNER::~DESIGNER(){
 		
 		cout<<"designer resign"<<endl;
 		for(int r=0;r<SIZE;r++){
 			
 			delete propsal[r];
		 }
		 cout<<"Everthing is deleted"<<endl;
	   }