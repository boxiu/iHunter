//******************************************************************************
/*++
  Copyright (C) 2012-2022 https://iMonitorSDK.com

  This file is part of iMonitor.
 
  iMonitor is free software, you can redistribute it and/or modify
  it under the GNU Affero General Public License Version 3, or any later version.
  
  For other usage or business cooperation, please contact admin@iMonitorSDK.com
  
--*/
//******************************************************************************
#include "stdafx.h"
#include "Language.h"
//******************************************************************************
static LANGID CurrentLangId = GetSystemDefaultLangID();
//******************************************************************************
void ChangeLanguage(LANGID LangId)
{
	CurrentLangId = LangId;
}
//******************************************************************************
LPCWSTR TranslateString(LPCWSTR Str)
{
	static std::map<CString, CString> translates = {
		{ L"CreateProcess", L"��������" },
		{ L"CreateRemoteThread", L"����Զ���߳�" },
		{ L"CreateNewFile", L"�½��ļ�" },
		{ L"RenameFile", L"�������ļ�" },
		{ L"ModifiyFile", L"�޸��ļ�" },
		{ L"ModifyRegistry", L"�޸�ע���" },
		{ L"AccessNetwork", L"��������" },
	};

	if (CurrentLangId != 2052)
		return Str;

	auto it = translates.find(Str);

	return it == translates.end() ? Str : it->second;
}
//******************************************************************************
