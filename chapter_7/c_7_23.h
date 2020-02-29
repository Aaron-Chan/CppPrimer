#ifndef cp_c7_23_h
#define cp_c7_23_h
#include <string>
#include <iostream>
class Screen{
    public:
    using pos = std::string::size_type;
    Screen(pos h,pos w):hight(h),width(w){

    }
    Screen(pos h,pos w,char c):hight(h),width(w),contents(h*w,c){
        
    }
    char get()const{
        return contents[cursor];
    }
    inline char get(pos r,pos w) const{
        pos row = r * width;
        return contents[row+w];
    }
    inline Screen &move(pos r,pos c){
        pos row = r * width;
        cursor = row + c;
        return *this;
    }

    private:
    pos hight=0;
    pos width=0;
    pos cursor=0;
    std::string contents;
    
};


#endif