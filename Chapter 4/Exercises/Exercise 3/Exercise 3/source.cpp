#include "../../../../std_lib_facilities.h"
int main()
{
	vector<double> distance;
	double sum = 0;
	cout << "Please enter any distances between the sities and press 'Enter'.\n";
	for (double dist; cin >> dist;) {
		distance.push_back(dist);
		sum += dist;
	}
	sort(distance);
	cout << "The all distance between all the sities is about " << sum << " units.\n";
	cout << "The minimal distance is " << distance[0] << ".\n";
	cout << "The maximal distance is " << distance[distance.size() - 1] << ".\n";
	cout << "The average distance between the sities is " << sum / distance.size() << ".\n";
	keep_window_open();
}

