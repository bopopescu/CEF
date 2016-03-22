// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/web_plugin_info_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefString CefWebPluginInfoCToCpp::GetName() {
  cef_web_plugin_info_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefWebPluginInfoCToCpp::GetPath() {
  cef_web_plugin_info_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_path))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_path(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefWebPluginInfoCToCpp::GetVersion() {
  cef_web_plugin_info_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_version))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_version(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefWebPluginInfoCToCpp::GetDescription() {
  cef_web_plugin_info_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_description))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_description(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}


// CONSTRUCTOR - Do not edit by hand.

CefWebPluginInfoCToCpp::CefWebPluginInfoCToCpp() {
}

template<> cef_web_plugin_info_t* CefCToCpp<CefWebPluginInfoCToCpp,
    CefWebPluginInfo, cef_web_plugin_info_t>::UnwrapDerived(
    CefWrapperType type, CefWebPluginInfo* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefWebPluginInfoCToCpp,
    CefWebPluginInfo, cef_web_plugin_info_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefWebPluginInfoCToCpp, CefWebPluginInfo,
    cef_web_plugin_info_t>::kWrapperType = WT_WEB_PLUGIN_INFO;
