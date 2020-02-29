#ifndef cp_c7_53_h
#define cp_c7_53_h
#include <string>
#include <iostream>

class Debug{
    public:
    constexpr Debug(bool b=true):hw(b),io(b),other(b){

    }
    constexpr Debug(bool h,bool i,bool ot):hw(h),io(i),other(o){

    }
    bool any(){
        return hw||io||other;
    }
    void set_io(bool i){
        io = i;
    }
    void set_hw(bool i){
        hw = i;
    }
    void set_other(bool i){
        other = i;
    }
    private:
    bool hw;
    bool io;
    bool other;
};


#endif