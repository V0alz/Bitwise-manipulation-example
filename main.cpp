#include <iostream>
#include "BitUtil.h"

int registers = 69; // 1000101
int mask = 0b1000101; // the number 69 in bits to represent the original mask.

bool isRunning = true;
int firstNumber = 0;
int bit = 0, input = 0;

// Prototypes
void printOptions();
void handleInput( int& input, int& bit );

int main()
{
    std::cout << "Bit manipulation example\nV0alz\n\n";

    firstNumber = registers;

    printOptions();

    do
    {
        std::cout << "\nInput: ";
        std::cin >> input;

        if( input > 4 ) // bit values required after option 4
        {
            std::cout << "Bit: ";
            std::cin >> bit;
        }

        handleInput( input, bit );

    } while( isRunning );

    return 0;
}

void handleInput( int& input, int& bit )
{
    switch( input ) // possible to use enum to make this readable
    {
        case 0:
            printOptions();
            break;
        case 1:
            std::cout << "\nCurrent num: " << registers << std::endl;
            break;
        case 2:
            BitUtil::ClearMask( registers, mask );
            break;
        case 3:
            BitUtil::SetMask( registers, mask );
            break;
        case 4:
            std::cout << BitUtil::GetBinary( registers, 32 ) << std::endl; // show 32 of the bits.
            break;
        case 5:
            BitUtil::ToggleBit( registers, bit );
            break;
        case 6:
            BitUtil::SetBit( registers, bit );
            break;
        case 7:
            BitUtil::ClearBit( registers, bit );
            break;
        case 8:
            std::cout << "Bit state: " << BitUtil::BitPresent( registers, bit ) << std::endl;
            break;
        case -1:
            isRunning = false;
            break;
        default:
            std::cout << "Bad input." << std::endl;
            break;
    }
}

void printOptions()
{
    std::cout << "0 - Print this\n1 - Current number\n2 - Clear original bits (" << firstNumber << ")"
        << " - \n3 - Set original bits(" << firstNumber << ")"
        << "\n4 - Show bits\n5 - Toggle bit\n6 - Set bit\n7 - Reset bit\n8 - Check bit" << std::endl;
}
