//https://www.acmicpc.net/problem/10808
/*
* ����
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. �� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
�ܾ ���ԵǾ� �ִ� a�� ����, b�� ����, ��, z�� ������ �������� �����ؼ� ����Ѵ�.
*/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string insert;
	vector<int>  alphabet = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	cin >> insert;

	for (int i = 0; i < insert.size(); i++)
	{
		int cnt = (int)insert[i] - 97;
		alphabet[cnt]++;
	}


	for (int i = 0; i < alphabet.size(); i++)
	{
		cout << alphabet[i] << " ";
	}

}