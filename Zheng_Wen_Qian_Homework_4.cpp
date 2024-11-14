// Wen Qian Zheng
// November 12th, 2024
// Homework 4

#include <iostream>
#include <string>
using namespace std;

void filterEvens(int arr[], int size); // function prototypes
void totalCarsSold(int cars[], int size);
void bestSalesperson(int cars[], int size);
void dna_to_rna(string dna);

int main()
{
    const int SIZE = 8; // constant size of array
    int myArray[SIZE]; // array of integers
    cout << "Enter 8 integers: "; // prompt user to enter 8 integers
    for (int i = 0; i < SIZE; ++i) // loop to read integers into array
    {
        cin >> myArray[i]; // read integer into array
    }
    filterEvens(myArray, SIZE); // call filterEvens function

    //
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; // array of cars sold
    totalCarsSold(cars, 10); // call totalCarsSold function
    bestSalesperson(cars, 10); // call bestSalesperson function

    //
    string dna; // string to store DNA sequence
    cout << "Enter a DNA sequence: "; // prompt user to enter DNA sequence
    cin >> dna; // read DNA sequence into string
    dna_to_rna(dna); // call dna_to_rna function

    return 0; // return 0 to indicate successful program execution
}

void filterEvens(int arr[], int size)
{
    cout << "Even numbers in the array are: "; // print message
    for (int i = 0; i < size; ++i) // loop to iterate through array
    {
        if (arr[i] % 2 == 0) // check if element is even
        {
            cout << arr[i] << " "; // print even element
        }
    }
    cout << endl;
}

void totalCarsSold(int cars[], int size) // function to calculate total cars sold
{
    int total = 0; // initialize total to 0
    for (int i = 0; i < size; ++i) // loop to iterate through array
    {
        total += cars[i]; // add current element to total
    }
    cout << "Total number of cars sold: " << total << endl; // print total
}

void bestSalesperson(int cars[], int size)
{
    int maxCars = cars[0]; // initialize maxCars to first element of array
    int bestSalesperson = 1; // initialize bestSalesperson to 1
    for (int i = 1; i < size; ++i) // loop to iterate through array
    {
        if (cars[i] > maxCars)
        {
            maxCars = cars[i];
            bestSalesperson = i + 1; // update bestSalesperson
        }
    }
    cout << "Best salesperson: Salesperson #" << bestSalesperson << endl; // print best salesperson
    cout << "Number of cars sold by the best salesperson: " << maxCars << endl; // print number of cars sold by best salesperson
}

void dna_to_rna(string dna)
{
    string rna = "";
    for (int i = 0; i < dna.length(); i++) // loop to iterate through DNA sequence
    {
        switch (dna[i])
        {
            case 'A':
                rna += 'U'; // replace A with U
                break;
            case 'C':
                rna += 'G'; // replace C with G
                break;
            case 'G':
                rna += 'C'; // replace G with C
                break;
            case 'T':
                rna += 'A'; // replace T with A
                break;
            default:
                break;
        }
    }
    cout << "The corresponding RNA sequence for " << dna << " is: " << rna << endl;
}
