#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance()
{
/**
+1.������� �����
+2 ������� ����
+3.������� ���� � ����������� �����������
+4 ������ ������ ���� �������� �����
+5.����� ������� ����� ����
**/

    int n;
    cin>>n;
    int min = 40001;
    vector<int> numbers(n);
    for(int i = 0; i<n; i++){
        cin>>numbers[i];
    }

    for (int j(0); j<n; j++){
        for (int i(j+1); i<n; i++){
            if(numbers[j] + numbers[i]< min and i-j>=4){
        min = numbers[j] + numbers[i];
            }
        }
    }
cout<<min;
}
int main()
{
    min_sum_distance();
    return 0;
}
