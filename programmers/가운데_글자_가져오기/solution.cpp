/*
��� ���� ��������

���� ����
�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

���ѻ���
s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.
����� ��
s	return
abcde	c
qwer	we
*/
#include <string>
#include <vector>

using namespace std;

string solution( string s )
{
    string answer = "";
    int len = s.size();
    int midlen = (len % 2) == 1 ? 1 : 2;
    int mididx = midlen == 1 ? (len / 2) : (len / 2) - 1;
    answer = s.substr( mididx, midlen );
    //printf("%d", midlen);
    return answer;
}

int main()
{
    string ret;
    ret = solution( "abcde" );  // c
    ret = solution( "qwer" );   // we
}