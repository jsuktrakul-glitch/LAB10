#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	dest << "-------------------- BOOM ---------------------" << endl;
	dest << "AR CHI" << endl << "AR BOW" << endl << "CHOW CHOW" << endl << "BA KA" << endl;
	dest << "BA GEAR" << endl << "CHEER CHEER" << endl << "WE ARE ALL" << endl;
	dest << "ENTANEER" << endl << "CMU" << endl; 
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
