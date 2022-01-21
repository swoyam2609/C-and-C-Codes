#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if(x1==x2){
        return "YES";
    }
    else if(v2==v1 && x2!=x1){
        return "NO";
    }
    else if(((x2-x1)/(v2-v1))>0){
        return "NO";
    }
    else if(((x2-x1)%(v2-v1))!=0){
        return "NO";
    }
    else{
        return "YES";
    }
}

int main()
{
    /*int x2,x1,v1,v2;
    cin>>x1>>v1>>x2>>v2;

    string result = kangaroo(x1, v1, x2, v2);

    cout << result << "\n";


    return 0;*/

    cout<<3*((int)(7/3));
}

