#include <iostream>
#include "NeuronType.cpp"
#include "Neuron.cpp"
class Layer {
	public:
		Neuron Neurons[5];
		int NeurontCount;
		NeuronType Type;
		Layer(int countNeurons,Neuron neurons[], NeuronType type = NeuronType::Normal)
		{
			for (int i = 0; i < countNeurons; i++)
			{
				Neurons[i] = neurons[i];
			}
		}
};