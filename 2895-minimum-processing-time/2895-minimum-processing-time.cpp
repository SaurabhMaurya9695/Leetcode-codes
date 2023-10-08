class Solution {
public:
    #define ll long long
    int minProcessingTime(vector<int>& processorTime, vector<int>& task) {
        sort(task.begin(), task.end() , greater<int>());
        sort(processorTime.begin(), processorTime.end() );
        int time = 0;
        for(int i=0; i<task.size(); i++){
            int pTime = processorTime[i/4];
            int timeTaken = pTime + task[i];
            time = max(timeTaken, time);
        }
        return time;
    }
};