#pragma once

#include <string>

class BitUtil
{
public:
	static void ClearMask( int& flags, int mask );
	static void SetMask( int& flags, int mask );
	static bool MaskPresent( int& flags, int bitMask );

	static void ClearBit( int& flags, int bit ); 
	static void SetBit( int& flags, int bit );
	static void ToggleBit( int& flags, int bit );
	static bool BitPresent( int& flags, int bit );

	static std::string GetBinary( int& flags, unsigned int length );
	
	// Add << >> examples
private:

};