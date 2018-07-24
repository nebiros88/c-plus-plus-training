#include "../../../../std_lib_facilities.h"
int main()
{
	constexpr int max = 2147483647;
	int current_value = 1;
	int previous_value = 0;
	for (int i = 0; i < max; ++i) {
		try
		{
			cout << current_value << '\t';
			current_value = narrow_cast<int>(double(current_value) + previous_value);
			previous_value = current_value - previous_value;
		}
		catch (runtime_error & e) {
			cout << "Max value is " << current_value << " \n";
			keep_window_open();
		}
	}
	keep_window_open();
}