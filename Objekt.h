#pragma once
#include "stdafx.h"
#include <windows.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp> //für cvtColor
#include <stdint.h>
#include "stdafx.h"
#include<iostream>
#include <string>
#include"Objekt.h"
using namespace std;
using namespace cv;
class Objekte
{
	// lange, flöche, formfaktor
public:
	Objekte(vector<Vec4i> hierachie, vector<vector<Point> > contours, double laenge, double flaeche, double formfaktor);

	void zeigeEigenschaften() const;

private:
	vector<Vec4i> m_hierachie;
	vector<vector<Point> > m_contours;
	double m_laenge, m_flaeche, m_formfaktor;
};


//Constructur

Objekte::Objekte(vector<Vec4i> hierachie, vector<vector<Point> > contours, double laenge, double flaeche, double formfaktor)
	: m_hierachie(hierachie), m_contours(contours), m_laenge(laenge), m_flaeche(flaeche), m_formfaktor(formfaktor)
{
}

void Objekte::zeigeEigenschaften() const
{

	cout << "Hierachie: ";
	for (int i = 0; i < m_hierachie.size(); i++)
	{
		std::cout << m_hierachie[i] << endl;
	}
	cout << "\t";
	cout << "Contour: ";
	for (int i = 0; i < m_contours.size(); i++)
	{
		std::cout << m_contours[i] << endl;
	}
	cout << "\t";
	cout << "Laenge: " << m_laenge << "\t";
	cout << "Flaeche: " << m_flaeche << "\t";
	cout << "Formfaktor: " << m_formfaktor << "\t";
}
struct Objekt_Frame
{
	vector<Vec4i> m_hierachie;
	vector<vector<Point> > m_contours;
	double m_laenge, m_flaeche, m_formfaktor;
};