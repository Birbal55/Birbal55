class CityTrader {
    public int minCost(int maxTime, int[][] edges, int[] passingFees) {
        int n = passingFees.length;
        List<int[]>[] adjList= new ArrayList[n];
        Arrays.setAll(adjList, a-> new ArrayList<>());
        for (int[] edge: edges){
            adjList[edge[0]].add(new int[]{edge[1], edge[2]});
            adjList[edge[1]].add(new int[]{edge[0], edge[2]});
        }
        PriorityQueue<int[]> minHeap= new PriorityQueue<>((a, b)->a[2]-b[2]);
        int[] visited= new int[n];
        Arrays.fill(visited, Integer.MAX_VALUE);
        minHeap.offer(new int[]{0,0,passingFees[0]});
        while(!minHeap.isEmpty()){
            int[] node=minHeap.poll();
            if (node[0]==n-1)
                return node[2];
            for(int[] neighbor: adjList[node[0]]){
                if (node[1]+ neighbor[1]>maxTime)
                    continue;
                int newTime= node[1]+neighbor[1];
                if (newTime< visited[neighbor[0]]){
                    visited[neighbor[0]]=newTime;
                    minHeap.offer(new int[]{neighbor[0], node[1]+neighbor[1], node[2]+passingFees[neighbor[0]]});
                }
            }
        }
        return -1;
    }
}
