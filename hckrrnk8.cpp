#include<iostream>
using namespace std;
int main(){
    unsigned long long int no_of_arrays;
    cin>>no_of_arrays;
    unsigned long long int no_of_queries;
    cin>>no_of_queries;
    unsigned long long int len_array;
    int** mainarray = new int*[no_of_arrays];
    int answers[no_of_queries];
    for(unsigned long long int i=0;i<no_of_arrays;i++){
        cin>>len_array;
        mainarray[i]= new int[len_array];
        long long int element;
        for(unsigned long long int j=0;j<len_array;j++){
            cin>>mainarray[i][j];
        }
    }
    unsigned long long int i,j;
    for(unsigned long long int a=0;a<no_of_queries;a++){
        cin>>i>>j;
        answers[a]=mainarray[i][j];
    }
    for(unsigned long long int a=0;a<no_of_queries;a++){
        cout<<answers[a]<<endl;
    }
}