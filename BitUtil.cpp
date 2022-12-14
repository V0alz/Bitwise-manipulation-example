#include "BitUtil.h"

void BitUtil::ClearMask( int& flags, int mask )
{
    flags &= ~mask;
}

void BitUtil::SetMask( int& flags, int mask )
{
    flags |= mask;
}

bool BitUtil::MaskPresent( int& flags, int bitMask )
{
    return (flags & bitMask) ? true : false;
}

void BitUtil::ClearBit( int& flags, int bit )
{
    flags &= ~(1L << bit);
}

void BitUtil::SetBit( int& flags, int bit )
{
    flags |= (1L << bit);
}

void BitUtil::ToggleBit( int& flags, int bit )
{
    flags ^= (1L << bit);
}

bool BitUtil::BitPresent( int& flags, int bit )
{
    return (flags & (1L << bit)) ? true : false;
}

std::string BitUtil::GetBinary( int& flags, unsigned int length )
{
    std::string ret;
    size_t size;
    for( unsigned int c = 0; c < length; c++ )
    {
        size = ret.length();
        if( BitPresent( flags, c ) )
            ret.insert( 0, "1" );
        else
            ret.insert( 0, "0" );
    }

    return ret;
}
