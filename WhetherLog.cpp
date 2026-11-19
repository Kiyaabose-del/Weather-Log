#include <iostream>
using namespace std;

double averagef(double arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / 7.0;
}

float highf(double arr[], int n)
{
    float highest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

float lowf(double arr[], int n)
{
    float lowest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}

double MoreAvrg(double arr[], int n)
{
    double result = averagef(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > result)
        {
            count++;
        }
    }
    return count;
}

void ConvCel(double arr[], int n)
{

    double Cel[7];
    for (int i = 0; i < n; i++)
    {

        Cel[i] = arr[i] - 273.15;
        cout << "Tempereture in celcius " << i + 1 << ": " << Cel[i] << " 0^C" << endl;
    }
    cout << endl;
}

void ConvFar(double arr[], int n)
{

    double Far[7];
    for (int i = 0; i < n; i++)
    {

        Far[i] = (arr[i] - 273.15) * (1.8) + 32;
        cout << "Tempereture in faraniht " << i + 1 << ": " << Far[i] << " 0^F" << endl;
    }
}


void Display(double arr[],int n){

    
    cout << endl
         << endl;
    cout << "highest: " << highf(arr, n) << endl;
    cout << "lowest: " << lowf(arr, n) << endl;
    cout << "average: " << averagef(arr, n) << endl;
    cout << "MoreAvrg: " << MoreAvrg(arr, n) << endl
         << endl;
    ConvCel(arr, n);
    ConvFar(arr, n);
}

int main()
{
    double temp[7];
    
    cout << "\n\t>>>>>WEATHER LOG<<<<<" << endl;
    cout << "enter the temp of 7 days in kelvin." << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "enter tempreture " << i + 1 << ": ";
        cin >> temp[i];
    }
     
    Display(temp,7);


    return 0;
}