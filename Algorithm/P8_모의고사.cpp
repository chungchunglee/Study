/*https://programmers.co.kr/learn/courses/30/lessons/42840
* ���ǰ��
���� ����
�����ڴ� ������ ������ ����� �ظ��Դϴ�. ������ ���ι��� ���ǰ�翡 ���� ������ ���� ������ �մϴ�. �����ڴ� 1�� �������� ������ �������� ������ ���� ����ϴ�.

1�� �����ڰ� ��� ���: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
2�� �����ڰ� ��� ���: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
3�� �����ڰ� ��� ���: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

1�� �������� ������ ���������� ������ ������� ���� �迭 answers�� �־����� ��, ���� ���� ������ ���� ����� �������� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
������ �ִ� 10,000 ������ �����Ǿ��ֽ��ϴ�.
������ ������ 1, 2, 3, 4, 5�� �ϳ��Դϴ�.
���� ���� ������ ���� ����� ������ ���, return�ϴ� ���� �������� �������ּ���.
����� ��
answers	return
[1,2,3,4,5]	[1]
[1,3,2,4,2]	[1,2,3]
����� �� ����
����� �� #1

������ 1�� ��� ������ �������ϴ�.
������ 2�� ��� ������ Ʋ�Ƚ��ϴ�.
������ 3�� ��� ������ Ʋ�Ƚ��ϴ�.
���� ���� ������ ���� ���� ����� ������ 1�Դϴ�.

����� �� #2

��� ����� 2�������� ������ϴ�.
* 
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int acnt = 0, bcnt = 0, ccnt = 0;
    int a[5] = { 1,2,3,4,5 };
    int b[8] = { 2,1,2,3,2,4,2,5 };
    int c[10] = { 3,3,1,1,2,2,4,4,5,5 };
    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == a[i % 5]) acnt++;
        if (answers[i] == b[i % 8]) bcnt++;
        if (answers[i] == c[i % 10]) ccnt++;
    }
    if (acnt > bcnt && acnt > ccnt) answer.push_back(1);
    else if (bcnt > acnt && bcnt > ccnt) answer.push_back(2);
    else if (ccnt > acnt && ccnt > bcnt) answer.push_back(3);
    else if (bcnt == acnt && bcnt > ccnt) { answer.push_back(1); answer.push_back(2); }
    else if (bcnt == ccnt && bcnt > acnt) { answer.push_back(2); answer.push_back(3); }
    else if (ccnt == acnt && ccnt > bcnt) { answer.push_back(1); answer.push_back(3); }
    else if (bcnt == acnt && bcnt == ccnt) { answer.push_back(1); answer.push_back(2); answer.push_back(3); }



    return answer;
}