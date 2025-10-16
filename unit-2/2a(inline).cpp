#include<iostream>
using namespace std;
inline void msg(){
	cout << "This Sentence is Written in inline";
}
inline int add(int a, int b) {
    return a + b;
}
inline int sub(int a,int b){
	return a-b;
}
int main(){
	int result1 = add(5, 3);
    int result2 = sub(5,3);
    cout<<"add = "<<result1<<"\nsub = "<<result2<<endl;
	msg();
}
