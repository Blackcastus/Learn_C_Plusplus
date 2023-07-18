# Learning C++

<mark>*Day 1*</mark>

## Get Started

Purpose:
   * Know create new project.
   * Run code and debug.

# Task 1

## Class and Object

Class: 
* Building block.
* Hold data members.
* Hold members function.
* define data type

Object:
* Is an instance of a class.
* No memory is allocated when defind clas, but it is allocated when instantiated

Attribute: data use to describe properties of an object.

Method: behaviors which object can do.

## Constructor and Destructor

Constructor: 
* Called by the compiler.
* Have the same name as the class and may be defined inside or outside the class definition.
* 3 type of constructrors: Default constructors, parameterized constructors, copy constructors.

Destructor: that is called by the compuler when the scope of the object ends.

Note: A class can define many constructor; however, a class has only one
destructor.

Abstrastion help intention-revealing, simple to use ans simple to understand.
Example: Khi bạn thèm 1 ly cafe thì bạn chỉ cần ra quán cafe và gọi " em ơi cho 1 ly cafe ít sửa nhiều đá" và ngồi chờ 1 chút thì trên bàn của bạn sẽ có 1 ly cafe thơm ngon mà bạn không cần quan tâm ly cafe đó được tạo ra ntn.

## Encapsulation

Encapsulation: conceals the functional details of a class from objects that send messages to it.

Inheritance: means that a class can inherit or re­use attributes and methods that are defined in other class.

## Polymorphism

Polymorphism is the ability of objects belonging to different data types to respond to method calls of methods of the same name, each one according to an appropriate type specific behavior.

# Task 2

## C++ Feature

* Templates are mechanisms for generating functions and classes based
on type parameters. The template declaration specifies a set of parameterized classes or functions.

## Friend Function

* Friend function is a function but is not a member of a class but has access to the class's private and proected. So friend function independent of class and define inside or outside class.

## Friend class

* Friend class is a class all of whose member functions are friend
functions of a class.

## Function overloading

* Function overloading is C++ allows specification of more than one function of the same name in the same scope.

## Operator overloading

* Operator overloading is  change the way operators work for user-defined types like objects and structures.
* Virtual function is a member function that you expect to be redefined 
in derived classes.

<mark>*Day 2*</mark>

# Task 3

When do you use Vector, List, Set, Map, Bitset?

Container library: vector, list, set, map, bitset, ...
We will use vector, list, set, map, bitset when we want use algorithms for searching, sorting and manipulating data.

What is the importance of SOLID principles?

S - Single Responsibility Principle  
O - Open/Closed Principle  
L - Liskov’s Substitution Principle  
I - Interface Segregation Principle  
D - Dependency Inversion Principle  

[nguồn tham khảo] https://viblo.asia/p/tim-hieu-ve-nguyen-ly-solid-bJzKm7mYl9N

1. Single Responsibility Principle  
Một class chỉ nên giữ 1 trách nhiệm duy nhất (Chỉ có thể sửa đổi class với 1 lý do duy nhất)
2. Open/Closed Principle  
Có thể  mở rộng 1 class, nhưng không được sửa đổi bên trong class đó
3. Liskov’s Substitution Principle  
Trong một chương trình, các object của class con có thể thay thế class cha mà không làm thay đổi tính đúng đắn của chương trình
4. Interface Segregation Principle  
Thay vì dùng 1 interface lớn, ta nên tách thành nhiều interface nhỏ, với các mục đích khác nhau
5. Dependency Inversion Principle  
* Các module cấp cao không nên phụ thuộc vào các modules cấp thấp. 
   Cả 2 nên phụ thuộc vào abstraction.  
* Interface (abstraction) không nên phụ thuộc vào chi tiết, mà ngược lại.
( Các class giao tiếp với nhau thông qua interface, 
không phải thông qua implementation.)

<mark>*Day 3*</mark>
Exercises: "Car and Human"