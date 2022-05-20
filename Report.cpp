Report::Report(){};
void Report:: createProductReport(Product *p1, Product *p2) 
{ 
 product[0] = p1; 
product[1] = p2; 
 } 
void Report:: displayProductReport() { 
product[0]->display(); 
 product[1]->display(); 
 } 
void Report:: createOrdertReport(Order *o1, Order *o2) { 
 order[0] = o1; 
order[1] = o2; 
 } 
void Report:: displayOrderReport() { 
order[0]->displayOrderDetails(); 
order[1]->displayOrderDetails(); 
 } 
void Report:: createDesignerReport(DESIGNER *d1) { 
 d=d1; 
 } 
void Report:: displayDesignerReport() { 
order[0]->setDesignerDetails(); 
order[1]->displayDesignerDetails(); 
 }