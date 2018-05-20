/*
 * Video1_4a.cpp
 *
 *  Created on: 15 May 2018
 *      Author: Ian Wild
 */

#include <iostream>
#include <utility>
#include <tuple>
#include <cmath>


using namespace std;

void f(pair<string, string> p) {
	cout << "node.first: " << p.first << endl;
	cout << "node.second: " << p.second << endl;
}

void g(tuple<int, int, int> t) {
	int x = get<0>(t);
	int y = get<1>(t);
	int z = get<2>(t);

	float mag = sqrt(x*x + y*y + z*z);
	cout << "Magnitude of vector = " << mag << endl;
}

int main() {

	// Pair class
	// ----------

	// create an attribute pair example
	pair<string, string> attribute_pair("firstname", "Ian");

	// call a function that outputs pair data
	f(attribute_pair);

	// The make_pair convenience function
	attribute_pair = make_pair("lastname", "Wild");

	// output pair data to prove the point
	f(attribute_pair);

	// Tuple class
	// -----------

	// create a tuple example - a 3D vector
	auto vector = make_tuple(3, 2, 5);

	// output the magnitude of the vector
	g(vector);

    return 0;
}
