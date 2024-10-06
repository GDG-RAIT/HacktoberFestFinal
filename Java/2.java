class Solution {
    public static int maxArea(int[] height) {
        int i = 0;
        int j = height.length-1;
        int m = 0;
        while(i<j){
                int a = j-i;
                int current = Math.min(height[i],height[j])*a;
                m = Math.max(current,m);
                if(height[i]<height[j]){
                    i++;
                }
                else{
                    j--;
                }
            }
            return m;
        }
        public static void main(String[] args) {
        int[] height = {1,8,6,2,5,4,8,3,7};
        int height2 = maxArea(height);
        System.out.println(height2);
    }
    }