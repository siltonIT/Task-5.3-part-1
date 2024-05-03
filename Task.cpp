#include "Task.h"

int main() {
	std::list<int> seq;
	std::cout << "First list: " << std::endl;
	input(seq);

	std::list<int> subseq;
	std::cout << "Second list: " << std::endl;
	input(subseq);

	erase_subseq(seq, subseq);
	std::cout << "Seq without subseq" << std::endl;
	output(seq);
}
