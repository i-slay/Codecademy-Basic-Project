#include <iostream>

bool candy_wrapper = false;
int strength = 20;
bool is_drunk = false;

void no_actions() {
  std::cout << "\nYou closed your eyes and continued to lie there.\nGradually, the sounds of the forest became louder, the wind increased.\nYou were still lying on the ground, giving yourself completely to the dew-soaked ground.\n\nMinutes, hours, or maybe years passed.\nYou have already stopped doubting your choice, you have become one with nature, you ARE nature.\n\nYour decomposed body will serve as a lesson for other travelers.\n\n🌱  Ending 1/4 \"Unity with the forest\"" << std::endl;
}

void get_up() {
  std::cout << "\nYou slowly get to your feet but your head starts to hurt.\nLooking around you notice something shiny in the bushes.\nAs you get closer, you realize that this is a candy \"Golden Key\".\n\n\"What a luck!\"\n\nYou ate the candy and felt more confident.\n+10 to strength indicator.\n\nHaving gathered your strength, you begin to go on an adventure.\nAnd you did not forget to take the candy wrapper with you, of course." << std::endl;
  candy_wrapper = true;
  strength += 10;
}

void call_somebody(){
  std::cout << "\nYou try to feel for your phone but realize that you do not even have big enough pockets.\nAnd of course, the phone too.\n\nWell, you'll have to go out on your own.\nYou gathered your strength and decided to go on an adventure." << std::endl;
  strength -= 10;
}

void just_go() {
  std::cout << "\nWhat an unshakable belief in your own abilities!\n\n\"I'm starting to like you.\"\n+10 to strength indicator.\n\nHaving gathered your strength, you begin to go on an adventure." << std::endl;
  strength += 10;

}

void duel(){
  if (strength < 30) {
    std::cout << "\nYour bad knee prevents you from moving normally.\nAll your attempts to escape are in vain.\n\nThe Gingerbread Man approaches and delivers a lethal blow to the liver.\nThe last thing you remember before you die is the smell of candy.\n\n🍬  Ending 2/4 \"Weakness = sweetness\"" << std::endl;
  } else {
    std::cout << "\nThe gingerbread man desperately starts running at you, trying to poke you in the liver with a knife.\nBut you deftly dodge and strike back at his torso.\n\nIt splits into two parts.\nWho would have thought 🤔\n\nSatisfied with the victory, you continue your way." << std::endl;
  }
}

void hotel() {
  if (is_drunk) {
    std::cout << "\n...\n...\nYou have been dreaming for a long time after a noble drinking session.\nIn the dream, you go to the toilet and take off your pants.\n\nYou can't stand it anymore and start peeing under yourself.\n\nIn the morning, a woman manager finds you in pissed pants and on fumes.\nShe asks the ogre to throw you out into the street and you land unsuccessfully with your head on a stone.\n\n🥴 3/4 Ending \"Sweet Dreams are made of pee\"" << std::endl;
  } else {
    std::cout << "\n...\n...\nYou have a great night on a soft bed and sleep until the morning.\n\nTrue, this morning begins not at all in a tavern, but in your own bed.\n\n\"Was it just a dream?\"\nWho knows, but you clearly had a good time.\n\n🎉 4/4 Ending \"Back to Reality\"" << std::endl;
  }
}

