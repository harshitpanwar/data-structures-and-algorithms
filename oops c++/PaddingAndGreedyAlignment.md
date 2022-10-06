<img width=100% height=100% src="https://www.includehelp.com/cpp-tutorial/Images/size-of-a-class-1.jpg" align="center" height="450" width="300" >
We know that a struct size is not only the summation of all the data members, rather it's the minimum sum guaranteed. The compiler adds some padding for data member alignment.

In the C++ class, things are exactly the same as a struct. But there are a few more things.

Firstly, while in C++ there are member functions, static data members. Do those have any contribution to the size of the class, objects?

The answer is no. Only the non-static data members contribute to the size of class and objects. This is because static members have only one instance which is shared among all objects. And normal member functions are like executable code which does not have size like data members.

*How compiler adds padding?*
Now the question is how compiler adds padding and align? The method is compiler dependent and kind of greedy. It aligns till the boundary of maximum memory allocated.

Here we find that max memory allocated is 8 Bytes, thus all the data members acquire 8 Bytes and the total size is 32 Bytes. Now the question is will it happen every time similarly?

Is it like the number of data members * max datatype size?

The answer is no. It will try to align optimally keeping the same order. To check an example please follow the article on structure size in C. Also, later in this article, we have instances of such.
