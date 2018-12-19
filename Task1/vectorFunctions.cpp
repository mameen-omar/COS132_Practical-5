#include <iostream>
#include <cmath>
#include <cstddef>

using namespace std;

#include "vectorFunctions.h" //for the prototypes

//Print out the vector 
void printVector(int v[], size_t size)
{
	cout << "[";
	for(size_t count = 0; count < (size-1); count++)
	{
		cout << v[count] << ", ";
	}

	cout << v[count] << "]";
}

//Add vectors 
int* addVectors(const int v1[], const int v2[], size_t dim)
{
	int *addptr = nullptr;
	addptr = new int [dim];

	for(size_t count = 0; count < dim; count++)
	{
		addptr[count] = v1[count] + v2[count];
	}

	return addptr;
}

//Subtract vectors 
int* subtractVectors(const int v1[], const int v2[], size_t dim)
{
	int *subtractptr = nullptr;
	subtractptr = new int [dim];

	for(size_t count = 0; count < dim; count++)
	{
		subtractptr[count] = v1[count] + v2[count];
	}

	return subtractptr;
}

//Calculates magnitude of the vector
double magnitude(const int v[], size_t dim)
{
	double square = 0; //hold the squared magnitude
	double value; //hold the temprary square of each element

	for(size_t count = 0; count < dim; count++)
	{
		value = 0;
		value = (v[count] * v[count]);
		square += value;
	}

	double square_root;
	square_root = sqrt(square);

	return square_root;
}

//check if the vectors are equal
bool equalVectors(const int v1[], const int v2[], size_t dim)
{
	bool equal = true;

	for(size_t count = 0; count < dim; count++)
	{
		if(v1[count] != v2[count])
		{
			equal = false;
		}
	}

	return equal;
}

//Calculates dot product of the vectos
int dotProduct(const int v1[], const int v2[], size_t dim)
{
	int dot = 0;
	int product;

	for(size_t count = 0; count < dim; count++)
	{
		product = (v1[count] * v2[count]);
		dot += product;
	}

	return dot;
}
