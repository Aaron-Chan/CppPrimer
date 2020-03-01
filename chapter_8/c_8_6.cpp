
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "../chapter_7/c_7_26.h"
using namespace std;




int main(int argc,char **args){
    char *file_name = args[1];
    ifstream input(file_name);
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
    return 0;
}