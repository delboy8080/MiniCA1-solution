#include <iostream>

using namespace std;
/*Version 1
 *
 * a)	Write a function, findMinMax, that will accept three integers and finds the highest and lowest values.
 *      (Const and pass by reference should be used where appropriate)
 *
 */
void findMinMax(const int &x, const int &y, const int &z, int &min, int &max)
{
    min = x < y?x:y;
    min = min < z?min:z;

    max = x > y?x:y;
    max = max > z?max:z;

}

/*
 * Version 2
 * a)	Write a function, findAverageEven, which will accept three integers and finds
 *      the average and the count of even numbers. (Const and pass by reference should be used where appropriate)
 *
 */

void findAverageEven(const int &x, const int &y, const int &z, double &avg, int &even)
{
    avg = (x+y+z)/3.0f;

    even = 0;
    even += x%2==0?1:0;
    even += y%2==0?1:0;
    even += z%2==0?1:0;

}

/*
 * Version 3
 *
 * a)	Write a function, findMultiples, which will accept three integers and returns the count of
 *      how many are multiples of 3 and 5. And how many are multiples of 2 and 7. (Const and pass by reference should be used where appropriate)
 */
void findMultiples(const int &x, const int &y, const int &z, int &threeAndFive, int &twoAndSeven)
{
    threeAndFive = twoAndSeven = 0;

    threeAndFive += x%3==0 && x%5==0?1:0;
    threeAndFive += y%3==0 && y%5==0?1:0;
    threeAndFive += z%3==0 && z%5==0?1:0;

    twoAndSeven += x%2==0 && x%7==0?1:0;
    twoAndSeven += y%2==0 && y%7==0?1:0;
    twoAndSeven += z%2==0 && z%7==0?1:0;

}

/*
 * Version 4
 * a)	Write a function, findOddEven , which will accept three integers and returns the number of even numbers
 *      and the number of odd numbers. (Const and pass by reference should be used where appropriate)
 *
 */
void findOddEven(const int &x, const int &y, const int &z, int &odd, int &even)
{
    even = 0;
    even += x%2==0?1:0;
    even += y%2==0?1:0;
    even += z%2==0?1:0;

    odd = 0;
    odd += x%2==1?1:0;
    odd += y%2==1?1:0;
    odd += z%2==1?1:0;

}

/*
 * Version 5
 *
 * a)	Write a function, findLCD, which will accept three integers and returns the lowest and highest common
 *      denominator of the three numbers. i.e. the lowest and highest number that can divide evenly into each of the three
 *      numbers. (You may assume the lowest number is the first parameter). (Const and pass by reference should be used
 *      where appropriate)
 *
 */
void findLCD(const int &x, const int &y, const int &z, int &lcd, int &hcd)
{
    int min = x < y?x:y;
    min = min < z?min:z;

    lcd = 1;
    int i = 2;
    while(i <= min)
    {
        if(x%i==0&& y%i==0&& z%i == 0)
        {
            lcd = i;
            break;
        }
        i++;
    }
    hcd = 1;
    i=2;
    while(i <= min)
    {
        if(x%i==0&& y%i==0&& z%i == 0)
        {
            hcd = i;

        }
        i++;
    }

}
/*
 * Version 6
 *
 * a)	Write a function, shuffle, which will accept three integers and shuffles the values so that no parameter has
 *      the same value after the function is run.  (Const and pass by reference should be used where appropriate)
 */
void shuffle(int &x, int &y, int &z)
{
    int temp = x;
    x = y;
    y = z;
    z = temp;
}

/*
 *
 * Version 7
 * a)	Write a function, sort, which will accept three integers and sorts the values so that the lowest value is
 *      stored in parameter 1, the second lowest value is stored in parameter 2 and the highest value is stored in
 *      parameter 3. (Const and pass by reference should be used where appropriate)
 */
void sort1(int &x, int &y, int &z)
{
        if(y < z && y<x)
        {
            int temp = y;
            y = x;
            x = temp;
        }
        else if(z < y && z<x)
        {
            int temp = z;
            z = x;
            x = temp;
        }

        if(z < y)
        {
            int temp = z;
            z = y;
            y = temp;
        }
}

/*
 *
 * Version 8
 *
 *       a)	Write a function, sort, which will accept three integers and sorts the values so that the highest value is stored
 *       in parameter 1, the second highest value is stored in parameter 2 and the lowest value is stored in parameter 3.
 *       (Const and pass by reference should be used where appropriate)
 */
