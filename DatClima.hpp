/*
 * DatClima.hpp
 *
 *  Created on: May 3, 2024
 *      Author: pc1
 */

#ifndef DATCLIMA_HPP_
#define DATCLIMA_HPP_
#include <iostream>
#include <fstream>
#include <vector>
#include "Fecha.hpp"



class DatClima
{
private:
	Fecha fecha;
	float veloViento;
	float temp;
	float humedadRela ;
	float mmH20;
public:
	DatClima ():fecha(), veloViento(0),temp(0), humedadRela(0), mmH20(0) {};
	DatClima(const Fecha& f, const float& v, const float& t, const float& h, const float& mm):fecha(f), veloViento(v), temp(t), humedadRela(h), mmH20(mm) {};

	Fecha GetFecha() const { return fecha; }
	float GetTemp() const { return temp; }
	float GetVeloViento() const { return veloViento; }
	float GetHumedadRela() const { return humedadRela; }
	float GetmmH20() const { return mmH20; }

	void SetFecha(const Fecha& f) { fecha = f; }
	void SetTemp(const float& t) { temp = t; }
	void SetVeloViento(const float& v) { veloViento = v; }
	void SetHumedadRela(const float& h) { humedadRela = h; }
	void SetmmH20(const float& h) { mmH20 = h; }

};

std::ostream& operator<< (std::ostream& os , const DatClima& d);
std::istream& operator>> (std::istream& is , DatClima& d);






#endif /* DATCLIMA_HPP_ */
