//��ü�� �Ǳ� ���ؼ� �޸� �Ҵ� �Ӹ� �ƴ϶�, �������� ȣ���� �̷����� �Ѵ�.
//�������� ������ �����Ϸ��� �˾Ƽ� ����Ʈ �����ڸ� �����Ѵ�.
//new �����ڸ� ���� �����ڸ� ȣ���Ҽ��� �ִ�.
//AAA*ptr=new AAA;
//�����͸� ����ϱ� ���ؼ� new �����ڸ� ����.
//malloc �Լ��� �ȵȴ�. malloc�Լ��� Ŭ������ ũ�������� ����Ʈ ������ �����Ѵ�.
//������ �ڿ� ������ ����, ���� ���̴� Ŭ������ ������ �� ����.

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
	delete& obj1;	//�����ʹ� ��� �Ŀ� �����.
	delete& obj2;
	return 0;
}