
#include <string>
#include <cstddef>

using namespace std;

class tuple {
	//Attributes
	int length;
	float* array;
	
	//Functions
	public:
		tuple();
		/*
		Description	: Constructor without any variables, i.e, constructor for creating a null tuple.
		*/
		tuple(int l, float* a);
		/*
		Description	: Constructs a tuple by using variables length l and array a.
		*/
		void add(tuple t);
		/*
		Description	: Adds tuple t to initial tuple
		*/
		void copy(tuple t);
		/*
		Description	: Copy tuple t over initial tuple
		*/
		void substract(tuple t);
		/*
		Description	: Substracts tuple t from initial tuple
		*/		
		void saveToFile(string filename);
		/*
		Description	: Saves the tuple t to given file as a sequence of numbers. First input will be the length of the tuple, and rest of them are values of the tuple. 
		*/
		void loadFromFile(string filename);
		/*
		Description	: Loads the tuple t from given file. Considers first entry is the length and rest of the entries are the values.
		*/
		void setLength(int l);
		/*
		Description	: Takes an integer value l and sets it as the length and create and array of the tuple with elemets are all zeros.
		*/
		void getLenght();
		/*
		Description	: return the value length to user
		*/
		void append( tuple t);
		/*
		Description	: Append the tuple t at the end of initial tuple. 
		*/
		float average();
		/*
		Description	: Calculates the average value of the entries of initial tuple.
		*/
		float max();
		/*
		Description	: Finds the maximum value amongs the initial tuple.
		*/
		float min();
		/*
		Description	: Finds the minimum value amongs the initial tuple.
		*/
			
	
		//test functions
		void getTuple();
		/*
		Description	: Return the values of tuple.
		*/		
		
		//destructor function
		~tuple() {
			if(array != NULL) {
				delete array;
			}
		}
};
