#include "Product.h" 
#include "Order.h" 
#include "DESIGNER.h" 
#define SIZE 2 class 
Report{ 
private: 
int reportID; 
char reportName[20]; 
Product *product[SIZE];//aggregation relationship to Product class 
Order *order[SIZE];//aggregation relationship to Order class 
DESIGNER *d;//bi derectional association relationship to Designer class 
public: 
Report();
void createProductReport(Product *p1, Product*p2); 
void displayProductReport();
void createOrdertReport(Order *o1, Order *o2) ; 
void displayOrderReport() ;
void createDesignerReport(DESIGNER *d1); 
void displayDesignerReport(); 
~Report(); 
}; 