#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c,int *d){
	//int  * x = &a;   int  * y = &b;   int  * z = &c;   int  * w = &d;

	
	int arr[4] = {(*a),(*b),*c,*d};

 	for (int i = 4 - 1; i > 0; --i) {
        // Generate a random index in the range [0, 4]
        int j = rand() % (i + 1);

        // Swap elements at indices i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

	 *a = arr[0];
     *b = arr[1];
     *c = arr[2];
     *d = arr[3];
  }