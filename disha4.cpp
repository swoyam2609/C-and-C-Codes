using namespace std;
class Box
{
  public:
  int l,b,h;
  Box()
  {
    l=0;
    b=0;
    h=0;
  }
  Box(int a,int m,int c)
  {
    l=a;
    m=b;
    c=h;
  }
  Box(Box &box)
  {
    l=box.l;
    b=box.b;
    h=box.h;
  }
  int getLength(){
    return l;
  }
  int getBreadth()
  {
    return b;
  }
  int getHeight()
  {
    return h;
  }
  unsigned long long int CalculateVolume(){
    unsigned long long a=l*b*h;
    return a;
  }
  bool operator<(Box &B){
    if(l==B.l){
      return true;
    }
    else if(l==B.l){
      if(b<B.b){
        return true;
      }
      else if(b==B.b){
        if(h<B.h){
          return true;
        }
      }
    }
    return false;
  }

  friend ostream &operator<< (ostream &output,Box &B)
  {
    output<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
    return output;
  }
};