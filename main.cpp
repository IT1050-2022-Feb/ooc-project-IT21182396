int main(){

#include<iostream>
#include<cstring>
#include"Feedback.h"
#include"Customer.h"
#include"Stock.h"
#include"Bankcard.h"
#include"Cart.h"
#include"DESIGNER.h"
#include"Order.h"
#include"Payment.h"
#include"Product.h"
#include"Proposal.h"
#include"Sales.h"
#include"Paypal.h"
#include"Report.h"
  

  
 designer1=new DESIGNER(111,222,"aaa","bbb");
 Payment *P1 = new Payment(20000);
 Bankcard *B1 = new Bankcard(20000,4555,"visa",122);
 Payment *P2 = new Payment(10000); 
 paypal *pay1 = new paypal(20000,17812,1111);
  
 Stock *S1= new Stock(666,45,"good");
 Stock *S2= new Stock(566,55,"good");
 customer *c1 = new customer ("Sandaru Vishvajith","sandaru@gmail.com","No 5, Madanayaka 
road,Galle",35);
 customer *c2 = new customer ("raveen Ariyarathne","ravee11@gmail.com","No 3 Maddegoda 
road",40);
 feedback *f1 = new feedback ("0011",c1);
 feedback *f2 = new feedback ("0018",c1);
Product *P1= new Product(001,"T shirt", "L", 4000,S1);
 Product *P2= new Product(002,"Frock", "M", 5000,S1);
 
DESIGNER *designer1;
designer1->DisplayProposals();
 
 B1->displayBankcard(); 
 pay1->displayPaypal();
 
 Sales *sale=new Sales();
 sale->calcTotal(P1,P2);
 
 Order *O1= new Order();
 Order *O2= new Order();
 
 Designer *D= new Designer();
 
 Report *r1= new Report();
 r1->createProductReport(P1, P2);
 r1->displayProductReport();
 Report *r2=new Report();
 r2->createOrderReport(o1,o2);
 r2->displayOrderReport();
 Report *r3=new Report();
 r3->createDesignerReport(d1);
 r3->displayDesignerReport();
 
 Cart *c=new Cart();
 c->addProductsToCart(P1, P2);
 c->dispalyProductsInCart();
 c1 -> displayCustomerAndFeedbackDetails();
 S1-> displayStockDetails();
 S2-> displayStockDetails();
delete designer1;
}