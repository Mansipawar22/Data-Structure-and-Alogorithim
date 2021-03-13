#include <iostream>
using namespace std;

int main()
{
	int t1;
	int t2;
	int n;
	int temp;
	int index;
	int arr[200];
	int output[200];

	//cout << "Enter the number's of test cases: ";
	cin >> t1;
	arr[t1];
	output[t1];
	t2= t1;
	for (int i = 0; i < t1; i++)
	{
		//Entering the number into the array
		cin >> n;
		arr[i] = n;
	}
	while(t2--)
	{
		index = 0;
		for (int i = 0; i < t1; i++)
		{
			if(arr[i] == 1)
			{
				output[index]=1;
				index++;			
			}
			temp = 1;
			for(int j = 2; j <=arr[index]; j++)
			{
				temp *= j;
			}
			output[index]=temp;
			index++;
		}
	}

	for(int i = 0; i < t1; i++)
		cout << output[i] << endl;

	return 0;
}