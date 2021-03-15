
#include "snowman.hpp"
#include <stdexcept>
#include <cstdio>
#include <iostream>
#include <array>
using namespace std;
const int biggest =99999999;
const int small =11111111;
const int division=10;

string ariel::snowman (int num){
    if(num < 0){
        throw std::invalid_argument("num cannot be negative");}
    if(num > biggest || num < small){
        throw std::out_of_range("num must be 8 digest long");}
    //Set up arrays for each of the snowman combinations
    array<string,4> H = {"       \n _===_ ","  ___  \n ..... ","   _   \n  /_\\  ","  ___  \n (_*_) "} ;
    array<string,4> N = {",",".","_"," "};
    array<string,4> L = {".","o","O","-"};
    array<string,4> R = {".","o","O","-"};
    array<string,4> X = {"<","\\","/"," "};
    array<string,4> Y = {">","/","\\"," "};
    array<string,4> T = {" : ","] [","> <","   "};
    array<string,4> B = {" : ","\" \"","___","   "};
    //Setting the return value
    string ans;
    /*
     Basically use the idea of MODOLO -when i use MODOLO i get the last digit in the number
     create a print line of the currect carcter in the arr,
     then divide the number by 10 each time and so we will go over the whole number.
     Finally each row is separately in the print, and we will connect them all in the return value.
     */
    long b=num%division;
    string l4=" ("+B.at(b-1)+") ";
    num=num/division;
    long t=num%division;
    string l3_1_2="("+T.at(t-1)+")";
    num=num/division;
    long y = num%division;
    string l2_4=" ";
    string l3_2;
  //  string  l2_2_2="";
    if (y==2){
        l2_4 = Y.at(y-1);
        l3_2 = " ";
    }else {
        l3_2 = Y.at(y - 1);
        l2_4=" ";
    }
    num=num/division;
    long x = num%division;
    string l3_1;
    string l2_1=" ";
    if (x==2){
        l2_1=X.at(x-1);
        l3_1=" ";
    }else {
         l3_1 = X.at(x - 1);
         l2_1= " ";
    }
    num=num/division;
    long r = num%division;
    string l2_3=R.at(r-1)+")"+l2_4;
    num=num/division;
    long l = num%division;
    l2_1=l2_1+"("+L.at(l-1);
    num=num/division;
    long n = num%division;
    string l2_2=N.at(n-1);
    num=num/division;
    long h = num%division;
    string l1=H.at(h-1);
     ans=l1+"\n"+l2_1+l2_2+l2_3+"\n"+l3_1+l3_1_2+l3_2+"\n"+l4;
    /*
      return snowman like this for exempal:
       _===_
       (.,.)
       ( : )
       ( : )
     */

    return ans;
}
