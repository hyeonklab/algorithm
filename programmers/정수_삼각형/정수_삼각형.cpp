/*
정수 삼각형
문제 설명
https://grepp-programmers.s3.amazonaws.com/files/production/97ec02cc39/296a0863-a418-431d-9e8c-e57f7a9722ac.png
위와 같은 삼각형의 꼭대기에서 바닥까지 이어지는 경로 중, 거쳐간 숫자의 합이 가장 큰 경우를 찾아보려고 합니다. 
아래 칸으로 이동할 때는 대각선 방향으로 한 칸 오른쪽 또는 왼쪽으로만 이동 가능합니다. 예를 들어 3에서는 그 아래칸의 8 또는 1로만 이동이 가능합니다.

삼각형의 정보가 담긴 배열 triangle이 매개변수로 주어질 때, 거쳐간 숫자의 최댓값을 return 하도록 solution 함수를 완성하세요.

제한사항
삼각형의 높이는 1 이상 500 이하입니다.
삼각형을 이루고 있는 숫자는 0 이상 9,999 이하의 정수입니다.
입출력 예
triangle	result
[[7], [3, 8], [8, 1, 0], [2, 7, 4, 4], [4, 5, 2, 6, 5]]	30
출처  http://stats.ioinformatics.org/countries/SWE
*/
#include <vector>
#include <algorithm>

using namespace std;

vector< vector<int> > dp_vec;
int dp(int row, int col, vector<vector<int>>& input )
{
    if( row == input.size() )
        return 0;  // 마지막 도달이면 종료
    if( dp_vec[ row ][ col ] > 0 )
        return dp_vec[ row ][ col ]; // 값 있으면 재사용하여 리턴

    // 값 없으면 부모의 누적 값 = 부모값 + 자식 left, right의 누적 값 중 max값 얻기 (최하위 노드까지)
    return dp_vec[ row ][ col ] = input[ row ][ col ] + max( dp( row + 1, col, input ), dp( row + 1, col + 1, input ) );
}

int solution( vector<vector<int>> triangle )
{
    int answer = 0;
    // 2단계의 두경우만 조사한다
    // 두 경우에서 left, right 비교하여 큰 숫자 선정하여 합산. 최하위 노드까지 이어서.
    int size = triangle.size();
    dp_vec.assign( size, vector<int>( size, 0 ) );
    answer = dp( 0, 0, triangle );  // 가장 큰 누적값

    return answer;
}

int main()
{
    int ret = 0;
    ret = solution( { {7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5} } );    // 30
    ret = solution( { {7}, {8, 3}, {8, 1, 0}, {4, 4, 7, 2}, {4, 5, 2, 6, 5} } );    // 32
}
