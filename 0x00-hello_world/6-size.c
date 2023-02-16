#!/bin/bash
#include <stdio.h>
int main() { printf("Size of char: %ld byte(s)\nSize of int: %ld byte(s)\nSize of long: %ld byte(s)\nSize of long long: %ld byte(s)\nSize of float: %ld byte(s)\nSize of double: %ld byte(s)\nSize of long double: %ld byte(s)\n", sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), sizeof(long double)); return 0; }
