//
// Created by isilu on 16.04.2022.
//

#ifndef DEEPMINER_INPUT_H
#define DEEPMINER_INPUT_H


class Input {
public:
    static void invalidInputMessage();
    static bool validateCharacter(int input);
    static bool validateGameMode(int input);
    static int repeatInput(int input);
protected:
private:
};


#endif //DEEPMINER_INPUT_H
