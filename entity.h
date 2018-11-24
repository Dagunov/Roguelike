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