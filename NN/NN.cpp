#include <string>
#include "Layer.cpp"
#include "Topology.cpp"
#include <iostream>

int main()
{
	class NN {
	public:
		Topology t_opology;
		Layer Layers[];

		NN(Topology topology)
		{
			t_opology = topology;
			CreateInputLayers();
		};
		void CreateInputLayers()
		{
			int inputCount = t_opology.InputCount;
			Neuron *inputNeurons = new Neuron [inputCount];
			for (int i =0;i<t_opology.InputCount;i++)
			{
				Neuron neuron = Neuron();
			}
		};
	};


	//нейроная сеть
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

