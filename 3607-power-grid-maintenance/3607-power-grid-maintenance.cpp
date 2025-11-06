class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n + 1);
        rank.assign(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            parent[i] = i;
    }
    
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void unite(int x, int y) {
        int xr = find(x), yr = find(y);
        if (xr == yr) return;
        if (rank[xr] < rank[yr]) parent[xr] = yr;
        else if (rank[yr] < rank[xr]) parent[yr] = xr;
        else {
            parent[yr] = xr;
            rank[xr]++;
        }
    }
};

class Solution {
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        DSU dsu(c);
        
        // Build connected components
        for (auto &conn : connections) {
            dsu.unite(conn[0], conn[1]);
        }
        
        // Group stations by their component representative
        unordered_map<int, vector<int>> compStations;
        for (int i = 1; i <= c; ++i) {
            compStations[dsu.find(i)].push_back(i);
        }
        
        // Maintain a set of online stations for each component
        unordered_map<int, set<int>> online;
        for (auto &[root, stations] : compStations) {
            for (int node : stations)
                online[root].insert(node);
        }
        
        vector<bool> isOnline(c + 1, true);
        vector<int> result;
        
        // Process queries
        for (auto &q : queries) {
            int type = q[0];
            int x = q[1];
            int comp = dsu.find(x);
            
            if (type == 1) {
                if (isOnline[x]) {
                    result.push_back(x);
                } else {
                    if (!online[comp].empty())
                        result.push_back(*online[comp].begin());
                    else
                        result.push_back(-1);
                }
            } 
            else if (type == 2) {
                if (isOnline[x]) {
                    online[comp].erase(x);
                    isOnline[x] = false;
                }
            }
        }
        
        return result;
    }
};