#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*//
K��°��
���� ����
�迭 array�� i��° ���ں��� j��° ���ڱ��� �ڸ��� �������� ��, k��°�� �ִ� ���� ���Ϸ� �մϴ�.

���� ��� array��[1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3�̶��

array�� 2��°���� 5��°���� �ڸ���[5, 2, 6, 3]�Դϴ�.
1���� ���� �迭�� �����ϸ�[2, 3, 5, 6]�Դϴ�.
2���� ���� �迭�� 3��° ���ڴ� 5�Դϴ�.
�迭 array, [i, j, k]�� ���ҷ� ���� 2���� �迭 commands�� �Ű������� �־��� ��, commands�� ��� ���ҿ� ���� �ռ� ������ ������ �������� �� ���� ����� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���ѻ���
array�� ���̴� 1 �̻� 100 �����Դϴ�.
array�� �� ���Ҵ� 1 �̻� 100 �����Դϴ�.
commands�� ���̴� 1 �̻� 50 �����Դϴ�.
commands�� �� ���Ҵ� ���̰� 3�Դϴ�.
����� ��
array	commands	return
[1, 5, 2, 6, 3, 7, 4] [[2, 5, 3], [4, 4, 1], [1, 7, 3]] [5, 6, 3]
����� �� ����
[1, 5, 2, 6, 3, 7, 4]�� 2��°���� 5��°���� �ڸ� �� �����մϴ�.[2, 3, 5, 6]�� �� ��° ���ڴ� 5�Դϴ�.
[1, 5, 2, 6, 3, 7, 4]�� 4��°���� 4��°���� �ڸ� �� �����մϴ�.[6]�� ù ��° ���ڴ� 6�Դϴ�.
[1, 5, 2, 6, 3, 7, 4]�� 1��°���� 7��°���� �ڸ��ϴ�.[1, 2, 3, 4, 5, 6, 7]�� �� ��° ���ڴ� 3�Դϴ�.
//*/

vector<int> solution( vector<int> array, vector<vector<int>> commands )
{
    vector<int> temp;
    vector<int> answer;

    for (size_t index = 0; index < commands.size(); ++index)
    {
        // ����, �� ������ k�� ���Ѵ�
        int start = commands[index][0];
        int end = commands[index][1];
        int k = commands[index][2];

        // ���� ~ �� �������� �ڸ���
        temp.clear();   // clear
        for (int cut_index = start - 1; cut_index < end; ++cut_index)
        {
            temp.emplace_back( array[cut_index] );
        }

        // �����Ѵ�
        sort( temp.begin(), temp.end() );
        // k��° ���� ���ؼ� answer�� �����Ѵ�
        answer.emplace_back( temp[k - 1] );
    }
    
    return answer;
}

int main()
{
    vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> commands = { {2, 5, 3} ,{4, 4, 1},{1, 7, 3} };

    auto return_val = solution( array, commands );

    return 0;
}