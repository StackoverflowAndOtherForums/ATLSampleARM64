// dllmain.h : Declaration of module class.

class CATLProject1Module : public ATL::CAtlDllModuleT< CATLProject1Module >
{
public :
	DECLARE_LIBID(LIBID_ATLProject1Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT1, "{7a67b5fa-4f33-4bb0-92dc-3bfa6c3cc09d}")
};

extern class CATLProject1Module _AtlModule;
