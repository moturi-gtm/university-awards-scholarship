#include<iostream>
#include<string>
using namespace std;

int main(){
	string studentName;
	int examMarks;
	double attendancePercentage;
	string scholarship;
	
	cout<<"Enter student name:";
	getline(cin, studentName);
	
	cout<<"Enter exam marks (0-100):";
	cin >>examMarks;
	
	cout<<"Enter attendance percentage(0-100):";
	cin >> attendancePercentage;
	
	if(examMarks >= 70){
		if (attendancePercentage >=80){
			scholarship = "Full scholarship";
		} else {
			scholarship ="partial scholarship";
		}
	} else if (examMarks>=50){
		if (attendancePercentage>=85){
			scholarship="partial scholarship";
		}else{
			scholarship="No scholarship";
		}
	}else{
		scholarship="No scholarship";
	}
	
	cout<<"\nStudent Name:"<< studentName<<endl;
	cout<<"Scholarship Status:"<< scholarship<<endl;
	
	return 0;
}