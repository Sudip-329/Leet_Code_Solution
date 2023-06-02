class Solution {
public:

    vector<int>parent,rank;
    int find(int x)
    {
        if(parent[x] !=x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);

        if(xset == yset)
        {
            return;
        }
        if(rank[xset] < rank[yset])
        {
            parent[xset] = yset;
        }
        else if(rank[xset] > rank[yset])
        {
            parent[yset] = xset;
        }
        else
        {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }


    int minScore(int n, vector<vector<int>>& roads) 
    {
    parent.resize(n,-1);
    for(int i=0; i<n;i++)
    {
        parent[i]=i;
    }
    rank.resize(n,0);
    for(int i=0; i<roads.size(); i++)
    {
        Union(roads[i][0]-1, roads[i][1]-1);
    }
    int ans = INT_MAX;
    for(int i=0; i<roads.size(); i++)
    {
        if(find(roads[i][0]-1)==find(0) && find(roads[i][0]-1) == find(roads[i][1]-1))
        {
            ans = min(roads[i][2],ans);
        }
    }
    return ans;   
    }
};