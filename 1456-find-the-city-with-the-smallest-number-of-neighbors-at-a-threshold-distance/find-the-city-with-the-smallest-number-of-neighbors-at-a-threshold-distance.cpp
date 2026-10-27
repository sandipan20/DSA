class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)//making the dist bw same node to 0
            dist[i][i]=0;
        
        for(auto& itr:edges){//making the distance between nodes as given in edges
            dist[itr[0]][itr[1]]=itr[2];
            dist[itr[1]][itr[0]]=itr[2];
        }

        // floyed warshall 
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX){
                        dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                    }
                }
            }
        }
        
        //now finding the city that is within threshold using the minimized warhall table.
        int city=-1;//stores the final city
        int mincount=INT_MAX;// count the no of city that can be reached with the threshold dist form city.

        for(int i=0;i<n;i++){
            int count=0;//local count of city that can be reached with the city i within the threshold dist.

            for(int j=0;j<n;j++){
                if(i!=j&&dist[i][j]<=distanceThreshold)// if the dist is under the threshold dist then incres the count.
                    count++;
            }
            if(count<=mincount){// if the local count is minimum than the global count for the no of minmum city that can be reached from i within the threhold distance then update to the latest city.
                city=i;
                mincount=count;
            }
        }
        return city;
    }
};