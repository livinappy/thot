/*
thot package for statistical machine translation
Copyright (C) 2013 Daniel Ortiz-Mart\'inez
 
This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public License
as published by the Free Software Foundation; either version 3
of the License, or (at your option) any later version.
 
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with this program; If not, see <http://www.gnu.org/licenses/>.
*/
 
#ifndef _ThotDecoderCommonVars_h
#define _ThotDecoderCommonVars_h

//--------------- Include files --------------------------------------

#if HAVE_CONFIG_H
#  include <thot_config.h>
#endif /* HAVE_CONFIG_H */

#include "SmtModelTypes.h"
#include "BasePbTransModel.h"
#include "BaseErrorCorrectionModel.h"
#include "BaseLogLinWeightUpdater.h"
#include "SwModelInfo.h"
#include "PhraseModelInfo.h"
#include "LangModelInfo.h"
#include <WgHandler.h>
//#include <casmacat/IWeightUpdateEngine.h>
//using namespace casmacat;

using namespace std;

//--------------- Classes --------------------------------------------

class ThotDecoderCommonVars
{
 public:
  SwModelInfo* swModelInfoPtr;
  PhraseModelInfo* phrModelInfoPtr;
  LangModelInfo* langModelInfoPtr;
  WgHandler* wgHandlerPtr;
  BasePbTransModel<CURR_MODEL_TYPE::Hypothesis>* smtModelPtr;
  BaseErrorCorrectionModel* ecModelPtr;
  bool curr_ecm_valid_for_wg;
  BaseLogLinWeightUpdater* llWeightUpdaterPtr;
};

#endif
