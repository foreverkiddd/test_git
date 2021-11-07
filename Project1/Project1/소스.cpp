#include <iostream>

using namespace std;

int main() {
	int Case;
	cin >> Case;

	int student;

	for (int i = 0; i < Case; i++) {
		cin >> student;
		int score[100000] = { 0 };
		double sum = 0.0;
		double avg = 0.0;
		double count = 0.0;

		for (int j = 0; j < student; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = (double)sum / student;
		for (int j = 0; j < student; j++) {
			if (score[j] > avg) { count++; }
		}

		cout << fixed;
		cout.precision(3);
		cout << (count / student * 100) << "%" << endl;


	}




	return 0;
}