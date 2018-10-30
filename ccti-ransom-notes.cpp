#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

// Complete the checkMagazine function below
void checkMagazine(vector<string> magazine, vector<string> note) {
	// finish here
	
}

int main(int argc, char const *argv[])
{
	string mn_temp;
	getline(cin >> ws, mn_temp);

	vector<string> mn = split_string(mn_temp);

	int m = stoi(mn[0]);

	int n = stoi(mn[1]);

	string magazine_temp_temp;
	getline(cin >> ws, magazine_temp_temp);

	vector<string> magazine_temp = split_string(magazine_temp_temp);

	vector<string> magazine;
	for (string magazine_item : magazine_temp) {
		magazine.push_back(magazine_item);
	}

	string note_t;
	getline(cin >> ws, note_t);

	vector<string> note_temp = split_string(note_t);

	vector<string> note;
	for (string note_item : note_temp) {
		note.push_back(note_item);
	}

	checkMagazine(magazine, note);

	return 0;
}

vector<string> split_string(string input_string)
{
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char & x, const char & y) {
		return x == y and x == ' ';
	} );

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delemeter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delemeter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delemeter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}
