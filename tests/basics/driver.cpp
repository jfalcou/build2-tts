//==================================================================================================
/**
  TTS - Tiny Test System
  Copyright : TTS Contributors & Maintainers
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#define TTS_MAIN
#include <tts/tts.hpp>

TTS_CASE( "Check that forced broken expectation fails" )
{
  TTS_EXPECT(true);
  TTS_EXPECT_NOT(false);
};