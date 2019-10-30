# TravellingSalesmanProblem
a) Implement Travelling salesman problem (TSP) in any method to find the exact solution.
   
Travelling Salesman Problem
       
        The travelling salesman problem (TSP) asks the following question: 
        "Given a list of cities and the distances between each pair of cities, 
        what is the shortest possible route that visits each city and returns 
        to the origin city?" It is an NP-hard problem in combinatorial optimisation, 
        important in operations research and theoretical computer science.
       

Brute-Force Algorithm

        The Brute-Force Algorithm of the Travelling Salesman Problem does all the permutations
        of the given graph or the network of cities and selects that permutation which offers 
        the simplest or cheapest or shortest of all the possible permutations, in short, 
        the Brute-Force Algorithm travels all the path in any given graph or network of 
        cities and selects that path which provides the simplest, cheapest or cost-effective 
        path of all the possible paths.
      
      In definition, the brute force algorithm selects the least weight Hamiltonian cycle 
      ( The Hamiltoninan cycle problem is to find, if there exist a tour that visits every
      city exactly once ) that could be found in the given network of nodes.

   
       Brute-Force Algorithm:
      For a given set of vertices say “n”, let us consider a node from ’n’ vertices the 
      starting node and ending node, for simplicity let us consider that node to be “1”. 
      For every vertex ‘i’ (excluding ‘1’) we find minimum cost path with ‘1’ as the 
      starting point and ‘i’ as the ending point and all the remaining vertices appearing 
      exactly once.
      
             Let the cost of this path be cost (i), then the total cost of the corresponding
             path (or cycle) would be cost(i) + dist(i, 1) where dist(i, 1) is the distance 
             from ‘i’ to ‘1’. Finally, the algorithm returns the minimum of all [cost(i) + dist(i, 1)] values

       To get the cost of cost (i), a recursive relation in terms of sub-problems is required. 
       Let us define a term ‘C(S, i)’ be the cost of the minimum cost path visiting each vertex
       in set ‘S’ exactly once, starting at ‘1’ and ending at ‘i’. We start with all subsets of 
       size 2 and calculate ‘C(S, i)’ for all subsets where ‘S’ is the subset, then we calculate
       ‘C(S, i)’ for all subsets ‘S’ of size 3 and so on. Note that ‘1’ must be present in every subset.
       
        The algorithm can be defined as :: 
        If size of S is 2, then S must be {1, i}, 
            C(S, i) = dist(1, i) 
        Else if size of S is greater than 2,
            C(S, i) = min { C(S-{i}, j) + dis(j, i)} where j belongs to S, j !=i and j != 1.

(b)Implement TSP with Cheapest link algorithm.
   
    The Traveling Salesman Problem (TSP) is NP-Complete(a problem is NP-complete if answers can be verified quickly, 
    and a quick algorithm to solve this problem can be used to solve all other NP problems quickly), but there are 
    a few greedy approximate algorithms that are efficient. One of them is the Cheapest Link Algorithm.

Cheapest-Link Algorithm
  
    The Cheapest-Link Algorithm begins with the edge of least weight and makes it part of the circuit. 
    Then it selects the edge of second-smallest weight, and so on. Once a vertex has two selected edges, 
    no more edges of that vertex are considered and we must avoid creating a circuit prematurely. 
    Eventually the edges will form a circuit. This algorithm is similar to that of Kruskal’s Algorithm, 
    where as in Kruskal’s , a node can any number of links but in Cheapest-Link Algorithm, 
    a node cannot have more than two links.
 
    The pseudocode for the Cheapest-Link Algorithm can be described as follows:
    Pick an edge with the cheapest weight, in case of a tie, pick whichever pleases you. Colour your edge. 
    Pick the next cheapest uncoloured edge unless: your new edge closes a smaller circuit
    your new edge results in three coloured edges coming out of a single vertex. Again if there is a tie break it at your will.
    Repeat Step 2 until the Hamilton circuit is complete.


Nearest Neighbour Algorithm

    This is perhaps the simplest and most straightforward TSP heuristic, which is normally 
    fairly close to the optimal route, and it does not take too long to execute (the time 
    complexity is 􏰀􏰁􏰂􏰃􏰄, where n is the number of the cities). The key to this algorithm is to 
    always visit the nearest city. Select a starting point, as long as there are cities that
    have not yet been visited, visit the nearest city that still has not appeared in the tour, 
    finally, return to the first city.

Travelling Salesman Problem Using Nearest Neighbour Algorithm:

     Nearest neighbour was one of the first greedy algorithms which gave the solution for the 
     travelling salesman problem. In this algorithm we arbitrarily select starting node and then 
     we visit the nearest node, so that it don’t creates any cycle.This process continues till all
     cities are visited once.
     This algorithm takes input as the number of cities and coordinates as the distances for cities
     which is represented in the form of adjacency matrix. If the starting node is specified it continues
     with it, otherwise starting node is chosen at random. The algorithm gives a sequence of all the visited
     vertices. But the solution produced by the algorithm is not the optimal one. As the algorithm is a 
     greedy algorithm it misses out some of the shorter routes. These shorter routes can be detected by 
     human insight easily. So, the nearest neighbour algorithm does not give the feasible solution.
 

     The steps for the algorithm are:-
     Step 1: Select any node as starting node.
     Step 2: Look for the neighbours of the starting node that have not been visited yet. 
             Choose the node which is next closest to that node having the 
     minimum distance.
     Step 3: Repeat this procedure until all the nodes in the tour have been visited exactly once.
     Step 4: Check if all the nodes are visited at least once. If yes, then return back 
             to the starting node which will give the complete path.
     Step 5: Finally calculate the total distance of the tour.

