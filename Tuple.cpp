#include "Tuple.h"
#include <iostream>
#include <fstream>

 //
 // WARNING: this file is only function definition of the class declared in Tuple.h
 //

using namespace std;

tuple :: tuple() {
	length=0;
	array = new float[0];
}

tuple :: tuple(int l,float* a){
	length = l;
	array = new float[l];
	array=a;
}

void tuple :: add(tuple t) {
	if(length == t.length) {
		for(int i = 0; i<length;i++) {
			array[i] = array[i] + t.array[i];
		}
	}
	else {
		cout << "Tuples do not have the same length." << endl;
	} 
}

void tuple :: copy(tuple t) {
	if(length == t.length) {
		for(int i = 0; i<length; i++) {
			array[i] = t.array[i];
		}
	}
	else {
		std :: cout << "Tuples do not have the same length." << endl;
	} 
}

void tuple :: substract(tuple t) {
	if(length == t.length) {
		for(int i = 0; i<length;i++) {
			array[i] = array[i] - t.array[i];
		}
	}
	else {
		std :: cout << "Tuples do not have the same length." << endl;
	} 	
}

void tuple :: saveToFile(string filename) {
	ofstream myFile;
	myFile.open(filename.c_str());
	
	myFile << length << " ";
	
	for(int i=0;i<length;i++) {
		myFile << array[i] << " ";	
	}
	
	myFile.close();
}

void tuple :: loadFromFile(string filename) {
	ifstream myFile;
	myFile.open(filename.c_str());
	
	myFile >> length;
	
	for(int i =0;i<length;i++) {
			myFile >> array[i];
	}
}

void tuple :: setLength(int l) {
	length=l;
	array = new float[l];
	for(int i=0;i<l;i++) {
		array[i]=0;
	}
}

void tuple :: getLenght() {
	cout << "Length is " << length << endl;
}

void tuple :: append(tuple t) {
	int _length;
	_length = length;
	length = length + t.length;
	for(int i = 0; i<t.length; i++ ) {
		array[_length+i] = t.array[i];
	}
}

float tuple :: average() {
	float avg;
	float sum = 0;
	
	for(int i = 0; i<length; i++) {
		sum = sum + array[i];
	}
	
	avg = sum / length;
	
	return avg;	
}

float tuple :: max() {
	float max = array[0];
	
	for(int i = 0; i<length; i++) {
		if(max < array[i]) {
			max = array[i];
		}
	}
	
	return max;
}

float tuple :: min() {
	float min = array[0];
	
	for(int i = 0; i<length; i++) {
		if(min > array[i]) {
			min = array[i];
		}
	}
	
	return min;
}

//test functions
void tuple :: getTuple() {
		if(length != 0) {
			for(int i=0;i<length;i++){			
				std :: cout << i+1 << "th element of tuple is " << array[i] << std::endl;
			}
		}
		
		else {
			std :: cout << "This tuple is null!" << endl;
		}
	
}

