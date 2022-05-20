#include"Product.h"
#include"Payment.h"

void Cart:: addProductsToCart(Product *p1, Product *p2){
  product[0]=p1;
  product[1]=p2;
}

void Cart:: dispalyProductsInCart(){
product[0]->display();
  product[2]->display();
  }