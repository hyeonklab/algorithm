﻿/*
소수 찾기
문제 설명
1부터 입력받은 숫자 n 사이에 있는 소수의 개수를 반환하는 함수, solution을 만들어 보세요.

소수는 1과 자기 자신으로만 나누어지는 수를 의미합니다.
(1은 소수가 아닙니다.)

제한 조건
n은 2이상 1000000이하의 자연수입니다.
입출력 예
n	result
10	4
5	3
입출력 예 설명
입출력 예 #1
1부터 10 사이의 소수는 [2,3,5,7] 4개가 존재하므로 4를 반환

입출력 예 #2
1부터 5 사이의 소수는 [2,3,5] 3개가 존재하므로 3를 반환
*/
#include <vector>
#include <algorithm>

using namespace std;

int solution( int n )
{
    vector<bool> primes;   // 소수 목록
    primes.assign( n+1, true ); // 초기값 모두 true
    for( int i = 2; i * i <= n; ++i )   // 2부터 소수이므로 0,1 인덱스는 사용하지 않음
    {
        if( primes[ i ] )
        {
            for( int j = i * i; j <= n; j += i )    // 에라토스 체네스의 체 알고리즘
                primes[ j ] = false;  // 작은 수 부터 배수 걸러내기
        }
    }

    return count( primes.begin() + 2, primes.end(), true ); // 다 걸러내면 소수만 남는다
}

int main()
{
    int ret = 0;
    ret = solution( 10 );   // 4
    ret = solution( 5 );   // 3
}
