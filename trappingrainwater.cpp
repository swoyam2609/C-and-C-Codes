#include<bits/stdc++.h>
using namespace std;
int count(vector<int> arr, int maxheight){
    int container=0;
    int itr=0;
    int count=0;
    int start=0, end=0;
    while(container<maxheight){
        while(itr<arr.size()){
            if(arr[itr]>container && end!=itr){

            }
            if(arr[itr]>container){
                start=itr;
            }

        }
    }
}