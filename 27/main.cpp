#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance()
{

/**
+1.������� �����
+2 ������� ����
+3.������� ���� � ����������� �����������
4 ������ ������ ���� �������� �����
5.����� ������� ����� ����
**/
    int n;
    cin>>n;
    vector<int> numbers(n);
    for(int i = 0; i<n; i++){
        cin>>numbers[i];
    }

    for (int j(0); j<n; j++){
        for (int i(j+1); i<n; i++){
            if(i-j>=4){
        cout << numbers[j]<<" "<<numbers[i]<<endl;
            }
        }
    }
}
int main()
{
    min_sum_distance();
    return 0;
}
