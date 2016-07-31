#pragma once

#include <string>
using namespace std;

class Movies {
private:
	int movieId;
	string movieTitle;
	
public:
	Movies();
	Movies(int, string);
	int getMovieId();
	string getMovieTitle();
	void setMovieId(int);
	void setMovieTitle(string);
};
