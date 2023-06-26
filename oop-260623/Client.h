#pragma once
#include<string>
#include<vector>


class Client {
private:
	std::string _Fio;
	std::string _Adres;
	double _Schet = 0;
	bool _Status = 0;

public:
	Client(std::string fio, std::string adres):_Fio(fio), _Adres(adres){}


	~Client() {

	}
};

class Clients {
private:
	std::vector<Client*> Verif;
	std::vector<Client*> Tmp;
	int _Counter = 0;

public:
	Clients(Client* client) {
		Tmp.push_back(client);
	};

	void AddInfo(Client* client) {

		for ( )


	}

};
