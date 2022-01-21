#include<iostream>
#include<string>
using namespace std;
string roman[13]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int num[13]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
string num_rom(int n){
    int i=0;
    string answer="";
    while(n>0){
        if(n-num[i]<0){
            i++;
            continue;
        }
        
    }
}