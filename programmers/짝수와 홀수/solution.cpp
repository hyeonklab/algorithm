/*
���� ����
���� num�� ¦���� ��� Even�� ��ȯ�ϰ� Ȧ���� ��� Odd�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
num�� int ������ �����Դϴ�.
0�� ¦���Դϴ�.
����� ��
num	return
3	Odd
4	Even
*/
#include <string>
#include <vector>

using namespace std;

string solution( int num ) 
{
    return (num % 2) ? "Odd" : "Even";
}

int main()
{
    auto  retval = solution( -6 );
}