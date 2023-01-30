#pragma once

#include <dis6/EntityID.h>
#include <dis6/EventID.h>
#include <dis6/Vector3Float.h>
#include <dis6/SystemID.h>
#include <dis6/IffFundamentalData.h>
#include <dis6/DistributedEmissionsFamilyPdu.h>
#include <utils/DataStream.h>
#include <dis6/opendis6_export.h>


namespace DIS
{
// 5.3.7.4.1: Navigational and IFF PDU. COMPLETE

// Copyright (c) 2007-2009, MOVES Institute, Naval Postgraduate School. All rights reserved. 
//
// @author DMcG, jkg

class OPENDIS6_EXPORT IffAtcNavAidsLayer1Pdu : public DistributedEmissionsFamilyPdu
{
protected:
  /** ID of the entity that is the source of the emissions */
  EntityID _emittingEntityId; 

  /** Number generated by the issuing simulation to associate realted events. */
  EventID _eventID; 

  /** Location wrt entity. There is some ambugiuity in the standard here, but this is the order it is listed in the table. */
  Vector3Float _location; 

  /** System ID information */
  SystemID _systemID; 

  /** padding */
  unsigned short _pad2; 

  /** fundamental parameters */
  IffFundamentalData _fundamentalParameters; 


 public:
    IffAtcNavAidsLayer1Pdu();
    virtual ~IffAtcNavAidsLayer1Pdu();

    virtual void marshal(DataStream& dataStream) const;
    virtual void unmarshal(DataStream& dataStream);

    EntityID& getEmittingEntityId(); 
    const EntityID&  getEmittingEntityId() const; 
    void setEmittingEntityId(const EntityID    &pX);

    EventID& getEventID(); 
    const EventID&  getEventID() const; 
    void setEventID(const EventID    &pX);

    Vector3Float& getLocation(); 
    const Vector3Float&  getLocation() const; 
    void setLocation(const Vector3Float    &pX);

    SystemID& getSystemID(); 
    const SystemID&  getSystemID() const; 
    void setSystemID(const SystemID    &pX);

    unsigned short getPad2() const; 
    void setPad2(unsigned short pX); 

    IffFundamentalData& getFundamentalParameters(); 
    const IffFundamentalData&  getFundamentalParameters() const; 
    void setFundamentalParameters(const IffFundamentalData    &pX);


virtual int getMarshalledSize() const;

     bool operator  ==(const IffAtcNavAidsLayer1Pdu& rhs) const;
};
}

// Copyright (c) 1995-2009 held by the author(s).  All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
//  are met:
// 
//  * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// * Neither the names of the Naval Postgraduate School (NPS)
//  Modeling Virtual Environments and Simulation (MOVES) Institute
// (http://www.nps.edu and http://www.MovesInstitute.org)
// nor the names of its contributors may be used to endorse or
//  promote products derived from this software without specific
// prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// AS IS AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
