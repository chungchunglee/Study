//https://programmers.co.kr/learn/courses/30/lessons/42746
/*
* ���� ū ��
���� ����
0 �Ǵ� ���� ������ �־����� ��, ������ �̾� �ٿ� ���� �� �ִ� ���� ū ���� �˾Ƴ� �ּ���.

���� ���, �־��� ������ [6, 10, 2]��� [6102, 6210, 1062, 1026, 2610, 2106]�� ���� �� �ְ�, ���� ���� ū ���� 6210�Դϴ�.

0 �Ǵ� ���� ������ ��� �迭 numbers�� �Ű������� �־��� ��, ������ ���ġ�Ͽ� ���� �� �ִ� ���� ū ���� ���ڿ��� �ٲپ� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
numbers�� ���̴� 1 �̻� 100,000 �����Դϴ�.
numbers�� ���Ҵ� 0 �̻� 1,000 �����Դϴ�.
������ �ʹ� Ŭ �� ������ ���ڿ��� �ٲپ� return �մϴ�.
����� ��
numbers	return
[6, 10, 2]	"6210"
[3, 30, 34, 5, 9]	"9534330"
*/
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    priority_queue <pair<float, int>> checker;
    for (int i = 0 ; i < numbers.size(); i++)
    {
        int n = 0;
        float m = numbers[i];
        while (1)
        {
            if (m  < 10.0f)
                break;
            m = m / 10;
            n--;
        }
        checker.push(make_pair(m, n));
    }
    while(!checker.empty())
    {
        int n = checker.top().second;
        float m = checker.top().first;
        checker.pop();

        while (n++)
            m *= 10;
        answer += to_string(int(m));
    }

    return answer;
}
int main()
{
    //cout << solution({6,10,2}) << endl;
    cout << solution({3,30,34,5,9}) << endl;
}
/*
string solution(vector<int> numbers) {
    string answer = "";
    map <float, int,greater<float>> checker;
    for (int i = 0 ; i < numbers.size(); i++)
    {
        int n = 0;
        float m = numbers[i];
        while (1)
        {
            if (m  < 10.0f)
                break;
            m = m / 10;
            n++;
        }
        checker[m] = n;
    }
    for (auto& k : checker)
    {
        int n = k.second;
        int m = k.first;
        while (n--)
            m *= 10;
        answer += to_string(int(m));
    }

    return answer;
}
*/