#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

//啪歜 Ы溯檜 掘撩
void play() {
	int choice, word, length_a, i, j = 0, num, count = 0, k, kill = 0;
	char you;
	char wrong[25], copy[9], print[] = { '_', '_', '_', '_', '_', '_', '_', '_', '_' };
	//ч裔縑憮 薯衛腆 欽橫菟 賅擠, 寡翮檜棻.
	char  answer1[] = { 'd', 'e', 's', 't', 'i', 'n', 'y' }, answer2[] = { 'm', 'e', 'l', 'o', 'd', 'y' },
		answer3[] = { 's', 't', 'e', 'l', 'l', 'a' }, answer4[] = { 'm', 'o', 'o', 'n', 'l', 'i', 'g', 'h', 't' },
		answer5[] = { 's', 'u', 'n', 'r', 'i', 's', 'e' }, answer6[] = { 'a', 'u', 'r', 'o', 'r', 'a' };

	//�飛� 瞪��
	system("cls");

	//楠渾戲煎 欽橫蒂 薯衛
	srand((unsigned int)time(NULL));
	word = (rand() % 6);

	//啪歜曖 羅�飛� 掘撩
	cout << ("\t旨收收收收收收收收收收旬 \n")
		<< ("\t   HANGMAN  \n")
		<< ("\t曲收收收收收收收收收收旭 \n") << endl << endl;

	cout << ("\t旨收收收收旬        \n")
		<< ("\t早  旨收朴收旬      \n")
		<< ("\t早  早   早      \tⅡ 啪歜ж晦[1]\n")
		<< ("\t早  早. .早      \n")
		<< ("\t早  曲收有收旭      \tⅡ 啪歜寞徹[2]\n")
		<< ("\t早   收朱收      \n")
		<< ("\t早    早        \n")
		<< ("\t早   旨朴旬      \n")
		<< ("\t早   早 早      \n")
		<< ("\t早   早 早      \n")
		<< ("\t早                \n")
		<< ("\t早                \n")
		<< ("\t曲收收收收收收收  \n") << endl << endl;

	//虜擒 1, 2廓擊 殮溘й 唳辦諦 斜 諼曖 廓�ㄧ� 殮溘й 唳辦
	while (1) {
		cout << "\t摹鷗 Ⅱ ";
		cin >> choice;
		if (choice == 1)
			break;
		else if (choice == 2) {
			//虜擒 2廓擊 殮溘й 唳辦 啪歜撲貲�飛橉虞� 瞪��
			system("cls");

			cout << ("\t旨收收收收收收收收收收旬 \n")
				<< ("\t   HANGMAN  \n")
				<< ("\t曲收收收收收收收收收收旭 \n") << endl << endl;

			cout << ("\t旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 \n")
				<< "\t早 �褘� 艙橫 欽橫 蜃�鰼� 啪歜 醞 ж釭煎, 旋濠 熱虜躑 壽還擊 斜溥場堅    早\n"
				<< "\t早 旋濠蒂 殮溘и棻. и 旋濠噶 殮溘и ��, 蜃朝 旋濠陛 氈擊 唳辦縑朝 п渡 早\n"
				<< "\t早 綴蘊縑 殮溘腎堅 橈擊 唳辦 塭檜Щ蒂  ж釭噶 梗朝 啪歜檜棻.            早\n"
				<< "\t早 掖熱渠縑 掖熱⑽擊 渡ж朝 餌塋曖 斜葡擊 斜葬朝等, 籀擠縑朝 奢寥戲煎   早\n"
				<< "\t早 衛濛и棻. 斜葬堅 旋濠陛 ぎ萵 陽葆棻 評煎 ぎ萼 旋濠蒂 ル衛ж堅 斜葡擊 早\n"
				<< "\t早 掖熱渠 - 孵還 - 該葬 - つ - 槳 - 跺鱔 - 棻葬 - 嫦 牖憮煎 斜萼棻.     早\n"
				<< "\t早 虜擒, 斜葡檜 諫撩腎賊 雖啪 腎朝 啪歜檜棻.                            早\n"
				<< "\t早 ≦ 欽, 模僥濠虜 陛棟ж棻.                                            早\n"
				<< ("\t曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 \n") << endl << endl;

			cout << "\t啪歜ж晦[1]" << endl << endl;

			//虜擒 1廓擊 殮溘й 唳辦諦 斜 諼曖 廓�ㄧ� 殮溘й 唳辦
			while (1) {
				cout << "\t摹鷗 Ⅱ ";
				cin >> choice;
				if (choice == 1) break;
				else cout << "\t棻衛 殮溘п輿撮蹂" << endl << endl;
			}//while
			break;
		}
		else {
			cout << "\t棻衛 殮溘п輿撮蹂" << endl << endl;
		}
	}//while

	//啪歜褒ч�飛� 瞪��
	system("cls");

	cout << ("\t旨收收收收收收收收收收旬 \n")
		<< ("\t   HANGMAN  \n")
		<< ("\t曲收收收收收收收收收收旭 \n") << endl << endl;

	//啪歜褒ч 衛濛 掘撩�飛�
	cout << ("\t旨收收收收旬        \n")
		<< ("\t早        \n")
		<< ("\t早       \n")
		<< ("\t早       \n")
		<< ("\t早       \n")
		<< ("\t早     \n")
		<< ("\t早          \n")
		<< ("\t早         \n")
		<< ("\t早         \n")
		<< ("\t早         \n")
		<< ("\t早                \n")
		<< ("\t早                \n")
		<< ("\t曲收收收收收收收  \n") << endl << endl;

	//嬪縑憮 word蒂 楠渾戲煎 璋濠蒂 薑п輿歷棻.
	//斜楚憮 斜 璋濠縑 п渡ж朝 欽橫寡翮擊 餌辨濠陛 蜃蹺賊 脹棻.
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

		cout << endl << endl << "\t殮溘 Ⅱ ";
		cin >> you;

		for (i = 0; i < length_a; i++) {
			if (you == copy[i]) {
				num = i;

				//殮溘и 旋濠陛 蜃擊 唳辦, '_'煎虜 掘撩腎橫氈朝 print[]縑 п渡 憲だ漯擊 蹺陛
				for (k = 0; k < length_a; k++)
				if (k == num) print[k] = copy[k];

				count++;
			}

			//ぎ萵唳辦, wrong[]縑 頂陛 殮溘и 憲だ漯檜 蹺陛腎堅, kill滲熱陛 隸陛и棻
			if (i == length_a - 1 && you != copy[i] && count == 0) {
				wrong[j++] = you;
				kill++;
			}
		}

		count = 0;
		cout << "\tぎ萼 憲だ漯 Ⅱ ";

		//ぎ萼 憲だ漯擊 轎溘и棻
		for (i = 0; i < j; i++)
			cout << wrong[i] << " ";
		cout << endl;

		//ぎ萼 旋濠曖 偃熱縑 評塭 斜葡檜 殖塭霞棻
		switch (kill) {
		case 0:
			cout << ("\t旨收收收收旬        \n")
				<< ("\t早        \n")
				<< ("\t早      \n")
				<< ("\t早       \n")
				<< ("\t早        \n")
				<< ("\t早       \n")
				<< ("\t早            \n")
				<< ("\t早         \n")
				<< ("\t早         \n")
				<< ("\t早         \n")
				<< ("\t早                \n")
				<< ("\t早                \n")
				<< ("\t曲收收收收收收收  \n") << endl << endl;
			break;

		case 1:
			cout << ("\t旨收收收收旬        \n")
				<< ("\t早  旨收朴收旬      \n")
				<< ("\t早  早   早      \n")
				<< ("\t早  早. .早      \n")
				<< ("\t早  曲收有收旭      \n")
				<< ("\t早       \n")
				<< ("\t早            \n")
				<< ("\t早         \n")
				<< ("\t早         \n")
				<< ("\t早         \n")
				<< ("\t早                \n")
				<< ("\t早                \n")
				<< ("\t曲收收收收收收收  \n") << endl << endl;
			break;

		case 2:
			cout << ("\t旨收收收收旬        \n")
				<< ("\t早  旨收朴收旬      \n")
				<< ("\t早  早   早      \n")
				<< ("\t早  早. .早      \n")
				<< ("\t早  曲收有收旭      \n")
				<< ("\t早   收朱     \n")
				<< ("\t早          \n")
				<< ("\t早        \n")
				<< ("\t早         \n")
				<< ("\t早        \n")
				<< ("\t早                \n")
				<< ("\t早                \n")
				<< ("\t曲收收收收收收收  \n") << endl << endl;
			break;

		case 3:
			cout << ("\t旨收收收收旬        \n")
				<< ("\t早  旨收朴收旬      \n")
				<< ("\t早  早   早      \n")
				<< ("\t早  早. .早      \n")
				<< ("\t早  曲收有收旭      \n")
				<< ("\t早   收朱收      \n")
				<< ("\t早            \n")
				<< ("\t早         \n")
				<< ("\t早         \n")
				<< ("\t早         \n")
				<< ("\t早                \n")
				<< ("\t早                \n")
				<< ("\t曲收收收收收收收  \n") << endl << endl;
			break;

		case 4:
			cout << ("\t旨收收收收旬        \n")
				<< ("\t早  旨收朴收旬      \n")
				<< ("\t早  早   早      \n")
				<< ("\t早  早. .早      \n")
				<< ("\t早  曲收有收旭      \n")
				<< ("\t早   收朱收      \n")
				<< ("\t早    早        \n")
				<< ("\t早         \n")
				<< ("\t早       \n")
				<< ("\t早         \n")
				<< ("\t早                \n")
				<< ("\t早                \n")
				<< ("\t曲收收收收收收收  \n") << endl << endl;
			break;

		case 5:
			cout << ("\t旨收收收收旬        \n")
				<< ("\t早  旨收朴收旬      \n")
				<< ("\t早  早   早      \n")
				<< ("\t早  早. .早      \n")
				<< ("\t早  曲收有收旭      \n")
				<< ("\t早   收朱收      \n")
				<< ("\t早    早        \n")
				<< ("\t早   旨朴旬      \n")
				<< ("\t早         \n")
				<< ("\t早         \n")
				<< ("\t早                \n")
				<< ("\t早                \n")
				<< ("\t曲收收收收收收收  \n") << endl << endl;
			break;

		case 6:
			cout << ("\t旨收收收收旬        \n")
				<< ("\t早  旨收朴收旬      \n")
				<< ("\t早  早   早      \n")
				<< ("\t早  早. .早      \n")
				<< ("\t早  曲收有收旭      \n")
				<< ("\t早   收朱收      \n")
				<< ("\t早    早        \n")
				<< ("\t早   旨朴旬      \n")
				<< ("\t早   早      \n")
				<< ("\t早   早       \n")
				<< ("\t早                \n")
				<< ("\t早                \n")
				<< ("\t曲收收收收收收收  \n") << endl << endl;
			break;
		}
		if (kill == 7) break;
		for (i = 0; i < length_a; i++) {
			if (print[i] == '_') break;
			else if (i == length_a - 1 && print[i] != '_') num = 100;
		}
		if (num == 100) break;
	}

	//�飛� 瞪��
	system("cls");

	cout << ("\t旨收收收收收收收收收收旬 \n")
		<< ("\t   HANGMAN  \n")
		<< ("\t曲收收收收收收收收收收旭 \n") << endl << endl;
	cout << "\t薑港 Ⅱ ";

	for (i = 0; i < length_a; i++)
		cout << print[i] << " ";

	cout << endl << endl << ("\t  旨收收收收收收旬 \n")
		<< ("\t     END  \n")
		<< ("\t  曲收收收收收收旭 \n");

	if (kill == 7) {
		system("cls");

		cout << ("\t旨收收收收收收收收收收旬 \n")
			<< ("\t   HANGMAN  \n")
			<< ("\t曲收收收收收收收收收收旭 \n") << endl << endl;

		cout << ("\t旨收收收收旬        \n")
			<< ("\t早  旨收朴收旬      \n")
			<< ("\t早  早   早      \n")
			<< ("\t早  早. .早      \n")
			<< ("\t早  曲收有收旭      \n")
			<< ("\t早   收朱收      \n")
			<< ("\t早    早        \n")
			<< ("\t早   旨朴旬      \n")
			<< ("\t早   早 早      \n")
			<< ("\t早   早 早      \n")
			<< ("\t早                \n")
			<< ("\t早                \n")
			<< ("\t曲收收收收收收收  \n") << endl << endl;

		cout << ("\t  旨收收收收收收旬 \n")
			<< ("\t    DEAD  \n")
			<< ("\t  曲收收收收收收旭 \n");
	}
}

int main() {
	char final;

	//啪歜 褒ч л熱 ��轎
	play();

	while (1) {
		cout << endl << endl << "\t棻衛 衛濛ж衛啊蝗棲梱?[y][n]";
		cout << endl << "\t殮溘 Ⅱ ";
		cin >> final;

		if (final == 'y')
			play();
		else if (final == 'n') break;
		else cout << "\t棻衛 殮溘п輿撮蹂" << endl;
	}

	return 0;
}