class CGenocx : public CWnd
{
protected:
   DECLARE_DYNCREATE(CGenocx)
public:
   CLSID const &GetClsid()
   {
      static CLSID const clsid = {0x20DD1B9E, 0x87C4, 0x11D1, {0x8B, 0xE3, 0x0, 0x0, 0xF8, 0x75, 0x4D, 0xA1}};
      return clsid;
   }

   // This code is generated by the Control Wizard.
   // It wraps the call to CreateControl in the call to Create.
   virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
                       const RECT &rect, CWnd *pParentWnd, UINT nID,
                       CCreateContext *pContext = NULL)
   {
      UNREFERENCED_PARAMETER(pContext);
      UNREFERENCED_PARAMETER(lpszClassName);

      return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID);
   }

   // remainder of class declaration omitted...