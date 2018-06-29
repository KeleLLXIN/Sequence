#include "Sequence.h"
#include<iostream>
using namespace std;

int main()
{
  
  Sequence DNA("dna.txt");
  cout<<"The length of the sequence is:"<<DNA.length()<<endl;
  cout<<"The number of A is :"<<DNA.numberOf('A')<<endl;
  cout<<"The number of T is :"<<DNA.numberOf('T')<<endl;
  cout<<"The number of C is :"<<DNA.numberOf('C')<<endl;
  cout<<"The number of G is :"<<DNA.numberOf('G')<<endl;
  cout<<"The longest consecutive is :"<<DNA.longestConsecutive()<<endl;
  cout<<"The longest repeat is :"<<DNA.longestRepeated()<<endl;
 return 0;   
}
