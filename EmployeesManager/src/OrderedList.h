#pragma once
#include <string>
#include <iostream>

template <class T>
class OrderedList {
private:
	T* ptr;
	int size = 10;
	int count = 0;

public:
	OrderedList();
	~OrderedList();
	int getSize();
	int getCount();
	bool addElement(T element);
	bool removeElement(int elementToRemove);
	T* findElement(int elementToFind);
	int findElementPosition(int elementToFind);
	void growArraySize();
	std::string toString();
};

template<class T>
OrderedList<T>::OrderedList() {
	ptr = new T[size];
}

template<class T>
OrderedList<T>::~OrderedList() {
	ptr = nullptr;
}

template <class T>
bool OrderedList<T>::addElement(T element) {
	if (this->getCount() + 1 >= this->getSize())
		this->growArraySize();

	int positionToAsign = 0;
	if (this->getCount() == 0) {
		ptr[positionToAsign] = element;
		this->count++;
		return true;
	}
	else {

		bool positionFounded = false;

		if (element < &ptr[0]) {
			positionFounded = true;
		}

		int left = 0;
		int right = this->getCount();
		while (!positionFounded) {
			positionToAsign = left + (right - left) / 2;
			if (positionToAsign >= 0 && positionToAsign < right - 1) {
				if (element > &ptr[positionToAsign - 1] && element < &ptr[positionToAsign])
					positionFounded = true;
				else {
					if (element > &ptr[positionToAsign])
						left = positionToAsign + 1;
					else
						right = positionToAsign - 1;
				}
			}
			else if (positionToAsign == this->getCount() - 1) {
				positionFounded = true;
				if (element > &ptr[positionToAsign]) {
					positionToAsign++;
					ptr[positionToAsign] = element;
					this->count++;
					return true;
				}
			}
		}

		this->count++;
		unsigned int originalPositon, newPosition;
		for (int i = positionToAsign; i < count - 1; i++) {
			originalPositon = (this->getCount() - 1) - i + positionToAsign - 1;
			newPosition = (this->getCount() - 1) - i + positionToAsign;
			ptr[newPosition] = ptr[originalPositon];
		}

		ptr[positionToAsign] = element;


		return true;
	}

	return false;
}

template<class T>
int OrderedList<T>::getSize() {
	return size;
}

template<class T>
int OrderedList<T>::getCount() {
	return count;
}

template<class T>
bool OrderedList<T>::removeElement(int elementToRemove) {
	int indexToRemove = findElementPosition(elementToRemove);
	if (indexToRemove >= 0) {
		if (indexToRemove == count - 1)
			ptr[indexToRemove] = Book();
		else
			for (int i = indexToRemove; i < count - 1; i++)
				ptr[i] = ptr[i + 1];
		count--;
		return true;
	}
	return false;
}

template <class T>
T* OrderedList<T>::findElement(int elementToFind) {
	int index = findElementPosition(elementToFind);
	if (index >= 0)
		return &ptr[index];
	return nullptr;
}

template <class T>
int OrderedList<T>::findElementPosition(int elementToFind) {
	int left = 0;
	int right = count;

	while (left <= right) {
		int middle = left + (right - left) / 2;

		if (ptr[middle] == elementToFind)
			return middle;

		if (ptr[middle] < elementToFind)
			left = middle + 1;

		else
			right = middle - 1;
	}
	return -1;
}

template<class T>
void OrderedList<T>::growArraySize() {
	size = this->size * 2;
	T* temp = new T[size];
	for (int i = 0; i < count; i++) {
		temp[i] = ptr[i];
	}
	ptr = temp;
}

template<class T>
std::string OrderedList<T>::toString() {
	std::string response = "";

	if (this->getCount()) {
		for (int i = 0; i < this->getCount(); i++) {
			response += ptr[i].toString() + "\n--------------------\n";
		}
		return response;
	}
	else {
		return "No books to show";
	}
}