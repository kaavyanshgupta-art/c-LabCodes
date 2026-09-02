#include <iostream>
using namespace std;
class Number{
    private:
    int num;
    public:
    Number(int n)
    {
        num = n;
    }

    void setdetails(){
        cout<<"enter any number";
        cin>>num;}
    void display(){
        if(num % 2==0){
        cout<<" the number is even";}
        else{
            cout<<"number is odd";}
        
        }
    };
     int main(){ 
        Number s1(5);
        s1.setdetails();
        s1.display();
        return 0;
    }
