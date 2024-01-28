#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int  * x = &a;   int  * y = &b;   int  * z = &c;   int  * w = &d; //pass by ref

	
	int arr[4] = {(*x),(*y),*z,*w};

 	for (int i = 4 - 1; i > 0; --i) {
        // Generate a random index in the range [0, 4]
        int j = rand() % (i + 1);

        // Swap elements at indices i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

	a = arr[0]; //chat gpt said to pass ref
    b = arr[1];
    c = arr[2];
    d = arr[3];
  }
