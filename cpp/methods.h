#pragma once

#include "string"
#include "iostream"

/// <summary>
/// [ATTENTION!] This conversion function is really important, because the methods below use string.
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
char* stringToCharPtr(std::string s);

/// <summary>
/// [Example 1] This method does something with a string parameter
/// </summary>
/// <param name="in">in parameter</param>
/// <returns></returns>
extern "C" __declspec(dllexport) auto DoSomethingWithAStringParameter1(char* in) -> void;

/// <summary>
/// [Example 2] This method does something with a string parameter and returns another string
/// </summary>
/// <param name="out">string modified</param>
/// <param name="in">in parameter</param>
/// <returns></returns>
extern "C" __declspec(dllexport) auto DoSomethingWithAStringParameter2(char*& out, char* in) -> void;



/// <summary>
/// [Example 3] This method returns a string
/// </summary>
/// <param name="in">in parameter</param>
/// <returns></returns>
extern "C" __declspec(dllexport) auto DoSomethingWithAStringParameter3(char* in) -> char*;
