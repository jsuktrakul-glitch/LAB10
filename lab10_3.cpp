#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        float val = atof(textline.c_str());
        sum += val;
        sum_of_square += val*val;
        count++;
    }
    
    float mean = sum / count;
    float sd = sqrt((sum_of_square / count)-(mean*mean));
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
}