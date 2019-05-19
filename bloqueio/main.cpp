#include <chrono>

#include "node.h"
#include "algorithms.h"
#include "mapLoader.h"

int main()
{
	Node* currNode = initiateMap();

	auto begin = std::chrono::high_resolution_clock::now();

	Node* bestMove = minimax(currNode, 0, 1); 

	double deltaTime = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - begin).count() / (double)1e9;

	std::cout << "\nFinished in : " << deltaTime << " seconds.\n";

	return 0;
}