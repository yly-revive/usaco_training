/*
ID: ylyyanl1
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream fout ("ride.out");
  ifstream fin ("ride.in");
  string  a, b;
  fin >> a >> b;
  /*fout << a+b << endl;*/
  
  int a_size = a.size();
  int b_size = b.size();
  long long int sum_a=1, sum_b=1;
  for (int i = 0; i < a_size; i++)
    {
      sum_a *= (a[i] - 64);
    }

  for (int i = 0; i < b_size; i++)
    {
      sum_b *= (b[i]-64);
    }

  int mod_a = sum_a % 47;
  int mod_b = sum_b % 47;
  /*fout << sum_a << endl << sum_b << endl << mod_a << endl<< mod_b << endl;*/
  if (mod_a == mod_b)
    {
      fout << "GO" << endl;
    }
  else
    {
      fout << "STAY" << endl;
    }
  return 0;
}
