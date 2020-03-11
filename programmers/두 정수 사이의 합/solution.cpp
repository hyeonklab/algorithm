/*
�� ���� ������ ��
���� ����
�� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

���� ����
a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
a�� b�� - 10, 000, 000 �̻� 10, 000, 000 ������ �����Դϴ�.
a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.
����� ��
a	b	return
3	5	12
3	3	3
5	3	12
*/
#include <string>
#include <vector>

using namespace std;

long long solution( int a, int b )
{
    long long answer = 0;
    long long min = a < b ? a : b;
    long long max = a > b ? a : b;
    /*
    for (long long i = min; i <= max; ++i)
    {
        answer += i;
    }
    //*/
    answer = (min + max) * (abs( min - max ) + 1) / 2;

    return answer;
}

int main()
{
    long long ret_val = solution( -10000, 90000 );
}