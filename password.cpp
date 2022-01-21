#include<iostream> 
#include<string>
#include<algorithm>
using namespace std; 
int main(){     
    string strA = "icpc", strB;
    for(int z=0;z<50;z++){
        int cpos=0;
        int c=0;
        cout<<"Enter the password: ";
        strA = "icpc";
        cin>>strB;
        if(strA==strB){
            cout<<"Correct"<<endl<<endl;
            break;
        }
        else if(strA.size()!=strB.size()){
            cout<<"Incorrect Size"<<endl<<endl;
            continue;
        }
        else{
            for(int i=0;i<strA.size();i++){
                if(strA[i]==strB[i]){
                    cpos++;
                    strA.erase(strA.begin()+i);
                    strB.erase(strB.begin()+i);
                    i--;
                }
            }
            sort(strA.begin(), strA.end());
            sort(strB.begin(), strB.end());
            while((strA.size()!=0)&(strB.size()!=0)){
                if(strA[0]==strB[0]){
                    c++;
                    strA.erase(strA.begin());
                    strB.erase(strB.begin());
                }
                else if(strA[0]<strB[0]){
                    strA.erase(strA.begin());
                }
                else if(strA[0]>strB[0]){
                    strB.erase(strB.begin());
                }
            }
            cout<<"Correct Pos: "<<cpos<<endl;
            cout<<"Correct Character: "<<c<<endl<<endl;
        }
    }
    return 0; 
}