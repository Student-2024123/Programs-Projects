#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int rollno,marks;
    char name[20];
    int percent;
    for(int i=1;i<=n;i++){
        cout << "Enter roll no: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        // Enter marks in range(0-1500)
        cout << "Enter total marks out of 1500: ";
        cin >> marks;
        percent = (marks*100)/1500;
        cout << "Percentage = " << percent << endl;
        if(percent >= 65){
            cout << name << " has acheived distinction class" << endl;
        }
        else if(percent >= 60 && percent < 65){
            cout << name << " has acheived first class" << endl;
        }
        else if(percent >= 50 && percent < 60){
            cout << name << " has acheived second class" << endl;
        }
        else if(percent >= 40 && percent < 50){
            cout << name << " has acheived pass class" << endl;
        }
        else{
            cout << name << " has failed" << endl;
        }
    }
    return 0;
}