#ifndef cp_c7_32_h
#define cp_c7_32_h
#include <string>
#include <iostream>
class Screen;
class Window_mgr{
    public:
        using ScreenIdx = std::vector<Screen>::size_type;
        void clear(ScreenIdx idx);
    private:
        std::vector<Screen> screens{Screen(24,80,'')}
}
void Window_mgr::clear(ScreenIdx idx){
    if (idx >= screens.size()) return;    // judge for out_of_range.
    Screen s = screens[idx]
    s.contents = std::string(s.hight*s.width,'');
}

class Screen{
    friend Window_mgr::clear(ScreenIdx idx);
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
    Screen &set (pos r,pos c,char ch){
        pos row = r * width;
        contents[row+c] =ch;
        return *this;
    }

    Screen &set (char ch){
        contents[cursor] =ch;
        return *this;
    }

    void do_display (std::ostream &out) const{
        out << contents;
    }

    Screen &display (std::ostream &out){
        do_display(out);
        return *this;
    }
    const Screen &display (std::ostream &out)const{
        do_display(out);
        return *this;
    }


    private:
    pos hight=0;
    pos width=0;
    pos cursor=0;
    std::string contents;
    
};


#endif