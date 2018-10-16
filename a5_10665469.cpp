#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

struct student{
	string  name;
	int    idnumber;
	int    age;
	string   gender;
	double score;
    char   grade;
};

int main(int argc, char** argv) {
	int i,sumScore, sumAge, maleCount (0), femaleCount(0), averageScore (0), averageAge (0);
	student p[5];
	string male, female;
	cout<<"Enter student's details:"<<endl;
	
	for(i=0; i<5; i++)
{
    cout<<endl;
    cout<<"Enter student's Name:";
	cin>>p[i].name;
	cout<<"Input student's ID Number:";
	cin>>p[i].idnumber;
	cout<<"Enter student's age:";
	cin>>p[i].age;
	cout<<"Enter student's Gender:";
	cin>>p[i].gender;
	cout<<"Enter student's score:";
	cin>>p[i].score;
	
	
	
	if(p[i].score >= 80){
            p[i].grade = 'A'; }
        else if(p[i].score >= 70){
            p[i].grade = 'B';}
        else if(p[i].score >= 60){
            p[i].grade = 'C';}
        else if(p[i].score >= 50){
            p[i].grade = 'D';}
        else if(p[i].score >= 40){
            p[i].grade = 'E';}
        else if(p[i].score < 40){
            p[i].grade = 'F';};
        
    if(p[i].gender == male)
	        ++maleCount;
	    else
	        ++femaleCount;    
    
	}	
	for (i=0; i<5; i++)
	{
		sumScore= p[0].score + p[1].score +p[2].score +p[3].score +p[4].score;
		sumAge = p[0].age + p[1].age +p[2].age +p[3].age +p[4].age;
	}
	averageScore= sumScore/5;
	averageAge = sumAge/5;
	
	for(i=0; i<5; i++){
	
    ofstream mydoc ("message.txt");
    if (mydoc.is_open())
    {
	
	mydoc <<"Student ID"<< " " <<" Name"<< "   "<<"Age"<< " " <<"Gender"<< " " <<"Score"<< " " <<"Grade"<<endl;
	mydoc <<p[i].idnumber<< "          "<<p[i].name<<"      "<<p[i].age<<"  "<<p[i].gender<<"     "<<p[i].score<<"    "<<p[i].grade<<endl;
	mydoc <<endl<<endl<<endl;
	mydoc <<"Number of Males:"<<maleCount<<endl;
	mydoc <<"Number of Females:"<<femaleCount<<endl;
	mydoc <<"The Average Score is:"<<averageScore<<endl;
	mydoc <<"The Average Age is:"<<averageAge<<endl;
	mydoc.close();
    }
    else cout<<"Unable to open file";
	}
	
	return 0;
}  
