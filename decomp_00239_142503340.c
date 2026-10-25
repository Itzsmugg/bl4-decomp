// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142503340 FUN_142503340 body=109 status=ok
// SIG undefined FUN_142503340(void)

undefined8 * FUN_142503340(undefined8 *param_1,longlong *param_2)

{
  void *_Src;
  
  if (*(char *)((longlong)param_1 + 0xc) != '\0') {
    FUN_1424da110(*param_1);
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  _Src = (void *)*param_2;
  if (_Src == (void *)((longlong)param_2 + 0xd)) {
    *param_1 = (void *)((longlong)param_1 + 0xd);
    memcpy((void *)((longlong)param_1 + 0xd),_Src,(longlong)(int)param_2[1]);
  }
  else {
    *param_1 = _Src;
    *param_2 = (longlong)param_2 + 0xd;
    *(undefined4 *)(param_2 + 1) = 0x28;
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(undefined4 *)(param_2 + 7) = 0;
  return param_1;
}



// FUNCTION 1425033b0 FUN_1425033b0 body=254 status=ok
// SIG undefined FUN_1425033b0(void)

ulonglong FUN_1425033b0(undefined8 *param_1,int param_2,int param_3,int *param_4)

{
  void *pvVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  
  if (*param_4 < 1) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (param_2 <= *(int *)(param_1 + 1)) goto LAB_142503491;
    iVar2 = *(int *)(param_1 + 1) + param_2;
    if (param_3 != 0) {
      iVar2 = param_3;
    }
    if ((param_2 < iVar2) && (0 < iVar2)) {
      iVar4 = *(int *)(param_1 + 7);
      pvVar1 = (void *)FUN_1424da030(iVar2);
      if (pvVar1 == (void *)0x0) goto LAB_142503442;
      if (-1 < iVar4) {
        iVar4 = iVar4 + 1;
        if (*(int *)(param_1 + 1) < iVar4) {
          iVar4 = *(int *)(param_1 + 1);
        }
        if (iVar2 <= iVar4) {
          iVar4 = iVar2;
        }
        memcpy(pvVar1,(void *)*param_1,(longlong)iVar4);
      }
      if (*(char *)((longlong)param_1 + 0xc) != '\0') {
        FUN_1424da110(*param_1);
      }
      *param_1 = pvVar1;
      *(int *)(param_1 + 1) = iVar2;
LAB_14250348d:
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      goto LAB_142503491;
    }
LAB_142503442:
    if (0 < param_2) {
      iVar2 = *(int *)(param_1 + 7);
      pvVar1 = (void *)FUN_1424da030(param_2);
      if (pvVar1 != (void *)0x0) {
        if (-1 < iVar2) {
          iVar2 = iVar2 + 1;
          if (*(int *)(param_1 + 1) < iVar2) {
            iVar2 = *(int *)(param_1 + 1);
          }
          if (param_2 <= iVar2) {
            iVar2 = param_2;
          }
          memcpy(pvVar1,(void *)*param_1,(longlong)iVar2);
        }
        if (*(char *)((longlong)param_1 + 0xc) != '\0') {
          FUN_1424da110(*param_1);
        }
        *param_1 = pvVar1;
        *(int *)(param_1 + 1) = param_2;
        goto LAB_14250348d;
      }
    }
    *param_4 = 7;
  }
  uVar3 = 0;
LAB_142503491:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1425034b0 FUN_1425034b0 body=28 status=ok
// SIG undefined FUN_1425034b0(void)

void FUN_1425034b0(longlong *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < (int)param_2) {
    uVar1 = param_2;
  }
  if ((int)uVar1 < (int)param_1[7]) {
    *(uint *)(param_1 + 7) = uVar1;
    *(undefined1 *)(*param_1 + (ulonglong)uVar1) = 0;
  }
  return;
}



// FUNCTION 1425034d0 FUN_1425034d0 body=69 status=ok
// SIG undefined FUN_1425034d0(void)

longlong * FUN_1425034d0(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1425033b0(param_1,(int)param_1[7] + 2,0,param_3);
  if (cVar2 != '\0') {
    lVar1 = param_1[7];
    *(int *)(param_1 + 7) = (int)lVar1 + 1;
    *(undefined1 *)(*param_1 + (longlong)(int)lVar1) = param_2;
    *(undefined1 *)(*param_1 + (longlong)(int)param_1[7]) = 0;
  }
  return param_1;
}



// FUNCTION 142503520 FUN_142503520 body=301 status=ok
// SIG undefined FUN_142503520(void)

ulonglong * FUN_142503520(ulonglong *param_1,char *param_2,uint param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 local_78;
  char local_6c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    if (((int)param_3 < -1) || ((param_2 == (char *)0x0 && (param_3 != 0)))) {
      *param_4 = 1;
    }
    else {
      if ((int)param_3 < 0) {
        sVar4 = strlen(param_2);
        param_3 = (uint)sVar4;
      }
      if (0 < (int)param_3) {
        pcVar2 = (char *)*param_1;
        iVar1 = (int)param_1[7];
        if (pcVar2 + iVar1 == param_2) {
          if ((int)param_3 < (int)param_1[1] - iVar1) {
            *(uint *)(param_1 + 7) = param_3 + iVar1;
            pcVar2[(int)(param_3 + iVar1)] = '\0';
          }
          else {
            *param_4 = 5;
          }
        }
        else if (((param_2 < pcVar2) || (pcVar2 + iVar1 <= param_2)) ||
                ((int)param_3 < (int)param_1[1] - iVar1)) {
          cVar3 = FUN_1425033b0(param_1,param_3 + iVar1 + 1,0,param_4);
          if (cVar3 != '\0') {
            memcpy((void *)((longlong)(int)param_1[7] + *param_1),param_2,(ulonglong)param_3);
            lVar5 = (longlong)(int)param_3 + (longlong)(int)param_1[7];
            *(int *)(param_1 + 7) = (int)lVar5;
            *(undefined1 *)(*param_1 + lVar5) = 0;
          }
        }
        else {
          FUN_1425036a0(&local_78,param_2,param_3,param_4);
          param_1 = (ulonglong *)FUN_142503690(param_1,&local_78,param_4);
          if (local_6c != '\0') {
            FUN_1424da110(local_78);
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142503650 Unwind@142503650 body=50 status=ok
// SIG undefined Unwind@142503650(void)

void Unwind_142503650(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 142503690 FUN_142503690 body=15 status=ok
// SIG undefined FUN_142503690(void)

void FUN_142503690(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_142503520(param_1,*param_2,*(undefined4 *)(param_2 + 7),param_3);
  return;
}



// FUNCTION 1425036a0 FUN_1425036a0 body=64 status=ok
// SIG undefined FUN_1425036a0(void)

longlong * FUN_1425036a0(longlong *param_1)

{
  *param_1 = (longlong)param_1 + 0xd;
  *(undefined4 *)(param_1 + 1) = 0x28;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_142503520();
  return param_1;
}



// FUNCTION 1425036e0 Unwind@1425036e0 body=43 status=ok
// SIG undefined Unwind@1425036e0(void)

void Unwind_1425036e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x20) + 0xc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 142503710 FUN_142503710 body=97 status=ok
// SIG undefined FUN_142503710(void)

longlong FUN_142503710(longlong *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  
  if (*param_5 < 1) {
    uVar1 = *(uint *)(param_1 + 7);
    iVar4 = ~uVar1 + (int)param_1[1];
    if (iVar4 < param_2) {
      cVar2 = FUN_1425033b0(param_1,param_2 + uVar1 + 1,param_3 + uVar1 + 1);
      if (cVar2 == '\0') goto LAB_142503724;
      *param_4 = ~*(uint *)(param_1 + 7) + (int)param_1[1];
    }
    else {
      *param_4 = iVar4;
    }
    lVar3 = (longlong)(int)param_1[7] + *param_1;
  }
  else {
LAB_142503724:
    *param_4 = 0;
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142503780 FUN_142503780 body=182 status=ok
// SIG undefined FUN_142503780(void)

longlong * FUN_142503780(longlong *param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar5 = (int)(short)uVar1 >> 5;
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      param_2 = *(longlong *)(param_2 + 0x18);
      iVar2 = *param_3;
    }
    else {
      param_2 = param_2 + 10;
      iVar2 = *param_3;
    }
  }
  else {
    param_2 = 0;
    iVar2 = *param_3;
  }
  if (iVar2 < 1) {
    cVar3 = FUN_14250aed0(param_2,iVar5);
    if (cVar3 == '\0') {
      *param_3 = 0x1a;
    }
    else {
      cVar3 = FUN_1425033b0(param_1,iVar5 + (int)param_1[7] + 1,0,param_3);
      if (cVar3 != '\0') {
        FUN_14250ae10(param_2,(longlong)(int)param_1[7] + *param_1,iVar5);
        lVar4 = (longlong)iVar5 + (longlong)(int)param_1[7];
        *(int *)(param_1 + 7) = (int)lVar4;
        *(undefined1 *)(*param_1 + lVar4) = 0;
      }
    }
  }
  return param_1;
}



// FUNCTION 142503840 FUN_142503840 body=100 status=ok
// SIG undefined FUN_142503840(void)

longlong * FUN_142503840(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  if ((((*param_2 < 1) && (iVar1 = (int)param_1[7], 0 < iVar1)) &&
      (cVar3 = *(char *)(*param_1 + (ulonglong)(iVar1 - 1)), cVar3 != '/')) && (cVar3 != '\\')) {
    cVar3 = FUN_1425033b0(param_1,iVar1 + 2,0,param_2);
    if (cVar3 != '\0') {
      lVar2 = param_1[7];
      *(int *)(param_1 + 7) = (int)lVar2 + 1;
      *(undefined1 *)(*param_1 + (longlong)(int)lVar2) = 0x5c;
      *(undefined1 *)(*param_1 + (longlong)(int)param_1[7]) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1425038b0 FUN_1425038b0 body=40 status=ok
// SIG undefined FUN_1425038b0(void)

undefined8 * FUN_1425038b0(undefined8 *param_1,char *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  
  *param_1 = param_2;
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    uVar1 = (undefined4)sVar2;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 1425038e0 FUN_1425038e0 body=13 status=ok
// SIG undefined FUN_1425038e0(void)

bool FUN_1425038e0(byte param_1)

{
  return (byte)((param_1 & 0xdf) + 0xbf) < 0x1a;
}



// FUNCTION 1425038f0 FUN_1425038f0 body=18 status=ok
// SIG undefined FUN_1425038f0(void)

char FUN_1425038f0(char param_1)

{
  char cVar1;
  
  cVar1 = param_1 + -0x20;
  if (0x19 < (byte)(param_1 + 0x9fU)) {
    cVar1 = param_1;
  }
  return cVar1;
}



// FUNCTION 142503910 FUN_142503910 body=18 status=ok
// SIG undefined FUN_142503910(void)

char FUN_142503910(char param_1)

{
  char cVar1;
  
  cVar1 = param_1 + ' ';
  if (0x19 < (byte)(param_1 + 0xbfU)) {
    cVar1 = param_1;
  }
  return cVar1;
}



// FUNCTION 142503930 FUN_142503930 body=51 status=ok
// SIG undefined FUN_142503930(void)

void FUN_142503930(char *param_1)

{
  char cVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *param_1;
      cVar2 = cVar1 + ' ';
      if (0x19 < (byte)(cVar1 + 0xbfU)) {
        cVar2 = cVar1;
      }
      *param_1 = cVar2;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  return;
}



// FUNCTION 142503970 FUN_142503970 body=51 status=ok
// SIG undefined FUN_142503970(void)

void FUN_142503970(char *param_1)

{
  char cVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *param_1;
      cVar2 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar2 = cVar1;
      }
      *param_1 = cVar2;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  return;
}



// FUNCTION 1425039b0 FUN_1425039b0 body=133 status=ok
// SIG undefined FUN_1425039b0(void)

void FUN_1425039b0(undefined1 *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  char *_Source;
  longlong lVar6;
  undefined1 auStack_68 [60];
  char local_2c [12];
  ulonglong local_20;
  
  uVar5 = (ulonglong)param_2;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = 0;
  if (((int)param_2 < 0) && (param_3 == 10)) {
    uVar5 = (ulonglong)-param_2;
    *param_1 = 0x2d;
    lVar6 = 1;
  }
  _Source = local_2c + 1;
  local_2c[1] = 0;
  do {
    uVar4 = (uint)uVar5;
    uVar1 = uVar5 % (ulonglong)param_3;
    cVar2 = (char)uVar1;
    cVar3 = cVar2 + '0';
    if (9 < ((uint)uVar1 & 0xfe)) {
      cVar3 = cVar2 + '7';
    }
    _Source[-1] = cVar3;
    _Source = _Source + -1;
    uVar5 = uVar5 / param_3;
  } while (param_3 <= uVar4);
  strcpy(param_1 + lVar6,_Source);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 142503a40 FUN_142503a40 body=135 status=ok
// SIG undefined FUN_142503a40(void)

int FUN_142503a40(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  
  if (param_1 == (byte *)0x0) {
    bVar6 = param_2 != (byte *)0x0;
  }
  else {
    if (param_2 == (byte *)0x0) {
      return 1;
    }
    bVar1 = *param_1;
    bVar5 = *param_2;
    if (bVar1 != 0) {
      lVar4 = 1;
      do {
        if (bVar5 == 0) {
          return 1;
        }
        uVar2 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          uVar2 = (uint)bVar1;
        }
        bVar1 = bVar5 + 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar1 = bVar5;
        }
        iVar3 = (uVar2 & 0xff) - (uint)bVar1;
        if (iVar3 != 0) {
          return iVar3;
        }
        bVar1 = param_1[lVar4];
        bVar5 = param_2[lVar4];
        lVar4 = lVar4 + 1;
      } while (bVar1 != 0);
    }
    bVar6 = bVar5 != 0;
  }
  return -(uint)bVar6;
}



// FUNCTION 142503ad0 FUN_142503ad0 body=147 status=ok
// SIG undefined FUN_142503ad0(void)

int FUN_142503ad0(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  
  if (param_1 == 0) {
    iVar3 = -(uint)(param_2 != 0);
  }
  else if (param_2 == 0) {
LAB_142503b53:
    iVar3 = 1;
  }
  else {
    if (param_3 != 0) {
      lVar4 = 0;
      do {
        bVar1 = *(byte *)(param_1 + lVar4);
        bVar2 = *(byte *)(param_2 + lVar4);
        if (bVar1 == 0) {
          return -(uint)(bVar2 != 0);
        }
        if (bVar2 == 0) goto LAB_142503b53;
        bVar5 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        bVar1 = bVar2 + 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((uint)bVar5 - (uint)bVar1 != 0) {
          return (uint)bVar5 - (uint)bVar1;
        }
        lVar4 = lVar4 + 1;
      } while (param_3 != (int)lVar4);
    }
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 142503b70 FUN_142503b70 body=62 status=ok
// SIG undefined FUN_142503b70(void)

void * FUN_142503b70(char *param_1)

{
  size_t sVar1;
  void *_Dst;
  
  sVar1 = strlen(param_1);
  _Dst = (void *)FUN_1424da030(sVar1 + 1);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,sVar1 + 1);
  }
  return _Dst;
}



// FUNCTION 142503bb0 FUN_142503bb0 body=961 status=ok
// SIG undefined FUN_142503bb0(void)

wchar_t * FUN_142503bb0(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  longlong lVar1;
  wchar_t wVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t wVar8;
  wchar_t wVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  
  if (param_3 == (wchar_t *)0x0) {
    return param_1;
  }
  if ((int)param_4 < -1) {
    return param_1;
  }
  if (param_1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  if ((int)param_2 < -1) {
    return (wchar_t *)0x0;
  }
  if ((int)(param_4 & param_2) < 0) {
    wVar2 = *param_3;
    if (wVar2 == L'\0') {
      return param_1;
    }
    wVar9 = param_3[1];
    wVar8 = *param_1;
    if (((wVar2 & 0xf800U) == 0xd800) || (wVar9 != L'\0')) {
      if (wVar8 != L'\0') {
        pwVar4 = param_1;
        do {
          pwVar7 = pwVar4 + 1;
          if (wVar8 == wVar2) {
            pwVar10 = pwVar7;
            if (wVar9 != L'\0') {
              lVar6 = 2;
              wVar8 = wVar9;
              do {
                if (*(wchar_t *)((longlong)pwVar4 + lVar6) == L'\0') {
                  return (wchar_t *)0x0;
                }
                if (*(wchar_t *)((longlong)pwVar4 + lVar6) != wVar8) goto LAB_142503dc9;
                wVar8 = *(wchar_t *)((longlong)param_3 + lVar6 + 2);
                lVar6 = lVar6 + 2;
              } while (wVar8 != L'\0');
              pwVar10 = (wchar_t *)(lVar6 + (longlong)pwVar4);
            }
            if ((((wVar2 & 0xfc00U) != 0xdc00) || (pwVar4 == param_1)) ||
               ((pwVar4[-1] & 0xfc00U) != 0xd800)) {
              if ((pwVar10[-1] & 0xfc00U) != 0xd800) {
                return pwVar4;
              }
              if ((*pwVar10 & 0xfc00U) != 0xdc00) {
                return pwVar4;
              }
            }
          }
LAB_142503dc9:
          wVar8 = *pwVar7;
          pwVar4 = pwVar7;
          if (wVar8 == L'\0') {
            return (wchar_t *)0x0;
          }
        } while( true );
      }
    }
    else {
      while( true ) {
        if (wVar8 == wVar2) {
          return param_1;
        }
        if (wVar8 == L'\0') break;
        wVar8 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
  }
  else {
    if ((int)param_4 < 0) {
      sVar3 = wcslen(param_3);
      param_4 = (uint)sVar3;
    }
    if (param_4 == 0) {
      return param_1;
    }
    wVar2 = *param_3;
    iVar5 = param_4 - 1;
    if ((iVar5 == 0) && ((wVar2 & 0xf800U) != 0xd800)) {
      if ((int)param_2 < 0) {
        pwVar4 = (wchar_t *)FUN_142503f80(param_1);
        return pwVar4;
      }
      if (param_2 != 0) {
        lVar6 = (ulonglong)param_2 * 2;
        do {
          if (*param_1 == wVar2) {
            return param_1;
          }
          param_1 = param_1 + 1;
          lVar6 = lVar6 + -2;
        } while (lVar6 != 0);
        return (wchar_t *)0x0;
      }
    }
    else {
      lVar6 = (longlong)iVar5;
      if ((int)param_2 < 0) {
        wVar9 = *param_1;
        if (wVar9 != L'\0') {
          pwVar4 = param_1;
          do {
            pwVar7 = pwVar4 + 1;
            if (wVar9 == wVar2) {
              pwVar10 = pwVar7;
              if (iVar5 != 0) {
                lVar11 = 2;
                do {
                  if (*(short *)((longlong)pwVar4 + lVar11) == 0) {
                    return (wchar_t *)0x0;
                  }
                  if (*(short *)((longlong)pwVar4 + lVar11) !=
                      *(short *)((longlong)param_3 + lVar11)) goto LAB_142503ebc;
                  lVar1 = lVar6 * -2 + lVar11;
                  lVar11 = lVar11 + 2;
                } while (lVar1 != 0);
                pwVar10 = (wchar_t *)(lVar11 + (longlong)pwVar4);
              }
              if (((pwVar4 == param_1) || ((wVar2 & 0xfc00U) != 0xdc00)) ||
                 ((pwVar4[-1] & 0xfc00U) != 0xd800)) {
                if ((pwVar10[-1] & 0xfc00U) != 0xd800) {
                  return pwVar4;
                }
                if ((*pwVar10 & 0xfc00U) != 0xdc00) {
                  return pwVar4;
                }
              }
            }
LAB_142503ebc:
            wVar9 = *pwVar7;
            pwVar4 = pwVar7;
            if (wVar9 == L'\0') {
              return (wchar_t *)0x0;
            }
          } while( true );
        }
      }
      else if ((int)param_4 <= (int)param_2) {
        pwVar4 = param_1 + param_2;
        if (pwVar4 + -lVar6 != param_1) {
          pwVar7 = param_1;
          do {
            pwVar10 = pwVar7 + 1;
            if (*pwVar7 == wVar2) {
              pwVar12 = pwVar10;
              if (iVar5 != 0) {
                lVar11 = 2;
                do {
                  if (*(short *)((longlong)pwVar7 + lVar11) !=
                      *(short *)((longlong)param_3 + lVar11)) goto LAB_142503d00;
                  lVar1 = lVar6 * -2 + lVar11;
                  lVar11 = lVar11 + 2;
                } while (lVar1 != 0);
                pwVar12 = (wchar_t *)(lVar11 + (longlong)pwVar7);
              }
              if ((((wVar2 & 0xfc00U) != 0xdc00) || (pwVar7 == param_1)) ||
                 ((pwVar7[-1] & 0xfc00U) != 0xd800)) {
                if (pwVar7 == pwVar4) {
                  return pwVar7;
                }
                if ((pwVar12[-1] & 0xfc00U) != 0xd800) {
                  return pwVar7;
                }
                if ((*pwVar12 & 0xfc00U) != 0xdc00) {
                  return pwVar7;
                }
              }
            }
LAB_142503d00:
            pwVar7 = pwVar10;
            if (pwVar10 == pwVar4 + -lVar6) {
              return (wchar_t *)0x0;
            }
          } while( true );
        }
      }
    }
  }
  return (wchar_t *)0x0;
}



// FUNCTION 142503f80 FUN_142503f80 body=203 status=ok
// SIG undefined FUN_142503f80(void)

ushort * FUN_142503f80(ushort *param_1,ushort param_2)

{
  longlong lVar1;
  ushort *puVar2;
  ushort uVar3;
  
  if ((param_2 & 0xf800) == 0xd800) {
    if ((param_1 != (ushort *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
      lVar1 = 0;
      puVar2 = param_1;
      do {
        if (uVar3 == param_2) {
          if ((lVar1 != 0) && ((param_2 & 0xfc00) == 0xdc00)) {
            if ((*(ushort *)((longlong)param_1 + lVar1 + -2) & 0xfc00) != 0xd800) {
              return puVar2;
            }
            goto LAB_142503fe6;
          }
          if ((param_2 & 0xfc00) != 0xd800) {
            return (ushort *)((longlong)param_1 + lVar1);
          }
          uVar3 = *(ushort *)((longlong)param_1 + lVar1 + 2);
          if ((uVar3 & 0xfc00) != 0xdc00) {
            return puVar2;
          }
        }
        else {
LAB_142503fe6:
          uVar3 = *(ushort *)((longlong)param_1 + lVar1 + 2);
        }
        puVar2 = puVar2 + 1;
        lVar1 = lVar1 + 2;
      } while (uVar3 != 0);
    }
  }
  else {
    uVar3 = *param_1;
    while( true ) {
      if (uVar3 == param_2) {
        return param_1;
      }
      if (uVar3 == 0) break;
      uVar3 = param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return (ushort *)0x0;
}



// FUNCTION 142504060 wcslen body=7 status=ok
// SIG size_t wcslen(wchar_t * _Str)

size_t __cdecl wcslen(wchar_t *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142504060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = wcslen(_Str);
  return sVar1;
}



// FUNCTION 142504070 FUN_142504070 body=126 status=ok
// SIG undefined FUN_142504070(void)

void FUN_142504070(ushort *param_1,ushort param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [38];
  ushort local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = param_2;
  if (0 < (int)param_3) {
    if ((param_2 & 0xf800) == 0xd800) {
      FUN_142503bb0(param_1,param_3,&local_12,1);
    }
    else {
      lVar1 = (ulonglong)param_3 * 2;
      do {
        if (*param_1 == param_2) break;
        param_1 = param_1 + 1;
        lVar1 = lVar1 + -2;
      } while (lVar1 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142504100 FUN_142504100 body=19 status=ok
// SIG undefined FUN_142504100(void)

void FUN_142504100(undefined8 param_1,undefined8 param_2)

{
  FUN_142503bb0(param_1,0xffffffff,param_2,0xffffffff);
  return;
}



// FUNCTION 142504120 FUN_142504120 body=458 status=ok
// SIG undefined FUN_142504120(void)

wchar_t * FUN_142504120(wchar_t *param_1,uint param_2,wchar_t *param_3,int param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  pwVar2 = param_1;
  if ((((param_3 != (wchar_t *)0x0) && (-2 < param_4)) &&
      (pwVar2 = (wchar_t *)0x0, param_1 != (wchar_t *)0x0)) && (-2 < (int)param_2)) {
    if (param_4 < 0) {
      sVar3 = wcslen(param_3);
      param_4 = (int)sVar3;
    }
    pwVar2 = param_1;
    if (param_4 != 0) {
      lVar9 = (longlong)param_4;
      wVar1 = param_3[lVar9 + -1];
      uVar7 = param_4 - 1;
      if ((uVar7 == 0) && ((wVar1 & 0xf800U) != 0xd800)) {
        if ((int)param_2 < 0) {
          pwVar2 = (wchar_t *)0x0;
          do {
            wVar5 = *param_1;
            if (wVar5 == wVar1) {
              pwVar2 = param_1;
            }
            param_1 = param_1 + 1;
          } while (wVar5 != L'\0');
          return pwVar2;
        }
        if (param_2 != 0) {
          lVar9 = (ulonglong)param_2 * 2;
          do {
            if (*(wchar_t *)((longlong)param_1 + lVar9 + -2) == wVar1) {
              return (wchar_t *)((longlong)param_1 + lVar9 + -2);
            }
            lVar9 = lVar9 + -2;
          } while (lVar9 != 0);
          return (wchar_t *)0x0;
        }
      }
      else {
        if ((int)param_2 < 0) {
          sVar3 = wcslen(param_1);
          param_2 = (uint)sVar3;
        }
        if ((param_4 <= (int)param_2) && (uVar7 != param_2)) {
          pwVar2 = param_1 + (int)param_2;
          do {
            pwVar6 = pwVar2 + -1;
            if (pwVar2[-1] == wVar1) {
              pwVar4 = pwVar6;
              lVar8 = lVar9 * 2;
              wVar5 = wVar1;
              if (param_3 + lVar9 + -1 != param_3) {
                do {
                  wVar5 = pwVar4[-1];
                  if (wVar5 != *(wchar_t *)((longlong)param_3 + lVar8 + -4)) goto LAB_142504240;
                  pwVar4 = pwVar4 + -1;
                  lVar8 = lVar8 + -2;
                } while (lVar8 != 2);
              }
              if (((pwVar4 == param_1) || ((wVar5 & 0xfc00U) != 0xdc00)) ||
                 ((pwVar4[-1] & 0xfc00U) != 0xd800)) {
                if ((wVar1 & 0xfc00U) != 0xd800) {
                  return pwVar4;
                }
                if (pwVar4 == param_1 + (int)param_2) {
                  return pwVar4;
                }
                if ((*pwVar2 & 0xfc00U) != 0xdc00) {
                  return pwVar4;
                }
              }
            }
LAB_142504240:
            pwVar2 = pwVar6;
            if (param_1 + (int)uVar7 == pwVar6) {
              return (wchar_t *)0x0;
            }
          } while( true );
        }
      }
      pwVar2 = (wchar_t *)0x0;
    }
  }
  return pwVar2;
}



// FUNCTION 142504300 FUN_142504300 body=132 status=ok
// SIG undefined FUN_142504300(void)

void FUN_142504300(longlong param_1,ushort param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [38];
  ushort local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = param_2;
  if (0 < (int)param_3) {
    if ((param_2 & 0xf800) == 0xd800) {
      FUN_142504120(param_1,param_3,&local_12,1);
    }
    else {
      lVar1 = (ulonglong)param_3 * 2;
      do {
        if (*(ushort *)(param_1 + -2 + lVar1) == param_2) break;
        lVar1 = lVar1 + -2;
      } while (lVar1 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142504390 FUN_142504390 body=47 status=ok
// SIG undefined FUN_142504390(void)

int FUN_142504390(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    uVar2 = *(ushort *)(param_1 + lVar3);
    puVar1 = (ushort *)(param_2 + lVar3);
    if (uVar2 == 0) break;
    lVar3 = lVar3 + 2;
  } while (uVar2 == *puVar1);
  return (uint)uVar2 - (uint)*puVar1;
}



// FUNCTION 1425043c0 FUN_1425043c0 body=644 status=ok
// SIG undefined FUN_1425043c0(void)

uint FUN_1425043c0(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4,char param_5,
                  char param_6)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  uint uVar4;
  size_t sVar5;
  wchar_t wVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t wVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  
  pwVar8 = param_3;
  pwVar11 = param_1;
  if ((int)(param_4 & param_2) < 0) {
    if (param_1 == param_3) {
      return 0;
    }
    wVar6 = *param_1;
    wVar10 = *param_3;
    if (wVar6 == wVar10) {
      do {
        if (wVar6 == L'\0') {
          return 0;
        }
        wVar6 = pwVar11[1];
        pwVar11 = pwVar11 + 1;
        wVar10 = pwVar8[1];
        pwVar8 = pwVar8 + 1;
      } while (wVar6 == wVar10);
    }
    pwVar2 = (wchar_t *)0x0;
    pwVar1 = (wchar_t *)0x0;
  }
  else {
    if (param_5 == '\0') {
      if ((int)param_2 < 0) {
        sVar5 = wcslen(param_1);
        param_2 = (uint)sVar5;
      }
      if ((int)param_4 < 0) {
        sVar5 = wcslen(param_3);
        param_4 = (uint)sVar5;
      }
      uVar7 = param_4;
      if ((int)param_2 < (int)param_4) {
        uVar7 = param_2;
      }
      uVar4 = 0xffffffff;
      if ((int)param_4 <= (int)param_2) {
        uVar4 = (uint)(param_2 != param_4);
      }
      if (param_1 == param_3) {
        return uVar4;
      }
      if (uVar7 == 0) {
        return uVar4;
      }
      lVar12 = (longlong)(int)uVar7 * 2;
      while( true ) {
        wVar6 = *pwVar11;
        wVar10 = *pwVar8;
        if (wVar6 != wVar10) break;
        pwVar11 = pwVar11 + 1;
        pwVar8 = pwVar8 + 1;
        lVar12 = lVar12 + -2;
        if (lVar12 == 0) {
          return uVar4;
        }
      }
      lVar12 = (longlong)(int)param_2;
      lVar3 = (longlong)(int)param_4;
    }
    else {
      if (param_1 == param_3) {
        return 0;
      }
      if (param_2 == 0) {
        return 0;
      }
      lVar12 = (longlong)(int)param_2;
      lVar9 = lVar12 * 2;
      while( true ) {
        lVar9 = lVar9 + -2;
        wVar6 = *pwVar11;
        wVar10 = *pwVar8;
        lVar3 = lVar12;
        if (wVar6 != wVar10) break;
        if (wVar6 == L'\0') {
          return 0;
        }
        pwVar11 = pwVar11 + 1;
        pwVar8 = pwVar8 + 1;
        if (lVar9 == 0) {
          return 0;
        }
      }
    }
    pwVar2 = param_3 + lVar3;
    pwVar1 = param_1 + lVar12;
  }
  if (((param_6 != '\0') && (0xd7ff < (ushort)wVar6)) && (0xd7ff < (ushort)wVar10)) {
    if ((((0xdbff < (ushort)wVar6) || (pwVar11 + 1 == pwVar1)) || ((pwVar11[1] & 0xfc00U) != 0xdc00)
        ) && (((pwVar11 == param_1 || ((wVar6 & 0xfc00U) != 0xdc00)) ||
              ((pwVar11[-1] & 0xfc00U) != 0xd800)))) {
      wVar6 = wVar6 + L'\xd800';
    }
    if ((((0xdbff < (ushort)wVar10) || (pwVar8 + 1 == pwVar2)) || ((pwVar8[1] & 0xfc00U) != 0xdc00))
       && ((((wVar10 & 0xfc00U) != 0xdc00 || (pwVar8 == param_3)) ||
           ((pwVar8[-1] & 0xfc00U) != 0xd800)))) {
      wVar10 = wVar10 + L'\xd800';
    }
  }
  return (uint)(ushort)wVar6 - (uint)(ushort)wVar10;
}



// FUNCTION 142504650 FUN_142504650 body=53 status=ok
// SIG undefined FUN_142504650(void)

undefined8 FUN_142504650(longlong param_1,int param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((((param_1 == 0) || (param_2 < -1)) || (param_3 == 0)) || (param_4 < -1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1425043c0();
  }
  return uVar1;
}



// FUNCTION 142504690 FUN_142504690 body=85 status=ok
// SIG undefined FUN_142504690(void)

int FUN_142504690(ushort *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 < 1) {
    return 0;
  }
  iVar1 = (uint)*param_1 - (uint)*param_2;
  if ((*param_1 != 0) && (iVar1 == 0)) {
    lVar2 = 1;
    do {
      if (param_3 == (int)lVar2) {
        return 0;
      }
      iVar1 = (uint)param_1[lVar2] - (uint)param_2[lVar2];
    } while ((param_1[lVar2] != 0) && (lVar2 = lVar2 + 1, iVar1 == 0));
  }
  return iVar1;
}



// FUNCTION 1425046f0 FUN_1425046f0 body=37 status=ok
// SIG undefined FUN_1425046f0(void)

void FUN_1425046f0(longlong param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    sVar1 = *(short *)(param_2 + lVar2);
    *(short *)(param_1 + lVar2) = sVar1;
    lVar2 = lVar2 + 2;
  } while (sVar1 != 0);
  return;
}



// FUNCTION 142504720 FUN_142504720 body=50 status=ok
// SIG undefined FUN_142504720(void)

void FUN_142504720(longlong param_1,longlong param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  longlong lVar3;
  
  if (0 < (int)param_3) {
    lVar3 = 0;
    do {
      sVar1 = *(short *)(param_2 + lVar3);
      *(short *)(param_1 + lVar3) = sVar1;
      if (sVar1 == 0) {
        return;
      }
      lVar3 = lVar3 + 2;
      bVar2 = 1 < param_3;
      param_3 = param_3 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 142504760 FUN_142504760 body=205 status=ok
// SIG undefined FUN_142504760(void)

int FUN_142504760(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  if ((param_1 != (ushort *)0x0) && (-2 < param_2)) {
    if (param_2 < 0) {
      uVar1 = *param_1;
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = 0;
        do {
          puVar2 = param_1 + 1;
          if (((uVar1 & 0xfc00) == 0xd800) && ((param_1[1] & 0xfc00) == 0xdc00)) {
            puVar2 = param_1 + 2;
          }
          param_1 = puVar2;
          uVar1 = *param_1;
          iVar3 = iVar3 + 1;
        } while (uVar1 != 0);
      }
    }
    else if (param_2 != 0) {
      iVar3 = 0;
      do {
        if (((param_2 == 1) || ((*param_1 & 0xfc00) != 0xd800)) || ((param_1[1] & 0xfc00) != 0xdc00)
           ) {
          iVar4 = -1;
          lVar5 = 1;
        }
        else {
          iVar4 = -2;
          lVar5 = 2;
        }
        param_1 = param_1 + lVar5;
        iVar3 = iVar3 + 1;
        param_2 = param_2 + iVar4;
      } while (param_2 != 0);
    }
  }
  return iVar3;
}



// FUNCTION 142504850 FUN_142504850 body=36 status=ok
// SIG undefined FUN_142504850(void)

void * FUN_142504850(void *param_1,void *param_2,uint param_3)

{
  if (0 < (int)param_3) {
    memcpy(param_1,param_2,(ulonglong)param_3 * 2);
  }
  return param_1;
}



// FUNCTION 142504880 FUN_142504880 body=36 status=ok
// SIG undefined FUN_142504880(void)

void * FUN_142504880(void *param_1,void *param_2,uint param_3)

{
  if (0 < (int)param_3) {
    memmove(param_1,param_2,(ulonglong)param_3 * 2);
  }
  return param_1;
}



// FUNCTION 1425048b0 FUN_1425048b0 body=44 status=ok
// SIG undefined FUN_1425048b0(void)

int FUN_1425048b0(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  
  if (0 < (int)param_3) {
    puVar1 = param_1 + param_3;
    do {
      if ((uint)*param_1 - (uint)*param_2 != 0) {
        return (uint)*param_1 - (uint)*param_2;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_1 < puVar1);
  }
  return 0;
}



// FUNCTION 1425048e0 FUN_1425048e0 body=955 status=ok
// SIG undefined FUN_1425048e0(void)

void FUN_1425048e0(code *param_1,uint *param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  sbyte sVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [36];
  int local_74;
  undefined4 local_70;
  int local_6c;
  code *local_68;
  undefined8 local_60;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = *param_2;
  uVar13 = (ulonglong)uVar6;
  local_68 = param_1;
  local_60 = param_4;
  if ((-1 < (int)uVar6) && ((int)uVar6 < param_3)) {
    *param_2 = uVar6 + 1;
    local_74 = param_3;
    uVar5 = (*param_1)(uVar6,param_4);
    uVar3 = (ushort)uVar5;
    iVar7 = 8;
    sVar12 = 4;
    local_58 = uVar13;
    if (uVar3 == 0x55) {
      local_70 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      bVar1 = false;
      local_6c = 8;
      uVar9 = 0;
      bVar2 = 0;
    }
    else {
      uVar6 = (uint)uVar5;
      uVar8 = uVar6 & 0xffff;
      iVar10 = 4;
      iVar4 = 4;
      if (uVar8 == 0x75) {
LAB_1425049a9:
        local_70 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_6c = iVar10;
      }
      else {
        if (uVar8 != 0x78) {
          uVar9 = 0xff;
          if ((uVar3 & 0xfff8) == 0x30) {
            uVar9 = uVar6 - 0x30 & 0xff;
          }
          if (-1 < (char)uVar9) {
            local_70 = 1;
            local_6c = 1;
            sVar12 = 3;
            bVar1 = true;
            iVar7 = 3;
            bVar2 = 1;
            goto LAB_142504a21;
          }
          if (uVar3 == 0x61) goto LAB_142504aff;
          if (uVar3 < 0x61) {
LAB_142504c15:
            if (uVar3 == 99) {
LAB_142504c1c:
              uVar6 = *param_2;
              if ((int)uVar6 < local_74) {
                *param_2 = uVar6 + 1;
                uVar6 = (*local_68)(uVar6,local_60);
                if ((((uVar6 & 0xfc00) == 0xd800) && ((int)*param_2 < local_74)) &&
                   (uVar6 = (*local_68)(*param_2,local_60), (uVar6 & 0xfc00) == 0xdc00)) {
                  *param_2 = *param_2 + 1;
                }
              }
              goto LAB_142504aff;
            }
          }
          else {
            if (uVar3 == 0x62) goto LAB_142504aff;
            if (uVar3 < 0x62) goto LAB_142504c15;
            if (uVar3 == 0x65) goto LAB_142504aff;
            if (uVar3 < 0x65) goto LAB_142504c15;
            if (uVar3 == 0x66) goto LAB_142504aff;
            if (uVar3 < 0x66) goto LAB_142504c15;
            if (uVar3 == 0x6e) goto LAB_142504aff;
            if (uVar3 < 0x6e) goto LAB_142504c15;
            if (uVar3 == 0x72) goto LAB_142504aff;
            if (uVar3 < 0x72) goto LAB_142504c15;
            if (uVar3 == 0x74) goto LAB_142504aff;
            if (uVar3 < 0x74) goto LAB_142504c15;
            if (uVar3 == 99) goto LAB_142504c1c;
            if (uVar8 == 0x76) goto LAB_142504aff;
          }
          if ((((uVar6 & 0xfc00) == 0xd800) && ((int)*param_2 < local_74)) &&
             (uVar3 = (*local_68)(*param_2,local_60), (uVar3 & 0xfc00) == 0xdc00)) {
            *param_2 = *param_2 + 1;
          }
          goto LAB_142504aff;
        }
        iVar4 = 2;
        iVar10 = 1;
        if ((local_74 <= (int)*param_2) ||
           (uVar5 = (*local_68)(*param_2,local_60), (short)uVar5 != 0x7b)) goto LAB_1425049a9;
        *param_2 = *param_2 + 1;
        local_70 = 0;
        local_6c = 1;
        iVar4 = iVar7;
      }
      bVar1 = false;
      uVar9 = 0;
      bVar2 = 0;
      iVar7 = iVar4;
    }
LAB_142504a21:
    uVar6 = *param_2;
    uVar8 = (uint)bVar2;
    if ((int)uVar6 < local_74) {
      uVar11 = (uint)(byte)(bVar2 + 1);
      do {
        iVar4 = (*local_68)(uVar6,local_60);
        uVar3 = (ushort)iVar4;
        if (bVar1) {
          if (((uVar3 & 0xfff8) != 0x30) ||
             (bVar2 = (char)iVar4 - 0x30, uVar6 = (uint)bVar2, (char)bVar2 < '\0')) break;
        }
        else if ((ushort)(uVar3 - 0x30) < 10) {
          uVar6 = iVar4 - 0x30;
        }
        else if ((ushort)(uVar3 - 0x41) < 6) {
          uVar6 = iVar4 - 0x37;
        }
        else {
          if (5 < (ushort)(uVar3 - 0x61)) break;
          uVar6 = iVar4 - 0x57;
        }
        uVar9 = uVar9 << sVar12 | uVar6 & 0xff;
        uVar6 = *param_2 + 1;
        *param_2 = uVar6;
        uVar8 = (uint)(char)uVar11;
        if ((local_74 <= (int)uVar6) || (uVar11 = uVar8 + 1, iVar7 <= (int)uVar8)) break;
      } while( true );
    }
    uVar6 = (uint)local_58;
    if (local_6c <= (int)uVar8) {
      if ((char)local_70 == '\0') {
        if (uVar3 != 0x7d) goto LAB_142504af7;
        *param_2 = *param_2 + 1;
      }
      if (uVar9 < 0x110000) {
        uVar6 = *param_2;
        if (((int)uVar6 < local_74) && ((uVar9 & 0xfffffc00) == 0xd800)) {
          local_4c = uVar6 + 1;
          uVar3 = (*local_68)(uVar6,local_60);
          if ((uVar3 == 0x5c) && ((int)(uVar6 + 1) < local_74)) {
            uVar3 = FUN_1425048e0(local_68,&local_4c,local_74,local_60);
          }
          if ((uVar3 & 0xfc00) == 0xdc00) {
            *param_2 = local_4c;
          }
        }
        goto LAB_142504aff;
      }
    }
  }
LAB_142504af7:
  *param_2 = uVar6;
LAB_142504aff:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 142504cc0 FUN_142504cc0 body=56 status=ok
// SIG undefined FUN_142504cc0(void)

void FUN_142504cc0(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  
  if (((param_4 != (int *)0x0) && (-1 < (int)param_3)) && (*param_4 < 1)) {
    if ((int)param_3 < (int)param_2) {
      *(undefined2 *)(param_1 + (ulonglong)param_3 * 2) = 0;
      iVar1 = 0;
      if (*param_4 != -0x7c) {
        return;
      }
    }
    else {
      iVar1 = 0xf;
      if (param_3 == param_2) {
        iVar1 = -0x7c;
      }
    }
    *param_4 = iVar1;
    return;
  }
  return;
}



// FUNCTION 142504d00 FUN_142504d00 body=54 status=ok
// SIG undefined FUN_142504d00(void)

void FUN_142504d00(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  
  if (((param_4 != (int *)0x0) && (-1 < (int)param_3)) && (*param_4 < 1)) {
    if ((int)param_3 < (int)param_2) {
      *(undefined1 *)(param_1 + (ulonglong)param_3) = 0;
      iVar1 = 0;
      if (*param_4 != -0x7c) {
        return;
      }
    }
    else {
      iVar1 = 0xf;
      if (param_3 == param_2) {
        iVar1 = -0x7c;
      }
    }
    *param_4 = iVar1;
    return;
  }
  return;
}



// FUNCTION 142504d40 FUN_142504d40 body=71 status=ok
// SIG undefined FUN_142504d40(void)

int FUN_142504d40(ushort *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if ((param_1 != (ushort *)0x0) && (0 < param_2)) {
    iVar3 = param_2 + -1;
    if (-1 < param_2 + -0x20) {
      iVar3 = param_2 + -0x20;
    }
    puVar1 = param_1 + param_2;
    iVar2 = 0;
    do {
      iVar2 = (uint)*param_1 + iVar2 * 0x25;
      param_1 = param_1 + (ulonglong)(uint)(iVar3 >> 5) + 1;
    } while (param_1 < puVar1);
  }
  return iVar2;
}



// FUNCTION 142504d90 FUN_142504d90 body=71 status=ok
// SIG undefined FUN_142504d90(void)

int FUN_142504d90(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = 0;
  if ((param_1 != (byte *)0x0) && (0 < param_2)) {
    pbVar3 = param_1 + param_2;
    iVar2 = param_2 + -1;
    if (-1 < param_2 + -0x20) {
      iVar2 = param_2 + -0x20;
    }
    iVar1 = 0;
    do {
      iVar1 = (uint)*param_1 + iVar1 * 0x25;
      param_1 = param_1 + ((iVar2 >> 5) + 1);
    } while (param_1 < pbVar3);
  }
  return iVar1;
}



// FUNCTION 142504de0 FUN_142504de0 body=84 status=ok
// SIG undefined FUN_142504de0(void)

int FUN_142504de0(undefined1 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar2 = 0;
  if ((param_1 != (undefined1 *)0x0) && (0 < param_2)) {
    puVar3 = param_1 + param_2;
    iVar4 = param_2 + -1;
    if (-1 < param_2 + -0x20) {
      iVar4 = param_2 + -0x20;
    }
    iVar2 = 0;
    do {
      bVar1 = FUN_142503910(*param_1);
      iVar2 = (uint)bVar1 + iVar2 * 0x25;
      param_1 = param_1 + ((iVar4 >> 5) + 1);
    } while (param_1 < puVar3);
  }
  return iVar2;
}



// FUNCTION 142504e40 FUN_142504e40 body=571 status=ok
// SIG undefined FUN_142504e40(void)

void FUN_142504e40(undefined4 param_1,longlong param_2,int param_3,longlong *param_4,
                  longlong param_5,int *param_6)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  int *local_130;
  undefined4 local_120;
  int local_11c;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar7 = 0;
  if (*param_6 < 1) {
    local_120 = param_1;
    if (0 < param_3) {
      uVar7 = 0;
      iVar11 = 0;
      do {
        iVar2 = param_3 - iVar11;
        iVar4 = iVar2 * 2;
        if (0x3ffffffe < iVar2) {
          iVar4 = 0x7fffffff;
        }
        iVar10 = iVar2 * 3;
        if (0x2aaaaaa9 < iVar2) {
          iVar10 = iVar4;
        }
        local_138 = 200;
        local_130 = &local_11c;
        lVar3 = (**(code **)(*param_4 + 0x10))(param_4,4,iVar10,local_118);
        iVar4 = local_11c + -3;
        iVar10 = 0;
        iVar2 = iVar10;
        if (3 < local_11c) {
          do {
            iVar9 = iVar11 + 1;
            uVar1 = *(ushort *)(param_2 + (longlong)iVar11 * 2);
            uVar6 = (ulonglong)uVar1;
            if ((uVar1 & 0xfc00) == 0xd800) {
              iVar11 = iVar11 + 2;
              uVar5 = (uint)uVar1 * 0x400 + (uint)*(ushort *)(param_2 + (longlong)iVar9 * 2) +
                      0xfca02400;
              uVar6 = (ulonglong)uVar5;
              if (uVar5 < 0x10000) {
LAB_142504ff0:
                bVar8 = (byte)(uVar6 >> 0xc) | 0xe0;
                iVar9 = 1;
                iVar2 = iVar10;
              }
              else {
                iVar2 = iVar10 + 1;
                *(byte *)(lVar3 + iVar10) = (byte)(uVar5 >> 0x12) | 0xf0;
                bVar8 = (byte)(uVar5 >> 0xc) & 0x3f | 0x80;
                iVar9 = 2;
              }
              iVar10 = iVar10 + iVar9;
              *(byte *)(lVar3 + iVar2) = bVar8;
              bVar8 = (byte)(uVar6 >> 6) & 0x3f | 0x80;
              iVar9 = iVar11;
LAB_142505023:
              *(byte *)(lVar3 + iVar10) = bVar8;
              uVar6 = (ulonglong)((byte)uVar6 & 0x3f | 0x80);
              iVar2 = iVar10 + 2;
              iVar11 = iVar9;
              iVar10 = iVar10 + 1;
            }
            else {
              if (0x7f < uVar1) {
                iVar11 = iVar9;
                if (0x7ff < uVar1) goto LAB_142504ff0;
                bVar8 = (byte)(uVar1 >> 6) | 0xc0;
                goto LAB_142505023;
              }
              iVar2 = iVar10 + 1;
              iVar11 = iVar9;
            }
            *(char *)(lVar3 + iVar10) = (char)uVar6;
          } while ((iVar11 < param_3) && (iVar10 = iVar2, iVar2 < iVar4));
        }
        local_11c = iVar4;
        if ((int)(uVar7 ^ 0x7fffffff) < iVar2) {
          *param_6 = 8;
          goto LAB_142504e7d;
        }
        (**(code **)(*param_4 + 8))(param_4,lVar3,iVar2);
        uVar7 = uVar7 + iVar2;
      } while (iVar11 < param_3);
    }
    if (param_5 != 0) {
      FUN_1425b02e0(param_5,local_120,uVar7);
    }
  }
LAB_142504e7d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
}



// FUNCTION 1425050c0 FUN_1425050c0 body=81 status=ok
// SIG undefined FUN_1425050c0(void)

undefined8
FUN_1425050c0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,int *param_7)

{
  undefined8 uVar1;
  
  if (*param_7 < 1) {
    if (param_2 - param_1 < 0x80000000) {
      uVar1 = FUN_142504e40(param_2 - param_1 & 0xffffffff,param_3,param_4,param_5,param_6,param_7);
      return uVar1;
    }
    *param_7 = 8;
  }
  return 0;
}



// FUNCTION 142505120 FUN_142505120 body=220 status=ok
// SIG undefined FUN_142505120(void)

void FUN_142505120(undefined4 param_1,uint param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  byte local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < 0x80) {
    iVar3 = 1;
    local_1c[0] = (byte)param_2;
  }
  else {
    if (param_2 < 0x800) {
      local_1c[0] = (byte)(param_2 >> 6) | 0xc0;
      uVar2 = 1;
    }
    else {
      if (param_2 < 0x10000) {
        local_1c[0] = (byte)(param_2 >> 0xc) | 0xe0;
        uVar1 = 1;
      }
      else {
        local_1c[0] = (byte)(param_2 >> 0x12) | 0xf0;
        local_1c[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        uVar1 = 2;
      }
      uVar2 = uVar1 + 1;
      local_1c[uVar1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    }
    iVar3 = uVar2 + 1;
    local_1c[uVar2] = (byte)param_2 & 0x3f | 0x80;
  }
  if (param_4 != 0) {
    FUN_1425b02e0(param_4,param_1,iVar3);
  }
  (**(code **)(*param_3 + 8))(param_3,local_1c,iVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142505210 FUN_142505210 body=119 status=ok
// SIG undefined FUN_142505210(void)

ulonglong FUN_142505210(longlong param_1,longlong param_2,longlong *param_3,uint param_4,
                       longlong param_5,int *param_6)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*param_6 < 1) {
    uVar2 = param_2 - param_1;
    if ((longlong)uVar2 < 0x80000000) {
      uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (0 < (int)uVar2) {
        if (param_5 != 0) {
          FUN_1425b00d0(param_5,uVar2 & 0xffffffff);
        }
        if ((param_4 & 0x4000) == 0) {
          (**(code **)(*param_3 + 8))(param_3,param_1,uVar2 & 0xffffffff);
        }
      }
    }
    else {
      *param_6 = 8;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 142505290 FUN_142505290 body=18 status=ok
// SIG undefined FUN_142505290(void)

void FUN_142505290(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = icu_64::CharStringByteSink::vftable;
  param_1[1] = param_2;
  return;
}



// FUNCTION 1425052b0 thunk_FUN_14257c350 body=5 status=ok
// SIG undefined thunk_FUN_14257c350(void)

void thunk_FUN_14257c350(void)

{
  return;
}



// FUNCTION 1425052c0 FUN_1425052c0 body=54 status=ok
// SIG undefined FUN_1425052c0(void)

void FUN_1425052c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  FUN_142503520(*(undefined8 *)(param_1 + 8),param_2,param_3,&local_c);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 142505300 FUN_142505300 body=115 status=ok
// SIG undefined FUN_142505300(void)

void FUN_142505300(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int *param_6)

{
  undefined1 auStack_58 [32];
  int *local_38;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 < 1) || (param_5 < param_2)) {
    *param_6 = 0;
  }
  else {
    local_24 = 0;
    local_38 = &local_24;
    FUN_142503710(*(undefined8 *)(param_1 + 8),param_2,param_3,param_6);
    if (0 < local_24) {
      *param_6 = param_5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 142505380 FUN_142505380 body=38 status=ok
// SIG undefined FUN_142505380(void)

undefined8 FUN_142505380(undefined8 param_1,int param_2)

{
  FUN_14257c350();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425053b0 FUN_1425053b0 body=83 status=ok
// SIG undefined FUN_1425053b0(void)

undefined8 FUN_1425053b0(char *param_1,uint param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((int)param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (uint)sVar2;
  }
  if (param_2 - 2 < 7) {
    uVar4 = 0;
    do {
      cVar1 = FUN_1425038e0(param_1[uVar4]);
      if (cVar1 == '\0') goto LAB_1425053f9;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    uVar3 = 1;
  }
  else {
LAB_1425053f9:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 142505410 FUN_142505410 body=97 status=ok
// SIG undefined FUN_142505410(void)

bool FUN_142505410(char *param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  bool bVar3;
  
  if (param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  if ((((param_2 == 4) && (cVar1 = FUN_1425038e0(*param_1), cVar1 != '\0')) &&
      (cVar1 = FUN_1425038e0(param_1[1]), cVar1 != '\0')) &&
     (cVar1 = FUN_1425038e0(param_1[2]), cVar1 != '\0')) {
    cVar1 = FUN_1425038e0(param_1[3]);
    bVar3 = cVar1 != '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 142505480 FUN_142505480 body=110 status=ok
// SIG undefined FUN_142505480(void)

undefined8 FUN_142505480(char *param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  
  if (param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  if (param_2 == 3) {
    if ((((byte)(*param_1 - 0x30U) < 10) && ((byte)(param_1[1] - 0x30U) < 10)) &&
       (0xf5 < (byte)(param_1[2] - 0x3aU))) {
      return 1;
    }
  }
  else if (((param_2 == 2) && (cVar1 = FUN_1425038e0(*param_1), cVar1 != '\0')) &&
          (cVar1 = FUN_1425038e0(param_1[1]), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1425054f0 FUN_1425054f0 body=176 status=ok
// SIG undefined FUN_1425054f0(void)

undefined8 FUN_1425054f0(char *param_1,uint param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((int)param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (uint)sVar2;
  }
  if (param_2 - 5 < 4) {
    uVar4 = 0;
    do {
      cVar1 = FUN_1425038e0(param_1[uVar4]);
      if ((cVar1 == '\0') && (9 < (byte)(param_1[uVar4] - 0x30U))) goto LAB_142505541;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
LAB_142505594:
    uVar3 = 1;
  }
  else {
LAB_142505541:
    if ((param_2 == 4) && ((byte)(*param_1 - 0x30U) < 10)) {
      cVar1 = FUN_1425038e0(param_1[1]);
      if ((cVar1 != '\0') || ((byte)(param_1[1] - 0x30U) < 10)) {
        cVar1 = FUN_1425038e0(param_1[2]);
        if ((cVar1 != '\0') || ((byte)(param_1[2] - 0x30U) < 10)) {
          cVar1 = FUN_1425038e0(param_1[3]);
          if ((cVar1 != '\0') || ((byte)(param_1[3] - 0x30U) < 10)) goto LAB_142505594;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1425055b0 FUN_1425055b0 body=265 status=ok
// SIG undefined FUN_1425055b0(void)

undefined8 FUN_1425055b0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  size_t sVar4;
  char *pcVar5;
  char *_Str;
  ulonglong uVar6;
  
  if (param_2 < 0) {
    sVar4 = strlen(param_1);
    param_2 = (int)sVar4;
  }
  if (0 < param_2) {
    _Str = (char *)0x0;
    pcVar5 = param_1;
    do {
      while (*pcVar5 == '-') {
        if (_Str == (char *)0x0) {
          return 0;
        }
        uVar2 = (int)pcVar5 - (int)_Str;
        uVar3 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) {
          uVar3 = strlen(_Str);
        }
        if (6 < (int)uVar3 - 2U) {
          return 0;
        }
        uVar6 = 0;
        do {
          cVar1 = FUN_1425038e0(_Str[uVar6]);
          if ((cVar1 == '\0') && (9 < (byte)(_Str[uVar6] - 0x30U))) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar3 & 0xffffffff) != uVar6);
        pcVar5 = pcVar5 + 1;
        _Str = (char *)0x0;
        if ((longlong)param_2 <= (longlong)pcVar5 - (longlong)param_1) {
          return 0;
        }
      }
      if (_Str == (char *)0x0) {
        _Str = pcVar5;
      }
      pcVar5 = pcVar5 + 1;
    } while ((longlong)pcVar5 - (longlong)param_1 < (longlong)param_2);
    uVar2 = (int)pcVar5 - (int)_Str;
    if ((int)uVar2 < 0) {
      sVar4 = strlen(_Str);
      uVar2 = (uint)sVar4;
    }
    if (uVar2 - 2 < 7) {
      uVar3 = 0;
      while ((cVar1 = FUN_1425038e0(_Str[uVar3]), cVar1 != '\0' ||
             ((byte)(_Str[uVar3] - 0x30U) < 10))) {
        uVar3 = uVar3 + 1;
        if (uVar2 == uVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1425056f0 FUN_1425056f0 body=84 status=ok
// SIG undefined FUN_1425056f0(void)

undefined8 FUN_1425056f0(char *param_1,uint param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((int)param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (uint)sVar2;
  }
  if (param_2 - 2 < 7) {
    uVar4 = 0;
    do {
      cVar1 = FUN_1425038e0(param_1[uVar4]);
      if ((cVar1 == '\0') && (9 < (byte)(param_1[uVar4] - 0x30U))) goto LAB_14250573f;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    uVar3 = 1;
  }
  else {
LAB_14250573f:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 142505750 FUN_142505750 body=265 status=ok
// SIG undefined FUN_142505750(void)

undefined8 FUN_142505750(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  size_t sVar4;
  char *pcVar5;
  char *_Str;
  ulonglong uVar6;
  
  if (param_2 < 0) {
    sVar4 = strlen(param_1);
    param_2 = (int)sVar4;
  }
  if (0 < param_2) {
    _Str = (char *)0x0;
    pcVar5 = param_1;
    do {
      while (*pcVar5 == '-') {
        if (_Str == (char *)0x0) {
          return 0;
        }
        uVar2 = (int)pcVar5 - (int)_Str;
        uVar3 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) {
          uVar3 = strlen(_Str);
        }
        if (7 < (int)uVar3 - 1U) {
          return 0;
        }
        uVar6 = 0;
        do {
          cVar1 = FUN_1425038e0(_Str[uVar6]);
          if ((cVar1 == '\0') && (9 < (byte)(_Str[uVar6] - 0x30U))) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar3 & 0xffffffff) != uVar6);
        pcVar5 = pcVar5 + 1;
        _Str = (char *)0x0;
        if ((longlong)param_2 <= (longlong)pcVar5 - (longlong)param_1) {
          return 0;
        }
      }
      if (_Str == (char *)0x0) {
        _Str = pcVar5;
      }
      pcVar5 = pcVar5 + 1;
    } while ((longlong)pcVar5 - (longlong)param_1 < (longlong)param_2);
    uVar2 = (int)pcVar5 - (int)_Str;
    if ((int)uVar2 < 0) {
      sVar4 = strlen(_Str);
      uVar2 = (uint)sVar4;
    }
    if (uVar2 - 1 < 8) {
      uVar3 = 0;
      while ((cVar1 = FUN_1425038e0(_Str[uVar3]), cVar1 != '\0' ||
             ((byte)(_Str[uVar3] - 0x30U) < 10))) {
        uVar3 = uVar3 + 1;
        if (uVar2 == uVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142505890 FUN_142505890 body=84 status=ok
// SIG undefined FUN_142505890(void)

undefined8 FUN_142505890(char *param_1,uint param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((int)param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (uint)sVar2;
  }
  if (param_2 - 1 < 8) {
    uVar4 = 0;
    do {
      cVar1 = FUN_1425038e0(param_1[uVar4]);
      if ((cVar1 == '\0') && (9 < (byte)(param_1[uVar4] - 0x30U))) goto LAB_1425058df;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    uVar3 = 1;
  }
  else {
LAB_1425058df:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1425058f0 FUN_1425058f0 body=81 status=ok
// SIG undefined FUN_1425058f0(void)

undefined8 FUN_1425058f0(char *param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  
  if (param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  if ((param_2 == 2) &&
     (((cVar1 = FUN_1425038e0(*param_1), cVar1 != '\0' || ((byte)(*param_1 - 0x30U) < 10)) &&
      (cVar1 = FUN_1425038e0(param_1[1]), cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142505950 FUN_142505950 body=265 status=ok
// SIG undefined FUN_142505950(void)

undefined8 FUN_142505950(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  size_t sVar4;
  char *pcVar5;
  char *_Str;
  ulonglong uVar6;
  
  if (param_2 < 0) {
    sVar4 = strlen(param_1);
    param_2 = (int)sVar4;
  }
  if (0 < param_2) {
    _Str = (char *)0x0;
    pcVar5 = param_1;
    do {
      while (*pcVar5 == '-') {
        if (_Str == (char *)0x0) {
          return 0;
        }
        uVar2 = (int)pcVar5 - (int)_Str;
        uVar3 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) {
          uVar3 = strlen(_Str);
        }
        if (5 < (int)uVar3 - 3U) {
          return 0;
        }
        uVar6 = 0;
        do {
          cVar1 = FUN_1425038e0(_Str[uVar6]);
          if ((cVar1 == '\0') && (9 < (byte)(_Str[uVar6] - 0x30U))) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar3 & 0xffffffff) != uVar6);
        pcVar5 = pcVar5 + 1;
        _Str = (char *)0x0;
        if ((longlong)param_2 <= (longlong)pcVar5 - (longlong)param_1) {
          return 0;
        }
      }
      if (_Str == (char *)0x0) {
        _Str = pcVar5;
      }
      pcVar5 = pcVar5 + 1;
    } while ((longlong)pcVar5 - (longlong)param_1 < (longlong)param_2);
    uVar2 = (int)pcVar5 - (int)_Str;
    if ((int)uVar2 < 0) {
      sVar4 = strlen(_Str);
      uVar2 = (uint)sVar4;
    }
    if (uVar2 - 3 < 6) {
      uVar3 = 0;
      while ((cVar1 = FUN_1425038e0(_Str[uVar3]), cVar1 != '\0' ||
             ((byte)(_Str[uVar3] - 0x30U) < 10))) {
        uVar3 = uVar3 + 1;
        if (uVar2 == uVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142505a90 FUN_142505a90 body=138 status=ok
// SIG undefined FUN_142505a90(void)

undefined4
FUN_142505a90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             int *param_5)

{
  undefined4 uVar1;
  undefined1 local_58 [24];
  undefined4 local_40;
  char local_3c;
  
  uVar1 = 0;
  if (*param_5 < 1) {
    FUN_14257c370(local_58);
    FUN_142505b30(param_1,local_58,param_4,param_5);
    if (*param_5 < 1) {
      if (local_3c == '\0') {
        FUN_142504d00(param_2,param_3,local_40,param_5);
      }
      else {
        *param_5 = 0xf;
      }
    }
    FUN_14257c350(local_58);
    uVar1 = local_40;
  }
  return uVar1;
}



// FUNCTION 142505b20 FUN_142505b20 body=6 status=ok
// SIG undefined FUN_142505b20(void)

bool FUN_142505b20(int param_1)

{
  return 0 < param_1;
}



// FUNCTION 142505b30 FUN_142505b30 body=6764 status=ok
// SIG undefined FUN_142505b30(void)

void FUN_142505b30(char *param_1,longlong *param_2,char param_3,int *param_4)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  char *pcVar14;
  size_t sVar15;
  size_t sVar16;
  undefined4 extraout_var;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  char *pcVar20;
  int *_Str;
  longlong *plVar21;
  undefined1 *_Dst;
  undefined8 *puVar22;
  size_t sVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  int *piVar27;
  char *pcVar28;
  char *pcVar29;
  int local_390 [2];
  undefined1 *local_388;
  undefined4 local_380;
  char local_37c;
  undefined1 local_378 [64];
  int *local_338;
  undefined4 local_330;
  undefined1 local_32c [44];
  undefined4 local_300;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined2 local_2ec;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 local_218;
  undefined8 local_210;
  uint local_208;
  char local_204;
  undefined1 local_200 [144];
  uint local_170 [2];
  char *local_168;
  uint local_160;
  char local_15c;
  char local_158 [64];
  int *local_118;
  uint local_110 [2];
  char *local_108;
  uint local_100;
  char local_fc;
  char local_f8 [64];
  undefined8 *local_b8;
  undefined8 local_b0;
  int local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  char *local_98;
  longlong local_90;
  longlong *local_88;
  char *local_80;
  int local_74;
  int *local_70;
  int local_68;
  char local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_2f0 = 0x28;
  local_2ec = 0;
  local_2c0 = 0;
  local_68 = 0;
  local_2f8 = (longlong)&local_2ec + 1;
  local_61 = param_3;
  uVar11 = strlen(param_1);
  local_a0 = (int)uVar11;
  lVar13 = (longlong)&local_2ec + 1;
  local_88 = param_2;
  local_70 = param_4;
  if (0 < local_a0) {
    while (uVar12 = FUN_142503710(&local_2f8,uVar11 & 0xffffffff,uVar11 & 0xffffffff,&local_a0,
                                  &local_68), local_68 < 1) {
      uVar11 = FUN_1424ea1f0(param_1,uVar12,local_a0,&local_68);
      if (local_68 != 0xf) {
        if (0 < local_68) goto LAB_14250752d;
        FUN_142503520(&local_2f8,uVar12,uVar11 & 0xffffffff,&local_68);
        lVar13 = local_2f8;
        if (local_68 == -0x7c) {
          local_68 = 0;
          goto LAB_142505c93;
        }
        if (local_68 < 1) goto LAB_142505c93;
        *local_70 = local_68;
        goto LAB_14250753a;
      }
      local_68 = 0;
      local_a0 = (int)uVar11;
    }
    *local_70 = local_68;
    goto LAB_14250753a;
  }
LAB_142505c93:
  piVar27 = local_70;
  plVar21 = local_88;
  lVar13 = FUN_1424e7020(lVar13);
  if (lVar13 == local_2f8) {
    lVar13 = FUN_1424e8740(lVar13,&local_68);
    if ((local_68 < 1) && (iVar7 = FUN_1425649b0(lVar13,&local_68), iVar7 == 1)) {
      local_218 = 0;
      pcVar14 = (char *)FUN_142564bc0(lVar13,&local_218,&local_68);
      if ((local_218 == 1) && (*pcVar14 == 'x')) {
        local_2b8 = CONCAT62(local_2b8._2_6_,0x2d78);
        local_218 = FUN_1424e74e0(param_1,pcVar14,(longlong)&local_2b8 + 2,0x62,&local_68);
        local_90 = lVar13;
        if (local_68 < 1) {
          cVar6 = FUN_142505750((longlong)&local_2b8 + 2,local_218);
          if (cVar6 == '\0') {
            plVar21 = local_88;
            if (local_61 == '\0') goto LAB_142505db4;
            goto LAB_142505d54;
          }
          (**(code **)(*local_88 + 8))(local_88,&local_2b8,local_218 + 2);
        }
        else {
LAB_142505d54:
          *piVar27 = 1;
        }
        if (local_90 != 0) {
          FUN_142564960();
        }
        goto LAB_14250753a;
      }
    }
LAB_142505db4:
    if (lVar13 != 0) {
      FUN_142564960(lVar13);
    }
  }
  local_218 = 0;
  if (*piVar27 < 1) {
    uVar8 = FUN_1424e8be0(local_2f8,&local_2b8,0xc,&local_218);
    sVar23 = (size_t)uVar8;
    if ((0 < (int)local_218) || (local_218 == -0x7c)) {
      if (local_61 == '\0') goto LAB_142505ec4;
LAB_142505fcc:
      *piVar27 = 1;
      goto LAB_142505fd3;
    }
    if (uVar8 == 0) {
LAB_142505ec4:
      (**(code **)(*plVar21 + 8))(plVar21,&DAT_1499d83e0,3);
    }
    else {
      if ((int)uVar8 < 0) {
        sVar15 = strlen((char *)&local_2b8);
        uVar8 = (uint)sVar15;
      }
      if (uVar8 - 2 < 7) {
        uVar11 = 0;
        do {
          cVar6 = FUN_1425038e0(*(undefined1 *)((longlong)&local_2b8 + uVar11));
          if (cVar6 == '\0') goto LAB_142505fbf;
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
        sVar15 = strlen((char *)&local_2b8);
        pcVar14 = "in";
        uVar11 = 0xfffffffffffffffe;
        do {
          sVar16 = strlen(pcVar14);
          if (sVar15 < sVar16) break;
          iVar7 = strcmp((char *)&local_2b8,pcVar14);
          if (iVar7 == 0) {
            strcpy((char *)&local_2b8,pcVar14 + 4);
            sVar23 = strlen((char *)&local_2b8);
            break;
          }
          pcVar14 = pcVar14 + 8;
          uVar11 = uVar11 + 2;
        } while (uVar11 < 0x9a);
        (**(code **)(*local_88 + 8))(local_88,&local_2b8,sVar23 & 0xffffffff);
      }
      else {
LAB_142505fbf:
        if (local_61 != '\0') goto LAB_142505fcc;
        (**(code **)(*plVar21 + 8))(plVar21,&DAT_1499d83e0,3);
      }
    }
    local_218 = 0;
    if (0 < *local_70) goto LAB_142505fd3;
    iVar7 = FUN_1424e8c40(local_2f8,&local_2b8,6,&local_218);
    if (((int)local_218 < 1) && (local_218 != -0x7c)) {
      if (iVar7 < 1) goto LAB_142505fd3;
      if ((iVar7 == 4) && (cVar6 = FUN_1425038e0(local_2b8 & 0xff), cVar6 != '\0')) {
        cVar6 = FUN_1425038e0(local_2b8._1_1_);
        if (cVar6 != '\0') {
          cVar6 = FUN_1425038e0(local_2b8._2_1_);
          if (cVar6 != '\0') {
            cVar6 = FUN_1425038e0(local_2b8._3_1_);
            if (cVar6 != '\0') {
              (**(code **)(*local_88 + 8))(local_88,L"-`[Left Bracket",1);
              (**(code **)(*local_88 + 8))(local_88,&local_2b8,4);
              goto LAB_142505fd3;
            }
          }
        }
      }
    }
    if (local_61 == '\0') goto LAB_142505fd3;
    *local_70 = 1;
LAB_142505fed:
    local_218 = 0;
    if (*local_70 < 1) {
      pcVar14 = (char *)&local_2b8;
      iVar7 = FUN_1424e8ec0(local_2f8,pcVar14,0x9d,&local_218);
      if (((int)local_218 < 1) && (local_218 != -0x7c)) {
        if (0 < iVar7) {
          local_b0 = 0;
          pcVar20 = (char *)0x0;
          puVar22 = (undefined8 *)0x0;
          local_90 = CONCAT44(local_90._4_4_,iVar7);
          do {
            cVar6 = *pcVar14;
            bVar2 = false;
            if (cVar6 == '\0') {
LAB_142506112:
              if (pcVar20 == (char *)0x0) {
                if (local_61 != '\0') {
LAB_1425063d5:
                  iVar7 = 1;
LAB_142506439:
                  *local_70 = iVar7;
                  break;
                }
LAB_1425061da:
                pcVar20 = (char *)0x0;
              }
              else {
                cVar6 = *pcVar20;
                pcVar1 = pcVar20;
                while (cVar6 != '\0') {
                  cVar6 = FUN_142503910();
                  *pcVar1 = cVar6;
                  cVar6 = pcVar1[1];
                  pcVar1 = pcVar1 + 1;
                }
                cVar6 = FUN_1425054f0(pcVar20,0xffffffff);
                if (cVar6 == '\0') {
                  if (local_61 != '\0') goto LAB_1425063d5;
                  sVar23 = strlen(pcVar20);
                  if (7 < (int)sVar23 - 1U) goto LAB_1425061da;
                  uVar11 = 0;
                  while ((cVar6 = FUN_1425038e0(pcVar20[uVar11]), cVar6 != '\0' ||
                         ((byte)(pcVar20[uVar11] - 0x30U) < 10))) {
                    uVar11 = uVar11 + 1;
                    if ((sVar23 & 0xffffffff) == uVar11) goto LAB_142506442;
                  }
LAB_14250625b:
                  pcVar20 = (char *)0x0;
                  iVar7 = (int)local_90;
                }
                else {
                  iVar9 = strcmp(pcVar20,"posix");
                  if ((iVar9 != 0) || (iVar7 != 5)) {
                    puVar17 = (undefined8 *)FUN_1424da030(0x10);
                    if (puVar17 != (undefined8 *)0x0) {
                      *puVar17 = pcVar20;
                      puVar5 = puVar22;
                      if (puVar22 == (undefined8 *)0x0) {
                        puVar17[1] = 0;
                        puVar22 = puVar17;
                      }
                      else {
                        do {
                          puVar18 = puVar5;
                          iVar7 = strcmp(pcVar20,(char *)*puVar18);
                          if (iVar7 == 0) {
                            FUN_1424da110(puVar17);
                            if (local_61 != '\0') goto LAB_1425063d5;
                            goto LAB_14250625b;
                          }
                          puVar5 = (undefined8 *)puVar18[1];
                        } while ((undefined8 *)puVar18[1] != (undefined8 *)0x0);
                        puVar18[1] = puVar17;
                        puVar17[1] = 0;
                      }
                      goto LAB_14250625b;
                    }
                    iVar7 = 7;
                    goto LAB_142506439;
                  }
                  local_b0 = CONCAT71((int7)(CONCAT44(extraout_var,iVar9) >> 8),1);
                  pcVar20 = (char *)0x0;
                }
              }
            }
            else {
              if ((cVar6 == '_') || (cVar6 == '-')) {
                *pcVar14 = '\0';
                bVar2 = true;
                goto LAB_142506112;
              }
              if (pcVar20 == (char *)0x0) {
                pcVar20 = pcVar14;
              }
              bVar2 = true;
            }
            pcVar14 = pcVar14 + 1;
          } while (bVar2);
LAB_142506442:
          uVar12 = local_b0;
          puVar17 = puVar22;
          if (*local_70 < 1) {
            for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)puVar17[1]) {
              (**(code **)(*local_88 + 8))(local_88,L"-`[Left Bracket",1);
              pcVar14 = (char *)*puVar17;
              sVar23 = strlen(pcVar14);
              (**(code **)(*local_88 + 8))(local_88,pcVar14,sVar23 & 0xffffffff);
            }
          }
          while (puVar22 != (undefined8 *)0x0) {
            puVar17 = (undefined8 *)puVar22[1];
            FUN_1424da110(puVar22);
            puVar22 = puVar17;
          }
          goto LAB_1425064db;
        }
      }
      else if (local_61 != '\0') goto LAB_1425062d0;
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
LAB_142505fd3:
    local_218 = 0;
    if (0 < *local_70) goto LAB_142505fed;
    uVar8 = FUN_1424e8d90(local_2f8,&local_2b8,4,&local_218);
    sVar23 = (size_t)uVar8;
    if ((0 < (int)local_218) || (local_218 == -0x7c)) goto LAB_1425062c3;
    if ((int)uVar8 < 1) goto LAB_142505fed;
    if (uVar8 == 3) {
      if ((((byte)((char)local_2b8 - 0x30U) < 10) && ((byte)(local_2b8._1_1_ - 0x30U) < 10)) &&
         (0xf5 < (byte)(local_2b8._2_1_ - 0x3aU))) {
LAB_142506302:
        (**(code **)(*local_88 + 8))(local_88,L"-`[Left Bracket",1);
        plVar21 = local_88;
        if (local_2b8._2_1_ == '\0' && (short)local_2b8 == 0x5542) {
          lVar13 = 1;
LAB_1425075ad:
          strcpy((char *)&local_2b8,&DAT_1499d8660 + lVar13 * 3);
          sVar23 = strlen((char *)&local_2b8);
        }
        else {
          if (local_2b8._2_1_ == '\0' && (short)local_2b8 == 0x4444) {
            lVar13 = 3;
            goto LAB_1425075ad;
          }
          if (local_2b8._2_1_ == '\0' && (short)local_2b8 == 0x5846) {
            lVar13 = 5;
            goto LAB_1425075ad;
          }
          if (local_2b8._2_1_ == '\0' && (short)local_2b8 == 0x5054) {
            lVar13 = 7;
            goto LAB_1425075ad;
          }
          if (local_2b8._2_1_ == '\0' && (short)local_2b8 == 0x4459) {
            lVar13 = 9;
            goto LAB_1425075ad;
          }
          if (local_2b8._2_1_ == '\0' && (short)local_2b8 == 0x525a) {
            lVar13 = 0xb;
            goto LAB_1425075ad;
          }
        }
        (**(code **)(*plVar21 + 8))(plVar21,&local_2b8,sVar23 & 0xffffffff);
        goto LAB_142505fed;
      }
    }
    else if ((uVar8 == 2) && (cVar6 = FUN_1425038e0(local_2b8 & 0xff), cVar6 != '\0')) {
      cVar6 = FUN_1425038e0(local_2b8._1_1_);
      if (cVar6 != '\0') goto LAB_142506302;
    }
LAB_1425062c3:
    if (local_61 == '\0') goto LAB_142505fed;
LAB_1425062d0:
    *local_70 = 1;
    uVar12 = 0;
  }
LAB_1425064db:
  piVar27 = local_70;
  lVar13 = local_2f8;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_258 = 0;
  local_a8 = 0;
  local_218 = 0;
  local_210 = local_200;
  local_208 = 8;
  local_204 = '\0';
  local_110[0] = 0;
  local_108 = local_f8;
  local_100 = 8;
  local_fc = '\0';
  local_390[0] = 0;
  local_388 = local_378;
  local_380 = 8;
  local_37c = '\0';
  lVar19 = FUN_1424e8740(local_2f8,local_70);
  if ((((char)uVar12 != '\0') || (*piVar27 < 1)) && (lVar19 != 0 || (char)uVar12 != '\0')) {
    local_b8 = (undefined8 *)0x0;
    local_170[0] = 0;
    local_168 = local_158;
    local_160 = 8;
    local_15c = '\0';
    local_74 = 0;
    pcVar14 = (char *)0x0;
    _Str = (int *)0x0;
    local_98 = (char *)0x0;
    local_b0 = uVar12;
    local_90 = lVar19;
LAB_142506633:
    local_338 = (int *)(local_32c + 1);
    local_330 = 0x28;
    local_32c._0_2_ = 0;
    local_300 = 0;
    pcVar20 = (char *)FUN_142564bc0(local_90,0,piVar27);
    if (pcVar20 == (char *)0x0) goto LAB_142506735;
    local_a4 = 100;
    while (uVar12 = FUN_142503710(&local_338,local_a4,local_a4,&local_a4,&local_74), local_74 < 1) {
      local_9c = FUN_1424e74e0(lVar13,pcVar20,uVar12,local_a4,&local_74);
      if (local_74 != 0xf) {
        if (local_74 < 1) {
          FUN_142503520(&local_338,uVar12,local_9c,&local_74);
          if (local_74 == -0x7c) {
            local_74 = 0;
          }
          sVar23 = strlen(pcVar20);
          iVar7 = strcmp(pcVar20,"attribute");
          if (iVar7 == 0) {
            if ((int)local_9c < 1) goto LAB_142506d3a;
            uVar8 = 0;
            local_80 = pcVar14;
            goto LAB_142506970;
          }
          if ((int)sVar23 < 2) {
            if (*pcVar20 == 'x') {
              cVar6 = FUN_142505750(local_338);
joined_r0x000142506c3c:
              if (cVar6 != '\0') {
                local_118 = local_338;
                puVar22 = (undefined8 *)FUN_142509f50(local_170,&local_118,&local_9c,&local_74);
                local_98 = pcVar20;
                if (puVar22 == (undefined8 *)0x0) {
                  *piVar27 = 7;
                }
                else {
                  if (local_74 < 1) {
                    _Str = (int *)*puVar22;
                    goto LAB_142506d3a;
                  }
                  *piVar27 = local_74;
                }
                iVar7 = 3;
                goto LAB_14250673a;
              }
            }
            else if ((int)sVar23 == 1) {
              cVar6 = FUN_1425038e0();
              if (((cVar6 != '\0') || ((byte)(*pcVar20 - 0x30U) < 10)) &&
                 (cVar6 = FUN_142503910(), cVar6 != 'x')) {
                cVar6 = FUN_1425055b0(local_338);
                goto joined_r0x000142506c3c;
              }
            }
            if (local_61 != '\0') goto LAB_14250672d;
            iVar7 = 2;
            goto LAB_14250673a;
          }
          local_98 = (char *)FUN_1424ea510(pcVar20);
          if (local_98 == (char *)0x0) {
            if (local_61 == '\0') {
              iVar7 = 2;
            }
            else {
              *piVar27 = 1;
              iVar7 = 3;
            }
            local_98 = (char *)0x0;
            goto LAB_14250673a;
          }
          _Str = (int *)FUN_1424ea550(pcVar20);
          uVar8 = local_160;
          if (_Str == (int *)0x0) {
            if (local_61 == '\0') {
              iVar7 = 2;
              _Str = (int *)0x0;
            }
            else {
              *piVar27 = 1;
              iVar7 = 3;
              _Str = (int *)0x0;
            }
            goto LAB_14250673a;
          }
          if (_Str != local_338) goto LAB_142506d3a;
          if (local_170[0] == local_160) {
            uVar26 = local_160 * 2;
            if (local_160 == 8) {
              uVar26 = 0x20;
            }
            if (((int)uVar26 < 1) ||
               (local_80 = (char *)FUN_1424da030((ulonglong)uVar26 << 3), local_80 == (char *)0x0))
            goto LAB_14250670c;
            if (0 < (int)uVar8) {
              if ((int)local_160 < (int)uVar8) {
                uVar8 = local_160;
              }
              if ((int)uVar26 <= (int)uVar8) {
                uVar8 = uVar26;
              }
              memcpy(local_80,local_168,(longlong)(int)uVar8 << 3);
            }
            if (local_15c != '\0') {
              FUN_1424da110(local_168);
            }
            local_168 = local_80;
            local_15c = '\x01';
            local_160 = uVar26;
          }
          plVar21 = (longlong *)thunk_FUN_1424da030(0x40);
          if (plVar21 == (longlong *)0x0) {
            pcVar20 = local_168;
            uVar8 = local_170[0];
            local_170[0] = local_170[0] + 1;
            goto LAB_142506e6f;
          }
          *plVar21 = (longlong)plVar21 + 0xd;
          *(undefined4 *)(plVar21 + 1) = 0x28;
          *(undefined2 *)((longlong)plVar21 + 0xc) = 0;
          *(undefined4 *)(plVar21 + 7) = 0;
          lVar19 = (longlong)(int)local_170[0];
          local_170[0] = local_170[0] + 1;
          *(longlong **)(local_168 + lVar19 * 8) = plVar21;
          sVar23 = strlen((char *)_Str);
          pcVar20 = (char *)FUN_142503710(plVar21,sVar23 & 0xffffffff,sVar23 & 0xffffffff,&local_118
                                          ,&local_74);
          if (local_74 < 1) {
            local_80 = pcVar20;
            strcpy(pcVar20,(char *)_Str);
            FUN_142503930(local_80);
            FUN_142503520(plVar21,local_80,sVar23 & 0xffffffff,&local_74);
            if (local_74 < 1) {
              _Str = (int *)*plVar21;
              goto LAB_142506d3a;
            }
          }
          *piVar27 = local_74;
          goto LAB_142506735;
        }
        break;
      }
      local_74 = 0;
      local_a4 = local_9c;
    }
    if (local_74 == 7) goto LAB_14250670c;
    if (local_61 != '\0') goto LAB_14250672d;
    local_74 = 0;
    iVar7 = 2;
    goto LAB_14250673a;
  }
  goto LAB_1425071f5;
LAB_142506970:
  uVar26 = local_9c;
  local_a8 = 0;
  if ((int)uVar8 < (int)local_9c) {
    lVar19 = (longlong)(int)uVar8;
    cVar6 = *(char *)((longlong)local_338 + lVar19);
    uVar11 = 0;
    if (cVar6 != '-') {
      uVar8 = ~uVar8 + local_9c;
      uVar11 = 0;
      do {
        local_a8 = (int)uVar11 + 1;
        *(char *)((longlong)&local_2b8 + uVar11) = cVar6;
        if (uVar8 == uVar11) {
          uVar24 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar24;
          uVar8 = uVar26;
          goto joined_r0x0001425069e4;
        }
        cVar6 = *(char *)((longlong)local_338 + lVar19 + 1);
        lVar19 = lVar19 + 1;
        uVar11 = uVar11 + 1;
      } while (cVar6 != '-');
    }
    uVar8 = (int)lVar19 + 1;
    uVar24 = (uint)uVar11;
joined_r0x0001425069e4:
    if ((int)uVar24 < 1) goto LAB_1425069f0;
    *(undefined1 *)((longlong)&local_2b8 + (uVar11 & 0xffffffff)) = 0;
  }
  else {
LAB_1425069f0:
    if ((int)uVar26 <= (int)uVar8) goto LAB_142506cc2;
  }
  uVar26 = local_208;
  if (local_218 != local_208) {
LAB_142506a97:
    pcVar14 = (char *)thunk_FUN_1424da030(0x10);
    if (pcVar14 == (char *)0x0) {
      lVar19 = (longlong)(int)local_218;
      local_218 = local_218 + 1;
      *(undefined8 *)(local_210 + lVar19 * 8) = 0;
      goto LAB_142506cba;
    }
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar14[8] = '\0';
    pcVar14[9] = '\0';
    pcVar14[10] = '\0';
    pcVar14[0xb] = '\0';
    pcVar14[0xc] = '\0';
    pcVar14[0xd] = '\0';
    pcVar14[0xe] = '\0';
    pcVar14[0xf] = '\0';
    lVar19 = (longlong)(int)local_218;
    local_218 = local_218 + 1;
    *(char **)(local_210 + lVar19 * 8) = pcVar14;
    puVar22 = (undefined8 *)FUN_142509d90(local_390,&local_2b8,&local_a8,piVar27);
    pcVar20 = local_80;
    if (puVar22 == (undefined8 *)0x0) {
      *piVar27 = 7;
LAB_142506ce3:
      _Str = (int *)0x0;
      local_98 = "attribute";
      pcVar14 = local_80;
      goto LAB_142506d3a;
    }
    if (0 < *piVar27) goto LAB_142506ce3;
    pcVar1 = (char *)*puVar22;
    *(char **)pcVar14 = pcVar1;
    pcVar28 = pcVar14;
    if (local_80 == (char *)0x0) {
      pcVar29 = (char *)0x0;
    }
    else {
      iVar7 = strcmp(pcVar1,*(char **)local_80);
      piVar27 = local_70;
      pcVar29 = local_80;
      if (-1 < iVar7) {
        do {
          pcVar28 = pcVar20;
          if (iVar7 == 0) {
            piVar27 = local_70;
            if (local_61 == '\0') goto LAB_142506970;
            *local_70 = 1;
            goto LAB_142506cc2;
          }
          pcVar20 = *(char **)(pcVar28 + 8);
        } while ((pcVar20 != (char *)0x0) && (iVar7 = strcmp(pcVar1,*(char **)pcVar20), -1 < iVar7))
        ;
        *(char **)(pcVar28 + 8) = pcVar14;
        piVar27 = local_70;
        pcVar29 = pcVar20;
        pcVar28 = local_80;
      }
    }
    local_80 = pcVar28;
    *(char **)(pcVar14 + 8) = pcVar29;
    goto LAB_142506970;
  }
  uVar24 = local_208 * 2;
  if (local_208 == 8) {
    uVar24 = 0x20;
  }
  if ((0 < (int)uVar24) &&
     (_Dst = (undefined1 *)FUN_1424da030((ulonglong)uVar24 << 3), _Dst != (undefined1 *)0x0)) {
    if (0 < (int)uVar26) {
      if ((int)local_208 < (int)uVar26) {
        uVar26 = local_208;
      }
      if ((int)uVar24 <= (int)uVar26) {
        uVar26 = uVar24;
      }
      memcpy(_Dst,local_210,(longlong)(int)uVar26 << 3);
    }
    if (local_204 != '\0') {
      FUN_1424da110(local_210);
    }
    local_204 = '\x01';
    local_210 = _Dst;
    local_208 = uVar24;
    goto LAB_142506a97;
  }
LAB_142506cba:
  *piVar27 = 7;
LAB_142506cc2:
  _Str = (int *)0x0;
  local_98 = "attribute";
  pcVar14 = local_80;
LAB_142506d3a:
  uVar8 = local_100;
  if (local_110[0] == local_100) {
    uVar26 = local_100 * 2;
    if (local_100 == 8) {
      uVar26 = 0x20;
    }
    if ((0 < (int)uVar26) &&
       (local_80 = (char *)FUN_1424da030((ulonglong)uVar26 << 3), local_80 != (char *)0x0)) {
      if (0 < (int)uVar8) {
        if ((int)local_100 < (int)uVar8) {
          uVar8 = local_100;
        }
        if ((int)uVar26 <= (int)uVar8) {
          uVar8 = uVar26;
        }
        memcpy(local_80,local_108,(longlong)(int)uVar8 << 3);
      }
      if (local_fc != '\0') {
        FUN_1424da110(local_108);
      }
      local_108 = local_80;
      local_fc = '\x01';
      local_100 = uVar26;
      goto LAB_142506de1;
    }
LAB_14250670c:
    *piVar27 = 7;
  }
  else {
LAB_142506de1:
    puVar22 = (undefined8 *)thunk_FUN_1424da030(0x18);
    if (puVar22 == (undefined8 *)0x0) {
      pcVar20 = local_108;
      uVar8 = local_110[0];
      local_110[0] = local_110[0] + 1;
LAB_142506e6f:
      pcVar20 = pcVar20 + (longlong)(int)uVar8 * 8;
      pcVar20[0] = '\0';
      pcVar20[1] = '\0';
      pcVar20[2] = '\0';
      pcVar20[3] = '\0';
      pcVar20[4] = '\0';
      pcVar20[5] = '\0';
      pcVar20[6] = '\0';
      pcVar20[7] = '\0';
      goto LAB_14250670c;
    }
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22[2] = 0;
    lVar19 = (longlong)(int)local_110[0];
    local_110[0] = local_110[0] + 1;
    *(undefined8 **)(local_108 + lVar19 * 8) = puVar22;
    *puVar22 = local_98;
    puVar22[1] = _Str;
    cVar6 = FUN_14250a0c0(&local_b8,puVar22,1);
    iVar7 = 0;
    if ((local_61 == '\0') || (cVar6 != '\0')) goto LAB_14250673a;
LAB_14250672d:
    *piVar27 = 1;
  }
LAB_142506735:
  iVar7 = 3;
LAB_14250673a:
  if (local_32c[0] != '\0') {
    FUN_1424da110(local_338);
  }
  uVar8 = local_100;
  if (iVar7 == 3) goto LAB_142506eb4;
  goto LAB_142506633;
LAB_142506eb4:
  if ((char)local_b0 == '\0') {
LAB_142506fb6:
    plVar21 = local_88;
    if ((*piVar27 < 1) && (local_b8 != (undefined8 *)0x0 || pcVar14 != (char *)0x0)) {
      bVar2 = false;
      for (puVar22 = local_b8; puVar22 != (undefined8 *)0x0; puVar22 = (undefined8 *)puVar22[2]) {
        pcVar20 = (char *)*puVar22;
        bVar3 = !bVar2;
        bVar2 = true;
        if (bVar3) {
          sVar23 = strlen(pcVar20);
          if (sVar23 < 2) {
            bVar2 = false;
          }
          else {
            (**(code **)(*local_88 + 8))(local_88,&DAT_1499d89fc,2);
            pcVar20 = (char *)*puVar22;
          }
        }
        iVar7 = strcmp(pcVar20,"attribute");
        plVar4 = local_88;
        pcVar20 = pcVar14;
        if (iVar7 == 0) {
          for (; pcVar20 != (char *)0x0; pcVar20 = *(char **)(pcVar20 + 8)) {
            (**(code **)(*plVar21 + 8))(plVar21,L"-`[Left Bracket",1);
            pcVar1 = *(char **)pcVar20;
            sVar23 = strlen(pcVar1);
            (**(code **)(*plVar21 + 8))(plVar21,pcVar1,sVar23 & 0xffffffff);
          }
        }
        else {
          (**(code **)(*local_88 + 8))(local_88,L"-`[Left Bracket",1);
          pcVar20 = (char *)*puVar22;
          sVar23 = strlen(pcVar20);
          (**(code **)(*plVar4 + 8))(plVar4,pcVar20,sVar23 & 0xffffffff);
          (**(code **)(*plVar4 + 8))(plVar4,L"-`[Left Bracket",1);
          pcVar20 = (char *)puVar22[1];
          sVar23 = strlen(pcVar20);
          (**(code **)(*plVar4 + 8))(plVar4,pcVar20,sVar23 & 0xffffffff);
        }
      }
    }
    if (0 < (int)local_170[0]) {
      lVar13 = 0;
      uVar8 = local_170[0];
      do {
        puVar22 = *(undefined8 **)(local_168 + lVar13 * 8);
        if (puVar22 != (undefined8 *)0x0) {
          if (*(char *)((longlong)puVar22 + 0xc) != '\0') {
            FUN_1424da110(*puVar22);
          }
          FUN_1401773f0(puVar22);
          uVar8 = local_170[0];
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar8);
    }
    lVar19 = local_90;
    piVar27 = local_70;
    if (local_15c != '\0') {
      FUN_1424da110(local_168);
      lVar19 = local_90;
      piVar27 = local_70;
    }
  }
  else {
    if (local_110[0] == local_100) {
      uVar11 = 0x20;
      if (local_100 != 8) {
        uVar11 = (ulonglong)(local_100 * 2);
      }
      uVar26 = (uint)uVar11;
      if ((0 < (int)uVar26) &&
         (pcVar20 = (char *)FUN_1424da030(uVar11 << 3), pcVar20 != (char *)0x0)) {
        if (0 < (int)uVar8) {
          if ((int)local_100 < (int)uVar8) {
            uVar8 = local_100;
          }
          uVar25 = (ulonglong)uVar8;
          if ((int)uVar26 <= (int)uVar8) {
            uVar25 = uVar11;
          }
          memcpy(pcVar20,local_108,(longlong)(int)uVar25 << 3);
        }
        if (local_fc != '\0') {
          FUN_1424da110(local_108);
        }
        local_fc = '\x01';
        local_108 = pcVar20;
        local_100 = uVar26;
        goto LAB_142506f53;
      }
    }
    else {
LAB_142506f53:
      puVar22 = (undefined8 *)thunk_FUN_1424da030(0x18);
      if (puVar22 != (undefined8 *)0x0) {
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        lVar13 = (longlong)(int)local_110[0];
        local_110[0] = local_110[0] + 1;
        *(undefined8 **)(local_108 + lVar13 * 8) = puVar22;
        *puVar22 = &DAT_1499d8694;
        puVar22[1] = "posix";
        FUN_14250a0c0(&local_b8,puVar22,1);
        goto LAB_142506fb6;
      }
      lVar13 = (longlong)(int)local_110[0];
      local_110[0] = local_110[0] + 1;
      pcVar14 = local_108 + lVar13 * 8;
      pcVar14[0] = '\0';
      pcVar14[1] = '\0';
      pcVar14[2] = '\0';
      pcVar14[3] = '\0';
      pcVar14[4] = '\0';
      pcVar14[5] = '\0';
      pcVar14[6] = '\0';
      pcVar14[7] = '\0';
    }
    *piVar27 = 7;
    if (0 < (int)local_170[0]) {
      lVar13 = 0;
      uVar8 = local_170[0];
      do {
        puVar22 = *(undefined8 **)(local_168 + lVar13 * 8);
        if (puVar22 != (undefined8 *)0x0) {
          if (*(char *)((longlong)puVar22 + 0xc) != '\0') {
            FUN_1424da110(*puVar22);
          }
          FUN_1401773f0(puVar22);
          uVar8 = local_170[0];
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar8);
    }
    lVar19 = local_90;
    if (local_15c != '\0') {
      FUN_1424da110(local_168);
      lVar19 = local_90;
    }
  }
LAB_1425071f5:
  if (lVar19 != 0) {
    FUN_142564960();
  }
  if (0 < local_390[0]) {
    lVar13 = 0;
    iVar7 = local_390[0];
    do {
      puVar22 = *(undefined8 **)(local_388 + lVar13 * 8);
      if (puVar22 != (undefined8 *)0x0) {
        if (*(char *)((longlong)puVar22 + 0xc) != '\0') {
          FUN_1424da110(*puVar22);
        }
        FUN_1401773f0(puVar22);
        iVar7 = local_390[0];
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar7);
  }
  if (local_37c != '\0') {
    FUN_1424da110(local_388);
  }
  if (0 < (int)local_110[0]) {
    lVar13 = 0;
    uVar8 = local_110[0];
    do {
      if (*(longlong *)(local_108 + lVar13 * 8) != 0) {
        FUN_1401773f0();
        uVar8 = local_110[0];
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uVar8);
  }
  if (local_fc != '\0') {
    FUN_1424da110(local_108);
  }
  if (0 < (int)local_218) {
    lVar13 = 0;
    uVar8 = local_218;
    do {
      if (*(longlong *)(local_210 + lVar13 * 8) != 0) {
        FUN_1401773f0();
        uVar8 = local_218;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)uVar8);
  }
  if (local_204 != '\0') {
    FUN_1424da110(local_210);
  }
  local_110[0] = 0;
  if (*piVar27 < 1) {
    pcVar14 = (char *)&local_2b8;
    iVar7 = FUN_1424e8ec0(local_2f8,pcVar14,0x9d,local_110);
    if (((int)local_110[0] < 1) && (local_110[0] != 0xffffff84)) {
      if (iVar7 < 1) {
        if (0 < *local_70) goto LAB_14250753a;
        iVar7 = 0;
      }
      else {
        pcVar20 = (char *)0x0;
        bVar2 = true;
        iVar7 = 0;
        do {
          cVar6 = *pcVar14;
          bVar3 = false;
          if (cVar6 == '\0') {
LAB_14250737b:
            if (pcVar20 == (char *)0x0) {
LAB_14250734c:
              pcVar20 = (char *)0x0;
            }
            else {
              cVar6 = *pcVar20;
              pcVar1 = pcVar20;
              while (cVar6 != '\0') {
                cVar6 = FUN_142503910();
                *pcVar1 = cVar6;
                cVar6 = pcVar1[1];
                pcVar1 = pcVar1 + 1;
              }
              sVar23 = strlen(pcVar20);
              if (7 < (int)sVar23 - 1U) {
LAB_142507524:
                if (local_61 != '\0') goto LAB_14250752d;
                break;
              }
              uVar11 = 0;
              do {
                cVar6 = FUN_1425038e0(pcVar20[uVar11]);
                if ((cVar6 == '\0') && (9 < (byte)(pcVar20[uVar11] - 0x30U))) goto LAB_142507524;
                uVar11 = uVar11 + 1;
              } while ((sVar23 & 0xffffffff) != uVar11);
              if ((bVar2) && (cVar6 = FUN_1425054f0(pcVar20,0xffffffff), cVar6 != '\0'))
              goto LAB_14250734c;
              if (iVar7 < 0x9d) {
                lVar13 = (longlong)iVar7;
                iVar7 = iVar7 + 1;
                *(undefined1 *)((longlong)&local_218 + lVar13) = 0x2d;
              }
              if (bVar2) {
                iVar9 = iVar7;
                if (iVar7 < 0x9d) {
                  lVar13 = (longlong)iVar7;
                  *(undefined1 *)((longlong)&local_218 + lVar13) = 0x78;
                  iVar9 = 0x9d;
                  if ((iVar7 == 0x9c) ||
                     (*(undefined1 *)((longlong)&local_218 + lVar13 + 1) = 0x2d, 0x9a < iVar7))
                  goto LAB_1425074f8;
                  iVar9 = FUN_142501310(8,0x9b - iVar7);
                  memcpy((void *)((longlong)&local_218 + lVar13 + 2),"lvariant",(longlong)iVar9);
                  iVar9 = iVar7 + 10;
                  if (iVar7 < 0x93) {
                    iVar7 = iVar7 + 0xb;
                    *(undefined1 *)((longlong)&local_210 + lVar13 + 2) = 0x2d;
                    goto LAB_1425074a5;
                  }
                }
                else {
LAB_1425074f8:
                  iVar9 = iVar9 + 8;
                }
                iVar7 = iVar9;
                sVar23 = strlen(pcVar20);
                iVar9 = (int)sVar23;
              }
              else {
LAB_1425074a5:
                sVar23 = strlen(pcVar20);
                iVar9 = (int)sVar23;
                if (iVar7 < 0x9d) {
                  iVar10 = FUN_142501310(sVar23 & 0xffffffff,0x9d - iVar7);
                  memcpy((void *)((longlong)&local_218 + (longlong)iVar7),pcVar20,(longlong)iVar10);
                }
              }
              iVar7 = iVar9 + iVar7;
              pcVar20 = (char *)0x0;
              bVar2 = false;
            }
          }
          else {
            if ((cVar6 == '_') || (cVar6 == '-')) {
              *pcVar14 = '\0';
              bVar3 = true;
              goto LAB_14250737b;
            }
            if (pcVar20 == (char *)0x0) {
              pcVar20 = pcVar14;
            }
            bVar3 = true;
          }
          pcVar14 = pcVar14 + 1;
        } while (bVar3);
        if (0 < *local_70) goto LAB_14250753a;
      }
      (**(code **)(*local_88 + 8))(local_88,&local_218,iVar7);
    }
    else if (local_61 != '\0') {
LAB_14250752d:
      *local_70 = 1;
    }
  }
LAB_14250753a:
  if ((char)local_2ec != '\0') {
    FUN_1424da110(local_2f8);
  }
  return;
}



// FUNCTION 1425075f0 Unwind@1425075f0 body=77 status=ok
// SIG undefined Unwind@1425075f0(void)

void Unwind_1425075f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x328) != 0) {
    FUN_142564960(*(undefined8 *)(param_2 + 0x328));
  }
  return;
}



// FUNCTION 142507640 Unwind@142507640 body=70 status=ok
// SIG undefined Unwind@142507640(void)

void Unwind_142507640(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x8c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 142507690 Unwind@142507690 body=122 status=ok
// SIG undefined Unwind@142507690(void)

void Unwind_142507690(undefined8 param_1,longlong param_2)

{
  FUN_14250a220(param_2 + 0x248);
  if (*(longlong *)(param_2 + 0x328) != 0) {
    FUN_142564960(*(undefined8 *)(param_2 + 0x328));
  }
  FUN_14250a220(param_2 + 0x28);
  FUN_14250a2a0(param_2 + 0x2a8);
  FUN_14250a300(param_2 + 0x1a0);
  return;
}



// FUNCTION 142507710 Unwind@142507710 body=70 status=ok
// SIG undefined Unwind@142507710(void)

void Unwind_142507710(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xcc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}



// FUNCTION 142507760 FUN_142507760 body=145 status=ok
// SIG undefined FUN_142507760(void)

undefined4
FUN_142507760(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             int *param_5)

{
  undefined4 uVar1;
  undefined1 local_58 [24];
  undefined4 local_40;
  char local_3c;
  
  uVar1 = 0;
  if (*param_5 < 1) {
    FUN_14257c370(local_58);
    FUN_142507800(param_1,0xffffffff,local_58,param_4,param_5);
    if (*param_5 < 1) {
      if (local_3c == '\0') {
        FUN_142504d00(param_2,param_3,local_40,param_5);
      }
      else {
        *param_5 = 0xf;
      }
    }
    FUN_14257c350(local_58);
    uVar1 = local_40;
  }
  return uVar1;
}



// FUNCTION 142507800 FUN_142507800 body=5162 status=ok
// SIG undefined FUN_142507800(void)

void FUN_142507800(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  int *param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  char *pcVar9;
  undefined1 *_Dst;
  longlong lVar10;
  int *piVar11;
  undefined4 extraout_var;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  char *pcVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 unaff_R12;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  ulonglong uVar25;
  char local_268 [136];
  undefined8 *local_1e0;
  undefined4 local_1d8;
  uint local_1d0 [2];
  undefined8 *local_1c8;
  uint local_1c0;
  char local_1bc;
  undefined8 local_1b8 [8];
  int local_178 [2];
  undefined1 *local_170;
  int local_168;
  char local_164;
  undefined1 local_160 [64];
  undefined8 *local_120;
  int local_114;
  int *local_110;
  int local_108;
  int local_104;
  undefined8 local_100;
  uint local_f8;
  undefined8 *local_f0;
  uint local_e8;
  char local_e4;
  undefined8 local_e0 [8];
  undefined8 *local_a0;
  int local_98;
  int local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  int local_7c;
  char *local_78;
  undefined8 *local_70;
  char local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar7 = (undefined8 *)FUN_142508dc0(param_1,param_2,param_4,param_5);
  local_120 = puVar7;
  if (*param_5 < 1) {
    pcVar23 = (char *)puVar7[(ulonglong)
                             (((puVar7[3] != 0) + 1) - (uint)(puVar7[2] == 0) !=
                             -(uint)(puVar7[4] != 0)) + 1];
    iVar6 = strcmp(pcVar23,"und");
    uVar20 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    local_90 = puVar7;
    if ((iVar6 != 0) && (sVar8 = strlen(pcVar23), 0 < (int)sVar8)) {
      (**(code **)(*param_3 + 8))(param_3,pcVar23,sVar8 & 0xffffffff);
      uVar20 = 0;
      puVar7 = local_90;
    }
    pcVar23 = (char *)puVar7[5];
    sVar8 = strlen(pcVar23);
    if (0 < (int)sVar8) {
      (**(code **)(*param_3 + 8))(param_3,L"_Common",1);
      local_268[0] = FUN_1425038f0(*pcVar23);
      (**(code **)(*param_3 + 8))(param_3,local_268,1);
      (**(code **)(*param_3 + 8))(param_3,pcVar23 + 1,(int)sVar8 + -1);
      uVar20 = 0;
      puVar7 = local_90;
    }
    pcVar23 = (char *)puVar7[6];
    sVar8 = strlen(pcVar23);
    if (0 < (int)sVar8) {
      (**(code **)(*param_3 + 8))(param_3,L"_Common",1);
      for (; *pcVar23 != '\0'; pcVar23 = pcVar23 + 1) {
        local_268[0] = FUN_1425038f0();
        (**(code **)(*param_3 + 8))(param_3,local_268,1);
      }
      uVar20 = 0;
      puVar7 = local_90;
    }
    lVar10 = puVar7[7];
    if (lVar10 != 0) {
      uVar24 = 0xffffffff;
      do {
        lVar10 = *(longlong *)(lVar10 + 8);
        uVar24 = uVar24 + 1;
      } while (lVar10 != 0);
      if ((int)sVar8 < 1) {
        (**(code **)(*param_3 + 8))(param_3,L"_Common",1);
        uVar20 = 0;
      }
      local_78 = (char *)CONCAT44(local_78._4_4_,uVar20);
      iVar6 = 1;
      for (uVar21 = 0; uVar21 <= uVar24; uVar21 = uVar21 + 1) {
        iVar15 = iVar6;
        for (puVar7 = (undefined8 *)local_90[7]; puVar7 != (undefined8 *)0x0;
            puVar7 = (undefined8 *)puVar7[1]) {
          iVar15 = iVar15 + -1;
          if (iVar15 == 0) {
            pcVar23 = (char *)*puVar7;
            goto LAB_142507a43;
          }
        }
        pcVar23 = (char *)0x0;
LAB_142507a43:
        (**(code **)(*param_3 + 8))(param_3,L"_Common",1);
        for (; *pcVar23 != '\0'; pcVar23 = pcVar23 + 1) {
          local_268[0] = FUN_1425038f0();
          (**(code **)(*param_3 + 8))(param_3,local_268,1);
        }
        iVar6 = iVar6 + 1;
      }
      puVar7 = local_90;
      uVar20 = local_78._0_4_;
    }
    if (puVar7[8] == 0) {
      puVar12 = local_90;
      if (*(char *)puVar7[9] == '\0') goto LAB_142508c49;
    }
    else if ((char)uVar20 != '\0') {
      (**(code **)(*param_3 + 8))(param_3,&DAT_1499d83e0,3);
    }
    local_f8 = 0;
    local_f0 = local_e0;
    local_e8 = 8;
    local_e4 = '\0';
    local_1d0[0] = 0;
    local_1c8 = local_1b8;
    local_1c0 = 8;
    local_1bc = '\0';
    if (*param_5 < 1) {
      local_61 = local_90[7] != 0;
      lVar10 = local_90[8];
      local_114 = 0;
      if (lVar10 != 0) {
        local_114 = 0;
        do {
          local_114 = local_114 + 1;
          lVar10 = *(longlong *)(lVar10 + 0x10);
        } while (lVar10 != 0);
      }
      local_98 = 1;
      iVar6 = 0;
      puVar7 = (undefined8 *)0x0;
      while (uVar24 = local_e8, iVar6 < local_114) {
        puVar12 = (undefined8 *)local_90[8];
        puVar13 = puVar12;
        iVar15 = local_98;
        if (puVar12 == (undefined8 *)0x0) {
          pcVar23 = (char *)0x0;
        }
        else {
          do {
            iVar16 = local_98;
            if (iVar15 + -1 == 0) {
              pcVar23 = (char *)*puVar13;
              goto LAB_142507bf0;
            }
            puVar18 = puVar13 + 2;
            puVar13 = (undefined8 *)*puVar18;
            iVar15 = iVar15 + -1;
          } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
          pcVar23 = (char *)0x0;
LAB_142507bf0:
          do {
            if (iVar16 + -1 == 0) {
              pcVar9 = (char *)puVar12[1];
              cVar4 = *pcVar23;
              goto joined_r0x000142507e88;
            }
            puVar12 = (undefined8 *)puVar12[2];
            iVar16 = iVar16 + -1;
          } while (puVar12 != (undefined8 *)0x0);
        }
        pcVar9 = (char *)0x0;
        cVar4 = *pcVar23;
joined_r0x000142507e88:
        local_108 = iVar6;
        if (cVar4 != 'u') {
          if (local_f8 == local_e8) {
            uVar21 = local_e8 * 2;
            if (local_e8 == 8) {
              uVar21 = 0x20;
            }
            if ((0 < (int)uVar21) &&
               (puVar12 = (undefined8 *)FUN_1424da030((ulonglong)uVar21 << 3),
               puVar12 != (undefined8 *)0x0)) {
              if (0 < (int)uVar24) {
                if ((int)local_e8 < (int)uVar24) {
                  uVar24 = local_e8;
                }
                if ((int)uVar21 <= (int)uVar24) {
                  uVar24 = uVar21;
                }
                memcpy(puVar12,local_f0,(longlong)(int)uVar24 << 3);
              }
              if (local_e4 != '\0') {
                FUN_1424da110(local_f0);
              }
              local_e4 = '\x01';
              local_f0 = puVar12;
              local_e8 = uVar21;
              goto LAB_142507f2c;
            }
          }
          else {
LAB_142507f2c:
            puVar12 = (undefined8 *)thunk_FUN_1424da030(0x18);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              lVar10 = (longlong)(int)local_f8;
              local_f8 = local_f8 + 1;
              local_f0[lVar10] = puVar12;
              *puVar12 = pcVar23;
              puVar12[1] = pcVar9;
              puVar13 = puVar12;
              if (puVar7 == (undefined8 *)0x0) {
                puVar18 = (undefined8 *)0x0;
              }
              else {
                iVar6 = strcmp(pcVar23,(char *)*puVar7);
                puVar18 = puVar7;
                if (-1 < iVar6) {
                  do {
                    puVar13 = puVar18;
                    if (iVar6 == 0) goto LAB_142508aa8;
                    puVar18 = (undefined8 *)puVar13[2];
                  } while ((puVar18 != (undefined8 *)0x0) &&
                          (iVar6 = strcmp(pcVar23,(char *)*puVar18), -1 < iVar6));
                  puVar13[2] = puVar12;
                  puVar13 = puVar7;
                }
              }
              puVar12[2] = puVar18;
              goto LAB_142507b82;
            }
            lVar10 = (longlong)(int)local_f8;
            local_f8 = local_f8 + 1;
            local_f0[lVar10] = 0;
          }
          *param_5 = 7;
          goto LAB_142508ab9;
        }
        local_178[0] = 0;
        local_170 = local_160;
        local_168 = 8;
        local_164 = '\0';
        cVar4 = *pcVar9;
        bVar5 = true;
        local_a0 = puVar7;
        if (cVar4 == '\0') {
          local_70 = (undefined8 *)0x0;
          pcVar9 = (char *)0x0;
        }
        else {
          uVar25 = 0;
          local_88 = (undefined8 *)0x0;
          do {
            puVar7 = local_a0;
            sVar8 = 0;
            while ((cVar4 != '\0' && (cVar4 != '-'))) {
              lVar10 = sVar8 + 1;
              sVar8 = sVar8 + 1;
              cVar4 = pcVar9[lVar10];
            }
            if (((int)sVar8 == 2) &&
               (((cVar4 = FUN_1425038e0(), cVar4 != '\0' || ((byte)(*pcVar9 - 0x30U) < 10)) &&
                (cVar4 = FUN_1425038e0(), cVar4 != '\0')))) goto LAB_1425085b4;
            iVar6 = local_168;
            local_78 = pcVar9;
            if (local_178[0] == local_168) {
              iVar15 = local_168 * 2;
              if (local_168 == 8) {
                iVar15 = 0x20;
              }
              if ((0 < iVar15) && (_Dst = (undefined1 *)FUN_1424da030(), _Dst != (undefined1 *)0x0))
              {
                if (0 < iVar6) {
                  if (local_168 < iVar6) {
                    iVar6 = local_168;
                  }
                  if (iVar15 <= iVar6) {
                    iVar6 = iVar15;
                  }
                  memcpy(_Dst,local_170,(longlong)iVar6 << 3);
                }
                if (local_164 != '\0') {
                  FUN_1424da110(local_170);
                }
                local_164 = '\x01';
                local_170 = _Dst;
                local_168 = iVar15;
                goto LAB_142507d8e;
              }
LAB_14250800a:
              *param_5 = 7;
LAB_142508012:
              local_70 = (undefined8 *)0x0;
              bVar5 = false;
              pcVar9 = (char *)0x0;
              puVar7 = local_a0;
              goto LAB_142508027;
            }
LAB_142507d8e:
            puVar7 = (undefined8 *)thunk_FUN_1424da030(0x10);
            if (puVar7 == (undefined8 *)0x0) {
              lVar10 = (longlong)local_178[0];
              local_178[0] = local_178[0] + 1;
              *(undefined8 *)(local_170 + lVar10 * 8) = 0;
              goto LAB_14250800a;
            }
            *puVar7 = 0;
            puVar7[1] = 0;
            lVar10 = (longlong)local_178[0];
            local_178[0] = local_178[0] + 1;
            *(undefined8 **)(local_170 + lVar10 * 8) = puVar7;
            if (100 - (int)uVar25 <= (int)sVar8) {
LAB_142507fe1:
              *param_5 = 1;
              goto LAB_142508012;
            }
            uVar25 = uVar25 & 0xffffffff;
            pcVar23 = local_268 + uVar25;
            memcpy(pcVar23,local_78,sVar8);
            local_268[uVar25 + sVar8 & 0xffffffff] = '\0';
            puVar12 = local_88;
            *puVar7 = pcVar23;
            puVar13 = puVar7;
            if (local_88 == (undefined8 *)0x0) {
              puVar18 = (undefined8 *)0x0;
            }
            else {
              iVar6 = strcmp(pcVar23,(char *)*local_88);
              puVar18 = local_88;
              if (-1 < iVar6) {
                do {
                  puVar13 = puVar12;
                  if (iVar6 == 0) goto LAB_142507fe1;
                  puVar12 = (undefined8 *)puVar13[1];
                } while ((puVar12 != (undefined8 *)0x0) &&
                        (iVar6 = strcmp(pcVar23,(char *)*puVar12), -1 < iVar6));
                puVar13[1] = puVar7;
                puVar18 = puVar12;
                puVar13 = local_88;
              }
            }
            local_88 = puVar13;
            puVar7[1] = puVar18;
            pcVar9 = local_78 + ((sVar8 + 1) - (ulonglong)(local_78[sVar8] == '\0'));
            uVar25 = uVar25 + sVar8 + 1;
            cVar4 = *pcVar9;
          } while (cVar4 != '\0');
          pcVar9 = (char *)0x0;
          puVar7 = local_a0;
LAB_1425085b4:
          uVar24 = local_e8;
          bVar5 = true;
          if (local_88 == (undefined8 *)0x0) {
            local_70 = (undefined8 *)0x0;
          }
          else {
            if (local_f8 == local_e8) {
              uVar21 = local_e8 * 2;
              if (local_e8 == 8) {
                uVar21 = 0x20;
              }
              if ((0 < (int)uVar21) &&
                 (puVar12 = (undefined8 *)FUN_1424da030(), puVar12 != (undefined8 *)0x0)) {
                if (0 < (int)uVar24) {
                  if ((int)local_e8 < (int)uVar24) {
                    uVar24 = local_e8;
                  }
                  if ((int)uVar21 <= (int)uVar24) {
                    uVar24 = uVar21;
                  }
                  memcpy(puVar12,local_f0,(longlong)(int)uVar24 << 3);
                }
                if (local_e4 != '\0') {
                  FUN_1424da110(local_f0);
                }
                local_e4 = '\x01';
                local_f0 = puVar12;
                local_e8 = uVar21;
                goto LAB_14250866c;
              }
LAB_142508872:
              *param_5 = 7;
            }
            else {
LAB_14250866c:
              puVar12 = local_88;
              local_70 = (undefined8 *)thunk_FUN_1424da030(0x18);
              uVar24 = local_1c0;
              if (local_70 == (undefined8 *)0x0) {
                puVar12 = local_f0;
                uVar24 = local_f8;
                local_f8 = local_f8 + 1;
LAB_14250886a:
                puVar12[(int)uVar24] = 0;
                goto LAB_142508872;
              }
              *local_70 = 0;
              local_70[1] = 0;
              local_70[2] = 0;
              lVar10 = (longlong)(int)local_f8;
              local_f8 = local_f8 + 1;
              local_f0[lVar10] = local_70;
              if (local_1d0[0] == local_1c0) {
                uVar21 = local_1c0 * 2;
                if (local_1c0 == 8) {
                  uVar21 = 0x20;
                }
                if (((int)uVar21 < 1) ||
                   (puVar13 = (undefined8 *)FUN_1424da030(), puVar13 == (undefined8 *)0x0))
                goto LAB_142508872;
                if (0 < (int)uVar24) {
                  if ((int)local_1c0 < (int)uVar24) {
                    uVar24 = local_1c0;
                  }
                  if ((int)uVar21 <= (int)uVar24) {
                    uVar24 = uVar21;
                  }
                  memcpy(puVar13,local_1c8,(longlong)(int)uVar24 << 3);
                }
                if (local_1bc != '\0') {
                  FUN_1424da110(local_1c8);
                }
                local_1bc = '\x01';
                puVar12 = local_88;
                local_1c8 = puVar13;
                local_1c0 = uVar21;
              }
              plVar14 = (longlong *)thunk_FUN_1424da030(0x40);
              if (plVar14 == (longlong *)0x0) {
                puVar12 = local_1c8;
                uVar24 = local_1d0[0];
                local_1d0[0] = local_1d0[0] + 1;
                goto LAB_14250886a;
              }
              *plVar14 = (longlong)plVar14 + 0xd;
              *(undefined4 *)(plVar14 + 1) = 0x28;
              *(undefined2 *)((longlong)plVar14 + 0xc) = 0;
              *(undefined4 *)(plVar14 + 7) = 0;
              lVar10 = (longlong)(int)local_1d0[0];
              local_1d0[0] = local_1d0[0] + 1;
              local_1c8[lVar10] = plVar14;
              while (puVar12 != (undefined8 *)0x0) {
                puVar13 = (undefined8 *)puVar12[1];
                if (puVar12 != local_88) {
                  FUN_1425034d0(plVar14,0x2d,param_5);
                }
                FUN_1425038b0(&local_1e0,*puVar12);
                FUN_142503520(plVar14,local_1e0,local_1d8,param_5);
                puVar12 = puVar13;
              }
              if (*param_5 < 1) {
                *local_70 = "attribute";
                local_70[1] = *plVar14;
                local_70[2] = 0;
                bVar5 = true;
                goto LAB_142508027;
              }
            }
            local_70 = (undefined8 *)0x0;
            bVar5 = false;
          }
        }
LAB_142508027:
        if (0 < local_178[0]) {
          lVar10 = 0;
          iVar6 = local_178[0];
          do {
            if (*(longlong *)(local_170 + lVar10 * 8) != 0) {
              FUN_1401773f0();
              iVar6 = local_178[0];
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < iVar6);
        }
        if (local_164 != '\0') {
          FUN_1424da110();
        }
        uVar3 = local_100;
        if (bVar5) {
          if (pcVar9 == (char *)0x0) {
            local_100 = 0;
            puVar12 = local_70;
          }
          else {
            local_94 = 0;
            local_7c = 0;
            local_100 = 0;
            pcVar23 = (char *)0x0;
            pcVar19 = (char *)0x0;
            do {
              cVar4 = *pcVar9;
              if (cVar4 == '\0') {
                local_88 = (undefined8 *)CONCAT44(local_88._4_4_,1);
                local_104 = 0;
                local_78 = (char *)0x0;
LAB_1425081de:
                sVar8 = (size_t)local_94;
                if ((longlong)sVar8 < 9) {
                  strncpy((char *)local_178,pcVar19,sVar8);
                  *(undefined1 *)((longlong)local_178 + sVar8) = 0;
                  piVar11 = (int *)FUN_1424ea590(local_178);
                  if (piVar11 != (int *)0x0) {
                    local_110 = piVar11;
                    if (piVar11 == local_178) {
                      FUN_142503930(local_178);
                      puVar7 = (undefined8 *)FUN_14250a490(local_1d0,local_178,&local_94,param_5);
                      if (puVar7 == (undefined8 *)0x0) {
LAB_14250880b:
                        *param_5 = 7;
                        uVar17 = local_100;
                        puVar13 = local_a0;
                        uVar3 = local_100;
                      }
                      else {
                        uVar17 = local_100;
                        puVar13 = local_a0;
                        uVar3 = local_100;
                        if (*param_5 < 1) {
                          local_110 = (int *)*puVar7;
                          goto LAB_142508273;
                        }
                      }
                    }
                    else {
LAB_142508273:
                      pcVar19 = "yes";
                      if (pcVar23 == (char *)0x0) goto LAB_142508307;
                      sVar8 = (size_t)local_7c;
                      iVar6 = 1;
                      if ((longlong)sVar8 < 0x80) {
                        strncpy(local_268,pcVar23,sVar8);
                        local_268[sVar8] = '\0';
                        pcVar19 = (char *)FUN_1424ea5f0(local_110,local_268);
                        if (pcVar19 != (char *)0x0) {
                          if (pcVar19 == local_268) {
                            FUN_142503930(local_268);
                            puVar7 = (undefined8 *)
                                     FUN_14250a600(local_1d0,local_268,&local_7c,param_5);
                            if (puVar7 == (undefined8 *)0x0) {
                              iVar6 = 7;
                              goto LAB_142508890;
                            }
                            uVar17 = local_100;
                            puVar13 = local_a0;
                            uVar3 = local_100;
                            if (0 < *param_5) goto LAB_1425088a2;
                            pcVar19 = (char *)*puVar7;
                          }
LAB_142508307:
                          piVar11 = local_110;
                          if ((local_61 == '\0') &&
                             (iVar6 = strcmp((char *)local_110,"va"), iVar6 == 0)) {
                            iVar6 = strcmp(pcVar19,"posix");
                            if (iVar6 != 0) goto LAB_142508350;
                            local_100 = CONCAT71((int7)(CONCAT44(extraout_var,iVar6) >> 8),1);
                          }
                          else {
LAB_142508350:
                            uVar24 = local_e8;
                            if (local_f8 == local_e8) {
                              uVar21 = local_e8 * 2;
                              if (local_e8 == 8) {
                                uVar21 = 0x20;
                              }
                              if (((int)uVar21 < 1) ||
                                 (puVar7 = (undefined8 *)FUN_1424da030((ulonglong)uVar21 << 3),
                                 puVar7 == (undefined8 *)0x0)) goto LAB_14250880b;
                              if (0 < (int)uVar24) {
                                if ((int)local_e8 < (int)uVar24) {
                                  uVar24 = local_e8;
                                }
                                if ((int)uVar21 <= (int)uVar24) {
                                  uVar24 = uVar21;
                                }
                                memcpy(puVar7,local_f0,(longlong)(int)uVar24 << 3);
                              }
                              if (local_e4 != '\0') {
                                FUN_1424da110(local_f0);
                              }
                              local_e4 = '\x01';
                              local_f0 = puVar7;
                              local_e8 = uVar21;
                            }
                            puVar12 = (undefined8 *)thunk_FUN_1424da030(0x18);
                            puVar7 = local_70;
                            if (puVar12 == (undefined8 *)0x0) {
                              lVar10 = (longlong)(int)local_f8;
                              local_f8 = local_f8 + 1;
                              local_f0[lVar10] = 0;
                              goto LAB_14250880b;
                            }
                            *puVar12 = 0;
                            puVar12[1] = 0;
                            puVar12[2] = 0;
                            lVar10 = (longlong)(int)local_f8;
                            local_f8 = local_f8 + 1;
                            local_f0[lVar10] = puVar12;
                            *puVar12 = piVar11;
                            puVar12[1] = pcVar19;
                            puVar13 = puVar12;
                            if (local_70 == (undefined8 *)0x0) {
                              local_70 = (undefined8 *)0x0;
                            }
                            else {
                              iVar6 = strcmp((char *)piVar11,(char *)*local_70);
                              if (-1 < iVar6) {
                                do {
                                  puVar13 = puVar7;
                                  if (iVar6 == 0) goto LAB_14250849c;
                                  puVar7 = (undefined8 *)puVar13[2];
                                } while ((puVar7 != (undefined8 *)0x0) &&
                                        (iVar6 = strcmp((char *)piVar11,(char *)*puVar7), -1 < iVar6
                                        ));
                                puVar13[2] = puVar12;
                                puVar13 = local_70;
                                local_70 = puVar7;
                              }
                            }
                            puVar12[2] = local_70;
                            local_70 = puVar13;
                          }
LAB_14250849c:
                          local_94 = local_104;
                          if (local_78 == (char *)0x0) {
                            local_94 = 0;
                          }
                          local_7c = 0;
                          pcVar23 = (char *)0x0;
                          pcVar19 = local_78;
                          goto LAB_1425080e9;
                        }
                      }
LAB_142508890:
                      *param_5 = iVar6;
                      uVar17 = local_100;
                      puVar13 = local_a0;
                      uVar3 = local_100;
                    }
                    goto LAB_1425088a2;
                  }
                }
                *param_5 = 1;
                uVar17 = local_100;
                puVar13 = local_a0;
                uVar3 = local_100;
                goto LAB_1425088a2;
              }
              iVar6 = 0;
              pcVar22 = pcVar9;
              while ((cVar4 != '\0' && (cVar4 != '-'))) {
                pcVar1 = pcVar22 + 1;
                pcVar22 = pcVar22 + 1;
                iVar6 = iVar6 + -1;
                cVar4 = *pcVar1;
              }
              local_78 = pcVar9;
              if ((iVar6 == -2) &&
                 (((cVar4 = FUN_1425038e0(), cVar4 != '\0' || ((byte)(*local_78 - 0x30U) < 10)) &&
                  (cVar4 = FUN_1425038e0(local_78[1]), cVar4 != '\0')))) {
                if (pcVar19 != (char *)0x0) {
                  pcVar9 = pcVar22 + (*pcVar22 != '\0');
                  local_104 = 2;
                  local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
                  goto LAB_1425081de;
                }
                local_94 = 2;
                pcVar19 = local_78;
              }
              else if (pcVar23 == (char *)0x0) {
                local_7c = -iVar6;
                pcVar23 = local_78;
              }
              else {
                local_7c = (local_7c - iVar6) + 1;
              }
              pcVar9 = pcVar22 + (*pcVar22 != '\0');
              local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
LAB_1425080e9:
              puVar7 = local_a0;
              uVar3 = local_100;
              puVar12 = local_70;
            } while ((char)local_88 == '\0');
          }
joined_r0x00014250850f:
          puVar18 = puVar12;
          uVar17 = local_100;
          puVar13 = puVar7;
          if (puVar18 != (undefined8 *)0x0) {
            puVar12 = (undefined8 *)puVar18[2];
            puVar13 = puVar18;
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)0x0;
            }
            else {
              pcVar23 = (char *)*puVar18;
              iVar6 = strcmp(pcVar23,(char *)*puVar7);
              puVar2 = puVar7;
              if (-1 < iVar6) {
                do {
                  puVar13 = puVar2;
                  uVar3 = local_100;
                  if (iVar6 == 0) goto joined_r0x00014250850f;
                  puVar2 = (undefined8 *)puVar13[2];
                } while ((puVar2 != (undefined8 *)0x0) &&
                        (iVar6 = strcmp(pcVar23,(char *)*puVar2), -1 < iVar6));
                puVar13[2] = puVar18;
                puVar13 = puVar7;
                puVar7 = puVar2;
              }
            }
            puVar18[2] = puVar7;
            puVar7 = puVar13;
            uVar3 = local_100;
            goto joined_r0x00014250850f;
          }
        }
        else {
          uVar17 = 0;
          puVar13 = puVar7;
        }
LAB_1425088a2:
        local_100 = uVar3;
        local_61 = (char)uVar17;
        puVar7 = puVar13;
        if (0 < *param_5) goto LAB_142508ab9;
LAB_142507b82:
        local_98 = local_98 + 1;
        puVar7 = puVar13;
        iVar6 = local_108 + 1;
      }
      if (*param_5 < 1) {
        pcVar23 = (char *)local_90[9];
        sVar8 = strlen(pcVar23);
        uVar24 = local_e8;
        if (0 < (int)sVar8) {
          if (local_f8 == local_e8) {
            uVar21 = 0x20;
            if (local_e8 != 8) {
              uVar21 = local_e8 * 2;
            }
            if ((0 < (int)uVar21) &&
               (puVar12 = (undefined8 *)FUN_1424da030((ulonglong)uVar21 << 3),
               puVar12 != (undefined8 *)0x0)) {
              if (0 < (int)uVar24) {
                if ((int)local_e8 < (int)uVar24) {
                  uVar24 = local_e8;
                }
                if ((int)uVar21 <= (int)uVar24) {
                  uVar24 = uVar21;
                }
                memcpy(puVar12,local_f0,(longlong)(int)uVar24 << 3);
              }
              if (local_e4 != '\0') {
                FUN_1424da110(local_f0);
              }
              local_e4 = '\x01';
              local_f0 = puVar12;
              local_e8 = uVar21;
              goto LAB_14250898d;
            }
          }
          else {
LAB_14250898d:
            puVar12 = (undefined8 *)thunk_FUN_1424da030(0x18);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              lVar10 = (longlong)(int)local_f8;
              local_f8 = local_f8 + 1;
              local_f0[lVar10] = puVar12;
              *puVar12 = &DAT_1499d8697;
              puVar12[1] = pcVar23;
              if (puVar7 == (undefined8 *)0x0) {
                puVar12[2] = 0;
                puVar7 = puVar12;
              }
              else {
                iVar6 = strcmp("x",(char *)*puVar7);
                puVar13 = puVar7;
                if (iVar6 < 0) {
                  puVar12[2] = puVar7;
                  puVar7 = puVar12;
                }
                else {
                  do {
                    puVar18 = puVar13;
                    if (iVar6 == 0) goto LAB_142508aa8;
                    puVar13 = (undefined8 *)puVar18[2];
                    if (puVar13 == (undefined8 *)0x0) {
                      puVar18[2] = puVar12;
                      puVar12[2] = 0;
                      goto LAB_142508ab9;
                    }
                    iVar6 = strcmp("x",(char *)*puVar13);
                  } while (-1 < iVar6);
                  puVar18[2] = puVar12;
                  puVar12[2] = puVar13;
                }
              }
              goto LAB_142508ab9;
            }
            lVar10 = (longlong)(int)local_f8;
            local_f8 = local_f8 + 1;
            local_f0[lVar10] = 0;
          }
          *param_5 = 7;
        }
      }
LAB_142508ab9:
      iVar6 = *param_5;
      if ((iVar6 < 1) && (local_61 != '\0')) {
        (**(code **)(*param_3 + 8))(param_3,"_POSIX",6);
        iVar6 = *param_5;
      }
      if ((iVar6 < 1) && (puVar7 != (undefined8 *)0x0)) {
        bVar5 = false;
        do {
          if (bVar5) {
            (**(code **)(*param_3 + 8))(param_3,&DAT_149e35e18,1);
          }
          else {
            (**(code **)(*param_3 + 8))(param_3,&DAT_14b525b15,1);
          }
          pcVar23 = (char *)*puVar7;
          sVar8 = strlen(pcVar23);
          (**(code **)(*param_3 + 8))(param_3,pcVar23,sVar8 & 0xffffffff);
          (**(code **)(*param_3 + 8))(param_3,&DAT_149e2783e,1);
          pcVar23 = (char *)puVar7[1];
          sVar8 = strlen(pcVar23);
          (**(code **)(*param_3 + 8))(param_3,pcVar23,sVar8 & 0xffffffff);
          puVar7 = (undefined8 *)puVar7[2];
          bVar5 = true;
        } while (puVar7 != (undefined8 *)0x0);
      }
    }
    if (0 < (int)local_1d0[0]) {
      lVar10 = 0;
      uVar24 = local_1d0[0];
      do {
        puVar7 = (undefined8 *)local_1c8[lVar10];
        if (puVar7 != (undefined8 *)0x0) {
          if (*(char *)((longlong)puVar7 + 0xc) != '\0') {
            FUN_1424da110(*puVar7);
          }
          FUN_1401773f0(puVar7);
          uVar24 = local_1d0[0];
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar24);
    }
    if (local_1bc != '\0') {
      FUN_1424da110(local_1c8);
    }
    if (0 < (int)local_f8) {
      lVar10 = 0;
      uVar24 = local_f8;
      do {
        if (local_f0[lVar10] != 0) {
          FUN_1401773f0();
          uVar24 = local_f8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar24);
    }
    if (local_e4 != '\0') {
      FUN_1424da110(local_f0);
    }
  }
  puVar12 = local_120;
  if (local_120 == (undefined8 *)0x0) {
    return;
  }
LAB_142508c49:
  FUN_1424da110(*puVar12);
  lVar10 = puVar12[7];
  while (lVar10 != 0) {
    lVar10 = *(longlong *)(lVar10 + 8);
    FUN_1424da110();
  }
  lVar10 = puVar12[8];
  while (lVar10 != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x10);
    FUN_1424da110();
  }
  FUN_1424da110(puVar12);
  return;
LAB_142508aa8:
  *param_5 = 1;
  goto LAB_142508ab9;
}



// FUNCTION 142508cd0 Unwind@142508cd0 body=67 status=ok
// SIG undefined Unwind@142508cd0(void)

void Unwind_142508cd0(undefined8 param_1,longlong param_2)

{
  FUN_14250a300(param_2 + 0x110);
  return;
}



// FUNCTION 142508d20 Unwind@142508d20 body=76 status=ok
// SIG undefined Unwind@142508d20(void)

void Unwind_142508d20(undefined8 param_1,longlong param_2)

{
  FUN_14250a220(param_2 + 0xb8);
  FUN_14250a2a0(param_2 + 400);
  return;
}



// FUNCTION 142508d70 Unwind@142508d70 body=67 status=ok
// SIG undefined Unwind@142508d70(void)

void Unwind_142508d70(undefined8 param_1,longlong param_2)

{
  FUN_142509cb0(param_2 + 0x168);
  return;
}



// FUNCTION 142508dc0 FUN_142508dc0 body=3780 status=ok
// SIG undefined FUN_142508dc0(void)

undefined8 FUN_142508dc0(char *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  ushort local_106;
  int local_104;
  char *local_100;
  int local_f4;
  int local_f0;
  undefined8 *local_e8;
  undefined1 local_d0 [12];
  int local_c4;
  char *local_c0;
  char local_b1;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 *local_70;
  int local_64;
  undefined8 *local_60;
  size_t local_58;
  char *local_50;
  size_t local_48;
  int *local_40;
  longlong local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  bVar1 = false;
  local_64 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  local_70 = param_4;
  local_40 = param_3;
  local_30 = param_1;
  cVar2 = FUN_142505b20(*param_4);
  if (cVar2 == '\0') {
    local_f0 = param_2;
    if (param_2 < 0) {
      sVar4 = strlen(local_30);
      local_f0 = (int)sVar4;
    }
    local_c0 = (char *)FUN_1424da030((longlong)(local_f0 + 1));
    if (local_c0 == (char *)0x0) {
      *local_70 = 7;
      local_88 = 0;
    }
    else {
      memcpy(local_c0,local_30,(longlong)local_f0);
      local_c0[local_f0] = '\0';
      uVar5 = FUN_1424da030(0x58);
      FUN_142509c90(local_d0,uVar5);
      cVar2 = FUN_14250a360(local_d0);
      if (cVar2 == '\0') {
        uVar5 = FUN_142509ca0(local_d0);
        FUN_14250a370(uVar5);
        pcVar7 = local_c0;
        puVar6 = (undefined8 *)FUN_14250a3b0(local_d0);
        *puVar6 = pcVar7;
        if (local_f0 < 2) {
          local_88 = FUN_14250a3c0(local_d0);
        }
        else {
          local_38 = 0;
          for (local_f4 = 0; local_f4 < 0x34; local_f4 = local_f4 + 2) {
            sVar4 = strlen((&PTR_s_art_lojban_1499d86b0)[local_f4]);
            local_c4 = (int)sVar4;
            if (local_f0 < local_c4) {
              local_104 = 4;
            }
            else if ((local_c4 < local_f0) && (local_c0[local_c4] != '-')) {
              local_104 = 4;
            }
            else {
              iVar3 = FUN_142503ad0((&PTR_s_art_lojban_1499d86b0)[local_f4],local_c0,
                                    sVar4 & 0xffffffff);
              if (iVar3 == 0) {
                local_64 = local_c4;
                sVar4 = strlen((&PTR_s_art_lojban_1499d86b0)[local_f4 + 1]);
                local_7c = (int)sVar4;
                local_78 = (local_7c + local_f0) - local_c4;
                if (local_f0 < local_78) {
                  FUN_1424da110(local_c0);
                  pcVar7 = (char *)FUN_1424da030((longlong)(local_78 + 1));
                  local_c0 = pcVar7;
                  if (pcVar7 == (char *)0x0) {
                    *local_70 = 7;
                    local_88 = 0;
                    local_104 = 1;
                    goto LAB_142509140;
                  }
                  puVar6 = (undefined8 *)FUN_14250a3b0(local_d0);
                  *puVar6 = pcVar7;
                  local_f0 = local_78;
                }
                local_38 = (longlong)(local_c4 - local_7c);
                pcVar7 = (&PTR_s_art_lojban_1499d86b0)[local_f4 + 1];
                puVar6 = (undefined8 *)FUN_14250a3b0(local_d0);
                strcpy((char *)*puVar6,pcVar7);
                if (local_c4 != local_f0) {
                  pcVar7 = local_30 + local_c4;
                  plVar8 = (longlong *)FUN_14250a3b0(local_d0);
                  strcpy((char *)(*plVar8 + (longlong)local_7c),pcVar7);
                }
                local_104 = 2;
              }
              else {
                local_104 = 0;
              }
            }
LAB_142509140:
            if (local_104 != 0) {
              if (local_104 == 2) break;
              if (local_104 != 4) goto LAB_142509c68;
            }
          }
          if (local_64 == 0) {
            for (local_f4 = 0; local_f4 < 0x34; local_f4 = local_f4 + 2) {
              local_18 = (&PTR_s_sgn_br_1499d8850)[local_f4];
              local_48 = strlen(local_18);
              iVar3 = FUN_142503ad0(local_18,local_c0,local_48);
              if (iVar3 == 0) {
                local_50 = local_c0 + local_48;
                if ((*local_50 == '\0') || (*local_50 == '-')) {
                  local_20 = (&PTR_s_sgn_br_1499d8850)[local_f4 + 1];
                  sVar4 = strlen(local_20);
                  pcVar7 = local_20;
                  local_58 = sVar4;
                  puVar6 = (undefined8 *)FUN_14250a3b0(local_d0);
                  strncpy((char *)*puVar6,pcVar7,sVar4);
                  if (*local_50 == '-') {
                    memmove(local_c0 + local_58,local_50,((longlong)local_f0 - local_48) + 1);
                  }
                  else {
                    local_c0[local_58] = '\0';
                  }
                  local_38 = local_48 - local_58;
                  local_104 = 5;
                }
                else {
                  local_104 = 0;
                }
                if (local_104 == 0) goto LAB_1425092f4;
              }
              else {
LAB_1425092f4:
                local_104 = 0;
              }
              if (local_104 != 0) break;
            }
          }
          local_106 = 0x81;
          local_b0 = local_c0;
          local_a0 = local_c0;
          local_74 = 0;
          local_e8 = (undefined8 *)0x0;
          local_90 = (char *)0x0;
          local_a8 = (char *)0x0;
          do {
            pcVar7 = local_a0;
            if (local_a0 == (char *)0x0) goto LAB_142509b85;
            for (local_100 = local_a0; (*local_100 != '\0' && (*local_100 != '-'));
                local_100 = local_100 + 1) {
            }
            if (*local_100 == '\0') {
              local_a0 = (char *)0x0;
            }
            else {
              local_a0 = local_100 + 1;
            }
            iVar3 = (int)local_100 - (int)pcVar7;
            if (((local_106 & 1) == 0) || (cVar2 = FUN_1425053b0(pcVar7,iVar3), cVar2 == '\0')) {
              if (((local_106 & 2) == 0) || (cVar2 = FUN_14250a3d0(pcVar7,iVar3), cVar2 == '\0')) {
                if (((local_106 & 4) == 0) || (cVar2 = FUN_142505410(pcVar7,iVar3), cVar2 == '\0'))
                {
                  if (((local_106 & 8) == 0) || (cVar2 = FUN_142505480(pcVar7,iVar3), cVar2 == '\0')
                     ) {
                    if (((local_106 & 0x10) == 0) ||
                       ((cVar2 = FUN_1425054f0(pcVar7,iVar3), cVar2 == '\0' &&
                        ((!bVar1 || (cVar2 = FUN_14250a430(pcVar7,iVar3), cVar2 == '\0')))))) {
                      if (((local_106 & 0x20) == 0) ||
                         (cVar2 = FUN_142509f00(pcVar7,iVar3), cVar2 == '\0')) {
                        if (((local_106 & 0x40) == 0) ||
                           (cVar2 = FUN_1425056f0(pcVar7,iVar3), cVar2 == '\0')) {
                          if ((local_106 & 0x80) == 0) {
                            local_104 = 9;
                          }
                          else {
                            cVar2 = FUN_142503910(*pcVar7);
                            if ((cVar2 == 'x') && (iVar3 == 1)) {
                              if (local_e8 == (undefined8 *)0x0) {
LAB_1425099ef:
                                if (local_a0 == (char *)0x0) {
                                  local_104 = 9;
                                }
                                else {
                                  local_28 = local_a0;
                                  while (pcVar7 = local_a0, local_a0 != (char *)0x0) {
                                    for (local_100 = local_a0;
                                        (*local_100 != '\0' && (*local_100 != '-'));
                                        local_100 = local_100 + 1) {
                                    }
                                    if (*local_100 == '\0') {
                                      local_a0 = (char *)0x0;
                                    }
                                    else {
                                      local_a0 = local_100 + 1;
                                    }
                                    iVar3 = strncmp(pcVar7,"lvariant",8);
                                    if (iVar3 == 0) {
                                      *local_100 = '\0';
                                      local_106 = 0x10;
                                      bVar1 = true;
                                      break;
                                    }
                                    cVar2 = FUN_142505890(pcVar7,(int)local_100 - (int)pcVar7);
                                    if (cVar2 == '\0') break;
                                    local_b0 = local_100;
                                  }
                                  if (local_106 == 0x10) {
                                    local_104 = 8;
                                  }
                                  else {
                                    if (0 < (longlong)local_b0 - (longlong)local_28) {
                                      *local_b0 = '\0';
                                      uVar5 = FUN_142503930(local_28);
                                      lVar9 = FUN_14250a3b0(local_d0);
                                      *(undefined8 *)(lVar9 + 0x48) = uVar5;
                                    }
                                    local_104 = 9;
                                  }
                                }
                              }
                              else if ((local_90 == (char *)0x0) || (local_a8 == (char *)0x0)) {
                                FUN_1424da110(local_e8);
                                local_e8 = (undefined8 *)0x0;
                                local_104 = 9;
                              }
                              else {
                                *local_a8 = '\0';
                                uVar5 = FUN_142503930(local_90);
                                local_e8[1] = uVar5;
                                lVar9 = FUN_14250a3b0(local_d0);
                                cVar2 = FUN_14250a0c0(lVar9 + 0x40,local_e8,0);
                                if (cVar2 != '\0') {
                                  local_b0 = local_a8;
                                  local_e8 = (undefined8 *)0x0;
                                  goto LAB_1425099ef;
                                }
                                FUN_1424da110(local_e8);
                                local_e8 = (undefined8 *)0x0;
                                local_104 = 9;
                              }
                            }
                            else {
                              local_104 = 9;
                            }
                          }
                        }
                        else {
                          if (local_90 == (char *)0x0) {
                            local_90 = pcVar7;
                          }
                          local_a8 = local_100;
                          local_106 = 0xe0;
                          local_104 = 8;
                        }
                      }
                      else if (local_e8 == (undefined8 *)0x0) {
LAB_14250980c:
                        local_e8 = (undefined8 *)FUN_1424da030(0x18);
                        if (local_e8 == (undefined8 *)0x0) {
                          *local_70 = 7;
                          local_88 = 0;
                          local_104 = 1;
                        }
                        else {
                          *local_100 = '\0';
                          uVar5 = FUN_142503930(pcVar7);
                          *local_e8 = uVar5;
                          local_e8[1] = 0;
                          local_90 = (char *)0x0;
                          local_a8 = (char *)0x0;
                          local_106 = 0x40;
                          local_104 = 8;
                        }
                      }
                      else if ((local_90 == (char *)0x0) || (local_a8 == (char *)0x0)) {
                        FUN_1424da110(local_e8);
                        local_e8 = (undefined8 *)0x0;
                        local_104 = 9;
                      }
                      else {
                        *local_a8 = '\0';
                        uVar5 = FUN_142503930(local_90);
                        local_e8[1] = uVar5;
                        lVar9 = FUN_14250a3b0(local_d0);
                        cVar2 = FUN_14250a0c0(lVar9 + 0x40,local_e8,0);
                        if (cVar2 != '\0') {
                          local_b0 = local_a8;
                          goto LAB_14250980c;
                        }
                        FUN_1424da110(local_e8);
                        local_e8 = (undefined8 *)0x0;
                        local_104 = 9;
                      }
                    }
                    else {
                      local_60 = (undefined8 *)FUN_1424da030(0x10);
                      if (local_60 == (undefined8 *)0x0) {
                        *local_70 = 7;
                        local_88 = 0;
                        local_104 = 1;
                      }
                      else {
                        *local_100 = '\0';
                        uVar5 = FUN_142503970(pcVar7);
                        puVar6 = local_60;
                        *local_60 = uVar5;
                        lVar9 = FUN_14250a3b0(local_d0);
                        local_b1 = FUN_142509d20(lVar9 + 0x38,puVar6);
                        if (local_b1 == '\0') {
                          FUN_1424da110(local_60);
                          local_104 = 9;
                        }
                        else {
                          local_b0 = local_100;
                          local_106 = 0xb0;
                          local_104 = 8;
                        }
                      }
                    }
                  }
                  else {
                    *local_100 = '\0';
                    uVar5 = FUN_142503970(pcVar7);
                    lVar9 = FUN_14250a3b0(local_d0);
                    *(undefined8 *)(lVar9 + 0x30) = uVar5;
                    local_b0 = local_100;
                    local_106 = 0xb0;
                    local_104 = 8;
                  }
                }
                else {
                  local_98 = pcVar7;
                  *local_100 = '\0';
                  cVar2 = FUN_1425038f0(*pcVar7);
                  *local_98 = cVar2;
                  while (local_98 = local_98 + 1, *local_98 != '\0') {
                    cVar2 = FUN_142503910(*local_98);
                    *local_98 = cVar2;
                  }
                  lVar9 = FUN_14250a3b0(local_d0);
                  *(char **)(lVar9 + 0x28) = pcVar7;
                  local_b0 = local_100;
                  local_106 = 0xb8;
                  local_104 = 8;
                }
              }
              else {
                *local_100 = '\0';
                uVar5 = FUN_142503930(pcVar7);
                lVar9 = FUN_14250a3b0(local_d0);
                *(undefined8 *)(lVar9 + 0x10 + (longlong)local_74 * 8) = uVar5;
                local_b0 = local_100;
                if (local_74 + 1 < 3) {
                  local_106 = 0xbe;
                }
                else {
                  local_106 = 0xbc;
                }
                local_104 = 8;
                local_74 = local_74 + 1;
              }
            }
            else {
              *local_100 = '\0';
              uVar5 = FUN_142503930(pcVar7);
              lVar9 = FUN_14250a3b0(local_d0);
              *(undefined8 *)(lVar9 + 8) = uVar5;
              local_b0 = local_100;
              local_106 = 0xbc;
              if (iVar3 < 4) {
                local_106 = 0xbe;
              }
              local_104 = 8;
            }
          } while (local_104 == 8);
          if (local_104 == 9) {
LAB_142509b85:
            if (local_e8 != (undefined8 *)0x0) {
              if ((local_90 == (char *)0x0) || (local_a8 == (char *)0x0)) {
                FUN_1424da110(local_e8);
              }
              else {
                *local_a8 = '\0';
                uVar5 = FUN_142503930(local_90);
                local_e8[1] = uVar5;
                lVar9 = FUN_14250a3b0(local_d0);
                cVar2 = FUN_14250a0c0(lVar9 + 0x40,local_e8,0);
                if (cVar2 == '\0') {
                  FUN_1424da110(local_e8);
                }
                else {
                  local_b0 = local_a8;
                }
              }
            }
            pcVar7 = local_b0;
            if (local_40 != (int *)0x0) {
              puVar6 = (undefined8 *)FUN_14250a3b0(local_d0);
              *local_40 = ((int)pcVar7 - (int)*puVar6) + (int)local_38;
            }
            local_88 = FUN_14250a3c0(local_d0);
          }
        }
      }
      else {
        FUN_1424da110(local_c0);
        *local_70 = 7;
        local_88 = 0;
      }
LAB_142509c68:
      FUN_142509cb0(local_d0);
    }
  }
  else {
    local_88 = 0;
  }
  return local_88;
}



// FUNCTION 142509c90 FUN_142509c90 body=7 status=ok
// SIG undefined FUN_142509c90(void)

undefined8 * FUN_142509c90(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 142509ca0 FUN_142509ca0 body=4 status=ok
// SIG undefined FUN_142509ca0(void)

undefined8 FUN_142509ca0(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 142509cb0 FUN_142509cb0 body=103 status=ok
// SIG undefined FUN_142509cb0(void)

void FUN_142509cb0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FUN_1424da110(*puVar1);
  lVar2 = puVar1[7];
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 8);
    FUN_1424da110();
  }
  lVar2 = puVar1[8];
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    FUN_1424da110();
  }
  FUN_1424da110(puVar1);
  return;
}



// FUNCTION 142509d20 FUN_142509d20 body=98 status=ok
// SIG undefined FUN_142509d20(void)

undefined8 FUN_142509d20(longlong *param_1,undefined8 *param_2)

{
  char *_Str1;
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    param_2[1] = 0;
    *param_1 = (longlong)param_2;
  }
  else {
    _Str1 = (char *)*param_2;
    puVar1 = (undefined8 *)*param_1;
    do {
      puVar3 = puVar1;
      iVar2 = strcmp(_Str1,(char *)*puVar3);
      if (iVar2 == 0) {
        return 0;
      }
      puVar1 = (undefined8 *)puVar3[1];
    } while ((undefined8 *)puVar3[1] != (undefined8 *)0x0);
    puVar3[1] = param_2;
    param_2[1] = 0;
  }
  return 1;
}



// FUNCTION 142509d90 FUN_142509d90 body=284 status=ok
// SIG undefined FUN_142509d90(void)

longlong * FUN_142509d90(uint *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  void *_Dst;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[4];
  if (*param_1 == uVar4) {
    uVar3 = 0x20;
    if (uVar4 != 8) {
      uVar3 = uVar4 * 2;
    }
    if (0 < (int)uVar3) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar3 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar4) {
          if ((int)param_1[4] < (int)uVar4) {
            uVar4 = param_1[4];
          }
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar4 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar3;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_142509e3d;
      }
    }
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_142509e3d:
    plVar2 = (longlong *)thunk_FUN_1424da030(0x40);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *param_3;
      *plVar2 = (longlong)plVar2 + 0xd;
      *(undefined4 *)(plVar2 + 1) = 0x28;
      *(undefined2 *)((longlong)plVar2 + 0xc) = 0;
      *(undefined4 *)(plVar2 + 7) = 0;
      FUN_142503520(plVar2,param_2,uVar1,param_4);
    }
    uVar4 = *param_1;
    *param_1 = uVar4 + 1;
    *(longlong **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar4 * 8) = plVar2;
  }
  return plVar2;
}



// FUNCTION 142509eb0 Unwind@142509eb0 body=74 status=ok
// SIG undefined Unwind@142509eb0(void)

void Unwind_142509eb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x28) + 0xc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x28));
  }
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142509f00 FUN_142509f00 body=79 status=ok
// SIG undefined FUN_142509f00(void)

undefined8 FUN_142509f00(char *param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  
  if (param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  if (param_2 == 1) {
    cVar1 = FUN_1425038e0(*param_1);
    if (((cVar1 != '\0') || ((byte)(*param_1 - 0x30U) < 10)) &&
       (cVar1 = FUN_142503910(), cVar1 != 'x')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142509f50 FUN_142509f50 body=284 status=ok
// SIG undefined FUN_142509f50(void)

longlong * FUN_142509f50(uint *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *_Dst;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[4];
  if (*param_1 == uVar5) {
    uVar4 = 0x20;
    if (uVar5 != 8) {
      uVar4 = uVar5 * 2;
    }
    if (0 < (int)uVar4) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar4 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar5) {
          if ((int)param_1[4] < (int)uVar5) {
            uVar5 = param_1[4];
          }
          if ((int)uVar4 <= (int)uVar5) {
            uVar5 = uVar4;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar5 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar4;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_142509ffd;
      }
    }
    plVar3 = (longlong *)0x0;
  }
  else {
LAB_142509ffd:
    plVar3 = (longlong *)thunk_FUN_1424da030(0x40);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = *param_3;
      uVar2 = *param_2;
      *plVar3 = (longlong)plVar3 + 0xd;
      *(undefined4 *)(plVar3 + 1) = 0x28;
      *(undefined2 *)((longlong)plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 7) = 0;
      FUN_142503520(plVar3,uVar2,uVar1,param_4);
    }
    uVar5 = *param_1;
    *param_1 = uVar5 + 1;
    *(longlong **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar5 * 8) = plVar3;
  }
  return plVar3;
}



// FUNCTION 14250a070 Unwind@14250a070 body=74 status=ok
// SIG undefined Unwind@14250a070(void)

void Unwind_14250a070(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x28) + 0xc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x28));
  }
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14250a0c0 FUN_14250a0c0 body=334 status=ok
// SIG undefined FUN_14250a0c0(void)

undefined8 FUN_14250a0c0(longlong *param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  char *_Str;
  char *_Str_00;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  size_t sVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    param_2[2] = 0;
    *param_1 = (longlong)param_2;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)0x0;
    do {
      puVar5 = puVar3;
      if (param_3 == '\0') {
        iVar9 = strcmp((char *)*param_2,(char *)*puVar5);
LAB_14250a1d0:
        if (iVar9 < 0) {
LAB_14250a1eb:
          plVar8 = puVar10 + 2;
          if (puVar10 == (undefined8 *)0x0) {
            plVar8 = param_1;
          }
          *plVar8 = (longlong)param_2;
          param_2[2] = puVar5;
          return 1;
        }
        if (iVar9 == 0) {
          return 0;
        }
      }
      else {
        _Str = (char *)*param_2;
        sVar6 = strlen(_Str);
        _Str_00 = (char *)*puVar5;
        sVar7 = strlen(_Str_00);
        if (((sVar6 & 0xffffffff) != 1) || ((int)sVar7 != 1)) {
          if ((int)sVar6 == 1) {
            iVar9 = *_Str + -0x75;
          }
          else if ((int)sVar7 == 1) {
            iVar9 = 0x75 - *_Str_00;
          }
          else {
            iVar9 = strcmp(_Str,_Str_00);
            if (iVar9 == 0) {
              return 0;
            }
            iVar4 = strcmp(_Str_00,"attribute");
            if (iVar4 == 0) goto LAB_14250a0f0;
            iVar4 = strcmp(_Str,"attribute");
            if (iVar4 == 0) goto LAB_14250a1eb;
          }
          goto LAB_14250a1d0;
        }
        cVar1 = *_Str;
        cVar2 = *_Str_00;
        if (cVar1 == cVar2) {
          return 0;
        }
        if (cVar1 != 'x') {
          if (cVar2 == 'x') goto LAB_14250a1eb;
          iVar9 = (int)cVar1 - (int)cVar2;
          goto LAB_14250a1d0;
        }
      }
LAB_14250a0f0:
      puVar3 = (undefined8 *)puVar5[2];
      puVar10 = puVar5;
    } while ((undefined8 *)puVar5[2] != (undefined8 *)0x0);
    puVar5[2] = param_2;
    param_2[2] = 0;
  }
  return 1;
}



// FUNCTION 14250a220 FUN_14250a220 body=101 status=ok
// SIG undefined FUN_14250a220(void)

void FUN_14250a220(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 2) + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        if (*(char *)((longlong)puVar1 + 0xc) != '\0') {
          FUN_1424da110(*puVar1);
        }
        FUN_1401773f0(puVar1);
        iVar2 = *param_1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if ((char)param_1[5] != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 2));
    return;
  }
  return;
}



// FUNCTION 14250a2a0 FUN_14250a2a0 body=81 status=ok
// SIG undefined FUN_14250a2a0(void)

void FUN_14250a2a0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 2) + lVar2 * 8) != 0) {
        FUN_1401773f0();
        iVar1 = *param_1;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  if ((char)param_1[5] != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 2));
    return;
  }
  return;
}



// FUNCTION 14250a300 FUN_14250a300 body=81 status=ok
// SIG undefined FUN_14250a300(void)

void FUN_14250a300(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 2) + lVar2 * 8) != 0) {
        FUN_1401773f0();
        iVar1 = *param_1;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  if ((char)param_1[5] != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 2));
    return;
  }
  return;
}



// FUNCTION 14250a360 FUN_14250a360 body=8 status=ok
// SIG undefined FUN_14250a360(void)

bool FUN_14250a360(longlong *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 14250a370 FUN_14250a370 body=54 status=ok
// SIG undefined FUN_14250a370(void)

void FUN_14250a370(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = &DAT_1499d89f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &DAT_1499d89f0;
  param_1[6] = &DAT_1499d89f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = &DAT_1499d89f0;
  param_1[9] = &DAT_1499d89f0;
  return;
}



// FUNCTION 14250a3b0 FUN_14250a3b0 body=4 status=ok
// SIG undefined FUN_14250a3b0(void)

undefined8 FUN_14250a3b0(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 14250a3c0 FUN_14250a3c0 body=11 status=ok
// SIG undefined FUN_14250a3c0(void)

undefined8 FUN_14250a3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



// FUNCTION 14250a3d0 FUN_14250a3d0 body=84 status=ok
// SIG undefined FUN_14250a3d0(void)

bool FUN_14250a3d0(char *param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  bool bVar3;
  
  if (param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  if (((param_2 == 3) && (cVar1 = FUN_1425038e0(*param_1), cVar1 != '\0')) &&
     (cVar1 = FUN_1425038e0(param_1[1]), cVar1 != '\0')) {
    cVar1 = FUN_1425038e0(param_1[2]);
    bVar3 = cVar1 != '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 14250a430 FUN_14250a430 body=84 status=ok
// SIG undefined FUN_14250a430(void)

undefined8 FUN_14250a430(char *param_1,uint param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((int)param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (uint)sVar2;
  }
  if (param_2 - 1 < 8) {
    uVar4 = 0;
    do {
      cVar1 = FUN_1425038e0(param_1[uVar4]);
      if ((cVar1 == '\0') && (9 < (byte)(param_1[uVar4] - 0x30U))) goto LAB_14250a47f;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    uVar3 = 1;
  }
  else {
LAB_14250a47f:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14250a490 FUN_14250a490 body=284 status=ok
// SIG undefined FUN_14250a490(void)

longlong * FUN_14250a490(uint *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  void *_Dst;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[4];
  if (*param_1 == uVar4) {
    uVar3 = 0x20;
    if (uVar4 != 8) {
      uVar3 = uVar4 * 2;
    }
    if (0 < (int)uVar3) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar3 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar4) {
          if ((int)param_1[4] < (int)uVar4) {
            uVar4 = param_1[4];
          }
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar4 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar3;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_14250a53d;
      }
    }
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_14250a53d:
    plVar2 = (longlong *)thunk_FUN_1424da030(0x40);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *param_3;
      *plVar2 = (longlong)plVar2 + 0xd;
      *(undefined4 *)(plVar2 + 1) = 0x28;
      *(undefined2 *)((longlong)plVar2 + 0xc) = 0;
      *(undefined4 *)(plVar2 + 7) = 0;
      FUN_142503520(plVar2,param_2,uVar1,param_4);
    }
    uVar4 = *param_1;
    *param_1 = uVar4 + 1;
    *(longlong **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar4 * 8) = plVar2;
  }
  return plVar2;
}



// FUNCTION 14250a5b0 Unwind@14250a5b0 body=74 status=ok
// SIG undefined Unwind@14250a5b0(void)

void Unwind_14250a5b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x28) + 0xc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x28));
  }
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14250a600 FUN_14250a600 body=284 status=ok
// SIG undefined FUN_14250a600(void)

longlong * FUN_14250a600(uint *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  void *_Dst;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[4];
  if (*param_1 == uVar4) {
    uVar3 = 0x20;
    if (uVar4 != 8) {
      uVar3 = uVar4 * 2;
    }
    if (0 < (int)uVar3) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar3 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar4) {
          if ((int)param_1[4] < (int)uVar4) {
            uVar4 = param_1[4];
          }
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar4 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar3;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_14250a6ad;
      }
    }
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_14250a6ad:
    plVar2 = (longlong *)thunk_FUN_1424da030(0x40);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = *param_3;
      *plVar2 = (longlong)plVar2 + 0xd;
      *(undefined4 *)(plVar2 + 1) = 0x28;
      *(undefined2 *)((longlong)plVar2 + 0xc) = 0;
      *(undefined4 *)(plVar2 + 7) = 0;
      FUN_142503520(plVar2,param_2,uVar1,param_4);
    }
    uVar4 = *param_1;
    *param_1 = uVar4 + 1;
    *(longlong **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar4 * 8) = plVar2;
  }
  return plVar2;
}



// FUNCTION 14250a720 Unwind@14250a720 body=74 status=ok
// SIG undefined Unwind@14250a720(void)

void Unwind_14250a720(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x28) + 0xc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x28));
  }
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14250a770 FUN_14250a770 body=46 status=ok
// SIG undefined FUN_14250a770(void)

void FUN_14250a770(undefined8 *param_1)

{
  *param_1 = icu_64::StringEnumeration::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[0xd] = param_1 + 9;
  *(undefined4 *)(param_1 + 0xe) = 0x20;
  return;
}



// FUNCTION 14250a7a0 FUN_14250a7a0 body=63 status=ok
// SIG undefined FUN_14250a7a0(void)

void FUN_14250a7a0(undefined8 *param_1)

{
  *param_1 = icu_64::StringEnumeration::vftable;
  if (((undefined8 *)param_1[0xd] != (undefined8 *)0x0) &&
     ((undefined8 *)param_1[0xd] != param_1 + 9)) {
    FUN_1424da110();
  }
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14250a7e0 FUN_14250a7e0 body=3 status=ok
// SIG undefined FUN_14250a7e0(void)

undefined8 FUN_14250a7e0(void)

{
  return 0;
}



// FUNCTION 14250a7f0 FUN_14250a7f0 body=272 status=ok
// SIG undefined FUN_14250a7f0(void)

longlong FUN_14250a7f0(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
  if (lVar2 == 0) {
    return 0;
  }
  if (0 < *param_3) {
    return 0;
  }
  FUN_1424a7c80(param_1 + 1);
  if ((short)param_1[2] < 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    iVar3 = *param_3;
  }
  else {
    iVar1 = (int)(short)param_1[2] >> 5;
    iVar3 = *param_3;
  }
  if (iVar3 < 1) {
    iVar3 = (int)param_1[0xe];
    if (iVar1 < iVar3) {
LAB_14250a85d:
      if (param_2 != (int *)0x0) {
        if ((short)param_1[2] < 0) {
          iVar1 = *(int *)((longlong)param_1 + 0x14);
        }
        else {
          iVar1 = (int)(short)param_1[2] >> 5;
        }
        *param_2 = iVar1;
      }
      FUN_1424a83f0(param_1 + 1,0,0x7fffffff,param_1[0xd],(int)param_1[0xe],0);
      return param_1[0xd];
    }
    iVar3 = iVar3 / 2 + iVar3;
    if (iVar3 <= iVar1 + 1) {
      iVar3 = iVar1 + 1;
    }
    if ((longlong *)param_1[0xd] != param_1 + 9) {
      FUN_1424da110();
    }
    lVar2 = FUN_1424da030((longlong)iVar3);
    param_1[0xd] = lVar2;
    if (lVar2 == 0) {
      param_1[0xd] = (longlong)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xe) = 0x20;
      *param_3 = 7;
    }
    else {
      *(int *)(param_1 + 0xe) = iVar3;
      if (*param_3 < 1) goto LAB_14250a85d;
    }
  }
  return 0;
}



// FUNCTION 14250a900 FUN_14250a900 body=99 status=ok
// SIG undefined FUN_14250a900(void)

undefined8 FUN_14250a900(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
  if ((lVar2 != 0) && (*param_3 < 1)) {
    FUN_1424a7c80(param_1 + 1,lVar2);
    if (param_2 != (int *)0x0) {
      if ((short)param_1[2] < 0) {
        iVar1 = *(int *)((longlong)param_1 + 0x14);
      }
      else {
        iVar1 = (int)(short)param_1[2] >> 5;
      }
      *param_2 = iVar1;
    }
    uVar3 = FUN_1424a8e50(param_1 + 1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14250a970 FUN_14250a970 body=169 status=ok
// SIG undefined FUN_14250a970(void)

void FUN_14250a970(longlong *param_1,int *param_2)

{
  char *_Str;
  size_t sVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  _Str = (char *)(**(code **)(*param_1 + 0x20))(param_1,&local_34,param_2);
  if ((_Str != (char *)0x0) && (*param_2 < 1)) {
    iVar3 = local_34;
    if (local_34 < 0) {
      sVar1 = strlen(_Str);
      iVar3 = (int)sVar1;
    }
    lVar2 = FUN_140855070(param_1 + 1,iVar3 + 1);
    if (lVar2 == 0) {
      *param_2 = 7;
    }
    else {
      FUN_14250ad70(_Str,lVar2,iVar3);
      *(undefined2 *)(lVar2 + (longlong)iVar3 * 2) = 0;
      FUN_1408550d0(param_1 + 1,iVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 14250aa30 FUN_14250aa30 body=135 status=ok
// SIG undefined FUN_14250aa30(void)

longlong FUN_14250aa30(longlong param_1,char *param_2,int param_3,int *param_4)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if ((param_2 != (char *)0x0) && (*param_4 < 1)) {
    if (param_3 < 0) {
      sVar1 = strlen(param_2);
      param_3 = (int)sVar1;
    }
    lVar3 = param_1 + 8;
    lVar2 = FUN_140855070(lVar3,param_3 + 1);
    if (lVar2 == 0) {
      *param_4 = 7;
      lVar3 = 0;
    }
    else {
      FUN_14250ad70(param_2,lVar2,param_3);
      *(undefined2 *)(lVar2 + (longlong)param_3 * 2) = 0;
      FUN_1408550d0(lVar3,param_3);
    }
  }
  return lVar3;
}



// FUNCTION 14250aac0 FUN_14250aac0 body=53 status=ok
// SIG undefined FUN_14250aac0(void)

bool FUN_14250aac0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = __RTtypeid();
  lVar2 = __RTtypeid(param_2);
  iVar3 = __std_type_info_compare(lVar1 + 8,lVar2 + 8);
  return iVar3 == 0;
}



// FUNCTION 14250ab00 FUN_14250ab00 body=20 status=ok
// SIG undefined FUN_14250ab00(void)

bool FUN_14250ab00(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  return cVar1 == '\0';
}



// FUNCTION 14250ab20 FUN_14250ab20 body=2 status=ok
// SIG undefined FUN_14250ab20(void)

void FUN_14250ab20(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14250ab30 FUN_14250ab30 body=40 status=ok
// SIG undefined FUN_14250ab30(void)

void FUN_14250ab30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 14250abc0 FUN_14250abc0 body=63 status=ok
// SIG undefined FUN_14250abc0(void)

char * FUN_14250abc0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  size_t sVar2;
  char *_Str;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x38) = iVar1 + 1;
    _Str = *(char **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8);
    if (param_2 != (undefined4 *)0x0) {
      sVar2 = strlen(_Str);
      *param_2 = (int)sVar2;
    }
  }
  else {
    _Str = (char *)0x0;
  }
  return _Str;
}



// FUNCTION 14250ac10 FUN_14250ac10 body=63 status=ok
// SIG undefined FUN_14250ac10(void)

wchar_t * FUN_14250ac10(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x38) = iVar1 + 1;
    _Str = *(wchar_t **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8);
    if (param_2 != (undefined4 *)0x0) {
      sVar2 = wcslen(_Str);
      *param_2 = (int)sVar2;
    }
  }
  else {
    _Str = (wchar_t *)0x0;
  }
  return _Str;
}



// FUNCTION 14250ac50 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14250ac60 FUN_14250ac60 body=21 status=ok
// SIG undefined FUN_14250ac60(void)

void FUN_14250ac60(undefined8 *param_1)

{
  *param_1 = icu_64::CharacterIterator::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14250ac80 FUN_14250ac80 body=47 status=ok
// SIG undefined FUN_14250ac80(void)

void FUN_14250ac80(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::CharacterIterator::vftable;
  *(int *)(param_1 + 1) = param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(int *)((longlong)param_1 + 0x14) = param_2;
  if (-1 < param_2) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14250acb0 FUN_14250acb0 body=38 status=ok
// SIG undefined FUN_14250acb0(void)

void FUN_14250acb0(undefined8 *param_1,longlong param_2)

{
  *param_1 = icu_64::CharacterIterator::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return;
}



// FUNCTION 14250ace0 FUN_14250ace0 body=28 status=ok
// SIG undefined FUN_14250ace0(void)

void FUN_14250ace0(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return;
}



// FUNCTION 14250ad00 FUN_14250ad00 body=37 status=ok
// SIG undefined FUN_14250ad00(void)

void FUN_14250ad00(longlong *param_1)

{
  (**(code **)(*param_1 + 0xb8))(param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014250ad21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 14250ad30 FUN_14250ad30 body=37 status=ok
// SIG undefined FUN_14250ad30(void)

void FUN_14250ad30(longlong *param_1)

{
  (**(code **)(*param_1 + 0xb8))(param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014250ad51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 14250ad60 FUN_14250ad60 body=2 status=ok
// SIG undefined FUN_14250ad60(void)

void FUN_14250ad60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14250ad70 FUN_14250ad70 body=158 status=ok
// SIG undefined FUN_14250ad70(void)

void FUN_14250ad70(ulonglong param_1,ulonglong param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  if (0 < (int)param_3) {
    if ((0x17 < param_3) &&
       ((uVar25 = (ulonglong)param_3, param_1 + uVar25 <= param_2 ||
        (param_2 + (ulonglong)(param_3 - 1) * 2 + 2 <= param_1)))) {
      uVar26 = (ulonglong)(param_3 & 0xfffffff0);
      param_3 = param_3 - (param_3 & 0xfffffff0);
      uVar24 = 0;
      do {
        uVar1 = *(ulonglong *)(param_1 + uVar24);
        uVar2 = *(ulonglong *)(param_1 + 8 + uVar24);
        auVar3._8_6_ = 0;
        auVar3._0_8_ = uVar1;
        auVar3[0xe] = (char)(uVar1 >> 0x38);
        auVar5._8_4_ = 0;
        auVar5._0_8_ = uVar1;
        auVar5[0xc] = (char)(uVar1 >> 0x30);
        auVar5._13_2_ = auVar3._13_2_;
        auVar7._8_4_ = 0;
        auVar7._0_8_ = uVar1;
        auVar7._12_3_ = auVar5._12_3_;
        auVar9._8_2_ = 0;
        auVar9._0_8_ = uVar1;
        auVar9[10] = (char)(uVar1 >> 0x28);
        auVar9._11_4_ = auVar7._11_4_;
        auVar11._8_2_ = 0;
        auVar11._0_8_ = uVar1;
        auVar11._10_5_ = auVar9._10_5_;
        auVar13[8] = (char)(uVar1 >> 0x20);
        auVar13._0_8_ = uVar1;
        auVar13._9_6_ = auVar11._9_6_;
        auVar17._7_8_ = 0;
        auVar17._0_7_ = auVar13._8_7_;
        auVar19._1_8_ = SUB158(auVar17 << 0x40,7);
        auVar19[0] = (char)(uVar1 >> 0x18);
        auVar19._9_6_ = 0;
        auVar20._1_10_ = SUB1510(auVar19 << 0x30,5);
        auVar20[0] = (char)(uVar1 >> 0x10);
        auVar20._11_4_ = 0;
        auVar15[2] = (char)(uVar1 >> 8);
        auVar15._0_2_ = (ushort)uVar1;
        auVar15._3_12_ = SUB1512(auVar20 << 0x20,3);
        auVar27._0_2_ = (ushort)uVar1 & 0xff;
        auVar27._2_13_ = auVar15._2_13_;
        auVar27[0xf] = 0;
        auVar4._8_6_ = 0;
        auVar4._0_8_ = uVar2;
        auVar4[0xe] = (char)(uVar2 >> 0x38);
        auVar6._8_4_ = 0;
        auVar6._0_8_ = uVar2;
        auVar6[0xc] = (char)(uVar2 >> 0x30);
        auVar6._13_2_ = auVar4._13_2_;
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar2;
        auVar8._12_3_ = auVar6._12_3_;
        auVar10._8_2_ = 0;
        auVar10._0_8_ = uVar2;
        auVar10[10] = (char)(uVar2 >> 0x28);
        auVar10._11_4_ = auVar8._11_4_;
        auVar12._8_2_ = 0;
        auVar12._0_8_ = uVar2;
        auVar12._10_5_ = auVar10._10_5_;
        auVar14[8] = (char)(uVar2 >> 0x20);
        auVar14._0_8_ = uVar2;
        auVar14._9_6_ = auVar12._9_6_;
        auVar18._7_8_ = 0;
        auVar18._0_7_ = auVar14._8_7_;
        auVar21._1_8_ = SUB158(auVar18 << 0x40,7);
        auVar21[0] = (char)(uVar2 >> 0x18);
        auVar21._9_6_ = 0;
        auVar22._1_10_ = SUB1510(auVar21 << 0x30,5);
        auVar22[0] = (char)(uVar2 >> 0x10);
        auVar22._11_4_ = 0;
        auVar16[2] = (char)(uVar2 >> 8);
        auVar16._0_2_ = (ushort)uVar2;
        auVar16._3_12_ = SUB1512(auVar22 << 0x20,3);
        auVar28._0_2_ = (ushort)uVar2 & 0xff;
        auVar28._2_13_ = auVar16._2_13_;
        auVar28[0xf] = 0;
        *(undefined1 (*) [16])(param_2 + uVar24 * 2) = auVar27;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar24 * 2) = auVar28;
        uVar24 = uVar24 + 0x10;
      } while (uVar26 != uVar24);
      param_2 = param_2 + uVar26 * 2;
      param_1 = param_1 + uVar26;
      if (uVar26 == uVar25) {
        return;
      }
    }
    param_3 = param_3 + 1;
    lVar23 = 0;
    do {
      *(ushort *)(param_2 + lVar23 * 2) = (ushort)*(byte *)(param_1 + lVar23);
      param_3 = param_3 - 1;
      lVar23 = lVar23 + 1;
    } while (1 < param_3);
  }
  return;
}



// FUNCTION 14250ae10 FUN_14250ae10 body=87 status=ok
// SIG undefined FUN_14250ae10(void)

void FUN_14250ae10(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    lVar2 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + lVar2 * 2);
      if ((0x7f < uVar1) ||
         ((*(uint *)(&DAT_1499d8ec0 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(char *)(param_2 + lVar2) = (char)uVar1;
      param_3 = param_3 + -1;
      lVar2 = lVar2 + 1;
    } while (1 < param_3);
  }
  return;
}



// FUNCTION 14250ae70 FUN_14250ae70 body=87 status=ok
// SIG undefined FUN_14250ae70(void)

undefined8 FUN_14250ae70(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
LAB_14250ae80:
  do {
    pbVar2 = param_1;
    if (param_2 < 0) {
      bVar1 = *pbVar2;
      if (bVar1 == 0) {
        return 0x1499d8e01;
      }
    }
    else {
      if (param_2 == 0) {
        return 0x1499d8e01;
      }
      param_2 = param_2 + -1;
      bVar1 = *pbVar2;
      param_1 = pbVar2 + 1;
      if (bVar1 == 0) goto LAB_14250ae80;
    }
    if (((char)bVar1 < '\0') ||
       (param_1 = pbVar2 + 1,
       (*(uint *)(&DAT_1499d8ec0 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0)) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14250aed0 FUN_14250aed0 body=75 status=ok
// SIG undefined FUN_14250aed0(void)

undefined8 FUN_14250aed0(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  do {
    if (param_2 < 0) {
      uVar1 = *param_1;
      if (uVar1 == 0) {
        return 0x1499d8e01;
      }
    }
    else {
      if (param_2 == 0) {
        return 0x1499d8e01;
      }
      param_2 = param_2 + -1;
      uVar1 = *param_1;
    }
  } while ((uVar1 < 0x80) &&
          (param_1 = param_1 + 1,
          (*(uint *)(&DAT_1499d8ec0 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0));
  return 0;
}



// FUNCTION 14250af20 FUN_14250af20 body=221 status=ok
// SIG undefined FUN_14250af20(void)

int FUN_14250af20(undefined8 param_1,char *param_2,int param_3,wchar_t *param_4,int param_5)

{
  byte bVar1;
  wchar_t wVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar5 = 0;
  if ((((param_2 != (char *)0x0) && (-2 < param_3)) && (param_4 != (wchar_t *)0x0)) &&
     (iVar5 = 0, -2 < param_5)) {
    if (param_3 < 0) {
      sVar4 = strlen(param_2);
      param_3 = (int)sVar4;
    }
    if (param_5 < 0) {
      sVar4 = wcslen(param_4);
      param_5 = (int)sVar4;
    }
    iVar5 = param_3 - param_5;
    if (param_3 < param_5) {
      param_5 = param_3;
    }
    if (0 < param_5) {
      param_5 = param_5 + 1;
      lVar6 = 0;
      do {
        bVar1 = param_2[lVar6];
        uVar3 = (uint)bVar1;
        if (((char)bVar1 < '\0') ||
           ((*(uint *)(&DAT_1499d8ec0 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0)) {
          uVar3 = 0xffffffff;
        }
        wVar2 = param_4[lVar6];
        uVar7 = (uint)(ushort)wVar2;
        if ((0x7f < (ushort)wVar2) ||
           ((*(uint *)(&DAT_1499d8ec0 + (ulonglong)((ushort)wVar2 >> 5) * 4) >>
             ((ushort)wVar2 & 0x1f) & 1) == 0)) {
          uVar7 = 0xfffffffe;
        }
        if (uVar3 - uVar7 != 0) {
          return uVar3 - uVar7;
        }
        param_5 = param_5 + -1;
        lVar6 = lVar6 + 1;
      } while (1 < param_5);
    }
  }
  return iVar5;
}



// FUNCTION 14250b000 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14250b010 FUN_14250b010 body=17 status=ok
// SIG undefined FUN_14250b010(void)

void FUN_14250b010(void)

{
  FUN_1424d6720(0x10,FUN_14250b030);
  return;
}



// FUNCTION 14250b030 FUN_14250b030 body=150 status=ok
// SIG undefined FUN_14250b030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14250b030(void)

{
  int iVar1;
  
  FUN_14250c1e0();
  if (DAT_14c792b40 != 0) {
    iVar1 = FUN_142502610();
    if (iVar1 == 0) {
      FUN_142502220(DAT_14c792b40);
      DAT_14c792b40 = 0;
    }
  }
  _DAT_14c792b48 = 0;
  if (DAT_14c792b50 != 0) {
    FUN_1424da110();
    DAT_14c792b50 = 0;
  }
  LOCK();
  DAT_14c792ba0 = 0;
  UNLOCK();
  DAT_14c792b58 = 0;
  DAT_14c792b60 = 0;
  DAT_14c792b38 = 0;
  DAT_14c792b30 = 0;
  return DAT_14c792b40 == 0;
}



// FUNCTION 14250b0d0 FUN_14250b0d0 body=146 status=ok
// SIG undefined FUN_14250b0d0(void)

longlong FUN_14250b0d0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    lVar1 = 0;
  }
  else {
    if ((*(char **)(param_1 + 0x10) != (char *)0x0) && (**(char **)(param_1 + 0x10) != '\0')) {
      lVar1 = FUN_14250b170(param_1,param_2);
      return lVar1;
    }
    if ((DAT_14c792b40 == 0) ||
       (lVar1 = FUN_142502620(DAT_14c792b40,*(undefined8 *)(param_1 + 0x18)), lVar1 == 0)) {
      lVar2 = FUN_14250b170(param_1,param_2);
      lVar1 = 0;
      if (((lVar2 != 0) && (*param_2 < 1)) && (lVar1 = lVar2, *(char *)(param_1 + 8) == '\0')) {
        FUN_14250b2b0(lVar2);
      }
    }
    else {
      *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
    }
  }
  return lVar1;
}



// FUNCTION 14250b170 FUN_14250b170 body=317 status=ok
// SIG undefined FUN_14250b170(void)

void * FUN_14250b170(longlong param_1,int *param_2)

{
  void *_Src;
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  void *_Dst;
  uint uVar5;
  
  if (0 < *param_2) {
    return (void *)0x0;
  }
  uVar3 = FUN_1424e51c0(*(undefined8 *)(param_1 + 0x10),&DAT_1499d92e0,
                        *(undefined8 *)(param_1 + 0x18),&LAB_14250c6e0,0,param_2);
  if (0 < *param_2) {
    return (void *)0x0;
  }
  puVar4 = (uint *)FUN_142532380(uVar3);
  if (*param_2 < 1) {
    uVar5 = (uint)*(char *)((longlong)puVar4 + 0x45);
    iVar2 = 0xd;
    if (((((uVar5 & 0xfffe) < 0x22) && ((0x203UL >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)) &&
        (_Src = *(void **)(&DAT_1499d91d0 + (longlong)(int)uVar5 * 8),
        *(char *)((longlong)_Src + 0x19) != '\0')) &&
       ((*(int *)((longlong)_Src + 4) == 1 && (*puVar4 == 100)))) {
      _Dst = (void *)FUN_1424da030(0x128);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,_Src,0x128);
        *(uint **)((longlong)_Dst + 0x10) = puVar4;
        *(undefined1 *)((longlong)_Dst + 0x18) = 0;
        *(undefined8 *)((longlong)_Dst + 8) = uVar3;
        pcVar1 = *(code **)(*(longlong *)((longlong)_Dst + 0x20) + 8);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(_Dst,param_1,(longlong)puVar4 + (ulonglong)*puVar4,param_2);
          if (*param_2 < 1) {
            return _Dst;
          }
          FUN_1424da110(_Dst);
          _Dst = (void *)0x0;
        }
        if (*param_2 < 1) {
          return _Dst;
        }
        goto LAB_14250b291;
      }
      iVar2 = 7;
    }
    *param_2 = iVar2;
  }
LAB_14250b291:
  FUN_142532330(uVar3);
  return (void *)0x0;
}



// FUNCTION 14250b2b0 FUN_14250b2b0 body=174 status=ok
// SIG undefined FUN_14250b2b0(void)

void FUN_14250b2b0(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  if (DAT_14c792b40 == 0) {
    uVar2 = FUN_1425807a0(&local_1c);
    local_28 = &local_1c;
    DAT_14c792b40 = FUN_142501f70(FUN_1425031c0,FUN_142503270,0,(uint)uVar2 * 2);
    FUN_1424d6720(0x10,FUN_14250b030);
    if (0 < local_1c) goto LAB_14250b345;
  }
  lVar1 = DAT_14c792b40;
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_142502aa0(lVar1,*(longlong *)(param_1 + 0x10) + 4,param_1,&local_1c);
LAB_14250b345:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14250b370 FUN_14250b370 body=84 status=ok
// SIG undefined FUN_14250b370(void)

void FUN_14250b370(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (((*(int *)(param_1 + 4) == 0 ||
       (iVar2 = *(int *)(param_1 + 4) + -1, *(int *)(param_1 + 4) = iVar2, iVar2 == 0)) &&
      (*(char *)(param_1 + 0x18) == '\0')))) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_142532330();
    }
    FUN_1424da110(param_1);
    return;
  }
  return;
}



// FUNCTION 14250b3d0 FUN_14250b3d0 body=415 status=ok
// SIG undefined FUN_14250b3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250b3d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x19) != '\0')) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792bf8) {
      FUN_144b3d300(&DAT_14c792bf8);
      if (DAT_14c792bf8 == -1) {
        _DAT_14c792be8 = 0;
        uRam000000014c792bf0 = 0;
        _DAT_14c792bd8 = 0;
        uRam000000014c792be0 = 0;
        _DAT_14c792bc8 = 0;
        uRam000000014c792bd0 = 0;
        _DAT_14c792bb8 = 0;
        uRam000000014c792bc0 = 0;
        _DAT_14c792ba8 = 0;
        uRam000000014c792bb0 = 0;
        _Mtx_init_in_situ(&DAT_14c792ba8,2);
        atexit((_func_5014 *)&LAB_14250c730);
        _Init_thread_footer(&DAT_14c792bf8);
      }
    }
    FUN_142501320(&DAT_14c792ba8);
    if (((*(int *)(param_1 + 4) == 0) ||
        (iVar2 = *(int *)(param_1 + 4) + -1, *(int *)(param_1 + 4) = iVar2, iVar2 == 0)) &&
       (*(char *)(param_1 + 0x18) == '\0')) {
      pcVar1 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x10);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1);
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_142532330();
      }
      FUN_1424da110(param_1);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792bf8) {
      FUN_144b3d300(&DAT_14c792bf8);
      if (DAT_14c792bf8 == -1) {
        _DAT_14c792be8 = 0;
        uRam000000014c792bf0 = 0;
        _DAT_14c792bd8 = 0;
        uRam000000014c792be0 = 0;
        _DAT_14c792bc8 = 0;
        uRam000000014c792bd0 = 0;
        _DAT_14c792bb8 = 0;
        uRam000000014c792bc0 = 0;
        _DAT_14c792ba8 = 0;
        uRam000000014c792bb0 = 0;
        _Mtx_init_in_situ(&DAT_14c792ba8,2);
        atexit((_func_5014 *)&LAB_14250c730);
        _Init_thread_footer(&DAT_14c792bf8);
      }
    }
    FUN_142501400(&DAT_14c792ba8);
    return;
  }
  return;
}



// FUNCTION 14250b570 FUN_14250b570 body=342 status=ok
// SIG undefined FUN_14250b570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250b570(longlong param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x19) != '\0')) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792bf8) {
      FUN_144b3d300(&DAT_14c792bf8);
      if (DAT_14c792bf8 == -1) {
        _DAT_14c792be8 = 0;
        uRam000000014c792bf0 = 0;
        _DAT_14c792bd8 = 0;
        uRam000000014c792be0 = 0;
        _DAT_14c792bc8 = 0;
        uRam000000014c792bd0 = 0;
        _DAT_14c792bb8 = 0;
        uRam000000014c792bc0 = 0;
        _DAT_14c792ba8 = 0;
        uRam000000014c792bb0 = 0;
        _Mtx_init_in_situ(&DAT_14c792ba8,2);
        atexit((_func_5014 *)&LAB_14250c730);
        _Init_thread_footer(&DAT_14c792bf8);
      }
    }
    FUN_142501320(&DAT_14c792ba8);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792bf8) {
      FUN_144b3d300(&DAT_14c792bf8);
      if (DAT_14c792bf8 == -1) {
        _DAT_14c792be8 = 0;
        uRam000000014c792bf0 = 0;
        _DAT_14c792bd8 = 0;
        uRam000000014c792be0 = 0;
        _DAT_14c792bc8 = 0;
        uRam000000014c792bd0 = 0;
        _DAT_14c792bb8 = 0;
        uRam000000014c792bc0 = 0;
        _DAT_14c792ba8 = 0;
        uRam000000014c792bb0 = 0;
        _Mtx_init_in_situ(&DAT_14c792ba8,2);
        atexit((_func_5014 *)&LAB_14250c730);
        _Init_thread_footer(&DAT_14c792bf8);
      }
    }
    FUN_142501400(&DAT_14c792ba8);
    return;
  }
  return;
}



// FUNCTION 14250b6d0 FUN_14250b6d0 body=961 status=ok
// SIG undefined FUN_14250b6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250b6d0(char *param_1,undefined1 *param_2,undefined8 *param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_1c8 [43];
  char local_19d;
  int local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 local_168 [224];
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_19c = 0;
  local_19d = '\x01';
  if (0 < *param_4) goto LAB_14250b70a;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_4 = 5;
      goto LAB_14250b70a;
    }
    param_2 = local_168;
LAB_14250b75b:
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    local_198 = 0x28;
    param_3 = &local_198;
  }
  else if (param_3 == (undefined8 *)0x0) goto LAB_14250b75b;
  *param_2 = 0;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0xdc) = 0;
  param_3[3] = param_1;
  param_3[4] = param_2 + 0x3c;
  *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_2 + 0xdc);
  if (param_1 == (char *)0x0) {
    lVar4 = FUN_14250bab0();
    param_3[3] = lVar4;
    lVar5 = DAT_14c792b30;
    cVar1 = DAT_14c792b38;
    if (lVar4 == 0) {
      *param_4 = 2;
      goto LAB_14250b70a;
    }
  }
  else {
    if (*param_1 == 'u') {
      if ((param_1[1] == 't') && (param_1[2] == 'f')) goto LAB_14250b809;
    }
    else if ((*param_1 == 'U') && ((param_1[1] == 'T' && (param_1[2] == 'F')))) {
LAB_14250b809:
      if (param_1[3] == '8') {
        cVar1 = param_1[4];
      }
      else {
        if ((param_1[3] != '-') || (param_1[4] != '8')) goto LAB_14250b84b;
        cVar1 = param_1[5];
      }
      if (cVar1 == '\0') {
        param_3[3] = "UTF-8";
        goto LAB_14250b70a;
      }
    }
LAB_14250b84b:
    FUN_14250bc20(param_1,param_2,param_3,param_4);
    if (0 < *param_4) goto LAB_14250b70a;
    lVar5 = FUN_142580260(param_3[3],&local_19d,&local_19c);
    param_3[3] = lVar5;
    if ((local_19c < 1) && (lVar5 != 0)) {
      if (local_19c == -0x7a) {
        *param_4 = -0x7a;
      }
    }
    else {
      param_3[3] = param_2;
    }
    lVar5 = 0;
    cVar1 = local_19d;
  }
  local_19d = cVar1;
  if ((local_19d != '\0') && ((undefined1 *)param_3[3] != param_2)) {
    FUN_14250bc20((undefined1 *)param_3[3],param_2,param_3,param_4);
  }
  if (param_1 != (char *)0x0) {
    FUN_14257ff00(local_88,param_3[3]);
    uVar8 = 0;
    uVar7 = 0x11;
    uVar2 = 0x22;
    do {
      iVar3 = strcmp(local_88,(&PTR_s_bocu1_1499d92f0)[(ulonglong)uVar7 * 2]);
      uVar6 = uVar7;
      if ((-1 < iVar3) && (uVar6 = uVar2, uVar8 = uVar7, iVar3 == 0)) {
        lVar5 = *(longlong *)
                 (&DAT_1499d91d0 + (longlong)*(int *)(&UNK_1499d92f8 + (ulonglong)uVar7 * 0x10) * 8)
        ;
        goto LAB_14250b935;
      }
      uVar2 = uVar6 + uVar8 >> 1;
      bVar9 = uVar7 != uVar2;
      uVar7 = uVar2;
      uVar2 = uVar6;
    } while (bVar9);
    lVar5 = 0;
  }
LAB_14250b935:
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)param_3 + 4) = 1;
    param_3[2] = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c792bf8) && (FUN_144b3d300(&DAT_14c792bf8), DAT_14c792bf8 == -1)) {
      _DAT_14c792be8 = 0;
      uRam000000014c792bf0 = 0;
      _DAT_14c792bd8 = 0;
      uRam000000014c792be0 = 0;
      _DAT_14c792bc8 = 0;
      uRam000000014c792bd0 = 0;
      _DAT_14c792bb8 = 0;
      uRam000000014c792bc0 = 0;
      _DAT_14c792ba8 = 0;
      uRam000000014c792bb0 = 0;
      _Mtx_init_in_situ(&DAT_14c792ba8,2);
      atexit((_func_5014 *)&LAB_14250c730);
      _Init_thread_footer(&DAT_14c792bf8);
    }
    FUN_142501320(&DAT_14c792ba8);
    FUN_14250b0d0(param_3,param_4);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c792bf8) && (FUN_144b3d300(&DAT_14c792bf8), DAT_14c792bf8 == -1)) {
      _DAT_14c792be8 = 0;
      uRam000000014c792bf0 = 0;
      _DAT_14c792bd8 = 0;
      uRam000000014c792be0 = 0;
      _DAT_14c792bc8 = 0;
      uRam000000014c792bd0 = 0;
      _DAT_14c792bb8 = 0;
      uRam000000014c792bc0 = 0;
      _DAT_14c792ba8 = 0;
      uRam000000014c792bb0 = 0;
      _Mtx_init_in_situ(&DAT_14c792ba8,2);
      atexit((_func_5014 *)&LAB_14250c730);
      _Init_thread_footer(&DAT_14c792bf8);
    }
    FUN_142501400(&DAT_14c792ba8);
  }
LAB_14250b70a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 14250bab0 FUN_14250bab0 body=352 status=ok
// SIG undefined FUN_14250bab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250bab0(void)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792bf8) && (FUN_144b3d300(&DAT_14c792bf8), DAT_14c792bf8 == -1)) {
    _DAT_14c792be8 = 0;
    uRam000000014c792bf0 = 0;
    _DAT_14c792bd8 = 0;
    uRam000000014c792be0 = 0;
    _DAT_14c792bc8 = 0;
    uRam000000014c792bd0 = 0;
    _DAT_14c792bb8 = 0;
    uRam000000014c792bc0 = 0;
    _DAT_14c792ba8 = 0;
    uRam000000014c792bb0 = 0;
    _Mtx_init_in_situ(&DAT_14c792ba8,2);
    atexit((_func_5014 *)&LAB_14250c730);
    _Init_thread_footer(&DAT_14c792bf8);
  }
  FUN_142501320(&DAT_14c792ba8);
  lVar1 = DAT_14c792b58;
  FUN_142501400(&DAT_14c792ba8);
  if (lVar1 != 0) goto LAB_14250bb96;
  local_1c = 0;
  _Str = (char *)FUN_1424d9da0();
  if (_Str == (char *)0x0) {
    lVar1 = 0;
LAB_14250bb7a:
    _Str = "US-ASCII";
  }
  else {
    lVar1 = FUN_1424e0df0(_Str,&local_1c);
    if ((((local_1c < 1) && (lVar1 != 0)) &&
        (_Str = (char *)FUN_1424e1460(lVar1,&local_1c), _Str == (char *)0x0)) ||
       (((*_Str == '\0' || (0 < local_1c)) || ((lVar1 == 0 || (sVar2 = strlen(_Str), 0x3c < sVar2)))
        ))) goto LAB_14250bb7a;
  }
  FUN_14250c420(_Str,&local_1c);
  FUN_1424e1140(lVar1);
LAB_14250bb96:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14250bc20 FUN_14250bc20 body=793 status=ok
// SIG undefined FUN_14250bc20(void)

void FUN_14250bc20(longlong param_1,undefined1 *param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *_Str1;
  
  *(longlong *)(param_3 + 0x18) = param_1;
  *(undefined1 **)(param_3 + 0x20) = param_2 + 0x3c;
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xdc);
  lVar4 = 0;
  do {
    cVar1 = *(char *)(param_1 + lVar4);
    if ((cVar1 == '\0') || (cVar1 == ',')) {
      pcVar6 = (char *)(param_1 + lVar4);
      puVar5 = param_2 + lVar4;
LAB_14250bcfe:
      *puVar5 = 0;
      *(undefined1 **)(param_3 + 0x18) = param_2;
      do {
        while( true ) {
          if (*pcVar6 == ',') {
            _Str1 = pcVar6 + 1;
          }
          else {
            _Str1 = pcVar6;
            if (*pcVar6 == '\0') {
              return;
            }
          }
          iVar2 = strncmp(_Str1,"locale=",7);
          if (iVar2 == 0) break;
          iVar2 = strncmp(_Str1,"version=",8);
          if (iVar2 == 0) {
            if (_Str1[8] == '\0') {
              uVar3 = *(uint *)(param_2 + 0xdc);
              *(uint *)(param_2 + 0xdc) = uVar3 & 0xfffffff0;
              *(uint *)(param_3 + 0xc) = uVar3 & 0xfffffff0;
              return;
            }
            pcVar6 = _Str1 + 8;
            uVar3 = (int)_Str1[8] - 0x30;
            if ((uVar3 & 0xfe) < 10) {
              uVar3 = *(uint *)(param_2 + 0xdc) & 0xfffffff0 | uVar3;
              *(uint *)(param_2 + 0xdc) = uVar3;
              *(uint *)(param_3 + 0xc) = uVar3;
              pcVar6 = _Str1 + 9;
            }
          }
          else {
            iVar2 = strncmp(_Str1,"swaplfnl",8);
            if (iVar2 == 0) {
              pcVar6 = _Str1 + 8;
              uVar3 = *(uint *)(param_2 + 0xdc);
              *(uint *)(param_2 + 0xdc) = uVar3 | 0x10;
              *(uint *)(param_3 + 0xc) = uVar3 | 0x10;
            }
            else {
              while( true ) {
                cVar1 = *_Str1;
                pcVar6 = _Str1 + 1;
                if (cVar1 == ',') break;
                _Str1 = pcVar6;
                if (cVar1 == '\0') {
                  return;
                }
              }
            }
          }
        }
        for (lVar4 = 0; (cVar1 = _Str1[lVar4 + 7], cVar1 != '\0' && (cVar1 != ','));
            lVar4 = lVar4 + 4) {
          if ((int)lVar4 == 0x9c) {
            *param_4 = 1;
            param_2[0x3c] = 0;
            pcVar6 = _Str1 + lVar4 + 8;
            goto joined_r0x00014250bf17;
          }
          param_2[lVar4 + 0x3c] = cVar1;
          cVar1 = _Str1[lVar4 + 8];
          if ((cVar1 == '\0') || (cVar1 == ',')) {
            pcVar6 = _Str1 + lVar4 + 8;
            puVar5 = param_2 + lVar4 + 0x3d;
            goto LAB_14250bee5;
          }
          param_2[lVar4 + 0x3d] = cVar1;
          cVar1 = _Str1[lVar4 + 9];
          if ((cVar1 == '\0') || (cVar1 == ',')) {
            pcVar6 = _Str1 + lVar4 + 9;
            puVar5 = param_2 + lVar4 + 0x3e;
            goto LAB_14250bee5;
          }
          param_2[lVar4 + 0x3e] = cVar1;
          cVar1 = _Str1[lVar4 + 10];
          if ((cVar1 == '\0') || (cVar1 == ',')) {
            pcVar6 = _Str1 + lVar4 + 10;
            puVar5 = param_2 + lVar4 + 0x3f;
            goto LAB_14250bee5;
          }
          param_2[lVar4 + 0x3f] = cVar1;
        }
        pcVar6 = _Str1 + lVar4 + 7;
        puVar5 = param_2 + lVar4 + 0x3c;
LAB_14250bee5:
        *puVar5 = 0;
joined_r0x00014250bf17:
        if ((cVar1 != '\0') && (cVar1 != ',')) {
          return;
        }
      } while( true );
    }
    param_2[lVar4] = cVar1;
    cVar1 = *(char *)(param_1 + 1 + lVar4);
    if ((cVar1 == '\0') || (cVar1 == ',')) {
      pcVar6 = (char *)(param_1 + lVar4 + 1);
      puVar5 = param_2 + lVar4 + 1;
      goto LAB_14250bcfe;
    }
    param_2[lVar4 + 1] = cVar1;
    cVar1 = *(char *)(param_1 + 2 + lVar4);
    if ((cVar1 == '\0') || (cVar1 == ',')) {
      pcVar6 = (char *)(param_1 + lVar4 + 2);
      puVar5 = param_2 + lVar4 + 2;
      goto LAB_14250bcfe;
    }
    param_2[lVar4 + 2] = cVar1;
    cVar1 = *(char *)(param_1 + 3 + lVar4);
    if ((cVar1 == '\0') || (cVar1 == ',')) {
      pcVar6 = (char *)(param_1 + lVar4 + 3);
      puVar5 = param_2 + lVar4 + 3;
      goto LAB_14250bcfe;
    }
    param_2[lVar4 + 3] = cVar1;
    cVar1 = *(char *)(param_1 + 4 + lVar4);
    if ((cVar1 == '\0') || (cVar1 == ',')) {
      pcVar6 = (char *)(param_1 + lVar4 + 4);
      puVar5 = param_2 + lVar4 + 4;
      goto LAB_14250bcfe;
    }
    if ((int)lVar4 == 0x37) {
      *param_4 = 1;
      *param_2 = 0;
      return;
    }
    param_2[lVar4 + 4] = cVar1;
    lVar4 = lVar4 + 5;
  } while( true );
}



// FUNCTION 14250bf60 FUN_14250bf60 body=142 status=ok
// SIG undefined FUN_14250bf60(void)

void FUN_14250bf60(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100 [224];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_128 = 0x28;
  if (*param_3 < 1) {
    uVar1 = FUN_14250b6d0(param_2,local_100,&local_128,param_3);
    FUN_14250c000(param_1,uVar1,&local_128,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_148);
}



// FUNCTION 14250c000 FUN_14250c000 body=303 status=ok
// SIG undefined FUN_14250c000(void)

undefined8 * FUN_14250c000(undefined8 *param_1,longlong param_2,longlong param_3,int *param_4)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  if (0 < *param_4) {
    FUN_14250b3d0(param_2);
    return param_1;
  }
  uVar3 = 1;
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)FUN_1424da030(0x120);
    if (param_1 == (undefined8 *)0x0) {
      *param_4 = 7;
      FUN_14250b3d0(param_2);
      return (undefined8 *)0x0;
    }
    uVar3 = 0;
  }
  memset(param_1,0,0x120);
  *(undefined1 *)((longlong)param_1 + 0x3d) = uVar3;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0xc);
  if (*(char *)(param_3 + 8) == '\0') {
    *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
    param_1[1] = &LAB_142582fe0;
    *param_1 = &LAB_142582eb0;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(*(longlong *)(param_2 + 0x10) + 0x47);
    *(undefined1 *)((longlong)param_1 + 0x5e) =
         *(undefined1 *)(*(longlong *)(param_2 + 0x10) + 0x50);
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x10) + 0x4c);
    *(char *)((longlong)param_1 + 0x59) = cVar1;
    param_1[5] = param_1 + 0x11;
    memcpy(param_1 + 0x11,(void *)(*(longlong *)(param_2 + 0x10) + 0x48),(longlong)cVar1);
    *(undefined4 *)((longlong)param_1 + 0x11c) = 1;
  }
  pcVar2 = *(code **)(*(longlong *)(param_2 + 0x20) + 0x18);
  if (pcVar2 == (code *)0x0) {
    return param_1;
  }
  (*pcVar2)(param_1,param_3,param_4);
  if (*param_4 < 1) {
    return param_1;
  }
  if (*(char *)(param_3 + 8) == '\0') {
    FUN_1424e1140(param_1);
    return (undefined8 *)0x0;
  }
  return param_1;
}



// FUNCTION 14250c130 FUN_14250c130 body=149 status=ok
// SIG undefined FUN_14250c130(void)

void FUN_14250c130(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220 [224];
  undefined1 local_140 [288];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_248 = 0x28;
  if (*param_2 < 1) {
    uStack_240 = 1;
    uVar1 = FUN_14250b6d0(0,local_220,&local_248,param_2);
    FUN_14250c000(local_140,uVar1,&local_248,param_2);
    FUN_14250b3d0(uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_268);
}



// FUNCTION 14250c1e0 FUN_14250c1e0 body=544 status=ok
// SIG undefined FUN_14250c1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250c1e0(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14250c820();
  if (DAT_14c792b40 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c792bf8) && (FUN_144b3d300(&DAT_14c792bf8), DAT_14c792bf8 == -1)) {
      _DAT_14c792be8 = 0;
      uRam000000014c792bf0 = 0;
      _DAT_14c792bd8 = 0;
      uRam000000014c792be0 = 0;
      _DAT_14c792bc8 = 0;
      uRam000000014c792bd0 = 0;
      _DAT_14c792bb8 = 0;
      uRam000000014c792bc0 = 0;
      _DAT_14c792ba8 = 0;
      uRam000000014c792bb0 = 0;
      _Mtx_init_in_situ(&DAT_14c792ba8,2);
      atexit((_func_5014 *)&LAB_14250c730);
      _Init_thread_footer(&DAT_14c792bf8);
    }
    FUN_142501320(&DAT_14c792ba8);
    bVar4 = 1;
    do {
      local_34 = 0xffffffff;
      lVar5 = FUN_1425022e0(DAT_14c792b40,&local_34);
      if (lVar5 == 0) break;
      iVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar5 + 8);
        if (*(int *)(lVar1 + 4) == 0) {
          FUN_142503000(DAT_14c792b40,lVar5);
          *(undefined1 *)(lVar1 + 0x18) = 0;
          if (*(int *)(lVar1 + 4) == 0) {
            pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x20) + 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(lVar1);
            }
            if (*(longlong *)(lVar1 + 8) != 0) {
              FUN_142532330();
            }
            FUN_1424da110(lVar1);
          }
        }
        else {
          iVar6 = iVar6 + 1;
        }
        lVar5 = FUN_1425022e0(DAT_14c792b40,&local_34);
      } while (lVar5 != 0);
      bVar3 = (bool)(bVar4 & 0 < iVar6);
      bVar4 = 0;
    } while (bVar3);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c792bf8) && (FUN_144b3d300(&DAT_14c792bf8), DAT_14c792bf8 == -1)) {
      _DAT_14c792be8 = 0;
      uRam000000014c792bf0 = 0;
      _DAT_14c792bd8 = 0;
      uRam000000014c792be0 = 0;
      _DAT_14c792bc8 = 0;
      uRam000000014c792bd0 = 0;
      _DAT_14c792bb8 = 0;
      uRam000000014c792bc0 = 0;
      _DAT_14c792ba8 = 0;
      uRam000000014c792bb0 = 0;
      _Mtx_init_in_situ(&DAT_14c792ba8,2);
      atexit((_func_5014 *)&LAB_14250c730);
      _Init_thread_footer(&DAT_14c792bf8);
    }
    FUN_142501400(&DAT_14c792ba8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 14250c420 FUN_14250c420 body=678 status=ok
// SIG undefined FUN_14250c420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14250c420(char *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_1c8 [47];
  undefined1 local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  char *pcStack_180;
  undefined8 local_178;
  undefined1 local_168 [60];
  undefined1 local_12c;
  undefined4 local_8c;
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = 0;
  pcStack_180 = (char *)0x0;
  local_198 = 0;
  uStack_190 = 0;
  local_178 = 0;
  sVar4 = strlen(param_1);
  pcVar5 = strchr(param_1,0x2c);
  pcStack_180 = param_1;
  if (pcVar5 != (char *)0x0) {
    local_168[0] = 0;
    local_12c = 0;
    local_8c = 0;
    FUN_14250bc20(param_1,local_168,&local_198,param_2);
    if (0 < *param_2) goto LAB_14250c5de;
  }
  local_199 = pcVar5 != (char *)0x0;
  FUN_14257ff00(local_88,pcStack_180);
  uVar9 = 0;
  uVar8 = 0x11;
  uVar2 = 0x22;
  do {
    iVar3 = strcmp(local_88,(&PTR_s_bocu1_1499d92f0)[(ulonglong)uVar8 * 2]);
    uVar1 = local_199;
    uVar6 = uVar8;
    if ((-1 < iVar3) && (uVar6 = uVar2, uVar9 = uVar8, iVar3 == 0)) {
      uVar7 = *(undefined8 *)
               (&DAT_1499d91d0 + (longlong)*(int *)(&UNK_1499d92f8 + (ulonglong)uVar8 * 0x10) * 8);
      goto LAB_14250c536;
    }
    uVar2 = uVar6 + uVar9 >> 1;
    bVar10 = uVar8 != uVar2;
    uVar8 = uVar2;
    uVar2 = uVar6;
  } while (bVar10);
  uVar7 = 0;
LAB_14250c536:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792bf8) && (FUN_144b3d300(&DAT_14c792bf8), DAT_14c792bf8 == -1)) {
    _DAT_14c792be8 = 0;
    uRam000000014c792bf0 = 0;
    _DAT_14c792bd8 = 0;
    uRam000000014c792be0 = 0;
    _DAT_14c792bc8 = 0;
    uRam000000014c792bd0 = 0;
    _DAT_14c792bb8 = 0;
    uRam000000014c792bc0 = 0;
    _DAT_14c792ba8 = 0;
    uRam000000014c792bb0 = 0;
    _Mtx_init_in_situ(&DAT_14c792ba8,2);
    atexit((_func_5014 *)&LAB_14250c730);
    _Init_thread_footer(&DAT_14c792bf8);
  }
  FUN_142501320(&DAT_14c792ba8);
  DAT_14c792b38 = uVar1;
  DAT_14c792b30 = uVar7;
  memcpy(&DAT_14c792b60,param_1,(longlong)(int)sVar4);
  (&DAT_14c792b60)[(int)sVar4] = 0;
  DAT_14c792b58 = &DAT_14c792b60;
  FUN_1424d6720(0x10,FUN_14250b030);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792bf8) && (FUN_144b3d300(&DAT_14c792bf8), DAT_14c792bf8 == -1)) {
    _DAT_14c792be8 = 0;
    uRam000000014c792bf0 = 0;
    _DAT_14c792bd8 = 0;
    uRam000000014c792be0 = 0;
    _DAT_14c792bc8 = 0;
    uRam000000014c792bd0 = 0;
    _DAT_14c792bb8 = 0;
    uRam000000014c792bc0 = 0;
    _DAT_14c792ba8 = 0;
    uRam000000014c792bb0 = 0;
    _Mtx_init_in_situ(&DAT_14c792ba8,2);
    atexit((_func_5014 *)&LAB_14250c730);
    _Init_thread_footer(&DAT_14c792bf8);
  }
  FUN_142501400(&DAT_14c792ba8);
LAB_14250c5de:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 14250c740 FUN_14250c740 body=103 status=ok
// SIG undefined FUN_14250c740(void)

longlong FUN_14250c740(int *param_1)

{
  longlong lVar1;
  
  if (DAT_14c792c00 != 0) {
    FUN_142501320(0);
    lVar1 = DAT_14c792c00;
    if (DAT_14c792c00 != 0) {
      DAT_14c792c00 = 0;
      FUN_142501400(0);
      return lVar1;
    }
    FUN_142501400(0);
  }
  lVar1 = FUN_1424e0df0(0,param_1);
  if (0 < *param_1) {
    FUN_1424e1140(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14250c7b0 FUN_14250c7b0 body=98 status=ok
// SIG undefined FUN_14250c7b0(void)

void FUN_14250c7b0(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_14c792c00 == 0) {
    if (param_1 != 0) {
      FUN_1424e12c0(param_1);
    }
    FUN_14250b010();
    FUN_142501320(0);
    lVar1 = param_1;
    if (DAT_14c792c00 == 0) {
      lVar1 = 0;
      DAT_14c792c00 = param_1;
    }
    FUN_142501400(0);
    param_1 = lVar1;
  }
  if (param_1 == 0) {
    return;
  }
  FUN_1424e1140(param_1);
  return;
}



// FUNCTION 14250c820 FUN_14250c820 body=84 status=ok
// SIG undefined FUN_14250c820(void)

void FUN_14250c820(void)

{
  longlong lVar1;
  
  if (DAT_14c792c00 == 0) {
    return;
  }
  FUN_142501320(0);
  lVar1 = DAT_14c792c00;
  if (DAT_14c792c00 != 0) {
    DAT_14c792c00 = 0;
    FUN_142501400(0);
    FUN_1424e1140(lVar1);
    return;
  }
  FUN_142501400(0);
  return;
}



// FUNCTION 14250c880 FUN_14250c880 body=2508 status=ok
// SIG undefined FUN_14250c880(void)

undefined1 (*) [16] FUN_14250c880(undefined1 (*param_1) [16],int *param_2)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_1e0 [64];
  undefined1 local_1a0 [200];
  undefined1 (*local_d8) [16];
  undefined1 *local_d0;
  undefined1 (*local_c8) [16];
  undefined1 *local_c0;
  undefined1 (*local_b8) [16];
  undefined1 *local_b0;
  undefined1 (*local_a8) [16];
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 (*local_88) [16];
  undefined1 (*local_80) [16];
  undefined1 *local_78;
  longlong local_70;
  undefined1 (*local_68) [16];
  undefined8 *local_60;
  undefined1 (*local_58) [16];
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  memset(param_1[6] + 8,0,0x1a0);
  local_78 = param_1[0x20] + 8;
  local_58 = (undefined1 (*) [16])local_78;
  FUN_142511900();
  local_88 = param_1 + 0x2d;
  local_58 = local_88;
  FUN_142511900();
  local_90 = param_1[0x39] + 8;
  local_58 = (undefined1 (*) [16])local_90;
  FUN_142511900();
  local_d8 = param_1 + 0x46;
  local_58 = local_d8;
  FUN_142511900();
  local_d0 = param_1[0x52] + 8;
  local_58 = (undefined1 (*) [16])local_d0;
  FUN_142511900();
  local_c8 = param_1 + 0x5f;
  local_58 = local_c8;
  FUN_142511900();
  local_c0 = param_1[0x6b] + 8;
  local_58 = (undefined1 (*) [16])local_c0;
  FUN_142511900();
  local_b8 = param_1 + 0x78;
  local_58 = local_b8;
  FUN_142511900();
  local_b0 = param_1[0x84] + 8;
  local_58 = (undefined1 (*) [16])local_b0;
  FUN_142511900();
  local_a8 = param_1 + 0x91;
  local_58 = local_a8;
  FUN_142511900();
  FUN_1424a7060(local_1a0,1,L"[acefnrtuUx]",0xffffffff);
  FUN_1425c5b90(param_1[0x9d] + 8,local_1a0,param_2);
  local_a0 = param_1[0x9d] + 8;
  FUN_140859a90(local_1a0);
  param_1[5] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[6] = 0;
  param_1[0xaa] = (undefined1  [16])0x0;
  lVar3 = thunk_FUN_1424da030(200);
  if (lVar3 == 0) {
    *(undefined8 *)(*param_1 + 8) = 0;
  }
  else {
    local_60 = (undefined8 *)lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{alphabetic}\\p{M}\\p{Nd}\\p{Pc}\\u200c\\u200d]",0xffffffff);
    puVar4 = local_60;
    FUN_1425c5b90(local_60,local_1a0,param_2);
    *(undefined8 **)(*param_1 + 8) = puVar4;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  if (lVar3 == 0) {
    *(undefined8 *)param_1[2] = 0;
  }
  else {
    local_50 = (undefined8 *)lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{WhiteSpace}]",0xffffffff);
    puVar4 = local_50;
    FUN_1425c5b90(local_50,local_1a0,param_2);
    *(undefined8 **)param_1[2] = puVar4;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  local_60 = (undefined8 *)(*param_1 + 8);
  if (lVar3 == 0) {
    *(undefined8 *)param_1[3] = 0;
  }
  else {
    local_50 = (undefined8 *)lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{Grapheme_Extend}]",0xffffffff);
    puVar4 = local_50;
    FUN_1425c5b90(local_50,local_1a0,param_2);
    *(undefined8 **)param_1[3] = puVar4;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  if (lVar3 == 0) {
    *(undefined8 *)(param_1[3] + 8) = 0;
  }
  else {
    local_50 = (undefined8 *)lVar3;
    FUN_1424a7060(local_1a0,1,L"[[:Zl:][:Zp:][:Cc:][:Cf:]-[:Grapheme_Extend:]]",0xffffffff);
    puVar4 = local_50;
    FUN_1425c5b90(local_50,local_1a0,param_2);
    *(undefined8 **)(param_1[3] + 8) = puVar4;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  if (lVar3 == 0) {
    *(undefined8 *)param_1[4] = 0;
  }
  else {
    local_80 = (undefined1 (*) [16])lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{Hangul_Syllable_Type=L}]",0xffffffff);
    pauVar1 = local_80;
    FUN_1425c5b90(local_80,local_1a0,param_2);
    *(undefined1 (**) [16])param_1[4] = pauVar1;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  if (lVar3 == 0) {
    local_98 = (undefined8 *)(param_1[5] + 8);
    *(undefined8 *)(param_1[5] + 8) = 0;
  }
  else {
    local_68 = (undefined1 (*) [16])lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{Hangul_Syllable_Type=V}]",0xffffffff);
    pauVar1 = local_68;
    FUN_1425c5b90(local_68,local_1a0,param_2);
    local_98 = (undefined8 *)(param_1[5] + 8);
    *(undefined1 (**) [16])(param_1[5] + 8) = pauVar1;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  local_80 = param_1 + 4;
  local_50 = (undefined8 *)(param_1[3] + 8);
  if (lVar3 == 0) {
    *(undefined8 *)param_1[6] = 0;
  }
  else {
    local_68 = (undefined1 (*) [16])lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{Hangul_Syllable_Type=T}]",0xffffffff);
    pauVar1 = local_68;
    FUN_1425c5b90(local_68,local_1a0,param_2);
    *(undefined1 (**) [16])param_1[6] = pauVar1;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  local_68 = param_1 + 6;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1[4] + 8) = 0;
    puVar4 = local_60;
  }
  else {
    local_70 = lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{Hangul_Syllable_Type=LV}]",0xffffffff);
    puVar4 = local_60;
    lVar3 = local_70;
    FUN_1425c5b90(local_70,local_1a0,param_2);
    *(longlong *)(param_1[4] + 8) = lVar3;
    FUN_140859a90(local_1a0);
  }
  lVar3 = thunk_FUN_1424da030(200);
  if (lVar3 == 0) {
    *(undefined8 *)param_1[5] = 0;
    lVar3 = 0;
  }
  else {
    local_70 = lVar3;
    FUN_1424a7060(local_1a0,1,L"[\\p{Hangul_Syllable_Type=LVT}]",0xffffffff);
    lVar3 = local_70;
    FUN_1425c5b90(local_70,local_1a0,param_2);
    *(longlong *)param_1[5] = lVar3;
    FUN_140859a90(local_1a0);
    lVar3 = *(longlong *)param_1[5];
  }
  auVar13._0_4_ = -(uint)((int)*(undefined8 *)*local_68 == 0);
  auVar13._4_4_ = -(uint)((int)((ulonglong)*(undefined8 *)*local_68 >> 0x20) == 0);
  auVar13._8_4_ = -(uint)((int)*(undefined8 *)(param_1[4] + 8) == 0);
  auVar13._12_4_ = -(uint)((int)((ulonglong)*(undefined8 *)(param_1[4] + 8) >> 0x20) == 0);
  auVar16._4_4_ = auVar13._0_4_;
  auVar16._0_4_ = auVar13._4_4_;
  auVar16._8_4_ = auVar13._12_4_;
  auVar16._12_4_ = auVar13._8_4_;
  auVar15._0_4_ = -(uint)((int)*(undefined8 *)*local_80 == 0);
  auVar15._4_4_ = -(uint)((int)((ulonglong)*(undefined8 *)*local_80 >> 0x20) == 0);
  auVar15._8_4_ = -(uint)((int)*local_98 == 0);
  auVar15._12_4_ = -(uint)((int)((ulonglong)*local_98 >> 0x20) == 0);
  auVar14._4_4_ = auVar15._0_4_;
  auVar14._0_4_ = auVar15._4_4_;
  auVar14._8_4_ = auVar15._12_4_;
  auVar14._12_4_ = auVar15._8_4_;
  auVar15 = packssdw(auVar14 & auVar15,auVar16 & auVar13);
  auVar11._0_4_ = -(uint)((int)*(undefined8 *)param_1[3] == 0);
  auVar11._4_4_ = -(uint)((int)((ulonglong)*(undefined8 *)param_1[3] >> 0x20) == 0);
  auVar11._8_4_ = -(uint)((int)*local_50 == 0);
  auVar11._12_4_ = -(uint)((int)((ulonglong)*local_50 >> 0x20) == 0);
  auVar12._4_4_ = auVar11._0_4_;
  auVar12._0_4_ = auVar11._4_4_;
  auVar12._8_4_ = auVar11._12_4_;
  auVar12._12_4_ = auVar11._8_4_;
  auVar10._0_4_ = -(uint)((int)*(undefined8 *)param_1[2] == 0);
  auVar10._4_4_ = -(uint)((int)((ulonglong)*(undefined8 *)param_1[2] >> 0x20) == 0);
  auVar10._8_4_ = -(uint)((int)*puVar4 == 0);
  auVar10._12_4_ = -(uint)((int)((ulonglong)*puVar4 >> 0x20) == 0);
  auVar9._4_4_ = auVar10._0_4_;
  auVar9._0_4_ = auVar10._4_4_;
  auVar9._8_4_ = auVar10._12_4_;
  auVar9._12_4_ = auVar10._8_4_;
  auVar10 = packssdw(auVar9 & auVar10,auVar12 & auVar11);
  auVar10 = packssdw(auVar10,auVar15);
  if (((((((((SUB161(auVar10 >> 0xf,0) & 1) == 0 && (SUB161(auVar10 >> 0x1f,0) & 1) == 0) &&
           (SUB161(auVar10 >> 0x2f,0) & 1) == 0) && (SUB161(auVar10 >> 0x3f,0) & 1) == 0) &&
         (SUB161(auVar10 >> 0x4f,0) & 1) == 0) && (SUB161(auVar10 >> 0x5f,0) & 1) == 0) &&
       (SUB161(auVar10 >> 0x6f,0) & 1) == 0) && -1 < auVar10[0xf]) && (lVar3 != 0)) {
    if (0 < *param_2) {
      return param_1;
    }
    puVar4 = (undefined8 *)thunk_FUN_1424da030(200);
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1[2] + 8) = 0;
    }
    else {
      local_60 = puVar4;
      FUN_142511960(puVar4,0,0x10ffff);
      *(undefined8 **)(param_1[2] + 8) = local_60;
      FUN_142514420(local_60,0xac00,0xd7a4);
      FUN_142514040(*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[3] + 8));
      FUN_142514040(*(undefined8 *)(param_1[2] + 8),*(undefined8 *)param_1[4]);
      FUN_142514040(*(undefined8 *)(param_1[2] + 8),*(undefined8 *)(param_1[5] + 8));
      FUN_142514040(*(undefined8 *)(param_1[2] + 8),*(undefined8 *)param_1[6]);
      for (uVar6 = 0; uVar6 < 0xd; uVar6 = uVar6 + 1) {
        uVar8 = (ulonglong)uVar6;
        if (*(longlong *)(*param_1 + uVar8 * 8) != 0) {
          FUN_142514740();
          lVar3 = *(longlong *)(*param_1 + uVar8 * 8);
          if (lVar3 != 0) {
            uVar7 = 0;
            do {
              cVar2 = FUN_142512880(lVar3,uVar7);
              if (cVar2 != '\0') {
                param_1[uVar8 * 2 + 6][(ulonglong)(uVar7 >> 3) + 8] =
                     param_1[uVar8 * 2 + 6][(ulonglong)(uVar7 >> 3) + 8] |
                     (byte)(1 << ((byte)uVar7 & 7));
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 != 0x100);
          }
        }
      }
      FUN_1424a7060(local_1e0,1,L"[^\\*\\?\\+\\[\\(\\)\\{\\}\\^\\$\\|\\\\\\.]",0xffffffff);
      FUN_1425c5b90(local_1a0,local_1e0,param_2);
      FUN_142511c30(local_90,local_1a0);
      FUN_1425121d0(local_1a0);
      FUN_140859a90(local_1e0);
      FUN_142511a00(local_88,0x30,0x39);
      FUN_142511a00(local_78,0x41,0x5a);
      FUN_142511a00(local_78,0x61,0x7a);
      *(undefined1 (**) [16])param_1[0xaa] = local_88;
      uVar6 = 0;
      do {
        FUN_142514740((longlong)param_1 + (ulonglong)uVar6 * 200 + 0x208);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 10);
      uVar5 = FUN_14250ef60(0,0,0,param_2);
      *(undefined8 *)(param_1[0xaa] + 8) = uVar5;
      if (*param_2 < 1) {
        return param_1;
      }
    }
  }
  lVar3 = *(longlong *)*param_1;
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)*param_1 = 0;
  lVar3 = *(longlong *)(*param_1 + 8);
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(*param_1 + 8) = 0;
  lVar3 = *(longlong *)param_1[1];
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)param_1[1] = 0;
  lVar3 = *(longlong *)(param_1[1] + 8);
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(param_1[1] + 8) = 0;
  lVar3 = *(longlong *)param_1[2];
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)param_1[2] = 0;
  lVar3 = *(longlong *)(param_1[2] + 8);
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(param_1[2] + 8) = 0;
  lVar3 = *(longlong *)param_1[3];
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)param_1[3] = 0;
  lVar3 = *(longlong *)(param_1[3] + 8);
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(param_1[3] + 8) = 0;
  lVar3 = *(longlong *)param_1[4];
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)param_1[4] = 0;
  lVar3 = *(longlong *)(param_1[4] + 8);
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(param_1[4] + 8) = 0;
  lVar3 = *(longlong *)param_1[5];
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)param_1[5] = 0;
  lVar3 = *(longlong *)(param_1[5] + 8);
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(param_1[5] + 8) = 0;
  lVar3 = *(longlong *)param_1[6];
  if (lVar3 != 0) {
    FUN_1425121d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)param_1[6] = 0;
  if (*param_2 < 1) {
    *param_2 = 7;
  }
  return param_1;
}



// FUNCTION 14250d270 Unwind@14250d270 body=84 status=ok
// SIG undefined Unwind@14250d270(void)

void Unwind_14250d270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x1b0);
  lVar1 = *(longlong *)(param_2 + 400);
  while (lVar1 != lVar2) {
    lVar2 = lVar2 + -200;
    FUN_1425121d0(lVar2);
  }
  return;
}



// FUNCTION 14250d2d0 Unwind@14250d2d0 body=55 status=ok
// SIG undefined Unwind@14250d2d0(void)

void Unwind_14250d2d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d310 Unwind@14250d310 body=55 status=ok
// SIG undefined Unwind@14250d310(void)

void Unwind_14250d310(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d350 Unwind@14250d350 body=58 status=ok
// SIG undefined Unwind@14250d350(void)

void Unwind_14250d350(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1a8));
  return;
}



// FUNCTION 14250d390 Unwind@14250d390 body=55 status=ok
// SIG undefined Unwind@14250d390(void)

void Unwind_14250d390(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d3d0 Unwind@14250d3d0 body=58 status=ok
// SIG undefined Unwind@14250d3d0(void)

void Unwind_14250d3d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1b8));
  return;
}



// FUNCTION 14250d410 Unwind@14250d410 body=55 status=ok
// SIG undefined Unwind@14250d410(void)

void Unwind_14250d410(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d450 Unwind@14250d450 body=58 status=ok
// SIG undefined Unwind@14250d450(void)

void Unwind_14250d450(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1b8));
  return;
}



// FUNCTION 14250d490 Unwind@14250d490 body=55 status=ok
// SIG undefined Unwind@14250d490(void)

void Unwind_14250d490(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d4d0 Unwind@14250d4d0 body=58 status=ok
// SIG undefined Unwind@14250d4d0(void)

void Unwind_14250d4d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1b8));
  return;
}



// FUNCTION 14250d510 Unwind@14250d510 body=55 status=ok
// SIG undefined Unwind@14250d510(void)

void Unwind_14250d510(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d550 Unwind@14250d550 body=58 status=ok
// SIG undefined Unwind@14250d550(void)

void Unwind_14250d550(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x188));
  return;
}



// FUNCTION 14250d590 Unwind@14250d590 body=55 status=ok
// SIG undefined Unwind@14250d590(void)

void Unwind_14250d590(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d5d0 Unwind@14250d5d0 body=58 status=ok
// SIG undefined Unwind@14250d5d0(void)

void Unwind_14250d5d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1a0));
  return;
}



// FUNCTION 14250d610 Unwind@14250d610 body=55 status=ok
// SIG undefined Unwind@14250d610(void)

void Unwind_14250d610(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d650 Unwind@14250d650 body=58 status=ok
// SIG undefined Unwind@14250d650(void)

void Unwind_14250d650(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1a0));
  return;
}



// FUNCTION 14250d690 Unwind@14250d690 body=55 status=ok
// SIG undefined Unwind@14250d690(void)

void Unwind_14250d690(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d6d0 Unwind@14250d6d0 body=58 status=ok
// SIG undefined Unwind@14250d6d0(void)

void Unwind_14250d6d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x198));
  return;
}



// FUNCTION 14250d710 Unwind@14250d710 body=55 status=ok
// SIG undefined Unwind@14250d710(void)

void Unwind_14250d710(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14250d750 Unwind@14250d750 body=58 status=ok
// SIG undefined Unwind@14250d750(void)

void Unwind_14250d750(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x198));
  return;
}



// FUNCTION 14250d790 Unwind@14250d790 body=58 status=ok
// SIG undefined Unwind@14250d790(void)

void Unwind_14250d790(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x1a8));
  return;
}



// FUNCTION 14250d7d0 Unwind@14250d7d0 body=55 status=ok
// SIG undefined Unwind@14250d7d0(void)

void Unwind_14250d7d0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x68);
  return;
}



// FUNCTION 14250d810 Unwind@14250d810 body=55 status=ok
// SIG undefined Unwind@14250d810(void)

void Unwind_14250d810(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14250d850 Unwind@14250d850 body=58 status=ok
// SIG undefined Unwind@14250d850(void)

void Unwind_14250d850(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x168));
  return;
}



// FUNCTION 14250d890 Unwind@14250d890 body=166 status=ok
// SIG undefined Unwind@14250d890(void)

void Unwind_14250d890(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x160));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x158));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x150));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x148));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x140));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x138));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x130));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x178));
  FUN_1425121d0(*(undefined8 *)(param_2 + 0x180));
  FUN_1425121d0(*(undefined8 *)(param_2 + 400));
  return;
}



// FUNCTION 14250d940 FUN_14250d940 body=603 status=ok
// SIG undefined FUN_14250d940(void)

void FUN_14250d940(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  *param_1 = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[1] = 0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[2] = 0;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[3] = 0;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[4] = 0;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[5] = 0;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[6] = 0;
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[7] = 0;
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[8] = 0;
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[9] = 0;
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[10] = 0;
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[0xb] = 0;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[0xc] = 0;
  param_1[0x154] = 0;
  FUN_14250edb0(param_1[0x155]);
  FUN_1425121d0(param_1 + 0x13b);
  FUN_1425121d0(param_1 + 0x122);
  FUN_1425121d0(param_1 + 0x109);
  FUN_1425121d0(param_1 + 0xf0);
  FUN_1425121d0(param_1 + 0xd7);
  FUN_1425121d0(param_1 + 0xbe);
  FUN_1425121d0(param_1 + 0xa5);
  FUN_1425121d0(param_1 + 0x8c);
  FUN_1425121d0(param_1 + 0x73);
  FUN_1425121d0(param_1 + 0x5a);
  FUN_1425121d0(param_1 + 0x41);
  return;
}



// FUNCTION 14250dba0 FUN_14250dba0 body=226 status=ok
// SIG undefined FUN_14250dba0(void)

void FUN_14250dba0(int *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (0 < *param_1) {
    return;
  }
  if ((DAT_14c792c10 == 2) || (cVar1 = FUN_142501800(&DAT_14c792c10), cVar1 == '\0')) {
    if (0 < DAT_14c792c14) {
      *param_1 = DAT_14c792c14;
    }
    return;
  }
  FUN_14251f960(5,FUN_14250dcc0);
  lVar3 = thunk_FUN_1424da030(0xab0);
  if (lVar3 == 0) {
    if (0 < *param_1) goto LAB_14250dc4d;
  }
  else {
    FUN_14250c880(lVar3,param_1);
    iVar2 = *param_1;
    DAT_14c792c08 = lVar3;
    if (iVar2 < 1) goto LAB_14250dc69;
    FUN_14250d940(lVar3);
    FUN_1401773f0(lVar3);
LAB_14250dc4d:
    DAT_14c792c08 = 0;
    iVar2 = *param_1;
    if (0 < iVar2) goto LAB_14250dc69;
  }
  DAT_14c792c08 = 0;
  *param_1 = 7;
  iVar2 = 7;
LAB_14250dc69:
  DAT_14c792c14 = iVar2;
  FUN_1425019c0(&DAT_14c792c10);
  return;
}



// FUNCTION 14250dc90 Unwind@14250dc90 body=34 status=ok
// SIG undefined Unwind@14250dc90(void)

void Unwind_14250dc90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14250dcc0 FUN_14250dcc0 body=60 status=ok
// SIG undefined FUN_14250dcc0(void)

undefined8 FUN_14250dcc0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_14c792c08;
  if (DAT_14c792c08 != 0) {
    FUN_14250d940(DAT_14c792c08);
    FUN_1401773f0(lVar1);
  }
  uVar2 = DAT_14c792c10;
  DAT_14c792c08 = 0;
  LOCK();
  DAT_14c792c10 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 14250dd00 FUN_14250dd00 body=8 status=ok
// SIG undefined FUN_14250dd00(void)

undefined * FUN_14250dd00(void)

{
  return &DAT_14c792c18;
}



// FUNCTION 14250dd10 FUN_14250dd10 body=89 status=ok
// SIG undefined FUN_14250dd10(void)

undefined8 * FUN_14250dd10(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = icu_64::UVector64::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  lVar1 = FUN_1424da030(0x40);
  param_1[3] = lVar1;
  if (lVar1 == 0) {
    *param_2 = 7;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = 8;
  }
  return param_1;
}



// FUNCTION 14250dd70 FUN_14250dd70 body=48 status=ok
// SIG undefined FUN_14250dd70(void)

void FUN_14250dd70(undefined8 *param_1)

{
  *param_1 = icu_64::UVector64::vftable;
  FUN_1424da110(param_1[3]);
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14250dda0 FUN_14250dda0 body=501 status=ok
// SIG undefined FUN_14250dda0(void)

void FUN_14250dda0(longlong param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar6 = *(uint *)(param_2 + 8);
  uVar7 = *(uint *)(param_1 + 0xc);
  if (((int)uVar6 < 0) || ((int)uVar7 < (int)uVar6)) {
    if (0 < *param_3) {
      return;
    }
    if ((int)uVar6 < 0) {
LAB_14250df29:
      iVar4 = 1;
LAB_14250df2e:
      *param_3 = iVar4;
      return;
    }
    if ((int)uVar7 < (int)uVar6) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((0 < (int)uVar1) && (iVar4 = 0xf, (int)uVar1 < (int)uVar6)) goto LAB_14250df2e;
      if (0x3fffffff < (int)uVar7) goto LAB_14250df29;
      uVar9 = uVar7 * 2;
      if ((int)(uVar7 * 2) <= (int)uVar6) {
        uVar9 = uVar6;
      }
      uVar7 = uVar9;
      if ((int)uVar1 < (int)uVar9) {
        uVar7 = uVar1;
      }
      if ((int)uVar1 < 1) {
        uVar7 = uVar9;
      }
      iVar4 = 1;
      if (0xfffffff < (int)uVar7) goto LAB_14250df2e;
      lVar2 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar7 << 3);
      if (lVar2 == 0) {
        iVar4 = 7;
        goto LAB_14250df2e;
      }
      *(longlong *)(param_1 + 0x18) = lVar2;
      *(uint *)(param_1 + 0xc) = uVar7;
      uVar6 = *(uint *)(param_2 + 8);
      if ((int)uVar6 < 0) {
        return;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 < (int)uVar6) {
    if ((int)uVar7 < (int)uVar6) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((0x3fffffff < (int)uVar7) || (0 < (int)uVar1 && (int)uVar1 < (int)uVar6))
      goto LAB_14250decf;
      uVar9 = uVar7 * 2;
      if ((int)(uVar7 * 2) <= (int)uVar6) {
        uVar9 = uVar6;
      }
      uVar7 = uVar9;
      if ((int)uVar1 < (int)uVar9) {
        uVar7 = uVar1;
      }
      if ((int)uVar1 < 1) {
        uVar7 = uVar9;
      }
      if ((0xfffffff < (int)uVar7) ||
         (lVar2 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar7 << 3), lVar2 == 0))
      goto LAB_14250decf;
      *(longlong *)(param_1 + 0x18) = lVar2;
      *(uint *)(param_1 + 0xc) = uVar7;
      iVar4 = *(int *)(param_1 + 8);
    }
    if (iVar4 < (int)uVar6) {
      uVar3 = (ulonglong)iVar4;
      uVar5 = ~uVar3;
      uVar7 = uVar6 - iVar4 & 3;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 != 0) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8) = 0;
          uVar3 = uVar3 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (2 < uVar5 + uVar6) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + uVar3 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar3 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18 + uVar3 * 8) = 0;
          uVar3 = uVar3 + 4;
        } while (uVar6 != uVar3);
      }
    }
  }
  *(uint *)(param_1 + 8) = uVar6;
LAB_14250decf:
  if (0 < *(int *)(param_2 + 8)) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar2 * 8) =
           *(undefined8 *)(*(longlong *)(param_2 + 0x18) + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 14250dfa0 FUN_14250dfa0 body=279 status=ok
// SIG undefined FUN_14250dfa0(void)

void FUN_14250dfa0(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if ((int)param_2 < 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 < (int)param_2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)param_2) {
      uVar8 = *(uint *)(param_1 + 0x10);
      if (0x3fffffff < iVar1) {
        return;
      }
      if (0 < (int)uVar8 && (int)uVar8 < (int)param_2) {
        return;
      }
      uVar2 = iVar1 * 2;
      if (iVar1 * 2 <= (int)param_2) {
        uVar2 = param_2;
      }
      uVar7 = uVar2;
      if ((int)uVar8 < (int)uVar2) {
        uVar7 = uVar8;
      }
      if ((int)uVar8 < 1) {
        uVar7 = uVar2;
      }
      if (0xfffffff < (int)uVar7) {
        return;
      }
      lVar3 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar7 << 3);
      if (lVar3 == 0) {
        return;
      }
      *(longlong *)(param_1 + 0x18) = lVar3;
      *(uint *)(param_1 + 0xc) = uVar7;
      iVar5 = *(int *)(param_1 + 8);
    }
    if (iVar5 < (int)param_2) {
      uVar4 = (ulonglong)iVar5;
      uVar6 = ~uVar4;
      uVar8 = param_2 - iVar5 & 3;
      uVar9 = (ulonglong)uVar8;
      if (uVar8 != 0) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8) = 0;
          uVar4 = uVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (2 < uVar6 + param_2) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + uVar4 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar4 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18 + uVar4 * 8) = 0;
          uVar4 = uVar4 + 4;
        } while (param_2 != uVar4);
      }
    }
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14250e0c0 FUN_14250e0c0 body=23 status=ok
// SIG undefined FUN_14250e0c0(void)

void FUN_14250e0c0(longlong param_1,undefined8 param_2,uint param_3)

{
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 8))) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 8) = param_2;
  }
  return;
}



// FUNCTION 14250e0e0 FUN_14250e0e0 body=332 status=ok
// SIG undefined FUN_14250e0e0(void)

void FUN_14250e0e0(longlong param_1,undefined8 param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((int)param_3 < 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < (int)param_3) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((int)uVar2 < iVar1) {
LAB_14250e113:
    if (uVar2 - param_3 != 0 && (int)param_3 <= (int)uVar2) {
      uVar5 = ~param_3 + uVar2;
      uVar6 = uVar2 - param_3 & 3;
      if (uVar6 == 0) {
        uVar4 = (ulonglong)uVar2;
      }
      else {
        do {
          uVar4 = (ulonglong)(uVar2 - 1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8);
          uVar6 = uVar6 - 1;
          uVar2 = uVar2 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar5) {
        do {
          iVar1 = (int)uVar4;
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 1) * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 1) * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 2) * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 2) * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 3) * 8);
          uVar4 = (ulonglong)(iVar1 - 4U);
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 3) * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8);
        } while ((int)param_3 < (int)(iVar1 - 4U));
      }
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 8) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    if (0 < *param_4) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    if ((0 < (int)uVar5) && ((int)uVar5 <= (int)uVar2)) {
      *param_4 = 0xf;
      return;
    }
    if (iVar1 < 0x40000000) {
      uVar6 = iVar1 * 2;
      if (iVar1 * 2 <= (int)(uVar2 + 1)) {
        uVar6 = uVar2 + 1;
      }
      uVar2 = uVar6;
      if ((int)uVar5 < (int)uVar6) {
        uVar2 = uVar5;
      }
      if ((int)uVar5 < 1) {
        uVar2 = uVar6;
      }
      if ((int)uVar2 < 0x10000000) {
        lVar3 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar2 << 3);
        if (lVar3 == 0) {
          *param_4 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x18) = lVar3;
        *(uint *)(param_1 + 0xc) = uVar2;
        uVar2 = *(uint *)(param_1 + 8);
        goto LAB_14250e113;
      }
    }
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14250e230 FUN_14250e230 body=8 status=ok
// SIG undefined FUN_14250e230(void)

void FUN_14250e230(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14250e240 FUN_14250e240 body=143 status=ok
// SIG undefined FUN_14250e240(void)

ulonglong FUN_14250e240(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  if (0 < *param_3) goto LAB_14250e29d;
  if ((int)param_2 < 0) goto LAB_14250e297;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((int)param_2 <= iVar1) goto LAB_14250e29f;
  uVar2 = *(uint *)(param_1 + 0x10);
  if (((int)uVar2 < 1) || ((int)param_2 <= (int)uVar2)) {
    if (iVar1 < 0x40000000) {
      uVar3 = iVar1 * 2;
      if (iVar1 * 2 <= (int)param_2) {
        uVar3 = param_2;
      }
      uVar5 = uVar3;
      if ((int)uVar2 < (int)uVar3) {
        uVar5 = uVar2;
      }
      if ((int)uVar2 < 1) {
        uVar5 = uVar3;
      }
      if ((int)uVar5 < 0x10000000) {
        lVar4 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar5 << 3);
        if (lVar4 != 0) {
          *(longlong *)(param_1 + 0x18) = lVar4;
          *(uint *)(param_1 + 0xc) = uVar5;
          goto LAB_14250e29f;
        }
        *param_3 = 7;
        goto LAB_14250e29d;
      }
    }
LAB_14250e297:
    *param_3 = 1;
  }
  else {
    *param_3 = 0xf;
  }
LAB_14250e29d:
  uVar6 = 0;
LAB_14250e29f:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14250e2d0 FUN_14250e2d0 body=82 status=ok
// SIG undefined FUN_14250e2d0(void)

void FUN_14250e2d0(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    uVar2 = param_2;
  }
  if (((uVar2 < 0x10000000) && (*(uint *)(param_1 + 0x10) = uVar2, 0 < (int)param_2)) &&
     ((int)uVar2 < *(int *)(param_1 + 0xc))) {
    lVar3 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar2 << 3);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 0x18) = lVar3;
      iVar1 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0xc) = iVar1;
      if (iVar1 < *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 8) = iVar1;
      }
    }
  }
  return;
}



// FUNCTION 14250e330 FUN_14250e330 body=68 status=ok
// SIG undefined FUN_14250e330(void)

undefined8 * FUN_14250e330(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::UVector64::vftable;
  FUN_1424da110(param_1[3]);
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14250e380 FUN_14250e380 body=482 status=ok
// SIG undefined FUN_14250e380(void)

ulonglong FUN_14250e380(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_RBX;
  
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 < 1) {
          unaff_RBX = 0;
          cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                            (param_1,*(undefined8 *)(param_1 + 0x20),0);
          if (cVar1 == '\0') goto LAB_14250e561;
          iVar2 = *(int *)(param_1 + 0x28);
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        iVar3 = iVar2 + -1;
        if ((*(ushort *)(lVar4 + -2 + (longlong)iVar2 * 2) & 0xf800) == 0xd800) {
          if (iVar2 < 1) {
            unaff_RBX = 0;
            cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                              (param_1,*(undefined8 *)(param_1 + 0x20),0);
            if (cVar1 == '\0') goto LAB_14250e561;
            iVar2 = *(int *)(param_1 + 0x28);
            lVar4 = *(longlong *)(param_1 + 0x30);
            lVar5 = (longlong)iVar2 + -1;
            iVar3 = (int)lVar5;
          }
          else {
            lVar5 = (longlong)iVar2 + -1;
          }
          *(int *)(param_1 + 0x28) = iVar3;
          if ((*(ushort *)(lVar4 + lVar5 * 2) & 0xfc00) == 0xdc00) {
            if (iVar2 < 2) {
              cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                                (param_1,*(undefined8 *)(param_1 + 0x20));
              if (cVar1 == '\0') goto LAB_14250e483;
              lVar4 = *(longlong *)(param_1 + 0x30);
              iVar3 = *(int *)(param_1 + 0x28);
            }
            if ((*(ushort *)(lVar4 + -2 + (longlong)iVar3 * 2) & 0xfc00) == 0xd800) {
              iVar3 = iVar3 + -1;
              goto LAB_14250e480;
            }
          }
        }
        else {
LAB_14250e480:
          *(int *)(param_1 + 0x28) = iVar3;
        }
LAB_14250e483:
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    param_2 = param_2 + 1;
    do {
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar2) {
        cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                          (param_1,*(undefined8 *)(param_1 + 0x10),1);
        if (cVar1 != '\0') {
          iVar2 = *(int *)(param_1 + 0x28);
          goto LAB_14250e3d4;
        }
LAB_14250e55f:
        unaff_RBX = 0;
        goto LAB_14250e561;
      }
LAB_14250e3d4:
      lVar4 = *(longlong *)(param_1 + 0x30);
      lVar5 = (longlong)iVar2;
      if ((*(ushort *)(lVar4 + lVar5 * 2) & 0xf800) == 0xd800) {
        if (*(int *)(param_1 + 0x2c) <= iVar2) {
          cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                            (param_1,*(undefined8 *)(param_1 + 0x10),0xd801);
          if (cVar1 == '\0') goto LAB_14250e55f;
          iVar2 = *(int *)(param_1 + 0x28);
          lVar4 = *(longlong *)(param_1 + 0x30);
          lVar5 = (longlong)iVar2;
        }
        iVar2 = iVar2 + 1;
        *(int *)(param_1 + 0x28) = iVar2;
        if ((*(ushort *)(lVar4 + lVar5 * 2) & 0xfc00) == 0xd800) {
          if (*(int *)(param_1 + 0x2c) <= iVar2) {
            cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                              (param_1,*(undefined8 *)(param_1 + 0x10),1);
            if (cVar1 == '\0') goto LAB_14250e3a5;
            lVar4 = *(longlong *)(param_1 + 0x30);
            iVar2 = *(int *)(param_1 + 0x28);
          }
          if ((*(ushort *)(lVar4 + (longlong)iVar2 * 2) & 0xfc00) == 0xdc00) goto LAB_14250e3a0;
        }
      }
      else {
LAB_14250e3a0:
        *(int *)(param_1 + 0x28) = iVar2 + 1;
      }
LAB_14250e3a5:
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
LAB_14250e561:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14250e570 FUN_14250e570 body=162 status=ok
// SIG undefined FUN_14250e570(void)

uint FUN_14250e570(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) <= iVar6) {
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x10),1);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    iVar6 = *(int *)(param_1 + 0x28);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  iVar3 = iVar6 + 1;
  *(int *)(param_1 + 0x28) = iVar3;
  uVar1 = *(ushort *)(lVar5 + (longlong)iVar6 * 2);
  uVar7 = (uint)uVar1;
  if ((uVar7 & 0xfc00) == 0xd800) {
    if (*(int *)(param_1 + 0x2c) <= iVar3) {
      cVar2 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x10),1);
      if (cVar2 == '\0') {
        return uVar7;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      iVar3 = *(int *)(param_1 + 0x28);
    }
    uVar4 = (uint)*(ushort *)(lVar5 + (longlong)iVar3 * 2);
    if ((uVar4 & 0xfc00) == 0xdc00) {
      uVar7 = (uint)uVar1 * 0x400 + uVar4 + 0xfca02400;
      *(int *)(param_1 + 0x28) = iVar3 + 1;
    }
  }
  return uVar7;
}



// FUNCTION 14250e620 FUN_14250e620 body=167 status=ok
// SIG undefined FUN_14250e620(void)

uint FUN_14250e620(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 < 1) {
    cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x20),0);
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    iVar6 = *(int *)(param_1 + 0x28);
  }
  iVar4 = iVar6 + -1;
  *(int *)(param_1 + 0x28) = iVar4;
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(ushort *)(lVar5 + -2 + (longlong)iVar6 * 2);
  uVar7 = (uint)uVar1;
  if ((uVar1 & 0xfc00) == 0xdc00) {
    if (iVar6 < 2) {
      cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x20),0);
      if (cVar3 == '\0') {
        return uVar7;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      iVar4 = *(int *)(param_1 + 0x28);
    }
    uVar2 = *(ushort *)(lVar5 + -2 + (longlong)iVar4 * 2);
    if ((uVar2 & 0xfc00) == 0xd800) {
      uVar7 = (uint)uVar1 + (uint)uVar2 * 0x400 + 0xfca02400;
      *(int *)(param_1 + 0x28) = iVar4 + -1;
    }
  }
  return uVar7;
}



// FUNCTION 14250e6d0 FUN_14250e6d0 body=8 status=ok
// SIG undefined FUN_14250e6d0(void)

void FUN_14250e6d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014250e6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))();
  return;
}



// FUNCTION 14250e6e0 FUN_14250e6e0 body=22 status=ok
// SIG undefined FUN_14250e6e0(void)

longlong FUN_14250e6e0(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00014250e6ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x40))();
    return lVar1;
  }
  return (longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20);
}



// FUNCTION 14250e700 FUN_14250e700 body=159 status=ok
// SIG undefined FUN_14250e700(void)

void FUN_14250e700(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 < *(longlong *)(param_1 + 0x20)) || (*(longlong *)(param_1 + 0x10) <= param_2)) {
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,param_2,1);
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar1) {
      return;
    }
  }
  else {
    iVar1 = (int)param_2 - (int)*(longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) < iVar1) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x48))(param_1);
    }
    *(int *)(param_1 + 0x28) = iVar1;
    if (*(int *)(param_1 + 0x2c) <= iVar1) {
      return;
    }
  }
  if ((*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 2) & 0xfc00) == 0xdc00) {
    if (iVar1 == 0) {
      (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,*(undefined8 *)(param_1 + 0x20),0)
      ;
    }
    if ((0 < *(int *)(param_1 + 0x28)) &&
       (uVar2 = *(int *)(param_1 + 0x28) - 1,
       (*(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar2 * 2) & 0xfc00) == 0xd800)) {
      *(uint *)(param_1 + 0x28) = uVar2;
    }
  }
  return;
}



// FUNCTION 14250e7a0 FUN_14250e7a0 body=373 status=ok
// SIG undefined FUN_14250e7a0(void)

longlong FUN_14250e7a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((int)uVar4 < 1) {
    if ((uVar4 == 0) && (*(longlong *)(param_1 + 0x20) == 0)) {
      return 0;
    }
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                      (param_1,*(longlong *)(param_1 + 0x20),0);
    uVar4 = *(uint *)(param_1 + 0x28);
    uVar5 = uVar4;
    if (cVar1 != '\0') {
      uVar5 = uVar4 - 1;
      goto LAB_14250e810;
    }
  }
  else {
    uVar5 = uVar4 - 1;
    if ((*(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar5 * 2) & 0xfc00) != 0xdc00) {
      if ((int)uVar5 <= *(int *)(param_1 + 0x1c)) {
        return (ulonglong)uVar5 + *(longlong *)(param_1 + 0x20);
      }
      *(uint *)(param_1 + 0x28) = uVar5;
      lVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x40))(param_1);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      return lVar3;
    }
LAB_14250e810:
    *(uint *)(param_1 + 0x28) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x30);
    if ((*(ushort *)(lVar3 + (longlong)(int)uVar5 * 2) & 0xfc00) == 0xdc00) {
      if ((int)uVar4 < 2) {
        cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                          (param_1,*(undefined8 *)(param_1 + 0x20),0);
        uVar5 = *(uint *)(param_1 + 0x28);
        if (cVar1 == '\0') goto LAB_14250e86b;
        lVar3 = *(longlong *)(param_1 + 0x30);
      }
      if ((*(ushort *)(lVar3 + -2 + (longlong)(int)uVar5 * 2) & 0xfc00) == 0xd800) {
        uVar5 = uVar5 - 1;
        *(uint *)(param_1 + 0x28) = uVar5;
      }
    }
  }
LAB_14250e86b:
  if (*(int *)(param_1 + 0x1c) < (int)uVar5) {
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x40))(param_1);
    uVar5 = *(uint *)(param_1 + 0x28);
    if ((int)uVar5 < *(int *)(param_1 + 0x2c)) goto LAB_14250e8ab;
  }
  else {
    lVar3 = (longlong)(int)uVar5 + *(longlong *)(param_1 + 0x20);
    if ((int)uVar5 < *(int *)(param_1 + 0x2c)) goto LAB_14250e8ab;
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                    (param_1,*(undefined8 *)(param_1 + 0x10),1);
  if (cVar1 == '\0') {
    return lVar3;
  }
  uVar5 = *(uint *)(param_1 + 0x28);
LAB_14250e8ab:
  lVar6 = *(longlong *)(param_1 + 0x30);
  iVar2 = uVar5 + 1;
  *(int *)(param_1 + 0x28) = iVar2;
  if ((*(ushort *)(lVar6 + (longlong)(int)uVar5 * 2) & 0xfc00) == 0xd800) {
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x10),1);
      if (cVar1 == '\0') {
        return lVar3;
      }
      lVar6 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x28);
    }
    if ((*(ushort *)(lVar6 + (longlong)iVar2 * 2) & 0xfc00) == 0xdc00) {
      *(int *)(param_1 + 0x28) = iVar2 + 1;
    }
  }
  return lVar3;
}



// FUNCTION 14250e920 FUN_14250e920 body=215 status=ok
// SIG undefined FUN_14250e920(void)

uint FUN_14250e920(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 == *(int *)(param_1 + 0x2c)) {
    cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                      (param_1,*(undefined8 *)(param_1 + 0x10),1);
    if (cVar3 != '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      goto LAB_14250e955;
    }
LAB_14250e9e4:
    uVar4 = 0xffffffff;
  }
  else {
LAB_14250e955:
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 2);
    uVar4 = (uint)uVar1;
    if ((uVar4 & 0xfc00) != 0xd800) {
      return uVar4;
    }
    if (iVar5 + 1 < *(int *)(param_1 + 0x2c)) {
      uVar6 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)(iVar5 + 1) * 2);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,uVar2,1);
      if (cVar3 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)*(ushort *)
                       (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2);
      }
      cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,uVar2,0);
      *(int *)(param_1 + 0x28) = iVar5;
      if (cVar3 == '\0') goto LAB_14250e9e4;
    }
    if ((uVar6 & 0xfc00) == 0xdc00) {
      uVar4 = (uint)uVar1 * 0x400 + -0x35fdc00 + uVar6;
    }
  }
  return uVar4;
}



// FUNCTION 14250ea00 FUN_14250ea00 body=279 status=ok
// SIG undefined FUN_14250ea00(void)

ulonglong FUN_14250ea00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar6 = 0xffffffff;
  iVar2 = (int)param_2 - (int)lVar1;
  if (param_2 < lVar1) {
LAB_14250ea70:
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,param_2,1);
    uVar3 = *(uint *)(param_1 + 0x28);
    if ((int)uVar3 < *(int *)(param_1 + 0x2c)) {
LAB_14250ea88:
      if ((*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar3 * 2) & 0xfc00) == 0xdc00
         ) {
        if (uVar3 == 0) {
          (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                    (param_1,*(undefined8 *)(param_1 + 0x20),0);
          uVar3 = *(uint *)(param_1 + 0x28);
        }
        if ((0 < (int)uVar3) &&
           (uVar5 = uVar3 - 1,
           (*(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar5 * 2) & 0xfc00) == 0xd800))
        {
          *(uint *)(param_1 + 0x28) = uVar5;
          uVar3 = uVar5;
        }
      }
    }
  }
  else {
    if (param_2 < lVar1 + *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x28) = iVar2;
      uVar6 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 2);
      if ((uVar6 & 0xf800) != 0xd800) goto LAB_14250eb0d;
    }
    if (*(longlong *)(param_1 + 0x10) <= param_2) goto LAB_14250ea70;
    uVar3 = (int)param_2 - (int)lVar1;
    if (*(int *)(param_1 + 0x1c) < (int)uVar3) {
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x48))(param_1,param_2);
    }
    *(uint *)(param_1 + 0x28) = uVar3;
    if ((int)uVar3 < *(int *)(param_1 + 0x2c)) goto LAB_14250ea88;
  }
  if (((*(longlong *)(param_1 + 0x20) <= param_2) && ((int)uVar3 < *(int *)(param_1 + 0x2c))) &&
     (uVar6 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar3 * 2),
     (uVar6 & 0xf800) == 0xd800)) {
    uVar4 = FUN_14250e920(param_1);
    return uVar4;
  }
LAB_14250eb0d:
  return (ulonglong)uVar6;
}



// FUNCTION 14250eb20 FUN_14250eb20 body=11 status=ok
// SIG undefined FUN_14250eb20(void)

void FUN_14250eb20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014250eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x28))();
  return;
}



// FUNCTION 14250eb30 FUN_14250eb30 body=120 status=ok
// SIG undefined FUN_14250eb30(void)

bool FUN_14250eb30(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if ((*param_1 == 0x345ad82c) &&
       (((*param_2 == 0x345ad82c && (*(longlong *)(param_1 + 0xe) == *(longlong *)(param_2 + 0xe)))
        && (*(longlong *)(param_1 + 0x12) == *(longlong *)(param_2 + 0x12))))) {
      if (param_1[7] < param_1[10]) {
        lVar1 = (**(code **)(*(longlong *)(param_1 + 0xe) + 0x40))();
      }
      else {
        lVar1 = (longlong)param_1[10] + *(longlong *)(param_1 + 8);
      }
      if (param_2[7] < param_2[10]) {
        lVar2 = (**(code **)(*(longlong *)(param_2 + 0xe) + 0x40))(param_2);
      }
      else {
        lVar2 = (longlong)param_2[10] + *(longlong *)(param_2 + 8);
      }
      bVar3 = lVar1 == lVar2;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}



// FUNCTION 14250ebb0 FUN_14250ebb0 body=39 status=ok
// SIG undefined FUN_14250ebb0(void)

undefined8 FUN_14250ebb0(longlong param_1)

{
  undefined8 uVar1;
  int *in_stack_00000030;
  
  if (0 < *in_stack_00000030) {
    return 0;
  }
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    *in_stack_00000030 = 0x1e;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014250ebd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x30))();
  return uVar1;
}



// FUNCTION 14250ebe0 FUN_14250ebe0 body=73 status=ok
// SIG undefined FUN_14250ebe0(void)

longlong FUN_14250ebe0(longlong param_1,longlong param_2,undefined8 param_3,char param_4,
                      int *param_5)

{
  if (*param_5 < 1) {
    param_1 = (**(code **)(*(longlong *)(param_2 + 0x38) + 0x10))(param_1,param_2,param_3,param_5);
    if (*param_5 < 1) {
      if (param_1 == 0) {
        *param_5 = 7;
        param_1 = 0;
      }
      else if (param_4 != '\0') {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf7;
      }
    }
  }
  return param_1;
}



// FUNCTION 14250ec30 FUN_14250ec30 body=369 status=ok
// SIG undefined FUN_14250ec30(void)

int * FUN_14250ec30(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*param_3 < 1) {
    if (param_1 == (int *)0x0) {
      iVar3 = 0x90;
      if (0 < param_2) {
        iVar3 = param_2 + 0x90;
      }
      param_1 = (int *)FUN_1424da030((longlong)iVar3);
      if (param_1 == (int *)0x0) {
        *param_3 = 7;
        return (int *)0x0;
      }
      memcpy(param_1,&DAT_1499d9990,0x90);
      param_1[1] = 1;
      if (0 < iVar3) {
        param_1[6] = param_2;
        *(int **)(param_1 + 0x10) = param_1 + 0x24;
      }
    }
    else {
      if (*param_1 != 0x345ad82c) {
        *param_3 = 1;
        return param_1;
      }
      uVar1 = param_1[1];
      if (((uVar1 & 4) != 0) && (*(code **)(*(longlong *)(param_1 + 0xe) + 0x50) != (code *)0x0)) {
        (**(code **)(*(longlong *)(param_1 + 0xe) + 0x50))(param_1);
        uVar1 = param_1[1];
      }
      param_1[1] = uVar1 & 0xfffffffb;
      if (param_1[6] < param_2) {
        if ((uVar1 & 2) != 0) {
          FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
          param_1[6] = 0;
        }
        lVar2 = FUN_1424da030((longlong)param_2);
        *(longlong *)(param_1 + 0x10) = lVar2;
        if (lVar2 == 0) {
          *param_3 = 7;
          return param_1;
        }
        param_1[6] = param_2;
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
      }
    }
    if (*param_3 < 1) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 4;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      if ((*(void **)(param_1 + 0x10) != (void *)0x0) && (0 < param_1[6])) {
        memset(*(void **)(param_1 + 0x10),0,(ulonglong)(uint)param_1[6]);
      }
    }
  }
  return param_1;
}



// FUNCTION 14250edb0 FUN_14250edb0 body=132 status=ok
// SIG undefined FUN_14250edb0(void)

int * FUN_14250edb0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0x345ad82c) {
      return param_1;
    }
    uVar1 = param_1[1];
    if ((uVar1 & 4) == 0) {
      return param_1;
    }
    if (*(code **)(*(longlong *)(param_1 + 0xe) + 0x50) != (code *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0xe) + 0x50))(param_1);
      uVar1 = param_1[1];
    }
    uVar2 = uVar1 & 0xfffffffb;
    param_1[1] = uVar2;
    if ((uVar1 & 2) != 0) {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      uVar2 = param_1[1] & 0xfffffffd;
      param_1[1] = uVar2;
      param_1[6] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((uVar2 & 1) == 0) {
      return param_1;
    }
    *param_1 = 0;
    FUN_1424da110(param_1);
  }
  return (int *)0x0;
}



// FUNCTION 14250ee40 FUN_14250ee40 body=28 status=ok
// SIG undefined FUN_14250ee40(void)

void FUN_14250ee40(undefined8 param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14250ee60();
  if (*param_3 < 1) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 8;
  }
  return;
}



// FUNCTION 14250ee60 FUN_14250ee60 body=242 status=ok
// SIG undefined FUN_14250ee60(void)

longlong FUN_14250ee60(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*param_3 < 1) && ((*(byte *)(param_2 + 8) & 1) != 0)) {
    lVar2 = FUN_14250ec30(param_1,0,param_3);
    if (*param_3 < 1) {
      *(undefined **)(lVar2 + 0x38) = &DAT_1499d9b80;
      *(undefined **)(lVar2 + 0x48) = &DAT_1499d9b78;
      *(undefined4 *)(lVar2 + 8) = 4;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined **)(lVar2 + 0x30) = &DAT_1499d9b78;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x1c) = 0;
      *(undefined8 *)(lVar2 + 0x24) = 0;
      *(undefined4 *)(lVar2 + 0x2c) = 0;
    }
    *param_3 = 1;
  }
  else {
    param_1 = FUN_14250ec30(param_1,0,param_3);
    if (*param_3 < 1) {
      *(undefined **)(param_1 + 0x38) = &DAT_1499d9b08;
      *(longlong *)(param_1 + 0x48) = param_2;
      *(undefined4 *)(param_1 + 8) = 4;
      if ((*(ushort *)(param_2 + 8) & 0x11) == 0) {
        if ((*(ushort *)(param_2 + 8) & 2) == 0) {
          lVar2 = *(longlong *)(param_2 + 0x18);
        }
        else {
          lVar2 = param_2 + 10;
        }
      }
      else {
        lVar2 = 0;
      }
      *(longlong *)(param_1 + 0x30) = lVar2;
      if (*(short *)(param_2 + 8) < 0) {
        iVar1 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar1 = (int)*(short *)(param_2 + 8) >> 5;
      }
      *(int *)(param_1 + 0x2c) = iVar1;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(longlong *)(param_1 + 0x10) = (longlong)iVar1;
      *(int *)(param_1 + 0x1c) = iVar1;
    }
  }
  return param_1;
}



// FUNCTION 14250ef60 FUN_14250ef60 body=176 status=ok
// SIG undefined FUN_14250ef60(void)

longlong FUN_14250ef60(undefined8 param_1,undefined *param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  
  if (*param_4 < 1) {
    puVar3 = &DAT_1499d9b78;
    if (param_2 != (undefined *)0x0 || param_3 != 0) {
      puVar3 = param_2;
    }
    if ((0xffffffff7ffffffe < param_3 - 0x80000000U) && (puVar3 != (undefined *)0x0)) {
      lVar1 = FUN_14250ec30(param_1,0,param_4);
      if (0 < *param_4) {
        return lVar1;
      }
      *(undefined **)(lVar1 + 0x38) = &DAT_1499d9b80;
      *(undefined **)(lVar1 + 0x48) = puVar3;
      *(uint *)(lVar1 + 8) = (uint)(param_3 == -1) * 2 + 4;
      *(longlong *)(lVar1 + 0x70) = param_3;
      *(undefined **)(lVar1 + 0x30) = puVar3;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      lVar2 = 0;
      if (0 < param_3) {
        lVar2 = param_3;
      }
      *(longlong *)(lVar1 + 0x10) = lVar2;
      *(int *)(lVar1 + 0x2c) = (int)lVar2;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(int *)(lVar1 + 0x1c) = (int)lVar2;
      return lVar1;
    }
    *param_4 = 1;
  }
  return 0;
}



// FUNCTION 14250f010 FUN_14250f010 body=155 status=ok
// SIG undefined FUN_14250f010(void)

longlong FUN_14250f010(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_3 < 1) {
    if (*(int *)(param_2 + 0x10) < 1) {
      lVar2 = FUN_14250ec30(param_1,0x40,param_3);
      if (*param_3 < 1) {
        *(undefined **)(lVar2 + 0x38) = &DAT_1499d9bf0;
        *(longlong *)(lVar2 + 0x48) = param_2;
        *(undefined4 *)(lVar2 + 8) = 0;
        *(longlong *)(lVar2 + 0x70) = (longlong)*(int *)(param_2 + 0x14);
        lVar1 = *(longlong *)(lVar2 + 0x40);
        *(longlong *)(lVar2 + 0x50) = lVar1;
        *(undefined8 *)(lVar2 + 0x78) = 0xffffffffffffffff;
        *(longlong *)(lVar2 + 0x58) = lVar1 + 0x20;
        *(longlong *)(lVar2 + 0x30) = lVar1;
        *(undefined8 *)(lVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x28) = 1;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(undefined4 *)(lVar2 + 0x1c) = 1;
      }
    }
    else {
      *param_3 = 0x10;
      lVar2 = 0;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14250f0b0 FUN_14250f0b0 body=120 status=ok
// SIG undefined FUN_14250f0b0(void)

longlong FUN_14250f0b0(undefined8 param_1,longlong param_2,char param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = FUN_14250fd50(param_1,param_2,param_4);
  if ((param_3 != '\0') && (*param_4 < 1)) {
    iVar1 = (**(code **)(*(longlong *)(param_2 + 0x38) + 0x18))(param_2);
    _Dst = (void *)FUN_1424da030((longlong)(iVar1 + 1));
    if (_Dst == (void *)0x0) {
      *param_4 = 7;
    }
    else {
      memcpy(_Dst,*(void **)(param_2 + 0x48),(longlong)(iVar1 + 1));
      *(void **)(lVar2 + 0x48) = _Dst;
      *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 0x20;
    }
  }
  return lVar2;
}



// FUNCTION 14250f180 FUN_14250f180 body=2008 status=ok
// SIG undefined FUN_14250f180(void)

void FUN_14250f180(longlong param_1,ulonglong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  byte bVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  uint *local_90;
  longlong local_88;
  uint local_7c;
  uint *local_78;
  undefined8 local_70;
  uint local_64;
  longlong local_60;
  uint *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar20 = (ulonglong)uVar3;
  uVar7 = 0x7fffffff;
  if ((longlong)param_2 < 0x7fffffff) {
    uVar7 = param_2;
  }
  uVar16 = 0;
  if (0 < (longlong)uVar7) {
    uVar16 = uVar7;
  }
  uVar12 = (uint)uVar16;
  if ((int)uVar3 < (int)uVar12) {
    if ((int)uVar3 < 0) {
      uVar3 = *(uint *)(param_1 + 0x7c);
      if ((int)uVar3 <= (int)uVar12) {
        uVar11 = uVar3;
        if ((int)uVar3 < (int)uVar12) {
          pcVar10 = (char *)((int)uVar3 + local_88);
          do {
            uVar11 = uVar3;
            if (*pcVar10 == '\0') break;
            uVar3 = uVar3 + 1;
            *(uint *)(param_1 + 0x7c) = uVar3;
            pcVar10 = pcVar10 + 1;
            uVar11 = uVar12;
          } while (uVar12 != uVar3);
        }
        if (*(char *)(local_88 + (int)uVar11) == '\0') {
          *(uint *)(param_1 + 0x78) = uVar11;
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
          uVar16 = (ulonglong)uVar11;
          uVar20 = (ulonglong)uVar11;
        }
      }
    }
    else {
      uVar16 = (ulonglong)uVar3;
    }
  }
  uVar3 = (uint)uVar16;
  lVar6 = (longlong)(int)uVar3;
  uVar12 = (uint)uVar20;
  if (param_3 == '\0') {
    if (*(longlong *)(param_1 + 0x20) == lVar6) {
      if (uVar3 != 0) {
        puVar18 = *(uint **)(param_1 + 0x58);
        uVar11 = *puVar18;
        if (((int)uVar11 < (int)uVar3) && ((int)uVar3 <= (int)puVar18[1])) goto LAB_14250f4b5;
        goto joined_r0x00014250f2c1;
      }
LAB_14250f894:
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_14250f959;
    }
    puVar18 = *(uint **)(param_1 + 0x58);
    uVar11 = *puVar18;
joined_r0x00014250f2c1:
    if (((int)uVar3 <= (int)uVar11) || ((int)puVar18[1] < (int)uVar3)) {
      if (uVar3 != 0) {
        if ((*(longlong *)(param_1 + 0x20) < lVar6) && (lVar6 <= *(longlong *)(param_1 + 0x10))) {
          lVar6 = *(longlong *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x28) =
               (uint)*(byte *)(lVar6 + 0x84 +
                              ((longlong)(int)uVar3 - (longlong)*(int *)(lVar6 + 0x14))) -
               *(int *)(lVar6 + 8);
        }
        else {
          if ((uVar3 != uVar12) && (*(char *)(local_88 + lVar6) < -0x40)) {
            uVar3 = FUN_142581150(local_88,0,uVar16 & 0xffffffff);
            puVar18 = *(uint **)(param_1 + 0x58);
          }
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
          *(uint **)(param_1 + 0x50) = puVar18;
          local_90 = puVar18 + 6;
          uVar11 = uVar3 - 0x65;
          *(undefined1 *)((longlong)puVar18 + 0x82) = 0x65;
          *(undefined1 *)((longlong)puVar18 + 0xe9) = 0x22;
          uVar7 = 0x22;
          lVar6 = local_88;
          uVar12 = 0x22;
          local_98 = param_1;
          local_4c = uVar3;
          do {
            while( true ) {
              uVar14 = (uint)uVar7;
              uVar19 = uVar12;
              if (((int)local_4c < 1) || ((int)(local_4c - uVar11) < 6)) goto LAB_14250f458;
              uVar15 = local_4c - 1;
              uVar19 = uVar12 - 1;
              uVar20 = (ulonglong)uVar19;
              bVar9 = *(byte *)(lVar6 + (ulonglong)uVar15);
              cVar2 = (char)uVar11;
              local_4c = uVar15;
              if (-1 < (char)bVar9) break;
              local_a8 = 0xfd;
              uVar14 = FUN_142580f00(lVar6,0,&local_4c,(ushort)bVar9);
              uVar7 = uVar20;
              if (0xffff < (int)uVar14) {
                *(ushort *)((longlong)puVar18 + uVar20 * 2 + 0x18) = (ushort)uVar14 & 0x3ff | 0xdc00
                ;
                *(char *)((longlong)puVar18 + uVar20 + 0x60) = (char)local_4c - cVar2;
                uVar14 = (uVar14 >> 10) - 0x2840;
                uVar7 = (ulonglong)(uVar12 - 2);
              }
              uVar19 = (uint)uVar7;
              *(short *)((longlong)puVar18 + uVar7 * 2 + 0x18) = (short)uVar14;
              *(char *)((longlong)puVar18 + uVar7 + 0x60) = (char)local_4c - cVar2;
              uVar20 = (ulonglong)uVar15;
              do {
                *(char *)((longlong)puVar18 + uVar20 + (0x84 - (longlong)(int)uVar11)) = (char)uVar7
                ;
                bVar1 = (longlong)(int)local_4c < (longlong)uVar20;
                uVar20 = uVar20 - 1;
              } while (bVar1);
              lVar6 = local_88;
              uVar12 = uVar19;
              uVar14 = uVar19;
              if ((int)uVar19 < 3) goto LAB_14250f458;
            }
            *(ushort *)((longlong)puVar18 + uVar20 * 2 + 0x18) = (ushort)bVar9;
            *(char *)((longlong)puVar18 + ((longlong)(int)uVar15 - (longlong)(int)uVar11) + 0x84) =
                 (char)uVar19;
            *(char *)((longlong)puVar18 + uVar20 + 0x60) = (char)uVar15 - cVar2;
            uVar12 = uVar19;
          } while (2 < (int)uVar19);
LAB_14250f458:
          *puVar18 = local_4c;
          puVar18[1] = uVar3;
          puVar18[2] = uVar19;
          puVar18[3] = 0x22;
          puVar18[4] = uVar14 - uVar19;
          puVar18[5] = uVar11;
          *(longlong *)(local_98 + 0x30) = (longlong)local_90 + (longlong)(int)uVar19 * 2;
          uVar3 = puVar18[3];
          uVar12 = puVar18[2];
          *(uint *)(local_98 + 0x2c) = uVar3 - uVar12;
          *(uint *)(local_98 + 0x28) = uVar3 - uVar12;
          *(longlong *)(local_98 + 0x20) = (longlong)(int)*puVar18;
          *(longlong *)(local_98 + 0x10) = (longlong)(int)puVar18[1];
          *(uint *)(local_98 + 0x1c) = puVar18[4];
        }
        goto LAB_14250f959;
      }
      if (uVar11 != 0) {
LAB_14250f816:
        *puVar18 = uVar3;
        puVar18[1] = uVar3;
        puVar18[2] = 0;
        puVar18[3] = 0;
        puVar18[4] = 0;
        puVar18[5] = uVar3;
        *(undefined1 *)(puVar18 + 0x18) = 0;
        *(undefined1 *)(puVar18 + 0x21) = 0;
        puVar18 = *(uint **)(param_1 + 0x58);
      }
      goto LAB_14250f843;
    }
LAB_14250f4b5:
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
    *(uint **)(param_1 + 0x50) = puVar18;
    *(longlong *)(param_1 + 0x30) = (longlong)(int)puVar18[2] * 2 + 0x18 + (longlong)puVar18;
    *(uint *)(param_1 + 0x2c) = puVar18[3] - puVar18[2];
    *(longlong *)(param_1 + 0x20) = (longlong)(int)*puVar18;
    *(longlong *)(param_1 + 0x10) = (longlong)(int)puVar18[1];
    *(uint *)(param_1 + 0x1c) = puVar18[4];
    *(uint *)(param_1 + 0x28) =
         (uint)*(byte *)((longlong)puVar18 +
                        ((longlong)(int)uVar3 - (longlong)(int)puVar18[5]) + 0x84) - puVar18[2];
  }
  else {
    lVar17 = *(longlong *)(param_1 + 0x10);
    if (lVar17 == lVar6) {
      if (uVar3 != uVar12) {
        puVar18 = *(uint **)(param_1 + 0x58);
        uVar11 = *puVar18;
        if (((int)uVar3 < (int)uVar11) || ((int)puVar18[1] <= (int)uVar3))
        goto joined_r0x00014250f290;
        goto LAB_14250f4b5;
      }
LAB_14250f2ae:
      iVar5 = *(int *)(param_1 + 0x2c);
    }
    else {
      puVar18 = *(uint **)(param_1 + 0x58);
      uVar11 = *puVar18;
joined_r0x00014250f290:
      if (((int)uVar11 <= (int)uVar3) && ((int)uVar3 < (int)puVar18[1])) goto LAB_14250f4b5;
      if (uVar3 != uVar12) {
        if ((lVar6 < lVar17) && (*(longlong *)(param_1 + 0x20) <= lVar6)) {
          lVar6 = *(longlong *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x28) =
               (uint)*(byte *)(lVar6 + 0x84 +
                              ((longlong)(int)uVar3 - (longlong)*(int *)(lVar6 + 0x14))) -
               *(int *)(lVar6 + 8);
        }
        else {
          if (*(char *)(local_88 + lVar6) < -0x40) {
            uVar3 = FUN_142581150(local_88,0,uVar16 & 0xffffffff);
            uVar16 = (ulonglong)uVar3;
            puVar18 = *(uint **)(param_1 + 0x58);
            uVar20 = (ulonglong)*(uint *)(param_1 + 0x78);
            lVar6 = (longlong)(int)uVar3;
          }
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
          *(uint **)(param_1 + 0x50) = puVar18;
          local_7c = (uint)uVar20;
          uVar7 = 0x7fffffff;
          if (local_7c < 0x7fffffff) {
            uVar7 = uVar20;
          }
          local_78 = puVar18 + 6;
          local_58 = puVar18 + 0x18;
          local_60 = (longlong)puVar18 + (0x84 - lVar6);
          uVar3 = 0;
          uVar20 = uVar16 & 0xffffffff;
          pvVar8 = (void *)0x0;
          local_70 = 0;
          local_64 = (uint)uVar7;
          lVar6 = local_88;
          local_98 = param_1;
          do {
            uVar12 = (uint)uVar20;
            lVar17 = (longlong)(int)uVar12;
            bVar9 = *(byte *)(lVar6 + lVar17);
            uVar19 = (uint)uVar16;
            uVar11 = (uint)uVar7;
            if ((char)bVar9 < '\x01') {
              if ((char)local_70 == '\0') {
                puVar18[4] = uVar3;
                bVar9 = *(byte *)(lVar6 + lVar17);
                local_70 = CONCAT71((int7)((ulonglong)pvVar8 >> 8),1);
              }
              uVar15 = uVar12 + 1;
              uVar14 = (uint)bVar9;
              local_90 = (uint *)CONCAT44(local_90._4_4_,uVar15);
              uVar13 = uVar14;
              if ((char)bVar9 < '\0') {
                uVar13 = 0xfffd;
                uVar20 = uVar7;
                if (uVar15 != uVar11) {
                  if (bVar9 < 0xe0) {
                    if (0xc1 < bVar9) {
                      uVar14 = uVar14 & 0x1f;
LAB_14250f70c:
                      uVar11 = *(byte *)(lVar6 + (int)uVar15) ^ 0x80;
                      uVar20 = (ulonglong)uVar15;
                      if ((byte)uVar11 < 0x40) {
                        uVar15 = uVar15 + 1;
                        uVar13 = uVar14 << 6 | uVar11;
                        goto joined_r0x00014250f72e;
                      }
                      goto LAB_14250f790;
                    }
                  }
                  else if (bVar9 < 0xf0) {
                    uVar14 = uVar14 & 0xf;
                    if (((byte)(&DAT_14bd49f86)[uVar14] >> (*(byte *)(lVar6 + (int)uVar15) >> 5) & 1
                        ) != 0) {
                      bVar9 = *(byte *)(lVar6 + (int)uVar15) & 0x3f;
                      uVar21 = (ulonglong)uVar15;
LAB_14250f6e9:
                      uVar15 = (int)uVar21 + 1;
                      uVar20 = uVar7;
                      if (uVar15 != uVar11) {
                        uVar14 = (uint)bVar9 | uVar14 << 6;
                        goto LAB_14250f70c;
                      }
                      goto LAB_14250f790;
                    }
                  }
                  else if (bVar9 < 0xf5) {
                    if (((uint)(int)(char)(&DAT_14bd49f97)[*(byte *)(lVar6 + (int)uVar15) >> 4] >>
                         (uVar14 - 0xf0 & 0x1f) & 1) != 0) {
                      uVar21 = lVar17 + 2;
                      if (((uint)uVar21 == uVar11) ||
                         (bVar9 = *(char *)(lVar6 + uVar21) + 0x80, uVar20 = uVar21, 0x3f < bVar9))
                      goto LAB_14250f790;
                      uVar14 = *(byte *)(lVar6 + (int)uVar15) & 0x3f | (uVar14 - 0xf0) * 0x40;
                      goto LAB_14250f6e9;
                    }
                  }
                  uVar20 = (ulonglong)uVar15;
                }
LAB_14250f790:
                uVar15 = (uint)uVar20;
                uVar14 = uVar3 + 1;
                uVar11 = uVar3;
                uVar4 = uVar13;
              }
              else {
joined_r0x00014250f72e:
                uVar20 = (ulonglong)uVar15;
                if (((int)local_7c < 0) && (uVar13 == 0)) {
                  uVar15 = uVar15 - 1;
                  uVar13 = 0;
                  uVar14 = uVar3;
                  break;
                }
                if (uVar13 < 0x10000) goto LAB_14250f790;
                uVar11 = uVar3 + 1;
                *(short *)((longlong)local_78 + (longlong)(int)uVar3 * 2) =
                     (short)(uVar13 >> 10) + -0x2840;
                uVar4 = uVar13 & 0x3ff | 0xdc00;
                uVar14 = uVar3 + 2;
              }
              *(short *)((longlong)local_78 + (longlong)(int)uVar11 * 2) = (short)uVar4;
              uVar11 = uVar3 + 1;
              if ((int)(uVar3 + 1) < (int)uVar14) {
                uVar11 = uVar14;
              }
              memset((void *)((longlong)(int)uVar3 + (longlong)local_58),uVar12 - uVar19,
                     (ulonglong)(~uVar3 + uVar11) + 1);
              uVar11 = (uint)local_90;
              if ((int)(uint)local_90 < (int)uVar15) {
                uVar11 = uVar15;
              }
              pvVar8 = memset((void *)(lVar17 + local_60),uVar3,(ulonglong)(~uVar12 + uVar11) + 1);
              uVar7 = (ulonglong)local_64;
              lVar6 = local_88;
              uVar3 = uVar14;
              if ((int)local_64 <= (int)uVar15) break;
            }
            else {
              uVar13 = (uint)bVar9;
              *(ushort *)((longlong)puVar18 + (longlong)(int)uVar3 * 2 + 0x18) = (ushort)bVar9;
              *(char *)((longlong)puVar18 + (longlong)(int)uVar3 + 0x60) = (char)(uVar12 - uVar19);
              pvVar8 = (void *)(longlong)(int)(uVar12 - uVar19);
              *(char *)((longlong)(puVar18 + 0x21) + (longlong)pvVar8) = (char)uVar3;
              uVar15 = uVar12 + 1;
              uVar14 = uVar3 + 1;
              uVar3 = uVar14;
              if ((int)uVar11 <= (int)uVar15) break;
            }
            uVar20 = (ulonglong)uVar15;
            uVar14 = uVar3;
          } while ((int)uVar3 < 0x20);
          *(char *)((longlong)puVar18 + (longlong)(int)uVar14 + 0x60) = (char)(uVar15 - uVar19);
          *(char *)((longlong)puVar18 + (longlong)(int)(uVar15 - uVar19) + 0x84) = (char)uVar14;
          *puVar18 = uVar19;
          puVar18[1] = uVar15;
          puVar18[2] = 0;
          puVar18[3] = uVar14;
          if ((char)local_70 == '\0') {
            puVar18[4] = uVar14;
          }
          puVar18[5] = uVar19;
          *(uint **)(local_98 + 0x30) = local_78;
          *(undefined4 *)(local_98 + 0x28) = 0;
          *(uint *)(local_98 + 0x2c) = puVar18[3];
          *(longlong *)(local_98 + 0x20) = (longlong)(int)*puVar18;
          *(longlong *)(local_98 + 0x10) = (longlong)(int)puVar18[1];
          *(uint *)(local_98 + 0x1c) = puVar18[4];
          if ((((int)local_7c < 0) && (*(int *)(local_98 + 0x7c) < (int)uVar15)) &&
             (*(uint *)(local_98 + 0x7c) = uVar15, uVar13 == 0)) {
            *(uint *)(local_98 + 0x78) = uVar15;
            *(byte *)(local_98 + 8) = *(byte *)(local_98 + 8) & 0xfd;
          }
        }
        goto LAB_14250f959;
      }
      if (lVar17 == lVar6) goto LAB_14250f2ae;
      if (uVar3 != puVar18[1]) goto LAB_14250f816;
LAB_14250f843:
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
      *(uint **)(param_1 + 0x50) = puVar18;
      *(longlong *)(param_1 + 0x30) = (longlong)(int)puVar18[2] * 2 + 0x18 + (longlong)puVar18;
      iVar5 = puVar18[3] - puVar18[2];
      *(int *)(param_1 + 0x2c) = iVar5;
      *(longlong *)(param_1 + 0x20) = (longlong)(int)*puVar18;
      *(longlong *)(param_1 + 0x10) = (longlong)(int)puVar18[1];
      *(uint *)(param_1 + 0x1c) = puVar18[4];
      if (uVar3 != puVar18[1]) goto LAB_14250f894;
    }
    *(int *)(param_1 + 0x28) = iVar5;
  }
LAB_14250f959:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14250f980 FUN_14250f980 body=824 status=ok
// SIG undefined FUN_14250f980(void)

void FUN_14250f980(longlong param_1,ulonglong param_2,ulonglong param_3,short *param_4,uint param_5,
                  int *param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  short *psVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *param_6) goto LAB_14250f9d2;
  if (((int)param_5 < 0) || ((param_4 == (short *)0x0 && (param_5 != 0)))) {
    *param_6 = 1;
    goto LAB_14250f9d2;
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x78);
  if ((longlong)param_2 < 0) {
    uVar7 = 0;
LAB_14250fa20:
    if (-1 < (longlong)param_3) goto LAB_14250fa09;
LAB_14250fa28:
    uVar4 = 0;
LAB_14250fa2a:
    if ((int)uVar7 <= (int)uVar4) {
LAB_14250fa32:
      lVar13 = *(longlong *)(param_1 + 0x48);
      lVar9 = (longlong)(int)uVar7;
      if (((lVar9 < *(longlong *)(param_1 + 0x10)) && (*(char *)(lVar13 + lVar9) < '\0')) &&
         (0x32 < (byte)(*(char *)(lVar13 + lVar9) + 0x3eU))) {
        uVar5 = uVar7 & 0xffffffff;
        if ((uVar7 & 0xffffffff) != 0) {
          uVar5 = lVar9 - 1;
          cVar2 = *(char *)(lVar13 + -1 + lVar9);
          if (((cVar2 < '\0') && (0x32 < (byte)(cVar2 + 0x3eU))) && (uVar5 != 0)) {
            cVar2 = *(char *)(lVar13 + -2 + lVar9);
            uVar10 = lVar9 - 2;
            if (cVar2 < '\0') {
              uVar5 = (ulonglong)((int)uVar7 - 3);
              if (uVar10 == 0) {
                uVar5 = 0;
              }
              if ((byte)(cVar2 + 0x3eU) < 0x33) {
                uVar5 = uVar10 & 0xffffffff;
              }
            }
            else {
              uVar5 = uVar10 & 0xffffffff;
            }
          }
        }
      }
      else {
        uVar5 = uVar7 & 0xffffffff;
      }
      lVar9 = (longlong)(int)uVar4;
      if (((lVar9 < *(longlong *)(param_1 + 0x10)) && (*(char *)(lVar13 + lVar9) < '\0')) &&
         (0x32 < (byte)(*(char *)(lVar13 + lVar9) + 0x3eU))) {
        local_58 = uVar4 & 0xffffffff;
        if ((uVar4 & 0xffffffff) != 0) {
          local_58 = lVar9 - 1;
          cVar2 = *(char *)(lVar13 + -1 + lVar9);
          if (((cVar2 < '\0') && (0x32 < (byte)(cVar2 + 0x3eU))) && (local_58 != 0)) {
            cVar2 = *(char *)(lVar13 + -2 + lVar9);
            uVar7 = lVar9 - 2;
            if (cVar2 < '\0') {
              local_58 = (ulonglong)((int)uVar4 - 3);
              if (uVar7 == 0) {
                local_58 = 0;
              }
              if ((byte)(cVar2 + 0x3eU) < 0x33) {
                local_58 = uVar7 & 0xffffffff;
              }
            }
            else {
              local_58 = uVar7 & 0xffffffff;
            }
          }
        }
      }
      else {
        local_58 = uVar4 & 0xffffffff;
      }
      iVar12 = (int)uVar5;
      lVar13 = lVar13 + iVar12;
      psVar8 = param_4 + param_5;
      if (param_4 == (short *)0x0) {
        psVar8 = (short *)0x0;
      }
      local_4c = 0;
      iVar11 = (int)local_58 - iVar12;
      psVar14 = param_4;
      if (iVar11 == 0 || (int)local_58 < iVar12) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        if (param_4 < psVar8) {
          local_4c = 0;
          iVar12 = 0;
          do {
            iVar6 = local_4c + 1;
            bVar1 = *(byte *)(lVar13 + local_4c);
            uVar4 = (ulonglong)bVar1;
            local_4c = iVar6;
            if ((char)bVar1 < '\0') {
              local_68 = 0xfd;
              uVar4 = FUN_142580cc0(lVar13,&local_4c,iVar11,bVar1);
              if ((uint)uVar4 < 0x10000) goto LAB_14250faf2;
              *psVar14 = (short)(uVar4 >> 10) + -0x2840;
              if (psVar8 <= psVar14 + 1) {
                iVar12 = 1;
                psVar14 = psVar14 + 1;
                break;
              }
              psVar14[1] = (ushort)uVar4 & 0x3ff | 0xdc00;
              psVar14 = psVar14 + 2;
            }
            else {
LAB_14250faf2:
              *psVar14 = (short)uVar4;
              psVar14 = psVar14 + 1;
            }
            if ((iVar11 <= local_4c) || (psVar8 <= psVar14)) break;
          } while( true );
        }
      }
      if (local_4c < iVar11) {
        do {
          if (*(char *)(lVar13 + local_4c) < '\0') {
            local_68 = 0xfd;
            local_4c = local_4c + 1;
            uVar3 = FUN_142580cc0(lVar13,&local_4c,iVar11);
            iVar12 = (iVar12 - (uint)(uVar3 < 0x10000)) + 2;
          }
          else {
            iVar12 = iVar12 + 1;
            local_4c = local_4c + 1;
          }
        } while (local_4c < iVar11);
      }
      FUN_142504cc0(param_4,param_5,
                    (int)((ulonglong)((longlong)psVar14 - (longlong)param_4) >> 1) + iVar12,param_6)
      ;
      FUN_14250f180(param_1,(longlong)(int)local_58,1);
      goto LAB_14250f9d2;
    }
  }
  else {
    uVar7 = uVar4;
    if ((longlong)uVar4 < (longlong)param_2) goto LAB_14250fa20;
    uVar7 = param_2;
    if ((longlong)param_3 < 0) goto LAB_14250fa28;
LAB_14250fa09:
    if ((longlong)uVar4 < (longlong)param_3) goto LAB_14250fa2a;
    uVar4 = param_3;
    if ((int)uVar7 <= (int)param_3) goto LAB_14250fa32;
  }
  *param_6 = 8;
LAB_14250f9d2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 14250fd20 FUN_14250fd20 body=37 status=ok
// SIG undefined FUN_14250fd20(void)

void FUN_14250fd20(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14250fd50 FUN_14250fd50 body=460 status=ok
// SIG undefined FUN_14250fd50(void)

void * FUN_14250fd50(undefined8 param_1,void *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *_Dst;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (0 < *param_3) {
    return (void *)0x0;
  }
  uVar1 = *(uint *)((longlong)param_2 + 0x18);
  _Dst = (void *)FUN_14250ec30(param_1,(ulonglong)uVar1);
  if (0 < *param_3) {
    return _Dst;
  }
  pvVar3 = *(void **)((longlong)_Dst + 0x40);
  uVar2 = *(undefined4 *)((longlong)_Dst + 4);
  iVar5 = *(int *)((longlong)_Dst + 0xc);
  if (*(int *)((longlong)param_2 + 0xc) < *(int *)((longlong)_Dst + 0xc)) {
    iVar5 = *(int *)((longlong)param_2 + 0xc);
  }
  memcpy(_Dst,param_2,(longlong)iVar5);
  *(void **)((longlong)_Dst + 0x40) = pvVar3;
  *(undefined4 *)((longlong)_Dst + 4) = uVar2;
  if (0 < (int)uVar1) {
    memcpy(pvVar3,*(void **)((longlong)param_2 + 0x40),(ulonglong)uVar1);
  }
  pvVar3 = *(void **)((longlong)_Dst + 0x48);
  pvVar4 = *(void **)((longlong)param_2 + 0x40);
  if ((pvVar3 < pvVar4) ||
     ((void *)((longlong)*(int *)((longlong)param_2 + 0x18) + (longlong)pvVar4) <= pvVar3)) {
    if ((param_2 <= pvVar3) &&
       (pvVar6 = _Dst, pvVar7 = param_2,
       pvVar3 < (void *)((longlong)*(int *)((longlong)param_2 + 0xc) + (longlong)param_2)))
    goto LAB_14250fdf7;
  }
  else {
    pvVar6 = *(void **)((longlong)_Dst + 0x40);
    pvVar7 = pvVar4;
LAB_14250fdf7:
    *(longlong *)((longlong)_Dst + 0x48) = ((longlong)pvVar3 - (longlong)pvVar7) + (longlong)pvVar6;
    pvVar4 = *(void **)((longlong)param_2 + 0x40);
  }
  pvVar3 = *(void **)((longlong)_Dst + 0x50);
  if ((pvVar3 < pvVar4) ||
     ((void *)((longlong)*(int *)((longlong)param_2 + 0x18) + (longlong)pvVar4) <= pvVar3)) {
    if ((param_2 <= pvVar3) &&
       (pvVar6 = _Dst, pvVar7 = param_2,
       pvVar3 < (void *)((longlong)*(int *)((longlong)param_2 + 0xc) + (longlong)param_2)))
    goto LAB_14250fe3a;
  }
  else {
    pvVar6 = *(void **)((longlong)_Dst + 0x40);
    pvVar7 = pvVar4;
LAB_14250fe3a:
    *(longlong *)((longlong)_Dst + 0x50) = ((longlong)pvVar3 - (longlong)pvVar7) + (longlong)pvVar6;
    pvVar4 = *(void **)((longlong)param_2 + 0x40);
  }
  pvVar3 = *(void **)((longlong)_Dst + 0x58);
  if ((pvVar3 < pvVar4) ||
     ((void *)((longlong)*(int *)((longlong)param_2 + 0x18) + (longlong)pvVar4) <= pvVar3)) {
    if ((param_2 <= pvVar3) &&
       (pvVar6 = _Dst, pvVar7 = param_2,
       pvVar3 < (void *)((longlong)*(int *)((longlong)param_2 + 0xc) + (longlong)param_2)))
    goto LAB_14250fe7d;
  }
  else {
    pvVar6 = *(void **)((longlong)_Dst + 0x40);
    pvVar7 = pvVar4;
LAB_14250fe7d:
    *(longlong *)((longlong)_Dst + 0x58) = ((longlong)pvVar3 - (longlong)pvVar7) + (longlong)pvVar6;
    pvVar4 = *(void **)((longlong)param_2 + 0x40);
  }
  pvVar3 = *(void **)((longlong)_Dst + 0x60);
  if ((pvVar3 < pvVar4) ||
     ((void *)((longlong)*(int *)((longlong)param_2 + 0x18) + (longlong)pvVar4) <= pvVar3)) {
    if ((param_2 <= pvVar3) &&
       (pvVar6 = _Dst, pvVar7 = param_2,
       pvVar3 < (void *)((longlong)*(int *)((longlong)param_2 + 0xc) + (longlong)param_2)))
    goto LAB_14250fec0;
  }
  else {
    pvVar6 = *(void **)((longlong)_Dst + 0x40);
    pvVar7 = pvVar4;
LAB_14250fec0:
    *(longlong *)((longlong)_Dst + 0x60) = ((longlong)pvVar3 - (longlong)pvVar7) + (longlong)pvVar6;
    pvVar4 = *(void **)((longlong)param_2 + 0x40);
  }
  pvVar3 = *(void **)((longlong)_Dst + 0x30);
  if ((pvVar3 < pvVar4) ||
     ((void *)((longlong)*(int *)((longlong)param_2 + 0x18) + (longlong)pvVar4) <= pvVar3)) {
    if ((pvVar3 < param_2) ||
       (pvVar6 = _Dst,
       (void *)((longlong)*(int *)((longlong)param_2 + 0xc) + (longlong)param_2) <= pvVar3))
    goto LAB_14250ff0a;
  }
  else {
    pvVar6 = *(void **)((longlong)_Dst + 0x40);
    param_2 = pvVar4;
  }
  *(longlong *)((longlong)_Dst + 0x30) = ((longlong)pvVar3 - (longlong)param_2) + (longlong)pvVar6;
LAB_14250ff0a:
  *(byte *)((longlong)_Dst + 8) = *(byte *)((longlong)_Dst + 8) & 0xdf;
  return _Dst;
}



// FUNCTION 14250ff20 FUN_14250ff20 body=68 status=ok
// SIG undefined FUN_14250ff20(void)

longlong FUN_14250ff20(undefined8 param_1,longlong param_2,char param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14250fd50(param_1,param_2,param_4);
  if ((param_3 != '\0') && (*param_4 < 1)) {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x30))();
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 0x28;
  }
  return lVar1;
}



// FUNCTION 14250ff70 FUN_14250ff70 body=21 status=ok
// SIG undefined FUN_14250ff70(void)

longlong FUN_14250ff70(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))();
  return (longlong)iVar1;
}



// FUNCTION 14250ff90 FUN_14250ff90 body=515 status=ok
// SIG undefined FUN_14250ff90(void)

undefined8 FUN_14250ff90(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_80 [64];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar3 = (**(code **)(*plVar1 + 0x38))();
  lVar11 = (longlong)iVar3;
  if (param_2 < 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar11;
    if (param_2 <= lVar11) {
      lVar6 = param_2;
    }
  }
  iVar9 = (int)lVar6;
  lVar7 = (longlong)iVar9;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (param_3 == '\0') {
    if ((lVar7 <= lVar5) || (*(longlong *)(param_1 + 0x10) < lVar7)) {
      if ((iVar9 == 0) && (lVar5 == 0)) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        return 0;
      }
      uVar10 = 0;
      if (8 < iVar9) {
        uVar10 = (ulonglong)(iVar9 - 9);
      }
      *(ulonglong *)(param_1 + 0x20) = uVar10;
      lVar6 = (lVar6 << 0x20) + 0x100000000 >> 0x20;
      if (iVar3 <= iVar9) {
        lVar6 = lVar11;
      }
      *(longlong *)(param_1 + 0x10) = lVar6;
      goto LAB_14251008b;
    }
  }
  else if ((lVar7 < lVar5) || (*(longlong *)(param_1 + 0x10) <= lVar7)) {
    if ((iVar3 <= iVar9) && (*(longlong *)(param_1 + 0x10) == lVar11)) {
      *(int *)(param_1 + 0x28) = iVar3 - (int)lVar5;
      return 0;
    }
    lVar5 = lVar6 + 9;
    if (lVar11 <= lVar6 + 9) {
      lVar5 = lVar11;
    }
    *(longlong *)(param_1 + 0x10) = lVar5;
    lVar6 = 0;
    if (9 < lVar5) {
      lVar6 = lVar5 + -10;
    }
    *(longlong *)(param_1 + 0x20) = lVar6;
LAB_14251008b:
    puVar8 = *(ushort **)(param_1 + 0x40);
    FUN_1424a7170(local_80,puVar8,0,10);
    (**(code **)(*plVar1 + 0x10))
              (plVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),local_80);
    *(ushort **)(param_1 + 0x30) = puVar8;
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(param_1 + 0x20);
    iVar3 = (int)lVar6 - (int)lVar5;
    *(int *)(param_1 + 0x2c) = iVar3;
    iVar9 = iVar9 - (int)lVar5;
    *(int *)(param_1 + 0x28) = iVar9;
    if ((lVar6 < lVar11) && ((puVar8[(longlong)iVar3 + -1] & 0xfc00) == 0xd800)) {
      iVar4 = iVar3 + -1;
      *(int *)(param_1 + 0x2c) = iVar4;
      *(longlong *)(param_1 + 0x10) = lVar6 + -1;
      bVar2 = iVar3 <= iVar9;
      iVar3 = iVar4;
      if (bVar2) {
        *(int *)(param_1 + 0x28) = iVar4;
        iVar9 = iVar4;
      }
    }
    if ((0 < lVar5) && ((*puVar8 & 0xfc00) == 0xdc00)) {
      puVar8 = puVar8 + 1;
      *(ushort **)(param_1 + 0x30) = puVar8;
      *(longlong *)(param_1 + 0x20) = lVar5 + 1;
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 0x2c) = iVar3;
      iVar9 = iVar9 + -1;
      *(int *)(param_1 + 0x28) = iVar9;
    }
    if (((0 < iVar9) && ((puVar8[iVar9] & 0xfc00) == 0xdc00)) &&
       ((puVar8[iVar9 - 1U] & 0xfc00) == 0xd800)) {
      *(uint *)(param_1 + 0x28) = iVar9 - 1U;
    }
    *(int *)(param_1 + 0x1c) = iVar3;
    FUN_140859a90(local_80);
    return 1;
  }
  *(int *)(param_1 + 0x28) = iVar9 - (int)lVar5;
  return 1;
}



// FUNCTION 1425101a0 Unwind@1425101a0 body=48 status=ok
// SIG undefined Unwind@1425101a0(void)

void Unwind_1425101a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425101d0 FUN_1425101d0 body=405 status=ok
// SIG undefined FUN_1425101d0(void)

undefined4
FUN_1425101d0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,int param_5,
             int *param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 local_88 [64];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  if (0 < *param_6) {
    return 0;
  }
  if ((param_5 < 0) || ((param_4 == 0 && (param_5 != 0)))) {
    *param_6 = 1;
  }
  if ((longlong)param_3 < (longlong)param_2) {
    *param_6 = 8;
    return 0;
  }
  uVar5 = (ulonglong)iVar2;
  if ((longlong)param_2 < 0) {
    uVar6 = 0;
LAB_14251026f:
    if (-1 < (longlong)param_3) goto LAB_142510259;
LAB_142510277:
    uVar5 = 0;
  }
  else {
    uVar6 = uVar5;
    if ((longlong)uVar5 < (longlong)param_2) goto LAB_14251026f;
    uVar6 = param_2;
    if ((longlong)param_3 < 0) goto LAB_142510277;
LAB_142510259:
    iVar7 = (int)uVar6;
    if ((longlong)param_3 <= (longlong)uVar5) goto joined_r0x00014251027f;
  }
  iVar7 = (int)uVar6;
  param_3 = uVar5;
joined_r0x00014251027f:
  if (iVar7 < iVar2) {
    iVar7 = (int)uVar6;
    uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar6 & 0xffffffff);
    if ((uVar3 & 0xfc00) == 0xdc00) {
      iVar8 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar6 & 0xffffffff);
      iVar7 = iVar7 - (uint)(iVar8 - 0x10000U < 0x100000);
    }
  }
  iVar8 = (int)param_3;
  if ((iVar8 < iVar2) &&
     (uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_3 & 0xffffffff), (uVar3 & 0xfc00) == 0xdc00
     )) {
    iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_3 & 0xffffffff);
    iVar8 = iVar8 - (uint)(iVar2 - 0x10000U < 0x100000);
  }
  iVar2 = iVar7 + param_5;
  if (iVar8 - iVar7 <= param_5) {
    iVar2 = iVar8;
  }
  FUN_1424a7170(local_88,param_4,0);
  (**(code **)(*plVar1 + 0x10))(plVar1,iVar7,iVar2,local_88);
  FUN_14250ff90(param_1,(longlong)iVar2,1);
  uVar4 = FUN_142504cc0(param_4,param_5,iVar8 - iVar7,param_6);
  FUN_140859a90(local_88);
  return uVar4;
}



// FUNCTION 142510370 Unwind@142510370 body=52 status=ok
// SIG undefined Unwind@142510370(void)

void Unwind_142510370(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425103b0 FUN_1425103b0 body=419 status=ok
// SIG undefined FUN_1425103b0(void)

int FUN_1425103b0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,uint param_5
                 ,int *param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_88 [64];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_6) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if ((param_4 == 0) && (param_5 != 0)) {
    *param_6 = 1;
    return 0;
  }
  iVar2 = (**(code **)(*plVar1 + 0x38))();
  if ((longlong)param_2 <= (longlong)param_3) {
    uVar6 = (ulonglong)iVar2;
    if ((longlong)param_2 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6;
      if ((longlong)param_2 <= (longlong)uVar6) {
        uVar7 = param_2;
      }
    }
    if ((longlong)param_3 < 0) {
      uVar6 = 0;
    }
    else if ((longlong)param_3 <= (longlong)uVar6) {
      uVar6 = param_3;
    }
    iVar5 = (int)uVar6;
    iVar4 = (int)uVar7;
    if (((iVar4 < iVar2) &&
        (uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar7 & 0xffffffff), 0 < iVar4)) &&
       ((uVar3 & 0xfc00) == 0xdc00)) {
      uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,iVar4 - 1U);
      uVar7 = uVar7 & 0xffffffff;
      if ((uVar3 & 0xfc00) == 0xd800) {
        uVar7 = (ulonglong)(iVar4 - 1U);
      }
    }
    if ((iVar5 < iVar2) &&
       (uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,iVar5 + -1), (uVar3 & 0xfc00) == 0xd800)) {
      uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar6 & 0xffffffff);
      iVar5 = (uint)((uVar3 & 0xfc00) == 0xdc00) + iVar5;
    }
    FUN_1424a7060(local_88,param_5 >> 0x1f,param_4);
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar7 & 0xffffffff,iVar5,local_88);
    iVar4 = (**(code **)(*plVar1 + 0x38))(plVar1);
    if ((longlong)(int)uVar7 < *(longlong *)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    FUN_14250ff90(param_1,(longlong)(iVar5 + (iVar4 - iVar2)),1);
    FUN_140859a90(local_88);
    return iVar4 - iVar2;
  }
  *param_6 = 8;
  return 0;
}



// FUNCTION 142510560 Unwind@142510560 body=52 status=ok
// SIG undefined Unwind@142510560(void)

void Unwind_142510560(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425105a0 FUN_1425105a0 body=349 status=ok
// SIG undefined FUN_1425105a0(void)

void FUN_1425105a0(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  char param_5,int *param_6)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined **local_88;
  undefined2 local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar2 = (**(code **)(*plVar1 + 0x38))();
  if (0 < *param_6) {
    return;
  }
  if (((longlong)param_2 <= (longlong)param_3) &&
     (((longlong)param_4 <= (longlong)param_2 || ((longlong)param_3 <= (longlong)param_4)))) {
    uVar3 = (ulonglong)iVar2;
    if ((longlong)param_2 < 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3;
      if ((longlong)param_2 <= (longlong)uVar3) {
        uVar5 = param_2;
      }
    }
    if ((longlong)param_3 < 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar3;
      if ((longlong)param_3 <= (longlong)uVar3) {
        uVar6 = param_3;
      }
    }
    iVar2 = (int)uVar5;
    if ((longlong)param_4 < 0) {
      uVar3 = 0;
    }
    else if ((longlong)param_4 <= (longlong)uVar3) {
      uVar3 = param_4;
    }
    iVar8 = (int)uVar6;
    iVar7 = (int)uVar3;
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar5 & 0xffffffff,uVar6 & 0xffffffff,uVar3 & 0xffffffff);
    if (param_5 != '\0') {
      iVar4 = 0;
      if (iVar7 < iVar2) {
        uVar5 = uVar6;
        iVar4 = iVar8 - iVar2;
      }
      iVar2 = (int)uVar5;
      iVar8 = iVar4 + iVar8;
      local_88 = &PTR_FUN_149e18960;
      local_80 = 2;
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar5 & 0xffffffff,iVar8,&local_88);
      FUN_140859a90(&local_88);
    }
    iVar4 = iVar7;
    if (iVar2 < iVar7 && param_5 != '\0') {
      iVar4 = iVar2;
    }
    if ((longlong)iVar4 < *(longlong *)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    iVar8 = (iVar8 + iVar7) - iVar2;
    if (iVar2 < iVar7 && param_5 != '\0') {
      iVar8 = iVar7;
    }
    FUN_14250ff90(param_1,(longlong)iVar8,1);
    return;
  }
  *param_6 = 8;
  return;
}



// FUNCTION 142510700 Unwind@142510700 body=52 status=ok
// SIG undefined Unwind@142510700(void)

void Unwind_142510700(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142510740 FUN_142510740 body=47 status=ok
// SIG undefined FUN_142510740(void)

void FUN_142510740(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 142510770 FUN_142510770 body=114 status=ok
// SIG undefined FUN_142510770(void)

longlong FUN_142510770(undefined8 param_1,longlong param_2,char param_3,int *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14250fd50(param_1,param_2,param_4);
  if ((param_3 != '\0') && (*param_4 < 1)) {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    lVar3 = thunk_FUN_1424da030(0x40);
    if (lVar3 != 0) {
      FUN_1424a6be0(lVar3,uVar1);
    }
    *(longlong *)(lVar2 + 0x48) = lVar3;
    *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 0x28;
  }
  return lVar2;
}



// FUNCTION 1425107f0 Unwind@1425107f0 body=40 status=ok
// SIG undefined Unwind@1425107f0(void)

void Unwind_1425107f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142510880 FUN_142510880 body=285 status=ok
// SIG undefined FUN_142510880(void)

int FUN_142510880(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,int param_5,
                 int *param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(short *)(lVar1 + 8) < 0) {
    iVar3 = *(int *)(lVar1 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(lVar1 + 8) >> 5;
  }
  iVar4 = 0;
  if (*param_6 < 1) {
    if ((param_5 < 0) || ((param_4 == 0 && (param_5 != 0)))) {
      *param_6 = 1;
    }
    if ((param_2 < 0) || ((longlong)param_3 < param_2)) {
      *param_6 = 8;
      iVar4 = 0;
    }
    else {
      iVar2 = iVar3;
      if (param_2 < iVar3) {
        iVar2 = FUN_1424a80d0(lVar1);
      }
      if ((longlong)param_3 < (longlong)iVar3) {
        iVar3 = FUN_1424a80d0(lVar1,param_3 & 0xffffffff);
      }
      iVar4 = iVar3 - iVar2;
      if ((param_4 != 0) && (0 < param_5)) {
        iVar3 = param_5;
        if (iVar4 < param_5) {
          iVar3 = iVar4;
        }
        FUN_1424a82d0(lVar1,iVar2,iVar3,param_4,0);
        iVar2 = iVar2 + iVar3;
      }
      *(int *)(param_1 + 0x28) = iVar2;
      FUN_142504cc0(param_4,param_5,iVar4,param_6);
    }
  }
  return iVar4;
}



// FUNCTION 1425109a0 Unwind@1425109a0 body=50 status=ok
// SIG undefined Unwind@1425109a0(void)

void Unwind_1425109a0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x38);
  return;
}



// FUNCTION 1425109e0 FUN_1425109e0 body=352 status=ok
// SIG undefined FUN_1425109e0(void)

int FUN_1425109e0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,int param_5,
                 int *param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  if (0 < *param_6) {
    return 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  if ((param_4 == 0) && (param_5 != 0)) {
    *param_6 = 1;
  }
  if ((longlong)param_3 < (longlong)param_2) {
    *param_6 = 8;
    return 0;
  }
  if (*(short *)(lVar6 + 8) < 0) {
    iVar7 = *(int *)(lVar6 + 0xc);
  }
  else {
    iVar7 = (int)*(short *)(lVar6 + 8) >> 5;
  }
  uVar4 = (ulonglong)iVar7;
  if ((longlong)param_2 < 0) {
    uVar5 = 0;
LAB_142510ae5:
    if (-1 < (longlong)param_3) goto LAB_142510a6e;
LAB_142510aed:
    uVar4 = 0;
  }
  else {
    uVar5 = uVar4;
    if ((longlong)uVar4 < (longlong)param_2) goto LAB_142510ae5;
    uVar5 = param_2;
    if ((longlong)param_3 < 0) goto LAB_142510aed;
LAB_142510a6e:
    iVar3 = (int)uVar5;
    if ((longlong)param_3 <= (longlong)uVar4) goto joined_r0x000142510af5;
  }
  iVar3 = (int)uVar5;
  param_3 = uVar4;
joined_r0x000142510af5:
  if (iVar3 < iVar7) {
    iVar3 = FUN_1424a80d0(lVar6,uVar5 & 0xffffffff);
  }
  iVar2 = (int)param_3;
  if (iVar2 < iVar7) {
    iVar2 = FUN_1424a80d0(lVar6,param_3 & 0xffffffff);
  }
  FUN_1424a9130(lVar6,iVar3,iVar2 - iVar3,param_4,0,param_5);
  uVar1 = *(ushort *)(lVar6 + 8);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(lVar6 + 0xc);
  }
  else {
    iVar3 = (int)(short)uVar1 >> 5;
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar6 = *(longlong *)(lVar6 + 0x18);
    }
    else {
      lVar6 = lVar6 + 10;
    }
  }
  else {
    lVar6 = 0;
  }
  *(longlong *)(param_1 + 0x30) = lVar6;
  *(int *)(param_1 + 0x2c) = iVar3;
  *(longlong *)(param_1 + 0x10) = (longlong)iVar3;
  *(int *)(param_1 + 0x1c) = iVar3;
  *(int *)(param_1 + 0x28) = iVar2 + (iVar3 - iVar7);
  return iVar3 - iVar7;
}



// FUNCTION 142510b40 Unwind@142510b40 body=50 status=ok
// SIG undefined Unwind@142510b40(void)

void Unwind_142510b40(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x48);
  return;
}



// FUNCTION 142510b80 FUN_142510b80 body=387 status=ok
// SIG undefined FUN_142510b80(void)

void FUN_142510b80(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  char param_5,int *param_6)

{
  longlong *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (*param_6 < 1) {
    plVar1 = *(longlong **)(param_1 + 0x48);
    if ((short)plVar1[1] < 0) {
      iVar8 = *(int *)((longlong)plVar1 + 0xc);
    }
    else {
      iVar8 = (int)(short)plVar1[1] >> 5;
    }
    uVar5 = (ulonglong)iVar8;
    if ((longlong)param_2 < 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar5;
      if ((longlong)param_2 <= (longlong)uVar5) {
        uVar6 = param_2;
      }
    }
    if ((longlong)param_3 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5;
      if ((longlong)param_3 <= (longlong)uVar5) {
        uVar7 = param_3;
      }
    }
    if ((longlong)param_4 < 0) {
      uVar5 = 0;
    }
    else if ((longlong)param_4 <= (longlong)uVar5) {
      uVar5 = param_4;
    }
    iVar8 = (int)uVar7;
    iVar11 = (int)uVar6;
    iVar9 = iVar8 - iVar11;
    if ((iVar8 < iVar11) || ((iVar10 = (int)uVar5, iVar11 < iVar10 && (iVar10 < iVar8)))) {
      *param_6 = 8;
    }
    else {
      if (param_5 == '\0') {
        (**(code **)(*plVar1 + 0x20))(plVar1,uVar6 & 0xffffffff,iVar8,uVar5 & 0xffffffff);
      }
      else {
        (**(code **)(*plVar1 + 0x20))(plVar1,uVar6 & 0xffffffff,iVar8,uVar5 & 0xffffffff);
        if (iVar10 < iVar11) {
          uVar6 = uVar7;
        }
        iVar11 = (int)uVar6;
        if ((iVar9 == 0x7fffffff) && (iVar11 < 1)) {
          uVar2 = 2;
          if ((*(ushort *)(plVar1 + 1) & 1) == 0) {
            uVar2 = *(ushort *)(plVar1 + 1) & 0x1f;
          }
          *(ushort *)(plVar1 + 1) = uVar2;
        }
        else {
          FUN_1424a9130(plVar1,uVar6 & 0xffffffff,iVar9,0,0,0);
        }
      }
      if ((*(ushort *)(plVar1 + 1) & 0x11) == 0) {
        if ((*(ushort *)(plVar1 + 1) & 2) == 0) {
          lVar4 = plVar1[3];
        }
        else {
          lVar4 = (longlong)plVar1 + 10;
        }
      }
      else {
        lVar4 = 0;
      }
      *(longlong *)(param_1 + 0x30) = lVar4;
      if (param_5 == '\0') {
        lVar4 = (longlong)(iVar8 - iVar11) + (longlong)*(int *)(param_1 + 0x2c);
        uVar3 = (undefined4)lVar4;
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        *(longlong *)(param_1 + 0x10) = lVar4;
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
      }
      iVar8 = (iVar8 + iVar10) - iVar11;
      if (iVar10 <= iVar11) {
        iVar10 = iVar8;
      }
      if (param_5 == '\0') {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 0x28) = iVar10;
    }
    return;
  }
  return;
}



// FUNCTION 142510d10 FUN_142510d10 body=47 status=ok
// SIG undefined FUN_142510d10(void)

void FUN_142510d10(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 142510d40 FUN_142510d40 body=363 status=ok
// SIG undefined FUN_142510d40(void)

longlong FUN_142510d40(undefined8 param_1,longlong param_2,char param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar7 = FUN_14250fd50();
  if (param_3 == '\0') {
    return lVar7;
  }
  if (0 < *param_4) {
    return lVar7;
  }
  lVar8 = (**(code **)(*(longlong *)(lVar7 + 0x38) + 0x18))(lVar7);
  lVar3 = *(longlong *)(param_2 + 0x48);
  lVar8 = lVar8 << 0x20;
  lVar9 = FUN_1424da030(lVar8 + 0x100000000 >> 0x1f);
  if (lVar9 == 0) {
    *param_4 = 7;
    return lVar7;
  }
  uVar10 = lVar8 >> 0x20;
  if (0 < lVar8) {
    uVar11 = 1;
    if (1 < (longlong)uVar10) {
      uVar11 = uVar10;
    }
    uVar12 = 0;
    if ((0xf < uVar11) && (0x1f < (ulonglong)(lVar9 - lVar3))) {
      uVar12 = uVar11 & 0x7ffffffffffffff0;
      uVar13 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + uVar13 * 2);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar13 * 2);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar9 + uVar13 * 2);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar13 * 2);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        uVar13 = uVar13 + 0x10;
      } while (uVar12 != uVar13);
      if (uVar11 == uVar12) goto LAB_142510e87;
    }
    uVar14 = ~uVar12;
    for (uVar13 = uVar11 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined2 *)(lVar9 + uVar12 * 2) = *(undefined2 *)(lVar3 + uVar12 * 2);
      uVar12 = uVar12 + 1;
    }
    if (2 < uVar14 + uVar11) {
      do {
        *(undefined2 *)(lVar9 + uVar12 * 2) = *(undefined2 *)(lVar3 + uVar12 * 2);
        *(undefined2 *)(lVar9 + 2 + uVar12 * 2) = *(undefined2 *)(lVar3 + 2 + uVar12 * 2);
        *(undefined2 *)(lVar9 + 4 + uVar12 * 2) = *(undefined2 *)(lVar3 + 4 + uVar12 * 2);
        *(undefined2 *)(lVar9 + 6 + uVar12 * 2) = *(undefined2 *)(lVar3 + 6 + uVar12 * 2);
        uVar12 = uVar12 + 4;
      } while (uVar11 != uVar12);
    }
  }
LAB_142510e87:
  *(undefined2 *)(lVar9 + uVar10 * 2) = 0;
  *(longlong *)(lVar7 + 0x48) = lVar9;
  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 0x20;
  return lVar7;
}



// FUNCTION 142510f00 FUN_142510f00 body=465 status=ok
// SIG undefined FUN_142510f00(void)

bool FUN_142510f00(longlong param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((longlong)param_2 < 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar7 = *(ulonglong *)(param_1 + 0x10);
    uVar5 = param_2;
    if ((longlong)param_2 < (longlong)uVar7) {
      if (((param_2 != 0) && ((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00)) &&
         (uVar5 = param_2 - 1, (*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) != 0xd800)) {
        uVar5 = param_2;
      }
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 0x70);
      if ((longlong)*(ulonglong *)(param_1 + 0x70) < 0) {
        uVar4 = 0x7fffffff;
        if (param_2 < 0x7fffffe0) {
          uVar4 = (int)param_2 + 0x20;
        }
        if ((int)uVar7 < (int)uVar4) {
          uVar7 = (ulonglong)(int)uVar7;
          do {
            if (*(short *)(lVar1 + uVar7 * 2) == 0) {
              *(ulonglong *)(param_1 + 0x70) = uVar7;
              *(int *)(param_1 + 0x2c) = (int)uVar7;
              *(int *)(param_1 + 0x1c) = (int)uVar7;
              uVar5 = uVar7;
              if ((((longlong)param_2 < (longlong)uVar7) && (uVar5 = param_2, 0 < (longlong)param_2)
                  ) && (((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00 &&
                        (uVar5 = param_2 - 1,
                        (*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) != 0xd800)))) {
                uVar5 = param_2;
              }
              *(ulonglong *)(param_1 + 0x10) = uVar7;
              goto LAB_1425110ad;
            }
            uVar7 = uVar7 + 1;
          } while ((longlong)(int)uVar4 != uVar7);
          uVar7 = (ulonglong)uVar4;
        }
        iVar6 = (int)uVar7;
        uVar5 = param_2;
        if (((0 < (longlong)param_2) && ((*(ushort *)(lVar1 + param_2 * 2) & 0xfc00) == 0xdc00)) &&
           (uVar5 = param_2 - 1, (*(ushort *)(lVar1 + -2 + param_2 * 2) & 0xfc00) != 0xd800)) {
          uVar5 = param_2;
        }
        if (iVar6 == 0x7fffffff) {
          *(undefined8 *)(param_1 + 0x70) = 0x7fffffff;
          *(undefined4 *)(param_1 + 0x2c) = 0x7fffffff;
          *(undefined4 *)(param_1 + 0x1c) = 0x7fffffff;
          if (0x7ffffffe < (longlong)uVar5) {
            uVar5 = 0x7fffffff;
          }
          *(undefined8 *)(param_1 + 0x10) = 0x7fffffff;
LAB_1425110ad:
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
        }
        else {
          iVar3 = iVar6 + -1;
          if ((*(ushort *)(lVar1 + -2 + (longlong)iVar6 * 2) & 0xfc00) != 0xd800) {
            iVar3 = iVar6;
          }
          *(longlong *)(param_1 + 0x10) = (longlong)iVar3;
          *(int *)(param_1 + 0x1c) = iVar3;
          *(int *)(param_1 + 0x2c) = iVar3;
        }
      }
    }
  }
  *(int *)(param_1 + 0x28) = (int)uVar5;
  if ((param_3 == '\0') || (bVar2 = true, *(longlong *)(param_1 + 0x10) <= (longlong)uVar5)) {
    bVar2 = 0 < (longlong)uVar5 && param_3 == '\0';
  }
  return bVar2;
}



// FUNCTION 1425110e0 FUN_1425110e0 body=408 status=ok
// SIG undefined FUN_1425110e0(void)

ulonglong FUN_1425110e0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                       uint param_5,int *param_6)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (0 < *param_6) {
    return 0;
  }
  if ((int)param_5 < 0) {
LAB_14251114f:
    *param_6 = 1;
    return 0;
  }
  if (((longlong)param_3 < param_2) || (param_4 == 0 && param_5 != 0)) goto LAB_14251114f;
  FUN_142510f00();
  uVar8 = *(uint *)(param_1 + 0x28);
  uVar9 = (uint)*(ulonglong *)(param_1 + 0x70);
  if ((int)uVar9 < 0) {
    if ((longlong)param_3 < 0) goto LAB_14251116f;
    uVar3 = 0x7fffffff;
    if (param_3 >> 0x1f == 0) goto LAB_142511174;
  }
  else if ((longlong)param_3 < 0) {
LAB_14251116f:
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulonglong *)(param_1 + 0x70) & 0xffffffff;
    if (param_3 <= uVar3) goto LAB_142511174;
  }
  param_3 = uVar3;
LAB_142511174:
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar6 = (int)param_3 - uVar8;
  uVar3 = (ulonglong)uVar6;
  if (uVar6 == 0 || (int)param_3 < (int)uVar8) {
    uVar3 = 0;
    param_3 = (ulonglong)uVar8;
  }
  else {
    lVar5 = lVar2 + (longlong)(int)uVar8 * 2;
    uVar4 = 0;
    do {
      if (((int)uVar9 < 0) && (*(short *)(lVar5 + uVar4 * 2) == 0)) {
        uVar9 = uVar8 + (int)uVar4;
        param_3 = (ulonglong)uVar9;
        lVar5 = (longlong)(int)uVar8 + uVar4;
        *(longlong *)(param_1 + 0x70) = lVar5;
        *(longlong *)(param_1 + 0x10) = lVar5;
        *(uint *)(param_1 + 0x2c) = uVar9;
        *(uint *)(param_1 + 0x1c) = uVar9;
        uVar3 = uVar4 & 0xffffffff;
        uVar8 = uVar9;
        goto joined_r0x00014251123b;
      }
      if (uVar4 < param_5) {
        *(undefined2 *)(param_4 + uVar4 * 2) = *(undefined2 *)(lVar5 + uVar4 * 2);
      }
      else if (-1 < (int)uVar9) goto LAB_1425111cc;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    param_3 = (ulonglong)((int)uVar4 + uVar8);
LAB_1425111cc:
    uVar8 = (uint)param_3;
  }
joined_r0x00014251123b:
  if ((((0 < (int)uVar8) &&
       (uVar8 = (uint)param_3, (*(ushort *)(lVar2 + (ulonglong)(uVar8 - 1) * 2) & 0xfc00) == 0xd800)
       ) && (((int)uVar8 < (int)uVar9 || ((int)uVar9 < 0)))) &&
     (uVar1 = *(ushort *)(lVar2 + (param_3 & 0xffffffff) * 2), (uVar1 & 0xfc00) == 0xdc00)) {
    iVar7 = (int)uVar3;
    if (iVar7 < (int)param_5) {
      uVar3 = (ulonglong)(iVar7 + 1);
      *(ushort *)(param_4 + (longlong)iVar7 * 2) = uVar1;
    }
    uVar8 = uVar8 + 1;
  }
  if (*(longlong *)(param_1 + 0x10) < (longlong)(int)uVar8) {
    FUN_142510f00(param_1,(longlong)(int)uVar8,1);
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar8;
  }
  FUN_142504cc0(param_4,param_5,uVar3,param_6);
  return uVar3;
}



// FUNCTION 142511280 FUN_142511280 body=37 status=ok
// SIG undefined FUN_142511280(void)

void FUN_142511280(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x20) != 0) {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1425112b0 FUN_1425112b0 body=386 status=ok
// SIG undefined FUN_1425112b0(void)

longlong FUN_1425112b0(undefined8 param_1,longlong param_2,char param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_4 < 1) {
    if (param_3 == '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x38))();
      if (0 < *param_4) {
        return 0;
      }
      if (*(int *)(lVar2 + 0x10) < 1) {
        lVar3 = FUN_14250ec30(param_1,0x40,param_4);
        if (0 < *param_4) {
          return lVar3;
        }
        *(undefined **)(lVar3 + 0x38) = &DAT_1499d9bf0;
        *(longlong *)(lVar3 + 0x48) = lVar2;
        *(undefined4 *)(lVar3 + 8) = 0;
        *(longlong *)(lVar3 + 0x70) = (longlong)*(int *)(lVar2 + 0x14);
        lVar5 = *(longlong *)(lVar3 + 0x40);
        *(longlong *)(lVar3 + 0x50) = lVar5;
        *(undefined8 *)(lVar3 + 0x78) = 0xffffffffffffffff;
        *(longlong *)(lVar3 + 0x58) = lVar5 + 0x20;
        *(longlong *)(lVar3 + 0x30) = lVar5;
        *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(lVar3 + 0x28) = 1;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = 1;
        if (*param_4 < 1) {
          if (*(int *)(param_2 + 0x1c) < *(int *)(param_2 + 0x28)) {
            lVar4 = (**(code **)(*(longlong *)(param_2 + 0x38) + 0x40))(param_2);
            lVar5 = *(longlong *)(lVar3 + 0x20);
          }
          else {
            lVar4 = (longlong)*(int *)(param_2 + 0x28) + *(longlong *)(param_2 + 0x20);
            lVar5 = -1;
          }
          if ((lVar4 < lVar5) || (*(longlong *)(lVar3 + 0x10) <= lVar4)) {
            (**(code **)(*(longlong *)(lVar3 + 0x38) + 0x20))(lVar3,lVar4,1);
            iVar1 = *(int *)(lVar3 + 0x28);
          }
          else {
            iVar1 = (int)lVar4 - (int)lVar5;
            if (*(int *)(lVar3 + 0x1c) < iVar1) {
              iVar1 = (**(code **)(*(longlong *)(lVar3 + 0x38) + 0x48))(lVar3);
            }
            *(int *)(lVar3 + 0x28) = iVar1;
          }
          if ((iVar1 < *(int *)(lVar3 + 0x2c)) &&
             ((*(ushort *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 2) & 0xfc00) == 0xdc00))
          {
            if (iVar1 == 0) {
              (**(code **)(*(longlong *)(lVar3 + 0x38) + 0x20))
                        (lVar3,*(undefined8 *)(lVar3 + 0x20),0);
              iVar1 = *(int *)(lVar3 + 0x28);
            }
            if ((0 < iVar1) &&
               ((*(ushort *)(*(longlong *)(lVar3 + 0x30) + (ulonglong)(iVar1 - 1U) * 2) & 0xfc00) ==
                0xd800)) {
              *(uint *)(lVar3 + 0x28) = iVar1 - 1U;
            }
          }
          *(longlong *)(lVar3 + 0x60) = lVar2;
          return lVar3;
        }
        return lVar3;
      }
    }
    *param_4 = 0x10;
  }
  return 0;
}



// FUNCTION 142511450 FUN_142511450 body=385 status=ok
// SIG undefined FUN_142511450(void)

undefined8 FUN_142511450(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((int)param_2 < 0) {
    if (param_3 == '\0') {
      uVar9 = 0;
      bVar2 = true;
      uVar8 = 0;
      goto LAB_1425114cc;
    }
    lVar5 = *(longlong *)(param_1 + 0x70);
    uVar9 = 0;
    bVar11 = false;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x70);
    uVar9 = (uint)lVar5;
    if ((longlong)(ulonglong)param_2 < lVar5) {
      uVar9 = param_2;
    }
    bVar11 = 0 < (int)uVar9;
    if ((param_3 == '\0') && (0 < (int)uVar9)) {
      bVar2 = true;
      uVar8 = uVar9 - 1;
      goto LAB_1425114cc;
    }
    if (param_3 == '\0') {
      bVar2 = true;
      uVar8 = uVar9;
      goto LAB_1425114cc;
    }
  }
  bVar2 = false;
  uVar8 = uVar9 - (byte)(lVar5 == (int)uVar9 & bVar11);
LAB_1425114cc:
  uVar7 = uVar8 + 0xf;
  if (-1 < (int)uVar8) {
    uVar7 = uVar8;
  }
  uVar7 = uVar7 & 0xfffffff0;
  lVar10 = (longlong)(int)uVar7;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) != lVar10) {
    if (*(uint *)(param_1 + 0x78) == uVar7) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    else if (*(uint *)(param_1 + 0x7c) == uVar7) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x48);
      lVar5 = *(longlong *)(param_1 + 0x50);
      if (lVar5 == *(longlong *)(param_1 + 0x30)) {
        lVar5 = *(longlong *)(param_1 + 0x58);
      }
      (**(code **)(*plVar1 + 0x70))(plVar1,uVar7);
      lVar6 = 0;
      do {
        uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined2 *)(lVar5 + lVar6 * 2) = uVar3;
        if (*(longlong *)(param_1 + 0x70) <
            (longlong)(int)((uVar8 - (int)uVar8 % 0x10) + (int)lVar6)) break;
        bVar11 = lVar6 != 0xf;
        lVar6 = lVar6 + 1;
      } while (bVar11);
    }
    *(longlong *)(param_1 + 0x30) = lVar5;
    *(undefined4 *)(param_1 + 0x2c) = 0x10;
    *(longlong *)(param_1 + 0x20) = lVar10;
    *(longlong *)(param_1 + 0x10) = (longlong)(int)(uVar7 + 0x10);
    lVar5 = *(longlong *)(param_1 + 0x70);
    iVar4 = 0x10;
    if (lVar5 < (int)(uVar7 + 0x10)) {
      *(longlong *)(param_1 + 0x10) = lVar5;
      iVar4 = (int)lVar5 - uVar7;
      *(int *)(param_1 + 0x2c) = iVar4;
    }
    *(int *)(param_1 + 0x1c) = iVar4;
    lVar5 = lVar10;
  }
  iVar4 = uVar9 - (int)lVar5;
  *(int *)(param_1 + 0x28) = iVar4;
  if (bVar2) {
    bVar2 = 0 < iVar4;
  }
  else {
    bVar2 = iVar4 < *(int *)(param_1 + 0x2c);
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar2);
}



// FUNCTION 1425115e0 FUN_1425115e0 body=383 status=ok
// SIG undefined FUN_1425115e0(void)

int FUN_1425115e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                 int *param_6)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (0 < *param_6) {
    return 0;
  }
  if (-1 < param_5) {
    if ((param_2 <= param_3) && (param_4 != 0 || param_5 == 0)) {
      lVar3 = (longlong)*(int *)(param_1 + 0x70);
      if (param_2 < 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar3;
        if (param_2 <= lVar3) {
          lVar7 = param_2;
        }
      }
      if (param_3 < 0) {
        lVar3 = 0;
      }
      else if (param_3 <= lVar3) {
        lVar3 = param_3;
      }
      plVar1 = *(longlong **)(param_1 + 0x48);
      (**(code **)(*plVar1 + 0x78))(plVar1,lVar7);
      iVar9 = *(int *)((longlong)plVar1 + 0xc);
      iVar8 = 0;
      iVar6 = iVar9;
      if (iVar9 < (int)lVar3) {
        iVar10 = 0;
        do {
          uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          uVar2 = (uint)uVar4;
          iVar5 = 2 - (uint)(uVar2 < 0x10000);
          iVar8 = iVar5 + iVar10;
          if (param_5 < iVar8) {
            *param_6 = 0xf;
          }
          else {
            if (uVar2 < 0x10000) {
              iVar8 = 1;
              iVar6 = iVar10;
            }
            else {
              iVar6 = iVar10 + 1;
              *(short *)(param_4 + (longlong)iVar10 * 2) = (short)(uVar4 >> 10) + -0x2840;
              uVar4 = (ulonglong)(uVar2 & 0x3ff | 0xdc00);
              iVar8 = 2;
            }
            iVar8 = iVar10 + iVar8;
            *(short *)(param_4 + (longlong)iVar6 * 2) = (short)uVar4;
            iVar6 = iVar5 + iVar9;
          }
          iVar9 = iVar5 + iVar9;
          iVar10 = iVar8;
        } while (iVar9 < (int)lVar3);
      }
      FUN_142511450(param_1,(longlong)iVar6,1);
      FUN_142504cc0(param_4,param_5,iVar8,param_6);
      return iVar8;
    }
  }
  *param_6 = 1;
  return 0;
}



// FUNCTION 142511770 FUN_142511770 body=41 status=ok
// SIG undefined FUN_142511770(void)

void FUN_142511770(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1425117a0 FUN_1425117a0 body=264 status=ok
// SIG undefined FUN_1425117a0(void)

uint FUN_1425117a0(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 + 1 == param_1) {
    lVar2 = *param_2;
    iVar1 = *(int *)(lVar2 + 0x28);
    if (iVar1 < *(int *)(lVar2 + 0x2c)) {
      if (*(ushort *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 2) < 0xd800) {
        *(int *)(lVar2 + 0x28) = iVar1 + 1;
        uVar3 = (uint)*(ushort *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 2);
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        goto LAB_142511892;
      }
    }
    uVar3 = FUN_14250e570();
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    goto LAB_142511892;
  }
  if (uVar3 != param_1) {
    FUN_14250e380(*param_2,~uVar3 + param_1);
    lVar2 = *param_2;
    iVar1 = *(int *)(lVar2 + 0x28);
    if ((iVar1 < *(int *)(lVar2 + 0x2c)) &&
       (*(ushort *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 2) < 0xd800)) {
      *(int *)(lVar2 + 0x28) = iVar1 + 1;
      uVar3 = (uint)*(ushort *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 2);
    }
    else {
      uVar3 = FUN_14250e570();
    }
    *(uint *)(param_2 + 1) = param_1;
    goto LAB_142511892;
  }
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 0x28) < 1) {
LAB_142511863:
    uVar3 = FUN_14250e620();
  }
  else {
    uVar3 = *(int *)(lVar2 + 0x28) - 1;
    if (0xd7ff < *(ushort *)(*(longlong *)(lVar2 + 0x30) + (ulonglong)uVar3 * 2))
    goto LAB_142511863;
    *(uint *)(lVar2 + 0x28) = uVar3;
    uVar3 = (uint)*(ushort *)(*(longlong *)(lVar2 + 0x30) + (ulonglong)uVar3 * 2);
  }
  lVar2 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x28);
  if ((iVar1 < *(int *)(lVar2 + 0x2c)) &&
     (*(ushort *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 2) < 0xd800)) {
    *(int *)(lVar2 + 0x28) = iVar1 + 1;
  }
  else {
    FUN_14250e570();
  }
LAB_142511892:
  uVar4 = 0x10000;
  if (uVar3 < 0x10000) {
    uVar4 = uVar3;
  }
  return uVar4;
}



// FUNCTION 1425118c0 FUN_1425118c0 body=8 status=ok
// SIG undefined FUN_1425118c0(void)

undefined * FUN_1425118c0(void)

{
  return &DAT_14c792c1c;
}



// FUNCTION 1425118d0 FUN_1425118d0 body=20 status=ok
// SIG undefined FUN_1425118d0(void)

undefined8 FUN_1425118d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 8) != 0);
  }
  return 0;
}



// FUNCTION 1425118f0 FUN_1425118f0 body=16 status=ok
// SIG undefined FUN_1425118f0(void)

undefined4 FUN_1425118f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 8);
  }
  return 0;
}



// FUNCTION 142511900 FUN_142511900 body=91 status=ok
// SIG undefined FUN_142511900(void)

void FUN_142511900(undefined8 *param_1)

{
  *param_1 = icu_64::UnicodeSet::vftable;
  param_1[1] = icu_64::UnicodeSet::vftable;
  param_1[2] = param_1 + 0xc;
  param_1[3] = 0x100000019;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x110000;
  return;
}



// FUNCTION 142511960 FUN_142511960 body=124 status=ok
// SIG undefined FUN_142511960(void)

undefined8 * FUN_142511960(undefined8 *param_1)

{
  *param_1 = icu_64::UnicodeSet::vftable;
  param_1[1] = icu_64::UnicodeSet::vftable;
  param_1[2] = param_1 + 0xc;
  param_1[3] = 0x100000019;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x110000;
  FUN_142511a00();
  return param_1;
}



// FUNCTION 1425119e0 Unwind@1425119e0 body=30 status=ok
// SIG undefined Unwind@1425119e0(void)

void Unwind_1425119e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142511a00 FUN_142511a00 body=378 status=ok
// SIG undefined FUN_142511a00(void)

void FUN_142511a00(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_48 [36];
  uint local_24;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_2 < 0) {
    uVar3 = 0;
LAB_142511ad2:
    if (-1 < (int)param_3) goto LAB_142511a3a;
LAB_142511add:
    uVar4 = 0;
LAB_142511adf:
    bVar8 = uVar3 == uVar4;
    if (uVar4 <= uVar3) {
LAB_142511aeb:
      if (bVar8) {
        FUN_142513960(param_1);
      }
      goto LAB_142511af5;
    }
  }
  else {
    uVar3 = 0x10ffff;
    if (0x10ffff < param_2) goto LAB_142511ad2;
    uVar3 = param_2;
    if ((int)param_3 < 0) goto LAB_142511add;
LAB_142511a3a:
    uVar4 = 0x10ffff;
    if (0x10ffff < param_3) goto LAB_142511adf;
    bVar8 = uVar3 == param_3;
    uVar4 = param_3;
    if (param_3 <= uVar3) goto LAB_142511aeb;
  }
  iVar7 = uVar4 + 1;
  uVar5 = (ulonglong)*(int *)(param_1 + 0x1c);
  if ((((uVar5 & 1) == 0) ||
      (((uVar6 = 0xfffffffe, *(int *)(param_1 + 0x1c) != 1 &&
        (uVar6 = *(uint *)(*(longlong *)(param_1 + 0x10) + -8 + uVar5 * 4), (int)uVar3 < (int)uVar6)
        ) || (*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0)))) ||
     ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    local_1c = 0x110000;
    local_24 = uVar3;
    local_20 = iVar7;
    FUN_142513630(param_1,&local_24,2,0);
    goto LAB_142511af5;
  }
  if (uVar6 == uVar3) {
    *(int *)(*(longlong *)(param_1 + 0x10) + -8 + uVar5 * 4) = iVar7;
    if (iVar7 == 0x110000) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  else {
    *(uint *)(*(longlong *)(param_1 + 0x10) + -4 + uVar5 * 4) = uVar3;
    if (uVar4 < 0x10ffff) {
      cVar2 = FUN_142511eb0(param_1,*(int *)(param_1 + 0x1c) + 2);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar1 + 1;
        *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = iVar7;
LAB_142511b4d:
        iVar7 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar7 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4) = 0x110000;
      }
    }
    else {
      cVar2 = FUN_142511eb0(param_1,*(int *)(param_1 + 0x1c) + 1);
      if (cVar2 != '\0') goto LAB_142511b4d;
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_142511af5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142511b90 FUN_142511b90 body=120 status=ok
// SIG undefined FUN_142511b90(void)

undefined8 *
FUN_142511b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = icu_64::UnicodeSet::vftable;
  param_1[1] = icu_64::UnicodeSet::vftable;
  param_1[2] = param_1 + 0xc;
  param_1[3] = 0x100000019;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_142512270(0,param_2,0,param_4,param_1,0xfffffffffffffffe);
  return param_1;
}



// FUNCTION 142511c10 Unwind@142511c10 body=30 status=ok
// SIG undefined Unwind@142511c10(void)

void Unwind_142511c10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142511c30 FUN_142511c30 body=8 status=ok
// SIG undefined FUN_142511c30(void)

void FUN_142511c30(undefined8 param_1,undefined8 param_2)

{
  FUN_142512270(param_1,param_2,0);
  return;
}



// FUNCTION 142511c40 FUN_142511c40 body=524 status=ok
// SIG undefined FUN_142511c40(void)

undefined8 * FUN_142511c40(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  *param_1 = icu_64::UnicodeSet::vftable;
  param_1[1] = icu_64::UnicodeSet::vftable;
  param_1[2] = param_1 + 0xc;
  param_1[3] = 0x100000019;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  cVar4 = FUN_142511eb0(0,*(undefined4 *)(param_2 + 0x1c));
  if (cVar4 == '\0') {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  *(int *)((longlong)param_1 + 0x1c) = iVar2;
  memcpy((void *)param_1[2],*(void **)(param_2 + 0x10),(longlong)iVar2 << 2);
  if ((*(longlong *)(param_2 + 0x50) == 0) || (*(int *)(*(longlong *)(param_2 + 0x50) + 8) == 0)) {
LAB_142511ddb:
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (lVar3 != 0) {
      iVar2 = *(int *)(param_2 + 0x48);
      if (param_1[8] != 0) {
        FUN_1424da110();
        param_1[8] = 0;
        *(undefined4 *)(param_1 + 9) = 0;
      }
      lVar6 = FUN_1424da030((longlong)iVar2 * 2 + 2);
      param_1[8] = lVar6;
      if (lVar6 != 0) {
        *(int *)(param_1 + 9) = iVar2;
        FUN_142504850(lVar6,lVar3,iVar2);
        *(undefined2 *)(param_1[8] + (longlong)*(int *)(param_1 + 9) * 2) = 0;
      }
    }
  }
  else {
    plVar1 = param_1 + 10;
    local_34[0] = 0;
    puVar5 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (puVar5 == (undefined8 *)0x0) {
      *plVar1 = 0;
      local_34[0] = 7;
    }
    else {
      FUN_142515f80(puVar5,&LAB_1424b70f0,FUN_1424a9cd0,1,local_34);
      *plVar1 = (longlong)puVar5;
      if (local_34[0] < 1) {
        FUN_1425160f0(puVar5,*(undefined8 *)(param_2 + 0x50),FUN_142512080,local_34);
        if (local_34[0] < 1) goto LAB_142511ddb;
      }
      else {
        (**(code **)*puVar5)(puVar5,1);
        *plVar1 = 0;
      }
    }
    if (param_1[5] == 0 && param_1[0xb] == 0) {
      *(undefined4 *)param_1[2] = 0x110000;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
      if (param_1[8] != 0) {
        FUN_1424da110();
        param_1[8] = 0;
        *(undefined4 *)(param_1 + 9) = 0;
      }
      if (*plVar1 != 0) {
        FUN_1425160a0();
      }
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}


