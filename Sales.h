#include"Payment.h" 
#define SIZE 2 
class Sales{ 
private: 
int salesID;
double salesAmount; 
char salesDescription[100]; 
Payment *pay[SIZE]; 
public: 
Sales(); 
int calcTotal(Payment *p1, Payment *p2); 
void displaySalesDetails(); 
};