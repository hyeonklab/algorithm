/*
���ڼ��ڼ��ڼ��ڼ��ڼ� ?
���� ����
���̰� n�̰�, ���ڼ��ڼ��ڼ�....�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.������� n�� 4�̸� ���ڼ����� �����ϰ� 3�̶�� ���ڼ��� �����ϸ� �˴ϴ�.

���� ����
n�� ���� 10, 000������ �ڿ����Դϴ�.
����� ��
n	return
3	���ڼ�
4	���ڼ���
*/
#include <string>
#include <vector>

using namespace std;

string solution( int n ) 
{
    string answer = "";
    for (int i = 0; i < n / 2; ++i)
    {
        answer = answer.append( "����" );
    }
    answer = (n % 2 == 1) ? answer.append( "��" ) : answer;

    return answer;
}

int main()
{
    string ret_val = solution( 2 );
}