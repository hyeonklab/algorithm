/*
가장 큰 수
문제 설명
0 또는 양의 정수가 주어졌을 때, 정수를 이어 붙여 만들 수 있는 가장 큰 수를 알아내 주세요.

예를 들어, 주어진 정수가 [6, 10, 2]라면 [6102, 6210, 1062, 1026, 2610, 2106]를 만들 수 있고, 이중 가장 큰 수는 6210입니다.

0 또는 양의 정수가 담긴 배열 numbers가 매개변수로 주어질 때, 순서를 재배치하여 만들 수 있는 가장 큰 수를 문자열로 바꾸어 return 하도록 solution 함수를 작성해주세요.

제한 사항
numbers의 길이는 1 이상 100,000 이하입니다.
numbers의 원소는 0 이상 1,000 이하입니다.
정답이 너무 클 수 있으니 문자열로 바꾸어 return 합니다.
입출력 예
numbers	return
[6, 10, 2]	6210
[3, 30, 34, 5, 9]	9534330
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 순서 재배치 경우 중 큰 값 비교 함수
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
        str_numbers.emplace_back( to_string( val ) );   // 각 숫자를 문자열 벡터로
    }
    sort( str_numbers.begin(), str_numbers.end(), comp );   // 가장 큰 값의 형태로 정렬

    for (auto iter = str_numbers.begin(); iter != str_numbers.end(); ++iter)
    {
        answer.append( *iter ); // 하나의 문자열로 구성
    }

    if (answer[0] == '0')
        answer = "0";   // "0" or "00" or "000" ... 은 그냥 0으로

    return answer;
}

int main()
{
    //auto ret = solution( { 6, 10, 2 } );    // return 6210
    //ret = solution( { 3, 30, 34, 5, 9 } ); // return 9534330
    //auto ret = solution( { 0 } ); // return 0
    auto ret = solution( { 0, 0, 0, 0, 0 } ); // return 0
}