//动态内存管理（基础），跨函数
#include<iostream>
using namespace std;
template<typename T>
T* alloc(int x){
	cout<<"Memory allocated"<<endl;
	return new T[x];	
}
template<typename T>
void freeA(T *x){
	cout<<"Freed mem"<<endl;
	delete []x;
	x=NULL;
}
int main(){
	int *p=alloc<int>(5);
	p[0]=1;
	cout<<p[0]<<endl;
	freeA(p);
	return 0;
}
//输出结果：
/*
Memory allocated
1
Freed mem
*/
