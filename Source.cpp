#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*20
	const int N = 10;
	int arr[N],K,L,sum = 0;
	cin >> K >> L;
	srand(time(nullptr));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = K; i <= L;i++) {
		sum += arr[i];
	}
	cout << sum;*/

	/*21
	const int N = 10;
	int arr[N], K, L, sum = 0, k = 0;
	float sr;
	cin >> K >> L;
	srand(time(nullptr));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = K; i <= L; i++) {
		sum += arr[i];
		k++;
	}
	sr =(float)sum / k;
	cout << sr;*/

	/*22
	const int N = 10;
	int arr[N], K, L, sum = 0, k = 0;
	cin >> K >> L;
	srand(time(nullptr));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < K; i++) {
		sum += arr[i];
	}
	for (int i = L+1; i <= N; i++) {
		sum += arr[i];
	}
	cout << sum;*/
	
	/*23
	const int N = 10;
	int arr[N], K, L, sum = 0, k = 0;
	float sr;
	cin >> K >> L;
	srand(time(nullptr));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < K; i++) {
		sum += arr[i];
		k++;
	}
	for (int i = L + 1; i <= N; i++) {
		sum += arr[i];
		k++;
	}
	sr = (float)sum / k;
	cout << sr;*/

	/*24
	const int N = 10;
	int arr[N],i = 0,k = 0;
	float sr;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i]<<' ';
	}
	int d = arr[1] - arr[0];
	for (int i = 0; i < N;i++) {
		if (arr[i + 1] - arr[i] == d) {
			k++;
		}
	}
	if (k == N - 1) {
		cout << d;
	}
	else {
		cout << endl<< 0;
	}*/
	

	/*25
	const int N = 10;
	int arr[N], i = 0, k = 0;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	float q = arr[1] / arr[0];

	for (int i = 0; i < N; i++) {
		if ((float)arr[i + 1] / arr[i] == q) {
			k++;
		}
	}
	if (k == N - 1) {
		cout << q;
	}
	else {
		cout << endl << 0;
	}*/
	
	
	const int N = 10;
	int arr[N], sum = 0, k = 0;
	bool c;
	srand(time(nullptr));
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < N-1; i++) {
		c = (arr[i] % 2 == 0 && arr[i] % 2 != 0) || (arr[i] % 2 != 0 && arr[i] % 2 == 0);
		k++;
		if (c = 0) {
			break;
		}
		
	}
	if (c = 0) {
		cout << k;
	}
	else {
		cout << 0;
	}
}