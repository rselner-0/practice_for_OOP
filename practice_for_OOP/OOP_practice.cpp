//OOP_practice.cpp
//This practice program displays the wavelength bands of the seven visible light colors:
//Seven colors = (Red, Orange, Yellow, Green, Cyan, Blue and Violet)
//The program then prompts the user to choose a color to display the frequency band for that color.
//The user can quit the program whenever.

#include <iostream>
#include <cmath>
#define C 299792458

using namespace std;

class Red
{
private:
	int wave_length_high = 750;
	int wave_length_low = 620;
	double Hz_high = C / (wave_length_high * pow(10, -9));
	double Hz_low = C / (wave_length_low * pow(10, -9));
public:
	void wavelength()
	{
		cout << "Red: I have the longest wavelength, with the largest band width "
			"between " << wave_length_low << " and " << wave_length_high << " [nm]. \n";
	}
	void frequency()
	{
		cout << "Red: My range of frequencies is between " << Hz_low << " and " << Hz_high << " [Hz]. \n\n";
	}
}r;

class Orange
{
private:
	int wave_length_high = 620;
	int wave_length_low = 585;
	double Hz_high = C / (wave_length_high * pow(10, -9));
	double Hz_low = C / (wave_length_low * pow(10, -9));
public:
	void wavelength()
	{
		cout << "Orange: I'm shortly after, with a narrow band "
			"between " << wave_length_low << " and " << wave_length_high << " [nm]. \n";
	}
	void frequency()
	{
		cout << "Orange: My range of frequencies is between " << Hz_low << " and " << Hz_high << " [Hz]. \n\n";
	}
}o;

class Yellow
{
private:
	int wave_length_high = 585;
	int wave_length_low = 560;
	double Hz_high = C / (wave_length_high * pow(10, -9));
	double Hz_low = C / (wave_length_low * pow(10, -9));
public:
	void wavelength()
	{
		cout << "Yellow: I'm after that, with an equally-narrow band "
			"between " << wave_length_low << " and " << wave_length_high << " [nm]. \n";
	}
	void frequency()
	{
		cout << "Yellow: My range of frequencies is between " << Hz_low << " and " << Hz_high << " [Hz]. \n\n";
	}
}y;

class Green
{
private:
	int wave_length_high = 560;
	int wave_length_low = 500;
	double Hz_high = C / (wave_length_high * pow(10, -9));
	double Hz_low = C / (wave_length_low * pow(10, -9));
public:
	void wavelength()
	{
		cout << "Green: I'm in the middle, with a relatively large band width "
			"between " << wave_length_low << " and " << wave_length_high << " [nm]. \n";
	}
	void frequency()
	{
		cout << "Green: My range of frequencies is between " << Hz_low << " and " << Hz_high << " [Hz]. \n\n";
	}
}g;

class Cyan
{
private:
	int wave_length_high = 500;
	int wave_length_low = 480;
	double Hz_high = C / (wave_length_high * pow(10, -9));
	double Hz_low = C / (wave_length_low * pow(10, -9));
public:
	void wavelength()
	{
		cout << "Cyan: I'm next, with a small band "
			"between " << wave_length_low << " and " << wave_length_high << " [nm]. \n";
	}
	void frequency()
	{
		cout << "Cyan: My range of frequencies is between " << Hz_low << " and " << Hz_high << " [Hz]. \n\n";
	}
}c;

class Blue
{
private:
	int wave_length_high = 480;
	int wave_length_low = 450;
	double Hz_high = C / (wave_length_high * pow(10, -9));
	double Hz_low = C / (wave_length_low * pow(10, -9));
public:
	void wavelength()
	{
		cout << "Blue: I have the second smallest wavelength, with a band "
			"between " << wave_length_low << " and " << wave_length_high << " [nm]. \n";
	}
	void frequency()
	{
		cout << "Blue: My range of frequencies is between " << Hz_low << " and " << Hz_high << " [Hz]. \n\n";
	}
}b;

class Violet
{
private:
	int wave_length_high = 450;
	int wave_length_low = 380;
	double Hz_high = C / (wave_length_high * pow(10, -9));
	double Hz_low = C / (wave_length_low * pow(10, -9));
public:
	void wavelength()
	{
		cout << "Violet: Finally, I am last with the smallest wavelength and a relatively large band width "
			"between " << wave_length_low << " and " << wave_length_high << " [nm]. \n";
	}
	void frequency()
	{
		cout << "Violet: My range of frequencies is between " << Hz_low << " and " << Hz_high << " [Hz]. \n\n";
	}
}v;

struct variables
{
	int game_counter = 0;
	string color_choice = "";
}x;

void prompt_user(variables* x, Red r, Orange o, Yellow y, Green g, Cyan c, Blue b, Violet v);

int main()
{
	cout << "Which colors have the longest wavelength? What are the wavelength bands for the seven visible light colors? \n\n";

	r.wavelength();
	o.wavelength();
	y.wavelength();
	g.wavelength();
	c.wavelength();
	b.wavelength();
	v.wavelength();

	while (x.color_choice != "quit" && x.color_choice != "Quit")
	{
		prompt_user(&x, r, o, y, g, c, b, v);
	}

	cout << "\nPlayed " << x.game_counter << " times." << endl;

	return 0;
}

void prompt_user(variables* x, Red r, Orange o, Yellow y, Green g, Cyan c, Blue b, Violet v)
{
	if (x->game_counter == 0)
	{
		cout << "\nNow ";
	}

	cout << "pick a";

	if (x->game_counter != 0)
	{
		cout << "nother";
	}

	cout << " color and it will show you its range of frequencies, or type \"Quit\" to exit:\n\nInput: ";

	cin >> x->color_choice;
	cout << "\n";

	if (x->color_choice == "quit" || x->color_choice == "Quit")
	{
		cout << "\nThanks for";

		if (x->game_counter == 0)
		{
			cout << " NOT";
		}

		cout << " playing!\n";
	}

	else
	{
		if (x->color_choice == "Red" || x->color_choice == "red")
		{
			r.frequency();
			x->game_counter++;
		}

		else if (x->color_choice == "Orange" || x->color_choice == "orange")
		{
			o.frequency();
			x->game_counter++;
		}

		else if (x->color_choice == "Yellow" || x->color_choice == "yellow")
		{
			y.frequency();
			x->game_counter++;
		}

		else if (x->color_choice == "Green" || x->color_choice == "green")
		{
			g.frequency();
			x->game_counter++;
		}

		else if (x->color_choice == "Cyan" || x->color_choice == "cyan")
		{
			c.frequency();
			x->game_counter++;
		}

		else if (x->color_choice == "Blue" || x->color_choice == "blue")
		{
			b.frequency();
			x->game_counter++;
		}

		else if (x->color_choice == "Violet" || x->color_choice == "violet")
		{
			v.frequency();
			x->game_counter++;
		}

		else
		{
			cout << "\nThat is, unfortunately, not a choice.\n";
		}
	}
}