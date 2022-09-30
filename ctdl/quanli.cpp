#include <bits/stdc++.h>
// he thong quan li thi hoc ki
using namespace std;
// dd/mm/yyyy

class Day{
private:
string day,month,year;
public:
Day(){

}
~Day(){

}
void Inp(){
cin>>day>>month>>year;
}
void Outp(){
    cout<<day<<"/"<<month<<"/"<<year;
}
 string Get_Day(){
    return day; 
}
string Get_month(){
    return month;
}
string Get_year(){
    return year;
}
};
// hh:mm
class Hour{
private:
string hour,minutes;
public:
Hour(){

}

~Hour(){

}
void Input(){
   cin>>hour>>minutes;
}
void Output(){
    cout<<hour<<":"<<minutes;
}
string Get_hour(){
    return hour;

}
string Get_minutes(){
    return minutes;
}
};



//mon  thi 
class Subject{
    private:
string id;
string name;
public:
Subject(){

}
~Subject(){

}
void InputSubject(){
    cout<<"ID of subject: ";
getline(cin,id);
cout<<"Enter the name of subject: ";
getline(cin,name);

}
void ShowInforSubject(){
    cout<<id<<"  "<<name;
}


};
// lich thi la lop ke thua tu lop sub
class TestSchedule: public Subject{
private:


Day day;
Hour hour;
string nhomthi;

public:
TestSchedule(){

}
~TestSchedule(){

}
void InputInf(){
    Subject::InputSubject();
   cout<<"Day(dd/mm/yyyy): ";
   day.Inp();
    cout<<"Time(hh:mm): ";
    hour.Input();
    cin.ignore();
    cout<<"Nhom thi: ";
    getline(cin,nhomthi);
}

void ShowTimeExamination(){
    Subject::ShowInforSubject();
    cout<<" ";
    day.Outp();
    cout<<" ";
    hour.Output();
      cout<<" ";
    cout<<nhomthi;
}
Day Get_day(){
    return day;
}
Hour Get_hour(){
    return hour;
}

};
string STT(int k){
    string str="T";
    if(k<10){
        str=str+"00"+to_string(k+1);
    }
    else if(k<100&&k>10) {
str=str+"0"+to_string(k+1);
    }
    else {
        str=str+to_string(k+1);
    }
   return str;
}

class Manage{
    private:
    // vector<Subject> ds_monhoc;
    vector<TestSchedule> ds_lichthi;
    // string stt[100]={"T00"};
  
    public:
    Manage(){

    }
    ~Manage(){

    }
    void arrange(TestSchedule& a,TestSchedule &b){
Day str1,str2;
TestSchedule temp;
Hour str3,str4;
str1=a.Get_day();
str2=b.Get_day();
str3=a.Get_hour();
str4=b.Get_hour();
//arrange month
if(str1.Get_month()>str2.Get_month()){
    
    temp=a;
a=b;
b=temp;
}
else 
// arrange day
if(str1.Get_Day()>str2.Get_Day() && str1.Get_month()==str2.Get_month()){
    temp=a;
a=b;
b=temp;
 }
 else if(str1.Get_Day()==str2.Get_Day() && str1.Get_month()==str2.Get_month()){
if(str3.Get_hour()>str4.Get_hour()){
       temp=a;
a=b;
b=temp;
}else 
if(str3.Get_hour()==str4.Get_hour()&&str3.Get_minutes()>str4.Get_minutes()){
       temp=a;
a=b;
b=temp;
}
 }

    }

    void Input(){
       
        TestSchedule time;
        int choose;
        while(true){
            cout<<"\n\t\t====Enter Information====";
            cout<<"\n\t1.Write Information";
            cout<<"\n\t2.Read Information";
            cout<<"\n\t3.Exit";
            cout<<"\n\t4.Arrange List";
            cout<<"\n\t.Choose your number(1 or 2 or 3): ";
            cin>>choose;
            if(choose==1){
                cin.ignore();
    
        time.InputInf();
      
ds_lichthi.push_back(time);
            }
            else
            if(choose==3){
                break;
            }
            else
            if(choose==2){
                system("cls");
             for(int i =0;i<ds_lichthi.size();i++){
      cout<< STT(i)<<" ";
          
            ds_lichthi.at(i).ShowTimeExamination();
            cout<<endl;
        }
            }
            else
            if(choose==4){
                for(int i=0;i<ds_lichthi.size();i++){
                    for(int j=i+1;j<ds_lichthi.size();j++){
  arrange(ds_lichthi.at(i),ds_lichthi.at(j));
                    }
                }
                 for(int i =0;i<ds_lichthi.size();i++){
               cout<< STT(i)<<" ";
           
            ds_lichthi.at(i).ShowTimeExamination();
            cout<<endl;
        }
            }

            else{
                cout<<"Error! Invalid value";
            }
        }
    }
    
};


int main (){
    
 Manage a;
 a.Input();

    return 0;
}