#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
�������� ���� ����
���� ����
������ ������ �������� �����濡 �����Ͽ����ϴ�. �� �� ���� ������ �����ϰ�� ��� ������ �������� �����Ͽ����ϴ�.

�����濡 ������ �������� �̸��� ��� �迭 participant�� ������ �������� �̸��� ��� �迭 completion�� �־��� ��, �������� ���� ������ �̸��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���ѻ���
������ ��⿡ ������ ������ ���� 1�� �̻� 100,000�� �����Դϴ�.
completion�� ���̴� participant�� ���̺��� 1 �۽��ϴ�.
�������� �̸��� 1�� �̻� 20�� ������ ���ĺ� �ҹ��ڷ� �̷���� �ֽ��ϴ�.
������ �߿��� ���������� ���� �� �ֽ��ϴ�.
����� ��
participant	completion	return
[leo, kiki, eden]	[eden, kiki]	leo
[marina, josipa, nikola, vinko, filipa]	[josipa, filipa, marina, nikola]	vinko
[mislav, stanko, mislav, ana]	[stanko, ana, mislav]	mislav
����� �� ����
���� #1
leo�� ������ ��ܿ��� ������, ������ ��ܿ��� ���� ������ �������� ���߽��ϴ�.

���� #2
vinko�� ������ ��ܿ��� ������, ������ ��ܿ��� ���� ������ �������� ���߽��ϴ�.

���� #3
mislav�� ������ ��ܿ��� �� ���� ������, ������ ��ܿ��� �� ��ۿ� ���� ������ �Ѹ��� �������� ���߽��ϴ�.
*/

string solution( vector<string> participant, vector<string> completion )
{
    // ����
    sort( participant.begin(), participant.end() );
    sort( completion.begin(), completion.end() );

    // ���� �ٸ� ù��° �� ã��
    for (size_t i = 0; i < completion.size(); ++i)
    {
        if (completion[i] != participant[i])
        {
            return participant[i];  // ã�� ��
        }
    }

    return *participant.rbegin();   // �� ã���� ������ �� ����
}

int main()
{
    // �������� ���� ���� ã�� (�������� ���� ������ �� - 1 �̴�)
    vector<string> participant = { "miranda", "chris", "chris", "john" };   // ������
    vector<string> completion = { "chris", "john", "miranda" }; // ������

    string answer = solution( participant, completion );
    cout << answer << endl;

    return 0;
}