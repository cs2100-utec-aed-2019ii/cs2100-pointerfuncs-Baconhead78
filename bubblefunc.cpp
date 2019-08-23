/*------DECLARATIONS------*/
#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void * _bubblesort_(void * _array_, void (*_puntero_) (void *, int _i, int _k)){
	for (int i = 0; i < 5; i ++)
		for(int k = 0; k < 5-1; k++)
			_puntero_(_array_,i,k);
		return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_ (void * _vector_, int _i,int _k){
	auto arr = static_cast<int*>(_vector_);
	if (arr[_k] > arr[_k+1]) {
		auto temp = arr[_k];
		arr[_k] = arr[_k+1];
		arr[_k+1] = temp;
	}
}

void  _b_float_ (void * _vector_, int _i,int _k){
	auto arr = static_cast<float*>(_vector_);
	if (arr[_k] > arr[_k+1]) {
		auto temp = arr[_k];
		arr[_k] = arr[_k+1];
		arr[_k+1] = temp;
	}
}

void  _b_double_ (void * _vector_, int _i,int _k){
	auto arr = static_cast<double*>(_vector_);
	if (arr[_k] > arr[_k+1]) {
		auto temp = arr[_k];
		arr[_k] = arr[_k+1];
		arr[_k+1] = temp;
	}
}

void  _b_char_ (void * _vector_, int _i,int _k){
	auto arr = static_cast<char*>(_vector_);
	if (arr[_k] > arr[_k+1]) {
		auto temp = arr[_k];
		arr[_k] = arr[_k+1];
		arr[_k+1] = temp;
	}

}

template <typename T>
void printList(T list, int size)
{
	for(int i = 0; i < size; i++)
		std::cout << list[i] << " ";
	std::cout << std::endl;
}

/*------MAIN------*/
int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4,5,9,7,2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(&_array_1,_b_int_);	
	printList(_array_1, 5);
	_bubblesort_(_array_2,_b_float_);
	printList(_array_2, 5);
	_bubblesort_(_array_3,_b_double_);
	printList(_array_3, 5);
	_bubblesort_(_array_4,_b_char_);
	printList(_array_4, 6);


    return 0;
}

