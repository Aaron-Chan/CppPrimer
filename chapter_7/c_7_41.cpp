#include <iostream>
#include "c_7_41.h";
using std::cout;
using std::cin;
using std::endl;

int main(){
	cout << "s1 start"<<endl;
	Sales_data s1;//Ĭ��
	cout << "s1 end"<<endl;
	cout << "s2 start"<<endl;
	Sales_data s2("book1");
	cout << "s2 end"<<endl;
	cout << "s3 start"<<endl;
	Sales_data s3("book2",1,10);
	cout << "s3 end"<<endl;
	cout << "s4 start"<<endl;
	Sales_data s4(std::cin);
	cout << "s4 end"<<endl;
	print(cout, s1) << endl;
	print(cout, s2) << endl;
	print(cout, s3) << endl;
	print(cout, s4) << endl;

}