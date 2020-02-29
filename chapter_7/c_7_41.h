#ifndef cp_c7_41_h
#define cp_c7_41_h
#include <string>
#include <iostream>
class Sales_data{
    friend std::istream &read(std::istream &in,Sales_data &s);
    friend std::ostream &print(std::ostream &out,const Sales_data &s);
    friend Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
    public:
	Sales_data(std::string num,unsigned sold,double price) :bookNo(num),units_sold(sold),revenue(price*sold) {
        std::cout << "Sales_data construct with 3 param" <<std::endl;
    };
    Sales_data():Sales_data("",0,0){
         std::cout << "Sales_data construct default "<<std::endl;
    };
	Sales_data(std::string num) :Sales_data(num,0,0) {
         std::cout << "Sales_data construct with 1 param bookNo "<<std::endl;
    };
	Sales_data(std::istream &in):Sales_data(){
         std::cout << "Sales_data construct with 1 param istream "<<std::endl;
        read(in,*this);
    }
    std::string isbn()const{return this->bookNo;};
    Sales_data& combine(const Sales_data &s1);
    private:
    std::string bookNo;
    inline double avg_price()const;
    unsigned units_sold = 0;
    double revenue=0.0;
    

};

Sales_data& Sales_data::combine(const Sales_data &s1){
    units_sold+=s1.units_sold;
    revenue+=s1.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
};

std::istream &read(std::istream &in,Sales_data &s){
    double price=0;
    in >> s.bookNo>>s.units_sold>>price;
    s.revenue = price* s.units_sold;
    return in;
}

std::ostream &print(std::ostream &out,const Sales_data &s){
    out << s.bookNo << " " << s.units_sold<< " "<<s.revenue << " avr_price "<<s.avg_price();
    return out;
}



inline double Sales_data::avg_price()const{
    return units_sold ? revenue/units_sold :0;
}

#endif