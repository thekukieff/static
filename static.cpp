#include <iostream>
using namespace std;

void yes_stat();

void no_stat();

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Со статиком"<<endl;//увеличивает
	for (int i = 0; i < 10; i++)
	{
		yes_stat();
	}
	cout << "Без статика"<<endl;
	for (int i = 0; i < 10; i++)//не увеличивает
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











