/**
 * @param {character[][]} grid
 * @return {number}
 */
// use bfs to solve this problem
// we will sink the current grid and slowly sinking the whole island.
var numIslands = function(grid) {
    let count = 0;
    for (let i = 0; i < grid.length; i++) {
        for (let j= 0; j < grid[0].length; j++) {
            if (grid[i][j] == "1") {
                // if the current grid is an island. We sink the current grid and slowly sinking the whole island.
                sinkGrid(grid,i,j); //we will use bfs(breath-first-step)
                count ++;
            }
        }
    }
    return count;
};

var sinkGrid= function(g,i,j) {
    //if grid is valid and is an island grid
    if (i >= 0 && i < g.length && j >= 0 && j < g[0].length && g[i][j] == "1") {
        g[i][j] = "0";
        sinkGrid(g, i+ 1, j); // sink right side
        sinkGrid(g, i-1, j); //sink left side
        sinkGrid(g, i, j-1); //sink up side
        sinkGrid(g, i, j+1); //sink bottom side
    }
};

export { numIslands }