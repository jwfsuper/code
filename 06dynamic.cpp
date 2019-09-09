//动态类型转换演示 
#include <iostream>
using namespace std;

class A{
public:
	virtual void foo(void){cout<<"haha..."<<endl;}	
};
class B:public A{
public:
	virtual void foo(void){cout<<"qieqie..."<<endl;}	
};
class C:public A{
public:
	virtual void foo(void){cout<<"gogo..."<<endl;}	
};


int main(int argc, char *argv[]){
	B b;
	A* pa = &b;
	B* pb = dynamic_cast<B*>(pa);		//static_cast<>() 静态类型转换
	C* pc = dynamic_cast<C*>(pa);	//向下造型，使用dynamic转换，多个检查过程；
									//这里是转换失败的；因为 C*  <--  &b 不是向下造型； 
	cout<<"pa = "<<pa<<endl;
	cout<<"pb = "<<pb<<endl;
	cout<<"pc = "<<pc<<endl;
	
	A& ra = b;
	//C& rc = dynamic_cast<C&>(b); 	//error
	
	return 0;
}

