#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    long int n=s1.size();
    if(n>pow(10,6)){
        return 0;
    }
    else{
        int currlen=0;
        int maxlen=0;
        char curroccurr='B';
        long int i=0;
        while(i!=(n)){
            if(s1[i]!=curroccurr){
                if(currlen>maxlen){
                    maxlen=currlen;
                }
                currlen=1;
                if(currlen>maxlen){
                    maxlen=currlen;
                }
                curroccurr=s1[i];
            }
            else if(s1[i]==curroccurr){
                currlen++;
                if(currlen>maxlen){
                    maxlen=currlen;
                }
            }
            i++;
        }
        cout<<maxlen;
    }
    return 0;
}