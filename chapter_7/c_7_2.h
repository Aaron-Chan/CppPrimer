#ifndef cp_c7_2_h
#define cp_c7_2_h
#include <string>
struct Sales_data{
    std::string isbn()const{return this->bookNo;};
    Sales_data& combine(const Sales_data &s1);
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue=0.0;
};

Sales_data& Sales_data::combine(const Sales_data &s1){
    units_sold+=s1.units_sold;
    revenue+=s1.revenue;
    return *this;
}
#endif