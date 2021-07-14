class Topology{
public:
	int InputCount = 4;
	int OutputCount = 1;
	double LearningRate = 1000;
	int HidenLayers[2];
	Topology()
	{
	}
	int GetInputCount()
	{
		return InputCount;
	}
};