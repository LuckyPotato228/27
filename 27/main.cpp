#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
   +1. ������� � ��������� ��� �����
   +2. ������� ��� ����
   +3. ������ ���� ������� �����
   +4. �������� ��������� ����
   +5. ������� ������ ���������� �����
    */
    int n;
    int max = 0;
    ifs>>n;
    vector<int> numbers(n);
    for(int i = 0;i<n;i++){
        ifs >> numbers[i];
    }
    for (int j(0); j<n; j++){
        for (int i(j+1); i<n; i++)
        if(numbers[j] + numbers[i]>= max&&(numbers[j] + numbers[i])%2){
            max = numbers[j] + numbers[i];
        }

    }
    cout<<max;
}


int main()
{
    max_sum_div();
    return 0;
}
