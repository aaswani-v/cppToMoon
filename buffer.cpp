#include<iostream>

class Buffer {
private:
	int* data;
	int size;

public:
	Buffer(int s) {
		size = s;
		data =new int[size];
		
		for (int i =0; i<size; ++i){
		data[i] = i*10;
		}
	}

	~Buffer() {
	delete[] data;
	}

	void print() const {
		std::cout << "Size: " <<size << std::endl;
	}
};

int main() {
Buffer b(5);
b.print();
return 0;
}
