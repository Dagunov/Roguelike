//Файл,описывающий структуру живых объектов.
//Создание экземлпяров данных структур поручается EntityManager , который на основе XML файлов генерирует существа.

struct ColorRGB {
	short red;
	short green;
	short blue;
};
	

//Структура для представления объекта на экране
struct View {
	int posX;
	int posY;
	char model;
	ColorRGB color;
};

struct Race {
	char* raceName;
	//Skill* skills;
	//Abillity* abillities;
};

//Структура,которая представляет класс живого объекта.Как и раса,каждый класс имеет свои навыки(ск) и умения(аб).
//К примеру класс лучник имеет навык стрельбы двумя стрелами.
struct Class {
	char* className;
	//Skill* skills;
	//Abillity* abillities;
};

struct Entity {
	struct Race* race;

	char* entityName;

	long long minHealth;
	long long maxHealth;

	int weight;
	int height;
	int speed;

	int level;
	long long experience;


};