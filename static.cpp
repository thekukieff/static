#include <iostream>
using namespace std;

void yes_stat();

void no_stat();

int main() {
	setlocale(LC_ALL, "ru");
	cout << "�� ��������"<<endl;//�����������
	for (int i = 0; i < 10; i++)
	{
		yes_stat();
	}
	cout << "��� �������"<<endl;
	for (int i = 0; i < 10; i++)//�� �����������
	{
		no_stat();
	}

}

void yes_stat()
{
	static int var = 0;
	var++;
	cout << var << " ";
}

void no_stat()
{
	int var = 0;
	var++;
	cout << var << " ";

}











