#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    	ifstream in("dz.txt");
    	ofstream out("fixeddz.txt");
    	if (!in.is_open() || !out.is_open()) {
        	cout << "Error opening files!" << endl;
        	return 1;
    	}
    	char c;
    	while (in.get(c)) {
        	if (islower(c)) {
            		out.put(toupper(c));
        	} else if (isupper(c)) {
            		out.put(tolower(c));
        	} else {
            		out.put(c);
        	}
    	}
    	in.close();
    	out.close();
    	return 0;
}
