#include <iostream>
#include "c_7_26.h";
using std::cout;
using std::cin;
using std::endl;

int main(){
  
	Sales_data s1;//Ĭ��
	Sales_data s2("book1");
	Sales_data s3("book2",1,10);
	Sales_data s4(std::cin);
	print(cout, s1) << endl;
	print(cout, s2) << endl;
	print(cout, s3) << endl;
	print(cout, s4) << endl;

}