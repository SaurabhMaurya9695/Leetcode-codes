class Solution {
    public int[] intersect(int[] a, int[] b) {
        // 1 2 2 1 ... // 2 2 2 2 2 2 => {2, 2} ;
        // {3,3} {3} => {3} ;
        
        // create HashMap & for storing ans array 
        HashMap<Integer ,Integer > mp = new HashMap() ;
        List<Integer > lst = new ArrayList();
        for(int i = 0 ; i < a.length ; i ++)
        {
            // if(mp.containsKey(a[i]))
            // {
            //     mp.put(a[i] , mp.get(nums[i]) + 1) ;
            // }
            // else{
            //     mp.put(a[i] , 1) ;
            // }
            
            mp.put(a[i] , mp.getOrDefault(a[i] , 0) + 1) ; // one liner 
        }
        // [1,2,1]  [2, 2] => 2,
        //common char ;
        // 1 - 2
        // 2 - 2
        for(int j = 0; j < b.length ; j ++)
        {
            if(mp.containsKey(b[j]) && mp.get(b[j]) > 0)
            {
                lst.add(b[j]) ;
                mp.put(b[j] , mp.getOrDefault(b[j] , 0) - 1) ;
            }
        }
        
        int [] arr = new int [lst.size() ] ;
        for(int ii = 0 ; ii < lst.size() ; ii++)
        {
            arr[ii] = lst.get(ii) ;
        }
        return arr;
        
        
    }
}