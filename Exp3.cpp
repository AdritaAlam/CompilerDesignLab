#include <bits/stdc++.h>
using namespace std;

map <char,string> depts = {
    {'C',"Computer Science & Engineering"},
    {'I',"Information & Communication Enginnering"},
    {'M',"Material Science Engineering"},
    {'A',"Applied Chemistry & Chemical Engineering"},
    {'E',"Electrical and Electronic Engineering"}
};

map <char,string> years = {
    {'1',"1st Year"},
    {'2',"2nd Year"},        
    {'3',"3rd Year"},
    {'4',"4th Year"}
};

map <char,string> semesters = {
    {'1',"1st Semester"},
    {'2',"2nd Semester"}
};

map <char,string> courses = {
    {'1',"Database Management System"},
    {'2',"Digital Signal Processing"},
    {'3',"Computer Network"},
    {'4',"Compiler Design"},
    {'5',"System Analysis"}
};

map <char,string> types = {
    {'1',"Theory"},
    {'2',"Lab"}
};


void abbreviate(string str){
    cout<<depts[str[0]]<<","<<years[str[4]]<<","<<semesters[str[5]]<<","<<courses[str[6]]<<","<<types[str[7]]<<endl;
}


int main(){
    string str;
    getline(cin,str);
    abbreviate(str);
    
}
    