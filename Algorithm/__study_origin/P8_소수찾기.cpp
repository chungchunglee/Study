/*https://programmers.co.kr/learn/courses/30/lessons/42839
* �Ҽ� ã��
���� ����
���ڸ� ���ڰ� ���� ���� ������ ������ֽ��ϴ�. ����� ���� ������ �ٿ� �Ҽ��� �� �� ���� �� �ִ��� �˾Ƴ��� �մϴ�.

�� ���� ������ ���� ���ڰ� ���� ���ڿ� numbers�� �־����� ��, ���� �������� ���� �� �ִ� �Ҽ��� �� ������ return �ϵ��� solution �Լ��� �ϼ����ּ���.

���ѻ���
numbers�� ���� 1 �̻� 7 ������ ���ڿ��Դϴ�.
numbers�� 0~9���� ���ڸ����� �̷���� �ֽ��ϴ�.
"013"�� 0, 1, 3 ���ڰ� ���� ���� ������ ������ִٴ� �ǹ��Դϴ�.
����� ��
numbers	return
"17"	3
"011"	2
����� �� ����
���� #1
[1, 7]���δ� �Ҽ� [7, 17, 71]�� ���� �� �ֽ��ϴ�.

���� #2
[0, 1, 1]���δ� �Ҽ� [11, 101]�� ���� �� �ֽ��ϴ�.

11�� 011�� ���� ���ڷ� ����մϴ�.
*/
#include <string>
#include <vector>

using namespace std;

vector<int> check_pNum(vector<int> input)
{
    vector<int> answer;
    for(int j = 0; j < input.size(); j++)
    {
        bool bP = true;
        for (int i = 2; i < input[0] / 2; i++)
        {
            if (input[i] % i != 0)
            {
                bP = false;
                break;
            }
        }
        if (bP) answer.push_back(input[i]);
    }
}


int solution(string numbers) {
    int answer = 0;
    vector<int> numbers_i(numbers.size());

    for (int i = 0; i < numbers.size(); i++)
        numbers_i[i] = numbers[i] - '0';

    vector<int> numbers_c;
    //������ �̿��� 

    return answer;
}