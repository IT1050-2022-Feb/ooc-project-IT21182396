#include<string>
#define SIZE 2
class Stock
{
    private:
        int stockID;
        int stockNumber;
        string stockType;
        Product *prod[SIZE];
        int productNo;

public:
     Stock(){};
     Stock(int id, int num, string type );
     void addProduct(Product *pro);
     void displayStockDetails();
};

Stock::Stock(int id, int num, string type ){
             stockID=id;
             stockNumber=num;
             stockType=type;
       
       }







