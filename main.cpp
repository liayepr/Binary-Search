// C++ program to implement recursive Binary Search 
#include <iostream> 
using namespace std;

void binarySearch(int arr[], int n, int x)
{
	/*int n = sizeof(arr) / sizeof(arr[0]);
	cout << sizeof(arr) << " " << sizeof(arr[0]) << "  " << n << endl; */
	int first = 0;
	int last = n - 1;
	int m = ( first + last ) / 2;
	while (first <= last) {

		if (arr[m] < x)
		{
			first = m + 1;
		
		}
		else if (arr[m] == x)
		{
			cout << x << " found at location " << m  << endl;
			break;
		}
		else
		{
			last = m - 1;
		}
		m = (first + last) / 2;
	}

	if (first > last)
	{
		cout << "Not found! " << x << " is not present in the list." << endl;
	}

}

int main(void)
{
	int arr[] = { 2, 3, 5, 8, 10, 30, 42, 50 };
	int x = 8;
	int n = sizeof(arr) / sizeof(arr[0]);
	binarySearch(arr, n, x);
	

	system("pause");
}
