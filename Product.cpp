Product::Product(){}; 
Product::Product(int id, const char Name[],const char pSize[],float pPrice ,Stock 
*st){ 
 pID=id; 
strcpy(proName,Name); 
strcpy(size,pSize); 
price=pPrice;
 st=stock; 
} 
void Product:: display(){ 
cout<<"Product ID: "<<pID<<endl; 
cout<<"Product name: "<<proName<<endl; 
cout<<"Product size: "<<size<<endl; 
cout<<"Product price: "<<price<<endl; 
}