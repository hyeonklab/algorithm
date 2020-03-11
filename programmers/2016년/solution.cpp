/*
���� ����
2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� a�� b���� ���� �����ϱ�� ? �� �� a, b�� �Է¹޾� 2016�� a�� b���� ���� �������� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ���� SUN, MON, TUE, WED, THU, FRI, SAT

�Դϴ�.���� ��� a = 5, b = 24��� 5�� 24���� ȭ�����̹Ƿ� ���ڿ� TUE�� ��ȯ�ϼ���.

���� ����
2016���� �����Դϴ�.
2016�� a�� b���� ������ �ִ� ���Դϴ�. (13�� 26���̳� 2�� 45�ϰ��� ��¥�� �־����� �ʽ��ϴ�)
����� ��
a	b	result
5	24	"TUE"
*/
#include <string>
#include <vector>
#include <array>

using namespace std;

string solution( int a, int b ) 
{
    string answer = "";

    array<int, 12> days_month = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    array<string, 7> day_of_the_week = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

    int index = 0;
    for (int i = 0; i < a-1; ++i)
    {
        index += days_month[i];
    }
    int tmp = (index + b-1) % 7;
    answer = day_of_the_week[tmp];

    return answer;
}

int main()
{
    string ret_val = solution( 2, 29 );

    return 0;
}