int main() {

  std::string name;

  int choice1;
  int choice2;
  int choice3;

  std::cout << "Welcome, Traveler!\nPlease enter your name: ";
  std::cin >> name;

  std::cout << "\nNice to meet you, " << name << ".\n" << std::endl;

  std::cout << "✨ HERE BEGINS YOUR JOURNEY ✨\n" << std::endl;

  std::cout << "...\n...\nYou're finally awake.\nOpening your eyes slightly, you find yourself lying in a clearing in the forest. Your next actions:\n\n1) Stay down and see where it takes you\n2) Get up and try to figure out where you are\n3) Try to call the phone and get help\n4) Get up and walk in a random direction hoping for the best\n\nChoose wisely ✨" << std::endl;
  std::cin >> choice1;

  switch (choice1) {
    case 1:
      no_actions();
      return 0;
    case 2:
      get_up();
      break;
    case 3:
      call_somebody();
      break;
    case 4:
      just_go();
      break;
    default:
      std::cout << "\nSorry, your adventures ended due to the inability to make choices without spelling errors." << std::endl;
      return 0;
  }

  std::cout << "\n...\n...\nYou walked and walked and walked, nothing changed around." << std::endl;

  if (strength >= 30) {
    std::cout << "\nSuddenly a creature appears in front of you. Either a mirage or a real gingerbread man.\n\nHe asks if you found his candy in the forest?\n\n1) Yes\n2) No" << std::endl;
    std::cin >> choice2;
    if (candy_wrapper) {
      if (choice2 == 1) {
        std::cout << "\nYou told the truth.\nThe bitter bitter truth.\nThe gingerbread man challenges you to a duel ⚔️\n\nThe candy turned out to be a donor organ for his beloved wife, who had died five minutes earlier." << std::endl;
        duel();
      } else if (choice2 == 2) {
        std::cout << "\nYou lied.\nBut a moment's hesitation in the answer aroused the gingerbread man's suspicions and he asked to empty his pockets.\n\nYou reluctantly showed your pockets and a candy wrapper fell out.\n\nThe gingerbread man froze.\nNow he challenges you to a duel for lying.\nAs the candy turned out to be a donor organ for his beloved wife, who had died five minutes earlier." << std::endl;
        duel();
      } else {
        std::cout << "\nSorry, your adventures ended due to the inability to make choices without spelling errors." << std::endl;
        return 0;
      }
    } else {
      if (choice2 == 1) {
          std::cout << "\nFor some reason, you lied to the gingerbread man about the candy.\nHe asked to see it.\nBut you could not think of anything better than to start running.\n\nWithout thinking, the gingerbread man threw a stone at you, hitting you squarely in the knee.\n\nYou lose 10 strength and get into a fight with the gingerbread man." << std::endl;
          strength -= 10;
          duel();
          return 0;
        } else if (choice2 == 2) {
          std::cout << "\nYou told the truth.\nThe gingerbread man asked to see your pockets, he was very upset.\nYou showed your small pockets, there was nothing there.\n\nThe gingerbread man apologized and went in another direction and you continued on your way." << std::endl;
        } else {
          std::cout << "\nSorry, your adventures ended due to the inability to make choices without spelling errors." << std::endl;
          return 0;
        }
    }
  } else {
    std::cout << "\nYou have been walking through the forest for a very long time and you realize that you are tired.\nYou decide to stop and rest.\n\nSuddenly someone sneaks up behind you and stabs you in the liver.\nYou're too weak to resist.\nThe last thing you remember before you die is the smell of candy.\n\n🍬  Ending 2/4 \"Weakness = sweetness\"" <<std::endl;
    return 0;
  }

  std::cout << "\n...\n...\nContinuing your way you came across a tavern.\nYou walked for a long time and were very tired, so you decided to stop there.\n\nWhen you walked inside, you were given an unfriendly look.\nApproaching the reception desk, you decide to order a room and eat.\n\nWhile you're waiting, a drunken ogre approaches you and offers you a drink.\nWill you accept the offer?\n\n1) Yes\n2) No" << std::endl;
  std::cin >> choice3;

  if (choice3 == 1) {
    int drunk_points = 1;

    std::cout << "\nYou accepted the ogre's offer and now you can't refuse him." << std::endl;

    while (drunk_points != 6) {
      std::cout << "You had " << drunk_points << " drink(s)." << std::endl;
      drunk_points++;
    }

    is_drunk = true;
    std::cout << "\nYou're drunk.\n\nFinally, a woman comes out and ready to take your order. You don't feel like eating anymore, so you just go to your room." << std::endl;
    hotel();
    return 0;
  } else if (choice3 == 2) {
    std::cout << "\nThe ogre leaves without telling you anything.\n\nFinally, a woman comes out and ready to take your order.\nYou order your food and eat every last crumb with relish.\n\nAfter a hearty dinner, you head to your room." << std::endl;
    hotel();
  } else {
    std::cout << "\nSorry, your adventures ended due to the inability to make choices without spelling errors." << std::endl;
    return 0;
  }

  std::cout << "\n\n✨ CONGRATULATIONS, " << name << ", YOU ACTUALLY BEAT YOUR ADVENTURE! ✨" << std::endl;
  return 0;
}