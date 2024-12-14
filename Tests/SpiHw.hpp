#pragma once 

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Spi.hpp"
#include <gmock/gmock.h>

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

class SpiHw : public Spi<SpiHw>
{
    public:
        SpiHw () = default;
        ~SpiHw () = default;

        MOCK_METHOD2 (Send   , void (const uint8_t * const vData, const uint16_t vLen));
        MOCK_METHOD2 (Send   , void (const uint16_t * const vData, const uint16_t vLen));
        MOCK_METHOD1 (Receive, uint16_t (uint8_t * vData));
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
