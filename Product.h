//Product class 
#include"Stock.h" 
class Product{ 
private:
int pID; 
char proName[20]; 
char size[3];
float price; 
Stock *stock;//bidirectional relationship to Stock class 
public: 
Product(); 
Product(int id, const char Name[],const char pSize[],float pPrice,Stock *st); 
void display(); 
void addProduct();
void deleteProduct();
void updateProduct();
void buyProduct(); 
~Product(); 
};