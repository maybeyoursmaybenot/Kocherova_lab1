using namespace std;
#include <iostream>

class Pipeline {
private:
	string marker;
	int length;
	int diameter;
	bool state;
public:
	Pipeline(string marker, int length, int diameter, bool state);

	string GetMarker() const;
	int GetLength() const;
	int GetDiameter() const;
	bool GetState() const;
};

class CompressorStation {
private:
	string name;
	int dep_count;
	int dep_count_active;
	float efficiency_k;
public:
	CompressorStation(string name, int dep_count, int dep_count_active, float efficiency_k);

	string GetName() const;
	int GetDepCount() const;
	int GetDepCountActive() const;
	float GetEfficiencyK() const;
};

int main() {
	/*while 1 {
		
	}*/
	return 0;
}
