#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: mouth                        
//  action 1: the mouth speaks         
mouth.speak();                            
//  action 2: the mouth spits          
mouth.spits();                         
//  action 3: the mout yawns
mouth.yawn(); 
//  2)
//  Noun: ac 
//  action 1: the ac colds room
ac.cold();
//  action 2: the ac warms room
ac.warm();
//  action 3: the ac leaks water
ac.leakWater(); 
//  3)
//  Noun: tree
//  action 1: the tree produces oxygen
tree.produceOxygen();
//  action 2: the tree does photosynthesis
tree.doPhotosynthesis();
//  action 3: the tree grows
tree.grow();
//  4) 
//  Noun: router
//  action 1: the router provides WIFI
router.wifi();
//  action 2: the router provides Internet conexion
router.provideInternetConexion();
//  action 3: the router fires
router.fire();
//  5)
//  Noun: speaker
//  action 1: the speaker vibrates
speaker.vibrate();
//  action 2: the speaker resonates
speaker.resonate();
//  action 3: the speaker produces sound
speaker.produceSound();
//  6)
//  Noun: sun
//  action 1: the sun produces heat
sun.produceHeat();
//  action 2: the sun lights the earth
sun.lightEarth();
//  action 3: the sun implodes
sun.implode();
//  7) 
//  Noun: ice
//  action 1: the ice freezes water 
ice.freeze();
//  action 2: the ice melts
ice.melt();
//  action 3: the ice burns the skin 
ice.burn();
//  8)
//  Noun: cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat purrs
cat.purr();
//  action 3: the cat grooms itself
cat.groom();
//  9)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog bites
dog.bite();
//  action 3: the dog eats
dog.eat();
//  10)
//  Noun: apple
//  action 1: the apple falls from the tree
apple.fallFromTree();
//  action 2: the apple rots
apple.rot();
//  action 3: the apple becomes fertilizer
apple.becomesFertilizer();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
