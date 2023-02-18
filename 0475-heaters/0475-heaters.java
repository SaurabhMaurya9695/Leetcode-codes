class Solution {
    public static class Pair{
        int js = -1;
        int jg = -1;
        Pair(){
            
        }
        Pair(int js , int jg){
            this.js = js;
            this.jg = jg ;
        }
    }
    public Pair binary_search(int key , int [] arr ){
        Pair p = new Pair() ;
        int start =0 ;
        int end = arr.length  - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == key){
                return new Pair(arr[mid] , arr[mid]) ;
            }
            else if(arr[mid] < key){
                p.js = arr[mid] ;
                start = mid + 1;
            }
            else if(arr[mid] > key){
                p.jg = arr[mid] ;
                end = mid - 1;
            }
        }
        return p; 
        
    }
    
    public int findRadius(int[] houses, int[] heaters) {
        Arrays.sort(heaters) ;
        int n = houses.length ;
        int ans = 0;
        for(int i =0 ; i < n ; i ++){
            //for every house find the mini distance in left or right ;
            Pair p = binary_search(houses[i] , heaters) ;
            int d1 = (p.js == -1) ? Integer.MAX_VALUE : houses[i] -  p.js;
            int d2 = (p.jg == -1) ? Integer.MAX_VALUE : p.jg - houses[i] ;
            int res = Math.min(d1, d2);
            if(res > ans){
                ans = res ;
            }
        }
        return ans ;
    }
}