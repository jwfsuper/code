//��̬����ת����ʾ 
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
	B* pb = dynamic_cast<B*>(pa);		//static_cast<>() ��̬����ת��
	C* pc = dynamic_cast<C*>(pa);	//�������ͣ�ʹ��dynamicת������������̣�
									//������ת��ʧ�ܵģ���Ϊ C*  <--  &b �����������ͣ� 
	cout<<"pa = "<<pa<<endl;
	cout<<"pb = "<<pb<<endl;
	cout<<"pc = "<<pc<<endl;
	
	A& ra = b;
	//C& rc = dynamic_cast<C&>(b); 	//error
	
	return 0;
}

