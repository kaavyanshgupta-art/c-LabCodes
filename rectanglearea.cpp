#include <iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float breadth;
    public:
    rectangle(float l, float b){
        length = l;
        breadth =b;
    }
    void display(){
        float area;
        area = length * breadth;
        cout<<"area of rectangle is:"<<area<<endl;
    }

};
int main(){
    float x,y;
    cout<<"enter the values of length and breadth:";
    cin>>x;
    cin>>y;
    rectangle a1(x,y);
    a1.display();
      return 0;
}


