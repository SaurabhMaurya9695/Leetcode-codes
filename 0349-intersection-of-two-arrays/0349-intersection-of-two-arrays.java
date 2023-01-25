class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        
        //creat HashSet ;
        HashSet<Integer> st = new HashSet() ;
        List<Integer > lst = new ArrayList() ;
        for(int x : nums1)
        {
            st.add(x); // 1 2  
        }
        
        int i = 0 ;
        for(int x : nums2)
        {
            if(st.contains(x)) // 2 , 2
            {
                lst.add(x);
                st.remove(x);
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