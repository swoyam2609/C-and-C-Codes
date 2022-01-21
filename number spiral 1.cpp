#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    int rowcolumn=max(x,y);
    int mainarray[rowcolumn+10][rowcolumn+10];
    int i=0, j=0, element=1;
    mainarray[i][j]=element++;
    j++;
    mainarray[i][j]=element++;
    int shiftrow=1, shiftcolumn=1;
    while(i<=rowcolumn || j<=rowcolumn){
        for(int z=0;z<shiftrow;z++){
            i++;
            mainarray[i][j]=element++;
        }
        for(int z=0;z<shiftcolumn;z++){
            j--;
            mainarray[i][j]=element++;
        }
        i++;
        shiftcolumn++;
        shiftrow++;
        for(int z=0;z<shiftcolumn;z++){
            j++;
            mainarray[i][j]=element++;
        }
        for(int z=0;z<shiftrow;z++){
            i--;
            mainarray[i][j]=element++;
        }
        j++;
        shiftcolumn++;
        shiftrow++;
    }

    for(int a=0;a<rowcolumn;a++){
        for(int b=0;b<rowcolumn;b++){
            cout<<mainarray[a][b]<<" ";
        }
        cout<<endl;
    }
} 