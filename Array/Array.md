# ARRAY 
An array is a collection of items of the same variable type stored that are stored at contiguous memory locations. It’s one of the most popular and simple data structures and is often used to implement other data structures. Each item in an array is indexed starting with 0.
# Implementing Arrays in C++ using STL
We already have discussed the basic declaration of arrays. Arrays can also be implemented using some built-in classes available in the C++ Standard Template Library. 

Some of the most commonly used classes for implementing sequential lists or arrays are:
 
- Vector
- List

## Vector 
`begin()` – Returns an iterator pointing to the first element in the vector.
<br>
`end()` – Returns an iterator pointing to the theoretical element that follows the last element in the vector.<br>
`size()` – Returns the number of elements in the vector.<br>
`capacity()` – Returns the size of the storage space currently allocated to the vector expressed as number of elements.<br>
`empty()` – Returns whether the container is empty.<br>
`push_back()` – It push the elements into a vector from the back.<br>
`pop_back()` – It is used to pop or remove elements from a vector from the back.<br>
`insert()` – It inserts new elements before the element at the specified position.<br>
`erase()` – It is used to remove elements from a container from the specified position or range.<br>
`swap()` – It is used to swap the contents of one vector with another vector of same type and size.<br>
`clear()` – It is used to remove all the elements of the vector container.<br>
`emplace()` – It extends the container by inserting new element at position.<br>
`emplace_back(`) – It is used to insert a new element into the vector container, the new element is added to the end of the vector.<br>
