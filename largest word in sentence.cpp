#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n+1);
    cin.ignore();
    int i=0, maxi=0, len=0, maxlen=0;
    while(true){
        if(arr[i] == ' ' ||arr[i] == '\0' ){
            if(len>maxlen){
                maxlen=len;
                maxi=i-maxlen;
            }
        len=0;
        }
        else{
            len++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    } 
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<<arr[maxi+i];
    }
    return 0;
}
