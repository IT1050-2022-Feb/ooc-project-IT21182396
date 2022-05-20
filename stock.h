#include<Stock.h>
#include<cstring>

using namespace std;


Stock::Stock(int id, int num, string type){
             stockID=id;
             stockNumber=num;
             stockType=type;
             
       }

void Stock:: addProduct(Product *pro)
    {
        if(productNo < SIZE) {
          prod[productNo]=pro;
          productNo++;
          }
          
    }

void Stock::displayStockDetails()
    {
             cout<<"Stock id: "<<stockID<<endl;
             cout<<"Stock Number: "<<stockNumber<<endl;
             cout<<"Stock type: "<<stockType<<endl<<endl;

       
      for(int i=0; i< productNo;i++)
           prod[i] -> productDisplay();
     }