void sort2(int &x, int &y, int &z)
{
    if(y > z && y>x)
    {
        int temp = y;
        y = x;
        x = temp;
    }
    else if(z > y && z>x)
    {
        int temp = z;
        z = x;
        x = temp;
    }

    if(z > y)
    {
        int temp = z;
        z = y;
        y = temp;
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    // Version 1 - Test each position of min and max
    cout <<endl<<endl << "Version 1 - Test output " <<endl;
    int min, max;
    findMinMax(1,2,3,min,max);
    cout << "Min: " << min << " Max: " << max << endl;
    findMinMax(2,1,3,min,max);
    cout << "Min: " << min << " Max: " << max << endl;
    findMinMax(3,2,1,min,max);
    cout << "Min: " << min << " Max: " << max << endl;
    findMinMax(2,3,1,min,max);
    cout << "Min: " << min << " Max: " << max << endl;
    // Version 2 - Test 1,2, 3 and no even numbers
    cout <<endl<<endl << "Version 2 - Test output " <<endl;
    double avg;
    int countEven;
    findAverageEven(1,3,4, avg, countEven);
    cout << "Average: " << avg << "; Number of even: " << countEven<< endl;
    findAverageEven(1,2,4, avg, countEven);
    cout << "Average: " << avg << "; Number of even: " << countEven<< endl;
    findAverageEven(6,2,4, avg, countEven);
    cout << "Average: " << avg << "; Number of even: " << countEven<< endl;
    findAverageEven(1,3,5, avg, countEven);
    cout << "Average: " << avg << "; Number of even: " << countEven<< endl;

    //Version 3
    cout <<endl<<endl << "Version 3 - Test output " <<endl;
    int threeAndFive, twoAndSeven;
    findMultiples(15,30,14,threeAndFive, twoAndSeven);
    cout << "Multiples of 3 & 5: " << threeAndFive<<"; Multiples of 2 and 7:" <<twoAndSeven<<endl;
    findMultiples(15,14,28,threeAndFive, twoAndSeven);
    cout << "Multiples of 3 & 5: " << threeAndFive<<"; Multiples of 2 and 7:" <<twoAndSeven<<endl;
    findMultiples(42,14,28,threeAndFive, twoAndSeven);
    cout << "Multiples of 3 & 5: " << threeAndFive<<"; Multiples of 2 and 7:" <<twoAndSeven<<endl;
    findMultiples(15,30,45,threeAndFive, twoAndSeven);
    cout << "Multiples of 3 & 5: " << threeAndFive<<"; Multiples of 2 and 7:" <<twoAndSeven<<endl;


    //Version 4
    cout <<endl<<endl << "Version 4 - Test output " <<endl;
    int odd;
    int even;
    findOddEven(1,3,4, odd, even);
    cout << "Odd: " << odd << "; Even: " << even<< endl;
    findOddEven(1,2,4, odd, even);
    cout << "Odd: " << odd << "; Even: " << even<< endl;
    findOddEven(6,2,4, odd, even);
    cout << "Odd: " << odd << "; Even: " << even<< endl;
    findOddEven(1,3,5, odd, even);
    cout << "Odd: " << odd << "; Even: " << even<< endl;

    //version 5
    cout <<endl<<endl<< "Version 5 - Test output " <<endl;
    int lcd, hcd;
    findLCD(9,45,27,lcd,hcd);
    cout << "HCD: " << hcd << "; LCD: " << lcd<< endl;
    findLCD(16,4,8,lcd,hcd);
    cout << "HCD: " << hcd << "; LCD: " << lcd<< endl;

    //Version 6
    cout <<endl<<endl<< "Version 6 - Test output " <<endl;

    int x = 5;
    int y = 6;
    int z=7;

    cout << "Before Shuffle: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;
    shuffle(x, y, z);
    cout << "After Shuffle: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;


    //Version 7
    cout <<endl<<endl<< "Version 7 - Test output " <<endl;

    x = 7;
    y = 6;
    z=5;

    cout << "Before Sort: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;
    sort1(x, y, z);
    cout << "After sort 1: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;
    x = 6;y=7, z=5;
    cout << "Before Sort: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;
    sort1(x, y, z);
    cout << "After sort 1: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;


    //Version 8
    cout <<endl<<endl<< "Version 8 - Test output " <<endl;

    x = 5;
    y = 6;
    z=7;

    cout << "Before Sort: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;
    sort2(x, y, z);
    cout << "After sort 1: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;
    x = 6;y=7, z=5;
    cout << "Before Sort: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;
    sort2(x, y, z);
    cout << "After sort 1: x->"<<x<<" y->"<<y <<" z->"<<z<<endl;

    return 0;
}
