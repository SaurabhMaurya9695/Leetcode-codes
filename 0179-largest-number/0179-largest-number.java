class Solution {
    public String largestNumber(int[] nums) {
        int n =  nums.length ;
        String [] arr = new String[n];
        boolean zero = false;
        int cnt = 0 ;
        // "10" , "2"
        // "3" , "30" , "34" , "5" , "9" 
        
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                cnt ++ ;
            }
            arr[i] = Integer.toString(nums[i]) ;
        }
        
        if(cnt == n){
            return "0";
        }
        
        Arrays.sort(arr , (a, b) ->{
            // dec order con b - a
            // System.out.print(a + " " + b + "\n");
            if((a + b).compareTo(b + a) < 0){
                return +1;
            }
            else{
                return -1;
            }
            
        });
        
        StringBuilder sb = new StringBuilder("");
        for(int i = 0 ; i < n ; i++){
            // System.out.print(arr[i] + " ");
            sb.append(arr[i]);
        }
        
        return sb.toString();
        
        
    }
}