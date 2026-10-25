// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144a79096 FUN_144a79096 body=353 status=ok
// SIG undefined FUN_144a79096(void)

void FUN_144a79096(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144a7911b;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144a7911b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 144a791f8 FUN_144a791f8 body=196 status=ok
// SIG undefined FUN_144a791f8(void)

undefined8 FUN_144a791f8(undefined8 *param_1,wchar_t *param_2,uint param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined2 *puVar5;
  wchar_t *_Str1;
  longlong lVar6;
  int iVar7;
  
  if (param_4 == 1) {
    if (0 < (int)param_3) {
      uVar3 = (ulonglong)param_3;
      if (*(int *)(param_1 + 1) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_1;
      }
      lVar6 = 0;
      do {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar6);
        uVar2 = *(ushort *)((longlong)param_2 + lVar6);
        uVar4 = uVar3;
        if (uVar1 == uVar2) {
          iVar7 = 0;
          if ((uVar1 == 0) || (uVar4 = 0, uVar3 == 1)) goto LAB_144a79272;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar7 = (uint)uVar1 - (uint)uVar2;
            goto LAB_144a79272;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
            goto LAB_144a79272;
          }
          if (uVar3 == 1) {
            iVar7 = 0;
            uVar4 = 0;
            goto LAB_144a79272;
          }
        }
        uVar3 = uVar3 - 1;
        lVar6 = lVar6 + 2;
      } while( true );
    }
  }
  else if (0 < (int)param_3) {
    if (*(int *)(param_1 + 1) == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = (wchar_t *)*param_1;
    }
    iVar7 = wcsncmp(_Str1,param_2,(ulonglong)param_3);
    uVar4 = CONCAT44(extraout_var,iVar7);
LAB_144a79272:
    return CONCAT71((int7)(uVar4 >> 8),iVar7 == 0);
  }
  return 0;
}



// FUNCTION 144a792bc FUN_144a792bc body=4 status=ok
// SIG undefined FUN_144a792bc(void)

undefined8 FUN_144a792bc(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144a792c0 FUN_144a792c0 body=29 status=ok
// SIG undefined FUN_144a792c0(void)

undefined4 FUN_144a792c0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    do {
      bVar2 = (*(uint *)(param_1 + 8) & param_2) != 0;
      uVar1 = CONCAT31((int3)(*(uint *)(param_1 + 8) >> 8),bVar2);
      if (bVar2) {
        return uVar1;
      }
      param_1 = *(longlong *)(param_1 + 0x20);
    } while (param_1 != 0);
  }
  return uVar1;
}



// FUNCTION 144a792de FUN_144a792de body=159 status=ok
// SIG undefined FUN_144a792de(void)

longlong FUN_144a792de(undefined8 param_1)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dwTlsIndex = DAT_14c760b80;
  local_20 = param_1;
  if (DAT_14c760b80 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar3 = DAT_14c760b80 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar3) {
      DVar2 = DAT_14c760b80;
      DVar1 = DAT_14c760b80;
    }
    DAT_14c760b80 = DVar1;
    UNLOCK();
    if (bVar3) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_141116b2e(&local_20);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong)lpTlsValue + 0x10;
}



// FUNCTION 144a7937e FUN_144a7937e body=228 status=ok
// SIG undefined FUN_144a7937e(void)

longlong FUN_144a7937e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0b430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145892f94;
    local_38 = &LAB_147d6dbf3;
    local_40 = &LAB_1464081e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a79464 FUN_144a79464 body=228 status=ok
// SIG undefined FUN_144a79464(void)

longlong FUN_144a79464(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5e538 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1417c5d06;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417ad04a;
    local_38 = &LAB_1486a7af7;
    local_40 = &LAB_1464e1631;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x420;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7954a FUN_144a7954a body=66 status=ok
// SIG undefined FUN_144a7954a(void)

longlong FUN_144a7954a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar1 != 0) == 0) {
      return lVar1;
    }
  }
  else if (DAT_14c950c29 != 1) {
    return lVar1;
  }
  FUN_1456cec3c(lVar1);
  return lVar1;
}



// FUNCTION 144a7958c FUN_144a7958c body=262 status=ok
// SIG undefined FUN_144a7958c(void)

void FUN_144a7958c(ulonglong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 == 0) || (-1 < *(char *)(param_1 + 0xb8))) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  if (DAT_14cad0160 != DAT_14cad018c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cad0190;
    if (DAT_14cad0198 != (undefined *)0x0) {
      puVar3 = DAT_14cad0198;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while (iVar1 != -1) {
      lVar4 = DAT_14cad0158 + (longlong)iVar1 * 0x20;
      if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar1 * 0x20) == param_1) {
        if (((lVar4 != 0) && (lVar4 != -8)) && ((longlong)*(int *)(lVar4 + 0x10) != 0)) {
          lVar5 = *(longlong *)(lVar4 + 8);
          lVar4 = (longlong)*(int *)(lVar4 + 0x10) << 5;
          do {
            (**(code **)(*param_2 + 0x88))(param_2,lVar5,0,0);
            lVar5 = lVar5 + 0x20;
            lVar4 = lVar4 + -0x20;
          } while (lVar4 != 0);
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144a7968b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  return;
}



// FUNCTION 144a79692 FUN_144a79692 body=228 status=ok
// SIG undefined FUN_144a79692(void)

longlong FUN_144a79692(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0b4f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_147d6e27b;
    local_40 = &LAB_140307be8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b4f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a79778 FUN_144a79778 body=58 status=ok
// SIG undefined FUN_144a79778(void)

void FUN_144a79778(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
LAB_144a7977d:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x000144a7978c;
  goto LAB_144a79797;
code_r0x000144a7978c:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_144a79797:
    if (lVar1 != 0) {
      return;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_144a7977d;
}



// FUNCTION 144a797b2 FUN_144a797b2 body=300 status=ok
// SIG undefined FUN_144a797b2(void)

longlong FUN_144a797b2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c949118 == 0) {
    local_30 = FUN_140631fbe;
    lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar1;
    FUN_1446f470e(local_28,L"Class",1);
    local_48 = &LAB_146891e90;
    local_50 = &LAB_146273097;
    local_60 = L"Engine";
    local_58 = 199;
    local_68 = 0x20;
    local_70 = 0x10000000;
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
    local_40 = &local_30;
    FUN_14574b4b2(lVar1);
    DAT_14c949118 = lVar1;
    uVar2 = FUN_144a7a812();
    lVar1 = DAT_14c949118;
    uVar3 = FUN_1449e2fb2();
    local_78 = L"Class";
    FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return DAT_14c949118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a798df FUN_144a798df body=81 status=ok
// SIG undefined FUN_144a798df(void)

byte FUN_144a798df(ushort param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = DAT_14ca96500;
  if (param_2 != 1) {
    if (param_2 < 3) {
      bVar1 = 0;
    }
    else {
      lVar2 = (ulonglong)param_1 * 0x3c;
      bVar1 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar2) != DAT_14ca81490) && (param_1 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) == 0) {
          bVar1 = 1;
        }
        else {
          bVar1 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar2 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  return bVar1;
}



// FUNCTION 144a79930 FUN_144a79930 body=127 status=ok
// SIG undefined FUN_144a79930(void)

void FUN_144a79930(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x38) == (code *)&LAB_144809cfe) {
    uVar4 = 0;
  }
  else {
    bVar1 = (**(code **)(lVar3 + 0x38))(param_1);
    uVar4 = (uint)bVar1 * 2;
    lVar3 = *param_1;
  }
  if (*(code **)(lVar3 + 0x48) == (code *)&LAB_144809d02) {
    uVar2 = 0;
  }
  else {
    bVar1 = (**(code **)(lVar3 + 0x48))(param_1);
    uVar2 = (uint)bVar1;
  }
  (*(code *)(&PTR_FUN_149eb1110)[uVar2 | uVar4])(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 144a799b0 FUN_144a799b0 body=234 status=ok
// SIG undefined FUN_144a799b0(void)

longlong FUN_144a799b0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac7648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_14789ef1f;
    local_40 = &LAB_1417b008f;
    local_48 = L"Engine";
    local_50 = 0x8000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac7648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a79a9c FUN_144a79a9c body=160 status=ok
// SIG undefined FUN_144a79a9c(void)

double * FUN_144a79a9c(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_1;
  dVar1 = param_1[1];
  dVar3 = 0.0;
  if ((((dVar2 != 0.0) || (NAN(dVar2))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    dVar3 = atan2(dVar1,dVar2);
    dVar3 = dVar3 * 57.29577951308232;
    dVar2 = *param_1;
    dVar1 = param_1[1];
  }
  param_2[1] = dVar3;
  dVar3 = SQRT(dVar2 * dVar2 + dVar1 * dVar1);
  dVar2 = param_1[2];
  dVar1 = 0.0;
  if (((dVar2 != 0.0) || (NAN(dVar2))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
    dVar1 = atan2(dVar2,dVar3);
    dVar1 = dVar1 * 57.29577951308232;
  }
  *param_2 = dVar1;
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 144a79b3c FUN_144a79b3c body=21 status=ok
// SIG undefined FUN_144a79b3c(void)

undefined8 FUN_144a79b3c(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff03;
    return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x02');
  }
  return 0;
}



// FUNCTION 144a79b68 FUN_144a79b68 body=117 status=ok
// SIG undefined FUN_144a79b68(void)

undefined8 * FUN_144a79b68(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_1,puVar2,1);
  }
  return param_1;
}



// FUNCTION 144a79bde FUN_144a79bde body=228 status=ok
// SIG undefined FUN_144a79bde(void)

longlong FUN_144a79bde(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacf098 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_14798da73;
    local_40 = &LAB_1463b047a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xc30;
    FUN_14081cfa3(L"/Script/Engine",L"CameraComponent",&DAT_14cacf098,FUN_1463b0458);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf098;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a79cc3 thunk_FUN_1400020a8 body=5 status=ok
// SIG undefined thunk_FUN_1400020a8(void)

void thunk_FUN_1400020a8(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 144a79cc8 FUN_144a79cc8 body=464 status=ok
// SIG undefined FUN_144a79cc8(void)

longlong FUN_144a79cc8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cae8b20 == 0) {
    local_40 = &local_20;
    local_20 = (code *)&LAB_14355090c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147b8e16d;
    local_50 = (code *)&LAB_140810a38;
    local_58 = L"Engine";
    local_60 = 0x800000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar2 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         (lVar3 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar3 = 0;
      }
    } while ((lVar3 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a79e9a FUN_144a79e9a body=152 status=ok
// SIG undefined FUN_144a79e9a(void)

int FUN_144a79e9a(longlong param_1,byte param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = -1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = param_1;
    }
    uVar6 = (ulonglong)(param_3 + 0x1fU >> 5);
    iVar3 = -0x3e - (param_3 + 0x1fU & 0xffffffe0);
    uVar2 = 0xffffffff >> (-(char)param_3 & 0x1fU);
    do {
      uVar7 = uVar2;
      bVar8 = uVar6 == 0;
      uVar6 = uVar6 - 1;
      if (bVar8) {
        return -1;
      }
      uVar1 = *(uint *)(lVar5 + uVar6 * 4);
      uVar4 = uVar7;
      if (param_2 != 0) {
        uVar4 = 0;
      }
      iVar3 = iVar3 + 0x20;
      uVar2 = 0xffffffff;
    } while ((uVar1 & uVar7) == uVar4);
    uVar6 = (ulonglong)((uVar1 ^ param_2 - 1) & uVar7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar3 = -(((uint)lVar5 ^ 0x3f) + iVar3);
  }
  return iVar3;
}



// FUNCTION 144a79f32 FUN_144a79f32 body=912 status=ok
// SIG undefined FUN_144a79f32(void)

longlong * FUN_144a79f32(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == param_2) goto LAB_144a7a0b5;
  iVar6 = (int)param_2[9];
  plVar7 = param_1 + 8;
  if ((ulonglong)(longlong)iVar6 < 2) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
    if (iVar6 != 0) goto LAB_144a7a0f9;
  }
  else {
    FUN_1446efa72(plVar7,0,iVar6,4);
LAB_144a7a0f9:
    plVar9 = param_1 + 7;
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      plVar9 = (longlong *)*plVar7;
    }
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    memcpy(plVar9,plVar7,(longlong)iVar6 << 2);
  }
  *(int *)(param_1 + 9) = iVar6;
  uVar5 = *(uint *)(param_2 + 1);
  uVar10 = (ulonglong)uVar5;
  plVar7 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar7;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  uVar3 = local_78;
  local_70 = local_50;
  local_6c = local_4c;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  local_90 = param_1;
  if (local_78._4_4_ < (int)local_60[3]) {
    iVar6 = local_78._4_4_;
    local_78 = uVar3;
    do {
      lVar2 = *local_90;
      if (*(longlong *)(lVar2 + 0x38 + (longlong)iVar6 * 0x60) != 0) {
        FUN_1400020a8();
      }
      plVar9 = *(longlong **)(lVar2 + (longlong)iVar6 * 0x60 + 0x28);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
      uVar3 = local_78;
    } while (local_78._4_4_ < (int)local_80[3]);
  }
  local_78 = uVar3;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(uint *)((longlong)param_1 + 0xc) != uVar5) {
    FUN_1448fc38a(param_1,uVar5);
  }
  param_1[6] = 0xffffffff;
  uVar4 = uVar5 + 0x1f & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar8 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar8 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    FUN_1446efbd8(plVar7,0);
  }
  lVar2 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar2 + uVar5;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar2) < uVar5) {
    FUN_14488f93c(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(plVar7,0);
  }
  iVar6 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar6;
  if (iVar6 != 0) {
    plVar9 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    memcpy(plVar7,plVar9,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar10 != 0) {
    lVar2 = *param_1;
    lVar1 = *param_2;
    local_98 = lVar1 + 8;
    local_a0 = lVar2 + 8;
    lVar12 = 0;
    uVar11 = 0;
    do {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar7 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) & 1)
          == 0) {
        *(undefined4 *)(lVar2 + lVar12) = *(undefined4 *)(lVar1 + lVar12);
        *(undefined4 *)(lVar2 + 4 + lVar12) = *(undefined4 *)(lVar1 + 4 + lVar12);
      }
      else {
        *(undefined8 *)(lVar2 + lVar12) = *(undefined8 *)(lVar1 + lVar12);
        FUN_1408b97ec(local_a0 + lVar12,local_98 + lVar12);
        *(undefined8 *)(lVar2 + 0x58 + lVar12) = *(undefined8 *)(lVar1 + 0x58 + lVar12);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x60;
    } while (uVar10 != uVar11);
  }
LAB_144a7a0b5:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144a7a2cc FUN_144a7a2cc body=397 status=ok
// SIG undefined FUN_144a7a2cc(void)

longlong FUN_144a7a2cc(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  uVar1 = *param_2;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  if (*(int *)(param_1 + 0x5a8) != *(int *)(param_1 + 0x5d4)) {
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x5d8;
    if (*(longlong *)(param_1 + 0x5e0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x5e0);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x5e8) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      lVar5 = 0;
      bVar3 = DAT_14c950c29;
      do {
        if ((uVar1 != 0 & bVar3) == 1) {
          FUN_1456cec3c(uVar1);
          bVar3 = DAT_14c950c29;
        }
        lVar7 = (longlong)iVar6 * 0x70;
        uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x5a0) + lVar7);
        if (((bVar3 & 1) != 0) && (uVar2 != 0)) {
          FUN_1456cec3c(uVar2);
          bVar3 = DAT_14c950c29;
        }
        if ((uVar1 != 0 & bVar3) == 1) {
          FUN_1456cec3c(uVar1);
          bVar3 = DAT_14c950c29;
        }
        if (uVar2 == uVar1) {
          lVar5 = *(longlong *)(param_1 + 0x5a0) + lVar7;
          break;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x5a0) + 0x68 + lVar7);
      } while (iVar6 != -1);
      goto LAB_144a7a3d7;
    }
  }
  lVar5 = 0;
LAB_144a7a3d7:
  lVar7 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  return lVar7;
}



// FUNCTION 144a7a45a FUN_144a7a45a body=8 status=ok
// SIG undefined FUN_144a7a45a(void)

undefined8 FUN_144a7a45a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xae8);
}



// FUNCTION 144a7a462 FUN_144a7a462 body=228 status=ok
// SIG undefined FUN_144a7a462(void)

longlong FUN_144a7a462(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb20f48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641d14a;
    local_38 = &LAB_147f14d17;
    local_40 = &LAB_14643168d;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x10a0;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxAICharacter",&DAT_14cb20f48,&DAT_147f14d16);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20f48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7a548 FUN_144a7a548 body=172 status=ok
// SIG undefined FUN_144a7a548(void)

undefined8 FUN_144a7a548(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar3 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  if (lVar3 == 0 && uVar2 == 0xffffffff) {
    return 0;
  }
  if ((int)uVar2 < 0) {
    lVar6 = *param_1;
    uVar7 = *(uint *)(param_1 + 1);
LAB_144a7a572:
    if (uVar7 == 0) goto LAB_144a7a5a8;
    uVar4 = (ulonglong)(int)uVar7;
  }
  else {
    uVar7 = *(uint *)(param_1 + 1);
    uVar4 = (ulonglong)uVar7;
    lVar6 = *param_1;
    if ((int)uVar7 <= (int)uVar2) goto LAB_144a7a572;
    if (*(longlong *)(lVar6 + 0x68 + (ulonglong)uVar2 * 0x88) == lVar3) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  uVar5 = 0;
  do {
    if (*(longlong *)(lVar6 + 0x68 + uVar5) == lVar3) {
      uVar4 = (ulonglong)(uint)((int)(uVar5 >> 3) * -0xf0f0f0f);
      goto LAB_144a7a5b9;
    }
    lVar1 = lVar6 + uVar5;
    uVar5 = uVar5 + 0x88;
  } while (lVar1 + 0x88 != uVar4 * 0x88 + lVar6);
LAB_144a7a5a8:
  uVar4 = 0xffffffff;
LAB_144a7a5b9:
  *(int *)(param_2 + 1) = (int)uVar4;
  return CONCAT71((int7)(uVar4 >> 8),(int)uVar4 != -1);
}



// FUNCTION 144a7a5f4 FUN_144a7a5f4 body=228 status=ok
// SIG undefined FUN_144a7a5f4(void)

longlong FUN_144a7a5f4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbd498 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940982;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146572ba2;
    local_38 = &LAB_148ca13ba;
    local_40 = &LAB_140e51436;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbd498;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7a6da FUN_144a7a6da body=75 status=ok
// SIG undefined FUN_144a7a6da(void)

int FUN_144a7a6da(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < param_2) {
    FUN_147138312(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  FUN_14471858a(lVar2 + (longlong)iVar1 * 4,param_2);
  return iVar1;
}



// FUNCTION 144a7a726 FUN_144a7a726 body=234 status=ok
// SIG undefined FUN_144a7a726(void)

longlong FUN_144a7a726(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad3688 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_147a2f4c9;
    local_40 = &LAB_1400ea6f8;
    local_48 = L"Engine";
    local_50 = 0x200000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad3688;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7a812 FUN_144a7a812 body=227 status=ok
// SIG undefined FUN_144a7a812(void)

longlong FUN_144a7a812(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c951858 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468c5283;
    local_40 = FUN_142809da0;
    local_48 = L"Engine";
    local_50 = 0x400000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c951858;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7a8f6 FUN_144a7a8f6 body=18 status=ok
// SIG undefined FUN_144a7a8f6(void)

undefined8 * FUN_144a7a8f6(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 144a7a908 FUN_144a7a908 body=228 status=ok
// SIG undefined FUN_144a7a908(void)

longlong FUN_144a7a908(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb46ec8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1483e40eb;
    local_40 = &LAB_146486986;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x420;
    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46ec8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7a9ee FUN_144a7a9ee body=997 status=ok
// SIG undefined FUN_144a7a9ee(void)

longlong FUN_144a7a9ee(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  short sVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_88 [32];
  uint local_68;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = param_2 - *(longlong *)(param_1 + 0x28);
  uVar14 = uVar11 >> (*(byte *)(param_1 + 0x10) & 0x3f);
  uVar11 = uVar11 >> (*(byte *)(param_1 + 8) & 0x3f) & *(ulonglong *)(param_1 + 0x18);
  puVar13 = (ulonglong *)
            ((ulonglong)(*(int *)(param_1 + 0x20) - 1U & (uint)uVar14) * 0x20 +
            *(longlong *)(param_1 + 0x68));
  puVar9 = puVar13;
  do {
    sVar10 = (short)param_3;
    local_50 = param_1;
    if (puVar9[1] == 0) {
      *puVar9 = uVar14;
      lVar15 = *(longlong *)(param_1 + 0x30);
      lVar16 = lVar15 * 0x20;
      pvVar6 = VirtualAlloc((LPVOID)0x0,
                            -(ulonglong)DAT_14c841d40 & (lVar16 + (ulonglong)DAT_14c841d40) - 1,
                            0x3000,4);
      if (pvVar6 == (LPVOID)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
                    /* WARNING: Subroutine does not return */
        FUN_1467b7838(lVar16,0);
      }
      puVar9 = puVar9 + 1;
      FUN_1411d03d7(pvVar6,lVar15);
      *puVar9 = (ulonglong)pvVar6;
      uVar14 = uVar11 & 0xffffffff;
      if ((char)param_4 == '\0') {
        if (*(short *)((longlong)pvVar6 + uVar14 * 0x20 + 2) != 0x3941) {
          pwVar12 = 
          L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x. This block is guaranteed to be new yet is it already assigned."
          ;
          uVar8 = 0xae;
          local_68 = param_3 & 0xffff;
          goto LAB_144a7ada7;
        }
      }
      else {
        param_3 = param_3 & 0xffff;
        local_68 = param_3;
        FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x9a,
                      L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x. This block is both preexisting and guaranteed to be new; which makes no sense."
                      ,*(undefined2 *)((longlong)pvVar6 + uVar14 * 0x20 + 2));
        sVar1 = *(short *)((longlong)pvVar6 + uVar14 * 0x20 + 2);
        if (param_3 == 0x3941) {
          if ((sVar1 != 0x17ea) && (sVar1 != -0xce9)) {
            local_68 = 0x3941;
            pwVar12 = 
            L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
            ;
            uVar8 = 0xa0;
LAB_144a7ada7:
            FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",uVar8,pwVar12);
          }
        }
        else if (sVar1 != sVar10) {
          pwVar12 = 
          L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x because this block should be preexisting."
          ;
          uVar8 = 0xa5;
          local_68 = param_3;
          goto LAB_144a7ada7;
        }
      }
      *(short *)((longlong)pvVar6 + uVar14 * 0x20 + 2) = sVar10;
      goto LAB_144a7aa9a;
    }
    if (*puVar9 == uVar14) {
      lVar15 = puVar9[1] + (uVar11 & 0xffffffff) * 0x20;
      if ((char)param_4 == '\0') {
        if (*(short *)(lVar15 + 2) != 0x3941 && *(short *)(lVar15 + 2) != sVar10) {
          pwVar12 = 
          L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x does not have an expected value."
          ;
          uVar8 = 0xb3;
          local_68 = param_3 & 0xffff;
          goto LAB_144a7ace1;
        }
      }
      else {
        sVar1 = *(short *)(lVar15 + 2);
        if ((param_3 & 0xffff) == 0x3941) {
          if ((sVar1 != 0x17ea) && (sVar1 != -0xce9)) {
            local_68 = 0x3941;
            pwVar12 = 
            L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
            ;
            uVar8 = 0xa0;
LAB_144a7ace1:
            FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",uVar8,pwVar12);
          }
        }
        else if (sVar1 != sVar10) {
          pwVar12 = 
          L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x because this block should be preexisting."
          ;
          uVar8 = 0xa5;
          local_68 = param_3 & 0xffff;
          goto LAB_144a7ace1;
        }
      }
      puVar9 = puVar9 + 1;
      *(short *)(lVar15 + 2) = sVar10;
      goto LAB_144a7aa9a;
    }
    puVar9 = (ulonglong *)puVar9[3];
  } while (puVar9 != puVar13);
  puVar7 = *(ulonglong **)(param_1 + 0x70);
  if (puVar7 == (ulonglong *)0x0) {
    puVar7 = VirtualAlloc((LPVOID)0x0,-(ulonglong)DAT_14c841d40 & (ulonglong)DAT_14c841d40 * 2 - 1,
                          0x3000,4);
    *(ulonglong **)(param_1 + 0x70) = puVar7;
    if (0x1f < DAT_14c841d40) {
      uVar3 = DAT_14c841d40 & 0xffffffe0;
      uVar5 = 0;
      do {
        lVar16 = *(longlong *)(param_1 + 0x70);
        lVar15 = lVar16 + uVar5;
        *(undefined8 *)(lVar16 + uVar5) = 0;
        ((undefined8 *)(lVar16 + uVar5))[1] = 0;
        *(longlong *)(lVar16 + 0x10 + uVar5) = lVar15;
        lVar2 = *(longlong *)(lVar16 + 0x10);
        *(longlong *)(lVar16 + 0x10 + uVar5) = lVar2;
        *(longlong *)(lVar16 + 0x18 + uVar5) = lVar16;
        *(longlong *)(lVar2 + 0x18) = lVar15;
        *(longlong *)(lVar16 + 0x10) = lVar15;
        uVar5 = uVar5 + 0x20;
      } while (uVar3 != uVar5);
      puVar7 = *(ulonglong **)(param_1 + 0x70);
    }
  }
  uVar5 = puVar7[2];
  puVar9 = (ulonglong *)puVar7[3];
  puVar9[2] = uVar5;
  *(ulonglong *)(uVar5 + 0x18) = puVar7[3];
  puVar7[2] = (ulonglong)puVar7;
  puVar7[3] = (ulonglong)puVar7;
  puVar4 = (ulonglong *)0x0;
  if (puVar9 != puVar7) {
    puVar4 = puVar9;
  }
  *(ulonglong **)(param_1 + 0x70) = puVar4;
  puVar9 = puVar7 + 1;
  uVar5 = puVar7[1];
  local_58 = uVar5;
  if (uVar5 == 0) {
    uVar5 = FUN_14583583e(&local_50,*(undefined8 *)(param_1 + 0x30));
    *puVar9 = uVar5;
  }
  FUN_1458358b6((uVar11 & 0xffffffff) * 0x20 + uVar5,param_3,param_4,local_58 == 0);
  *puVar7 = uVar14;
  puVar7[2] = puVar13[2];
  puVar7[3] = (ulonglong)puVar13;
  *(ulonglong **)(puVar13[2] + 0x18) = puVar7;
  puVar13[2] = (ulonglong)puVar7;
LAB_144a7aa9a:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (uVar11 & 0xffffffff) * 0x20 + *puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7add4 FUN_144a7add4 body=174 status=ok
// SIG undefined FUN_144a7add4(void)

undefined * FUN_144a7add4(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar1,
                    FUN_140a4831c);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  return &DAT_14c949688;
}



// FUNCTION 144a7ae82 FUN_144a7ae82 body=271 status=ok
// SIG undefined FUN_144a7ae82(void)

undefined8 FUN_144a7ae82(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f6f09d;
    local_40 = &LAB_146201c25;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar1 = DAT_14cb253f8;
  uVar2 = DAT_14cb25be0;
  if ((DAT_14cb253f8[0x22] == 0) &&
     ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), uVar2 = DAT_14cb25be0, plVar1[0x22] == 0)
     ) {
    uVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 144a7af92 FUN_144a7af92 body=20 status=ok
// SIG undefined FUN_144a7af92(void)

undefined8 FUN_144a7af92(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  return 0;
}



// FUNCTION 144a7afa6 FUN_144a7afa6 body=138 status=ok
// SIG undefined FUN_144a7afa6(void)

undefined8 FUN_144a7afa6(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1])) {
    return 0;
  }
  iVar6 = (int)param_1[3];
  iVar3 = (int)param_2[3];
  if (iVar6 == iVar3) {
    if (iVar6 < 2) {
      return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
    }
    uVar4 = param_2[2];
    lVar7 = 0;
    while( true ) {
      uVar1 = *(ushort *)(param_1[2] + lVar7);
      uVar5 = (uint)uVar1;
      uVar2 = *(ushort *)(uVar4 + lVar7);
      uVar8 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_144a7aff6;
        }
        iVar6 = uVar5 - uVar8;
        goto LAB_144a7b023;
      }
      if (uVar1 == 0) break;
LAB_144a7aff6:
      lVar7 = lVar7 + 2;
    }
    iVar6 = 0;
  }
  else {
    uVar4 = (ulonglong)(uint)(iVar3 + iVar6);
    iVar6 = (iVar3 + iVar6) - 1;
  }
LAB_144a7b023:
  return CONCAT71((int7)(uVar4 >> 8),iVar6 == 0);
}



// FUNCTION 144a7b030 FUN_144a7b030 body=16 status=ok
// SIG undefined FUN_144a7b030(void)

void FUN_144a7b030(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  return;
}



// FUNCTION 144a7b040 FUN_144a7b040 body=228 status=ok
// SIG undefined FUN_144a7b040(void)

longlong FUN_144a7b040(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb56270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148630fef;
    local_40 = FUN_1464b6a91;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7b126 FUN_144a7b126 body=246 status=ok
// SIG undefined FUN_144a7b126(void)

int FUN_144a7b126(longlong *param_1,undefined8 param_2,char param_3)

{
  uint *_Dst;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar1 = (int)param_1[1];
  iVar4 = iVar1;
  if (0 < iVar1) {
    uVar5 = 0;
    bVar6 = 0;
    do {
      lVar3 = *param_1;
      _Dst = (uint *)(lVar3 + (longlong)(int)uVar5 * 0x10);
      if (((((*(longlong *)(lVar3 + 8 + (longlong)(int)uVar5 * 0x10) == 0) || (_Dst[1] == 0)) ||
           (uVar2 = *_Dst, (int)uVar2 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar2 ||
           (plVar8 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar8 == (longlong *)0x0)))) ||
         ((*(uint *)(plVar8 + 2) != _Dst[1] ||
          (((*(uint *)(plVar8 + 1) >> 0x1c & 1) != 0 || (*plVar8 == 0)))))) {
        iVar7 = ~uVar5 + iVar4;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar3 + (longlong)(iVar4 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar4 = (int)param_1[1];
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 1) = iVar4;
        bVar6 = 1;
      }
      else {
        uVar5 = uVar5 + 1;
      }
    } while ((int)uVar5 < iVar4);
    if ((bool)(param_3 == '\x01' & bVar6)) {
      FUN_1400bbcfc(param_1);
      iVar4 = (int)param_1[1];
    }
  }
  return iVar1 - iVar4;
}



// FUNCTION 144a7b21c FUN_144a7b21c body=228 status=ok
// SIG undefined FUN_144a7b21c(void)

longlong FUN_144a7b21c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf8960 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_147c91239;
    local_40 = &LAB_1463f790d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3d8;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsVolume",&DAT_14caf8960,&DAT_147c91238);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf8960;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7b302 FUN_144a7b302 body=57 status=ok
// SIG undefined FUN_144a7b302(void)

longlong FUN_144a7b302(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 == 0) {
    if (((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xf50) == 0)) ||
       (*(longlong *)(DAT_14cb0d2b0 + 0xf60) == 0)) {
      return 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x98);
  }
  return lVar1;
}



// FUNCTION 144a7b33c FUN_144a7b33c body=221 status=ok
// SIG undefined FUN_144a7b33c(void)

longlong FUN_144a7b33c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb93bd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a11b2b;
    local_40 = FUN_146573d7d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb93bd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7b41a FUN_144a7b41a body=175 status=ok
// SIG undefined FUN_144a7b41a(void)

