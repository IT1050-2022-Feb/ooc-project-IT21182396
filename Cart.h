#include"Product.h"
#include"Payment.h"

class Cart{
private:
  int cartID ;
  int quantity ;
  float cartCost ;
  Product *product[2];//aggregation relationship to product
  Payment *pay;//association relationship to payment class
public:
  Cart(){};
  Cart(int id, int qty, float cost){
  cartID=id;
  quantity=qty;
  cartCost=cost;
  }
  void addProductsToCart(Product *p1, Product *p2);
  void dispalyProductsInCart();
  void removeProductsInCart();
  void updateQuantity();
  float calcCartCost();
  ~Cart();
};