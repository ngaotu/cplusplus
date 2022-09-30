#include <iostream>
using namespace std;

int count_minutes(int hour,int minute,int second,int &sum){
sum=hour*3600+minute*60+second;

return sum;
}
int main (){
int hour, minute ,second ,result;
cout<<"Enter hour , munute, second: ";
cin>>hour>>minute>>second;

cout<<"second: "<<count_minutes(hour,minute,second,result);
    return 0;
}