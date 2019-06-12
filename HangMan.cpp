#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

//°ÔÀÓ ÇÃ·¹ÀÌ ±¸¼º
void play() {
	int choice, word, length_a, i, j = 0, num, count = 0, k, kill = 0;
	char you;
	char wrong[25], copy[9], print[] = { '_', '_', '_', '_', '_', '_', '_', '_', '_' };
	//Çà¸Ç¿¡¼­ Á¦½ÃµÉ ´Ü¾îµé ¸ðÀ½, ¹è¿­ÀÌ´Ù.
	char  answer1[] = { 'd', 'e', 's', 't', 'i', 'n', 'y' }, answer2[] = { 'm', 'e', 'l', 'o', 'd', 'y' },
		answer3[] = { 's', 't', 'e', 'l', 'l', 'a' }, answer4[] = { 'm', 'o', 'o', 'n', 'l', 'i', 'g', 'h', 't' },
		answer5[] = { 's', 'u', 'n', 'r', 'i', 's', 'e' }, answer6[] = { 'a', 'u', 'r', 'o', 'r', 'a' };

	//È­¸é ÀüÈ¯
	system("cls");

	//·£´ýÀ¸·Î ´Ü¾î¸¦ Á¦½Ã
	srand((unsigned int)time(NULL));
	word = (rand() % 6);

	//°ÔÀÓÀÇ Ã¹È­¸é ±¸¼º
	cout << ("\t¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
		<< ("\t   HANGMAN  \n")
		<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° \n") << endl << endl;

	cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
		<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
		<< ("\t¦­  ¦­   ¦­      \t¢º °ÔÀÓÇÏ±â[1]\n")
		<< ("\t¦­  ¦­. .¦­      \n")
		<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \t¢º °ÔÀÓ¹æ¹ý[2]\n")
		<< ("\t¦­   ¦¬¦¶¦¬      \n")
		<< ("\t¦­    ¦­        \n")
		<< ("\t¦­   ¦®¦µ¦¯      \n")
		<< ("\t¦­   ¦­ ¦­      \n")
		<< ("\t¦­   ¦­ ¦­      \n")
		<< ("\t¦­                \n")
		<< ("\t¦­                \n")
		<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;

	//¸¸¾à 1, 2¹øÀ» ÀÔ·ÂÇÒ °æ¿ì¿Í ±× ¿ÜÀÇ ¹øÈ£¸¦ ÀÔ·ÂÇÒ °æ¿ì
	while (1) {
		cout << "\t¼±ÅÃ ¢º ";
		cin >> choice;
		if (choice == 1)
			break;
		else if (choice == 2) {
			//¸¸¾à 2¹øÀ» ÀÔ·ÂÇÒ °æ¿ì °ÔÀÓ¼³¸íÈ­¸éÀ¸·Î ÀüÈ¯
			system("cls");

			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
				<< ("\t   HANGMAN  \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° \n") << endl << endl;

			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
				<< "\t¦­ ÈçÇÑ ¿µ¾î ´Ü¾î ¸ÂÈ÷±â °ÔÀÓ Áß ÇÏ³ª·Î, ±ÛÀÚ ¼ö¸¸Å­ ¹ØÁÙÀ» ±×·Á³õ°í    ¦­\n"
				<< "\t¦­ ±ÛÀÚ¸¦ ÀÔ·ÂÇÑ´Ù. ÇÑ ±ÛÀÚ¾¿ ÀÔ·ÂÇÑ ÈÄ, ¸Â´Â ±ÛÀÚ°¡ ÀÖÀ» °æ¿ì¿¡´Â ÇØ´ç ¦­\n"
				<< "\t¦­ ºóÄ­¿¡ ÀÔ·ÂµÇ°í ¾øÀ» °æ¿ì ¶óÀÌÇÁ¸¦  ÇÏ³ª¾¿ ±ð´Â °ÔÀÓÀÌ´Ù.            ¦­\n"
				<< "\t¦­ ±³¼ö´ë¿¡ ±³¼öÇüÀ» ´çÇÏ´Â »ç¶÷ÀÇ ±×¸²À» ±×¸®´Âµ¥, Ã³À½¿¡´Â °ø¹éÀ¸·Î   ¦­\n"
				<< "\t¦­ ½ÃÀÛÇÑ´Ù. ±×¸®°í ±ÛÀÚ°¡ Æ²¸± ¶§¸¶´Ù µû·Î Æ²¸° ±ÛÀÚ¸¦ Ç¥½ÃÇÏ°í ±×¸²À» ¦­\n"
				<< "\t¦­ ±³¼ö´ë - ¹åÁÙ - ¸Ó¸® - ÆÈ - ¼Õ - ¸öÅë - ´Ù¸® - ¹ß ¼ø¼­·Î ±×¸°´Ù.     ¦­\n"
				<< "\t¦­ ¸¸¾à, ±×¸²ÀÌ ¿Ï¼ºµÇ¸é Áö°Ô µÇ´Â °ÔÀÓÀÌ´Ù.                            ¦­\n"
				<< "\t¦­ ¡Ø ´Ü, ¼Ò¹®ÀÚ¸¸ °¡´ÉÇÏ´Ù.                                            ¦­\n"
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° \n") << endl << endl;

			cout << "\t°ÔÀÓÇÏ±â[1]" << endl << endl;

			//¸¸¾à 1¹øÀ» ÀÔ·ÂÇÒ °æ¿ì¿Í ±× ¿ÜÀÇ ¹øÈ£¸¦ ÀÔ·ÂÇÒ °æ¿ì
			while (1) {
				cout << "\t¼±ÅÃ ¢º ";
				cin >> choice;
				if (choice == 1) break;
				else cout << "\t´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä" << endl << endl;
			}//while
			break;
		}
		else {
			cout << "\t´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä" << endl << endl;
		}
	}//while

	//°ÔÀÓ½ÇÇàÈ­¸é ÀüÈ¯
	system("cls");

	cout << ("\t¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
		<< ("\t   HANGMAN  \n")
		<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° \n") << endl << endl;

	//°ÔÀÓ½ÇÇà ½ÃÀÛ ±¸¼ºÈ­¸é
	cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
		<< ("\t¦­        \n")
		<< ("\t¦­       \n")
		<< ("\t¦­       \n")
		<< ("\t¦­       \n")
		<< ("\t¦­     \n")
		<< ("\t¦­          \n")
		<< ("\t¦­         \n")
		<< ("\t¦­         \n")
		<< ("\t¦­         \n")
		<< ("\t¦­                \n")
		<< ("\t¦­                \n")
		<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;

	//À§¿¡¼­ word¸¦ ·£´ýÀ¸·Î ¼ýÀÚ¸¦ Á¤ÇØÁÖ¾ú´Ù.
	//±×·¡¼­ ±× ¼ýÀÚ¿¡ ÇØ´çÇÏ´Â ´Ü¾î¹è¿­À» »ç¿ëÀÚ°¡ ¸ÂÃß¸é µÈ´Ù.
	switch (word) {
	case 0:
		length_a = (sizeof(answer1) / sizeof(char));
		for (i = 0; i < length_a; i++)
			copy[i] = answer1[i];
		break;

	case 1:
		length_a = (sizeof(answer2) / sizeof(char));
		for (i = 0; i < length_a; i++)
			copy[i] = answer2[i];
		break;

	case 2:
		length_a = (sizeof(answer3) / sizeof(char));
		for (i = 0; i < length_a; i++)
			copy[i] = answer3[i];
		break;

	case 3:
		length_a = (sizeof(answer4) / sizeof(char));
		for (i = 0; i < length_a; i++)
			copy[i] = answer4[i];
		break;

	case 4:
		length_a = (sizeof(answer5) / sizeof(char));
		for (i = 0; i < length_a; i++)
			copy[i] = answer5[i];
		break;

	case 5:
		length_a = (sizeof(answer6) / sizeof(char));
		for (i = 0; i < length_a; i++)
			copy[i] = answer6[i];
		break;
	}//switch

	while (1) {
		cout << "\t";

		for (i = 0; i < length_a; i++)
			cout << print[i];

		cout << endl << endl << "\tÀÔ·Â ¢º ";
		cin >> you;

		for (i = 0; i < length_a; i++) {
			if (you == copy[i]) {
				num = i;

				//ÀÔ·ÂÇÑ ±ÛÀÚ°¡ ¸ÂÀ» °æ¿ì, '_'·Î¸¸ ±¸¼ºµÇ¾îÀÖ´Â print[]¿¡ ÇØ´ç ¾ËÆÄºªÀ» Ãß°¡
				for (k = 0; k < length_a; k++)
				if (k == num) print[k] = copy[k];

				count++;
			}

			//Æ²¸±°æ¿ì, wrong[]¿¡ ³»°¡ ÀÔ·ÂÇÑ ¾ËÆÄºªÀÌ Ãß°¡µÇ°í, killº¯¼ö°¡ Áõ°¡ÇÑ´Ù
			if (i == length_a - 1 && you != copy[i] && count == 0) {
				wrong[j++] = you;
				kill++;
			}
		}

		count = 0;
		cout << "\tÆ²¸° ¾ËÆÄºª ¢º ";

		//Æ²¸° ¾ËÆÄºªÀ» Ãâ·ÂÇÑ´Ù
		for (i = 0; i < j; i++)
			cout << wrong[i] << " ";
		cout << endl;

		//Æ²¸° ±ÛÀÚÀÇ °³¼ö¿¡ µû¶ó ±×¸²ÀÌ ´Þ¶óÁø´Ù
		switch (kill) {
		case 0:
			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
				<< ("\t¦­        \n")
				<< ("\t¦­      \n")
				<< ("\t¦­       \n")
				<< ("\t¦­        \n")
				<< ("\t¦­       \n")
				<< ("\t¦­            \n")
				<< ("\t¦­         \n")
				<< ("\t¦­         \n")
				<< ("\t¦­         \n")
				<< ("\t¦­                \n")
				<< ("\t¦­                \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;
			break;

		case 1:
			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
				<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
				<< ("\t¦­  ¦­   ¦­      \n")
				<< ("\t¦­  ¦­. .¦­      \n")
				<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \n")
				<< ("\t¦­       \n")
				<< ("\t¦­            \n")
				<< ("\t¦­         \n")
				<< ("\t¦­         \n")
				<< ("\t¦­         \n")
				<< ("\t¦­                \n")
				<< ("\t¦­                \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;
			break;

		case 2:
			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
				<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
				<< ("\t¦­  ¦­   ¦­      \n")
				<< ("\t¦­  ¦­. .¦­      \n")
				<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \n")
				<< ("\t¦­   ¦¬¦¶     \n")
				<< ("\t¦­          \n")
				<< ("\t¦­        \n")
				<< ("\t¦­         \n")
				<< ("\t¦­        \n")
				<< ("\t¦­                \n")
				<< ("\t¦­                \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;
			break;

		case 3:
			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
				<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
				<< ("\t¦­  ¦­   ¦­      \n")
				<< ("\t¦­  ¦­. .¦­      \n")
				<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \n")
				<< ("\t¦­   ¦¬¦¶¦¬      \n")
				<< ("\t¦­            \n")
				<< ("\t¦­         \n")
				<< ("\t¦­         \n")
				<< ("\t¦­         \n")
				<< ("\t¦­                \n")
				<< ("\t¦­                \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;
			break;

		case 4:
			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
				<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
				<< ("\t¦­  ¦­   ¦­      \n")
				<< ("\t¦­  ¦­. .¦­      \n")
				<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \n")
				<< ("\t¦­   ¦¬¦¶¦¬      \n")
				<< ("\t¦­    ¦­        \n")
				<< ("\t¦­         \n")
				<< ("\t¦­       \n")
				<< ("\t¦­         \n")
				<< ("\t¦­                \n")
				<< ("\t¦­                \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;
			break;

		case 5:
			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
				<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
				<< ("\t¦­  ¦­   ¦­      \n")
				<< ("\t¦­  ¦­. .¦­      \n")
				<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \n")
				<< ("\t¦­   ¦¬¦¶¦¬      \n")
				<< ("\t¦­    ¦­        \n")
				<< ("\t¦­   ¦®¦µ¦¯      \n")
				<< ("\t¦­         \n")
				<< ("\t¦­         \n")
				<< ("\t¦­                \n")
				<< ("\t¦­                \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;
			break;

		case 6:
			cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
				<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
				<< ("\t¦­  ¦­   ¦­      \n")
				<< ("\t¦­  ¦­. .¦­      \n")
				<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \n")
				<< ("\t¦­   ¦¬¦¶¦¬      \n")
				<< ("\t¦­    ¦­        \n")
				<< ("\t¦­   ¦®¦µ¦¯      \n")
				<< ("\t¦­   ¦­      \n")
				<< ("\t¦­   ¦­       \n")
				<< ("\t¦­                \n")
				<< ("\t¦­                \n")
				<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;
			break;
		}
		if (kill == 7) break;
		for (i = 0; i < length_a; i++) {
			if (print[i] == '_') break;
			else if (i == length_a - 1 && print[i] != '_') num = 100;
		}
		if (num == 100) break;
	}

	//È­¸é ÀüÈ¯
	system("cls");

	cout << ("\t¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
		<< ("\t   HANGMAN  \n")
		<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° \n") << endl << endl;
	cout << "\tÁ¤´ä ¢º ";

	for (i = 0; i < length_a; i++)
		cout << print[i] << " ";

	cout << endl << endl << ("\t  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
		<< ("\t     END  \n")
		<< ("\t  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦° \n");

	if (kill == 7) {
		system("cls");

		cout << ("\t¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
			<< ("\t   HANGMAN  \n")
			<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦° \n") << endl << endl;

		cout << ("\t¦®¦¬¦¬¦¬¦¬¦¯        \n")
			<< ("\t¦­  ¦®¦¬¦µ¦¬¦¯      \n")
			<< ("\t¦­  ¦­   ¦­      \n")
			<< ("\t¦­  ¦­. .¦­      \n")
			<< ("\t¦­  ¦±¦¬¦³¦¬¦°      \n")
			<< ("\t¦­   ¦¬¦¶¦¬      \n")
			<< ("\t¦­    ¦­        \n")
			<< ("\t¦­   ¦®¦µ¦¯      \n")
			<< ("\t¦­   ¦­ ¦­      \n")
			<< ("\t¦­   ¦­ ¦­      \n")
			<< ("\t¦­                \n")
			<< ("\t¦­                \n")
			<< ("\t¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬  \n") << endl << endl;

		cout << ("\t  ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¯ \n")
			<< ("\t    DEAD  \n")
			<< ("\t  ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦° \n");
	}
}

int main() {
	char final;

	//°ÔÀÓ ½ÇÇà ÇÔ¼ö È£Ãâ
	play();

	while (1) {
		cout << endl << endl << "\t´Ù½Ã ½ÃÀÛÇÏ½Ã°Ú½À´Ï±î?[y][n]";
		cout << endl << "\tÀÔ·Â ¢º ";
		cin >> final;

		if (final == 'y')
			play();
		else if (final == 'n') break;
		else cout << "\t´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä" << endl;
	}

	return 0;
}