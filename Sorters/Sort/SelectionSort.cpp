#include "Sort.h"


namespace sort {
	
	void selection(std::vector<int>& arr) {
		for (int i = 0; i < arr.size() - 1; i++) {
			int min_id = i;
			
			for (int j = i + 1; j < arr.size(); j++)
				if (arr[min_id] > arr[j]) min_id = j;

			std::swap(arr[i], arr[min_id]);
		}
	}
}