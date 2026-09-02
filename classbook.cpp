#include <iostream>
using namespace std;
class Book{
    private:
       string title;
       string author;
    public:
       Book(string t, string a){
        title = t;
        author = a;
       }
    void setdetails(){
        cout<<"enter the title and author of any book:";
        cin>>title;
        cin>>author;
       }
    void display(){
        cout<<"title:"<<title<<endl;
        cout<<"author:"<<author<<endl;

    }
       };
    int main(){
        Book b1(" "," ");
        b1.setdetails();
        b1.display();
        return 0;
    

        
    }