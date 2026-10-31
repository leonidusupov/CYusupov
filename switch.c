/* Вводится номер дня, выдать название,
или "error" в случае неверного ввода */
/* Гусятинер Л.Б., группа 202ИС-25, 31.10.2026 */
/* Задания.
1. По номеру месяца - количество дней
2. По номеру месяца - время года */
#include <stdio.h>
int main() {
	int month;
	scanf("%d",&month);
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("31\n");
		break;
	case 4: case 6: case 9: case 11:
		printf("30\n");
		break;
	case 2:
		printf("28 or 29\n");
		break;
	default:
		printf("Error\n");
		break;
	}
	switch (month) {
	case 1: case 2: case 12:
		printf("winter\n");
		break;
	case 3: case 4: case 5:
		printf("spring\n");
		break;
	case 6: case 7: case 8:
		printf("summer\n");
		break;
	case 9: case 10: case 11:
		printf("autumn\n");
		break;
	default:
		printf("Error\n");
		break;
	}
	return 0;
}

