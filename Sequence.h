#ifndef SEQUENCE_H
#define SEQUENCE_H
//#define M 100000

#include<string>
#include<cmath>
#include<ctime>
#include<vector>
#include<fstream>
#include<iomanip>
using namespace std;

class Sequence
{
public:
    Sequence(string filename);
   // ~Sequence();
    int length();
   
    int numberOf(char);
    string longestConsecutive();
    string longestRepeated();
private:
   // int d[M];
    int a,t,c,g,xin;    
    string data;
   //enum dna{A=1,T=2,C,G};    
};
#endif
