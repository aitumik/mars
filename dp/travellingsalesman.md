# Learning Travelling Salesman Problem(TSP)

## Target
Be able to solve all TSP problems I am given

> Problem

Given n cities and their pariwise distances in the form of a matrix "dist" of
size n * n compute the cost of making a tour that starts from any city s, goes
through all other n - 1 cities exactly once and finally returns to the starting
city s.

### Things to note 
* There is permutations here n!

What is a subset of visited vertices(cities)


* If we have n cities we use a binary integer of size n.
* If bit 'i' is '1' on we say that item (city) i is insed the set (it has
  been visited) if its off then not visited
* Example mask= 18 = 10010 implies that item {1,4} are in the set

* To check if bit "i" is on or off we use mask & (1 << i).
* To set bit i, we can use mask |= ( 1 << i)

#### Solution



