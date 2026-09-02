#include <iostream>
using namespace std;
class Student {
    private:
        int rollno;
        string name;
    public:
    void setdetails(string studentname, int studentrollno){
        name = studentname;
        rollno = studentrollno;
} 
    void getdetails(){ 
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;

    }
};
int main(){
    Student student;
    student.setdetails("kaavyansh gupta",55);
    student.getdetails();
    return 0;
}