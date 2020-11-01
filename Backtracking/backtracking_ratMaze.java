import java.util.*;

class Rat{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0){
            int n = sc.nextInt();
            int[][] a = new int[n][n];
            for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                   a[i][j]=sc.nextInt();
               }
            }
            
            GFG g = new GFG();
            ArrayList<String> res = g.printPath(a,n);
            if(res.size()>0){
               for(int i=0;i<res.size();i++){
                   System.out.print(res.get(i)+" ");
               }
               System.out.println();
             }
               else{
                  System.out.println(-1);
               }
            }
        }
    }

class GfG {
     ArrayList<String> list;
    public ArrayList<String> printPath(int[][] m, int n) {
        boolean[][] vis=new boolean[n][n];
        
        list = new ArrayList<>();
        String path="";
        
        ratMaze("",m,n,0,0,vis,path);
        
        Collections.sort(list);
        return list;
    }
    
     boolean isPosible(int[][]m ,int i, int j,int n,boolean[][] vis){
        return i>=0 && j>=0 && i<n && j<n && m[i][j]==1 && vis[i][j]==false;
    }
    
    public void ratMaze(String direction,int[][] m,int n,int i,int j,boolean[][] vis,String path){
        if(!isPosible(m,i,j,n,vis)) return;
        if(i==n-1 && j==n-1){
            path+=direction;
            list.add(path);
            
            path="";
            return;
        }
        
        vis[i][j]=true;
        path+=direction;
        ratMaze("L",m,n,i,j-1,vis,path);
        ratMaze("D",m,n,i+1,j,vis,path);
        ratMaze("R",m,n,i,j+1,vis,path);
        ratMaze("U",m,n,i-1,j,vis,path);
        
        vis[i][j]=false;
        
        return;
        
    }
}
