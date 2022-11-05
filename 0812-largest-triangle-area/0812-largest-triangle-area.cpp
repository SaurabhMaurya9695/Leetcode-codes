class Solution {
public:
     double largestTriangleArea(vector<vector<int>>& p) {
        
         int n = p.size() ;
         double ans ;
         double res = 0;
         double x1 , x2, x3, y1 , y2, y3;
         for(int i = 0 ; i < n ; i ++)
         {
              x1 = p[i][0];
              y1 = p[i][1] ;
             for(int j = i + 1 ; j < n ; j++)
             {
                  x2 = p[j][0];
                  y2 = p[j][1];
                 for(int  k  = j + 1 ; k < n ; k ++)
                 {
                      x3 = p[k][0];
                      y3 = p[k][1];
                     double s1 = x1 *  (y2 - y3);
                     double s2 = x2 * (y3 - y1) ;
                     double s3 = x3 * (y1 - y2) ;
                     ans = abs( s1 + s2 + s3);
                     ans /= 2;
                     if(ans > res)
                     {
                         res = ans;
                     }
                     cout<< ans << " ";
                 }
                 
             }
         }
         return res ;
         
        
    }
};