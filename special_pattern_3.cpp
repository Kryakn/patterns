#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int k=1;
    int l=2;
    int n=(m+1)/2;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<"1 ";
        }
        else{
            cout<<k<<" ";
        }
        
        for(int j=1;j<=2*i-3;j++){
            cout<<"  ";
        }if (i==1){
            cout<<"  ";
        }
        else {
            cout<<k<<" ";
            k++;

        }
        cout<<endl;
    }


     for(int i=n-1;i>=1;i--){
        for (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<"1 ";
        }
        else{
            cout<<l<<" ";
        }
        
        for(int j=1;j<=2*i-3;j++){
            cout<<"  ";
        }if (i==1){
            cout<<"  ";
        }
        else {
            cout<<l<<" ";
            l--;

        }
        

        cout<<endl;
    }
    return 0;
}
/*
      1   
    1   1 
  2       2 
3           3 
  2       2 
    1   1 
      1   
*/