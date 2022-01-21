#include<bits/stdc++.h>

using namespace std;
class Box{          //Implement the class Box
    public:
        int l,b,h; //l,b,h are integers representing the dimensions of the box
        Box(){     // Constructors:  // Box();
            l=0;
            b=0;
            h=0;
        }
        
        Box(int a, int m, int c){  // Box(int,int,int);
            l=a;
            b=m;
            h=c;
        }
        
        Box(Box &box){   // Box(Box);
            l=box.l;
            b=box.b;
            h=box.h;
        } 
        
        int getLength(){            // int getLength(); // Return box's length
            return l;
        }
        
        int getBreadth(){           // int getBreadth (); // Return box's breadth
            return b;
        }   
        
        int getHeight(){            // int getHeight ();  //Return box's height
            return h;
        }
        
        unsigned long long CalculateVolume(){// long long CalculateVolume(); // Return the volume of the box
            unsigned long long a =  (long long)(l*b*h);
            return a;
        }
        
        bool operator < (Box &element){
            if(l<element.l){
                return true;
            }
            else if(l==element.l){
                if(b<element.b){
                    return true;
                }
                else if(b==element.b){
                    if(h<element.h){
                        return true;
                    }
                }
            }
            return false;
        }
        
        friend ostream& operator<<(ostream &out, Box &B){
            out<<B.l<<" "<<B.b<<" "<<B.h;
            return out;
        }
};  


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}