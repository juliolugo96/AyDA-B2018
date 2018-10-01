# include <bits/stdc++.h>
using namespace std;

/*Descripción: Función para picar barras metálicas (no optima), tiempo de ejecución O(n^2).

Parámetros: n-> longitud actual de la barra, t->tabla de costos por longitud de barra.

Retorno: Ganancia máxima obtenida a partir de la configuración de coste más favorable.*/
size_t cut_bar(size_t n, size_t * &t){

	if(n == 0) //caso base de Recursión
		return(0);

	size_t m = t[n];
	size_t c = 0;

	/*
	Se corta el primer trozo de la barra (tamaño 1) y se consiguen todas las posibles
    configuraciones para dicho corte, luego se hace un corte de tamaño 2 y de esa forma
    aumenta el tamaño del primer corte en una unidad y se buscan las configuraciones
    para ese corte*/
	for (size_t i = 1; i < n; ++i){
		c = t[i] + cut_bar(n - i, t);
		m = max(c, m);
	}

	return m;
}

/*Descripción: Función para picar barras metálicas (optima), utilizando programación dinámica.

Parámetros: n-> longitud actual de la barra, t->tabla de costos por longitud de barra,
mem -> map que será utilizado para guardar los valores ya calculados.

Retorno: Ganancia máxima obtenida a partir de la configuración de coste más favorable.*/

size_t cut_bar_opt(size_t n, size_t * &t, unordered_map<size_t, size_t> & mem){

  auto obj { mem.find(n) };

  /*caso base de recursión, si el valor ya fue previamente calculado, retorno dicho valor*/
	if(obj != mem.end())
		return std::get<1>(*obj);

	size_t m = t[n];
	size_t c = 0;

	//los cortes se realizan de manera análoga
	for (size_t i = 1; i < n; ++i){
		c = t[i] + cut_bar_opt(n - i, t, mem);
		m = max(c, m);
	}

	// se guarda el valor calculado en la memoria para no repetir su calculo
	mem.emplace_hint(obj, n, m);
	return m;
}

int main(){
	//inicialización de la tabla de costos
	size_t *t = new size_t[20];
	t[0] = 0; t[1] = 3; t[2] = 5; t[3] = 7; t[4] = 8; t[5] = 9; t[6] = 10; t[7] = 11; t[8] = 12; t[9] = 13;

  t[10] = 14, t[11] = 16, t[12] = 17, t[13] = 20, t[14] = 22, t[15] = 24, t[16] = 27, t[17] = 29, t[18] = 31, t[19] = 33;

	size_t r = 0;

	unordered_map<size_t, size_t> mem;
	mem[0] = 0;
	clock_t begin = clock();
	r = cut_bar(20, t);
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

  cout << std::fixed << std::setprecision(10);

	cout << "Result Found without Dynamic Programming = {" << r << "}, found on: {" << elapsed_secs << "} seconds\n";

	begin = clock();
	r = cut_bar_opt(20, t, mem);
	end = clock();
	elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	cout << "Result Found with Dynamic Programming = {" << r << "}, found on: {" << elapsed_secs << "} seconds\n";

	return 0;
}
