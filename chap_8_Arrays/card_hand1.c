// Our next program illustrates both two-dimensional arrays and constant arrays. The program deals a random hand from a standard deck of playing cards. (In case you haven’t had time to play games recently, each card in a standard deck has a suit-clubs, diamonds, hearts, or spades—and a rank—two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, or ace.) We’ll have the user specify how many cards should be in the hand:
// Enter number of cards in hand: 5 Your hand: 7c 2s 5d as 2h

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_RANKS 13
#define NUM_SUITS 4

int main()
{
  int num_cards, rank, suit;
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};

  const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
  const char suit_code[] = {'c', 'd', 'h', 's'};

  srand((unsigned)time(NULL)); // Seed the random number generator with the current time to ensure different random sequences on each run

  // time(NULL) is a function call that returns the current calendar time as a time_t object. When NULL is passed as an argument, it means that the function should return the current time. This value is typically the number of seconds elapsed since 00:00:00 UTC on January 1, 1970 (also known as the Unix epoch).

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand: ");

  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;
    rank = rand() % NUM_RANKS;
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf("%c%c ", rank_code[rank], suit_code[suit]);
    }
  }

  return 0;
}