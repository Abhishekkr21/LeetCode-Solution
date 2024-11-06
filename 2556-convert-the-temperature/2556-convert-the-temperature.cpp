class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> vec;
        vec.push_back(celsius + 273.15);
        vec.push_back(celsius * 1.80 + 32);
        return vec;
        
    }
};