undefined8 FUN_144a7b41a(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x03') {
    uVar3 = *param_1;
    uVar4 = 0;
  }
  else {
    puVar2 = &local_48;
    FUN_1400b56fe(puVar2,param_1,3);
    uVar3 = (int)param_2;
    if (local_28 != 0) {
      uVar4 = 0;
      uVar3 = local_48;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT44(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7b4ca FUN_144a7b4ca body=228 status=ok
// SIG undefined FUN_144a7b4ca(void)

longlong FUN_144a7b4ca(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae3d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464f5fc4;
    local_38 = &LAB_148c3dd26;
    local_40 = &LAB_1459673ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1360;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae3d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7b5b0 FUN_144a7b5b0 body=134 status=ok
// SIG undefined FUN_144a7b5b0(void)

void FUN_144a7b5b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar3 + 0xcb0);
  *(uint *)(lVar3 + 0xcb0) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0xcb4) < iVar1 + 1U) {
    FUN_141216e86(iVar1);
  }
  *(undefined8 *)
   (*(longlong *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca8) +
   (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 144a7b636 FUN_144a7b636 body=228 status=ok
// SIG undefined FUN_144a7b636(void)

longlong FUN_144a7b636(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf6930 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1463f2e14;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147c4f169;
    local_40 = &LAB_145fef46b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x870;
    FUN_14081cfa3(L"/Script/Engine",L"ClusterUnionComponent",&DAT_14caf6930,FUN_1463f2dec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf6930;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7b71c FUN_144a7b71c body=61 status=ok
// SIG undefined FUN_144a7b71c(void)

void FUN_144a7b71c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x288);
    *param_2 = *(undefined8 *)(lVar1 + 0x280);
    param_2[1] = uVar2;
    param_2[2] = *(undefined8 *)(lVar1 + 0x290);
    return;
  }
  *param_2 = 0x3ff0000000000000;
  param_2[1] = 0x3ff0000000000000;
  param_2[2] = 0x3ff0000000000000;
  return;
}



// FUNCTION 144a7b75a FUN_144a7b75a body=163 status=ok
// SIG undefined FUN_144a7b75a(void)

ulonglong FUN_144a7b75a(uint param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  uint uVar4;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((char)param_1 != (char)param_2) {
    uVar4 = (param_1 & 0xff) * 0x120;
    if ((*(code **)(&DAT_14c9a8560 + uVar4) == (code *)0x0) ||
       (cVar2 = (**(code **)(&DAT_14c9a8560 + uVar4))(param_2), cVar2 == '\0')) {
      pcVar1 = *(code **)((longlong)&DAT_14c9a8568 + (ulonglong)((param_2 & 0xff) * 0x120));
      if ((pcVar1 == (code *)0x0) || (cVar2 = (*pcVar1)(param_1), cVar2 == '\0')) {
        if ((((&DAT_14c9a8514)[uVar4] & 0x20) == 0) ||
           (((&DAT_14c9a8514)[(param_2 & 0xff) * 0x120] & 0x20) != 0)) {
          uVar3 = 0;
        }
        else if (*(code **)(&DAT_14c9a8588 + uVar4) != (code *)0x0) {
                    /* WARNING: Jumptable at 0x000144a7b7f0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(&DAT_14c9a8588 + uVar4))(param_2);
          return uVar3;
        }
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 144a7b7fe FUN_144a7b7fe body=205 status=ok
// SIG undefined FUN_144a7b7fe(void)

undefined4 * FUN_144a7b7fe(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x04') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,4);
  pppuVar5 = (undefined8 ***)&DAT_14c9ab228;
  if (local_20 != 0) {
    pppuVar5 = local_40;
  }
  *(undefined8 ***)(param_2 + 4) = pppuVar5[2];
  uVar2 = *(undefined4 *)((longlong)pppuVar5 + 4);
  uVar3 = *(undefined4 *)(pppuVar5 + 1);
  uVar4 = *(undefined4 *)((longlong)pppuVar5 + 0xc);
  *param_2 = *(undefined4 *)pppuVar5;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_40;
    if (0x18 < local_28) {
      pppuVar5 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144a7b8cc FUN_144a7b8cc body=227 status=ok
// SIG undefined FUN_144a7b8cc(void)

longlong FUN_144a7b8cc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8b20 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_14355090c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b8e16d;
    local_40 = &LAB_140810a38;
    local_48 = L"Engine";
    local_50 = 0x800000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7b9b0 FUN_144a7b9b0 body=29 status=ok
// SIG undefined FUN_144a7b9b0(void)

longlong FUN_144a7b9b0(longlong *param_1)

{
  if ((char)param_1[1] != '\0') {
    if ((char)param_1[1] != '\x02') {
      return 0;
    }
    param_1 = (longlong *)(*param_1 + 0x30);
  }
  return *param_1;
}



// FUNCTION 144a7b9cd FUN_144a7b9cd body=125 status=ok
// SIG undefined FUN_144a7b9cd(void)

void FUN_144a7b9cd(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cad8310 == 0) {
    FUN_1446f470e(&local_20,L"Renderer",1);
    uVar1 = FUN_144a52528();
    DAT_14cad8310 = FUN_1402c9134(uVar1,local_20,local_14,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7ba4c FUN_144a7ba4c body=310 status=ok
// SIG undefined FUN_144a7ba4c(void)

longlong FUN_144a7ba4c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x430);
  if (lVar3 != 0) {
    if (DAT_14cae9568 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1417de738;
      local_20 = &LAB_145893408;
      local_28 = &LAB_1458cbbd2;
      local_38 = &LAB_147ba21f1;
      local_40 = &LAB_1463e9233;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar3 = *(longlong *)(param_1 + 0x430);
      if (lVar3 == 0) goto LAB_144a7bb7c;
    }
    lVar2 = 0;
    if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_144a7bab2;
    if (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar2 = lVar3;
      }
      goto LAB_144a7bab2;
    }
  }
LAB_144a7bb7c:
  lVar2 = 0;
LAB_144a7bab2:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 144a7bb84 FUN_144a7bb84 body=753 status=ok
// SIG undefined FUN_144a7bb84(void)

longlong * FUN_144a7bb84(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  if (*param_1 != lVar5) {
    param_1[2] = 0;
  }
  *param_1 = lVar5;
  lVar5 = param_2[1];
  if (param_1[1] != lVar5) {
    param_1[2] = 0;
  }
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x809f600) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      FUN_1446f470e(&local_50,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_50);
      _Init_thread_footer(&DAT_14c949388);
    }
    if ((((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
         == DAT_14c949380 + 0x30)) &&
       (plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 != (longlong *)0x0)) {
      lVar4 = *plVar1;
      pcVar2 = *(code **)(lVar4 + 0x108);
      if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 == '\0') goto LAB_144a7bdb1;
        lVar4 = *plVar1;
      }
      pcVar2 = *(code **)(lVar4 + 0x110);
      if (((pcVar2 == (code *)&LAB_144783432 || pcVar2 == (code *)&LAB_144783426) ||
          (lVar4 = (*pcVar2)(plVar1), lVar4 != 0)) && ((*(uint *)(lVar5 + 8) & 0x809f600) == 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c949388) &&
           (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
          FUN_1446f470e(&local_50,L"GbxHasStructType",1);
          DAT_14c949380 = FUN_141473ad5(local_50);
          _Init_thread_footer(&DAT_14c949388);
        }
        if ((((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)
              (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) ==
             DAT_14c949380 + 0x30)) &&
           (plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 != (longlong *)0x0)) {
          lVar4 = *plVar1;
          pcVar2 = *(code **)(lVar4 + 0x108);
          if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
            cVar3 = (*pcVar2)(plVar1);
            if (cVar3 == '\0') goto LAB_144a7bdb1;
            lVar4 = *plVar1;
          }
          pcVar2 = *(code **)(lVar4 + 0x110);
          if ((pcVar2 == (code *)&LAB_144783432 || pcVar2 == (code *)&LAB_144783426) ||
             (lVar4 = (*pcVar2)(plVar1), lVar4 != 0)) goto LAB_144a7bd41;
        }
      }
    }
  }
LAB_144a7bdb1:
  lVar5 = 0;
LAB_144a7bd41:
  param_1[1] = lVar5;
  param_1[2] = param_2[2];
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144a7be76 FUN_144a7be76 body=82 status=ok
// SIG undefined FUN_144a7be76(void)

undefined8 FUN_144a7be76(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x4c) == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(lVar2 + 0x48);
  uVar3 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar4 + 2) != *(int *)(lVar2 + 0x4c)) {
      return 0;
    }
    if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar3 = *puVar4;
  }
  return uVar3;
}



// FUNCTION 144a7bec8 FUN_144a7bec8 body=107 status=ok
// SIG undefined FUN_144a7bec8(void)

longlong * FUN_144a7bec8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x118);
    if (plVar3 == (longlong *)0x0) {
      *param_2 = param_1;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = param_1;
      param_2[1] = (longlong)plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 144a7bf34 FUN_144a7bf34 body=314 status=ok
// SIG undefined FUN_144a7bf34(void)

void FUN_144a7bf34(char *param_1,undefined8 *param_2,longlong *param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  if (*param_1 == '\x03') {
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  cVar2 = *param_4;
  lVar7 = *param_3;
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x18) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = iVar6;
  param_1[0x20] = cVar2;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 144a7c06e FUN_144a7c06e body=21 status=ok
// SIG undefined FUN_144a7c06e(void)

undefined8 FUN_144a7c06e(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    return CONCAT71((int7)((ulonglong)pbVar1 >> 8),(~*pbVar1 & 3) == 0);
  }
  return 0;
}



// FUNCTION 144a7c084 FUN_144a7c084 body=25 status=ok
// SIG undefined FUN_144a7c084(void)

void FUN_144a7c084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eacb10;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  return;
}



// FUNCTION 144a7c09e FUN_144a7c09e body=388 status=ok
// SIG undefined FUN_144a7c09e(void)

byte * FUN_144a7c09e(byte *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  bool bVar6;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  bVar3 = DAT_14c872ba8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = DAT_14c872ba8 ^ 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (bVar3 == 0) {
    uVar2 = *param_2;
    if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    dwTlsIndex = DAT_14c75eca8;
    if (DAT_14c75eca8 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar6 = DAT_14c75eca8 != 0xffffffff;
      DVar4 = dwTlsIndex;
      if (bVar6) {
        DVar5 = DAT_14c75eca8;
        DVar4 = DAT_14c75eca8;
      }
      DAT_14c75eca8 = DVar4;
      UNLOCK();
      if (bVar6) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_1456d0794(&local_39);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    if ((0 < *(int *)((longlong)lpTlsValue + 0x18)) || (0 < *(int *)((longlong)lpTlsValue + 0x28)))
    {
      *(ulonglong *)(param_1 + 8) = uVar2;
      if (((uVar2 & 1) != 0) && (((uVar2 & 0xfffffffffffffffe) != 0 && (DAT_14c950c29 == '\x01'))))
      {
        FUN_1456cec3c();
      }
      iVar1 = *(int *)((longlong)lpTlsValue + 0x38);
      *(uint *)((longlong)lpTlsValue + 0x38) = iVar1 + 1U;
      if (*(uint *)((longlong)lpTlsValue + 0x3c) < iVar1 + 1U) {
        FUN_14124d582((longlong *)((longlong)lpTlsValue + 0x30),iVar1);
      }
      *(ulonglong *)(*(longlong *)((longlong)lpTlsValue + 0x30) + (longlong)iVar1 * 8) = uVar2;
      if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01'))
      {
        FUN_1456cec3c(uVar2 & 0xfffffffffffffffe);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144a7c224 FUN_144a7c224 body=658 status=ok
// SIG undefined FUN_144a7c224(void)

longlong FUN_144a7c224(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *(longlong *)(param_1 + 0x13c8);
  if (lVar6 != 0) {
    puVar1 = (uint *)(lVar6 + 0x68);
    if (((((*(int *)(lVar6 + 0x6c) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
         (DAT_14c9647dc <= (int)uVar2)) ||
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar6 + 0x6c))))) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar5 = *plVar7, lVar5 == 0)))) {
      if (*(longlong *)(lVar6 + 0x70) != 0) {
        lVar5 = FUN_140007850();
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar5 == 0) || (cVar3 == '\0')) {
          if (lVar5 == 0) {
            *(undefined8 *)(lVar6 + 0x68) = 0;
            goto LAB_144a7c30e;
          }
          uVar2 = *(uint *)(lVar5 + 0xc);
          *puVar1 = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar4 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar4 = *(int *)(lVar9 + 0x10);
            bVar10 = iVar4 == 0;
            if (bVar10) {
              *(int *)(lVar9 + 0x10) = iVar8;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar10) {
              iVar4 = iVar8;
            }
          }
          *(int *)(lVar6 + 0x6c) = iVar4;
        }
        else {
          uVar2 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(puVar1,lVar5);
          }
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_144a7c2a8;
      }
    }
    else {
LAB_144a7c2a8:
      if (DAT_14cb1b878 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_140e9e4fe;
        local_58 = &LAB_147e2d7c3;
        local_60 = FUN_140f80add;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x438;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavAnimData",&DAT_14cb1b878,FUN_14641c7a8);
      }
      if ((*(int *)(DAT_14cb1b878 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb1b878 + 0x38) * 8) == DAT_14cb1b878 + 0x30)) {
        lVar6 = 0;
        if (*(char *)(lVar5 + 0x1b9) == '\0') {
          lVar6 = lVar5;
        }
        goto LAB_144a7c2e0;
      }
    }
  }
LAB_144a7c30e:
  lVar6 = 0;
LAB_144a7c2e0:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 144a7c4b8 FUN_144a7c4b8 body=109 status=ok
// SIG undefined FUN_144a7c4b8(void)

undefined8 * FUN_144a7c4b8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 144a7c526 FUN_144a7c526 body=177 status=ok
// SIG undefined FUN_144a7c526(void)

bool FUN_144a7c526(uint *param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((param_1[2] & 1) != 0) && (param_1[1] != 0)) {
    uVar2 = *param_1;
    if ((int)uVar2 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return false;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar3;
      }
      else {
        lVar5 = 0;
      }
      lVar4 = DAT_14c997cc0;
      if (DAT_14c997cc0 == 0) {
        plVar3 = (longlong *)FUN_145a62958();
        lVar4 = plVar3[0x22];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 1000))(plVar3);
          lVar4 = plVar3[0x22];
        }
      }
      cVar1 = *(char *)(lVar4 + 0x75);
      if (*(char *)(lVar5 + 0x31) != '\0') {
        cVar1 = *(char *)(lVar5 + 0x31);
      }
      return cVar1 != '\x03';
    }
  }
  return false;
}



// FUNCTION 144a7c5d8 FUN_144a7c5d8 body=30 status=ok
// SIG undefined FUN_144a7c5d8(void)

void FUN_144a7c5d8(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_2;
  *(undefined2 *)((longlong)param_1 + 0xd) = 1;
  return;
}



// FUNCTION 144a7c5f6 FUN_144a7c5f6 body=121 status=ok
// SIG undefined FUN_144a7c5f6(void)

bool FUN_144a7c5f6(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  param_1 = (longlong *)*param_1;
  pcVar1 = *(code **)(*param_1 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar2 = param_1 + 3;
    if (param_1[5] != 0) {
      plVar2 = (longlong *)(param_1[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar2 = param_1 + 2;
  }
  else {
    plVar2 = (longlong *)(*pcVar1)(param_1);
  }
  return (int)plVar2[1] < 2;
}



// FUNCTION 144a7c670 FUN_144a7c670 body=390 status=ok
// SIG undefined FUN_144a7c670(void)

void FUN_144a7c670(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  longlong lVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = 0;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2b0), plVar1 != (longlong *)0x0)) {
    if (*(code **)(*plVar1 + 0x660) != FUN_1449fb17e) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(0);
    }
    if ((*(byte *)((longlong)plVar1 + 0x39e) & 1) == 0) {
      if ((*(byte *)((longlong)plVar1 + 0x39e) & 2) == 0) {
        if (DAT_14caf84d0 == (longlong *)0x0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_145a62952;
          local_48 = &LAB_147c8cd45;
          local_50 = &LAB_1461468ae;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10000006;
          local_70 = 8;
          local_78 = 0x218;
          FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
        }
        plVar2 = DAT_14caf84d0;
        lVar4 = DAT_14caf84d0[0x22];
        if (lVar4 == 0) {
          (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
          lVar4 = plVar2[0x22];
        }
        puVar3 = (undefined4 *)(lVar4 + 0x38);
      }
      else {
        puVar3 = (undefined4 *)((longlong)plVar1 + 0x41c);
      }
      uVar5 = *puVar3;
      *(undefined4 *)(plVar1 + 0x83) = uVar5;
    }
    else {
      uVar5 = (undefined4)plVar1[0x83];
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 144a7c80a FUN_144a7c80a body=228 status=ok
// SIG undefined FUN_144a7c80a(void)

longlong FUN_144a7c80a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb652c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148715fe1;
    local_40 = FUN_146508b0f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb652c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7c8f0 FUN_144a7c8f0 body=5 status=ok
// SIG undefined FUN_144a7c8f0(void)

longlong FUN_144a7c8f0(longlong param_1)

{
  return param_1 + 0x38;
}



// FUNCTION 144a7c8f6 FUN_144a7c8f6 body=8 status=ok
// SIG undefined FUN_144a7c8f6(void)

undefined8 FUN_144a7c8f6(void)

{
  return DAT_14cb259f8;
}



// FUNCTION 144a7c8fe FUN_144a7c8fe body=140 status=ok
// SIG undefined FUN_144a7c8fe(void)

void FUN_144a7c8fe(int *param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (((*param_1 != 0) && (iVar1 = param_1[1], iVar1 != 0)) && (*param_1 != DAT_14c948000)) {
    if ((iVar1 < 2) && (param_1[9] < 1)) {
      param_1 = param_1 + 2;
    }
    else {
      param_1 = *(int **)(param_1 + 6);
    }
    if (iVar1 == 1 && 0 < param_3) {
      piVar3 = (int *)&DAT_14c948618;
      if (param_4 == 1) {
        piVar3 = param_1;
      }
      *(int *)(param_2 + 1) = piVar3[2];
      uVar2 = *(undefined8 *)piVar3;
      goto LAB_144a7c954;
    }
    if (param_3 < iVar1) {
      *(int *)(param_2 + 1) = param_1[(longlong)param_3 * 3 + 2];
      uVar2 = *(undefined8 *)(param_1 + (longlong)param_3 * 3);
      goto LAB_144a7c954;
    }
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  uVar2 = DAT_14c948618;
LAB_144a7c954:
  *param_2 = uVar2;
  return;
}



// FUNCTION 144a7c98a FUN_144a7c98a body=57 status=ok
// SIG undefined FUN_144a7c98a(void)

void FUN_144a7c98a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62c70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62c70 = FUN_140002ddd(FUN_1464faa90,uVar1,L"GbxRotationContextualOverride");
  }
  return;
}



// FUNCTION 144a7c9c3 FUN_144a7c9c3 body=105 status=ok
// SIG undefined FUN_144a7c9c3(void)

undefined8 FUN_144a7c9c3(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca43230;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar6));
}



// FUNCTION 144a7ca2c FUN_144a7ca2c body=106 status=ok
// SIG undefined FUN_144a7ca2c(void)

void FUN_144a7ca2c(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0xc;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x6c);
  lVar2 = 0x6c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xcc);
  lVar2 = 0xcc;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 300);
  lVar2 = 300;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x18c);
  memset(param_1,0,0x210);
  return;
}



// FUNCTION 144a7ca96 FUN_144a7ca96 body=53 status=ok
// SIG undefined FUN_144a7ca96(void)

undefined8 FUN_144a7ca96(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(*param_1 + 0x10);
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_2 + 0x38);
    if (iVar1 <= *(int *)(lVar2 + 0x38)) {
      return CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                      *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
                      param_2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 144a7cacc FUN_144a7cacc body=228 status=ok
// SIG undefined FUN_144a7cacc(void)

longlong FUN_144a7cacc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacf818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b216c;
    local_38 = &LAB_1479977e3;
    local_40 = &LAB_1463b2171;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x750;
    FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7cbb2 FUN_144a7cbb2 body=234 status=ok
// SIG undefined FUN_144a7cbb2(void)

longlong FUN_144a7cbb2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf64b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147c45ce0;
    local_40 = &LAB_1463f1ff4;
    local_48 = &DAT_149e063b2;
    local_50 = 0x4000000000;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf64b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7cc9e FUN_144a7cc9e body=291 status=ok
// SIG undefined FUN_144a7cc9e(void)

int FUN_144a7cc9e(longlong *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    iVar7 = 0;
  }
  else {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    piVar12 = (int *)((longlong)plVar8 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    iVar7 = 0;
    do {
      iVar3 = *piVar12;
      lVar9 = (longlong)iVar3;
      if (lVar9 == -1) {
        return iVar7;
      }
      piVar1 = (int *)(*param_1 + lVar9 * 0xc);
      iVar4 = *piVar1;
      if (iVar4 == param_2) {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = param_1 + 7;
        }
        iVar11 = *(int *)((longlong)plVar8 + (longlong)piVar1[2] * 4);
        if (iVar11 == iVar3) {
          piVar13 = (int *)((longlong)plVar8 + (longlong)piVar1[2] * 4);
        }
        else {
          do {
            piVar13 = (int *)(*param_1 + (longlong)iVar11 * 0xc + 4);
            iVar11 = *piVar13;
          } while (iVar11 != iVar3);
        }
        *piVar13 = piVar1[1];
        lVar5 = *param_1;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar5 + (longlong)(int)param_1[6] * 0xc) = iVar3;
        }
        *(undefined4 *)(lVar5 + lVar9 * 0xc) = 0xffffffff;
        uVar10 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar10 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar5 + lVar9 * 0xc + 4) = uVar10;
        *(int *)(param_1 + 6) = iVar3;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = param_1 + 2;
        }
        iVar11 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar11 = iVar3;
        }
        bVar6 = (byte)iVar3 & 0x1f;
        puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        iVar7 = iVar7 + 1;
      }
      else {
        piVar12 = piVar1 + 1;
      }
    } while (iVar4 != param_2);
  }
  return iVar7;
}



// FUNCTION 144a7cdc2 FUN_144a7cdc2 body=20 status=ok
// SIG undefined FUN_144a7cdc2(void)

undefined8 * FUN_144a7cdc2(undefined8 *param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined1 auStack_998 [32];
  undefined1 *puStack_978;
  code *pcStack_970;
  undefined1 **ppuStack_968;
  int iStack_95c;
  uint uStack_958;
  int iStack_954;
  undefined8 uStack_950;
  uint uStack_948;
  uint uStack_944;
  undefined8 uStack_940;
  uint auStack_938 [2];
  undefined8 *puStack_930;
  undefined8 uStack_928;
  undefined1 auStack_918 [192];
  undefined1 *puStack_858;
  ulonglong uStack_850;
  undefined8 uStack_848;
  int iStack_840;
  ulonglong uStack_48;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    return &DAT_14c9a1308;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_998;
  if ((*pbVar1 & 2) == 0) {
    plVar23 = &DAT_14c9a1288;
  }
  else {
    plVar23 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  uStack_948 = 0;
  uStack_944 = 0;
  uStack_940 = 0;
  auStack_938[0] = 0;
  puStack_930 = (undefined8 *)0x0;
  uStack_928 = 0;
  lVar15 = *param_2;
  puStack_858 = (undefined1 *)0x0;
  uStack_850 = 0x1000000000;
  ppuStack_968 = &puStack_978;
  pcStack_970 = FUN_1456ab7da;
  puStack_978 = auStack_918;
  if (DAT_14c947fe0 == 0) {
    lVar19 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar19);
    DAT_14c947fe0 = lVar19;
  }
  lVar19 = DAT_14c947fe0;
  uStack_950 = lVar15;
  if (lVar15 == 0) {
    if (pcStack_970 == FUN_1456ab7da) {
      puVar21 = *ppuStack_968;
      iVar16 = *(int *)(puVar21 + 200);
      lVar15 = (longlong)iVar16;
      *(uint *)(puVar21 + 200) = iVar16 + 1U;
      if (*(uint *)(puVar21 + 0xcc) < iVar16 + 1U) {
        FUN_1456b1fa2(puVar21,iVar16);
      }
      puVar7 = *(undefined1 **)(puVar21 + 0xc0);
      if (*(undefined1 **)(puVar21 + 0xc0) == (undefined1 *)0x0) {
        puVar7 = puVar21;
      }
      *(undefined4 *)(puVar7 + lVar15 * 0xc + 8) = DAT_14c948620;
      uVar14 = DAT_14c948618;
LAB_1446e630f:
      *(undefined8 *)(puVar7 + lVar15 * 0xc) = uVar14;
    }
    else {
LAB_1446e6912:
      (*pcStack_970)();
    }
  }
  else {
    SRWLock = (PSRWLOCK)(DAT_14c947fe0 + 0x50);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(lVar19 + 0x60) != *(int *)(lVar19 + 0x8c)) {
      uVar10 = (uint)lVar15;
      uVar5 = (uint)((ulonglong)lVar15 >> 0x10);
      iVar16 = (int)((ulonglong)lVar15 >> 0x20);
      lVar6 = lVar19 + 0x90;
      if (*(longlong *)(lVar19 + 0x98) != 0) {
        lVar6 = *(longlong *)(lVar19 + 0x98);
      }
      iVar9 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar19 + 0xa0) - 1U &
                               iVar16 + (uVar10 << 0x10 | uVar10 & 0xffff) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + ((uVar10 & 0xffff) >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          plVar11 = (longlong *)(*(longlong *)(lVar19 + 0x58) + (longlong)iVar9 * 0x14);
          if (*plVar11 == lVar15) {
            if ((plVar11 != (longlong *)0x0) && (plVar11 + 1 != (longlong *)0x0)) {
              iVar9 = (int)plVar11[1];
              ReleaseSRWLockShared(SRWLock);
              if (iVar9 == 0) goto LAB_1446e622b;
              iStack_95c = iVar9;
              uStack_958 = uVar10;
              iStack_954 = iVar16;
              if (pcStack_970 != FUN_1456ab7da) {
                if (pcStack_970 != FUN_1400018c6) goto LAB_1446e6912;
                iStack_840 = iVar16;
                uStack_848 = CONCAT44(uVar10,iVar9);
                iVar16 = *(int *)*ppuStack_968;
                *(int *)*ppuStack_968 = iVar16 + 1;
                puVar8 = (undefined8 *)ppuStack_968[1];
                puVar12 = &DAT_14c948618;
                if (iVar16 < 1) {
                  puVar12 = &uStack_848;
                }
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
                *puVar8 = *puVar12;
                goto LAB_1446e6313;
              }
              puVar21 = *ppuStack_968;
              iVar16 = *(int *)(puVar21 + 200);
              lVar15 = (longlong)iVar16;
              *(uint *)(puVar21 + 200) = iVar16 + 1U;
              if (*(uint *)(puVar21 + 0xcc) < iVar16 + 1U) {
                FUN_1456b1fa2(puVar21,iVar16);
              }
              puVar7 = *(undefined1 **)(puVar21 + 0xc0);
              if (*(undefined1 **)(puVar21 + 0xc0) == (undefined1 *)0x0) {
                puVar7 = puVar21;
              }
              *(int *)(puVar7 + lVar15 * 0xc + 8) = iStack_954;
              uVar14 = CONCAT44(uStack_958,iStack_95c);
              goto LAB_1446e630f;
            }
            break;
          }
          iVar9 = *(int *)((longlong)plVar11 + 0xc);
        } while (iVar9 != -1);
      }
    }
    ReleaseSRWLockShared(SRWLock);
LAB_1446e622b:
    uVar5 = (uint)uStack_950;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if ((*(byte *)((&DAT_14c87eb10)[uVar5 >> 0x10] + (ulonglong)(uVar5 & 0xffff) * 2) & 1) == 0) {
      FUN_140024b62(&uStack_950,&uStack_848);
      FUN_1446ded13(lVar19,&uStack_848,uStack_950._4_4_);
    }
    else {
      FUN_1427922d0(&uStack_950,&uStack_848);
      FUN_1446df218(lVar19,&uStack_848,uStack_950._4_4_);
    }
  }
LAB_1446e6313:
  uVar4 = uStack_850;
  uVar22 = uStack_928;
  uVar5 = (uint)uStack_850;
  uVar18 = (ulonglong)uStack_944;
  if ((int)uStack_944 < (int)(uint)uStack_850) {
    bVar3 = 0 < uStack_928._4_4_;
    bVar2 = 1 < (int)uStack_944;
    if ((int)(uint)uStack_850 < 2) {
      if (bVar2 || bVar3) {
        FUN_145741a94(&puStack_930,uStack_850 & 0xffffffff,
                      CONCAT71((uint7)(uint3)(uStack_944 >> 8),1));
        if (uStack_928._4_4_ != (uint)uStack_928) {
          FUN_1446dda88(&puStack_930);
        }
      }
    }
    else {
      uVar10 = (uint)uStack_928;
      lVar15 = (longlong)(int)(uint)uStack_928;
      if ((int)(uint)uStack_928 < (int)(uint)uStack_850) {
        uVar13 = (uint)uStack_850 - (uint)uStack_928;
        uStack_928 = CONCAT44(uStack_928._4_4_,(uint)uStack_850);
        if (uStack_928._4_4_ - uVar10 < uVar13) {
          FUN_1446dd912(&puStack_930,uVar22 & 0xffffffff);
        }
        FUN_1446dd7a8(lVar15 * 0xc + (longlong)puStack_930,uVar13);
      }
      else if ((uint)uStack_850 < (uint)uStack_928) {
        uStack_928 = CONCAT44(uStack_928._4_4_,(uint)uStack_850);
        FUN_140c05acc(&puStack_930);
      }
      if (uStack_928._4_4_ != (uint)uStack_928) {
        FUN_1446dda88(&puStack_930);
      }
      if ((!bVar2 && !bVar3) && 0 < (int)uStack_944) {
        lVar15 = 0;
        lVar19 = 0;
        do {
          *(undefined4 *)((longlong)puStack_930 + lVar15 + 8) =
               *(undefined4 *)((longlong)auStack_938 + lVar15);
          *(undefined8 *)((longlong)puStack_930 + lVar15) =
               *(undefined8 *)((longlong)auStack_938 + lVar15 + -8);
          lVar19 = lVar19 + 1;
          lVar15 = lVar15 + 0xc;
        } while (lVar19 < (int)uStack_944);
      }
    }
    uStack_944 = uVar5;
    uVar18 = uVar4 & 0xffffffff;
  }
  if (0 < (int)(uint)uStack_850) {
    uVar22 = 0;
    do {
      uVar4 = uStack_928;
      puVar21 = puStack_858;
      if (puStack_858 == (undefined1 *)0x0) {
        puVar21 = auStack_918;
      }
      uVar18 = uVar22 + 1;
      if ((longlong)(int)uStack_944 <= (longlong)uVar22) {
        bVar3 = 0 < uStack_928._4_4_;
        bVar2 = 1 < (int)uStack_944;
        uVar5 = (uint)uVar18;
        if (uVar22 == 0) {
          if (bVar2 || bVar3) {
            FUN_145741a94(&puStack_930,1,CONCAT71((int7)(int3)(uStack_944 >> 8),1));
            if (uStack_928._4_4_ != (uint)uStack_928) {
              FUN_1446dda88();
            }
          }
        }
        else {
          iVar16 = (uint)uStack_928;
          lVar15 = (longlong)(int)(uint)uStack_928;
          if ((longlong)uVar22 < lVar15) {
            if (uVar18 < (uStack_928 & 0xffffffff)) {
              uStack_928 = CONCAT44(uStack_928._4_4_,uVar5);
              FUN_140c05acc(&puStack_930);
            }
          }
          else {
            uStack_928 = CONCAT44(uStack_928._4_4_,uVar5);
            uVar10 = uVar5 - iVar16;
            if ((uint)(uStack_928._4_4_ - iVar16) < uVar10) {
              FUN_1446dd912(&puStack_930,uVar4 & 0xffffffff);
            }
            FUN_1446dd7a8(lVar15 * 0xc + (longlong)puStack_930,uVar10);
          }
          if (uStack_928._4_4_ != (uint)uStack_928) {
            FUN_1446dda88(&puStack_930);
          }
          if ((!bVar2 && !bVar3) && 0 < (int)uStack_944) {
            lVar15 = 0;
            lVar19 = 0;
            do {
              *(undefined4 *)((longlong)puStack_930 + lVar15 + 8) =
                   *(undefined4 *)((longlong)auStack_938 + lVar15);
              *(undefined8 *)((longlong)puStack_930 + lVar15) =
                   *(undefined8 *)((longlong)auStack_938 + lVar15 + -8);
              lVar19 = lVar19 + 1;
              lVar15 = lVar15 + 0xc;
            } while (lVar19 < (int)uStack_944);
          }
        }
        uStack_944 = uVar5;
      }
      puVar8 = &uStack_940;
      if (1 < (int)uStack_944) {
        puVar8 = puStack_930;
      }
      if (0 < uStack_928._4_4_) {
        puVar8 = puStack_930;
      }
      *(undefined4 *)((longlong)puVar8 + uVar22 * 0xc + 8) =
           *(undefined4 *)((longlong)(puVar21 + uVar22 * 0xc) + 8);
      *(undefined8 *)((longlong)puVar8 + uVar22 * 0xc) = *(undefined8 *)(puVar21 + uVar22 * 0xc);
      uVar22 = uVar18;
    } while ((longlong)uVar18 < (longlong)(int)(uint)uStack_850);
    uVar18 = (ulonglong)uStack_944;
  }
  if ((int)uVar18 == 1) {
    if ((uint)uStack_940 != 0) {
      uVar5 = (uint)uStack_940;
      if (auStack_938[0] != 0) {
        uVar5 = auStack_938[0] >> 0xd ^ (uint)uStack_940 - auStack_938[0];
        uVar13 = uVar5 << 8 ^ (-0x61c88647 - auStack_938[0]) - uVar5;
        uVar17 = uVar13 >> 0xd ^ (auStack_938[0] - uVar5) - uVar13;
        uVar10 = uVar17 >> 0xc ^ (uVar5 - uVar13) - uVar17;
        uVar5 = uVar10 << 0x10 ^ (uVar13 - uVar17) - uVar10;
        uVar13 = uVar5 >> 5 ^ (uVar17 - uVar10) - uVar5;
        uVar10 = uVar13 >> 3 ^ (uVar10 - uVar5) - uVar13;
        uVar5 = uVar10 << 10 ^ (uVar5 - uVar13) - uVar10;
        uVar5 = uVar5 >> 0xf ^ uVar13 - (uVar10 + uVar5);
      }
      goto LAB_1446e642c;
    }
  }
  else if (1 < (int)uVar18) {
    lVar15 = 0;
    uVar5 = 0;
    do {
      uVar10 = *(uint *)((longlong)puStack_930 + lVar15);
      uVar13 = 0;
      if ((uVar10 != 0) &&
         (uVar17 = *(uint *)((longlong)puStack_930 + lVar15 + 8), uVar13 = uVar10, uVar17 != 0)) {
        uVar13 = uVar17 >> 0xd ^ uVar10 - uVar17;
        uVar20 = uVar13 << 8 ^ (-0x61c88647 - uVar17) - uVar13;
        uVar10 = uVar20 >> 0xd ^ (uVar17 - uVar13) - uVar20;
        uVar13 = uVar10 >> 0xc ^ (uVar13 - uVar20) - uVar10;
        uVar20 = uVar13 << 0x10 ^ (uVar20 - uVar10) - uVar13;
        uVar17 = uVar20 >> 5 ^ (uVar10 - uVar13) - uVar20;
        uVar10 = uVar17 >> 3 ^ (uVar13 - uVar20) - uVar17;
        uVar13 = uVar10 << 10 ^ (uVar20 - uVar17) - uVar10;
        uVar13 = uVar13 >> 0xf ^ uVar17 - (uVar10 + uVar13);
      }
      if (uVar13 == 0 && uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar10 = uVar13 >> 0xd ^ uVar5 - uVar13;
        uVar5 = uVar10 << 8 ^ (-0x61c88647 - uVar13) - uVar10;
        uVar17 = uVar5 >> 0xd ^ (uVar13 - uVar10) - uVar5;
        uVar10 = uVar17 >> 0xc ^ (uVar10 - uVar5) - uVar17;
        uVar13 = uVar10 << 0x10 ^ (uVar5 - uVar17) - uVar10;
        uVar5 = uVar13 >> 5 ^ (uVar17 - uVar10) - uVar13;
        uVar17 = uVar5 >> 3 ^ (uVar10 - uVar13) - uVar5;
        uVar10 = uVar17 << 10 ^ (uVar13 - uVar5) - uVar17;
        uVar5 = uVar10 >> 0xf ^ uVar5 - (uVar17 + uVar10);
      }
      lVar15 = lVar15 + 0xc;
    } while (uVar18 * 0xc != lVar15);
    goto LAB_1446e642c;
  }
  uVar5 = 0;
LAB_1446e642c:
  _uStack_948 = CONCAT44(uStack_944,uVar5);
  if (puStack_858 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((int)plVar23[2] != *(int *)((longlong)plVar23 + 0x3c)) {
    plVar11 = plVar23 + 8;
    if ((longlong *)plVar23[9] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar23[9];
    }
    iVar16 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar23[10] - 1U & uStack_948) * 4);
    if (iVar16 != -1) {
      do {
        lVar15 = *plVar23 + (longlong)iVar16 * 0x40;
        if (*(uint *)(*plVar23 + (longlong)iVar16 * 0x40) == uStack_948) {
          if (puStack_930 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          puVar8 = &DAT_14c9a1308;
          if (((lVar15 != 0) && (*(byte **)(lVar15 + 0x28) != (byte *)0x0)) &&
             ((**(byte **)(lVar15 + 0x28) & 0x40) == 0)) {
            puVar8 = (undefined8 *)(lVar15 + 0x28);
          }
          goto LAB_1446e64d0;
        }
        iVar16 = *(int *)(lVar15 + 0x38);
      } while (iVar16 != -1);
    }
  }
  if (puStack_930 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  puVar8 = &DAT_14c9a1308;
LAB_1446e64d0:
  if ((uStack_48 ^ (ulonglong)auStack_998) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 144a7cdd6 FUN_144a7cdd6 body=34 status=ok
// SIG undefined FUN_144a7cdd6(void)

longlong FUN_144a7cdd6(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
    if (*(longlong *)(pbVar1 + 8) != 0) {
      param_2 = *(longlong *)(pbVar1 + 8);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 144a7cdf8 FUN_144a7cdf8 body=139 status=ok
// SIG undefined FUN_144a7cdf8(void)

bool FUN_144a7cdf8(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*param_1 + 0x270);
  if (pcVar4 == (code *)&LAB_1447f82f4) {
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 0x408) == (code *)&LAB_14497e176) {
        uVar3 = (uint)*(byte *)(plVar1 + 0x2b);
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x408))(plVar1);
      }
      goto LAB_144a7ce38;
    }
    plVar1 = (longlong *)param_1[8];
    pcVar4 = *(code **)(*plVar1 + 0x408);
    if (pcVar4 == (code *)&LAB_14470b702) {
      bVar2 = *(byte *)((longlong)plVar1 + 0x129);
      if (bVar2 == 1) {
        bVar2 = ~*(byte *)((longlong)plVar1 + 0x1d6) & 1;
      }
      uVar3 = (uint)bVar2;
      goto LAB_144a7ce38;
    }
  }
  uVar3 = (*pcVar4)();
LAB_144a7ce38:
  return uVar3 < 2;
}



// FUNCTION 144a7ce84 FUN_144a7ce84 body=228 status=ok
// SIG undefined FUN_144a7ce84(void)

longlong FUN_144a7ce84(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa6dc0 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1432469d6;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145920864;
    local_38 = &LAB_14746b954;
    local_40 = &LAB_14632611e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x8a8;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeProxy",&DAT_14caa6dc0,FUN_1463260fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa6dc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7cf6a FUN_144a7cf6a body=228 status=ok
// SIG undefined FUN_144a7cf6a(void)

longlong FUN_144a7cf6a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3a798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a7874c;
    local_38 = &LAB_14811919b;
    local_40 = FUN_14646e15f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterface",&DAT_14cb3a798,&DAT_14811919a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3a798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7d050 FUN_144a7d050 body=228 status=ok
// SIG undefined FUN_144a7d050(void)

longlong FUN_144a7d050(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb939a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940982;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c26;
    local_38 = &LAB_148a0db91;
    local_40 = &LAB_146572ba7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xdd8;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb939a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7d136 FUN_144a7d136 body=221 status=ok
// SIG undefined FUN_144a7d136(void)

longlong FUN_144a7d136(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb907b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489c8acb;
    local_40 = &LAB_146027b0e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb907b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7d214 FUN_144a7d214 body=325 status=ok
// SIG undefined FUN_144a7d214(void)

void FUN_144a7d214(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a7d35a FUN_144a7d35a body=21 status=ok
// SIG undefined FUN_144a7d35a(void)

longlong * FUN_144a7d35a(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x230;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 144a7d36f FUN_144a7d36f body=18 status=ok
// SIG undefined FUN_144a7d36f(void)

void FUN_144a7d36f(longlong param_1)

{
  FUN_14001cc68(param_1 + (ulonglong)(param_1 == 0),0x10);
  return;
}



// FUNCTION 144a7d382 FUN_144a7d382 body=7 status=ok
// SIG undefined FUN_144a7d382(void)

bool FUN_144a7d382(longlong param_1,int param_2)

{
  return *(int *)(param_1 + 4) == param_2;
}



// FUNCTION 144a7d38a FUN_144a7d38a body=2342 status=ok
// SIG undefined FUN_144a7d38a(void)

void FUN_144a7d38a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  longlong local_100;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  int local_d4;
  undefined8 local_d0;
  int *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  int *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = (void *)0x0;
  iVar3 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c);
  uStack_70 = (ulonglong)(uint)(iVar3 * iVar3);
  local_100 = param_1;
  local_d0 = param_2;
  if (iVar3 != 0) {
    param_2 = 0;
    FUN_1447808da(&local_78,0);
  }
  lVar10 = local_100;
  memset(local_78,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),
         (longlong)*(int *)(local_100 + 0x10) << 2);
  lVar6 = (longlong)*(int *)(lVar10 + 0x18);
  if (0 < lVar6) {
    do {
      local_e8 = lVar6 + -1;
      uVar15 = *(int *)(lVar10 + 0x1c) >> ((byte)local_e8 & 0x1f);
      local_e0 = (ulonglong)uVar15;
      local_104 = uVar15 - 1;
      local_88 = 0;
      uStack_80 = 0;
      iVar3 = *(int *)(lVar10 + 0x20) * local_104;
      iVar3 = iVar3 * iVar3;
      local_c0 = lVar6;
      if (iVar3 != 0) {
        FUN_14480809c(&local_88,iVar3 * 6);
      }
      lVar10 = *(longlong *)(local_100 + 0x60);
      *(undefined8 *)(lVar10 + 0x20 + local_e8 * 0x28) = 0x7fffffff;
      iVar3 = *(int *)(local_100 + 0x20);
      lVar6 = local_100;
      if (0 < iVar3) {
        local_b8 = lVar10 + local_e8 * 0x28;
        lVar10 = 0;
        lVar16 = local_e8 * 0x28;
        local_108 = 0;
        iVar12 = local_104;
        do {
          if (iVar3 < 1) {
            lVar8 = (longlong)iVar3;
          }
          else {
            lVar14 = 0;
            local_b0 = lVar10;
            do {
              lVar10 = *(longlong *)(lVar6 + 0x60) + lVar16 + lVar14 * 8;
              local_c8 = (int *)(lVar10 + local_b0 * 4);
              local_c8[4] = 0;
              *local_c8 = 0x7fffffff;
              iVar19 = local_108;
              local_a8 = lVar14;
              if ((int)local_e0 < 2) {
                iVar3 = 0;
              }
              else {
                local_a0 = (int *)(lVar10 + local_b0 * 4 + 0x10);
                local_f4 = 1;
                iVar21 = 0;
                do {
                  local_d4 = iVar21 + 1;
                  iVar9 = iVar12;
                  iVar17 = iVar19;
                  do {
                    iVar13 = *(int *)(lVar6 + 0x1c);
                    lVar10 = (longlong)(int)(uint)uStack_80;
                    uVar15 = (uint)uStack_80 + 1;
                    if (uStack_80._4_4_ < uVar15) {
                      uVar7 = uStack_80 & 0xffffffff;
                      uStack_80._0_4_ = uVar15;
                      FUN_1447808da(&local_88,uVar7);
                      lVar6 = local_100;
                      iVar12 = local_104;
                      iVar19 = local_108;
                      uVar15 = (uint)uStack_80;
                    }
                    uStack_80._0_4_ = uVar15;
                    uVar15 = (uint)uStack_80;
                    iVar3 = iVar21 * iVar13;
                    iVar18 = iVar3 + iVar17;
                    *(int *)(local_88 + lVar10 * 4) = iVar18;
                    lVar10 = (longlong)(int)(uint)uStack_80;
                    uStack_80._0_4_ = (uint)uStack_80 + 1;
                    if (uStack_80._4_4_ < (uint)uStack_80) {
                      FUN_1447808da(&local_88,uVar15);
                      lVar6 = local_100;
                      iVar12 = local_104;
                      iVar19 = local_108;
                    }
                    uVar15 = (uint)uStack_80;
                    iVar13 = iVar13 * local_f4;
                    iVar20 = iVar13 + iVar17 + 1;
                    *(int *)(local_88 + lVar10 * 4) = iVar20;
                    lVar10 = (longlong)(int)(uint)uStack_80;
                    uStack_80._0_4_ = (uint)uStack_80 + 1;
                    if (uStack_80._4_4_ < (uint)uStack_80) {
                      local_f0 = lVar16;
                      FUN_1447808da(&local_88,uVar15);
                      lVar6 = local_100;
                      lVar16 = local_f0;
                      iVar12 = local_104;
                      iVar19 = local_108;
                    }
                    uVar15 = (uint)uStack_80;
                    iVar11 = iVar3 + iVar17 + 1;
                    *(int *)(local_88 + lVar10 * 4) = iVar11;
                    lVar10 = (longlong)(int)(uint)uStack_80;
                    uStack_80._0_4_ = (uint)uStack_80 + 1;
                    if (uStack_80._4_4_ < (uint)uStack_80) {
                      local_f0 = lVar16;
                      FUN_1447808da(&local_88,uVar15);
                      lVar6 = local_100;
                      lVar16 = local_f0;
                      iVar12 = local_104;
                      iVar19 = local_108;
                    }
                    uVar15 = (uint)uStack_80;
                    *(int *)(local_88 + lVar10 * 4) = iVar18;
                    lVar10 = (longlong)(int)(uint)uStack_80;
                    uStack_80._0_4_ = (uint)uStack_80 + 1;
                    if (uStack_80._4_4_ < (uint)uStack_80) {
                      local_f0 = lVar16;
                      FUN_1447808da(&local_88,uVar15);
                      lVar6 = local_100;
                      lVar16 = local_f0;
                      iVar12 = local_104;
                      iVar19 = local_108;
                    }
                    uVar15 = (uint)uStack_80;
                    iVar13 = iVar13 + iVar17;
                    *(int *)(local_88 + lVar10 * 4) = iVar13;
                    lVar10 = (longlong)(int)(uint)uStack_80;
                    uStack_80._0_4_ = (uint)uStack_80 + 1;
                    if (uStack_80._4_4_ < (uint)uStack_80) {
                      local_f0 = lVar16;
                      FUN_1447808da(&local_88,uVar15);
                      lVar6 = local_100;
                      lVar16 = local_f0;
                      iVar12 = local_104;
                      iVar19 = local_108;
                    }
                    *(int *)(local_88 + lVar10 * 4) = iVar20;
                    iVar3 = *local_a0;
                    if (*local_a0 < iVar18) {
                      iVar3 = iVar18;
                    }
                    if (*local_c8 < iVar18) {
                      iVar18 = *local_c8;
                    }
                    if (iVar3 < iVar11) {
                      iVar3 = iVar11;
                    }
                    if (iVar11 <= iVar18) {
                      iVar18 = iVar11;
                    }
                    if (iVar3 < iVar20) {
                      iVar3 = iVar20;
                    }
                    if (iVar20 <= iVar18) {
                      iVar18 = iVar20;
                    }
                    if (iVar3 < iVar13) {
                      iVar3 = iVar13;
                    }
                    if (iVar13 <= iVar18) {
                      iVar18 = iVar13;
                    }
                    *local_a0 = iVar3;
                    *local_c8 = iVar18;
                    iVar17 = iVar17 + 1;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                  local_f4 = local_f4 + 1;
                  iVar21 = local_d4;
                } while (local_d4 != iVar12);
              }
              iVar21 = *(int *)(local_b8 + 0x24);
              if (*(int *)(local_b8 + 0x24) < iVar3) {
                iVar21 = iVar3;
              }
              *(int *)(local_b8 + 0x24) = iVar21;
              iVar3 = *local_c8;
              if (*(int *)(local_b8 + 0x20) < *local_c8) {
                iVar3 = *(int *)(local_b8 + 0x20);
              }
              *(int *)(local_b8 + 0x20) = iVar3;
              iVar3 = *(int *)(lVar6 + 0x20);
              local_108 = *(int *)(lVar6 + 0x1c) * *(int *)(lVar6 + 0x1c) + iVar19;
              lVar14 = local_a8 + 1;
              lVar8 = (longlong)iVar3;
              lVar10 = local_b0;
            } while (lVar14 < lVar8);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar8);
      }
      plVar4 = *(longlong **)(*(longlong *)(lVar6 + 0x58) + local_e8 * 8);
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
        *(undefined4 *)(plVar4 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)plVar4 + 0xc) = 0x105;
        *(undefined1 *)((longlong)plVar4 + 0xe) = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        *plVar4 = (longlong)&PTR_FUN_14a3d4570;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[4] = (longlong)&PTR_FUN_14a355380;
        *(undefined1 *)(plVar4 + 7) = 0;
        *(undefined4 *)(plVar4 + 8) = 0;
        ppuVar5 = &PTR_FUN_14a3d4570;
      }
      else {
        ppuVar5 = (undefined **)*plVar4;
      }
      (*(code *)ppuVar5[0x12])(plVar4,&local_88);
      (**(code **)(*plVar4 + 0x18))(plVar4,local_d0);
      *(longlong **)(*(longlong *)(local_100 + 0x58) + local_e8 * 8) = plVar4;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar4 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar4 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        _Init_thread_footer(&DAT_14ca97070);
      }
      lVar10 = DAT_14ca97068;
      bVar22 = true;
      cVar1 = DAT_14ca96da8;
      if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar7 = 0;
          cVar1 = '\x02';
        }
        else {
          bVar2 = FUN_144a61b4f();
          uVar7 = (ulonglong)(bVar2 ^ 1);
          cVar1 = DAT_14ca96da8;
        }
        bVar22 = *(int *)(lVar10 + uVar7 * 4) != 0;
      }
      if ((bVar22) && (cVar1 != '\0')) {
        local_98 = 0;
        uStack_90 = 0;
        if (1 < (int)local_e0) {
          iVar12 = 1;
          iVar3 = 0;
          do {
            local_f4 = iVar3 + 1;
            iVar19 = 1;
            do {
              iVar21 = *(int *)(local_100 + 0x1c) >> ((byte)local_e8 & 0x1f);
              lVar10 = (longlong)(int)(uint)uStack_90;
              uVar15 = (uint)uStack_90 + 1;
              if (uStack_90._4_4_ < uVar15) {
                uVar7 = uStack_90 & 0xffffffff;
                uStack_90._0_4_ = uVar15;
                FUN_1447808da(&local_98,uVar7);
                uVar15 = (uint)uStack_90;
              }
              uStack_90._0_4_ = uVar15;
              uVar15 = (uint)uStack_90;
              iVar9 = iVar3 * iVar21;
              iVar17 = iVar19 + iVar9 + -1;
              *(int *)(local_98 + lVar10 * 4) = iVar17;
              lVar10 = (longlong)(int)(uint)uStack_90;
              uStack_90._0_4_ = (uint)uStack_90 + 1;
              if (uStack_90._4_4_ < (uint)uStack_90) {
                FUN_1447808da(&local_98,uVar15);
              }
              uVar15 = (uint)uStack_90;
              iVar21 = iVar21 * iVar12;
              iVar13 = iVar19 + iVar21;
              *(int *)(local_98 + lVar10 * 4) = iVar13;
              lVar10 = (longlong)(int)(uint)uStack_90;
              uStack_90._0_4_ = (uint)uStack_90 + 1;
              if (uStack_90._4_4_ < (uint)uStack_90) {
                FUN_1447808da(&local_98,uVar15);
              }
              uVar15 = (uint)uStack_90;
              *(int *)(local_98 + lVar10 * 4) = iVar9 + iVar19;
              lVar10 = (longlong)(int)(uint)uStack_90;
              uStack_90._0_4_ = (uint)uStack_90 + 1;
              if (uStack_90._4_4_ < (uint)uStack_90) {
                FUN_1447808da(&local_98,uVar15);
              }
              uVar15 = (uint)uStack_90;
              *(int *)(local_98 + lVar10 * 4) = iVar17;
              lVar10 = (longlong)(int)(uint)uStack_90;
              uStack_90._0_4_ = (uint)uStack_90 + 1;
              if (uStack_90._4_4_ < (uint)uStack_90) {
                FUN_1447808da(&local_98,uVar15);
              }
              uVar15 = (uint)uStack_90;
              *(int *)(local_98 + lVar10 * 4) = iVar19 + iVar21 + -1;
              lVar10 = (longlong)(int)(uint)uStack_90;
              uStack_90._0_4_ = (uint)uStack_90 + 1;
              if (uStack_90._4_4_ < (uint)uStack_90) {
                FUN_1447808da(&local_98,uVar15);
              }
              *(int *)(local_98 + lVar10 * 4) = iVar13;
              iVar19 = iVar19 + 1;
            } while ((int)local_e0 != iVar19);
            iVar12 = iVar12 + 1;
            iVar3 = local_f4;
          } while (local_f4 != local_104);
        }
        plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
        *(undefined4 *)(plVar4 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)plVar4 + 0xc) = 0x105;
        *(undefined1 *)((longlong)plVar4 + 0xe) = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        *plVar4 = (longlong)&PTR_FUN_14a3d4570;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[4] = (longlong)&PTR_FUN_14a355380;
        *(undefined1 *)(plVar4 + 7) = 0;
        *(undefined4 *)(plVar4 + 8) = 0;
        FUN_14129beec(plVar4,&local_98);
        (**(code **)(*plVar4 + 0x18))(plVar4,local_d0);
        *(longlong **)(*(longlong *)(local_100 + 0xa8) + local_e8 * 8) = plVar4;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar10 = local_100;
      lVar6 = local_e8;
    } while (1 < local_c0);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a7dcb2 FUN_144a7dcb2 body=42 status=ok
// SIG undefined FUN_144a7dcb2(void)

void FUN_144a7dcb2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  *param_3 = param_1;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined1 *)((longlong)param_3 + 0xc) = 0;
  *(undefined1 *)((longlong)param_3 + 0xd) = uVar1;
  *(undefined2 *)((longlong)param_3 + 0xe) = 3;
  param_3[0x13] = *(longlong *)(param_1 + 0x18);
  return;
}



// FUNCTION 144a7dcdc FUN_144a7dcdc body=110 status=ok
// SIG undefined FUN_144a7dcdc(void)

void FUN_144a7dcdc(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  *(undefined8 *)(param_3 + 0xa0) = *(undefined8 *)(param_1 + 0x48);
  cVar1 = *(char *)(param_1 + 0x81);
  cVar2 = cVar1 * '\b' + '\b';
  cVar3 = (cVar1 != '\0') * '\t' + '\x05';
  *(longlong *)(param_3 + 0x10) = param_1 + 0x10;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined1 *)(param_3 + 0x1c) = 0;
  *(char *)(param_3 + 0x1d) = cVar2;
  *(char *)(param_3 + 0x1e) = cVar3;
  *(undefined1 *)(param_3 + 0x1f) = 4;
  *(longlong *)(param_3 + 0x20) = param_1 + 0x10;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(char *)(param_3 + 0x2c) = cVar1 * '\x04' + '\x04';
  *(char *)(param_3 + 0x2d) = cVar2;
  *(char *)(param_3 + 0x2e) = cVar3;
  *(undefined1 *)(param_3 + 0x2f) = 4;
  return;
}



// FUNCTION 144a7dd4a FUN_144a7dd4a body=111 status=ok
// SIG undefined FUN_144a7dd4a(void)

void FUN_144a7dd4a(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    param_1 = &DAT_14ca94d98;
    *(undefined8 *)(param_3 + 0xb0) = DAT_14ca94db0;
    *(undefined4 *)(param_3 + 0xb8) = 0;
    uVar1 = 0;
  }
  else {
    *(undefined8 *)(param_3 + 0xb0) = param_1[4];
    *(undefined4 *)(param_3 + 0xb8) = 0xffffffff;
    uVar1 = *(undefined1 *)(param_1 + 6);
  }
  *(undefined8 **)(param_3 + 0x88) = param_1;
  *(undefined4 *)(param_3 + 0x90) = 0;
  *(undefined1 *)(param_3 + 0x94) = 0;
  *(undefined1 *)(param_3 + 0x95) = uVar1;
  *(undefined2 *)(param_3 + 0x96) = 0x408;
  return;
}



// FUNCTION 144a7ddba FUN_144a7ddba body=228 status=ok
// SIG undefined FUN_144a7ddba(void)

longlong FUN_144a7ddba(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6a468 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940a0a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c10;
    local_38 = &LAB_14876160d;
    local_40 = &LAB_140e30382;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9c0;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7dea0 FUN_144a7dea0 body=171 status=ok
// SIG undefined FUN_144a7dea0(void)

undefined8 * FUN_144a7dea0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 2) {
    *param_1 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = iVar1;
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    param_2[1] = 0;
    if (iVar3 + iVar1 < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar2 < iVar3 + iVar1) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,*param_3,iVar3);
  }
  return param_1;
}



// FUNCTION 144a7df4c FUN_144a7df4c body=195 status=ok
// SIG undefined FUN_144a7df4c(void)

int FUN_144a7df4c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_144a7df8e:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_144a7e007;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_144a7e007;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_144a7dff1;
    }
  }
  return -1;
LAB_144a7e007:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_144a7dff1:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_144a7df8e;
}



// FUNCTION 144a7e010 FUN_144a7e010 body=21 status=ok
// SIG undefined FUN_144a7e010(void)

void FUN_144a7e010(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_1446f8c06(param_1,0);
  return;
}



// FUNCTION 144a7e026 FUN_144a7e026 body=315 status=ok
// SIG undefined FUN_144a7e026(void)

int FUN_144a7e026(longlong *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  iVar9 = *param_3;
  iVar3 = *param_2;
  lVar8 = *param_1;
  plVar1 = (longlong *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x18) < iVar9) {
    FUN_145891588(plVar1,iVar9,1);
  }
  if (iVar9 < *(int *)(lVar8 + 0x150)) {
    iVar9 = *(int *)(lVar8 + 0x150);
  }
  *(int *)(lVar8 + 0x150) = iVar9;
  puVar10 = (undefined8 *)param_1[1];
  iVar11 = iVar9 - *(int *)(puVar10 + 2);
  if (iVar11 != 0 && *(int *)(puVar10 + 2) <= iVar9) {
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    plVar2 = puVar10 + 1;
    if (*(int *)((longlong)puVar10 + 0x14) < iVar9) {
      FUN_145891620(plVar2,iVar9);
    }
    do {
      puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      uVar4 = *(undefined4 *)(puVar10 + 10);
      uVar5 = *(undefined4 *)(puVar10 + 3);
      *puVar7 = *puVar10;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 8) = uVar5;
      *(undefined8 *)((longlong)puVar7 + 0x44) = 0;
      iVar9 = *(int *)(puVar10 + 2);
      *(uint *)(puVar10 + 2) = iVar9 + 1U;
      if (*(uint *)((longlong)puVar10 + 0x14) < iVar9 + 1U) {
        FUN_146e05912(plVar2,iVar9);
      }
      *(undefined8 **)(*plVar2 + (longlong)iVar9 * 8) = puVar7;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    puVar10 = (undefined8 *)param_1[1];
  }
  uVar6 = *(undefined8 *)(puVar10[1] + (longlong)iVar3 * 8);
  lVar8 = (longlong)iVar3 * 0x38;
  *(longlong *)(*plVar1 + 0x20 + lVar8) = param_1[2];
  *(undefined8 *)(*plVar1 + 0x28 + lVar8) = uVar6;
  return iVar3;
}



// FUNCTION 144a7e162 FUN_144a7e162 body=174 status=ok
// SIG undefined FUN_144a7e162(void)

undefined * FUN_144a7e162(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952900) {
    FUN_144b3d300(&DAT_14c952900);
    if (DAT_14c952900 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0,0x800000008001,0,uVar1,
                    FUN_1468e4cee);
      atexit(FUN_142817fb7);
      _Init_thread_footer(&DAT_14c952900);
    }
  }
  return &DAT_14c9528b0;
}



// FUNCTION 144a7e210 FUN_144a7e210 body=221 status=ok
// SIG undefined FUN_144a7e210(void)

longlong FUN_144a7e210(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac0148 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417f6a96;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147863ed7;
    local_40 = &LAB_146373c3b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000f;
    local_60 = 8;
    local_68 = 0x1350;
    FUN_14081cfa3(L"/Script/Engine",L"Engine",&DAT_14cac0148,&DAT_147863ed6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7e2ee FUN_144a7e2ee body=27 status=ok
// SIG undefined FUN_144a7e2ee(void)

undefined8 FUN_144a7e2ee(longlong param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((param_2 < 0x20) && (*(byte *)(param_1 + (ulonglong)param_2) != param_3)) {
    *(char *)(param_1 + (ulonglong)param_2) = (char)param_3;
    uVar1 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144a7e30a FUN_144a7e30a body=221 status=ok
// SIG undefined FUN_144a7e30a(void)

longlong FUN_144a7e30a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb253f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f6f09d;
    local_40 = &LAB_146201c25;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb253f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7e3e8 FUN_144a7e3e8 body=86 status=ok
// SIG undefined FUN_144a7e3e8(void)

ulonglong FUN_144a7e3e8(ushort param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)param_1 * 0x3c;
  if ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) {
    uVar1 = (ulonglong)DAT_14ca96500;
  }
  else if ((int)(&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] < 3) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_1 != 0xc) && (*(longlong *)(&DAT_14ca814b0 + lVar2) != DAT_14ca81490)) {
      if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = ((ulonglong)*(byte *)((longlong)&DAT_14ca814c8 + lVar2 + 3) & 0xffffffffffffff20) >>
                5;
      }
    }
  }
  return uVar1;
}



// FUNCTION 144a7e43e FUN_144a7e43e body=487 status=ok
// SIG undefined FUN_144a7e43e(void)

ulonglong FUN_144a7e43e(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  puVar6 = &DAT_14ca84468;
  uVar10 = (ushort)param_2;
  if (uVar10 != 0x31) {
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_144a7e53c_caseD_30:
      puVar6 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_144a7e53c_caseD_31:
      if ((uVar10 & 0xfff0) != 0x20) {
        uVar12 = 0;
        goto LAB_144a7e45e;
      }
      lVar8 = FUN_14741392a();
      puVar6 = (undefined8 *)(lVar8 + (ulonglong)(param_2 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_144a7e53c_caseD_34:
      puVar6 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_144a7e53c_caseD_35:
      puVar6 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_144a7e53c_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_144a7e53c_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_144a7e53c_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_144a7e53c_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar6 = &DAT_14ca84488;
      }
    }
  }
  uVar12 = *puVar6;
LAB_144a7e45e:
  if (param_1[2] == 0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    if (*(int *)(param_1 + 1) == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = (undefined2 *)*param_1;
    }
    uVar7 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar11,1);
    param_1[2] = uVar7;
  }
  cVar2 = FUN_14002b5e0(uVar12,"Windows",7);
  if ((cVar2 == '\0') && (DAT_14ca85550 != uVar10)) {
    uVar9 = 0;
  }
  else {
    plVar1 = (longlong *)param_1[2];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xb0);
    if (UNRECOVERED_JUMPTABLE == FUN_14474d4e4) {
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar9 = 0;
      }
      else if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar9 = 1;
      }
      uVar9 = (ulonglong)*(uint *)((longlong)plVar1 + uVar9 * 4 + 0x50);
    }
    else {
      if (UNRECOVERED_JUMPTABLE != FUN_14473e48a) {
                    /* WARNING: Could not recover jumptable at 0x000144a7e593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*UNRECOVERED_JUMPTABLE)(plVar1);
        return uVar9;
      }
      iVar3 = FUN_140052f36(plVar1);
      if (iVar3 == 0) {
        puVar13 = (uint *)(plVar1 + 0xb);
      }
      else {
        puVar13 = (uint *)plVar1[10];
      }
      uVar9 = (ulonglong)*puVar13;
    }
  }
  return uVar9;
}



// FUNCTION 144a7e626 FUN_144a7e626 body=546 status=ok
// SIG undefined FUN_144a7e626(void)

void FUN_144a7e626(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_2[1];
  lVar5 = *(longlong *)(param_1 + 0x98);
  if (lVar5 == 0) {
    lVar5 = FUN_14001cc68(0x68,0x10);
    local_48 = *(undefined1 *)(param_1 + 0x90);
    FUN_1412be19e(lVar5,param_1 + 0x50,param_1 + 8,(longlong)*(int *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x98) = lVar5;
  }
  uVar4 = (uint)param_2[2];
  lVar9 = lVar3 * *(longlong *)(*(longlong *)(lVar5 + 0x58) + 0x18 + (longlong)(int)uVar4 * 0x88) +
          *param_2;
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)(int)uVar4 * 0x60;
  iVar6 = (int)((ulonglong)lVar9 >> 0x20);
  if (*(int *)(lVar3 + 0x18 + lVar5) != *(int *)(lVar3 + 0x44 + lVar5)) {
    lVar1 = lVar3 + lVar5;
    lVar8 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0x50);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x58) - 1U & (int)lVar9 + iVar6 * 0x17) *
                             4);
    if (iVar7 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar7 * 0x18);
        if (*plVar2 == lVar9) {
          if ((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0)) {
            local_38 = (longlong)(int)plVar2[1] * 0x10 + *(longlong *)(lVar3 + lVar5);
            (*(code *)*param_3)(param_3[1]);
            uVar4 = (uint)param_2[2];
          }
          break;
        }
        iVar7 = (int)plVar2[2];
      } while (iVar7 != -1);
    }
  }
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0xa8))) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar5 = (ulonglong)(uVar4 & 0x7fffffff) * 0x60;
    if (*(int *)(lVar3 + 0x18 + lVar5) != *(int *)(lVar3 + 0x44 + lVar5)) {
      lVar1 = lVar3 + lVar5;
      lVar8 = lVar1 + 0x48;
      if (*(longlong *)(lVar1 + 0x50) != 0) {
        lVar8 = *(longlong *)(lVar1 + 0x50);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x58) - 1U & (int)lVar9 + iVar6 * 0x17)
                               * 4);
      if (iVar6 != -1) {
        do {
          plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar6 * 0x18);
          if (*plVar2 == lVar9) {
            if (plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
              local_38 = (longlong)(int)plVar2[1] * 0x10 + *(longlong *)(lVar3 + lVar5);
              (*(code *)*param_3)(param_3[1]);
            }
            break;
          }
          iVar6 = (int)plVar2[2];
        } while (iVar6 != -1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a7e84a FUN_144a7e84a body=190 status=ok
// SIG undefined FUN_144a7e84a(void)

void FUN_144a7e84a(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
    if ((DAT_14c761388 != 0) &&
       ((lVar2 = param_1[0x16], lVar2 != 0 || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)))) {
      uVar1 = FUN_14119d0a4(lVar2);
      FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a7e912 FUN_144a7e912 body=152 status=ok
// SIG undefined FUN_144a7e912(void)

undefined8 FUN_144a7e912(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  
  if ((*param_1 != 0) && (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar3 = plVar3 + 0x143;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if ((int)plVar3[6] != *(int *)((longlong)plVar3 + 0x5c)) {
      uVar1 = *(uint *)(param_1 + 2);
      plVar4 = plVar3 + 0xc;
      if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar3[0xd];
      }
      iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar3[0xe] - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          bVar6 = *(uint *)(plVar3[5] + (longlong)iVar5 * 0xe0) == uVar1;
          uVar2 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),bVar6);
          if (bVar6) {
            return uVar2;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0xe0 + plVar3[5] + 0xd0);
        } while (iVar5 != -1);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 144a7e9aa FUN_144a7e9aa body=228 status=ok
// SIG undefined FUN_144a7e9aa(void)

longlong FUN_144a7e9aa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb39ca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14638c6c0;
    local_38 = &LAB_14811044c;
    local_40 = &LAB_1407f5cf8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x8e0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb39ca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7ea90 FUN_144a7ea90 body=85 status=ok
// SIG undefined FUN_144a7ea90(void)

void FUN_144a7ea90(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 != 0 || *param_1 != 0) {
    if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1467ac60e(param_3,param_4);
    }
    lVar1 = FUN_14001fdce(*param_1,(ulonglong)param_3 * param_4,0x10);
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 144a7eae6 FUN_144a7eae6 body=228 status=ok
// SIG undefined FUN_144a7eae6(void)

longlong FUN_144a7eae6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb366a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148063819;
    local_40 = &LAB_1460672b6;
    local_48 = L"Niagara";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb366a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7ebcb FUN_144a7ebcb body=260 status=ok
// SIG undefined FUN_144a7ebcb(void)

undefined8 FUN_144a7ebcb(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined7 uVar6;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  bool bVar8;
  
  uVar5 = (ulonglong)DAT_14ca97070;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < (int)DAT_14ca97070) {
    uVar5 = FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == 0xffffffff) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      uVar5 = _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar2 = DAT_14ca97068;
  uVar6 = (undefined7)(uVar5 >> 8);
  bVar8 = true;
  cVar3 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar6 = (undefined7)((ulonglong)lVar1 >> 8);
      uVar7 = 0;
      cVar3 = '\x02';
    }
    else {
      uVar5 = FUN_144a61b4f();
      uVar7 = (uVar5 ^ 1) & 0xff;
      uVar6 = (undefined7)(uVar5 >> 8);
      cVar3 = DAT_14ca96da8;
    }
    bVar8 = *(int *)(lVar2 + uVar7 * 4) != 0;
  }
  return CONCAT71(uVar6,cVar3 != '\0' & bVar8);
}



// FUNCTION 144a7ecd0 FUN_144a7ecd0 body=175 status=ok
// SIG undefined FUN_144a7ecd0(void)

undefined4 FUN_144a7ecd0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x03') {
    uVar3 = *param_1;
  }
  else {
    puVar2 = &local_48;
    FUN_1400b56fe(puVar2,param_1,3);
    uVar3 = 0;
    if (local_28 != 0) {
      uVar3 = local_48;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7ed80 TlsSetValue body=7 status=ok
// SIG BOOL TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144a7ed80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}



// FUNCTION 144a7ed88 FUN_144a7ed88 body=250 status=ok
// SIG undefined FUN_144a7ed88(void)

void FUN_144a7ed88(void)

{
  return;
}



// FUNCTION 144a7ee82 FUN_144a7ee82 body=137 status=ok
// SIG undefined FUN_144a7ee82(void)

bool FUN_144a7ee82(longlong param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if ((((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x60))) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x68)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)))) ||
       ((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x48)) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x50)))))) {
      bVar1 = false;
    }
    else {
      bVar1 = ABS(*(double *)(param_1 + 0x58)) <= 9.99999993922529e-09;
    }
    return bVar1;
  }
  return true;
}



// FUNCTION 144a7ef0c FUN_144a7ef0c body=44 status=ok
// SIG undefined FUN_144a7ef0c(void)

undefined4 FUN_144a7ef0c(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
  }
  uVar1 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  uVar1 = *(uint *)(lVar2 + (longlong)((int)uVar1 >> 5) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 144a7ef38 FUN_144a7ef38 body=221 status=ok
// SIG undefined FUN_144a7ef38(void)

longlong FUN_144a7ef38(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a53e8 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470cc1e5;
    local_40 = FUN_1462ad312;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGraphAsset",&DAT_14c9a53e8,&DAT_1470cc1e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a53e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7f016 FUN_144a7f016 body=228 status=ok
// SIG undefined FUN_144a7f016(void)

longlong FUN_144a7f016(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabf8d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147860ffd;
    local_40 = FUN_1463713dc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf8d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7f0fc FUN_144a7f0fc body=228 status=ok
// SIG undefined FUN_144a7f0fc(void)

longlong FUN_144a7f0fc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad5cd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1414bb1f4;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c345a;
    local_38 = &LAB_147a5f179;
    local_40 = &LAB_145c3bbe3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 0x10;
    local_68 = 0x15b0;
    FUN_14081cfa3(L"/Script/Engine",L"DemoNetDriver",&DAT_14cad5cd8,&DAT_147a5f178);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad5cd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7f1e2 FUN_144a7f1e2 body=31 status=ok
// SIG undefined FUN_144a7f1e2(void)

undefined8 FUN_144a7f1e2(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x78))) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 144a7f202 FUN_144a7f202 body=133 status=ok
// SIG undefined FUN_144a7f202(void)

undefined8 FUN_144a7f202(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x460) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x460 + *(longlong *)(param_1 + 0x10) + 0x450);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 144a7f288 FUN_144a7f288 body=1634 status=ok
// SIG undefined FUN_144a7f288(void)

undefined8
FUN_144a7f288(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8,undefined4 *param_9)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_238 [32];
  double local_218;
  double *local_210;
  double *local_208;
  double *local_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined8 local_100;
  double local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined2 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dVar1 = *(double *)(param_1 + 0x38);
  dVar3 = param_3[2] * *(double *)(param_1 + 0x48);
  dVar14 = param_3[1] * *(double *)(param_1 + 0x40);
  dVar13 = *param_3 * dVar1;
  dVar17 = SQRT(dVar3 * dVar3 + dVar13 * dVar13 + dVar14 * dVar14);
  if (2.2250738585072014e-308 < dVar17) {
    dVar15 = *(double *)(param_1 + 0x48) * param_2[2];
    dVar16 = *(double *)(param_1 + 0x40) * param_2[1];
    dVar4 = *param_2 * dVar1;
    local_1d8 = 1.0 / dVar17;
    dVar17 = dVar17 * param_4;
    local_188 = dVar3 * local_1d8;
    local_190 = dVar14 * local_1d8;
    local_198 = dVar13 * local_1d8;
    lVar2 = *(longlong *)(param_1 + 0x88);
    param_5 = param_5 * dVar1;
    if ((param_5 != 0.0) || (NAN(param_5))) {
      *param_9 = 0xffffffff;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_14c = 0x3ff00000;
      local_148._8_4_ = SUB84(dVar16,0);
      local_148._0_8_ = dVar4;
      local_148._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      uStack_130 = 0;
      local_128 = 0x3ff0000000000000;
      uStack_120 = 0x3ff0000000000000;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0;
      local_100 = 0;
      local_f0 = 0x101;
      local_ee = 1;
      local_ec = 0;
      local_108 = &PTR_FUN_149f48e60;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_1f0 = &local_180;
      local_180 = 0x3ff0000000000000;
      local_178 = 0;
      uStack_170 = 0;
      local_1e8 = 0;
      local_1f8 = 0;
      local_200 = &local_1c8;
      local_208 = &local_1b0;
      local_210 = &local_1d0;
      local_218 = dVar17;
      local_138 = dVar15;
      local_f8 = param_5;
      cVar5 = FUN_1412e5496(lVar2,&local_108,&local_168,&local_198);
      local_108 = &PTR_FUN_149f553e0;
      if (cVar5 != '\0') goto LAB_144a7f64a;
    }
    else {
      uVar9 = (ulonglong)*(int *)(lVar2 + 0x28);
      local_1e0 = param_4;
      if ((longlong)uVar9 < 1) {
        bVar12 = true;
        uVar7 = 0xffffffff;
        local_1d0 = 0.0;
      }
      else {
        pfVar10 = (float *)(*(longlong *)(lVar2 + 0x20) + 0x14);
        uVar8 = 0xffffffff;
        uVar11 = 0;
        bVar12 = false;
        local_1d0 = 0.0;
        do {
          dVar3 = (double)*pfVar10 * local_188 +
                  (double)pfVar10[-2] * local_198 + local_190 * (double)pfVar10[-1];
          dVar1 = (dVar15 - (double)pfVar10[-3]) * (double)*pfVar10 +
                  (dVar4 - (double)pfVar10[-5]) * (double)pfVar10[-2] +
                  (dVar16 - (double)pfVar10[-4]) * (double)pfVar10[-1];
          if ((dVar3 == 0.0) && (!NAN(dVar3))) {
            if (dVar1 <= 0.0) goto LAB_144a7f4ec;
LAB_144a7f5b9:
            if (bVar12) goto LAB_144a7f64a;
            goto LAB_144a7f5c9;
          }
          dVar1 = -dVar1 / dVar3;
          if (0.0 <= dVar3) {
            if (dVar1 <= dVar17) {
              dVar17 = dVar1;
            }
          }
          else if (local_1d0 < dVar1) {
            uVar8 = uVar11 & 0xffffffff;
            local_1d0 = dVar1;
          }
LAB_144a7f4ec:
          uVar7 = (uint)uVar8;
          if (dVar17 < local_1d0) goto LAB_144a7f5b9;
          uVar11 = uVar11 + 1;
          bVar12 = uVar9 <= uVar11;
          pfVar10 = pfVar10 + 6;
        } while (uVar9 != uVar11);
      }
      local_1a0 = dVar15 + local_188 * local_1d0;
      local_1a8 = dVar16 + local_190 * local_1d0;
      local_1b0 = dVar4 + local_198 * local_1d0;
      if ((int)uVar7 < 0) {
        local_1b8 = -local_188;
        local_1c0 = -local_190;
        local_1c8 = -local_198;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x20);
        uVar9 = (ulonglong)uVar7;
        local_1b8 = (double)*(float *)(lVar2 + 0x14 + uVar9 * 0x18);
        local_1c0 = (double)*(float *)(lVar2 + 0x10 + uVar9 * 0x18);
        local_1c8 = (double)*(float *)(lVar2 + 0xc + uVar9 * 0x18);
      }
      *param_9 = 0xffffffff;
      if (bVar12) {
LAB_144a7f64a:
        local_1d0 = local_1d8 * local_1d0;
        if ((local_1d0 != 0.0) || (NAN(local_1d0))) {
          if (param_4 <= local_1d0) goto LAB_144a7f5c9;
          dVar1 = *(double *)(param_1 + 0x30);
          dVar3 = *(double *)(param_1 + 0x28);
          *param_7 = *(double *)(param_1 + 0x20) * local_1b0;
          param_7[1] = dVar3 * local_1a8;
          param_7[2] = dVar1 * local_1a0;
          dVar1 = *(double *)(param_1 + 0x48) * local_1b8;
          dVar14 = *(double *)(param_1 + 0x40) * local_1c0;
          dVar3 = *(double *)(param_1 + 0x38) * local_1c8;
          dVar17 = dVar1 * dVar1 + dVar3 * dVar3 + dVar14 * dVar14;
          if (((dVar17 != 1.0) || (dVar15 = dVar14, dVar13 = dVar1, dVar4 = dVar3, NAN(dVar17))) &&
             (dVar15 = DAT_14c8464e8, dVar13 = DAT_14c8464f0, dVar4 = DAT_14c8464e0,
             2.2250738585072014e-308 <= dVar17)) {
            dVar17 = 1.0 / SQRT(dVar17);
            dVar15 = dVar14 * dVar17;
            dVar13 = dVar1 * dVar17;
            dVar4 = dVar3 * dVar17;
          }
        }
        else {
          param_7[2] = param_2[2];
          dVar1 = param_2[1];
          *param_7 = *param_2;
          param_7[1] = dVar1;
          dVar15 = -param_3[1];
          dVar13 = -param_3[2];
          dVar4 = -*param_3;
        }
        *param_8 = dVar4;
        param_8[1] = dVar15;
        param_8[2] = dVar13;
        *param_6 = local_1d0;
        uVar6 = 1;
        goto LAB_144a7f5cb;
      }
    }
  }
LAB_144a7f5c9:
  uVar6 = 0;
LAB_144a7f5cb:
  if ((local_d0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 144a7f8ec FUN_144a7f8ec body=31 status=ok
// SIG undefined FUN_144a7f8ec(void)

void FUN_144a7f8ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  return;
}



// FUNCTION 144a7f90c FUN_144a7f90c body=97 status=ok
// SIG undefined FUN_144a7f90c(void)

void FUN_144a7f90c(ulonglong *param_1,uint param_2,uint param_3,longlong param_4,undefined4 param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    if (0 < (int)param_3 || uVar2 != 0) {
      if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) goto LAB_144a7f961;
      uVar2 = FUN_14001fdce(uVar2,(ulonglong)param_3 * param_4,param_5);
      *param_1 = uVar2;
    }
  }
  else if (param_2 < param_3) {
LAB_144a7f961:
    FUN_1467ac767(param_3,param_4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



// FUNCTION 144a7f96e FUN_144a7f96e body=722 status=ok
// SIG undefined FUN_144a7f96e(void)

undefined8 * FUN_144a7f96e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  lVar5 = param_2[1];
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x809f600) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      FUN_1446f470e(&local_50,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_50);
      _Init_thread_footer(&DAT_14c949388);
    }
    if ((((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
         == DAT_14c949380 + 0x30)) &&
       (plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 != (longlong *)0x0)) {
      lVar4 = *plVar1;
      pcVar2 = *(code **)(lVar4 + 0x108);
      if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
        cVar3 = (*pcVar2)(plVar1);
        if (cVar3 == '\0') goto LAB_144a7fb96;
        lVar4 = *plVar1;
      }
      pcVar2 = *(code **)(lVar4 + 0x110);
      if (((pcVar2 == (code *)&LAB_144783432 || pcVar2 == (code *)&LAB_144783426) ||
          (lVar4 = (*pcVar2)(plVar1), lVar4 != 0)) && ((*(uint *)(lVar5 + 8) & 0x809f600) == 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c949388) &&
           (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
          FUN_1446f470e(&local_50,L"GbxHasStructType",1);
          DAT_14c949380 = FUN_141473ad5(local_50);
          _Init_thread_footer(&DAT_14c949388);
        }
        if ((((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)
              (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) ==
             DAT_14c949380 + 0x30)) &&
           (plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 != (longlong *)0x0)) {
          lVar4 = *plVar1;
          pcVar2 = *(code **)(lVar4 + 0x108);
          if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
            cVar3 = (*pcVar2)(plVar1);
            if (cVar3 == '\0') goto LAB_144a7fb96;
            lVar4 = *plVar1;
          }
          pcVar2 = *(code **)(lVar4 + 0x110);
          if ((pcVar2 == (code *)&LAB_144783432 || pcVar2 == (code *)&LAB_144783426) ||
             (lVar4 = (*pcVar2)(plVar1), lVar4 != 0)) goto LAB_144a7fb26;
        }
      }
    }
  }
LAB_144a7fb96:
  lVar5 = 0;
LAB_144a7fb26:
  param_1[1] = lVar5;
  param_1[2] = param_2[2];
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144a7fc42 FUN_144a7fc42 body=97 status=ok
// SIG undefined FUN_144a7fc42(void)

void FUN_144a7fc42(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 144a7fca4 FUN_144a7fca4 body=174 status=ok
// SIG undefined FUN_144a7fca4(void)

ulonglong FUN_144a7fca4(int *param_1)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  int *piVar2;
  bool bVar3;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[8] == '\x01') {
    bVar3 = *param_1 != 0;
  }
  else {
    piVar2 = &local_48;
    FUN_1400b56fe(piVar2,param_1,1);
    bVar3 = local_48 != 0;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        piVar2 = (int *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(piVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
    bVar3 = local_28 != 0 && bVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7fd54 FUN_144a7fd54 body=228 status=ok
// SIG undefined FUN_144a7fd54(void)

longlong FUN_144a7fd54(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a4e08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470c76a3;
    local_40 = FUN_1462ab034;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4e08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a7fe3a FUN_144a7fe3a body=337 status=ok
// SIG undefined FUN_144a7fe3a(void)

undefined8 * FUN_144a7fe3a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *_Dst;
  uint uVar5;
  longlong lVar6;
  undefined8 *_Src;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  lVar4 = param_1 + 0x10;
  lVar6 = (longlong)(int)param_3[1];
  if ((lVar6 < 0) || (*(int *)(param_1 + 0x918) <= (int)param_3[1])) {
    lVar7 = *param_3;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar9 = lVar4;
    }
    lVar7 = *param_3;
    if (*(longlong *)(lVar9 + 0x28 + lVar6 * 0x48) == lVar7) {
      puVar8 = (undefined8 *)(lVar9 + lVar6 * 0x48);
LAB_144a7fe7d:
      if (puVar8 != (undefined8 *)0x0) {
        bVar1 = *(byte *)(puVar8 + 4);
        uVar2 = *(ushort *)(puVar8 + 3);
        *(ushort *)(param_2 + 3) = uVar2;
        _Dst = param_2;
        _Src = puVar8;
        if (0x18 < uVar2) {
          _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
          *param_2 = _Dst;
          _Src = (undefined8 *)*puVar8;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar3 == (code *)0x0) {
          memcpy(_Dst,_Src,
                 (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
        }
        else {
          (*pcVar3)();
        }
        *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar8 + 4);
        return param_2;
      }
      goto LAB_144a7ff1f;
    }
  }
  if (lVar7 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar6 = lVar4;
    }
    if ((longlong)*(int *)(param_1 + 0x918) != 0) {
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar6 + 0x28 + lVar9) == lVar7) {
          uVar5 = (int)(lVar9 >> 3) * 0x38e38e39;
          *(uint *)(param_3 + 1) = uVar5;
          if (((int)uVar5 < 0) || (*(int *)(param_1 + 0x918) <= (int)uVar5)) goto LAB_144a7ff1f;
          if (*(longlong *)(param_1 + 0x910) != 0) {
            lVar4 = *(longlong *)(param_1 + 0x910);
          }
          puVar8 = (undefined8 *)(lVar4 + (ulonglong)(uVar5 & 0x7fffffff) * 0x48);
          goto LAB_144a7fe7d;
        }
        lVar9 = lVar9 + 0x48;
      } while ((longlong)*(int *)(param_1 + 0x918) * 0x48 != lVar9);
    }
    *(undefined4 *)(param_3 + 1) = 0xffffffff;
  }
LAB_144a7ff1f:
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 144a7ff8c FUN_144a7ff8c body=18 status=ok
// SIG undefined FUN_144a7ff8c(void)

undefined4 * FUN_144a7ff8c(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_14c9485f0;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
  }
  return puVar1;
}



// FUNCTION 144a7ff9e FUN_144a7ff9e body=344 status=ok
// SIG undefined FUN_144a7ff9e(void)

undefined8 FUN_144a7ff9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xd5) & 0x40) != 0)) {
    if (DAT_14c950d78 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468b50ee;
      local_50 = FUN_1427f23a3;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
    }
    uVar2 = 0;
    if ((param_1 == 0) || (DAT_14c950d78 == param_2)) goto LAB_144a8003c;
    do {
      if (0 < (longlong)*(int *)(param_1 + 0x1e0)) {
        lVar3 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + lVar3);
          if (((lVar1 != 0) && (*(int *)(param_2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
              param_2 + 0x30)) {
            uVar2 = CONCAT71((int7)((ulonglong)(param_2 + 0x30) >> 8),1);
            goto LAB_144a8003c;
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x1e0) * 0x10 != lVar3);
      }
      param_1 = *(longlong *)(param_1 + 0x40);
    } while (param_1 != 0);
  }
  uVar2 = 0;
LAB_144a8003c:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a800f8 FUN_144a800f8 body=228 status=ok
// SIG undefined FUN_144a800f8(void)

longlong FUN_144a800f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6f900 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487a9c57;
    local_40 = FUN_146541d03;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6f900;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a801de FUN_144a801de body=171 status=ok
// SIG undefined FUN_144a801de(void)

ulonglong FUN_144a801de(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar8;
  
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1458de3d0(param_1,iVar3);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = *param_2;
  uVar8 = (ulonglong)((int)param_1[1] - 1);
  if (1 < (int)param_1[1]) {
    lVar4 = *param_1;
    uVar5 = *(undefined8 *)(lVar4 + uVar8 * 8);
    uVar9 = uVar8;
    do {
      uVar10 = (int)uVar9 - 1;
      uVar7 = uVar10 >> 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = *(undefined8 *)(lVar4 + uVar8 * 8);
      dVar2 = *(double *)(*(longlong *)*param_3 + 8 + (ulonglong)((uint)uVar6 & 0xffffff) * 0x70);
      pdVar1 = (double *)(*(longlong *)*param_3 + 8 + (ulonglong)((uint)uVar5 & 0xffffff) * 0x70);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
        return uVar9;
      }
      *(undefined8 *)(lVar4 + uVar9 * 8) = uVar6;
      *(undefined8 *)(lVar4 + uVar8 * 8) = uVar5;
      uVar9 = (ulonglong)uVar7;
    } while (1 < uVar10);
  }
  return uVar8;
}



// FUNCTION 144a8028a FUN_144a8028a body=121 status=ok
// SIG undefined FUN_144a8028a(void)

undefined8 FUN_144a8028a(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == *(longlong *)(param_2 + 8)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar6 = uVar2;
    if ((int)uVar1 < (int)uVar2) {
      uVar6 = uVar1;
    }
    if (0 < (int)uVar6) {
      lVar4 = *(longlong *)(param_2 + 0x10);
      uVar7 = 0;
      do {
        if ((*(ulonglong *)(lVar4 + uVar7 * 8) &
            ~*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar7 * 8)) != 0) goto LAB_144a802ff;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if ((int)uVar1 < (int)uVar2) {
      lVar4 = 0;
      do {
        bVar8 = *(longlong *)((longlong)(int)uVar1 * 8 + *(longlong *)(param_2 + 0x10) + lVar4 * 8)
                == 0;
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar8);
        if (!bVar8) {
          return uVar3;
        }
        iVar5 = (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (~uVar1 + uVar2 != iVar5);
    }
  }
  else {
LAB_144a802ff:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144a80303 FUN_144a80303 body=114 status=ok
// SIG undefined FUN_144a80303(void)

void FUN_144a80303(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(param_1 + lVar6) = 0;
      ((undefined8 *)(param_1 + lVar6))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar6) = 0;
      *(undefined4 *)(param_1 + 0x18 + lVar6) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1c + lVar6) = 0;
      *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
      puVar1 = (undefined8 *)(param_2 + 8 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined4 *)(param_1 + 0x18 + lVar6) = *(undefined4 *)(param_2 + 0x18 + lVar6);
      *(undefined1 *)(param_1 + 0x1c + lVar6) = *(undefined1 *)(param_2 + 0x1c + lVar6);
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x30 + lVar6);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x30 + lVar6);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      *(undefined1 *)(param_1 + 0x40 + lVar6) = *(undefined1 *)(param_2 + 0x40 + lVar6);
      lVar6 = lVar6 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144a80376 FUN_144a80376 body=64 status=ok
// SIG undefined FUN_144a80376(void)

void FUN_144a80376(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144a803b6 FUN_144a803b6 body=176 status=ok
// SIG undefined FUN_144a803b6(void)

ulonglong FUN_144a803b6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_144a8042c;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_1458edfd8(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_144a8042c:
  return uVar5 & 0xffffffff;
}



// FUNCTION 144a80466 FUN_144a80466 body=228 status=ok
// SIG undefined FUN_144a80466(void)

longlong FUN_144a80466(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac1d70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432411d6;
    local_38 = &LAB_147878f54;
    local_40 = &LAB_1417ad3ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xb10;
    FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1d70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8054c FUN_144a8054c body=108 status=ok
// SIG undefined FUN_144a8054c(void)

undefined8 * FUN_144a8054c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c926f30) {
    FUN_144b3d300(&DAT_14c926f30);
    if (DAT_14c926f30 == -1) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
  }
  return &DAT_14c926ca8;
}



// FUNCTION 144a805b8 FUN_144a805b8 body=228 status=ok
// SIG undefined FUN_144a805b8(void)

longlong FUN_144a805b8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0b9a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146408884;
    local_38 = &LAB_147d719e1;
    local_40 = &LAB_140fb41fe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b9a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8069e FUN_144a8069e body=336 status=ok
// SIG undefined FUN_144a8069e(void)

longlong FUN_144a8069e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x4c))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar3 = *plVar2, lVar3 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_144a8072b;
  }
  lVar3 = 0;
LAB_144a8072b:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a807f0 FUN_144a807f0 body=228 status=ok
// SIG undefined FUN_144a807f0(void)

longlong FUN_144a807f0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb22108 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f28909;
    local_40 = FUN_1464376d6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb22108;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a808d5 FUN_144a808d5 body=299 status=ok
// SIG undefined FUN_144a808d5(void)

int * FUN_144a808d5(int *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  iVar4 = (int)param_2;
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  if (param_3 != param_4) {
    lVar3 = (param_3 >> 0x20) * (longlong)(int)param_4;
    lVar1 = (longlong)(int)param_3 * (param_4 >> 0x20);
    lVar2 = (lVar3 * iVar4) / lVar1;
    dVar5 = ((double)fVar8 * (double)lVar3) / (double)lVar1 +
            (((double)lVar3 * (double)iVar4) / (double)lVar1 - (double)lVar2);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar5;
    auVar7 = roundpd(auVar7,auVar7,1);
    fVar6 = (float)(dVar5 - auVar7._0_8_);
    lVar2 = (longlong)auVar7._0_8_ + lVar2;
    fVar8 = fVar6;
    if (0.99999994 <= fVar6) {
      fVar8 = 0.99999994;
    }
    if (0x7ffffffe < lVar2) {
      lVar2 = 0x7fffffff;
    }
    lVar1 = -0x80000000;
    if (-0x80000000 < lVar2) {
      lVar1 = lVar2;
    }
    iVar4 = (int)lVar1;
    fVar8 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar8 & -(uint)(0.0 < fVar6)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
  }
  *param_1 = iVar4;
  param_1[1] = (int)fVar8;
  return param_1;
}



// FUNCTION 144a80a00 FUN_144a80a00 body=75 status=ok
// SIG undefined FUN_144a80a00(void)

int FUN_144a80a00(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = 0;
  do {
    uVar1 = *(ushort *)(param_1 + lVar4);
    uVar2 = *(ushort *)(param_2 + lVar4);
    uVar5 = (uint)uVar2;
    uVar3 = (uint)uVar1;
    if (uVar1 == uVar2) {
      if (uVar3 == 0) {
        return 0;
      }
    }
    else {
      if (0x7f < (uVar2 | uVar1)) {
LAB_144a80a44:
        return uVar3 - uVar5;
      }
      uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_144a80a44;
    }
    lVar4 = lVar4 + 2;
  } while( true );
}



// FUNCTION 144a80a4c FUN_144a80a4c body=771 status=ok
// SIG undefined FUN_144a80a4c(void)

undefined1 (*) [16] FUN_144a80a4c(double *param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar10 = *param_3;
  dVar17 = param_3[1];
  dVar1 = param_3[2];
  dVar14 = param_3[8];
  dVar5 = param_3[9];
  dVar7 = param_3[10];
  dVar8 = dVar17 + dVar17;
  dVar2 = dVar1 + dVar1;
  dVar13 = dVar10 * (dVar10 + dVar10);
  dVar11 = (1.0 - (dVar1 * dVar2 + dVar17 * dVar8)) * dVar14;
  dVar12 = (1.0 - (dVar1 * dVar2 + dVar13)) * dVar5;
  dVar9 = (1.0 - (dVar13 + dVar17 * dVar8)) * dVar7;
  dVar1 = param_3[3];
  dVar13 = dVar2 * dVar1;
  dVar6 = (dVar10 + dVar10) * param_3[3];
  dVar1 = dVar8 * dVar1;
  dVar15 = (dVar8 * dVar10 + dVar13) * dVar14;
  dVar16 = (dVar2 * dVar17 + dVar6) * dVar5;
  dVar4 = (dVar1 + *param_3 * dVar2) * dVar7;
  dVar14 = (*param_3 * dVar2 - dVar1) * dVar14;
  dVar5 = (dVar8 * dVar10 - dVar13) * dVar5;
  dVar7 = (dVar2 * dVar17 - dVar6) * dVar7;
  dVar1 = *param_1;
  dVar2 = param_1[2];
  dVar13 = param_1[1];
  dVar6 = param_1[3];
  dVar8 = param_1[4];
  dVar10 = param_1[5];
  dVar18 = ABS(dVar4 * dVar10) + ABS(dVar5 * dVar8) + ABS(dVar11 * dVar6);
  dVar19 = ABS(dVar7 * param_1[5]) + ABS(dVar12 * param_1[4]) + ABS(dVar15 * param_1[3]);
  dVar17 = ABS(dVar9 * dVar10) + ABS(dVar16 * dVar8) + ABS(dVar14 * dVar6);
  dVar6 = dVar4 * dVar4 + dVar5 * dVar5 + dVar11 * dVar11;
  dVar8 = dVar7 * dVar7 + dVar12 * dVar12 + dVar15 * dVar15;
  dVar10 = dVar9 * dVar9 + dVar16 * dVar16 + dVar14 * dVar14;
  if (dVar6 <= dVar8) {
    dVar6 = dVar8;
  }
  if (dVar6 <= dVar10) {
    dVar6 = dVar10;
  }
  dVar10 = param_3[4];
  dVar7 = dVar2 * dVar7 + param_1[1] * dVar12 + dVar1 * dVar15 + param_3[5];
  dVar8 = param_3[6];
  if (dVar6 < 0.0) {
    dVar6 = sqrt(dVar6);
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  dVar15 = SQRT(dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18);
  dVar12 = dVar6 * param_1[6];
  if (dVar15 <= dVar6 * param_1[6]) {
    dVar12 = dVar15;
  }
  auVar3._8_4_ = SUB84(dVar7,0);
  auVar3._0_8_ = dVar2 * dVar4 + dVar13 * dVar5 + dVar1 * dVar11 + dVar10;
  auVar3._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar3;
  *(double *)param_2[1] = dVar2 * dVar9 + dVar13 * dVar16 + dVar1 * dVar14 + dVar8;
  *(double *)(param_2[1] + 8) = dVar18;
  *(double *)param_2[2] = dVar19;
  *(double *)(param_2[2] + 8) = dVar17;
  *(double *)param_2[3] = dVar12;
  return param_2;
}



// FUNCTION 144a80d50 FUN_144a80d50 body=115 status=ok
// SIG undefined FUN_144a80d50(void)

void FUN_144a80d50(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a38cff0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 144a80dc3 FUN_144a80dc3 body=60 status=ok
// SIG undefined FUN_144a80dc3(void)

void FUN_144a80dc3(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144a80e00 FUN_144a80e00 body=11 status=ok
// SIG undefined FUN_144a80e00(void)

bool FUN_144a80e00(longlong param_1)

{
  return *(char *)(param_1 + 0x152) == '\x03';
}



// FUNCTION 144a80e0c FUN_144a80e0c body=99 status=ok
// SIG undefined FUN_144a80e0c(void)

undefined1 * FUN_144a80e0c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  
  lVar1 = *(longlong *)(&DAT_00001ce8 + param_1);
  if ((lVar1 == 0) || (*(byte *)(lVar1 + 0x178) < 2)) {
    return (undefined1 *)CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(param_1 + 0x1ee0) != '\0')
    ;
  }
  plVar2 = *(longlong **)(param_1 + 0x1eb8);
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 0x40) != (code *)&LAB_1449cc0ea) {
                    /* WARNING: Could not recover jumptable at 0x000144a80e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x40))();
      return puVar3;
    }
    if (*(char *)((longlong)plVar2 + 0xb2) == '\0') {
      if (*(char *)((longlong)plVar2 + 0x79) != '\0') {
        return &LAB_1449cc001;
      }
      if (0 < (int)plVar2[4]) {
        return (undefined1 *)CONCAT71(0x1449cc0,(char)plVar2[0xf]);
      }
    }
  }
  return (undefined1 *)0x0;
}



// FUNCTION 144a80e70 FUN_144a80e70 body=423 status=ok
// SIG undefined FUN_144a80e70(void)

undefined * FUN_144a80e70(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9caa78) {
    FUN_144b3d300(&DAT_14c9caa78);
    if (DAT_14c9caa78 == -1) {
      FUN_14162ac7e(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"FogStruct";
      local_78 = L"FFogUniformParameters";
      local_50 = 0x110;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ca9f8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bfdc16);
      _Init_thread_footer(&DAT_14c9caa78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ca9f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a81018 FUN_144a81018 body=174 status=ok
// SIG undefined FUN_144a81018(void)

longlong FUN_144a81018(longlong param_1,char *param_2)

{
  size_t sVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (param_2 == (char *)0x0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else {
    sVar1 = strlen(param_2);
    iVar5 = (int)sVar1;
    *(int *)(param_1 + 0x110) = iVar5;
    uVar4 = iVar5 + 1;
    if (uVar4 < 0x81) {
      lVar2 = 0;
    }
    else {
      FUN_1446efa72((longlong *)(param_1 + 0x100),0,uVar4,2);
      lVar2 = *(longlong *)(param_1 + 0x100);
    }
    if (lVar2 == 0) {
      lVar2 = param_1;
    }
    *(longlong *)(param_1 + 0x108) = lVar2;
    if (-1 < iVar5) {
      uVar3 = 0;
      do {
        *(short *)(lVar2 + uVar3 * 2) = (short)param_2[uVar3];
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
  }
  return param_1;
}



// FUNCTION 144a810c6 FUN_144a810c6 body=174 status=ok
// SIG undefined FUN_144a810c6(void)

undefined * FUN_144a810c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952478) {
    FUN_144b3d300(&DAT_14c952478);
    if (DAT_14c952478 == -1) {
      FUN_1446f4b16();
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0,0x4018001,0,&DAT_14c951c78,
                    FUN_1403a5f94);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
  }
  return &DAT_14c952428;
}



// FUNCTION 144a81174 FUN_144a81174 body=70 status=ok
// SIG undefined FUN_144a81174(void)

int FUN_144a81174(longlong *param_1)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  
  uVar2 = *(ushort *)((longlong)param_1 + 0xc);
  if (uVar2 == 0xffff) {
    if ((*param_1 == 0) || ((short)param_1[1] == 1)) {
      uVar2 = 0;
    }
    else {
      lVar3 = FUN_144a811ba(param_1);
      sVar1 = (short)*(undefined4 *)(lVar3 + 0x5c);
      uVar2 = -sVar1 & ((short)*(undefined4 *)(lVar3 + 0x58) + sVar1) - 1U;
    }
    *(ushort *)((longlong)param_1 + 0xc) = uVar2;
  }
  return (int)(short)uVar2;
}



// FUNCTION 144a811ba FUN_144a811ba body=392 status=ok
// SIG undefined FUN_144a811ba(void)

longlong FUN_144a811ba(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = DAT_14cb420c0;
  if ((short)param_1[1] == 3) goto LAB_144a81224;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if (DAT_14c948f88 == 0) {
      local_38 = &DAT_1427db2a2;
      lVar2 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948f88 = lVar2;
      FUN_1446f470e(local_30,L"Struct",1);
      local_48 = &LAB_146891313;
      local_50 = FUN_146272f63;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 8;
      local_70 = 0x10000020;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar2);
      DAT_14c948f88 = lVar2;
      uVar3 = FUN_1446f8646();
      lVar2 = DAT_14c948f88;
      uVar4 = FUN_1400163b0();
      local_78 = L"Struct";
      FUN_14574b446(uVar4,lVar2,uVar3,L"/Script/CoreUObject");
      lVar5 = *param_1;
      if (lVar5 == 0) goto LAB_144a8133c;
    }
    lVar2 = 0;
    if ((DAT_14c948f88 == 0) || (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 == 0))
    goto LAB_144a81224;
    if (*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
          == DAT_14c948f88 + 0x30) {
        lVar2 = lVar5;
      }
      goto LAB_144a81224;
    }
  }
LAB_144a8133c:
  lVar2 = 0;
LAB_144a81224:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 144a81344 FUN_144a81344 body=610 status=ok
// SIG undefined FUN_144a81344(void)

void FUN_144a81344(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
      ((lVar7 = *(longlong *)(param_1 + 0xb0), lVar7 != 0 ||
       (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)))) &&
     ((*(byte *)(lVar7 + 0x152) == 1 || (*(byte *)(lVar7 + 0x152) - 5 < 2)))) {
    if ((*(longlong *)(lVar7 + 0x178) != 0) && (DAT_14c76152c == '\x01')) {
      bVar2 = *(byte *)(param_1 + 0x1fc);
      iVar4 = *(int *)(*(longlong *)(lVar7 + 0x178) + 0x3e4);
      if (iVar4 < 0) {
        iVar4 = FUN_141348de4();
      }
      iVar5 = DAT_14cadb580;
      lVar7 = DAT_14c872be0;
      if (iVar4 < (int)(uint)bVar2) {
        lVar8 = (longlong)(int)DAT_14cadb580;
        DAT_14cadb580 = DAT_14cadb580 + 1;
        if (DAT_14cadb584 < DAT_14cadb580) {
          FUN_14134c58a(&DAT_14cadb578,iVar5);
        }
        puVar1 = (uint *)(DAT_14cadb578 + lVar8 * 0x10);
        *(undefined8 *)(DAT_14cadb578 + lVar8 * 0x10) = 0;
        if (param_1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0xc);
          *puVar1 = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          uVar3 = *(uint *)(lVar8 + 0x10);
          if (*(uint *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar6 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar6);
            }
            LOCK();
            uVar3 = *(uint *)(lVar8 + 0x10);
            bVar10 = uVar3 == 0;
            if (bVar10) {
              *(uint *)(lVar8 + 0x10) = uVar6;
              uVar3 = 0;
            }
            UNLOCK();
            if (bVar10) {
              uVar3 = uVar6;
            }
          }
        }
        puVar1[1] = uVar3;
        *(longlong *)(puVar1 + 2) = lVar7 + 10;
        return;
      }
    }
    uVar3 = DAT_14cadb570;
    lVar7 = (longlong)(int)DAT_14cadb570;
    DAT_14cadb570 = DAT_14cadb570 + 1;
    if (DAT_14cadb574 < DAT_14cadb570) {
      FUN_145915ccc(&DAT_14cadb568,uVar3);
    }
    lVar8 = DAT_14cadb568;
    *(undefined8 *)(DAT_14cadb568 + lVar7 * 8) = 0;
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(lVar8 + lVar7 * 8) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar4 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar4 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar4 = iVar5;
        }
      }
    }
    *(int *)(lVar8 + 4 + lVar7 * 8) = iVar4;
  }
  return;
}



// FUNCTION 144a815a6 FUN_144a815a6 body=269 status=ok
// SIG undefined FUN_144a815a6(void)

longlong FUN_144a815a6(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_144a815f3;
  }
  lVar1 = 0;
LAB_144a815f3:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a816b4 FUN_144a816b4 body=228 status=ok
// SIG undefined FUN_144a816b4(void)

longlong FUN_144a816b4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1b878 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147e2d7c3;
    local_40 = FUN_140f80add;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x438;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavAnimData",&DAT_14cb1b878,FUN_14641c7a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b878;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a817a2 FUN_144a817a2 body=228 status=ok
// SIG undefined FUN_144a817a2(void)

longlong FUN_144a817a2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9512b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140631fbe;
    local_20 = &LAB_145834656;
    local_28 = &LAB_146272d4c;
    local_38 = &LAB_1468be089;
    local_40 = FUN_14609ba58;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x410;
    FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9512b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a81888 FUN_144a81888 body=326 status=ok
// SIG undefined FUN_144a81888(void)

longlong FUN_144a81888(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar1 != 0) != 0) goto LAB_144a819c2;
    if (lVar1 != 0) goto LAB_144a818b8;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_144a819c2:
      FUN_1456cec3c(lVar1);
    }
LAB_144a818b8:
    if (DAT_14cb06da8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464003b0;
      local_38 = &LAB_147d17bdf;
      local_40 = &LAB_1417edf22;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) goto LAB_144a818df;
  }
  lVar1 = 0;
LAB_144a818df:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a819d0 FUN_144a819d0 body=57 status=ok
// SIG undefined FUN_144a819d0(void)

void FUN_144a819d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4dd0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4dd0 = FUN_140002ddd(FUN_14173b99c,uVar1,L"GbxBlackboardEntryRef");
  }
  return;
}



// FUNCTION 144a81a0a FUN_144a81a0a body=66 status=ok
// SIG undefined FUN_144a81a0a(void)

longlong FUN_144a81a0a(void)

{
  longlong lVar1;
  
  if (DAT_14c9670a0 == 0) {
    lVar1 = FUN_14001cc68(0x78,0x10);
    FUN_14593912e(lVar1,1,1);
    DAT_14c9670a0 = lVar1;
  }
  return DAT_14c9670a0;
}



// FUNCTION 144a81a4c FUN_144a81a4c body=168 status=ok
// SIG undefined FUN_144a81a4c(void)

void FUN_144a81a4c(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *(longlong *)(param_1 + 2);
  lVar8 = *(longlong *)(lVar9 + 8);
  if (*(longlong *)(lVar9 + 8) == 0) {
    lVar8 = lVar9;
  }
  iVar2 = *(int *)(lVar9 + 0x10);
  iVar4 = *param_1;
  lVar9 = (longlong)iVar4;
  uVar5 = param_1[4] & *(uint *)(lVar8 + lVar9 * 4);
  if (uVar5 == 0) {
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar3 = param_1[6];
    iVar7 = iVar6 >> 5;
    if (iVar6 >> 5 < iVar4) {
      iVar7 = iVar4;
    }
    lVar10 = 0;
    do {
      *param_1 = iVar4 + 1 + (int)lVar10;
      iVar3 = iVar3 + 0x20;
      param_1[6] = iVar3;
      if (iVar7 - lVar9 == lVar10) {
        param_1[5] = iVar2;
        return;
      }
      uVar5 = *(uint *)(lVar8 + lVar9 * 4 + 4 + lVar10 * 4);
      param_1[4] = -1;
      lVar10 = lVar10 + 1;
    } while (uVar5 == 0);
  }
  else {
    iVar3 = param_1[6];
  }
  param_1[1] = -uVar5 & uVar5;
  uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar4 = (iVar3 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar4) {
    iVar4 = iVar2;
  }
  param_1[5] = iVar4;
  return;
}



// FUNCTION 144a81af4 FUN_144a81af4 body=423 status=ok
// SIG undefined FUN_144a81af4(void)

undefined * FUN_144a81af4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d5fb8) {
    FUN_144b3d300(&DAT_14c9d5fb8);
    if (DAT_14c9d5fb8 == -1) {
      FUN_1413d634c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"HairStrands";
      local_78 = L"FHairStrandsViewUniformParameters";
      local_50 = 0x90;
      local_58 = 0x1e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d5f38,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c59de9);
      _Init_thread_footer(&DAT_14c9d5fb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d5f38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a81c9c FUN_144a81c9c body=324 status=ok
// SIG undefined FUN_144a81c9c(void)

longlong FUN_144a81c9c(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 in_stack_00000038;
  undefined8 in_stack_00000040;
  longlong in_stack_00000050;
  undefined1 auStack_b8 [24];
  undefined8 auStack_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [18];
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar14 = 0x10;
  do {
    *(undefined8 *)((longlong)auStack_a0 + lVar14) = 0;
    *(undefined8 *)((longlong)auStack_a0 + lVar14 + 8) = 0;
    *(undefined8 *)((longlong)&local_90 + lVar14) = DAT_14c9a5298;
    *(undefined4 *)((longlong)&uStack_88 + lVar14) = DAT_14c9a52a0;
    lVar14 = lVar14 + 0x20;
  } while (lVar14 != 0x70);
  local_30 = in_stack_00000040;
  local_28 = in_stack_00000038;
  lVar14 = 0;
  do {
    if (*(longlong *)(in_stack_00000050 + lVar14) != 0) {
      puVar1 = (undefined4 *)(in_stack_00000050 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *(undefined4 *)((longlong)&uStack_80 + lVar14) = puVar1[4];
      *(undefined4 *)((longlong)&uStack_80 + lVar14 + 4) = uVar7;
      *(undefined4 *)((longlong)auStack_78 + lVar14) = uVar8;
      *(undefined4 *)((longlong)auStack_78 + lVar14 + 4) = uVar9;
      *(undefined4 *)((longlong)&local_90 + lVar14) = uVar3;
      *(undefined4 *)((longlong)&local_90 + lVar14 + 4) = uVar4;
      *(undefined4 *)((longlong)&uStack_88 + lVar14) = uVar5;
      *(undefined4 *)((longlong)&uStack_88 + lVar14 + 4) = uVar6;
    }
    lVar14 = lVar14 + 0x20;
  } while (lVar14 != 0x60);
  if (*(int *)(param_1 + 0xe4) == 0) {
    uVar11 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x3e0))();
    bVar10 = FUN_1413db632(uVar11,*(undefined4 *)(param_1 + 0xe0));
    *(int *)(param_1 + 0xe4) = 1 << (bVar10 & 0x1f);
  }
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1413db522(param_1 + 0x198,iVar2);
  }
  puVar12 = &local_90;
  puVar13 = (undefined8 *)((longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 0x198));
  for (lVar14 = 0xe; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a81de2 thunk_FUN_1400020e8 body=5 status=ok
// SIG undefined thunk_FUN_1400020e8(void)

void thunk_FUN_1400020e8(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    uVar3 = param_3 + (uint)(iVar1 == 0);
    *(uint *)(param_1 + 1) = uVar3 + iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_144a2dbb8(param_1,iVar1);
    }
    lVar2 = (longlong)(int)(iVar1 + -1 + (uint)(iVar1 == 0)) * 2;
    pvVar4 = (void *)(*param_1 + lVar2);
    _Size = (longlong)param_3 * 2;
    memcpy(pvVar4,param_2,_Size);
    puVar5 = (undefined2 *)((longlong)pvVar4 + _Size);
    if (puVar5 == (undefined2 *)0x0) {
      pvVar4 = (void *)(lVar2 + *param_1);
      memcpy(pvVar4,param_2,_Size);
      puVar5 = (undefined2 *)((longlong)pvVar4 + (longlong)param_3 * 2);
    }
    *puVar5 = 0;
  }
  return;
}



// FUNCTION 144a81de8 FUN_144a81de8 body=20 status=ok
// SIG undefined FUN_144a81de8(void)

void FUN_144a81de8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149e32400;
  *(undefined2 *)(param_1 + 1) = 0x100;
  return;
}



// FUNCTION 144a81dfc FUN_144a81dfc body=228 status=ok
// SIG undefined FUN_144a81dfc(void)

longlong FUN_144a81dfc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac4ee8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147885155;
    local_40 = &LAB_1459be7ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"NavRelevantInterface",&DAT_14cac4ee8,&DAT_147885154);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4ee8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a81ee1 FUN_144a81ee1 body=75 status=ok
// SIG undefined FUN_144a81ee1(void)

void FUN_144a81ee1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144a81f2c FUN_144a81f2c body=505 status=ok
// SIG undefined FUN_144a81f2c(void)

int FUN_144a81f2c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
LAB_144a82036:
    iVar5 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_1413f017e(param_1,iVar5);
    }
    plVar3 = (longlong *)((longlong)iVar5 * 0x50 + *param_1);
    *plVar3 = *param_2;
    *(undefined1 *)(plVar3 + 8) = 0xff;
    FUN_140164444(plVar3 + 2,param_2 + 2);
    return iVar5;
  }
  plVar3 = (longlong *)*param_1;
  plVar10 = plVar3;
LAB_144a81f64:
  if ((*plVar10 != *param_2) || (cVar1 = (char)plVar10[8], cVar1 != (char)param_2[8]))
  goto LAB_144a81f6c;
  if (cVar1 == '\x01') {
switchD_144a81fd1_caseD_3:
    if ((*(float *)(plVar10 + 2) == *(float *)(param_2 + 2)) &&
       (!NAN(*(float *)(plVar10 + 2)) && !NAN(*(float *)(param_2 + 2)))) {
      if ((*(float *)((longlong)plVar10 + 0x14) == *(float *)((longlong)param_2 + 0x14)) &&
         (!NAN(*(float *)((longlong)plVar10 + 0x14)) && !NAN(*(float *)((longlong)param_2 + 0x14))))
      {
        if ((*(float *)(plVar10 + 3) == *(float *)(param_2 + 3)) &&
           (!NAN(*(float *)(plVar10 + 3)) && !NAN(*(float *)(param_2 + 3)))) {
          bVar11 = NAN(*(float *)((longlong)plVar10 + 0x1c)) ||
                   NAN(*(float *)((longlong)param_2 + 0x1c));
          bVar12 = *(float *)((longlong)plVar10 + 0x1c) == *(float *)((longlong)param_2 + 0x1c);
          goto LAB_144a81fdd;
        }
      }
    }
    goto LAB_144a81f6c;
  }
  switch(cVar1) {
  case '\0':
    if (plVar10[2] == param_2[2]) goto switchD_144a81fd1_caseD_5;
    break;
  default:
    FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype");
    break;
  case '\x02':
    bVar11 = NAN(*(float *)(plVar10 + 2)) || NAN(*(float *)(param_2 + 2));
    bVar12 = *(float *)(plVar10 + 2) == *(float *)(param_2 + 2);
LAB_144a81fdd:
    if ((bVar12) && (!bVar11)) goto switchD_144a81fd1_caseD_5;
    break;
  case '\x03':
    goto switchD_144a81fd1_caseD_3;
  case '\x04':
    if ((plVar10[3] == param_2[3]) && (plVar10[4] == param_2[4])) {
      iVar5 = (int)plVar10[6];
      if (iVar5 == (int)param_2[6]) {
        if (1 < iVar5) {
          lVar4 = 0;
          do {
            uVar6 = *(ushort *)(plVar10[5] + lVar4);
            uVar7 = (ulonglong)uVar6;
            uVar8 = *(ushort *)(param_2[5] + lVar4);
            if (uVar6 == uVar8) {
              if (uVar6 == 0) break;
            }
            else {
              if (0x7f < (uVar8 | uVar6)) goto LAB_144a820c5;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar9 = (ulonglong)uVar8;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar9]) goto LAB_144a820c5;
            }
            lVar4 = lVar4 + 2;
          } while( true );
        }
      }
      else if ((int)param_2[6] + iVar5 != 1) break;
      goto switchD_144a81fd1_caseD_5;
    }
    break;
  case '\x05':
    goto switchD_144a81fd1_caseD_5;
  }
  goto LAB_144a81f6c;
LAB_144a820c5:
  if (uVar6 == uVar8) {
switchD_144a81fd1_caseD_5:
    iVar5 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar3) >> 4) * -0x33333333;
    if (iVar5 != -1) {
      return iVar5;
    }
    goto LAB_144a82036;
  }
LAB_144a81f6c:
  plVar10 = plVar10 + 10;
  if (plVar10 == plVar3 + (longlong)(int)lVar2 * 10) goto LAB_144a82036;
  goto LAB_144a81f64;
}



// FUNCTION 144a82126 FUN_144a82126 body=228 status=ok
// SIG undefined FUN_144a82126(void)

longlong FUN_144a82126(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6fd58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487a9cc5;
    local_40 = FUN_14654339c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6fd58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8220c FUN_144a8220c body=18 status=ok
// SIG undefined FUN_144a8220c(void)

undefined8 FUN_144a8220c(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    return CONCAT71((int7)((ulonglong)pbVar1 >> 8),(*pbVar1 & 3) != 0);
  }
  return 0;
}



// FUNCTION 144a8221e FUN_144a8221e body=267 status=ok
// SIG undefined FUN_144a8221e(void)

undefined * FUN_144a8221e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e1d98) {
    FUN_144b3d300(&DAT_14c9e1d98);
    if (DAT_14c9e1d98 == -1) {
      FUN_14596f92a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FEmptyShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x7a6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e81);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e1d18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8232a FUN_144a8232a body=105 status=ok
// SIG undefined FUN_144a8232a(void)

int * FUN_144a8232a(int *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(ulonglong *)(param_1 + 1) == DAT_14c948034) && (*param_1 != DAT_14c948030)) {
    FUN_14011791e(&local_20,*param_1,*(ulonglong *)(param_1 + 1) >> 0x20);
    *(undefined8 *)(param_1 + 1) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a82394 FUN_144a82394 body=129 status=ok
// SIG undefined FUN_144a82394(void)

longlong * FUN_144a82394(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  
  if ((*param_1 != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*param_1 + 0x50));
  }
  bVar3 = DAT_14cb26569;
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0) && ((bVar3 & 1) != 0)) {
    piVar2 = *(int **)(lVar1 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar4 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        return param_1;
      }
      iVar4 = 2;
    }
    LOCK();
    piVar2[2] = iVar4;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 144a82416 FUN_144a82416 body=1824 status=ok
// SIG undefined FUN_144a82416(void)

void FUN_144a82416(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong *puVar21;
  uint uVar22;
  undefined1 auStack_528 [40];
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  ulonglong local_4e8;
  ulonglong uStack_4e0;
  undefined1 local_4d8 [1152];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x648) + (longlong)(int)param_3 * 0x50);
  local_4f8 = param_2;
  if ((-1 < *(int *)(*(longlong *)(param_1 + 0x648) + (longlong)(int)param_3 * 0x50)) &&
     (-1 < *(int *)((longlong)puVar3 + 4))) goto LAB_144a82790;
  uVar22 = (uint)puVar3[8];
  uVar8 = *(uint *)((longlong)puVar3 + 0x44);
  if ((int)(uVar22 & uVar8) < 0) {
    FUN_144807d62(param_1 + 0xa30,&local_4e8);
    uVar11 = local_4e8 << 7;
    uVar14 = uVar11 & 0xffffff80ffffff80;
    uVar19 = ((ulonglong)((int)uVar11 + 0x80) | uVar11 & 0xffffff8000000000) + 0x8000000000;
    uVar11 = local_4e8;
LAB_144a82625:
    *puVar3 = uVar11;
    puVar3[1] = uVar14;
    puVar3[2] = uVar19;
    if ((uVar11 & 0x8000000080000000) == 0) {
      *(uint *)(puVar3 + 3) = param_3;
      *(short *)((longlong)puVar3 + 0x1c) = (short)(uVar14 >> 3);
      *(short *)((longlong)puVar3 + 0x1e) = (short)(uVar14 >> 0x23);
      *(ushort *)(puVar3 + 4) = (ushort)*(byte *)(local_4f8 + 2);
      *(ushort *)((longlong)puVar3 + 0x22) = (ushort)*(byte *)(local_4f8 + 3);
      uVar11 = (ulonglong)param_3;
      local_500 = param_1;
      if (DAT_14c760da4 != 0) {
        local_4f0 = param_1 + 0xc88;
        uVar14 = 0;
        do {
          uVar16 = 0;
          if ((param_4 >> ((uint)uVar14 & 0x1f) & 1) != 0) {
            uVar16 = *(undefined4 *)(local_500 + 0xa1c);
          }
          puVar4 = (uint *)(local_4f0 + uVar14 * 0x28);
          if (*puVar4 == puVar4[1]) {
            uVar22 = *puVar4 * 2;
            uVar8 = 0x20;
            if (0x20 < uVar22) {
              uVar8 = uVar22;
            }
            FUN_141400538(puVar4,uVar8);
          }
          if (puVar4[2] <= param_3) {
            uVar19 = (ulonglong)(param_3 + (param_3 == 0xffffffff)) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            uVar8 = 1 << ((byte)lVar9 & 0x1f);
            uVar22 = 0x20;
            if (0x20 < uVar8) {
              uVar22 = uVar8;
            }
            FUN_1414005c0(puVar4,uVar22);
          }
          uVar22 = *puVar4;
          uVar19 = (ulonglong)uVar22;
          *puVar4 = uVar22 + 1;
          *(uint *)(*(longlong *)(puVar4 + 4) + uVar19 * 4) = param_3;
          *(undefined4 *)(*(longlong *)(puVar4 + 6) + uVar11 * 4) = uVar16;
          *(uint *)(*(longlong *)(puVar4 + 8) + uVar11 * 4) = uVar22;
          uVar8 = *(uint *)(*(longlong *)(puVar4 + 4) + uVar19 * 4);
          uVar18 = uVar22;
          if (uVar19 == 0) {
            uVar19 = 0;
          }
          else {
            do {
              uVar1 = uVar18 - 1;
              uVar7 = uVar1 >> 1;
              uVar19 = (ulonglong)uVar7;
              uVar5 = *(uint *)(*(longlong *)(puVar4 + 4) + uVar19 * 4);
              if (*(uint *)(*(longlong *)(puVar4 + 6) + (ulonglong)uVar5 * 4) <=
                  *(uint *)(*(longlong *)(puVar4 + 6) + (ulonglong)uVar8 * 4)) {
                uVar19 = (ulonglong)uVar18;
                break;
              }
              *(uint *)(*(longlong *)(puVar4 + 4) + (ulonglong)uVar18 * 4) = uVar5;
              *(uint *)(*(longlong *)(puVar4 + 8) +
                       (ulonglong)*(uint *)(*(longlong *)(puVar4 + 4) + (ulonglong)uVar18 * 4) * 4)
                   = uVar18;
              uVar18 = uVar7;
            } while (1 < uVar1);
          }
          if ((uint)uVar19 != uVar22) {
            *(uint *)(*(longlong *)(puVar4 + 4) + uVar19 * 4) = uVar8;
            *(uint *)(*(longlong *)(puVar4 + 8) +
                     (ulonglong)*(uint *)(*(longlong *)(puVar4 + 4) + uVar19 * 4) * 4) =
                 (uint)uVar19;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < DAT_14c760da4);
      }
      param_1 = local_500;
      if (*(char *)(local_4f8 + 10) == '\0') {
        lVar9 = local_500 + 0xb20;
        uVar16 = *(undefined4 *)(local_500 + 0x8b8);
        if (*(int *)(local_500 + 0xb20) == *(int *)(local_500 + 0xb24)) {
          uVar22 = *(int *)(local_500 + 0xb20) * 2;
          uVar8 = 0x20;
          if (0x20 < uVar22) {
            uVar8 = uVar22;
          }
          FUN_141400538(lVar9,uVar8);
        }
        if (*(uint *)(local_500 + 0xb28) <= param_3) {
          uVar14 = (ulonglong)(param_3 + (param_3 == 0xffffffff)) * 2 + 1;
          lVar6 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar8 = 1 << ((byte)lVar6 & 0x1f);
          uVar22 = 0x20;
          if (0x20 < uVar8) {
            uVar22 = uVar8;
          }
          FUN_1414005c0(lVar9,uVar22);
        }
        uVar22 = *(uint *)(local_500 + 0xb20);
        uVar14 = (ulonglong)uVar22;
        *(uint *)(local_500 + 0xb20) = uVar22 + 1;
        *(uint *)(*(longlong *)(local_500 + 0xb30) + uVar14 * 4) = param_3;
        *(undefined4 *)(*(longlong *)(local_500 + 0xb38) + uVar11 * 4) = uVar16;
        *(uint *)(*(longlong *)(local_500 + 0xb40) + uVar11 * 4) = uVar22;
        uVar8 = *(uint *)(*(longlong *)(local_500 + 0xb30) + uVar14 * 4);
        uVar18 = uVar22;
        if (uVar14 == 0) {
          uVar11 = 0;
        }
        else {
          do {
            uVar1 = uVar18 - 1;
            uVar7 = uVar1 >> 1;
            uVar11 = (ulonglong)uVar7;
            uVar5 = *(uint *)(*(longlong *)(local_500 + 0xb30) + uVar11 * 4);
            if (*(uint *)(*(longlong *)(local_500 + 0xb38) + (ulonglong)uVar5 * 4) <=
                *(uint *)(*(longlong *)(local_500 + 0xb38) + (ulonglong)uVar8 * 4)) {
              uVar11 = (ulonglong)uVar18;
              break;
            }
            *(uint *)(*(longlong *)(local_500 + 0xb30) + (ulonglong)uVar18 * 4) = uVar5;
            *(uint *)(*(longlong *)(local_500 + 0xb40) +
                     (ulonglong)*(uint *)(*(longlong *)(local_500 + 0xb30) + (ulonglong)uVar18 * 4)
                     * 4) = uVar18;
            uVar18 = uVar7;
          } while (1 < uVar1);
        }
        param_1 = local_500;
        if ((uint)uVar11 != uVar22) {
          *(uint *)(*(longlong *)(local_500 + 0xb30) + uVar11 * 4) = uVar8;
          *(uint *)(*(longlong *)(local_500 + 0xb40) +
                   (ulonglong)*(uint *)(*(longlong *)(local_500 + 0xb30) + uVar11 * 4) * 4) =
               (uint)uVar11;
        }
      }
    }
  }
  else {
    iVar17 = 0x1f;
    if (uVar22 != 0) {
      for (; uVar22 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar22 == 0) {
      iVar17 = 0;
    }
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar12 = iVar12 << 3;
    if (uVar8 == 0) {
      iVar12 = 0;
    }
    uVar11 = (ulonglong)(iVar12 + iVar17 & 0xff);
    uVar14 = (ulonglong)*(byte *)(param_1 + 0xae0 + uVar11);
    plVar2 = (longlong *)(param_1 + 0xad0);
    if (uVar14 == 0xff) {
      iVar17 = *(int *)(param_1 + 0xad8);
      *(char *)(param_1 + 0xae0 + uVar11) = (char)iVar17;
      local_4e8 = puVar3[8];
      uStack_4e0 = 0x80 / (longlong)(int)local_4e8 & 0xffffffffU |
                   0x80 / (longlong)(int)(local_4e8 >> 0x20) << 0x20;
      *(uint *)(param_1 + 0xad8) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0xadc) < iVar17 + 1U) {
        FUN_1400ee2f8(plVar2,iVar17);
      }
      puVar10 = (ulonglong *)(*plVar2 + (longlong)iVar17 * 0x4a0);
      *puVar10 = local_4e8;
      puVar10[1] = uStack_4e0;
      memmove(puVar10 + 2,local_4d8,0x480);
      puVar10[0x92] = 0;
      local_58 = 0;
      puVar10[0x93] = 0x1000000000;
      local_50 = 0x1000000000;
      FUN_14473dd6f(local_4d8,0);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      piVar15 = (int *)((longlong)(*(int *)(param_1 + 0xad8) + -1) * 0x4a0 +
                       *(longlong *)(param_1 + 0xad0));
    }
    else {
      piVar15 = (int *)(uVar14 * 0x4a0 + *plVar2);
    }
    puVar10 = *(ulonglong **)(piVar15 + 0x124);
    if (*(ulonglong **)(piVar15 + 0x124) == (ulonglong *)0x0) {
      puVar10 = (ulonglong *)(piVar15 + 4);
    }
    if ((longlong)piVar15[0x126] != 0) {
      lVar9 = (longlong)piVar15[0x126] * 0x48;
      do {
        if (0 < (int)puVar10[8]) {
          if (puVar10 != (ulonglong *)0x0) goto LAB_144a82555;
          break;
        }
        puVar10 = puVar10 + 9;
        lVar9 = lVar9 + -0x48;
      } while (lVar9 != 0);
    }
    FUN_144807d62(param_1 + 0xa30);
    puVar10 = (ulonglong *)FUN_1400ee180(piVar15 + 4);
    *puVar10 = local_4e8;
    puVar10[1] = *(ulonglong *)(piVar15 + 2);
    iVar17 = piVar15[3];
    iVar12 = piVar15[2];
    *(int *)(puVar10 + 8) = iVar17 * iVar12;
    FUN_1400ee208(puVar10 + 2,iVar17 * iVar12,0);
    if (puVar10 != (ulonglong *)0x0) {
LAB_144a82555:
      puVar13 = puVar10 + 2;
      if ((ulonglong *)puVar10[6] != (ulonglong *)0x0) {
        puVar13 = (ulonglong *)puVar10[6];
      }
      uVar22 = (int)puVar10[7] + 0x1f;
      iVar17 = -1;
      if (0x1f < uVar22) {
        lVar9 = 0;
        puVar21 = puVar13;
LAB_144a82582:
        if ((uint)*puVar21 == 0xffffffff) goto code_r0x000144a8258b;
        uVar22 = ~(uint)*puVar21;
        iVar12 = 0;
        if (uVar22 != 0) {
          for (; (uVar22 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
          }
        }
        iVar20 = iVar12 - (int)lVar9;
        if ((iVar20 < (int)puVar10[7]) && (iVar12 + 1 != (int)lVar9)) {
          iVar17 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar17 = iVar20;
          }
          puVar4 = (uint *)((longlong)puVar13 + (longlong)(iVar17 >> 5) * 4);
          *puVar4 = *puVar4 | 1 << ((byte)iVar12 & 0x1f);
          iVar17 = iVar20;
        }
      }
LAB_144a825d8:
      *(int *)(puVar10 + 8) = (int)puVar10[8] + -1;
      uVar11 = *puVar10;
      iVar12 = (iVar17 / (int)puVar10[1]) * piVar15[1] + ((uint)(uVar11 >> 0x19) & 0xffffff80);
      iVar17 = (int)uVar11 * 0x80 + (iVar17 % (int)puVar10[1]) * *piVar15;
      uVar14 = CONCAT44(iVar12,iVar17);
      uVar19 = CONCAT44(iVar12 + piVar15[1],iVar17 + *piVar15);
      goto LAB_144a82625;
    }
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  iVar17 = *(int *)(param_1 + 0x758);
  *(uint *)(param_1 + 0x758) = iVar17 + 1U;
  if (*(uint *)(param_1 + 0x75c) < iVar17 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x750),iVar17);
  }
  *(uint *)(*(longlong *)(param_1 + 0x750) + (longlong)iVar17 * 4) = param_3;
LAB_144a82790:
  if ((local_48 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000144a8258b:
  lVar9 = lVar9 + -0x20;
  puVar21 = (ulonglong *)((longlong)puVar21 + 4);
  if ((ulonglong)(uVar22 & 0xffffffe0) + lVar9 == 0) goto LAB_144a825d8;
  goto LAB_144a82582;
}



// FUNCTION 144a82b37 FUN_144a82b37 body=167 status=ok
// SIG undefined FUN_144a82b37(void)

undefined8 * FUN_144a82b37(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_14ca84468;
  if ((ushort)param_2 != 0x31) {
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_144a82b78_caseD_30:
      puVar1 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_144a82b78_caseD_31:
      if (((ushort)param_2 & 0xfff0) != 0x20) {
        uVar3 = 0;
        goto LAB_144a82b50;
      }
      lVar2 = FUN_14741392a();
      puVar1 = (undefined8 *)(lVar2 + (ulonglong)(param_2 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_144a82b78_caseD_34:
      puVar1 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_144a82b78_caseD_35:
      puVar1 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_144a82b78_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_144a82b78_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_144a82b78_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_144a82b78_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar1 = &DAT_14ca84488;
      }
    }
  }
  uVar3 = *puVar1;
LAB_144a82b50:
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 144a82bde FUN_144a82bde body=221 status=ok
// SIG undefined FUN_144a82bde(void)

longlong FUN_144a82bde(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb63988 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486f5f94;
    local_40 = &LAB_14106aa88;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x250;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkill",&DAT_14cb63988,FUN_1464fe9ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63988;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a82cbc FUN_144a82cbc body=20 status=ok
// SIG undefined FUN_144a82cbc(void)

undefined2 FUN_144a82cbc(longlong param_1)

{
  return *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 8) * 2);
}



// FUNCTION 144a82cd0 AcquireSRWLockShared body=7 status=ok
// SIG void AcquireSRWLockShared(PSRWLOCK SRWLock)

void __stdcall AcquireSRWLockShared(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x000144a82cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockShared(SRWLock);
  return;
}



// FUNCTION 144a82cd7 ReleaseSRWLockShared body=7 status=ok
// SIG void ReleaseSRWLockShared(PSRWLOCK SRWLock)

void __stdcall ReleaseSRWLockShared(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x000144a82cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(SRWLock);
  return;
}



// FUNCTION 144a82cde FUN_144a82cde body=108 status=ok
// SIG undefined FUN_144a82cde(void)

undefined8 * FUN_144a82cde(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  return &DAT_14c872ee0;
}



// FUNCTION 144a82d4a FUN_144a82d4a body=3417 status=ok
// SIG undefined FUN_144a82d4a(void)

undefined8 FUN_144a82d4a(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined8 local_88;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  ushort local_70;
  undefined6 uStack_6e;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = 0;
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) goto LAB_144a82e91;
  if ((char)param_1[4] == '\0') goto LAB_144a83059;
  puVar6 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
    FUN_1446f4b16();
    local_90 = FUN_140f17fc6;
    local_98 = &DAT_14c951c78;
    local_a0 = 0;
    local_a8 = 0x24008001;
    FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
    atexit(FUN_142818859);
    _Init_thread_footer(&DAT_14c9529b0);
  }
  if (DAT_14c952968 == 0) {
    bVar16 = puVar6 != (undefined *)0x0;
    if (puVar6 != &DAT_14c952960 && bVar16) {
      do {
        puVar6 = *(undefined **)(puVar6 + 0x30);
        bVar16 = puVar6 != (undefined *)0x0;
      } while (puVar6 != &DAT_14c952960 && bVar16);
    }
    if (!bVar16) goto LAB_144a82ddf;
LAB_144a82f5f:
    FUN_140576f62(param_1,&local_88);
    *param_3 = CONCAT44(local_88._4_4_,(int)local_88);
    *(int *)(param_3 + 1) = local_80;
    *(int *)((longlong)param_3 + 0xc) = iStack_7c;
    *(int *)(param_3 + 2) = iStack_78;
    *(int *)((longlong)param_3 + 0x14) = iStack_74;
    if (&local_88 != param_3) {
      _Src = (void *)CONCAT62(uStack_6e,local_70);
      *(uint *)(param_3 + 4) = local_68;
      if (local_68 == 0 && *(int *)((longlong)param_3 + 0x24) == 0) {
        *(int *)((longlong)param_3 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(param_3 + 3,local_68);
        if (local_68 != 0) {
          memcpy((void *)param_3[3],_Src,(longlong)(int)local_68 * 2);
        }
      }
    }
    if (CONCAT62(uStack_6e,local_70) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952968) != 0) goto LAB_144a82f5f;
LAB_144a82ddf:
    puVar6 = (undefined *)param_2[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1468d96f0;
      local_a0 = 0;
      local_a8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
    if (DAT_14c951c80 == 0) {
      bVar16 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c951c78 && bVar16) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar16 = puVar6 != (undefined *)0x0;
        } while (puVar6 != &DAT_14c951c78 && bVar16);
      }
      if (!bVar16) goto LAB_144a82e22;
LAB_144a83001:
      lVar12 = FUN_14070d842(param_1);
      lVar5 = param_2[0xe];
      if (lVar5 == 0) {
LAB_144a83059:
        if ((~param_2[7] & 0x1000000200U) == 0) {
          uVar7 = 0;
          memset(param_3,0,(longlong)*(int *)((longlong)param_2 + 0x34));
          goto LAB_144a82e91;
        }
        (**(code **)(*param_2 + 0x140))(param_2,param_3);
        goto LAB_144a83a35;
      }
      if (lVar12 == 0) {
        uVar7 = 1;
        if ((*(byte *)((longlong)param_2 + 0x39) & 0x10) != 0) goto LAB_144a82e91;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_144a83059;
      }
      (**(code **)(*param_2 + 0x1f0))(param_2,param_3,lVar12);
    }
    else {
      if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951c80) != 0) goto LAB_144a83001;
LAB_144a82e22:
      puVar14 = (undefined8 *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        local_98 = (undefined *)FUN_1446ddbd2();
        local_90 = FUN_14067a048;
        local_a0 = 0;
        local_a8 = 0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      if (DAT_14c951cd8 == 0) {
        bVar16 = puVar14 != (undefined8 *)0x0;
        if (puVar14 != &DAT_14c951cd0 && bVar16) {
          do {
            puVar14 = (undefined8 *)puVar14[6];
            bVar16 = puVar14 != (undefined8 *)0x0;
            if (puVar14 == &DAT_14c951cd0) break;
          } while (puVar14 != (undefined8 *)0x0);
        }
        if (!bVar16) goto LAB_144a83245;
      }
      else if ((puVar14[3] & DAT_14c951cd8) == 0) {
LAB_144a83245:
        puVar6 = (undefined *)param_2[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c947f70) &&
           (FUN_144b3d300(&DAT_14c947f70), DAT_14c947f70 == -1)) {
          local_98 = (undefined *)FUN_1446ddbd2();
          local_90 = FUN_141710108;
          local_a0 = 0x1000000000000000;
          local_a8 = 0x8001;
          FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
          atexit(FUN_1427b4857);
          _Init_thread_footer(&DAT_14c947f70);
        }
        if (DAT_14c947f28 == 0) {
          bVar16 = puVar6 != (undefined *)0x0;
          if ((bVar16) && (puVar6 != &DAT_14c947f20)) {
            do {
              puVar6 = *(undefined **)(puVar6 + 0x30);
              bVar16 = puVar6 != (undefined *)0x0;
            } while (puVar6 != &DAT_14c947f20 && bVar16);
          }
          if (bVar16) {
LAB_144a83997:
            FUN_1411a0e4c(param_1,&local_88);
            if (*param_3 != CONCAT44(local_88._4_4_,(int)local_88)) {
              param_3[2] = 0;
            }
            *param_3 = CONCAT44(local_88._4_4_,(int)local_88);
            if (param_3[1] != CONCAT44(iStack_7c,local_80)) {
              param_3[2] = 0;
            }
            uVar7 = FUN_14477b664();
            lVar5 = FUN_14477b664(uVar7);
            param_3[1] = lVar5;
            param_3[2] = CONCAT44(iStack_74,iStack_78);
            goto LAB_144a82e8e;
          }
        }
        else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c947f28) != 0) goto LAB_144a83997;
        uVar13 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
        if ((((*(int *)((longlong)&DAT_14c9a853c + uVar13) == 0) ||
             (uVar15 = *(uint *)((longlong)&DAT_14c9a8538 + uVar13), (int)uVar15 < 0)) ||
            (DAT_14c9647dc <= (int)uVar15)) ||
           (((plVar10 = (longlong *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
             plVar10 == (longlong *)0x0 ||
             ((int)plVar10[2] != *(int *)((longlong)&DAT_14c9a853c + uVar13))) ||
            (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
             (plVar4 = (longlong *)((longlong)&DAT_14c9a8540 + uVar13), *plVar10 == 0)))))) {
          *(undefined8 *)((longlong)&DAT_14c9a8540 + uVar13) = 0;
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_98 = (undefined *)FUN_140342cba();
            local_90 = FUN_1468c7f1e;
            local_a0 = 0;
            local_a8 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          lVar5 = *plVar4;
          if ((((((lVar5 == 0) || (*(int *)((longlong)&DAT_14c9a854c + uVar13) == 0)) ||
                (uVar15 = *(uint *)((longlong)&DAT_14c9a8548 + uVar13), (int)uVar15 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar15 ||
                (lVar12 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8),
                lVar12 == 0)))) ||
              (*(int *)(lVar12 + 0x10) != *(int *)((longlong)&DAT_14c9a854c + uVar13))) ||
             ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) {
            if (*(int *)((longlong)&DAT_14c9a8558 + uVar13) == 0) {
LAB_144a8346e:
              if (lVar5 != 0) goto LAB_144a833bb;
            }
            else {
              lVar5 = FUN_14007daa4(plVar4,0,0);
              if (lVar5 != 0) {
                puVar6 = *(undefined **)(lVar5 + 8);
                if (DAT_14c951a40 == 0) {
                  bVar16 = puVar6 != (undefined *)0x0;
                  if (puVar6 != &DAT_14c951a38 && bVar16) {
                    do {
                      puVar6 = *(undefined **)(puVar6 + 0x30);
                      bVar16 = puVar6 != (undefined *)0x0;
                      if (puVar6 == &DAT_14c951a38) break;
                    } while (puVar6 != (undefined *)0x0);
                  }
                  if (bVar16) goto LAB_144a8346b;
                }
                else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951a40) != 0) {
LAB_144a8346b:
                  *plVar4 = lVar5;
                  goto LAB_144a8346e;
                }
              }
              if (*plVar4 != 0) {
                *plVar4 = 0;
                *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar13) = 0;
              }
            }
          }
          else {
LAB_144a833bb:
            if (*(code **)(*param_2 + 0x1b0) == (code *)&LAB_144a54498) {
              if (param_2[1] == *(longlong *)(lVar5 + 8)) {
LAB_144a833e3:
                if (*(int *)((longlong)param_2 + 0x34) * (int)param_2[6] ==
                    *(int *)((longlong)&DAT_14c9a8510 +
                            (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120))) {
                  if (0x18 < *(ushort *)(param_1 + 3)) {
                    param_1 = (longlong *)*param_1;
                  }
                  uVar7 = 1;
                  if (param_1 != param_3) {
                    if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
                      (**(code **)(*param_2 + 0x100))(param_2,param_3,param_1);
                    }
                    else {
                      memcpy(param_3,param_1,
                             (longlong)*(int *)((longlong)param_2 + 0x34) *
                             (longlong)(int)param_2[6]);
                    }
                  }
                  goto LAB_144a82e91;
                }
              }
            }
            else {
              cVar2 = (**(code **)(*param_2 + 0x1b0))(param_2,lVar5);
              if (cVar2 != '\0') goto LAB_144a833e3;
            }
          }
        }
        if (param_4 != '\0') {
          uVar13 = 0;
          do {
            bVar9 = *(byte *)(param_1 + 4);
            if (bVar9 == (byte)uVar13) {
LAB_144a8354b:
              if (((((&DAT_14c9a853c)[uVar13 * 0x48] == 0) ||
                   (uVar15 = (&DAT_14c9a8538)[uVar13 * 0x48], (int)uVar15 < 0)) ||
                  (DAT_14c9647dc <= (int)uVar15)) ||
                 (((plVar10 = (longlong *)
                              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                   plVar10 == (longlong *)0x0 ||
                   ((int)plVar10[2] != (&DAT_14c9a853c)[uVar13 * 0x48])) ||
                  (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
                   (plVar4 = &DAT_14c9a8540 + uVar13 * 0x24, *plVar10 == 0)))))) {
                (&DAT_14c9a8540)[uVar13 * 0x24] = 0;
              }
              else {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_98 = (undefined *)FUN_140342cba();
                  local_90 = FUN_1468c7f1e;
                  local_a0 = 0;
                  local_a8 = 0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                lVar5 = *plVar4;
                if ((((lVar5 == 0) || ((&DAT_14c9a854c)[uVar13 * 0x48] == 0)) ||
                    (uVar15 = (&DAT_14c9a8548)[uVar13 * 0x48], (int)uVar15 < 0)) ||
                   (((DAT_14c9647dc <= (int)uVar15 ||
                     (lVar12 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8),
                     lVar12 == 0)) ||
                    ((*(int *)(lVar12 + 0x10) != (&DAT_14c9a854c)[uVar13 * 0x48] ||
                     ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))))) {
                  if ((&DAT_14c9a8558)[uVar13 * 0x48] != 0) {
                    lVar5 = FUN_14007daa4(plVar4,0,0);
                    if (lVar5 == 0) {
LAB_144a837ab:
                      if (*plVar4 != 0) {
                        *plVar4 = 0;
                        *(undefined8 *)(&DAT_14c9a8548 + uVar13 * 0x48) = 0;
                      }
                      goto LAB_144a83525;
                    }
                    puVar6 = *(undefined **)(lVar5 + 8);
                    if (DAT_14c951a40 == 0) {
                      bVar16 = puVar6 != (undefined *)0x0;
                      if (puVar6 != &DAT_14c951a38 && bVar16) {
                        do {
                          puVar6 = *(undefined **)(puVar6 + 0x30);
                          bVar16 = puVar6 != (undefined *)0x0;
                          if (puVar6 == &DAT_14c951a38) break;
                        } while (puVar6 != (undefined *)0x0);
                      }
                      if (!bVar16) goto LAB_144a837ab;
                    }
                    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951a40) == 0)
                    goto LAB_144a837ab;
                    *plVar4 = lVar5;
                  }
                  if (lVar5 == 0) goto LAB_144a83525;
                }
                cVar2 = (**(code **)(*param_2 + 0x1b0))(param_2);
                if (cVar2 != '\0') {
                  plVar10 = &local_88;
                  FUN_1400b56fe(plVar10,param_1,uVar13 & 0xffffffff);
                  uVar15 = local_68 & 0xff;
                  bVar16 = true;
                  if ((byte)local_68 == '\0') {
                    uVar15 = 0;
                  }
                  else if (*(int *)((longlong)param_2 + 0x34) * (int)param_2[6] ==
                           *(int *)((longlong)&DAT_14c9a8510 +
                                   (ulonglong)((local_68 & 0xff) * 0x120))) {
                    plVar4 = plVar10;
                    if (0x18 < local_70) {
                      plVar4 = (longlong *)CONCAT44(local_88._4_4_,(int)local_88);
                    }
                    if (plVar4 != param_3) {
                      if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
                        (**(code **)(*param_2 + 0x100))(param_2,param_3,plVar4);
                        bVar16 = false;
                        uVar15 = local_68 & 0xff;
                        goto LAB_144a836e5;
                      }
                      memcpy(param_3,plVar4,
                             (longlong)*(int *)((longlong)param_2 + 0x34) *
                             (longlong)(int)param_2[6]);
                    }
                    bVar16 = false;
                  }
LAB_144a836e5:
                  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar15 * 0x120));
                  if (pcVar1 != (code *)0x0) {
                    if (0x18 < local_70) {
                      plVar10 = (longlong *)CONCAT44(local_88._4_4_,(int)local_88);
                    }
                    (*pcVar1)(plVar10);
                  }
                  if (0x18 < local_70) {
                    FUN_1400020a8(CONCAT44(local_88._4_4_,(int)local_88));
                  }
                  uVar7 = 1;
                  if (!bVar16) goto LAB_144a82e91;
                }
              }
            }
            else {
              uVar15 = (uint)bVar9 * 0x120;
              if ((*(code **)(&DAT_14c9a8560 + uVar15) != (code *)0x0) &&
                 (cVar2 = (**(code **)(&DAT_14c9a8560 + uVar15))(uVar13 & 0xffffffff), cVar2 != '\0'
                 )) goto LAB_144a8354b;
              if ((((code *)(&DAT_14c9a8568)[uVar13 * 0x24] != (code *)0x0) &&
                  (cVar2 = (*(code *)(&DAT_14c9a8568)[uVar13 * 0x24])(bVar9), cVar2 != '\0')) ||
                 (((((&DAT_14c9a8514)[uVar15] & 0x20) != 0 &&
                   (((&DAT_14c9a8514)[uVar13 * 0x120] & 0x20) == 0)) &&
                  ((*(code **)(&DAT_14c9a8588 + uVar15) == (code *)0x0 ||
                   (cVar2 = (**(code **)(&DAT_14c9a8588 + uVar15))(uVar13 & 0xffffffff),
                   cVar2 != '\0')))))) goto LAB_144a8354b;
            }
LAB_144a83525:
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x24);
        }
LAB_144a83a35:
        uVar7 = 0;
        goto LAB_144a82e91;
      }
      if ((char)param_1[4] == '\x01') {
        pbVar3 = (byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar9 = *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar8 = *(byte *)((longlong)param_2 + 0x73);
        if ((int)*param_1 != 0) goto LAB_144a82f2e;
LAB_144a82e82:
        bVar11 = 0;
      }
      else {
        puVar14 = &local_88;
        FUN_1400b56fe(puVar14,param_1);
        bVar16 = (int)local_88 == 0;
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
        if (pcVar1 != (code *)0x0) {
          if (0x18 < local_70) {
            puVar14 = (undefined8 *)CONCAT44(local_88._4_4_,(int)local_88);
          }
          (*pcVar1)(puVar14);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(local_88._4_4_,(int)local_88));
        }
        pbVar3 = (byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar9 = *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar8 = *(byte *)((longlong)param_2 + 0x73);
        if ((byte)local_68 == 0 || bVar16) goto LAB_144a82e82;
LAB_144a82f2e:
        bVar11 = *(byte *)((longlong)param_2 + 0x72);
      }
      *pbVar3 = ~bVar8 & bVar9 | bVar11;
    }
  }
LAB_144a82e8e:
  uVar7 = 1;
LAB_144a82e91:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 144a83aa4 FUN_144a83aa4 body=108 status=ok
// SIG undefined FUN_144a83aa4(void)

undefined8 * FUN_144a83aa4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  return &DAT_14c997f90;
}



// FUNCTION 144a83b10 FUN_144a83b10 body=205 status=ok
// SIG undefined FUN_144a83b10(void)

void FUN_144a83b10(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined2 auStack_48 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = 0xf;
  lVar2 = 0x1000000000;
  iVar5 = 0x10;
  iVar1 = param_2;
  do {
    lVar2 = lVar2 + -0x100000000;
    auStack_48[lVar4] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar1 % 10) * 2);
    uVar3 = iVar1 + 9;
    lVar4 = lVar4 + -1;
    iVar5 = iVar5 + -1;
    iVar1 = iVar1 / 10;
  } while (0x12 < uVar3);
  if (param_2 < 0) {
    iVar5 = (int)lVar4;
    lVar2 = (longlong)iVar5;
    auStack_48[lVar2] = 0x2d;
  }
  else {
    lVar2 = lVar2 >> 0x20;
  }
  FUN_1400020e8(param_1,auStack_48 + lVar2,0x10 - iVar5);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a83bde FUN_144a83bde body=228 status=ok
// SIG undefined FUN_144a83bde(void)

longlong FUN_144a83bde(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac0fa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_14786c867;
    local_40 = &LAB_145abcadb;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x438;
    FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a83cc4 FUN_144a83cc4 body=228 status=ok
// SIG undefined FUN_144a83cc4(void)

longlong FUN_144a83cc4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacb1f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1478defb1;
    local_40 = FUN_1463a1b02;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb1f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a83daa FUN_144a83daa body=228 status=ok
// SIG undefined FUN_144a83daa(void)

longlong FUN_144a83daa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb99558 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b216c;
    local_38 = &LAB_148ad2965;
    local_40 = &LAB_14658d853;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x438;
    FUN_14081cfa3(L"/Script/ChaosVehicles",L"WheeledVehiclePawn",&DAT_14cb99558,&DAT_148ad2964);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99558;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a83e90 FUN_144a83e90 body=228 status=ok
// SIG undefined FUN_144a83e90(void)

longlong FUN_144a83e90(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9e9b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_148b767a1;
    local_40 = FUN_1465a0fdc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/PhotoMode",L"KPhotoModeSubsystem",&DAT_14cb9e9b0,FUN_1465a0fba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9e9b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a83f76 FUN_144a83f76 body=174 status=ok
// SIG undefined FUN_144a83f76(void)

undefined * FUN_144a83f76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952268) {
    FUN_144b3d300(&DAT_14c952268);
    if (DAT_14c952268 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                    FUN_1459738d6);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
  }
  return &DAT_14c952218;
}



// FUNCTION 144a84024 FUN_144a84024 body=124 status=ok
// SIG undefined FUN_144a84024(void)

void FUN_144a84024(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14475e4ac(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1401fef06(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 144a840a2 FUN_144a840a2 body=94 status=ok
// SIG undefined FUN_144a840a2(void)

int FUN_144a840a2(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 144a84100 FUN_144a84100 body=136 status=ok
// SIG undefined FUN_144a84100(void)

ulonglong FUN_144a84100(void)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (ulonglong)DAT_14c760a84;
  if (DAT_14c760a84 == 0xffffffff) {
    local_28 = 0x66;
    FUN_140002266(local_20,L"%s %s %d",L"FRDGSystemTextures",
                  L".\\Runtime/Renderer/Private/SystemTextures.cpp");
    uVar1 = FUN_145d12cf0(local_20);
    DAT_14c760a84 = (uint)uVar1;
    if (local_20[0] != 0) {
      FUN_1400020a8();
      uVar1 = (ulonglong)DAT_14c760a84;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a84189 FUN_144a84189 body=15 status=ok
// SIG undefined FUN_144a84189(void)

byte FUN_144a84189(void)

{
  return DAT_14cb526f4 & DAT_14cb527d0 & 1;
}



// FUNCTION 144a84198 FUN_144a84198 body=787 status=ok
// SIG undefined FUN_144a84198(void)

void FUN_144a84198(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_300;
  int local_2d0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar8 = 0;
  lVar7 = param_1;
  if (param_1 == 0x1c8) {
    lVar7 = lVar8;
  }
  FUN_140048e76(&local_330,lVar7);
  if (param_2 != 0) {
    uVar5 = *(uint *)(param_1 + 0x118);
    if (uVar5 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    lVar8 = *(longlong *)(param_2 + 200 + (ulonglong)uVar3 * 8);
  }
  lVar7 = lVar8 + 0x28;
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  uVar5 = *(int *)(lVar8 + 0x80) - 4;
  iVar1 = *(int *)(lVar8 + 0x84);
  bVar2 = (byte)(0x1081008410004411 >> ((byte)uVar5 & 0x3f)) & uVar5 < 0x3d;
  if (iVar1 == 1) {
    if ((*(int *)(lVar8 + 0x80) == 0) || ((*(byte *)(lVar8 + 0xa0) & 1) != 0)) {
      local_338 = *(undefined8 *)(lVar8 + 0xa0);
      local_358 = *(undefined4 *)(lVar8 + 0x80);
      uStack_354 = *(undefined4 *)(lVar8 + 0x84);
      uStack_350 = *(undefined4 *)(lVar8 + 0x88);
      uStack_34c = *(undefined4 *)(lVar8 + 0x8c);
      local_348 = *(undefined4 *)(lVar8 + 0x90);
      uStack_344 = *(undefined4 *)(lVar8 + 0x94);
      uStack_340 = *(undefined4 *)(lVar8 + 0x98);
      uStack_33c = *(undefined4 *)(lVar8 + 0x9c);
      puVar4 = (undefined8 *)((longlong)local_330 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar4 + 9;
      if (local_328 < puVar6) {
        FUN_140023dd8(&local_330,0x50);
        puVar4 = (undefined8 *)((longlong)local_330 + 7U & 0xfffffffffffffff8);
        puVar6 = puVar4 + 9;
      }
      local_2d0 = local_2d0 + 1;
      *local_300 = puVar4;
      local_300 = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_14a354928;
      puVar4[2] = lVar8;
      puVar4[3] = param_3;
      *(undefined4 *)(puVar4 + 4) = local_358;
      *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_354;
      *(undefined4 *)(puVar4 + 5) = uStack_350;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_34c;
      puVar4[6] = CONCAT44(uStack_344,local_348);
      puVar4[7] = CONCAT44(uStack_33c,uStack_340);
      puVar4[8] = local_338;
      local_330 = puVar6;
    }
    else if (bVar2 == 0) {
      local_368 = 1;
      local_360 = param_3;
      FUN_140118dbb(&local_330,lVar8,*(undefined4 *)(lVar8 + 0x90),1);
    }
    else {
      local_368 = 1;
      local_360 = param_3;
      FUN_143153667(&local_330,lVar8,*(undefined4 *)(lVar8 + 0x90),1);
    }
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x20);
    if (iVar1 == 4) {
      if (bVar2 == 0) {
        local_368 = 1;
        local_360 = param_3;
        FUN_140048f60(&local_330,lVar8);
      }
      else {
        local_368 = 1;
        local_360 = param_3;
        FUN_143154acd(&local_330,lVar8,
                      *(ulonglong *)(lVar7 + 0x68) >> (*(byte *)(lVar8 + 0x88) & 0x3f),
                      *(uint *)(lVar7 + 0x70) >> (*(byte *)(lVar8 + 0x88) & 0x1f));
      }
    }
    else if (iVar1 == 8) {
      local_368 = *(undefined4 *)(lVar8 + 0x90);
      if (bVar2 == 0) {
        local_360 = param_3;
        FUN_14108ec93(&local_330,lVar8);
      }
      else {
        local_360 = param_3;
        FUN_143155481(&local_330,lVar8,
                      *(ulonglong *)(lVar7 + 0x68) >> (*(byte *)(lVar8 + 0x88) & 0x3f),
                      *(uint *)(lVar7 + 0x70) >> (*(byte *)(lVar8 + 0x88) & 0x1f));
      }
    }
    else if (iVar1 == 5) {
      local_368 = *(undefined4 *)(lVar8 + 0x90);
      if (bVar2 == 0) {
        local_360 = param_3;
        FUN_1414244d0(&local_330,lVar8,
                      *(ulonglong *)(lVar7 + 0x68) >> (*(byte *)(lVar8 + 0x88) & 0x3f),
                      *(uint *)(lVar7 + 0x70) >> (*(byte *)(lVar8 + 0x88) & 0x1f));
      }
      else {
        local_360 = param_3;
        FUN_1414249a6(&local_330,lVar8);
      }
    }
  }
  FUN_140048db6(&local_330);
  if ((local_28 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a844ac FUN_144a844ac body=168 status=ok
// SIG undefined FUN_144a844ac(void)

void FUN_144a844ac(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *(longlong *)(param_1 + 2);
  lVar8 = *(longlong *)(lVar9 + 0x20);
  if (*(longlong *)(lVar9 + 0x20) == 0) {
    lVar8 = lVar9;
  }
  iVar2 = *(int *)(lVar9 + 0x28);
  iVar3 = *param_1;
  lVar9 = (longlong)iVar3;
  uVar5 = param_1[4] & *(uint *)(lVar8 + lVar9 * 4);
  if (uVar5 == 0) {
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar4 = param_1[6];
    iVar7 = iVar6 >> 5;
    if (iVar6 >> 5 < iVar3) {
      iVar7 = iVar3;
    }
    lVar10 = 0;
    do {
      *param_1 = iVar3 + 1 + (int)lVar10;
      iVar4 = iVar4 + 0x20;
      param_1[6] = iVar4;
      if (iVar7 - lVar9 == lVar10) {
        param_1[5] = iVar2;
        return;
      }
      uVar5 = *(uint *)(lVar8 + lVar9 * 4 + 4 + lVar10 * 4);
      param_1[4] = -1;
      lVar10 = lVar10 + 1;
    } while (uVar5 == 0);
  }
  else {
    iVar4 = param_1[6];
  }
  param_1[1] = -uVar5 & uVar5;
  uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar3 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
  param_1[5] = iVar3;
  return;
}



// FUNCTION 144a84554 FUN_144a84554 body=205 status=ok
// SIG undefined FUN_144a84554(void)

bool FUN_144a84554(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar4 = param_1;
  }
  plVar2 = *(longlong **)(lVar4 + 0x170);
  if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar3 = *param_2;
    uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar2[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *plVar2 + (longlong)iVar6 * 0x90;
        if (*(ulonglong *)(*plVar2 + (longlong)iVar6 * 0x90) == uVar3) {
          if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0 && lVar1 != 0) {
            lVar4 = *(longlong *)(lVar1 + 0x10);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x80);
      } while (iVar6 != -1);
    }
  }
  return lVar4 == param_1;
}



// FUNCTION 144a84622 FUN_144a84622 body=211 status=ok
// SIG undefined FUN_144a84622(void)

undefined4 FUN_144a84622(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x138) == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x40);
    uVar1 = *(uint *)(lVar3 + 0x88);
    uVar8 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < (int)uVar1) {
      FUN_144724de8(param_2,uVar1);
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        lVar7 = *(longlong *)(lVar3 + 0x80);
        if (*(longlong *)(lVar3 + 0x80) == 0) {
          lVar7 = lVar3 + 0x78;
        }
        uVar4 = *(undefined8 *)(lVar7 + uVar9 * 8);
        uVar5 = *(undefined8 *)(param_1 + 0x138);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1417333de(param_2,iVar2);
        }
        lVar7 = *param_2;
        *(undefined8 *)(lVar7 + (longlong)iVar2 * 0x10) = uVar4;
        *(undefined8 *)(lVar7 + 8 + (longlong)iVar2 * 0x10) = uVar5;
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
    uVar6 = (undefined4)param_2[1];
  }
  return uVar6;
}



// FUNCTION 144a846f6 FUN_144a846f6 body=17 status=ok
// SIG undefined FUN_144a846f6(void)

undefined4 FUN_144a846f6(uint param_1)

{
  return CONCAT31((int3)(DAT_14c87eb08 + 1U >> 8),param_1 >> 0x10 < DAT_14c87eb08 + 1U);
}



// FUNCTION 144a84708 FUN_144a84708 body=8 status=ok
// SIG undefined FUN_144a84708(void)

longlong FUN_144a84708(longlong param_1)

{
  return param_1 + 0x158;
}



// FUNCTION 144a84710 FUN_144a84710 body=149 status=ok
// SIG undefined FUN_144a84710(void)

void FUN_144a84710(longlong param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (ushort *)
           (*(longlong *)
             (*(longlong *)(param_1 + 0x18) + 0x10 + (ulonglong)(param_2 >> 0xd & 0xfff8)) +
           ((ulonglong)param_2 & 0xffff) * 2);
  uVar2 = *puVar1;
  if ((uVar2 & 1) == 0) {
    FUN_14472262f();
  }
  else {
    FUN_14142eca0(local_28,puVar1 + 1,uVar2 >> 6);
  }
  while( true ) {
    local_24 = local_24 & *(uint *)(param_1 + 0xc);
    if (*(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)local_24 * 4) == 0) break;
    local_24 = local_24 + 1;
  }
  *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)local_24 * 4) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a847a6 FUN_144a847a6 body=613 status=ok
// SIG undefined FUN_144a847a6(void)

bool FUN_144a847a6(undefined8 *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  bool bVar14;
  
  puVar6 = &DAT_14ca84468;
  uVar10 = (ushort)param_2;
  if (uVar10 != 0x31) {
    switch(param_2 & 0xffff) {
    case 0x30:
switchD_144a8490f_caseD_30:
      puVar6 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_144a8490f_caseD_31:
      if ((uVar10 & 0xfff0) != 0x20) {
        uVar12 = 0;
        goto LAB_144a847c6;
      }
      lVar8 = FUN_14741392a();
      puVar6 = (undefined8 *)(lVar8 + (ulonglong)(param_2 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_144a8490f_caseD_34:
      puVar6 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_144a8490f_caseD_35:
      puVar6 = &DAT_14ca84478;
      break;
    default:
      switch(param_2 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_144a8490f_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_144a8490f_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_144a8490f_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_144a8490f_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar6 = &DAT_14ca84488;
      }
    }
  }
  uVar12 = *puVar6;
LAB_144a847c6:
  if (param_1[2] == 0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    if (*(int *)(param_1 + 1) == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = (undefined2 *)*param_1;
    }
    uVar7 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar11,1);
    param_1[2] = uVar7;
  }
  cVar1 = FUN_14002b5e0(uVar12,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != uVar10)) {
    bVar14 = false;
  }
  else {
    plVar13 = (longlong *)param_1[2];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 0xa8);
    if (UNRECOVERED_JUMPTABLE == FUN_14477af48) {
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar9 = 0;
      }
      else if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar9 = 1;
      }
      iVar3 = *(int *)((longlong)plVar13 + uVar9 * 4 + 0x50);
    }
    else {
      if (UNRECOVERED_JUMPTABLE == FUN_14477afb2) {
        iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
          uVar9 = 0;
        }
        else if (iVar3 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          uVar9 = (ulonglong)(DVar4 != DVar5);
        }
        else {
          uVar9 = 1;
        }
        return (bool)*(undefined1 *)((longlong)plVar13 + uVar9 + 0x50);
      }
      if (UNRECOVERED_JUMPTABLE != FUN_14477b018) {
                    /* WARNING: Could not recover jumptable at 0x000144a848e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar13);
        return (bool)uVar2;
      }
      iVar3 = FUN_140052f36(plVar13);
      if (iVar3 == 0) {
        plVar13 = plVar13 + 0xb;
      }
      else {
        plVar13 = (longlong *)plVar13[10];
      }
      iVar3 = (int)*plVar13;
    }
    bVar14 = iVar3 != 0;
  }
  return bVar14;
}



// FUNCTION 144a84a0c FUN_144a84a0c body=322 status=ok
// SIG undefined FUN_144a84a0c(void)

longlong * FUN_144a84a0c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb71f80;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a84b50 FUN_144a84b50 body=228 status=ok
// SIG undefined FUN_144a84b50(void)

longlong FUN_144a84b50(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5d278 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145885dac;
    local_38 = &LAB_1486962c5;
    local_40 = FUN_1464da8ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",&DAT_14cb5d278,
                  &DAT_1486962c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d278;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a84c36 FUN_144a84c36 body=221 status=ok
// SIG undefined FUN_144a84c36(void)

longlong FUN_144a84c36(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3e268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481bbd47;
    local_40 = FUN_143a7bac5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEmitter",&DAT_14cb3e268,&DAT_1481bbd46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3e268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a84d14 FUN_144a84d14 body=917 status=ok
// SIG undefined FUN_144a84d14(void)

void FUN_144a84d14(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x74) != 0)) &&
      (uVar3 = *(uint *)(lVar5 + 0x70), -1 < (int)uVar3)) &&
     ((((int)uVar3 < DAT_14c9647dc &&
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0)) && ((int)plVar11[2] == *(int *)(lVar5 + 0x74))))) {
    uVar3 = *(uint *)(lVar5 + 0x18);
    if ((((*(uint *)(plVar11 + 1) & 0x10200000) == 0) && (lVar6 = *plVar11, lVar6 != 0)) &&
       (*(longlong *)(param_1 + 0x18) != 0)) {
      puVar9 = *(undefined8 **)(param_1 + 0x20);
      if (puVar9 == (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        lVar13 = **(longlong **)(param_1 + 0x78);
        if (lVar13 == 0) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x20);
          puVar9[2] = 0;
          puVar9[3] = 0;
          *puVar9 = 0xbff0000000000000;
          puVar9[1] = 0;
          puVar9[2] = 0;
          *(undefined4 *)(puVar9 + 3) = 0xffffffff;
          iVar4 = *(int *)(param_1 + 0x88);
          uVar8 = iVar4 + 1;
          *(uint *)(param_1 + 0x88) = uVar8;
          if (*(uint *)(param_1 + 0x8c) < uVar8) {
            FUN_14143b734(param_1 + 0x80);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x80) + (longlong)iVar4 * 8) = puVar9;
          puVar9 = *(undefined8 **)
                    (*(longlong *)(param_1 + 0x80) + (longlong)(*(int *)(param_1 + 0x88) + -1) * 8);
        }
        else {
          puVar9 = *(undefined8 **)(lVar13 + 8);
          lVar12 = *(longlong *)(param_1 + 0x78);
          *(longlong *)(param_1 + 0x78) = lVar13;
          *(undefined8 *)(lVar13 + 8) = 0;
          if (lVar12 != 0) {
            FUN_1400020a8();
          }
        }
        *puVar9 = uVar2;
        *(undefined8 **)(param_1 + 0x20) = puVar9;
      }
      plVar11 = puVar9 + 1;
      iVar4 = *(int *)(puVar9 + 2);
      *(uint *)(puVar9 + 2) = iVar4 + uVar3;
      if ((uint)(*(int *)((longlong)puVar9 + 0x14) - iVar4) < uVar3) {
        FUN_1483efc0e(plVar11);
      }
      memset((void *)((longlong)iVar4 * 8 + puVar9[1]),0,(longlong)(int)uVar3 << 3);
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(lVar5 + 0x78);
      if (0 < *(int *)(lVar5 + 0x18)) {
        lVar13 = 0;
        do {
          puVar9 = *(undefined8 **)(*plVar11 + lVar13 * 8);
          *(undefined8 *)(*plVar11 + lVar13 * 8) = 0;
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9,1);
          }
          puVar9 = *(undefined8 **)(*(longlong *)(lVar5 + 0x10) + lVar13 * 8);
          if ((((puVar9 != (undefined8 *)0x0) && (puVar9[3] != 0)) &&
              (plVar7 = *(longlong **)(puVar9[3] + 0x48), plVar7 != (longlong *)0x0)) &&
             (1 < *(byte *)((longlong)plVar7 + 0xc))) {
            if (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10) ==
                '\x04') {
              if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
                uVar3 = *(uint *)(*(longlong *)(*plVar7 + 0x80) + (longlong)(int)plVar7[1] * 4);
                lVar12 = *(longlong *)(param_1 + 0xe8);
                if (*(longlong *)(param_1 + 0xe8) == 0) {
                  lVar12 = param_1 + 0xe0;
                }
                uVar8 = *(uint *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar3) * 4);
                if (uVar8 != 0xffffffff) {
                  do {
                    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)(int)uVar8 * 0x18);
                    if (*puVar1 == uVar3) {
                      if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
                        local_80 = *(undefined8 *)(puVar1 + 2);
                        goto LAB_144a84fce;
                      }
                      break;
                    }
                    uVar8 = puVar1[4];
                  } while (uVar8 != 0xffffffff);
                }
              }
              local_80 = 0;
LAB_144a84fce:
              local_88 = (float)*(double *)(param_1 + 0x30);
              local_78 = lVar5 + 0x20;
              (**(code **)*puVar9)(puVar9,&local_68,lVar6,(float)*(double *)(param_1 + 0x38));
              ppuVar10 = (undefined8 **)(lVar13 * 8 + *plVar11);
              if (ppuVar10 != &local_68) {
                puVar9 = *ppuVar10;
                *ppuVar10 = local_68;
                local_68 = (undefined8 *)0x0;
                if (puVar9 == (undefined8 *)0x0) goto LAB_144a84f68;
                (**(code **)*puVar9)(puVar9,1);
              }
              if (local_68 != (undefined8 *)0x0) {
                (**(code **)*local_68)(local_68,1);
              }
            }
          }
LAB_144a84f68:
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar5 + 0x18));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a850aa FUN_144a850aa body=281 status=ok
// SIG undefined FUN_144a850aa(void)

int FUN_144a850aa(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(char *)(lVar3 + 0x2e + lVar5 * 0x48) == *(char *)((longlong)param_3 + 0x2e)) &&
            (piVar1 = (int *)(lVar3 + lVar5 * 0x48),
            *(char *)((longlong)piVar1 + 0x2f) == *(char *)((longlong)param_3 + 0x2f))) &&
           (*piVar1 == *param_3)) {
          if (((float)piVar1[1] == (float)param_3[1]) &&
             (!NAN((float)piVar1[1]) && !NAN((float)param_3[1]))) {
            if ((((float)piVar1[2] == (float)param_3[2]) &&
                ((!NAN((float)piVar1[2]) && !NAN((float)param_3[2]) &&
                 ((char)piVar1[0xc] == (char)param_3[0xc])))) &&
               ((piVar1[3] == param_3[3] &&
                ((((((piVar1[4] == param_3[4] && (piVar1[5] == param_3[5])) &&
                    (piVar1[6] == param_3[6])) &&
                   ((piVar1[7] == param_3[7] && (piVar1[8] == param_3[8])))) &&
                  ((piVar1[9] == param_3[9] &&
                   ((piVar1[10] == param_3[10] && ((char)piVar1[0xb] == (char)param_3[0xb])))))) &&
                 (*(char *)((longlong)piVar1 + 0x2d) == *(char *)((longlong)param_3 + 0x2d))))))) {
              return iVar2;
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x40 + lVar5 * 0x48);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 144a851c4 FUN_144a851c4 body=64 status=ok
// SIG undefined FUN_144a851c4(void)

ulonglong FUN_144a851c4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x48);
    lVar2 = (longlong)*(int *)(param_1 + 0x50) * 0x90;
    do {
      if (*plVar1 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),(char)plVar1[0x11]) & 0xffffffffffffff01;
      }
      plVar1 = plVar1 + 0x12;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 144a85204 FUN_144a85204 body=228 status=ok
// SIG undefined FUN_144a85204(void)

longlong FUN_144a85204(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caff330 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_147cc7387;
    local_40 = &LAB_146145a9c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x230;
    FUN_14081cfa3(L"/Script/Engine",L"RendererSettings",&DAT_14caff330,&DAT_147cc7386);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caff330;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a852ea FUN_144a852ea body=228 status=ok
// SIG undefined FUN_144a852ea(void)

longlong FUN_144a852ea(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb112e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147db7f1b;
    local_40 = FUN_1405e4763;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a8;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionHLOD",&DAT_14cb112e8,&DAT_147db7f1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb112e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a853d0 FUN_144a853d0 body=228 status=ok
// SIG undefined FUN_144a853d0(void)

longlong FUN_144a853d0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb66140 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148725495;
    local_40 = FUN_14650e266;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSlopeWarpingInterface",&DAT_14cb66140,&DAT_148725494);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66140;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a854b6 FUN_144a854b6 body=228 status=ok
// SIG undefined FUN_144a854b6(void)

longlong FUN_144a854b6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6fd70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487a9cc9;
    local_40 = FUN_1465433f8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6fd70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8559c FUN_144a8559c body=228 status=ok
// SIG undefined FUN_144a8559c(void)

longlong FUN_144a8559c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc0248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465aab14;
    local_38 = &LAB_148cb4c2d;
    local_40 = &LAB_146615fe4;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x2720;
    FUN_14081cfa3(L"/Script/OakGame",L"StreamableTravelStationObject",&DAT_14cbc0248,&DAT_148cb4c2c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a85682 FUN_144a85682 body=293 status=ok
// SIG undefined FUN_144a85682(void)

void FUN_144a85682(char *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_1 == '\x01') {
    fVar2 = *(float *)(param_1 + 8) - *(float *)(param_1 + 4);
    if (ABS(fVar2) <= 1e-08) {
      fVar2 = (float)(-(uint)(*(float *)(param_1 + 8) <= param_2) & 0x3f800000);
    }
    else {
      fVar2 = (param_2 - *(float *)(param_1 + 4)) / fVar2;
    }
    param_2 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc)) * fVar2 +
              *(float *)(param_1 + 0xc);
  }
  fVar2 = param_2 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18);
  if (param_1[1] == '\x01') {
    if (*(float *)(param_1 + 0x20) <= fVar2) {
      fVar2 = *(float *)(param_1 + 0x20);
    }
    if (fVar2 <= *(float *)(param_1 + 0x1c)) {
      fVar2 = *(float *)(param_1 + 0x1c);
    }
  }
  if (param_1[2] == '\x01') {
    if (param_1[3] == '\x01') {
      fVar1 = *(float *)(param_1 + 0x2c);
      if ((0.0 < *(float *)(param_1 + (ulonglong)(fVar2 < fVar1) * 4 + 0x24)) &&
         (fVar3 = fVar2 - fVar1, 1e-08 <= fVar3 * fVar3)) {
        param_3 = *(float *)(param_1 + (ulonglong)(fVar2 < fVar1) * 4 + 0x24) * param_3;
        if (1.0 <= param_3) {
          param_3 = 1.0;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        fVar2 = fVar1 + fVar3 * param_3;
      }
    }
    *(float *)(param_1 + 0x2c) = fVar2;
  }
  param_1[3] = '\x01';
  return;
}



// FUNCTION 144a857a8 FUN_144a857a8 body=634 status=ok
// SIG undefined FUN_144a857a8(void)

void FUN_144a857a8(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  int param_5,char param_6)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar5 = (int)((float)param_5 * *(float *)(param_4 + 4));
    iVar4 = *(int *)(param_4 + 0xc);
    if (*(int *)(param_4 + 0xc) < iVar5) {
      iVar4 = iVar5;
    }
    lVar6 = FUN_14001cc68(0x50,0x10);
    FUN_1414444b8(lVar6,param_2,iVar4,0,param_4);
    iVar4 = *(int *)(lVar6 + 0x4c);
    *(int *)(param_3 + 1) = iVar4;
    *(int *)(lVar6 + 0x4c) = iVar4 + param_5;
    lVar8 = *param_3;
    if (param_6 < '\0') {
      lVar7 = *(longlong *)(lVar6 + 0x18);
    }
    else {
      lVar7 = *(longlong *)(lVar6 + 0x38);
    }
    if (lVar8 != lVar7) {
      *param_3 = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar8 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
      FUN_1462b1344(param_1,iVar4);
    }
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar8 = param_1;
    }
    *(longlong *)(lVar8 + (longlong)iVar4 * 8) = lVar6;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar8 = param_1;
    }
    lVar8 = *(longlong *)(lVar8 + (longlong)(*(int *)(param_1 + 0x28) + -1) * 8);
    iVar4 = *(int *)(lVar8 + 0x4c);
    if (*(int *)(lVar8 + 0x48) < iVar4 + param_5) {
      fVar2 = *(float *)(param_4 + 4);
      lVar6 = FUN_14001cc68(0x50,0x10);
      FUN_1414444b8(lVar6,param_2,(int)((float)(iVar4 + param_5) * fVar2),iVar4,param_4);
      iVar4 = *(int *)(lVar6 + 0x4c);
      *(int *)(param_3 + 1) = iVar4;
      *(int *)(lVar6 + 0x4c) = param_5 + iVar4;
      lVar8 = *param_3;
      if (param_6 < '\0') {
        lVar7 = *(longlong *)(lVar6 + 0x18);
      }
      else {
        lVar7 = *(longlong *)(lVar6 + 0x38);
      }
      if (lVar8 != lVar7) {
        *param_3 = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        if (lVar8 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar8 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      iVar4 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
        FUN_1462b1344(param_1,iVar4);
      }
      lVar8 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar8 = param_1;
      }
      *(longlong *)(lVar8 + (longlong)iVar4 * 8) = lVar6;
    }
    else {
      *(int *)(param_3 + 1) = iVar4;
      *(int *)(lVar8 + 0x4c) = *(int *)(lVar8 + 0x4c) + param_5;
      lVar6 = *param_3;
      if (param_6 < '\0') {
        lVar8 = *(longlong *)(lVar8 + 0x18);
      }
      else {
        lVar8 = *(longlong *)(lVar8 + 0x38);
      }
      if (lVar6 != lVar8) {
        *param_3 = lVar8;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar6 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 144a85a22 FUN_144a85a22 body=73 status=ok
// SIG undefined FUN_144a85a22(void)

void FUN_144a85a22(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1447de67e(param_1 + 0x60,iVar2);
    }
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  }
  return;
}



// FUNCTION 144a85a6c FUN_144a85a6c body=228 status=ok
// SIG undefined FUN_144a85a6c(void)

longlong FUN_144a85a6c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb06da8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464003b0;
    local_38 = &LAB_147d17bdf;
    local_40 = &LAB_1417edf22;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb06da8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a85b52 FUN_144a85b52 body=911 status=ok
// SIG undefined FUN_144a85b52(void)

longlong * FUN_144a85b52(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *lpTlsValue;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong local_78;
  
  if (param_2 == 0) {
    uVar8 = FUN_144a85ee2();
    lVar6 = FUN_144a43434(uVar8);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f340) {
      FUN_144b3d300(&DAT_14c83f340);
      if (DAT_14c83f340 == -1) {
        DAT_14c83f2c0 = 0;
        DAT_14c83f300 = &DAT_14c83f2c0;
        atexit(FUN_14275e43b);
        _Init_thread_footer(&DAT_14c83f340);
      }
    }
    puVar1 = DAT_14c83f300;
    local_78 = *DAT_14c83f300;
    uVar9 = (uint)local_78;
    if ((local_78 & 0x3ffffff) != 0) {
LAB_144a85bd9:
      uVar5 = (local_78 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < local_78 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      uVar10 = (ulonglong)((uVar9 & 0x3ffffff) >> 0xe);
      uVar7 = (ulonglong)((uint)local_78 & 0x3fff);
      lVar6 = *(longlong *)(&DAT_14c833b00 + uVar10 * 8);
      LOCK();
      uVar2 = *puVar1;
      if (local_78 == uVar2) {
        *puVar1 = uVar5 | *(uint *)(lVar6 + 0x10 + uVar7 * 0x18);
      }
      UNLOCK();
      if (local_78 != uVar2) goto LAB_144a85d08;
      *(undefined4 *)(lVar6 + uVar7 * 0x18 + 0x10) = 0;
      uVar5 = (ulonglong)(uVar9 & 0x3fff);
      lVar6 = *(longlong *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 8 + uVar5 * 0x18);
      if (DAT_14c833980 != '\x01') {
        DAT_14c833940 = 0;
        DAT_14c833900 = TlsAlloc();
        DAT_14c833980 = '\x01';
      }
      lpTlsValue = TlsGetValue(DAT_14c833900);
      if (lpTlsValue == (uint *)0x0) {
        lpTlsValue = (uint *)FUN_14001cc68(0xc,0x10);
        lpTlsValue[0] = 0;
        lpTlsValue[1] = 0;
        lpTlsValue[2] = 0;
        TlsSetValue(DAT_14c833900,lpTlsValue);
      }
      if (0x3f < (int)lpTlsValue[2]) {
        uVar3 = *lpTlsValue;
        if ((ulonglong)uVar3 != 0) {
          do {
            uVar2 = DAT_14c833940;
            uVar7 = (DAT_14c833940 & 0xfffffffffc000000) + 0x4000000;
            if (uVar7 >> 0x1a < DAT_14c833940 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            *(uint *)(*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar3 >> 0xe) * 8) + 0x10 +
                     (ulonglong)(uVar3 & 0x3fff) * 0x18) = (uint)uVar2 & 0x3ffffff;
            LOCK();
            bVar11 = uVar2 != DAT_14c833940;
            uVar2 = uVar7 | uVar3;
            if (bVar11) {
              uVar2 = DAT_14c833940;
            }
            DAT_14c833940 = uVar2;
            UNLOCK();
          } while (bVar11);
        }
        *lpTlsValue = lpTlsValue[1];
        lpTlsValue[1] = 0;
        lpTlsValue[2] = 0;
      }
      lVar4 = *(longlong *)(&DAT_14c833b00 + uVar10 * 8);
      puVar1 = (ulonglong *)(lVar4 + uVar5 * 0x18);
      *puVar1 = *puVar1 & 0xfffffffffc000000;
      *(undefined4 *)(lVar4 + 0x10 + uVar5 * 0x18) = 0;
      *(ulonglong *)(lVar4 + 8 + uVar5 * 0x18) = (ulonglong)lpTlsValue[1];
      lpTlsValue[1] = uVar9 & 0x3ffffff;
      lpTlsValue[2] = lpTlsValue[2] + 1;
      if (lVar6 != 0) goto LAB_144a85cd5;
    }
LAB_144a85d2d:
    lVar6 = FUN_1405d8b8a(1);
  }
LAB_144a85cd5:
  *param_1 = lVar6;
  return param_1;
LAB_144a85d08:
  local_78 = *puVar1;
  uVar9 = (uint)local_78;
  if ((local_78 & 0x3ffffff) == 0) goto LAB_144a85d2d;
  goto LAB_144a85bd9;
}



// FUNCTION 144a85ee2 FUN_144a85ee2 body=121 status=ok
// SIG undefined FUN_144a85ee2(void)

undefined8 * FUN_144a85ee2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f280) {
    FUN_144b3d300(&DAT_14c83f280);
    if (DAT_14c83f280 == -1) {
      DAT_14c83f200 = 0;
      DAT_14c83f240 = &DAT_14c83f200;
      atexit(FUN_142750901);
      _Init_thread_footer(&DAT_14c83f280);
    }
  }
  return DAT_14c83f240;
}



// FUNCTION 144a85f5b FUN_144a85f5b body=1723 status=ok
// SIG undefined FUN_144a85f5b(void)

uint FUN_144a85f5b(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = (uint)*param_1 - (uint)param_1[1];
  uVar1 = (iVar3 * 0x100 | (uint)*param_1) ^ 0x9e3779b9;
  uVar4 = uVar1 >> 0xd ^ ((uint)param_1[1] - iVar3) - uVar1;
  uVar2 = uVar4 >> 0xc ^ (iVar3 - uVar1) - uVar4;
  uVar1 = uVar2 << 0x10 ^ (uVar1 - uVar4) - uVar2;
  uVar4 = uVar1 >> 5 ^ (uVar4 - uVar2) - uVar1;
  uVar2 = uVar4 >> 3 ^ (uVar2 - uVar1) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar1 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[2];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[2] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[3];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[3] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[4];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[4] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[5];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[5] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[6];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[6] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[7];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[7] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[8];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[8] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[9];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[9] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[10];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[10] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[0xb];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[0xb] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[0xc];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar2 = uVar4 >> 0xd ^ ((uint)param_1[0xc] - iVar3) - uVar4;
  uVar1 = uVar2 >> 0xc ^ (iVar3 - uVar4) - uVar2;
  uVar5 = uVar1 << 0x10 ^ (uVar4 - uVar2) - uVar1;
  uVar4 = uVar5 >> 5 ^ (uVar2 - uVar1) - uVar5;
  uVar2 = uVar4 >> 3 ^ (uVar1 - uVar5) - uVar4;
  uVar1 = uVar2 << 10 ^ (uVar5 - uVar4) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
  iVar3 = uVar1 - param_1[0xd];
  uVar4 = iVar3 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar1 = uVar4 >> 0xd ^ ((uint)param_1[0xd] - iVar3) - uVar4;
  uVar2 = uVar1 >> 0xc ^ (iVar3 - uVar4) - uVar1;
  uVar4 = uVar2 << 0x10 ^ (uVar4 - uVar1) - uVar2;
  uVar5 = uVar4 >> 5 ^ (uVar1 - uVar2) - uVar4;
  uVar2 = uVar5 >> 3 ^ (uVar2 - uVar4) - uVar5;
  uVar1 = uVar2 << 10 ^ (uVar4 - uVar5) - uVar2;
  return uVar1 >> 0xf ^ uVar5 - (uVar2 + uVar1);
}



// FUNCTION 144a86616 FUN_144a86616 body=1112 status=ok
// SIG undefined FUN_144a86616(void)

uint FUN_144a86616(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = (uint)*(byte *)(param_1 + 0x38) - (uint)*(byte *)(param_1 + 0x39);
  uVar1 = (iVar5 * 0x100 | (uint)*(byte *)(param_1 + 0x38)) ^ 0x9e3779b9;
  uVar2 = uVar1 >> 0xd ^ ((uint)*(byte *)(param_1 + 0x39) - iVar5) - uVar1;
  uVar4 = uVar2 >> 0xc ^ (iVar5 - uVar1) - uVar2;
  uVar1 = uVar4 << 0x10 ^ (uVar1 - uVar2) - uVar4;
  uVar6 = uVar1 >> 5 ^ (uVar2 - uVar4) - uVar1;
  uVar2 = uVar6 >> 3 ^ (uVar4 - uVar1) - uVar6;
  uVar1 = uVar2 << 10 ^ (uVar1 - uVar6) - uVar2;
  uVar1 = uVar1 >> 0xf ^ uVar6 - (uVar2 + uVar1);
  lVar3 = 6;
  do {
    uVar2 = (uint)*(byte *)(param_1 + -6 + lVar3);
    uVar4 = (uint)*(byte *)(param_1 + -4 + lVar3);
    iVar5 = uVar2 - uVar4;
    uVar2 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
    uVar4 = uVar2 >> 0xd ^ (uVar4 - iVar5) - uVar2;
    uVar6 = uVar4 >> 0xc ^ (iVar5 - uVar2) - uVar4;
    uVar7 = uVar6 << 0x10 ^ (uVar2 - uVar4) - uVar6;
    uVar2 = uVar7 >> 5 ^ (uVar4 - uVar6) - uVar7;
    uVar6 = uVar2 >> 3 ^ (uVar6 - uVar7) - uVar2;
    uVar4 = uVar6 << 10 ^ (uVar7 - uVar2) - uVar6;
    uVar2 = uVar4 >> 0xf ^ uVar2 - (uVar6 + uVar4);
    uVar4 = (uint)*(byte *)(param_1 + -5 + lVar3);
    iVar5 = uVar2 - uVar4;
    uVar2 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
    uVar4 = uVar2 >> 0xd ^ (uVar4 - iVar5) - uVar2;
    uVar6 = uVar4 >> 0xc ^ (iVar5 - uVar2) - uVar4;
    uVar2 = uVar6 << 0x10 ^ (uVar2 - uVar4) - uVar6;
    uVar4 = uVar2 >> 5 ^ (uVar4 - uVar6) - uVar2;
    uVar6 = uVar4 >> 3 ^ (uVar6 - uVar2) - uVar4;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar4) - uVar6;
    uVar2 = uVar2 >> 0xf ^ uVar4 - (uVar6 + uVar2);
    uVar4 = (uint)*(byte *)(param_1 + -3 + lVar3);
    iVar5 = uVar2 - uVar4;
    uVar2 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
    uVar4 = uVar2 >> 0xd ^ (uVar4 - iVar5) - uVar2;
    uVar6 = uVar4 >> 0xc ^ (iVar5 - uVar2) - uVar4;
    uVar2 = uVar6 << 0x10 ^ (uVar2 - uVar4) - uVar6;
    uVar4 = uVar2 >> 5 ^ (uVar4 - uVar6) - uVar2;
    uVar6 = uVar4 >> 3 ^ (uVar6 - uVar2) - uVar4;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar4) - uVar6;
    uVar2 = uVar2 >> 0xf ^ uVar4 - (uVar6 + uVar2);
    uVar4 = (uint)*(byte *)(param_1 + -1 + lVar3);
    iVar5 = uVar2 - uVar4;
    uVar2 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
    uVar4 = uVar2 >> 0xd ^ (uVar4 - iVar5) - uVar2;
    uVar6 = uVar4 >> 0xc ^ (iVar5 - uVar2) - uVar4;
    uVar7 = uVar6 << 0x10 ^ (uVar2 - uVar4) - uVar6;
    uVar2 = uVar7 >> 5 ^ (uVar4 - uVar6) - uVar7;
    uVar6 = uVar2 >> 3 ^ (uVar6 - uVar7) - uVar2;
    uVar4 = uVar6 << 10 ^ (uVar7 - uVar2) - uVar6;
    uVar2 = uVar4 >> 0xf ^ uVar2 - (uVar6 + uVar4);
    uVar4 = (uint)*(byte *)(param_1 + -2 + lVar3);
    iVar5 = uVar2 - uVar4;
    uVar2 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
    uVar4 = uVar2 >> 0xd ^ (uVar4 - iVar5) - uVar2;
    uVar6 = uVar4 >> 0xc ^ (iVar5 - uVar2) - uVar4;
    uVar2 = uVar6 << 0x10 ^ (uVar2 - uVar4) - uVar6;
    uVar4 = uVar2 >> 5 ^ (uVar4 - uVar6) - uVar2;
    uVar6 = uVar4 >> 3 ^ (uVar6 - uVar2) - uVar4;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar4) - uVar6;
    uVar2 = uVar2 >> 0xf ^ uVar4 - (uVar6 + uVar2);
    iVar5 = uVar2 - *(byte *)(param_1 + lVar3);
    uVar2 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
    uVar4 = uVar2 >> 0xd ^ ((uint)*(byte *)(param_1 + lVar3) - iVar5) - uVar2;
    uVar6 = uVar4 >> 0xc ^ (iVar5 - uVar2) - uVar4;
    uVar2 = uVar6 << 0x10 ^ (uVar2 - uVar4) - uVar6;
    uVar4 = uVar2 >> 5 ^ (uVar4 - uVar6) - uVar2;
    uVar6 = uVar4 >> 3 ^ (uVar6 - uVar2) - uVar4;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar4) - uVar6;
    uVar2 = uVar2 >> 0xf ^ uVar4 - (uVar6 + uVar2);
    uVar4 = uVar2 >> 0xd ^ uVar1 - uVar2;
    uVar1 = uVar4 << 8 ^ (-0x61c88647 - uVar2) - uVar4;
    uVar6 = uVar1 >> 0xd ^ (uVar2 - uVar4) - uVar1;
    uVar2 = uVar6 >> 0xc ^ (uVar4 - uVar1) - uVar6;
    uVar1 = uVar2 << 0x10 ^ (uVar1 - uVar6) - uVar2;
    uVar4 = uVar1 >> 5 ^ (uVar6 - uVar2) - uVar1;
    uVar2 = uVar4 >> 3 ^ (uVar2 - uVar1) - uVar4;
    uVar1 = uVar2 << 10 ^ (uVar1 - uVar4) - uVar2;
    uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar2 + uVar1);
    lVar3 = lVar3 + 7;
  } while (lVar3 != 0x3e);
  return uVar1;
}



// FUNCTION 144a86a6e FUN_144a86a6e body=32 status=ok
// SIG undefined FUN_144a86a6e(void)

undefined8 FUN_144a86a6e(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x3f0);
  }
  return 0;
}



// FUNCTION 144a86a8e FUN_144a86a8e body=368 status=ok
// SIG undefined FUN_144a86a8e(void)

void FUN_144a86a8e(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 local_42;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 1) == '\0') goto LAB_144a86b01;
  uVar5 = *param_2;
  if (*(char *)((longlong)param_2 + 3) == '\a') {
    local_58 = &local_42;
    local_42 = uVar5;
    local_40 = param_3;
    FUN_14175f5f2(*param_1,*param_1 + 0x88,param_1 + 7);
    goto LAB_144a86b01;
  }
  lVar11 = *param_1;
  puVar1 = (ulonglong *)(lVar11 + 0x60);
  lVar2 = (longlong)(int)param_1[6] + 1;
  puVar9 = *(undefined8 **)(lVar11 + 0x60);
  if ((longlong)(int)param_1[6] == 0) {
    puVar9 = (undefined8 *)((longlong)puVar9 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar9 + 2;
    puVar10 = puVar9;
    if (*(undefined8 **)(lVar11 + 0x68) < puVar12) {
      FUN_140023dd8(puVar1,0x18);
      puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar9 + 2;
      puVar10 = puVar9;
    }
LAB_144a86aeb:
    *puVar1 = (ulonglong)puVar12;
  }
  else {
    puVar12 = puVar9 + 2;
    if (puVar12 <= *(undefined8 **)(lVar11 + 0x68)) {
      puVar10 = (undefined8 *)param_1[5];
      goto LAB_144a86aeb;
    }
    puVar10 = (undefined8 *)((longlong)puVar9 + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + lVar2 * 2;
    if (*(undefined8 **)(lVar11 + 0x68) < puVar9) {
      FUN_140023dd8(puVar1,(int)lVar2 * 0x10 | 8);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar10 + lVar2 * 2;
    }
    *puVar1 = (ulonglong)puVar9;
    puVar9 = puVar10;
    if (0 < (int)param_1[6]) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        puVar3 = (undefined4 *)(param_1[5] + lVar11);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar4 = (undefined4 *)((longlong)puVar10 + lVar11);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar13 < (int)param_1[6]);
      puVar9 = (undefined8 *)(lVar11 + (longlong)puVar10);
    }
  }
  *puVar9 = param_3;
  *(undefined2 *)(puVar9 + 1) = uVar5;
  *(undefined1 *)((longlong)puVar9 + 10) = 2;
  param_1[5] = (longlong)puVar10;
  *(int *)(param_1 + 6) = (int)lVar2;
LAB_144a86b01:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a86bff FUN_144a86bff body=368 status=ok
// SIG undefined FUN_144a86bff(void)

void FUN_144a86bff(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 local_42;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 1) == '\0') goto LAB_144a86c72;
  uVar5 = *param_2;
  if (*(char *)((longlong)param_2 + 3) == '\x06') {
    local_58 = &local_42;
    local_42 = uVar5;
    local_40 = param_3;
    FUN_144ab3490(*param_1,*param_1 + 0x88,param_1 + 7);
    goto LAB_144a86c72;
  }
  lVar11 = *param_1;
  puVar1 = (ulonglong *)(lVar11 + 0x60);
  lVar2 = (longlong)(int)param_1[6] + 1;
  puVar9 = *(undefined8 **)(lVar11 + 0x60);
  if ((longlong)(int)param_1[6] == 0) {
    puVar9 = (undefined8 *)((longlong)puVar9 + 7U & 0xfffffffffffffff8);
    puVar12 = puVar9 + 2;
    puVar10 = puVar9;
    if (*(undefined8 **)(lVar11 + 0x68) < puVar12) {
      FUN_140023dd8(puVar1,0x18);
      puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar9 + 2;
      puVar10 = puVar9;
    }
LAB_144a86c5c:
    *puVar1 = (ulonglong)puVar12;
  }
  else {
    puVar12 = puVar9 + 2;
    if (puVar12 <= *(undefined8 **)(lVar11 + 0x68)) {
      puVar10 = (undefined8 *)param_1[5];
      goto LAB_144a86c5c;
    }
    puVar10 = (undefined8 *)((longlong)puVar9 + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + lVar2 * 2;
    if (*(undefined8 **)(lVar11 + 0x68) < puVar9) {
      FUN_140023dd8(puVar1,(int)lVar2 * 0x10 | 8);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar10 + lVar2 * 2;
    }
    *puVar1 = (ulonglong)puVar9;
    puVar9 = puVar10;
    if (0 < (int)param_1[6]) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        puVar3 = (undefined4 *)(param_1[5] + lVar11);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar4 = (undefined4 *)((longlong)puVar10 + lVar11);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar13 < (int)param_1[6]);
      puVar9 = (undefined8 *)(lVar11 + (longlong)puVar10);
    }
  }
  *puVar9 = param_3;
  *(undefined2 *)(puVar9 + 1) = uVar5;
  *(undefined1 *)((longlong)puVar9 + 10) = 1;
  param_1[5] = (longlong)puVar10;
  *(int *)(param_1 + 6) = (int)lVar2;
LAB_144a86c72:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a86d70 FUN_144a86d70 body=504 status=ok
// SIG undefined FUN_144a86d70(void)

void FUN_144a86d70(longlong *param_1,undefined2 *param_2,void *param_3,int param_4)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  void *_Dst_00;
  longlong lVar10;
  int iVar11;
  size_t _Size;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  uVar7 = (uint)(ushort)param_2[2] + param_4 * -0x10;
  if ((int)uVar7 < 1) {
    return;
  }
  _Size = 0x10;
  if (uVar7 < 0x10) {
    _Size = (size_t)uVar7;
  }
  uVar2 = *param_2;
  sVar3 = param_2[1];
  iVar4 = (int)param_1[2];
  iVar11 = iVar4 + (int)_Size;
  lVar5 = *param_1;
  puVar1 = (ulonglong *)(lVar5 + 0x10);
  _Dst_00 = *(void **)(lVar5 + 0x10);
  uVar6 = *(ulonglong *)(lVar5 + 0x18);
  uVar13 = (longlong)_Dst_00 + _Size;
  if (iVar4 == 0) {
    if (uVar6 < uVar13) {
      FUN_140023dd8(puVar1,(int)_Size + 1);
      _Dst_00 = (void *)*puVar1;
      uVar13 = (longlong)_Dst_00 + _Size;
    }
    *puVar1 = uVar13;
    _Dst = _Dst_00;
  }
  else if (uVar6 < uVar13) {
    uVar13 = (longlong)_Dst_00 + (longlong)iVar11;
    _Dst = _Dst_00;
    if (uVar6 < uVar13) {
      FUN_140023dd8(puVar1,iVar11 + 1);
      _Dst = (void *)*puVar1;
      uVar13 = (longlong)iVar11 + (longlong)_Dst;
    }
    *puVar1 = uVar13;
    memcpy(_Dst,(void *)param_1[1],(longlong)(int)param_1[2]);
    _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
  }
  else {
    _Dst = (void *)param_1[1];
    *puVar1 = uVar13;
  }
  memcpy(_Dst_00,param_3,_Size);
  param_1[1] = (longlong)_Dst;
  *(int *)(param_1 + 2) = iVar11;
  lVar10 = *param_1;
  puVar1 = (ulonglong *)(lVar10 + 0x38);
  lVar5 = (longlong)(int)param_1[4] + 1;
  puVar8 = *(undefined8 **)(lVar10 + 0x38);
  if ((longlong)(int)param_1[4] == 0) {
    puVar8 = (undefined8 *)((longlong)puVar8 + 1U & 0xfffffffffffffffe);
    puVar12 = puVar8 + 1;
    puVar9 = puVar8;
    if (*(undefined8 **)(lVar10 + 0x40) < puVar12) {
      FUN_140023dd8(puVar1,10);
      puVar8 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
      puVar12 = puVar8 + 1;
      puVar9 = puVar8;
    }
  }
  else {
    puVar12 = puVar8 + 1;
    if (*(undefined8 **)(lVar10 + 0x40) < puVar12) {
      puVar9 = (undefined8 *)((longlong)puVar8 + 1U & 0xfffffffffffffffe);
      puVar8 = puVar9 + lVar5;
      if (*(undefined8 **)(lVar10 + 0x40) < puVar8) {
        FUN_140023dd8(puVar1);
        puVar9 = (undefined8 *)(*puVar1 + 1 & 0xfffffffffffffffe);
        puVar8 = puVar9 + lVar5;
      }
      *puVar1 = (ulonglong)puVar8;
      puVar8 = puVar9;
      if (0 < (int)param_1[4]) {
        lVar10 = 0;
        do {
          *puVar8 = *(undefined8 *)(param_1[3] + lVar10 * 8);
          lVar10 = lVar10 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar10 < (int)param_1[4]);
      }
      goto LAB_144a86e3d;
    }
    puVar9 = (undefined8 *)param_1[3];
  }
  *puVar1 = (ulonglong)puVar12;
LAB_144a86e3d:
  *(undefined2 *)puVar8 = uVar2;
  *(short *)((longlong)puVar8 + 2) = sVar3 + (short)param_4 * 0x10;
  *(short *)((longlong)puVar8 + 4) = (short)iVar4;
  *(short *)((longlong)puVar8 + 6) = (short)_Size;
  param_1[3] = (longlong)puVar9;
  *(int *)(param_1 + 4) = (int)lVar5;
  return;
}



// FUNCTION 144a86f68 ReleaseSRWLockExclusive body=7 status=ok
// SIG void ReleaseSRWLockExclusive(PSRWLOCK SRWLock)

void __stdcall ReleaseSRWLockExclusive(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x000144a86f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 144a86f70 FUN_144a86f70 body=206 status=ok
// SIG undefined FUN_144a86f70(void)

ulonglong FUN_144a86f70(undefined4 *param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  puVar1 = param_1 + 1;
  DVar5 = GetCurrentThreadId();
  uVar6 = param_1[1];
  if ((uVar6 & 1) == 0) {
    LOCK();
    uVar3 = *puVar1;
    bVar8 = uVar6 == uVar3;
    if (bVar8) {
      *puVar1 = uVar6 | 1;
      uVar3 = uVar6;
    }
    uVar6 = uVar3;
    UNLOCK();
    if (bVar8) {
      param_1[2] = DVar5;
      goto LAB_144a86fa4;
    }
  }
  if (param_1[2] == DVar5) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar6);
  }
LAB_144a86fa4:
  piVar2 = (int *)(param_2 + 0x68);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(param_2 + 100) = *param_1;
    iVar4 = param_1[0x48];
    param_1[0x48] = iVar4 + 1U;
    if ((uint)param_1[0x49] < iVar4 + 1U) {
      FUN_140430e10(param_1 + 0x46,iVar4);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x46) + (longlong)iVar4 * 8) = param_2;
  }
  uVar6 = *puVar1;
  uVar7 = (ulonglong)uVar6;
  if (uVar6 < 4) {
    param_1[2] = 0;
    if (uVar6 < 2) {
      LOCK();
      uVar3 = *puVar1;
      if (uVar6 == uVar3) {
        *puVar1 = 0;
      }
      else {
        uVar7 = (ulonglong)uVar3;
      }
      UNLOCK();
      if (uVar6 == uVar3) {
        return uVar7;
      }
    }
    uVar7 = FUN_140d366d2(puVar1);
    return uVar7;
  }
  LOCK();
  *puVar1 = *puVar1 - 4;
  UNLOCK();
  return uVar7;
}



// FUNCTION 144a8703e FUN_144a8703e body=228 status=ok
// SIG undefined FUN_144a8703e(void)

longlong FUN_144a8703e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5c920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14868f36b;
    local_40 = FUN_1464d7452;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogActor",&DAT_14cb5c920,&DAT_14868f36a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a87124 FUN_144a87124 body=232 status=ok
// SIG undefined FUN_144a87124(void)

undefined8 * FUN_144a87124(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 144a8720c FUN_144a8720c body=1 status=ok
// SIG undefined FUN_144a8720c(void)

void FUN_144a8720c(void)

{
  return;
}



// FUNCTION 144a8720e FUN_144a8720e body=128 status=ok
// SIG undefined FUN_144a8720e(void)

void FUN_144a8720e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = (longlong)(int)param_2[1] * 0x10;
  lVar5 = (longlong)*(int *)(*(longlong *)(*param_2 + 0x1b8) + 8 + lVar4);
  if (lVar5 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x1b8) + lVar4);
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + lVar6);
      if (plVar1[1] == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(plVar1[1] + 0x18);
      }
      if ((iVar3 == *(int *)(param_1 + 0x18)) &&
         (cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1), cVar2 != '\0')) {
        (**(code **)(*plVar1 + 0x18))(plVar1,0);
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  return;
}



// FUNCTION 144a8728e FUN_144a8728e body=33 status=ok
// SIG undefined FUN_144a8728e(void)

undefined8 FUN_144a8728e(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xc60) == 0x40000002);
}



// FUNCTION 144a872af FUN_144a872af body=179 status=ok
// SIG undefined FUN_144a872af(void)

undefined8 FUN_144a872af(double *param_1)

{
  double _X;
  int iVar1;
  undefined4 extraout_var;
  
  _X = *param_1;
  if (((((-DAT_14cb1cda8 < _X) && (_X < DAT_14cb1cda8)) && (-DAT_14cb1cdb0 < param_1[1])) &&
      ((param_1[1] < DAT_14cb1cdb0 && (-DAT_14cb1cdb8 < param_1[2])))) &&
     ((param_1[2] < DAT_14cb1cdb8 &&
      ((iVar1 = _finite(_X), iVar1 != 0 && (iVar1 = _finite(param_1[1]), iVar1 != 0)))))) {
    iVar1 = _finite(param_1[2]);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != 0);
  }
  return 0;
}



// FUNCTION 144a87362 FUN_144a87362 body=4 status=ok
// SIG undefined FUN_144a87362(void)

undefined8 FUN_144a87362(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144a87366 FUN_144a87366 body=185 status=ok
// SIG undefined FUN_144a87366(void)

longlong * FUN_144a87366(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar1 = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x13) = *(undefined4 *)((longlong)param_2 + 0x13);
  *(int *)(param_1 + 2) = (int)lVar1;
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  param_1[6] = param_2[6];
  lVar1 = param_2[7];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[8];
  lVar2 = param_2[9];
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar3;
  param_1[8] = lVar1;
  param_1[9] = lVar2;
  return param_1;
}



// FUNCTION 144a87420 FUN_144a87420 body=358 status=ok
// SIG undefined FUN_144a87420(void)

longlong *
FUN_144a87420(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong *param_4,
             longlong param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  
  *param_4 = *param_4 & 0xffffffffffdfbff7 | 8;
  iVar3 = FUN_144847bd5(param_4);
  puVar1 = (uint *)(param_1 + 0x10);
  DVar4 = GetCurrentThreadId();
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar8 = uVar5 == uVar2;
    if (bVar8) {
      *puVar1 = uVar5 | 1;
      uVar2 = uVar5;
    }
    uVar5 = uVar2;
    UNLOCK();
    if (bVar8) {
      *(DWORD *)(param_1 + 0x14) = DVar4;
      goto LAB_144a87480;
    }
  }
  if (*(DWORD *)(param_1 + 0x14) == DVar4) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar5);
  }
LAB_144a87480:
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar7 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 4) == iVar3) &&
         (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 8),
         (int)plVar6[0xd] == 1)) {
        if (plVar6 != (longlong *)0x0) {
          plVar6[5] = param_5;
          *(undefined4 *)((longlong)plVar6 + 0x6c) = 0;
          *param_2 = (longlong)plVar6;
          goto LAB_144a874d4;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (*(int *)(param_1 + 0x30) != iVar7);
  }
  plVar6 = (longlong *)FUN_140142686(param_1,param_3,param_4,iVar3,param_5);
  plVar6[5] = param_5;
  *(undefined4 *)((longlong)plVar6 + 0x6c) = 0;
  *param_2 = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
LAB_144a874d4:
    if (*(code **)(*plVar6 + 0x30) == FUN_144b1cfec) {
      LOCK();
      *(int *)(plVar6 + 0xd) = (int)plVar6[0xd] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar6 + 0x30))();
    }
  }
  uVar5 = *puVar1;
  if (uVar5 < 4) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (uVar5 < 2) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar5 == uVar2) {
        *puVar1 = 0;
      }
      UNLOCK();
      if (uVar5 == uVar2) {
        return param_2;
      }
    }
    FUN_140d366d2(puVar1);
  }
  else {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 144a87586 FUN_144a87586 body=24 status=ok
// SIG undefined FUN_144a87586(void)

longlong FUN_144a87586(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x20) == param_2) break;
    lVar1 = *(longlong *)(lVar1 + 0x48);
  }
  return lVar1;
}



// FUNCTION 144a8759e FUN_144a8759e body=64 status=ok
// SIG undefined FUN_144a8759e(void)

void FUN_144a8759e(undefined1 *param_1)

{
  *param_1 = DAT_14c96b238;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0x400000000;
  param_1[0x138] = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  return;
}



// FUNCTION 144a875de FUN_144a875de body=166 status=ok
// SIG undefined FUN_144a875de(void)

char FUN_144a875de(longlong *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  code *pcVar5;
  
  pcVar3 = *(code **)(*param_1 + 0x38);
  plVar4 = param_1;
  if (pcVar3 == FUN_144765e18) {
    plVar4 = (longlong *)param_1[9];
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
      pcVar3 = *(code **)(*plVar4 + 0x420);
      pcVar5 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar3 = *(code **)(*plVar4 + 0x420);
      pcVar5 = (code *)&LAB_14497e108;
    }
    if (pcVar3 == pcVar5) goto LAB_144a8761c;
  }
  (*pcVar3)(plVar4);
LAB_144a8761c:
  if (*(code **)(*param_1 + 0x100) == (code *)&LAB_144b25520) {
    bVar1 = (*(byte *)(param_1[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar1 = (**(code **)(*param_1 + 0x100))(param_1);
  }
  cVar2 = '\x01';
  if (bVar1 == 0) {
    cVar2 = ((*param_2 & 4) == 0) + '\x01';
  }
  return cVar2;
}



// FUNCTION 144a87684 FUN_144a87684 body=229 status=ok
// SIG undefined FUN_144a87684(void)

int FUN_144a87684(longlong *param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x40;
        if (((((*(char *)(lVar3 + lVar5) == *param_3) &&
              (lVar1 = lVar3 + lVar5, *(int *)(lVar1 + 4) == *(int *)(param_3 + 4))) &&
             (*(int *)(lVar1 + 8) == *(int *)(param_3 + 8))) &&
            ((*(int *)(lVar1 + 0xc) == *(int *)(param_3 + 0xc) &&
             (*(int *)(lVar1 + 0x10) == *(int *)(param_3 + 0x10))))) &&
           ((*(int *)(lVar1 + 0x14) == *(int *)(param_3 + 0x14) &&
            (*(int *)(lVar1 + 0x18) == *(int *)(param_3 + 0x18))))) {
          if ((*(float *)(lVar1 + 0x1c) == *(float *)(param_3 + 0x1c)) &&
             (!NAN(*(float *)(lVar1 + 0x1c)) && !NAN(*(float *)(param_3 + 0x1c)))) {
            if ((*(float *)(lVar1 + 0x20) == *(float *)(param_3 + 0x20)) &&
               (!NAN(*(float *)(lVar1 + 0x20)) && !NAN(*(float *)(param_3 + 0x20)))) {
              if ((*(float *)(lVar1 + 0x24) == *(float *)(param_3 + 0x24)) &&
                 (!NAN(*(float *)(lVar1 + 0x24)) && !NAN(*(float *)(param_3 + 0x24)))) {
                if ((*(float *)(lVar1 + 0x28) == *(float *)(param_3 + 0x28)) &&
                   ((!NAN(*(float *)(lVar1 + 0x28)) && !NAN(*(float *)(param_3 + 0x28)) &&
                    (*(int *)(lVar1 + 0x2c) == *(int *)(param_3 + 0x2c))))) {
                  return iVar2;
                }
              }
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x38 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 144a8776a FUN_144a8776a body=228 status=ok
// SIG undefined FUN_144a8776a(void)

longlong FUN_144a8776a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9684a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1469380b7;
    local_40 = FUN_1462798ef;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/SlateCore",L"FontProviderInterface",&DAT_14c9684a8,&DAT_1469380b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9684a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a87850 FUN_144a87850 body=228 status=ok
// SIG undefined FUN_144a87850(void)

longlong FUN_144a87850(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabe878 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147856f1d;
    local_40 = FUN_14636bbb2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ActorInstanceManagerInterface",&DAT_14cabe878,&DAT_147856f1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabe878;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a87936 FUN_144a87936 body=228 status=ok
// SIG undefined FUN_144a87936(void)

longlong FUN_144a87936(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1c498 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147e36893;
    local_40 = FUN_146420564;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c498;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a87a1c FUN_144a87a1c body=228 status=ok
// SIG undefined FUN_144a87a1c(void)

longlong FUN_144a87a1c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb56068 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60de;
    local_38 = &LAB_14862d99f;
    local_40 = &LAB_1464b60e3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xc90;
    FUN_14081cfa3(L"/Script/GbxGame",L"ControlledMove",&DAT_14cb56068,&DAT_14862d99e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56068;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a87b02 FUN_144a87b02 body=228 status=ok
// SIG undefined FUN_144a87b02(void)

longlong FUN_144a87b02(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5e220 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459ebe90;
    local_38 = &LAB_1486a1487;
    local_40 = &LAB_1464e0171;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x440;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e220;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a87be8 FUN_144a87be8 body=228 status=ok
// SIG undefined FUN_144a87be8(void)

longlong FUN_144a87be8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined2 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined2 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a0828 == 0) {
    local_30 = &local_10;
    local_10 = &DAT_1427db2a2;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146271292;
    local_38 = &LAB_14708904b;
    local_40 = &LAB_145aff100;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusScriptStruct",&DAT_14c9a0828,&DAT_14708904a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0828;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a87ccd FUN_144a87ccd body=60 status=ok
// SIG undefined FUN_144a87ccd(void)

void FUN_144a87ccd(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144a87d0a FUN_144a87d0a body=46 status=ok
// SIG undefined FUN_144a87d0a(void)

undefined8 FUN_144a87d0a(longlong *param_1)

{
  char cVar1;
  char extraout_AL;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if (*(code **)(*param_1 + 0x498) == (code *)&LAB_14015c36e) {
    cVar1 = (char)param_1[0x42];
    uVar2 = 0x14015c3;
  }
  else {
    (**(code **)(*param_1 + 0x498))();
    cVar1 = extraout_AL;
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,cVar1 == '\b');
}



// FUNCTION 144a87d38 FUN_144a87d38 body=172 status=ok
// SIG undefined FUN_144a87d38(void)

ulonglong FUN_144a87d38(char *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x18) = lVar4;
  }
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_1 + 0x10);
        *(longlong *)(param_1 + 0x20) = lVar4;
        if (lVar4 != 0) goto LAB_144a87d57;
      }
    }
    if (*param_1 == '\x01') {
      uVar5 = CONCAT71(uVar6,*(longlong *)(param_1 + 4) != 0);
    }
    else {
      uVar5 = 0;
    }
  }
LAB_144a87d57:
  return uVar5 & 0xffffffff;
}



// FUNCTION 144a87de4 FUN_144a87de4 body=1115 status=ok
// SIG undefined FUN_144a87de4(void)

undefined1 (*) [16] FUN_144a87de4(undefined1 (*param_1) [16],double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar4;
  double dVar6;
  
  dVar1 = *param_2;
  dVar2 = param_2[2];
  dVar3 = param_2[1];
  dVar4 = param_2[1];
  dVar5 = param_2[3];
  dVar6 = param_2[3];
  dVar12 = dVar5 * 0.0 + dVar2 * 0.0 + dVar3 * 0.0 + dVar1 * 1.0;
  dVar13 = dVar6 * 0.0 + dVar2 * 0.0 + dVar4 * 1.0 + dVar1 * 0.0;
  dVar23 = dVar5 * 0.0 + dVar2 * 1.0 + dVar3 * 0.0 + dVar1 * 0.0;
  dVar24 = dVar6 * 1.0 + dVar2 * 0.0 + dVar4 * 0.0 + dVar1 * 0.0;
  dVar1 = param_2[4];
  dVar2 = param_2[5];
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  dVar5 = param_2[7];
  dVar6 = param_2[7];
  dVar15 = dVar5 * 0.0 + dVar3 * 0.0 + dVar2 * 0.0 + dVar1 * 1.0;
  dVar16 = dVar6 * 0.0 + dVar3 * 0.0 + dVar4 * 1.0 + dVar1 * 0.0;
  dVar25 = dVar5 * 0.0 + dVar3 * 1.0 + dVar2 * 0.0 + dVar1 * 0.0;
  dVar26 = dVar6 * 1.0 + dVar3 * 0.0 + dVar4 * 0.0 + dVar1 * 0.0;
  dVar1 = param_2[8];
  dVar2 = param_2[9];
  dVar4 = param_2[9];
  dVar3 = param_2[10];
  dVar5 = param_2[0xb];
  dVar6 = param_2[0xb];
  dVar18 = dVar5 * 0.0 + dVar3 * 0.0 + dVar2 * 0.0 + dVar1 * 1.0;
  dVar19 = dVar6 * 0.0 + dVar3 * 0.0 + dVar4 * 1.0 + dVar1 * 0.0;
  dVar8 = dVar5 * 0.0 + dVar3 * 1.0 + dVar2 * 0.0 + dVar1 * 0.0;
  dVar9 = dVar6 * 1.0 + dVar3 * 0.0 + dVar4 * 0.0 + dVar1 * 0.0;
  dVar1 = param_2[0xc];
  dVar2 = param_2[0xd];
  dVar4 = param_2[0xd];
  dVar3 = param_2[0xe];
  dVar5 = param_2[0xf];
  dVar6 = param_2[0xf];
  dVar21 = dVar5 * 0.0 + dVar3 * 0.0 + dVar2 * 0.0 + dVar1 * 1.0;
  dVar22 = dVar6 * 0.0 + dVar3 * 0.0 + dVar4 * 1.0 + dVar1 * 0.0;
  dVar2 = dVar5 * 0.0 + dVar3 * 1.0 + dVar2 * 0.0 + dVar1 * 0.0;
  dVar4 = dVar6 * 1.0 + dVar3 * 0.0 + dVar4 * 0.0 + dVar1 * 0.0;
  dVar5 = dVar24 * 0.0 + dVar23 * 0.0 + dVar13 * 1.0 + dVar12 * 0.0;
  dVar6 = dVar26 * 0.0 + dVar25 * 0.0 + dVar16 * 1.0 + dVar15 * 0.0;
  dVar20 = dVar9 * 0.0 + dVar8 * 0.0 + dVar19 * 1.0 + dVar18 * 0.0;
  dVar1 = dVar9 * 1.0 + dVar8 * 0.0 + dVar19 * 0.0 + dVar18 * 0.0;
  dVar3 = dVar4 * 1.0 + dVar2 * 0.0 + dVar22 * 0.0 + dVar21 * 0.0;
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar24 * 0.0 + dVar23 * 0.0 + dVar13 * 0.0 + dVar12 * 1.0;
  auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *param_1 = auVar11;
  *(double *)param_1[1] = dVar24 * 0.0 + dVar23 * 1.0 + dVar13 * 0.0 + dVar12 * 0.0;
  *(double *)(param_1[1] + 8) = dVar24 * 1.0 + dVar23 * 0.0 + dVar13 * 0.0 + dVar12 * 0.0;
  auVar14._8_4_ = SUB84(dVar6,0);
  auVar14._0_8_ = dVar26 * 0.0 + dVar25 * 0.0 + dVar16 * 0.0 + dVar15 * 1.0;
  auVar14._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  param_1[2] = auVar14;
  *(double *)param_1[3] = dVar26 * 0.0 + dVar25 * 1.0 + dVar16 * 0.0 + dVar15 * 0.0;
  *(double *)(param_1[3] + 8) = dVar26 * 1.0 + dVar25 * 0.0 + dVar16 * 0.0 + dVar15 * 0.0;
  auVar17._8_4_ = SUB84(dVar20,0);
  auVar17._0_8_ = dVar9 * 0.0 + dVar8 * 0.0 + dVar19 * 0.0 + dVar18 * 1.0;
  auVar17._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  param_1[4] = auVar17;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = dVar9 * 0.0 + dVar8 * 1.0 + dVar19 * 0.0 + dVar18 * 0.0;
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  param_1[5] = auVar7;
  *(double *)param_1[6] = dVar4 * 0.0 + dVar2 * 0.0 + dVar22 * 0.0 + dVar21 * 1.0;
  *(double *)(param_1[6] + 8) = dVar4 * 0.0 + dVar2 * 0.0 + dVar22 * 1.0 + dVar21 * 0.0;
  auVar10._8_4_ = SUB84(dVar3,0);
  auVar10._0_8_ = dVar4 * 0.0 + dVar2 * 1.0 + dVar22 * 0.0 + dVar21 * 0.0;
  auVar10._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  param_1[7] = auVar10;
  return param_1;
}


