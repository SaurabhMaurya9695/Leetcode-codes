class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int ans=-1;
        
        /// mini speed
        int minimum_speed=1;
        // max speed
        int maximum_speed=1e7;
        
        int n=dist.size();
        
        //// binary search the require speed
        while(minimum_speed<=maximum_speed){
            
            // check for the average speed 
            int average_speed=(minimum_speed+maximum_speed)/2;

            // total time require with each speed
            double total_time=0;
            for(int i=0;i<n-1;i++){
                total_time+=ceil((double)dist[i]/average_speed);
            }
            
            //// calculating total_time for the last train 
            total_time+=(((double)dist.back())/average_speed);
            
            // check for total time and given time
            if(total_time>hour){
                minimum_speed=average_speed+1;
            }
            else {
                ans=average_speed;
                maximum_speed=average_speed-1;
            }
        }
        
        return ans;
    }
};