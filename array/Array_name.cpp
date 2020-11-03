#include<iostream>
using namespace std;
int name[]={1,3,5,7,9,11};

int x,y,v;
set(int i,int j){
name[x*3+y]=v;
}
get(int i,int j,int v){
    return name[x*3+y];
}
void dump(){
 	for(int x=0;x<2;x++){
 	for(int y=0;y<3;y++ ){
       cout<< "  name[" <<x<< "]["<<y<<"]="<<name[x*3+y] ;
	 }
	 cout<<endl;
    }
}

int main(){
    
 	dump();
 }
