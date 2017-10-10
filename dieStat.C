#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  srand(time(0)); //ensures random() generates a different sequence of random numbers in each run

  const int SIDES = 6; //the number of sides in a die
  const int NUM_ROLLS = 1000000; //the number of rolls

  int roll; //each roll
  int rolls[SIDES+1]; //array that contains counters

  //initialize the array here
  for(int i=1;i<=SIDES;i++)
    {
      rolls[i]=0;
    }

  //roll a die NUM_ROLLS times and keep track of how many times each number was rolled
  for(int i=1; i<=NUM_ROLLS;i++)
    {
      roll = rand()%6+1;  //roll a die
      rolls[roll]++; //increment
    }

  //Show the contents of the array (the number of times each number was rolled) along with the probability of rolling each number. Don't show the content in index 0.
  for(int i =1;i<=SIDES;i++)
    {
      cout<<i<<":"<<setw(5)<<setw(10)<<fixed<<setprecision(4)<<rolls[i]<<setw(10)<<fixed<<setprecision(4)<<(double)rolls[i]/10000<<"%"<<endl;
    }
    

  return 0;
}

