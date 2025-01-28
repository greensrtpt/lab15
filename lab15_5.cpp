#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *x, int *y, int *z, int *w) {
    int arr[] = {*x, *y, *z, *w}; // ใช้ค่าผ่าน pointer

    // ทำการสุ่มสลับตำแหน่งในอาร์เรย์
    for(int i = 3; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }

    // คืนค่ากลับไปยังตัวแปรต้นฉบับผ่าน pointer
    *x = arr[0];
    *y = arr[1];
    *z = arr[2];
    *w = arr[3];
}