/* 
Problem
  - You are given the size of angles of a simple
	quadrilateral (in degrees) A , B , C , D
	in some order along its perimeter.
  - Determine whether the quadrilateral is cyclic.

Input
  - The first line of the input contains a single 
	integer T denoting the nuber of test cases.
  - The first and only line of each test case contains
	four space-seperated integers A , B , C , D.

Output
  - Print a single line "YES" if thr given quadrilateral
	is cyclic or "NO" if it is not (without quotes).

Constraints
  - 1 <= T <= 10^4
  - 1 <= A,B,C,D <= 357
  - A+B+C+D = 360
*/


#include <iostream>
#include <ios>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <cctype>


using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);

	int T ,  A , B , C , D;
    cin >> T;

    while(T--){
        cin >> A;
        cin.ignore();
        cin >> B;
        cin.ignore();
        cin >> C;
        cin.ignore();
        cin >> D;
        
        if((A + C == 180) && (B + D == 180)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}