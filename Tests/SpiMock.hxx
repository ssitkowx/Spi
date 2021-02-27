#pragma once 

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Spi.h"
#include "gmock/gmock.h"

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

class SpiMock final : public Spi
{
    public:
        SpiMock () = default;
        ~SpiMock () = default;

        MOCK_METHOD2 (Send   , void (const uint8_t * const v_data, const uint16_t v_len));
        MOCK_METHOD2 (Send   , void (const uint16_t * const v_data, const uint16_t v_len));
        MOCK_METHOD1 (Receive, uint16_t (uint8_t * v_data));
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////