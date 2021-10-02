/*
 * Copyright (c) 2019, Intel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.

 */

//!
//! \file:   RepresentationElement.cpp
//! \brief:  Representation element class
//!

#include "RepresentationElement.h"

VCD_OMAF_BEGIN

RepresentationElement::RepresentationElement()
{
    m_segment = nullptr;
    m_audioChlCfg = nullptr;
    m_width = 0;
    m_height = 0;
    m_audioSamplingRate = 0;
    m_bandwidth = 0;
}

RepresentationElement::~RepresentationElement()
{
    m_id.clear();
    m_codecs.clear();
    m_mimeType.clear();
    m_width = 0;
    m_height = 0;
    m_audioSamplingRate = 0;
    m_frameRate.clear();
    m_sar.clear();
    m_startWithSAP.clear();
    m_qualityRanking.clear();
    m_bandwidth = 0;

    SAFE_DELETE(m_segment);
    SAFE_DELETE(m_audioChlCfg);
}


VCD_OMAF_END;
