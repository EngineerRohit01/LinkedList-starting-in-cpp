#include<iostream>
using namespace std;
struct student{
    int rollno;
    student* next;
};

int main(){
    
    student* rohit = NULL;
    student* mistri = NULL;
    student* naman  = NULL;
    
    
    rohit = new student();
    mistri = new student();
    naman = new student();
    
    rohit->rollno = 2328055;
    rohit->next = mistri;
    
    mistri->rollno = 2328057;
    mistri->next = naman;
    
    naman->rollno = 2328001;
    naman->next = NULL;
    
    student* i = rohit;
    while(i!=NULL){
        cout<<i->rollno<<" ";
        i = i->next;
    }
    return 0;
    
}
