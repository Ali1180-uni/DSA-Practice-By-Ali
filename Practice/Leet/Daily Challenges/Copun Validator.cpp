#include<iostream>
#include<vector>
using namespace std;
vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
		vector<string> electronics, grocery, pharmacy, restaurant;
		int n = code.size();

		for (int i = 0; i < n; i++) {

			if (code[i].empty() || !isActive[i]) continue;

			// validate characters
			bool valid = true;
			for (char c : code[i]) {
				if (!(isalnum(c) || c == '_')) {
					valid = false;
					break;
				}
			}
			if (!valid) continue;

			// push into correct bucket
			if (businessLine[i] == "electronics")
				electronics.push_back(code[i]);
			else if (businessLine[i] == "grocery")
				grocery.push_back(code[i]);
			else if (businessLine[i] == "pharmacy")
				pharmacy.push_back(code[i]);
			else if (businessLine[i] == "restaurant")
				restaurant.push_back(code[i]);
		}

		// simple bubble sort for each bucket
		auto simpleSort = [](vector<string>& v) {
			for (int i = 0; i < v.size(); i++) {
				for (int j = i + 1; j < v.size(); j++) {
					if (v[j] < v[i]) {
						swap(v[i], v[j]);
					}
				}
			}
		};

		simpleSort(electronics);
		simpleSort(grocery);
		simpleSort(pharmacy);
		simpleSort(restaurant);

		// final result
		vector<string> output;
		for (string s : electronics) output.push_back(s);
		for (string s : grocery) output.push_back(s);
		for (string s : pharmacy) output.push_back(s);
		for (string s : restaurant) output.push_back(s);

		return output;
	}
}