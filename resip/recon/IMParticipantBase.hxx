#if !defined(IMParticipantBase_hxx)
#define IMParticipantBase_hxx

#include <memory>

namespace resip
{
class SipMessage;
class Contents;
}

namespace recon
{

/**
  This class represents base functionality for a participant that supports IMs. 

  Author: Scott Godin (sgodin AT SipSpectrum DOT com)
*/

class IMParticipantBase
{
public:
   IMParticipantBase(bool prependSenderInfoToIMs) : mPrependSenderInfoToIMs(prependSenderInfoToIMs) {}

   virtual void sendInstantMessage(std::unique_ptr<resip::Contents> contents) = 0;

   virtual void setPrependSenderInfoToIMs(bool value) { mPrependSenderInfoToIMs = value; }
   virtual bool getPrependSenderInfoToIMs() { return mPrependSenderInfoToIMs; }

protected:

   bool mPrependSenderInfoToIMs;
};

}

#endif


/* ====================================================================

 Copyright (c) 2021, SIP Spectrum, Inc http://www.sipspectrum.com
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are 
 met:

 1. Redistributions of source code must retain the above copyright 
    notice, this list of conditions and the following disclaimer. 

 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution. 

 3. Neither the name of Plantronics nor the names of its contributors 
    may be used to endorse or promote products derived from this 
    software without specific prior written permission. 

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
 A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
 THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 ==================================================================== */
