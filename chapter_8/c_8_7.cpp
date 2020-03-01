
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "../chapter_7/c_7_26.h"
using namespace std;




int main(int argc,char **args){
    char *file_name = args[1];
    char *out_file_name = args[2];
    cout << " file_name " << file_name << endl;
    cout << " out_file_name " << out_file_name << endl;
    ifstream input(file_name,ifstream::in);
    ofstream out_put(out_file_name,ofstream::app);
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
                print(out_put, total) << endl;
                total = trans;
            }
        }
        print(out_put, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
    return 0;
}