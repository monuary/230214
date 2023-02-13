//객체가 되기 위해선 메모리 할당 뿐만 아니라, 생성자의 호출이 이뤄져야 한다.
//정의하지 않으면 컴파일러가 알아서 디폴트 생성자를 삽입한다.
//new 연산자를 통해 생성자를 호출할수도 있다.
//AAA*ptr=new AAA;
//포인터를 사용하기 위해선 new 연산자를 쓴다.
//malloc 함수는 안된다. malloc함수는 클래스의 크기정보만 바이트 단위로 전달한다.
//생성자 뒤에 변수가 들어가면, 변수 없이는 클래스를 정의할 수 없다.

#include<iostream>
using namespace std;

class AAA
{
	int num;
	AAA(int n):num(n){}
public:
	AAA():num(0){}
	AAA& CreateInitObj(int n)const
	{
		AAA* ptr = new AAA(n);
		return*ptr;
	}
	void ShowNum()const { cout << num << endl; }
};

int main()
{
	AAA base;
	base.ShowNum();
	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();
	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();
	delete& obj1;	//포인터는 사용 후엔 지운다.
	delete& obj2;
	return 0;
}