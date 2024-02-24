// See https://aka.ms/new-console-template for more information
using csharp;
using System.Runtime.InteropServices;

cppMethods.DoSomethingWithAStringParameter1("Hello, World [1]!");

Console.WriteLine();
Console.WriteLine();

cppMethods.DoSomethingWithAStringParameter2(out var pointer, "Hello, World [2]!");
var strFromPointer1 = Marshal.PtrToStringAnsi(pointer);
Console.WriteLine($"Out parameter modified by c++: {strFromPointer1}");

Console.WriteLine();
Console.WriteLine();

var anotherPointer = cppMethods.DoSomethingWithAStringParameter3("Hello, World [3]!");
var strFromPointer2 = Marshal.PtrToStringAnsi(anotherPointer);
Console.WriteLine($"String returned by c++: {strFromPointer2}");