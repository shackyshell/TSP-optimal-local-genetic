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
#include "SimulatedAnnealing.h"
#include "SourceConverter.h"
#include "TabuSearch.h"
#include "Genetic.h"
#include "IslandMethod.h"

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


void doTabuSearch(string filePath)
{
	vector_matrix n;
	n.loadFromFile(filePath);
	n.printNeighborhoodMatrix();
	TabuSearch ts = *new TabuSearch(n);
	ts.print_result();
}


void doTabuSearch(string filePath, int timer, int neigbour, bool diversification, double diversificationFactor, int iteration, bool greedy, int alfa, int cadence)
{
	vector_matrix n;
	n.loadFromFile(filePath);
	n.printNeighborhoodMatrix();
	TabuSearch ts = *new TabuSearch(n, timer, neigbour, diversification, diversificationFactor, iteration, greedy, alfa, cadence);
	ts.print_result();
}

void doGenetic(string filePath)
{
	vector_matrix n;
	n.loadFromFile(filePath);
	// n.printNeighborhoodMatrix();
	Genetic gen = *new Genetic(n);
	gen.print_result();
}

int main() {
	srand(time(NULL));

	// Tests tests = *new Tests();
	// // const int tabLength = 17;
	// // int tab[tabLength] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 };
	// // // int tab[tabLength] = { 17, 18, 19, 20, 21, 22 };
	// // // int tab[tabLength] = {  19, 20 };
	// // // int tab[tabLength] = {  6, 14, 20 };
	// // // int tab[tabLength] = { 19, 20, 21, 22, 23, 24, 25, 26 };
	// // // int tab[tabLength] = { 13, 14, 15, 16, 17, 18, 19, 20 };
	// // // int tab[tabLength] = { 21, 22 };
	// // vector<int> vec = { 21, 22 };
	// // // // tests.BruteForceTest(tab, tabLength, "bruteforceTests.txt");
	// // // // tests.DynamicProgrammingTest(tab, tabLength, "dynamicProgrammingTests.txt");
	// // // tests.SimulatedAnnealingTest(tab, tabLength, "simulatedAnnealingTests.txt");
	// // tests.IslandMethodTest(vec, "IslandMethodTests.txt");
	// //
	// // // vector_matrix n = *new vector_matrix(10);
	// // // tests.printMatrixToFile("matrixPrintTest.txt", n);
	// //
	// //
	// // tests.TestFromRandomMatrix(tab, tabLength, "Compare_TS_FROM_RANDOM_jaki_blad-6-22.txt");
	//
	// vector<string> filepaths = {
	// 	"../testData/ALL_atsp/br17.atsp/br17.atsp",
	// "../testData/ALL_atsp/ft53.atsp/ft53.atsp",
	// "../testData/ALL_atsp/ft70.atsp/ft70.atsp",
	// "../testData/ALL_atsp/ftv33.atsp/ftv33.atsp",
	// "../testData/ALL_atsp/ftv35.atsp/ftv35.atsp",
	// "../testData/ALL_atsp/ftv38.atsp/ftv38.atsp",
	// "../testData/ALL_atsp/ftv44.atsp/ftv44.atsp",
	// "../testData/ALL_atsp/ftv47.atsp/ftv47.atsp",
	// "../testData/ALL_atsp/ftv55.atsp/ftv55.atsp",
	// "../testData/ALL_atsp/ftv64.atsp/ftv64.atsp",
	// "../testData/ALL_atsp/ftv70.atsp/ftv70.atsp",
	// "../testData/ALL_atsp/ftv170.atsp/ftv170.atsp",
	// // 	"../testData/ALL_tsp/gr17.tsp",
	// // 	"../testData/ALL_tsp/gr48.tsp"
	// };
	// // tests.testFromFiles(filepaths, "Compare__TS.txt");
	// // // tests.testFromFiles(filepaths, "Compare__SA_TS.txt");
	// // tests.testFromFiles(filepaths, "testSimulatedAnnealing.txt");
	// // tests.testFromFiles(filepaths, "testIslandParameters.txt");
	// tests.testFromFiles(filepaths, "testGeneticParameters.txt");

	
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
	// doBranchAndBound("../../../../dane_testowe/tsp_17.txt");

	// doSimulatedAnnealing("../../../../dane_testowe/tsp_6_1.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/tsp_6_2.txt");
	 // doSimulatedAnnealing("../../../../dane_testowe/tsp_10.txt");
	 // doSimulatedAnnealing("../../../../dane_testowe/data29.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/tsp_10.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/tsp_17.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/data120.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/data29.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/data26.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/data58.txt");
	// doSimulatedAnnealing("../../../../dane_testowe/data120.txt");



	// vector_matrix n;
	// SourceConverter c;
	// c.loadDataFromFile("../../../../dane_testowe/ft53.atsp");
	// n = c.getVectorMatrixATSP();
	// n.printNeighborhoodMatrix();
	// SimulatedAnnealing sa = *new SimulatedAnnealing(n);
	// sa.print_result();



	// doTabuSearch("../../../../dane_testowe/tsp_6_1.txt");
	// doTabuSearch("../../../../dane_testowe/tsp_17.txt");
	// doTabuSearch("../../../../dane_testowe/tsp_17.txt", 30, 0, true);
	 // doTabuSearch("../../../../dane_testowe/data29.txt");
	 // doTabuSearch("../../../../dane_testowe/data58.txt");



	// vector_matrix n;
	// n.loadFromFile("../../../../dane_testowe/tsp_6_1.txt");
	// // n.printNeighborhoodMatrix();
	// Genetic gen = *new Genetic(n);
	// gen.print_result();


	// doGenetic("../../../../dane_testowe/tsp_6_1.txt");
	// doGenetic("../../../../dane_testowe/tsp_17.txt");
	// doGenetic("../../../../dane_testowe/data29.txt");

	vector_matrix n;
	// n.loadFromFile("../../../../dane_testowe/tsp_6_1.txt");
	 n.loadFromFile("../../../../dane_testowe/tsp_17.txt");
	//n.loadFromFile("../../../../dane_testowe/data120.txt");
	IslandMethod im = *new IslandMethod(n, n.nVertices * 10, 100, 2, 5);
	vector<int> path = im.getBestIndividual().genotyp;
	cout<<"Koszt:"<<im.getBestIndividual().cost<<endl;
	cout << "Sciezka: " << endl;
	for (int i = 0; i < path.size(); i++)
	{
		cout << path[i] << " ";
	}
	cout << path[0] << endl;

	return 0;
}

