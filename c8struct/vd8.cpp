#include <bits/stdc++.h>
using namespace std;
  struct Student{
   string name;
   float Math;
   float Physics;
   float Chemistry;
   float sum;
  };
  void GetInput(Student & s){
   cout<<"Input student name: ";
   getline(cin,s.name);
   if(s.name!=""){
   cout<<"Input math score: ";
   cin>>s.Math;
   cout<<"Input physics score: ";
   cin>>s.Physics;
   cout<<"Input chemistry score: ";
   cin>>s.Chemistry; 
    s.sum= s.Chemistry+s.Math+s.Physics;
   }
  
  }
  void GetOutput(Student s){
      
      cout<<"\nName: "<<s.name<<"\nMath Score: "<<s.Math<<"\nPhysics score: "<<s.Physics<<"\nChemistry score: "<<s.Chemistry<<"\nTotal mark: "<<s.sum;
      cout<<"\n\t============";
      
  }

  void GetListStudent(Student * ds,int & n){
      Student s;
      n=0;
      do{
         GetInput(s);
        if(s.name!=""){
           ds[n]=s;
           n++;
        }
         cin.ignore();

      } while( s.name!="");
  }
  void ShortList(Student * ds, int n){
      for(int i=0;i<n-1;i++){
           
          for(int j =i+1;j<n;j++){
              
              if(ds[i].sum<ds[j].sum){
                  Student s = ds[i];
                  ds[i]=ds[j];
                  ds[j]=s;
              }
          }
      }

  }
    //   tim học sinh có điểm  cao hơn điểm chuẩn
  void ScorePass(Student * ds,int n){
      float score;
      cout<<"Input score: ";
      cin>>score;
      for(int i =0;i<n;i++){
        
          if((score<=ds[i].sum) && (ds[i].Chemistry!=0) && (ds[i].Physics!=0) && (ds[i].Math !=0)){
            GetOutput(ds[i]);
          }
      }
  }
  void HighestMark(Student * ds,int n){
      Student highest = ds[0];
      for(int i= 1;i<n;i++){
          if(highest.sum<ds[i].sum){
              highest = ds[i];
          }
      }
      GetOutput(highest);
  }

  void FindScore( Student * ds, int n ){
      int k;
      int count=0;
      float average=0;
    //   bool check[n]={false};
      do{
          cout<<"\nInput number pass: ";
          cin>>k;
      } while(k>n|| k <=0);
      for(int i =0;i<k;i++){
        if(ds[i].sum!=ds[k].sum){
        average+=ds[i].sum;
        count ++;
        }
        else {
          break;
        }
         
      }
      if(count ==0){
        average=0;
      }
      else {

      average=average/count*1.0;
      }
     cout<<"\nScore pass: "<<average;
  }
int main (){
  Student ds[100] ;
  int n;
  GetListStudent(ds,n);
  ShortList(ds,n);
  ScorePass(ds,n);
  HighestMark(ds,n);
   FindScore(ds,n);
    return 0;
}