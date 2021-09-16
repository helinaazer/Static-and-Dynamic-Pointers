#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void myswapPassByValue(string first, string last) {
  cout << "Before swap: " << first << ", " << last << endl;

  string temp = first;
  first = last;
  last = temp;

  cout << "After swap: " << first << ", " << last << endl;
    cout << endl;
}
void myswapPassByRef(string &first, string &last) {
  cout << "Before swap: " << first << ", " << last << endl;

  string temp = first;
  first = last;
  last = temp;

  cout << "After swap: " << first << ", " << last << endl;
    cout << endl;

}
void myswapPassByPointer(string *first, string *last){
  cout << "Before swap: " << *first << ", " << *last << endl;

  string temp = *first;
  *first = *last;
  *last = temp;

  cout << "After swap: " << *first << ", " << *last << endl;
}
int main() {
  cout << "=====================================================================================" << endl;
  cout << "Testing setw(n) function..." << endl;
  cout << "Helina" << setw(5)<<"Azer" << endl;
  cout << "Kamiak" << setw(5) << "High" << setw(7) <<"School" << endl;

  cout << endl;
  cout << "Testing static pointers..." << endl;
  //static allocation
  int x = 1;
	int y = 2; 
	int* px = &x;
	int* py = &y;
  cout << x << ", " << y <<  ", " << px << ", " << py << ", " << &x << ", " << &y << ", " << *px << ", " << *py << endl;
  py = px;
	*py = 100;
  cout << x << ", " << y << ", " << px << ", " << py << ", " << &x << ", " << &y << ", " << *px << ", " << *py << endl;
  cout << *px++ << ", "<< x << ", " << px << endl;

  cout << endl;
  cout << "Testing dynamic pointers..." << endl;
  //dynamic allocation
	x = 1;
	y = 2;
  px = new int(x);
	py = new int(y);
  cout << x << ", " << y <<  ", " << px << ", " << py << ", " << &x << ", " << &y << ", " << *px << ", " << *py << endl;
	delete px;
  py = px;
	*py = 100;
  cout << x << ", " << y << ", " << px << ", " << py << ", " << &x << ", " << &y << ", " << *px << ", " << *py << endl;
  cout << *px++ << ", " << x << ", " << px << endl;
  delete py;

  cout << endl;
  cout << "Testing swap functions..." << endl;
  cout << endl;

  string first = "Helina";
  string last = "Azer";
  cout <<"Pass by Value:" << endl;
  myswapPassByValue(first, last);
  cout << "Pass by Reference:" << endl;
  myswapPassByRef(first, last);
  cout << "Pass by Pointer:" << endl;
  myswapPassByPointer(&first, &last);
    cout << "=====================================================================================" << endl;
  return 0; 
}
