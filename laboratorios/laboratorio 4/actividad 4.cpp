#include <iostream>
#include <list>
#include <cstdlib>
 
using namespace std; 
 
int main ()
{
	
	list<int> lst;

	for (int i=1; i<=10; i++) {
		lst.push_back(i);
	}
	/
	reverse(lst.begin(), lst.end());

	for_each(lst.begin(), lst.end(), [](int n) {
		cout << n << endl;
	});
	
	return EXIT_SUCCESS;
}