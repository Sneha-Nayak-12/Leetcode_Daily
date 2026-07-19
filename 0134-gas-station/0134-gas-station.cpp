class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;   // net fuel across all stations
        int tank = 0;    // current fuel balance
        int start = 0;   // candidate starting station
        
        for (int i = 0; i < gas.size(); i++) {
            int diff = gas[i] - cost[i];
            total += diff;
            tank += diff;
            
            // If tank goes negative, reset start
            if (tank < 0) {
                start = i + 1;
                tank = 0;
            }
        }
        
        return (total >= 0) ? start : -1;
    }
};
