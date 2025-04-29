#ifndef ACTIVATIONS_H
#define ACTIVATIONS_H

#include <vector>
#include <cmath>
#include <algorithm>

namespace Activations{
	void Sigmoid(std::vector<float>& x){
		for(size_t i = 0; i < x.size(); i++){
			x[i] = 1.0f / (1.0f + std::exp(-x[i]));
		}
	}
	
	void Tanh(std::vector<float>& x){
		for(size_t i = 0; i < x.size(); i++){
			x[i] = std::tanh(x[i]);
		}
	}
	
	void ReLU(std::vector<float>& x){
		for(size_t i = 0; i < x.size(); i++){
			x[i] = std::max(0.0f, x[i]);
		}
	}
}

#endif
