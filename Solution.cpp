#include "Solution.h"

void input(std::list<int>& seq) {
	std::cout << "Write seq size" << std::endl;
	size_t size = 0;
	std::cin >> size;

	int el = 0;
	for(size_t i = 0; i < size; ++i) {
		std::cin >> el;	
		seq.push_back(el);
	}
}

void erase_subseq(std::list<int>& seq, const std::list<int>& subseq) {
	for(auto i = seq.begin(); i != seq.end(); ++i) {
		auto j = subseq.begin();
		auto end_it = i;

		for(; j != subseq.end(); ++j) {
			if(*end_it != *j)
				break;
			
			++end_it;
		}

		if(j == subseq.end()) {	
 			seq.erase(i, end_it);
			i = std::next(end_it);
		}

	}
}

void output(const std::list<int>& seq) {
	for(int el : seq)
		std::cout << el << ' ';

	std::cout << std::endl;
}
