#include <iostream>
#include <functional>
#include <vector>
#include <cmath>
#include <random>

class NN{
private:
	std::vector<int> layers;
	std::function<std::vector<float>(std::vector<float>)> activation;
	std::vector<std::vector<std::vector<float>>> W; // W[layer][output][input]
	std::vector<std::vector<float>> b; // b[layer][output]

	void initialize_weights(){
		std::random_device rd;
	        std::mt19937 gen(rd());

		W.clear();
		b.clear();

		for(size_t i = 1; i < layers.size(); i++){
			int input = layers[i - 1];
			int output = layers[i];

			std::vector<std::vector<float>> matrix;
			std::vector<float> vector;

			std::normal_distribution<float> dist_bias(0.0f, 0.01f);
			std::normal_distribution<float> dist_matrix(0.0f, 1.0f);

			// Initializing biases
			for(int k = 0; k < output; k++){
				vector.push_back(dist_bias(gen));
			}
			b.push_back(vector);

			// Initializing matrices
			for(int k = 0; k < output; k++){
				std::vector<float> row;
				for(int j = 0; j < input; j++){
					row.push_back(dist_matrix(gen));
				}
				matrix.push_back(row);
			}
			W.push_back(matrix);
		}
	}

public:
	std::vector<float> forward(std::vector<float> x){
		if(x.size() != layers[0]){
			throw std::invalid_argument("Input size does not match the NN definition."); 
		}

		



	}
};