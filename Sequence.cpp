#include "Sequence.h"
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<fstream>
#include<stdlib.h>
using namespace std;

Sequence::Sequence(string filename)
{  xin=a=t=c=g=0;
   ifstream ifs;
   ifs.open(filename.data());
   if(!ifs.is_open())
  { 
   cerr<<"The file can't open."<<endl;
  abort();}
 char s=ifs.get();
while(s!=EOF)
{
 switch(s)
 {
  case'A':a++;break;
  case'T':t++;break;
  case'C':c++;break;
  case'G':g++;break;
  default:break;
  }
 s=ifs.get(); 
}  
 ifstream fin;
 fin.open(filename.data());
 string b;
while(getline(fin,b))
{
  data+=b;
}
 fin.close();

}
int Sequence::length()
{
	return data.length();
}

int Sequence::numberOf(char base)
{
  if(base!='A'&&base!='T'&&base!='C'&&base!='G')
  {
   cerr<<"Null"<<endl;
   exit(EXIT_FAILURE);
  } 
  if(base=='A') return a;
  if(base=='T')return t;
  if(base=='C')return c;
  if(base=='G')return g; 
}

string Sequence::longestConsecutive()
{
  string longest;
  int M=1,len=1;
  int m;
 for(int k=1;k<data.length();k++)
 {
  if(data[k]==data[k-1])
   {
    len++;
     if(len>M)
       {
         m=data[k];M=len;
       }
   }
  else
   { 
    len=1;
   }
 } 
  for(int i=0;i<M;i++)
  longest+=m;
  return longest;
}

string Sequence::longestRepeated()
{
/*char* a=NULL;
int rp(char* src,char** p)
{
        char *sztmp = src;
        char *tmp = NULL;
        int i, j, k;
        int max_len = 1, count = 0, ipos = 0;
        int len;
        if (sztmp == NULL||(len = strlen(sztmp))==0){
        return -1;
        }
    }*/
string a="unfinish";
return a;
}

