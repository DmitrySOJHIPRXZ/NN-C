#include <string>
#include "Layer.cpp"
#include <iostream>

int main()
{
	Neuron InputCounts[5];
	for (int i = 0; i < 5; i++)
	{
		InputCounts[i] = Neuron();
	}
	Layer lauers(5,InputCounts, NeuronType::Input);
	for (int i = 0; i < 5; i++)
	{
		std::cout << lauers.Neurons[i].Output << std::endl;
	}
}

