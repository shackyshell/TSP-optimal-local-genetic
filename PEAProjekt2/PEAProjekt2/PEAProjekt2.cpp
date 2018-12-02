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
#include "SourceConverter.h"

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
	srand(time(NULL));
	Tests tests = *new Tests();
	// const int tabLength = 2;
	// int tab[tabLength] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 };
	// int tab[tabLength] = { 17, 18, 19, 20, 21, 22 };
	// int tab[tabLength] = {  19, 20 };
	// int tab[tabLength] = { 19, 20, 21, 22, 23, 24, 25, 26 };
	// int tab[tabLength] = { 13, 14, 15, 16, 17, 18, 19, 20 };
	// int tab[tabLength] = { 21, 22 };
	// // tests.BruteForceTest(tab, tabLength, "bruteforceTests.txt");
	// // tests.DynamicProgrammingTest(tab, tabLength, "dynamicProgrammingTests.txt");
	// tests.SimulatedAnnealingTest(tab, tabLength, "simulatedAnnealingTests.txt");

	// vector_matrix n = *new vector_matrix(10);
	// tests.printMatrixToFile("matrixPrintTest.txt", n);


	// tests.TestFromRandomMatrix(tab, tabLength, "Compare_BF__BnB_DP_SA.txt");

	vector<string> filepaths = {
		"../testData/ALL_atsp/br17.atsp/br17.atsp",
	"../testData/ALL_atsp/ft53.atsp/ft53.atsp"
	"../testData/ALL_atsp/ft53.atsp/ft53.atsp",
	"../testData/ALL_atsp/ft70.atsp/ft70.atsp",
	"../testData/ALL_atsp/ftv33.atsp/ftv33.atsp",
	"../testData/ALL_atsp/ftv35.atsp/ftv35.atsp",
	"../testData/ALL_atsp/ftv38.atsp/ftv38.atsp",
	// "../testData/ALL_atsp/ftv44.atsp/ftv44.atsp",
	// "../testData/ALL_atsp/ftv47.atsp/ftv47.atsp",
	// "../testData/ALL_atsp/ftv55.atsp/ftv55.atsp",
	// "../testData/ALL_atsp/ftv64.atsp/ftv64.atsp",
	// "../testData/ALL_atsp/ftv70.atsp/ftv70.atsp",
	// "../testData/ALL_atsp/ftv170.atsp/ftv170.atsp"
	};
	tests.testFromFiles(filepaths, "Compare_BF__BnB_DP_SA.txt");

	
	// vector_matrix n;
	// n.loadFromFile("../../../../dane_testowe/tsp_6_1.txt");
	// tests.doAndSavePathsAndCosts("summulatedAnnealingTests.txt", n);
	// n.loadFromFile("../../../../dane_testowe/tsp_6_2.txt");
	// tests.doAndSavePathsAndCosts("summulatedAnnealingTests.txt", n);
	// n.loadFromFile("../../../../dane_testowe/tsp_10.txt");
	// tests.doAndSavePathsAndCosts("summulatedAnnealingTests.txt", n);


	// SourceConverter c;
	// c.loadDataFromFile("../testData/ALL_atsp/br17.atsp/br17.atsp");
	// c.PrintMatrix();
	// vector_matrix n=c.getVectorMatrixATSP();
	// n.printNeighborhoodMatrix();

	
	// doBruteForce("../../../dane_testowe/tsp_6_1.txt");
	// doBruteForce("../../../dane_testowe/tsp_6_2.txt");
	// doBruteForce("../../../dane_testowe/tsp_10.txt");


	// doDynamicProgramming("../../../dane_testowe/tsp_6_1.txt");
	// doDynamicProgramming("../../../dane_testowe/tsp_6_2.txt");
	// doDynamicProgramming("../../../dane_testowe/tsp_10.txt");


	// doBranchAndBound("../../../../dane_testowe/tsp_6_1.txt");
	// doBranchAndBound("../../../../dane_testowe/tsp_6_2.txt");
	// doBranchAndBound("../../../../dane_testowe/tsp_10.txt");

	// doSimulatedAnnealing("../../../../dane_testowe/tsp_6_1.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/tsp_6_2.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/tsp_10.txt");

	
	return 0;
}

