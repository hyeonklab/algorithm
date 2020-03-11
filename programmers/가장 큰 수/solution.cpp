/*
���� ū ��
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
[6, 10, 2]	6210
[3, 30, 34, 5, 9]	9534330
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���� ���ġ ��� �� ū �� �� �Լ�
bool comp( const string& a, const string& b )
{
    return (a + b > b + a) ? true : false;
}

string solution( vector<int> numbers )
{
    string answer = "";
    vector<string> str_numbers;

    for (int val : numbers)
    {
        str_numbers.emplace_back( to_string( val ) );   // �� ���ڸ� ���ڿ� ���ͷ�
    }
    sort( str_numbers.begin(), str_numbers.end(), comp );   // ���� ū ���� ���·� ����

    for (auto iter = str_numbers.begin(); iter != str_numbers.end(); ++iter)
    {
        answer.append( *iter ); // �ϳ��� ���ڿ��� ����
    }

    if (answer[0] == '0')
        answer = "0";   // "0" or "00" or "000" ... �� �׳� 0����

    return answer;
}

int main()
{
    //auto ret = solution( { 6, 10, 2 } );    // return 6210
    //ret = solution( { 3, 30, 34, 5, 9 } ); // return 9534330
    //auto ret = solution( { 0 } ); // return 0
    auto ret = solution( { 0, 0, 0, 0, 0 } ); // return 0
}