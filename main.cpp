//
//  main.cpp
//  CS372Spring2018HW1
//
//  Created by Chris Hartman on 1/31/18.
//  Copyright © 2018 Chris Hartman. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
#include <unistd.h>
#include <string>

int main() {
    cout << "Hello, World!\n";
    cout << "Professor Hartman doesn't need a homework grade.\n";

    cout << "Hello! I'm Rachel Crosley and I would love 20/20 on this assignment" << endl;
	unsigned long long int plzGiveMeThisGrade = 0;
	cout << "Hi everyone! I'm Tristan Van Cise and it would be awesome if I could get a " << --plzGiveMeThisGrade << "/20 on this assignment" << endl;

  write(1, "Hi! This is Ryan Stonebraker and it would be more amazing if I could get a ", 75);
  std::string btrGradeThnTristan = std::to_string(plzGiveMeThisGrade);
  cout << btrGradeThnTristan.substr(0, btrGradeThnTristan.size() - 1) << plzGiveMeThisGrade % 10 + 1 << "/20 on this assignment";

    cout << "\nWilliam " << "Horn " << "would " << "like " << "a " << " 20 " << "/" << " 20 " << "plz." << endl;

    cout << "Cameron K. Titus here, a 20/20 would be very nice thank you" << endl;

    cout << "Corey Gray: 20" << endl;

    cout << "Jake Conner: 20/20" << endl;

	cout << "Duane Shaffer: 20/20" << endl;

    return 0;
}
