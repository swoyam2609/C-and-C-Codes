#include<iostream>
#include<vector>
using namespace std;
int main(){
    unsigned long long int no_of_arrays;
    cin>>no_of_arrays;
    unsigned long long int no_of_queries;
    cin>>no_of_queries;
    unsigned long long int len_array;
    vector<vector<unsigned long long int>> mainarray;
    vector<unsigned long long int> temp;
    
    for(unsigned long long int i=0;i<no_of_arrays;i++){
        cin>>len_array;
        temp.clear();
        long long int element;
        for(unsigned long long int j=0;j<len_array;j++){
            cin>>element;
            temp.push_back(element);
        }
        mainarray.push_back(temp);
    }

    vector<long long int> answer;
    unsigned long long int i,j;
    for(unsigned long long int i=0;i<no_of_queries;i++){
        cin>>i>>j;
        answer.push_back(mainarray[i][j]);
    }

    for(unsigned long long int a=0;a<no_of_queries;a++){
        cout<<answer[a]<<endl;
    }
    return 0;
}
