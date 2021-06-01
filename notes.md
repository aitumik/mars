# Computational Geometry
> Computational geometry is a branch of computer science that studies
> algorithms used to solve geometric problems

* Computational geometry has many applications such as VLSI(Very Large Scale
  Intergration) used to design IC(Intergrated Circuits)

* The input to a computational-geometry problem is often a descriptive set of
  geometrical objects such as points in a polygon,set of lines etc

* The output to a computational-geometric problem is a response to a query such
  as whether the lines intersect or not or perhaps a new geometric object such
  as a convex hull:- smallest enclosing convex polygon)

* We are going to look at 2d computational geometric problems that is a plane
* A computational-geometric object can be represented as a set of points 
  {p1...pn} where pi = (xi,yi)
* >3 dimensional geometry


## Example questions:
> Given two line segments a,b determine whether a is anticlockwise of b or
  clockwise of b?
> Given two line segments a,b determine whether the two lines intersect or not
> Which way do we turn when traversing two adjacent line segments


## By the end of this I want to be able to do the following:
 * Given a set of n points determine the closest ones
 * Given a set of n points find the convex hull
 * Given a set of points(lines) find if they intersect
 * Rotational sweeping


## Line segment properties
  * Convex combinations:- linear combination of points where all its
    coefficients are non-negative and sum to 1
  * e.g p1 and p2 are points then the convex combination will be 
    p3 = kp1 + (1-k)p2
    where 0 <= k <=1



    










