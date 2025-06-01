/**
 * @param {number[]} edges
 * @param {number} node1
 * @param {number} node2
 * @return {number}
 */
var closestMeetingNode = function(edges, node1, node2) {
    const n = edges.length;
    
    function getDistances(start) {
        const dist = new Array(n).fill(-1);
        let d = 0;
        let node = start;
        while (node !== -1 && dist[node] === -1) {
            dist[node] = d++;
            node = edges[node];
        }
        return dist;
    }

    const dist1 = getDistances(node1);
    const dist2 = getDistances(node2);
    
    let minDist = Infinity;
    let result = -1;
    
    for (let i = 0; i < n; i++) {
        if (dist1[i] !== -1 && dist2[i] !== -1) {
            let maxDist = Math.max(dist1[i], dist2[i]);
            if (maxDist < minDist) {
                minDist = maxDist;
                result = i;
            }
        }
    }
    
    return result;
};