#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
class Solution {
private:
    vector<vector<int>> constructGraph(int numCourses, vector<vector<int>> prerequisites) {
        vector<vector<int>> graph(numCourses);

        for (auto p: prerequisites) {
            graph[p[0]].push_back(p[1]);
        }
        return graph;
    }
    bool isLoop(vector<vector<int>> &graph, vector<bool> &todo, vector<bool> &done,int &target) {
        // we are using dfs, if we found todo is true, then loop detected over at line 30.
        // because we set todo to true on line 26.
        // if either the target has no dependency, or we already done it, then return false;
        // because we set todo to be false if no loop detected.
        if (todo[target]) 
            return true;
        if (done[target])
            return false;

        todo[target] = done[target] = true;
        // if theres no prerequisite, return true;
        for (auto p : graph[target]) {
            // check prerequisite of other classes, if i have any todos,
            // then that means, we either encountered a cross prerequisite, or it needs other prerequisite to unlock
            if (isLoop(graph,todo,done,p)) {
                return true;
            }
        }
        todo[target] = false;
        return false;

    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // add every prerequisite classes to map,
        // and if found, add to the 
        vector<vector<int>> graph = constructGraph(numCourses,prerequisites);
        vector<bool>todo(numCourses,false),done(numCourses,false);


        //as long as needed course not bigger than numsCourses, continue
        for (int i = 0; i < numCourses; i++) {
            if (isLoop(graph,todo,done,i)) {
                return false;
            }
        }

        return true;
    }
};