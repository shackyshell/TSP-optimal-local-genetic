#include "matrix.h"
#include "BruteForce.h"
#include "branch_and_bound.h"
#include "PEAProjekt2.h"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>
#include <list>
#include "DynamicProgramming.h"
#include "Tests.h"
#include "DynamicProgrammingHeldKarp.h"
#include "SimulatedAnnealing.h"

using namespace std;

void doBruteForce(string filePath)
{
	matrix m;
	m.loadFromFile(filePath);
	m.printNeighborhoodMatrix();
	brute_force bf = *new brute_force(m);
	bf.print_result();
}

void doDynamicProgramming(string filePath)
{
	vector_matrix n;
	n.loadFromFile(filePath);
	n.printNeighborhoodMatrix();
	dynamic_programming dp = *new dynamic_programming(n);
	dp.print_result();
}

void doBranchAndBound(string filePath)
{
	vector_matrix n;
	n.loadFromFile(filePath);
	n.printNeighborhoodMatrix();
	branch_and_bound bnb = *new branch_and_bound(n);
	bnb.print_result();
}

void doSimulatedAnnealing(string filePath)
{
	vector_matrix n;
	n.loadFromFile(filePath);
	n.printNeighborhoodMatrix();
	SimulatedAnnealing sa = *new SimulatedAnnealing(n);
	sa.print_result();
}


int main() {
	// Tests tests = *new Tests();
	// const int tabLength = 1;
	// int tab[tabLength] = { 26 };
	// // tests.BruteForceTest(tab, tabLength, "bruteforceTests.txt");
	// // tests.DynamicProgrammingTest(tab, tabLength, "dynamicProgrammingTests.txt");
	// tests.DynamicProgrammingTest(tab, tabLength, "branchAndBoundTests.txt");
	
	// doBruteForce("../../../dane_testowe/tsp_6_1.txt");
	// doBruteForce("../../../dane_testowe/tsp_6_2.txt");
	// doBruteForce("../../../dane_testowe/tsp_10.txt");


	// doDynamicProgramming("../../../dane_testowe/tsp_6_1.txt");
	// doDynamicProgramming("../../../dane_testowe/tsp_6_2.txt");
	// doDynamicProgramming("../../../dane_testowe/tsp_10.txt");


	doBranchAndBound("../../../../dane_testowe/tsp_6_1.txt");
	// doBranchAndBound("../../../../dane_testowe/tsp_6_2.txt");
	// doBranchAndBound("../../../../dane_testowe/tsp_10.txt");

	doSimulatedAnnealing("../../../../dane_testowe/tsp_6_1.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/tsp_6_2.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/tsp_10.txt");

	
	return 0;
}

