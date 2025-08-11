#include<iostream>
using namespace std;

class student 
{
private:
    int rollNo;
    string name;
    string degree;
    string hostel;
    float CurrentCGPA;
    void updateCGPA() 
    {
        float newCGPA;
        cout<<"Enter the new CGPA: ";
        cin>>newCGPA;
        CurrentCGPA = newCGPA;
    }


    public:
    void addDetails() 
    {
        cout<<"Enter the details of the student"<<endl;
        cout<<"Roll No: ";
        cin>>rollNo;
        cout<<"Name: ";             
        cin>>name;
        cout<<"Degree: ";
        cin>>degree;
        cout<<"Hostel: ";
        cin>>hostel;
        cout<<"Current CGPA: ";
        cin>>CurrentCGPA;
        cout<<"Details added successfully!"<<endl;
    }
    void displayDetails() 
    {
         updateCGPA() ;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"Hostel: "<<hostel<<endl;
        cout<<"Current CGPA: "<<CurrentCGPA<<endl;

        
    
    };

}; 

   

int main ()
{
    student rahul;
    rahul.addDetails();
    // rahul.updateCGPA();
    rahul.displayDetails();
    return 0;
}

    