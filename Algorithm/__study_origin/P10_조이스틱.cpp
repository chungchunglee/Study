/*
https://programmers.co.kr/learn/courses/30/lessons/42860
���̽�ƽ
���� ����
���̽�ƽ���� ���ĺ� �̸��� �ϼ��ϼ���. �� ó���� A�θ� �̷���� �ֽ��ϴ�.
ex) �ϼ��ؾ� �ϴ� �̸��� �� ���ڸ� AAA, �� ���ڸ� AAAA

���̽�ƽ�� �� �������� �����̸� �Ʒ��� �����ϴ�.

�� - ���� ���ĺ�
�� - ���� ���ĺ� (A���� �Ʒ������� �̵��ϸ� Z��)
�� - Ŀ���� �������� �̵� (ù ��° ��ġ���� �������� �̵��ϸ� ������ ���ڿ� Ŀ��)
�� - Ŀ���� ���������� �̵� (������ ��ġ���� ���������� �̵��ϸ� ù ��° ���ڿ� Ŀ��)
���� ��� �Ʒ��� ������� "JAZ"�� ���� �� �ֽ��ϴ�.

- ù ��° ��ġ���� ���̽�ƽ�� ���� 9�� �����Ͽ� J�� �ϼ��մϴ�.
- ���̽�ƽ�� �������� 1�� �����Ͽ� Ŀ���� ������ ���� ��ġ�� �̵���ŵ�ϴ�.
- ������ ��ġ���� ���̽�ƽ�� �Ʒ��� 1�� �����Ͽ� Z�� �ϼ��մϴ�.
���� 11�� �̵����� "JAZ"�� ���� �� �ְ�, �̶��� �ּ� �̵��Դϴ�.
������� �ϴ� �̸� name�� �Ű������� �־��� ��, 
�̸��� ���� ���̽�ƽ ���� Ƚ���� �ּڰ��� return �ϵ��� solution �Լ��� ���弼��.

���� ����
name�� ���ĺ� �빮�ڷθ� �̷���� �ֽ��ϴ�.
name�� ���̴� 1 �̻� 20 �����Դϴ�.
����� ��
name	return
"JEROEN"	56
"JAN"	23
��ó
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int solution(string name) {
    int answer = 0;
    vector<int> btn_cnt(name.size());

    for (int i = 0; i < (int)name.size(); i++)
    {
        btn_cnt[i] = name[i] - 'A';
        //������ ��ư üũ
        if (27 - btn_cnt[i] < btn_cnt[i])
            btn_cnt[i] = 27 - btn_cnt[i];

        answer += btn_cnt[i];
    }


    return answer;
}

#ifdef __OTHERS__
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string name) {
    int answer = 0;
    for (auto ch : name) answer += min(ch - 'A', 91 - ch);

    int len = name.length();
    int move = len - 1;
    int next;
    for (int i = 0; i < len; i++) {
        next = i + 1;
        while (next < len && name[next] == 'A') next++;
        move = min(move, i + (len - next) + min(i, len - next));
    }
    answer += move;

    return answer;
}

#endif // __OTHERS__
