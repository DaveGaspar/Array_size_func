#include <iostream>

//template argument deduction
template <int size>
void get_size(int (&arr)[size]){
 	std::cout << size << std::endl;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	get_size(arr);
	return 0;
}