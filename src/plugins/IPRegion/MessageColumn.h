//******************************************************************************
/*++
  Copyright (C) 2012-2022 https://iMonitorSDK.com

  This file is part of iMonitor.
 
  iMonitor is free software, you can redistribute it and/or modify
  it under the GNU Affero General Public License Version 3, or any later version.
  
  For other usage or business cooperation, please contact admin@iMonitorSDK.com
  
--*/
//******************************************************************************
#ifndef __MessageColumn_h_abdffcdd_faa8_49ea_9776_3180c07a97c1__
#define __MessageColumn_h_abdffcdd_faa8_49ea_9776_3180c07a97c1__
//******************************************************************************
#include <MessageColumnBase.h>
//******************************************************************************
class cxMessageColumnRemoteIPRegion : public cxMessageColumnBase
{
public:
	cxMessageColumnRemoteIPRegion(void);

public:
	String GetString(IMessage* Message) override;
};
//******************************************************************************
const std::vector<IMessageColumn*>& GetColumns(void);
//******************************************************************************
#endif
