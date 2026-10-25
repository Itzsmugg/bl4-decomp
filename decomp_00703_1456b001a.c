// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1456b001a FUN_1456b001a body=711 status=ok
// SIG undefined FUN_1456b001a(void)

bool FUN_1456b001a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == *(int *)(param_2 + 1)) {
    if ((1 < iVar1) && (iVar1 = FUN_144a80a00(*param_1,*param_2), iVar1 != 0)) {
      return false;
    }
  }
  else if (*(int *)(param_2 + 1) + iVar1 != 1) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 == *(int *)(param_2 + 3)) {
    if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[2],param_2[2]), iVar1 != 0)) {
      return false;
    }
  }
  else if (*(int *)(param_2 + 3) + iVar1 != 1) {
    return false;
  }
  if ((param_1[4] == param_2[4]) && (param_1[5] == param_2[5])) {
    iVar1 = *(int *)(param_1 + 7);
    if (iVar1 == *(int *)(param_2 + 7)) {
      if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[6],param_2[6]), iVar1 != 0)) {
        return false;
      }
    }
    else if (*(int *)(param_2 + 7) + iVar1 != 1) {
      return false;
    }
    iVar1 = *(int *)(param_1 + 9);
    if (iVar1 == *(int *)(param_2 + 9)) {
      if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[8],param_2[8]), iVar1 != 0)) {
        return false;
      }
    }
    else if (*(int *)(param_2 + 9) + iVar1 != 1) {
      return false;
    }
    iVar1 = *(int *)(param_1 + 0xb);
    if (iVar1 == *(int *)(param_2 + 0xb)) {
      if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[10],param_2[10]), iVar1 != 0)) {
        return false;
      }
    }
    else if (*(int *)(param_2 + 0xb) + iVar1 != 1) {
      return false;
    }
    iVar1 = *(int *)(param_1 + 0xd);
    if (iVar1 == *(int *)(param_2 + 0xd)) {
      if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[0xc],param_2[0xc]), iVar1 != 0)) {
        return false;
      }
    }
    else if (*(int *)(param_2 + 0xd) + iVar1 != 1) {
      return false;
    }
    iVar1 = *(int *)(param_1 + 0xf);
    if (iVar1 == *(int *)(param_2 + 0xf)) {
      if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[0xe],param_2[0xe]), iVar1 != 0)) {
        return false;
      }
    }
    else if (*(int *)(param_2 + 0xf) + iVar1 != 1) {
      return false;
    }
    if ((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) &&
       (*(int *)((longlong)param_1 + 0x84) == *(int *)((longlong)param_2 + 0x84))) {
      iVar1 = *(int *)(param_1 + 0x12);
      if (iVar1 == *(int *)(param_2 + 0x12)) {
        if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[0x11],param_2[0x11]), iVar1 != 0)) {
          return false;
        }
      }
      else if (*(int *)(param_2 + 0x12) + iVar1 != 1) {
        return false;
      }
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == *(int *)(param_2 + 0x14)) {
        if ((1 < iVar1) && (iVar1 = FUN_144a80a00(param_1[0x13],param_2[0x13]), iVar1 != 0)) {
          return false;
        }
      }
      else if (*(int *)(param_2 + 0x14) + iVar1 != 1) {
        return false;
      }
      iVar1 = *(int *)(param_1 + 0x16);
      if (iVar1 == *(int *)(param_2 + 0x16)) {
        if ((iVar1 < 2) || (iVar1 = FUN_144a80a00(param_1[0x15],param_2[0x15]), iVar1 == 0)) {
LAB_1456b01af:
          return *(char *)(param_1 + 0x17) == *(char *)(param_2 + 0x17);
        }
      }
      else if (*(int *)(param_2 + 0x16) + iVar1 == 1) goto LAB_1456b01af;
    }
  }
  return false;
}



// FUNCTION 1456b02e2 FUN_1456b02e2 body=2004 status=ok
// SIG undefined FUN_1456b02e2(void)

void FUN_1456b02e2(undefined8 *param_1)

{
  longlong *plVar1;
  size_t sVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_6d8 [40];
  undefined **local_6b0 [7];
  undefined ***local_678;
  undefined1 local_670 [128];
  longlong local_5f0;
  char *local_5e8;
  undefined4 local_5e0;
  undefined1 local_5d8 [144];
  char local_548 [127];
  undefined1 local_4c9;
  char local_4c8 [127];
  undefined1 local_449;
  longlong local_448;
  longlong local_440;
  char local_438 [127];
  undefined1 local_3b9;
  char local_3b8 [127];
  undefined1 local_339;
  char local_338 [127];
  undefined1 local_2b9;
  char local_2b8 [127];
  undefined1 local_239;
  char local_238 [127];
  undefined1 local_1b9;
  int local_1b8;
  int local_1b4;
  char local_1b0 [127];
  undefined1 local_131;
  char local_130 [127];
  undefined1 local_b1;
  char local_b0 [127];
  undefined1 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  if (DAT_14cb99a48 == '\x01') {
    memset(local_5d8,0,0x5b0);
    if (*(int *)(param_1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*param_1;
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_548,0x80,local_5e8,0x80);
    local_4c9 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 3) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[2];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_4c8,0x80,local_5e8,0x80);
    local_449 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 7) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[6];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_438,0x80,local_5e8,0x80);
    local_3b9 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 9) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[8];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_3b8,0x80,local_5e8,0x80);
    local_339 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0xb) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[10];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_338,0x80,local_5e8,0x80);
    local_2b9 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0xd) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[0xc];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_2b8,0x80,local_5e8,0x80);
    local_239 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0xf) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[0xe];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_238,0x80,local_5e8,0x80);
    local_1b9 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[0x13];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_130,0x80,local_5e8,0x80);
    local_b1 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x12) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[0x11];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_1b0,0x80,local_5e8,0x80);
    local_131 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x16) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)param_1[0x15];
    }
    local_5f0 = 0;
    if (pwVar4 == (wchar_t *)0x0) {
      local_5e8 = (char *)0x0;
      local_5e0 = 0;
    }
    else {
      sVar2 = wcslen(pwVar4);
      FUN_1446fe5a4(local_670,pwVar4,sVar2 & 0xffffffff,1);
    }
    strncpy_s(local_b0,0x80,local_5e8,0x80);
    local_31 = 0;
    if (local_5f0 != 0) {
      FUN_1400020a8();
    }
    plVar1 = DAT_14cb99a60;
    if (0 < (longlong)param_1[4]) {
      local_448 = param_1[4];
    }
    if (0 < (longlong)param_1[5]) {
      local_440 = param_1[5];
    }
    if ((0 < *(int *)(param_1 + 0x10)) && (0 < *(int *)((longlong)param_1 + 0x84))) {
      local_1b8 = *(int *)(param_1 + 0x10);
      local_1b4 = *(int *)((longlong)param_1 + 0x84);
    }
    if (DAT_14cb99a60 != (longlong *)0x0) {
      if (DAT_14cb99a60[0x1c] == 0) {
        lVar3 = (**(code **)(*DAT_14cb99a60 + 0x30))();
        plVar1[0x1c] = lVar3;
      }
      local_678 = local_6b0;
      local_6b0[0] = &PTR_LAB_14b525020;
      FUN_1456b0ab8(plVar1 + 0xc,local_5d8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_6d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456b0ab8 FUN_1456b0ab8 body=119 status=ok
// SIG undefined FUN_1456b0ab8(void)

void FUN_1456b0ab8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_14001cc68(0x40,0x10);
  *(undefined8 *)(lVar2 + 0x38) = 0;
  FUN_1456b0b30(lVar2,param_3);
  (**(code **)(*(longlong *)(param_1 + 0x80) + 0x10))
            (*(longlong *)(param_1 + 0x80),param_2,lVar2,FUN_143f83fcc);
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
  return;
}



// FUNCTION 1456b0b30 FUN_1456b0b30 body=81 status=ok
// SIG undefined FUN_1456b0b30(void)

void FUN_1456b0b30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
    }
    param_2[7] = 0;
  }
  return;
}



// FUNCTION 1456b0b82 FUN_1456b0b82 body=3139 status=ok
// SIG undefined FUN_1456b0b82(void)

ulonglong FUN_1456b0b82(longlong *param_1,ulonglong param_2,uint *param_3,int param_4,uint param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Dst;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  void *_Src;
  ulonglong uVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  bool bVar25;
  uint local_6c;
  
  if ((int)*param_3 < 0) {
    uVar20 = *param_3 & 0x7fffffff;
  }
  else {
    puVar3 = param_3 + 2;
    if (*(uint **)(param_3 + 6) != (uint *)0x0) {
      puVar3 = *(uint **)(param_3 + 6);
    }
    uVar20 = puVar3[param_4];
  }
  if (uVar20 == 0x7fffffff) {
    if ((param_5 & 8) == 0 || *(longlong *)(param_2 + 0x28) == 0) {
      lVar7 = param_1[0x33];
      if (lVar7 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar7 = param_1[0x33];
      }
      iVar21 = *(int *)(lVar7 + 0xa0);
      *(uint *)(lVar7 + 0xa0) = iVar21 + 1U;
      if (*(uint *)(lVar7 + 0xa4) < iVar21 + 1U) {
        FUN_140039d58((longlong *)(lVar7 + 0x98),iVar21);
      }
      lVar7 = *(longlong *)(lVar7 + 0x98);
      lVar23 = (longlong)iVar21 * 0x10;
      *(ulonglong *)(lVar7 + lVar23) = param_2;
      *(uint *)(lVar7 + 8 + lVar23) = param_5;
      *(int *)(lVar7 + 0xc + lVar23) = param_4;
      FUN_14471e850(param_3,param_4,param_5);
    }
    else {
      FUN_144703b84(param_1,*(undefined8 *)(param_2 + 0x20));
      param_3[1] = param_3[1] | 0x7fffffff;
    }
    goto LAB_1456b0ca9;
  }
  bVar25 = param_5 == 8 && uVar20 == 8;
  uVar15 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar25);
  if (bVar25) {
    uVar20 = 8;
LAB_1456b0c00:
    uVar24 = uVar20 | param_5;
    if (((uVar20 | param_5) & 0xfffff53c) != 0) {
      uVar24 = param_5;
    }
    if (uVar24 != uVar20) {
LAB_1456b0cd9:
      if (uVar20 != uVar24) {
        FUN_144715808(param_1 + 0x31,param_2,uVar20,uVar24,param_4);
        lVar7 = param_1[0x33];
        if (lVar7 == 0) {
          (**(code **)(*param_1 + 8))(param_1);
          lVar7 = param_1[0x33];
        }
        if (*(longlong *)(param_2 + 0xe0) == 0) {
          if ((*(byte *)(param_2 + 0xdf) & 2) != 0) {
            lVar23 = *(longlong *)(param_2 + 0x30);
            if (lVar23 == 0) {
              plVar4 = (longlong *)(param_2 + 0x38);
            }
            else {
              plVar4 = (longlong *)(lVar23 + 0x70);
              if (*(char *)(lVar23 + 0x81) == '\0') goto LAB_1456b0d76;
            }
            lVar23 = *plVar4;
            if (((lVar23 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar23 + 8) != 0)) {
              puVar3 = *(uint **)(lVar7 + 0x10);
              if (*(char *)(lVar23 + 0x28 + (ulonglong)*puVar3) == '\0') {
                *(undefined1 *)(lVar23 + 0x28 + (ulonglong)*puVar3) = 1;
                _Src = *(void **)(puVar3 + 2);
                if (_Src == (void *)0x0) {
                  uVar20 = puVar3[4];
LAB_1456b154f:
                  uVar17 = 0x1000;
                  if (uVar20 != 0) {
                    uVar17 = (int)((float)(int)uVar20 * 0.5 + (float)(int)uVar20);
                  }
                  puVar3[4] = uVar17;
                  lVar7 = -1;
                  if (-1 < (int)uVar17) {
                    lVar7 = (longlong)(int)uVar17 * 8 + (ulonglong)((longlong)(int)uVar17 * 8 == 0);
                  }
                  _Dst = (void *)FUN_14001cc68(lVar7,0x10);
                  if ((_Src == (void *)0x0) || (_Dst == (void *)0x0)) {
                    *(void **)(puVar3 + 2) = _Dst;
                    _Src = _Dst;
                    if (_Dst == (void *)0x0) {
                      *(undefined1 *)((longlong)puVar3 + 0x19) = 1;
                      goto LAB_1456b0d76;
                    }
                  }
                  else {
                    memcpy(_Dst,_Src,(longlong)(int)puVar3[5] << 3);
                    FUN_1400020a8(_Src);
                    *(void **)(puVar3 + 2) = _Dst;
                    _Src = _Dst;
                  }
                }
                else {
                  uVar20 = puVar3[4];
                  if ((int)uVar20 <= (int)puVar3[5]) goto LAB_1456b154f;
                }
                uVar20 = puVar3[5];
                puVar3[5] = uVar20 + 1;
                *(longlong *)((longlong)_Src + (longlong)(int)uVar20 * 8) = lVar23;
              }
            }
          }
        }
        else {
          if (*(int *)(lVar7 + 0x1a4) == 0) {
            iVar21 = *(int *)(lVar7 + 0x178);
            *(int *)(lVar7 + 0x178) = iVar21 + 1;
            if (*(int *)(lVar7 + 0x17c) == iVar21) {
              FUN_1446efaca((longlong *)(lVar7 + 0x170),iVar21);
            }
            iVar9 = *(int *)(lVar7 + 0x198);
            if (iVar9 == 0) {
              iVar11 = -1;
            }
            else {
              iVar11 = iVar9 + 0x1e;
              if (-1 < iVar9 + -1) {
                iVar11 = iVar9 + -1;
              }
              iVar11 = iVar11 >> 5;
            }
            lVar23 = lVar7 + 0x180;
            iVar10 = iVar9 + 1;
            iVar12 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar12 = iVar9;
            }
            if (iVar12 >> 5 == iVar11) {
              *(int *)(lVar7 + 0x198) = iVar10;
            }
            else {
              if (*(int *)(lVar7 + 0x19c) <= iVar9) {
                if (iVar9 + 0x20U < 0xa0) {
                  iVar10 = 0x80;
                  iVar11 = iVar9;
                }
                else {
                  uVar20 = iVar9 + 0x20U >> 5;
                  if (*(int *)(lVar7 + 0x19c) + 0x1fU < 0xa0) {
                    uVar17 = 4;
                    if (4 < uVar20) {
                      uVar17 = uVar20;
                    }
                  }
                  else {
                    uVar17 = (uVar20 * 3 >> 3) + uVar20 + 0x10;
                  }
                  uVar6 = FUN_144a3809e(uVar17 << 2,0);
                  iVar11 = (int)(uVar6 >> 2);
                  iVar10 = -0x20;
                  if ((int)uVar20 <= iVar11) {
                    iVar10 = iVar11 << 5;
                  }
                  iVar11 = *(int *)(lVar7 + 0x198);
                }
                *(int *)(lVar7 + 0x19c) = iVar10;
                FUN_1446efbd8(lVar23,iVar11);
                iVar10 = *(int *)(lVar7 + 0x198) + 1;
              }
              iVar11 = iVar10 + 0x1f;
              if (-1 < iVar10) {
                iVar11 = iVar10;
              }
              *(int *)(lVar7 + 0x198) = iVar10;
              if (iVar10 % 0x20 != 0) {
                lVar5 = *(longlong *)(lVar7 + 400);
                if (*(longlong *)(lVar7 + 400) == 0) {
                  lVar5 = lVar23;
                }
                bVar8 = -(char)(iVar10 % 0x20);
                *(uint *)(lVar5 + (longlong)(iVar11 >> 5) * 4) =
                     (uint)(*(int *)(lVar5 + (longlong)(iVar11 >> 5) * 4) << (bVar8 & 0x1f)) >>
                     (bVar8 & 0x1f);
              }
            }
            lVar5 = (longlong)iVar21;
            if (*(longlong *)(lVar7 + 400) != 0) {
              lVar23 = *(longlong *)(lVar7 + 400);
            }
            bVar8 = (byte)iVar9 & 0x1f;
            puVar3 = (uint *)(lVar23 + (longlong)(iVar12 >> 5) * 4);
            *puVar3 = *puVar3 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
          }
          else {
            iVar21 = *(int *)(lVar7 + 0x1a0);
            lVar5 = (longlong)iVar21;
            iVar9 = *(int *)(*(longlong *)(lVar7 + 0x170) + 4 + lVar5 * 0x10);
            *(int *)(lVar7 + 0x1a0) = iVar9;
            iVar11 = *(int *)(lVar7 + 0x1a4) + -1;
            *(int *)(lVar7 + 0x1a4) = iVar11;
            if (iVar11 != 0) {
              *(undefined4 *)(*(longlong *)(lVar7 + 0x170) + (longlong)iVar9 * 0x10) = 0xffffffff;
            }
          }
          puVar3 = (uint *)(lVar7 + 0x180);
          local_6c = 1;
          uVar20 = 1 << ((byte)iVar21 & 0x1f);
          puVar13 = *(uint **)(lVar7 + 400);
          if (*(uint **)(lVar7 + 400) == (uint *)0x0) {
            puVar13 = puVar3;
          }
          iVar9 = iVar21 + 0x1f;
          if (-1 < iVar21) {
            iVar9 = iVar21;
          }
          puVar13[iVar9 >> 5] = puVar13[iVar9 >> 5] | uVar20;
          lVar23 = *(longlong *)(lVar7 + 0x170);
          lVar5 = lVar5 * 0x10;
          *(ulonglong *)(lVar23 + lVar5) = param_2;
          *(undefined4 *)(lVar23 + 8 + lVar5) = 0xffffffff;
          uVar17 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          uVar17 = uVar17 >> 0x10 ^ uVar17;
          uVar18 = *(int *)(lVar7 + 0x178) - *(int *)(lVar7 + 0x1a4);
          if ((uVar18 != 0) && (uVar18 != 1)) {
            lVar16 = lVar7 + 0x1a8;
            if (*(longlong *)(lVar7 + 0x1b0) != 0) {
              lVar16 = *(longlong *)(lVar7 + 0x1b0);
            }
            iVar11 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar7 + 0x1b8) - 1U & uVar17) * 4);
            if (iVar11 != -1) {
              lVar16 = *(longlong *)(lVar7 + 0x170);
              do {
                puVar1 = (ulonglong *)(lVar16 + (longlong)iVar11 * 0x10);
                if (*(ulonglong *)(lVar16 + (longlong)iVar11 * 0x10) == param_2) {
                  *puVar1 = param_2;
                  lVar23 = *(longlong *)(lVar7 + 0x170);
                  if (*(int *)(lVar7 + 0x1a4) != 0) {
                    *(int *)(lVar23 + (longlong)*(int *)(lVar7 + 0x1a0) * 0x10) = iVar21;
                  }
                  *(undefined4 *)(lVar23 + (longlong)iVar21 * 0x10) = 0xffffffff;
                  uVar2 = 0xffffffff;
                  if (0 < *(int *)(lVar7 + 0x1a4)) {
                    uVar2 = *(undefined4 *)(lVar7 + 0x1a0);
                  }
                  *(undefined4 *)(lVar23 + (longlong)iVar21 * 0x10 + 4) = uVar2;
                  *(int *)(lVar7 + 0x1a0) = iVar21;
                  *(int *)(lVar7 + 0x1a4) = *(int *)(lVar7 + 0x1a4) + 1;
                  if (*(uint **)(lVar7 + 400) != (uint *)0x0) {
                    puVar3 = *(uint **)(lVar7 + 400);
                  }
                  puVar3[iVar9 >> 5] = puVar3[iVar9 >> 5] & ~uVar20;
                  goto LAB_1456b0d76;
                }
                iVar11 = (int)puVar1[1];
              } while (iVar11 != -1);
            }
          }
          if (3 < uVar18) {
            uVar6 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
            lVar16 = 0x3f;
            if (uVar6 != 0) {
              for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_6c = 1 << ((byte)lVar16 & 0x1f);
          }
          if (((int)uVar18 < 1) || ((int)local_6c <= *(int *)(lVar7 + 0x1b8))) {
            uVar17 = *(int *)(lVar7 + 0x1b8) - 1U & uVar17;
            *(uint *)(lVar23 + lVar5 + 0xc) = uVar17;
            lVar16 = *(longlong *)(lVar7 + 0x1b0);
            if (*(longlong *)(lVar7 + 0x1b0) == 0) {
              lVar16 = lVar7 + 0x1a8;
            }
            *(undefined4 *)(lVar23 + lVar5 + 8) =
                 *(undefined4 *)
                  (lVar16 + ((longlong)*(int *)(lVar7 + 0x1b8) - 1U & (longlong)(int)uVar17) * 4);
            lVar23 = *(longlong *)(lVar7 + 0x1b0);
            if (*(longlong *)(lVar7 + 0x1b0) == 0) {
              lVar23 = lVar7 + 0x1a8;
            }
            *(int *)(lVar23 + ((longlong)*(int *)(lVar7 + 0x1b8) - 1U & (longlong)(int)uVar17) * 4)
                 = iVar21;
            goto LAB_1456b0d76;
          }
          *(uint *)(lVar7 + 0x1b8) = local_6c;
          plVar4 = (longlong *)(lVar7 + 0x1b0);
          if (*(longlong *)(lVar7 + 0x1b0) != 0) {
            FUN_1446efa72(plVar4,0,0,4);
            local_6c = *(uint *)(lVar7 + 0x1b8);
            if (local_6c == 0) goto LAB_1456b0d76;
          }
          lVar23 = lVar7 + 0x1a8;
          if (local_6c == 1) {
            if (*plVar4 != 0) {
              FUN_1446efa72(plVar4,0,0,4);
            }
LAB_1456b0f75:
            uVar20 = 0;
            do {
              lVar5 = *(longlong *)(lVar7 + 0x1b0);
              if (*(longlong *)(lVar7 + 0x1b0) == 0) {
                lVar5 = lVar23;
              }
              *(undefined4 *)
               (lVar5 + (ulonglong)(*(int *)(lVar7 + 0x1b8) + 0x7fffffffU & uVar20) * 4) =
                   0xffffffff;
              uVar20 = uVar20 + 1;
            } while (local_6c != uVar20);
          }
          else {
            FUN_1446efa72(plVar4,0,local_6c,4);
            if (0 < (int)local_6c) goto LAB_1456b0f75;
          }
          iVar21 = *(int *)(lVar7 + 0x198);
          if (iVar21 == 0) {
            uVar6 = 0;
            uVar14 = 1;
            iVar11 = 0;
            iVar9 = 0;
          }
          else {
            puVar13 = *(uint **)(lVar7 + 400);
            if (*(uint **)(lVar7 + 400) == (uint *)0x0) {
              puVar13 = puVar3;
            }
            uVar20 = *puVar13;
            if (uVar20 == 0) {
              iVar9 = iVar21 + 0x1e;
              if (-1 < iVar21 + -1) {
                iVar9 = iVar21 + -1;
              }
              uVar6 = 0;
              uVar14 = (ulonglong)(uint)(iVar9 >> 5);
              if (iVar9 >> 5 < 1) {
                uVar14 = uVar6;
              }
              iVar9 = 0;
              do {
                if (uVar14 == uVar6) goto LAB_1456b0d76;
                iVar9 = iVar9 + 0x20;
                uVar20 = puVar13[uVar6 + 1];
                uVar6 = uVar6 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar6 = 0;
              iVar9 = 0;
            }
            uVar14 = (ulonglong)(-uVar20 & uVar20);
            uVar22 = uVar14 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar11 = (iVar9 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar21 <= iVar11) {
              iVar11 = iVar21;
            }
          }
          if (iVar11 < iVar21) {
            local_6c = 0xffffffff;
            do {
              lVar5 = *(longlong *)(lVar7 + 0x170);
              lVar19 = (longlong)iVar11 * 0x10;
              uVar20 = ((uint)(*(ulonglong *)(lVar5 + lVar19) >> 0x14) & 0xffff ^
                       (uint)(*(ulonglong *)(lVar5 + lVar19) >> 4)) * -0x7a143595;
              uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
              uVar22 = (longlong)(int)(uVar20 >> 0x10 ^ uVar20) &
                       (longlong)*(int *)(lVar7 + 0x1b8) - 1U;
              iVar21 = (int)uVar22;
              *(int *)(lVar5 + 0xc + lVar19) = iVar21;
              lVar16 = *(longlong *)(lVar7 + 0x1b0);
              if (*(longlong *)(lVar7 + 0x1b0) == 0) {
                lVar16 = lVar23;
              }
              *(undefined4 *)(lVar5 + 8 + lVar19) =
                   *(undefined4 *)(lVar16 + ((longlong)*(int *)(lVar7 + 0x1b8) - 1U & uVar22) * 4);
              lVar5 = *(longlong *)(lVar7 + 0x1b0);
              if (*(longlong *)(lVar7 + 0x1b0) == 0) {
                lVar5 = lVar23;
              }
              *(int *)(lVar5 + ((longlong)iVar21 & (longlong)*(int *)(lVar7 + 0x1b8) - 1U) * 4) =
                   iVar11;
              local_6c = ~(uint)uVar14 & local_6c;
              puVar13 = *(uint **)(lVar7 + 400);
              if (*(uint **)(lVar7 + 400) == (uint *)0x0) {
                puVar13 = puVar3;
              }
              iVar21 = *(int *)(lVar7 + 0x198);
              iVar11 = (int)uVar6;
              lVar5 = (longlong)iVar11;
              uVar20 = puVar13[lVar5] & local_6c;
              if (uVar20 == 0) {
                iVar12 = iVar21 + 0x1e;
                if (-1 < iVar21 + -1) {
                  iVar12 = iVar21 + -1;
                }
                iVar12 = iVar12 >> 5;
                iVar10 = iVar12;
                if (iVar12 < iVar11) {
                  iVar10 = iVar11;
                }
                if (iVar12 <= iVar11) break;
                lVar16 = 0;
                while( true ) {
                  iVar9 = iVar9 + 0x20;
                  uVar20 = puVar13[lVar5 + lVar16 + 1];
                  if (uVar20 != 0) break;
                  lVar16 = lVar16 + 1;
                  if (iVar10 - lVar5 == lVar16) goto LAB_1456b0d76;
                }
                uVar6 = (ulonglong)(iVar11 + (int)lVar16 + 1);
                local_6c = 0xffffffff;
              }
              uVar14 = (ulonglong)(-uVar20 & uVar20);
              uVar22 = uVar14 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              iVar11 = (iVar9 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            } while (iVar11 < iVar21);
          }
        }
LAB_1456b0d76:
        if ((DAT_14c760b78 == 0) && ((int)param_1[0x32] != 0)) {
          lVar7 = param_1[0x33];
          if (lVar7 == 0) {
            (**(code **)(*param_1 + 8))(param_1);
            lVar7 = param_1[0x33];
          }
          FUN_144ad5b2c(param_1 + 0x31,lVar7,param_1 + 7);
        }
      }
      if ((*(byte *)(param_2 + 0xdf) & 1) != 0) {
        if (param_3 == (uint *)0x0) {
          lVar7 = param_1[0x33];
          if (lVar7 == 0) {
            (**(code **)(*param_1 + 8))(param_1);
            lVar7 = param_1[0x33];
          }
          param_3 = (uint *)FUN_1456b17c6(lVar7,param_2);
        }
        FUN_14471e850(param_3,param_4,uVar24);
        *(byte *)((longlong)param_3 + 7) = *(byte *)((longlong)param_3 + 7) | 0x80;
      }
      goto LAB_1456b0c27;
    }
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x28);
    if ((lVar7 != 0) && (((uVar20 | param_5) & 8) != 0)) {
      if ((param_5 & 8) == 0) {
        if ((uVar20 & 8) == 0) {
          lVar7 = *(longlong *)(param_2 + 0x20);
        }
        FUN_144703b84(param_1,lVar7);
        uVar20 = param_3[1] & 0x7fffffff;
        if (uVar20 != 0x7fffffff) goto LAB_1456b0be7;
        FUN_14736cbc2(param_1,param_2,param_5,param_4,param_3);
      }
      else {
        plVar4 = (longlong *)(param_2 + 0x28);
        if ((uVar20 & 8) == 0) {
          plVar4 = (longlong *)(param_2 + 0x20);
        }
        FUN_144703b84(param_1,*plVar4,lVar7);
        param_3[1] = param_3[1] & 0x80000000 | uVar20 & 0x7fffffff;
      }
LAB_1456b0ca9:
      uVar15 = 0;
      goto LAB_1456b0c27;
    }
LAB_1456b0be7:
    if ((param_5 != 0x20) || (uVar20 != 0x10)) {
      if (param_5 != 0) goto LAB_1456b0c00;
      uVar24 = 0;
      goto LAB_1456b0cd9;
    }
    uVar20 = (uint)(DAT_14ca76990 == 0) * 0x10 + 0x10;
  }
  FUN_14471e850(param_3,param_4,uVar20);
LAB_1456b0c27:
  return uVar15 & 0xffffffff;
}



// FUNCTION 1456b17c6 FUN_1456b17c6 body=1823 status=ok
// SIG undefined FUN_1456b17c6(void)

longlong FUN_1456b17c6(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  byte bVar22;
  int iVar23;
  uint *puVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  
  plVar1 = (longlong *)(param_1 + 0xa8);
  uVar18 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  uVar18 = uVar18 >> 0x10 ^ uVar18;
  iVar29 = *(int *)(param_1 + 0xb0);
  iVar34 = *(int *)(param_1 + 0xdc);
  if (iVar29 != iVar34) {
    lVar21 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar21 = *(longlong *)(param_1 + 0xe8);
    }
    iVar19 = *(int *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar18) * 4);
    if (iVar19 != -1) {
      do {
        lVar21 = *plVar1 + (longlong)iVar19 * 0x38;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar19 * 0x38) == param_2) {
          if (lVar21 != 0) goto LAB_1456b1871;
          break;
        }
        iVar19 = *(int *)(lVar21 + 0x30);
      } while (iVar19 != -1);
    }
  }
  if (iVar34 == 0) {
    *(int *)(param_1 + 0xb0) = iVar29 + 1;
    if (*(int *)(param_1 + 0xb4) == iVar29) {
      FUN_1447030e2(plVar1,iVar29);
    }
    iVar34 = *(int *)(param_1 + 0xd0);
    if (iVar34 == 0) {
      iVar19 = -1;
    }
    else {
      iVar19 = iVar34 + 0x1e;
      if (-1 < iVar34 + -1) {
        iVar19 = iVar34 + -1;
      }
      iVar19 = iVar19 >> 5;
    }
    lVar33 = param_1 + 0xb8;
    iVar23 = iVar34 + 1;
    iVar26 = iVar34 + 0x1f;
    if (-1 < iVar34) {
      iVar26 = iVar34;
    }
    if (iVar26 >> 5 == iVar19) {
      *(int *)(param_1 + 0xd0) = iVar23;
    }
    else {
      if (*(int *)(param_1 + 0xd4) <= iVar34) {
        if (iVar34 + 0x20U < 0xa0) {
          iVar23 = 0x80;
          iVar19 = iVar34;
        }
        else {
          uVar30 = iVar34 + 0x20U >> 5;
          if (*(int *)(param_1 + 0xd4) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar30) {
              uVar20 = uVar30;
            }
          }
          else {
            uVar20 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
          }
          uVar25 = FUN_144a3809e(uVar20 << 2,0);
          iVar19 = (int)(uVar25 >> 2);
          iVar23 = -0x20;
          if ((int)uVar30 <= iVar19) {
            iVar23 = iVar19 << 5;
          }
          iVar19 = *(int *)(param_1 + 0xd0);
        }
        *(int *)(param_1 + 0xd4) = iVar23;
        FUN_1446efbd8(lVar33,iVar19);
        iVar23 = *(int *)(param_1 + 0xd0) + 1;
      }
      iVar19 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar19 = iVar23;
      }
      *(int *)(param_1 + 0xd0) = iVar23;
      if (iVar23 % 0x20 != 0) {
        lVar21 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(param_1 + 200) == 0) {
          lVar21 = lVar33;
        }
        bVar22 = -(char)(iVar23 % 0x20);
        *(uint *)(lVar21 + (longlong)(iVar19 >> 5) * 4) =
             (uint)(*(int *)(lVar21 + (longlong)(iVar19 >> 5) * 4) << (bVar22 & 0x1f)) >>
             (bVar22 & 0x1f);
      }
    }
    lVar21 = (longlong)iVar29;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar33 = *(longlong *)(param_1 + 200);
    }
    bVar22 = (byte)iVar34 & 0x1f;
    puVar3 = (uint *)(lVar33 + (longlong)(iVar26 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
  }
  else {
    iVar29 = *(int *)(param_1 + 0xd8);
    lVar21 = (longlong)iVar29;
    iVar19 = *(int *)(*(longlong *)(param_1 + 0xa8) + 4 + lVar21 * 0x38);
    *(int *)(param_1 + 0xd8) = iVar19;
    *(int *)(param_1 + 0xdc) = iVar34 + -1;
    if (iVar34 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar19 * 0x38) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 0xb8);
  uVar30 = 1;
  puVar24 = *(uint **)(param_1 + 200);
  if (*(uint **)(param_1 + 200) == (uint *)0x0) {
    puVar24 = puVar3;
  }
  iVar34 = iVar29 + 0x1f;
  if (-1 < iVar29) {
    iVar34 = iVar29;
  }
  puVar24[iVar34 >> 5] = puVar24[iVar34 >> 5] | 1 << ((byte)iVar29 & 0x1f);
  lVar33 = *(longlong *)(param_1 + 0xa8);
  lVar21 = lVar21 * 0x38;
  puVar4 = (undefined4 *)(lVar33 + lVar21);
  *(ulonglong *)(lVar33 + lVar21) = param_2;
  puVar6 = (undefined8 *)(lVar33 + 8 + lVar21);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6 = (undefined8 *)(lVar33 + 0x18 + lVar21);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(lVar33 + 0x28 + lVar21) = 0;
  *(undefined8 *)(lVar33 + 0x2c + lVar21) = 0xffffffff00000004;
  uVar20 = *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc);
  if ((uVar20 != 0) && (uVar20 != 1)) {
    lVar21 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar21 = *(longlong *)(param_1 + 0xe8);
    }
    iVar34 = *(int *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar18) * 4);
    if (iVar34 != -1) {
      do {
        puVar5 = (undefined4 *)(*plVar1 + (longlong)iVar34 * 0x38);
        if (*(ulonglong *)(*plVar1 + (longlong)iVar34 * 0x38) == param_2) {
          if (*(longlong *)(puVar5 + 8) != 0) {
            FUN_1400020a8();
          }
          uVar7 = *puVar4;
          uVar8 = puVar4[1];
          uVar9 = puVar4[2];
          uVar10 = puVar4[3];
          uVar11 = puVar4[4];
          uVar12 = puVar4[5];
          uVar13 = puVar4[6];
          uVar14 = puVar4[7];
          uVar15 = puVar4[9];
          uVar16 = puVar4[10];
          uVar17 = puVar4[0xb];
          puVar5[8] = puVar4[8];
          puVar5[9] = uVar15;
          puVar5[10] = uVar16;
          puVar5[0xb] = uVar17;
          puVar5[4] = uVar11;
          puVar5[5] = uVar12;
          puVar5[6] = uVar13;
          puVar5[7] = uVar14;
          *puVar5 = uVar7;
          puVar5[1] = uVar8;
          puVar5[2] = uVar9;
          puVar5[3] = uVar10;
          FUN_1473703f0(plVar1,iVar29);
          goto LAB_1456b1a7a;
        }
        iVar34 = puVar5[0xc];
      } while (iVar34 != -1);
    }
  }
  if (3 < uVar20) {
    uVar25 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar21 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar30 = 1 << ((byte)lVar21 & 0x1f);
  }
  if (((int)uVar20 < 1) || ((int)uVar30 <= *(int *)(param_1 + 0xf0))) {
    uVar18 = *(int *)(param_1 + 0xf0) - 1U & uVar18;
    puVar4[0xd] = uVar18;
    lVar21 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar21 = param_1 + 0xe0;
    }
    puVar4[0xc] = *(undefined4 *)
                   (lVar21 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)(int)uVar18) * 4);
    lVar21 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar21 = param_1 + 0xe0;
    }
    *(int *)(lVar21 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)(int)uVar18) * 4) =
         iVar29;
    goto LAB_1456b1a7a;
  }
  *(uint *)(param_1 + 0xf0) = uVar30;
  plVar2 = (longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1446efa72(plVar2,0,0,4);
    uVar30 = *(uint *)(param_1 + 0xf0);
    if (uVar30 == 0) goto LAB_1456b1a7a;
  }
  lVar21 = param_1 + 0xe0;
  if (uVar30 == 1) {
    if (*plVar2 != 0) {
      FUN_1446efa72(plVar2,0,0,4);
    }
LAB_1456b1b34:
    uVar18 = 0;
    do {
      lVar33 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar33 = lVar21;
      }
      *(undefined4 *)(lVar33 + (ulonglong)(*(int *)(param_1 + 0xf0) + 0x7fffffffU & uVar18) * 4) =
           0xffffffff;
      uVar18 = uVar18 + 1;
    } while (uVar30 != uVar18);
  }
  else {
    FUN_1446efa72(plVar2,0,uVar30,4);
    if (0 < (int)uVar30) goto LAB_1456b1b34;
  }
  iVar34 = *(int *)(param_1 + 0xd0);
  if (iVar34 == 0) {
    uVar25 = 0;
    uVar28 = 1;
    iVar19 = 0;
    iVar23 = 0;
  }
  else {
    puVar24 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar24 = puVar3;
    }
    uVar18 = *puVar24;
    if (uVar18 == 0) {
      iVar19 = iVar34 + 0x1e;
      if (-1 < iVar34 + -1) {
        iVar19 = iVar34 + -1;
      }
      uVar25 = 0;
      uVar28 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar28 = uVar25;
      }
      iVar23 = 0;
      do {
        if (uVar28 == uVar25) goto LAB_1456b1a7a;
        iVar23 = iVar23 + 0x20;
        uVar18 = puVar24[uVar25 + 1];
        uVar25 = uVar25 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar25 = 0;
      iVar23 = 0;
    }
    uVar28 = (ulonglong)(-uVar18 & uVar18);
    uVar35 = uVar28 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    iVar19 = (iVar23 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
    if (iVar34 <= iVar19) {
      iVar19 = iVar34;
    }
  }
  if (iVar19 < iVar34) {
    uVar18 = 0xffffffff;
    do {
      lVar33 = *(longlong *)(param_1 + 0xa8);
      lVar32 = (longlong)iVar19 * 0x38;
      uVar30 = ((uint)(*(ulonglong *)(lVar33 + lVar32) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar33 + lVar32) >> 4)) * -0x7a143595;
      uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
      uVar35 = (longlong)(int)(uVar30 >> 0x10 ^ uVar30) & (longlong)*(int *)(param_1 + 0xf0) - 1U;
      iVar34 = (int)uVar35;
      *(int *)(lVar33 + 0x34 + lVar32) = iVar34;
      lVar31 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar31 = lVar21;
      }
      *(undefined4 *)(lVar33 + 0x30 + lVar32) =
           *(undefined4 *)(lVar31 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & uVar35) * 4);
      lVar33 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar33 = lVar21;
      }
      *(int *)(lVar33 + ((longlong)iVar34 & (longlong)*(int *)(param_1 + 0xf0) - 1U) * 4) = iVar19;
      uVar18 = ~(uint)uVar28 & uVar18;
      puVar24 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar24 = puVar3;
      }
      iVar34 = *(int *)(param_1 + 0xd0);
      iVar19 = (int)uVar25;
      lVar33 = (longlong)iVar19;
      uVar30 = puVar24[lVar33] & uVar18;
      if (uVar30 == 0) {
        iVar26 = iVar34 + 0x1e;
        if (-1 < iVar34 + -1) {
          iVar26 = iVar34 + -1;
        }
        iVar26 = iVar26 >> 5;
        iVar27 = iVar26;
        if (iVar26 < iVar19) {
          iVar27 = iVar19;
        }
        if (iVar26 <= iVar19) break;
        lVar31 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar30 = puVar24[lVar33 + lVar31 + 1];
          if (uVar30 != 0) break;
          lVar31 = lVar31 + 1;
          if (iVar27 - lVar33 == lVar31) goto LAB_1456b1a7a;
        }
        uVar25 = (ulonglong)(iVar19 + (int)lVar31 + 1);
        uVar18 = 0xffffffff;
      }
      uVar28 = (ulonglong)(-uVar30 & uVar30);
      uVar35 = uVar28 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      iVar19 = (iVar23 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar34);
  }
LAB_1456b1a7a:
  lVar21 = *plVar1 + (longlong)iVar29 * 0x38;
LAB_1456b1871:
  if (*(int *)(lVar21 + 0x28) < 1) {
    FUN_14471e8ca(lVar21 + 8,*(undefined2 *)(param_2 + 0xdc));
  }
  return lVar21 + 8;
}



// FUNCTION 1456b1ee6 FUN_1456b1ee6 body=188 status=ok
// SIG undefined FUN_1456b1ee6(void)

void FUN_1456b1ee6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_2 + 0x5c);
  if (uVar1 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar4 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x38 + (ulonglong)uVar4 * 8) + 0x88);
  lVar6 = param_2[0x33];
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
    lVar6 = param_2[0x33];
  }
  FUN_1447093fc(lVar6,uVar2);
  lVar6 = (longlong)*(int *)(param_1 + 0x110 + (ulonglong)(uVar4 << 4));
  if (lVar6 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x108 + (ulonglong)(uVar4 << 4));
    lVar7 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar3 + lVar7);
      lVar5 = param_2[0x33];
      if (lVar5 == 0) {
        (**(code **)(*param_2 + 8))(param_2);
        lVar5 = param_2[0x33];
      }
      FUN_1447093fc(lVar5,uVar2);
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
  }
  return;
}



// FUNCTION 1456b1fa2 FUN_1456b1fa2 body=142 status=ok
// SIG undefined FUN_1456b1fa2(void)

void FUN_1456b1fa2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_1468741aa(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456b2032 FUN_1456b2032 body=234 status=ok
// SIG undefined FUN_1456b2032(void)

undefined8 * FUN_1456b2032(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 10));
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x400;
  FUN_140028a14(param_1 + 0x15,0x400);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x22),4000);
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 1456b211c FUN_1456b211c body=108 status=ok
// SIG undefined FUN_1456b211c(void)

void FUN_1456b211c(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (3 < param_2) {
    uVar1 = (param_2 | 1) + 0xe;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = 1 << ((byte)iVar2 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar2 && 0 < (int)param_2 || iVar2 < *(int *)(param_1 + 0x48)) {
    FUN_1456b2188(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar2;
    FUN_140028bde(param_1);
    return;
  }
  FUN_14687439e(param_1);
  FUN_1456b2188(param_1,param_2);
  return;
}



// FUNCTION 1456b2188 FUN_1456b2188 body=117 status=ok
// SIG undefined FUN_1456b2188(void)

void FUN_1456b2188(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1456b21fe FUN_1456b21fe body=269 status=ok
// SIG undefined FUN_1456b21fe(void)

undefined8 *
FUN_1456b21fe(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1[0xd];
  if ((lVar3 == 0) || (uVar2 = *(uint *)(lVar3 + 4), *(uint *)(param_1[0xc] + 0x20) <= uVar2)) {
    FUN_140059560(*param_1,&local_38,*(undefined4 *)(param_1 + 1),
                  *(undefined4 *)((longlong)param_1 + 0xc));
    if (local_38 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      goto LAB_1456b2250;
    }
    param_1[0xc] = local_38;
    uVar2 = ((uint)(local_38 >> 0x14) & 0xffff ^ (uint)(local_38 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar4 = FUN_14005975a(param_1 + 2,uVar2 >> 0x10 ^ uVar2,&local_38);
    param_1[0xd] = uVar4;
    if (local_38 != 0) {
      LOCK();
      piVar1 = (int *)(local_38 + 0x478);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_1402cd3ea(*(undefined8 *)(local_38 + 0x10));
      }
    }
    lVar3 = param_1[0xd];
    uVar2 = *(uint *)(lVar3 + 4);
  }
  *(uint *)(lVar3 + 4) = uVar2 + 1;
  *param_2 = param_1[0xc];
  *(uint *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = param_3;
  param_2[2] = param_4;
LAB_1456b2250:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456b230c FUN_1456b230c body=123 status=ok
// SIG undefined FUN_1456b230c(void)

longlong FUN_1456b230c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1d8);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar5 = FUN_140594892();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (cVar4 = FUN_144709e00(*param_2,*(undefined8 *)(lVar3 + 0x28)), cVar4 != '\0')) {
          return lVar3;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 1456b2388 FUN_1456b2388 body=181 status=ok
// SIG undefined FUN_1456b2388(void)

ulonglong FUN_1456b2388(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  bool bVar6;
  
  LOCK();
  bVar6 = *(int *)((longlong)param_1 + 0xc) == 0;
  if (bVar6) {
    *(int *)((longlong)param_1 + 0xc) = -0x7fffffff;
  }
  UNLOCK();
  if (bVar6) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    FUN_144a9f40e(param_1);
    uVar5 = FUN_144aff3bb(param_1);
    DVar4 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 4) = DVar4;
    if (param_1[2] != 0) {
      FUN_144a7b5b0(param_1);
    }
    (**(code **)(*param_1 + 8))(param_1);
    if (param_1[2] != 0) {
      FUN_144aff376(param_1);
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    FUN_144aff3bb(uVar5);
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == -0x7fffffff) {
      FUN_14474421e(param_1);
      LOCK();
      plVar2 = param_1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (param_1 != (longlong *)0x0 && (int)*plVar2 == 0) {
        (**(code **)*param_1)(param_1,1);
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6) & 0xffffffff;
}



// FUNCTION 1456b243e FUN_1456b243e body=122 status=ok
// SIG undefined FUN_1456b243e(void)

void FUN_1456b243e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x60 + lVar1);
  FUN_144909e75(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x60),(longlong)iVar3 * 0x60);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1456b24b8 FUN_1456b24b8 body=296 status=ok
// SIG undefined FUN_1456b24b8(void)

ulonglong FUN_1456b24b8(uint *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = param_1[0x122];
  lVar5 = (longlong)(int)uVar3;
  if (lVar5 == 0) {
    uVar2 = (ulonglong)((*param_1 & 0xf) << 6);
    uVar8 = *(ulonglong *)((longlong)param_1 + uVar2 + 0x80);
    if (uVar8 < 2) {
      uVar2 = 0;
    }
    else {
      puVar6 = (ulonglong *)((longlong)param_1 + uVar2 + 0x80);
      LOCK();
      bVar9 = uVar8 == *puVar6;
      if (bVar9) {
        *puVar6 = 0;
      }
      UNLOCK();
      uVar2 = 0;
      if (bVar9) {
        *param_1 = *param_1 - 1;
        uVar2 = uVar8;
      }
    }
  }
  else {
    puVar1 = param_1 + 0x120;
    uVar2 = *(ulonglong *)(*(longlong *)puVar1 + -8 + lVar5 * 8);
    uVar8 = lVar5 - 1;
    if ((int)uVar3 < 2) {
LAB_1456b2580:
      uVar7 = (uint)uVar8;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar8 & 0xffffffff);
      }
    }
    else {
      uVar3 = *param_1;
      uVar8 = uVar8 & 0xffffffff;
      do {
        uVar4 = (ulonglong)((uVar3 + 1 & 0xf) << 6);
        if (*(longlong *)((longlong)param_1 + uVar4 + 0x80) != 0) {
          uVar3 = param_1[0x122];
          if ((int)uVar8 <= (int)uVar3) goto LAB_1456b2580;
          goto LAB_1456b259a;
        }
        *(undefined8 *)((longlong)param_1 + uVar4 + 0x80) =
             *(undefined8 *)(*(longlong *)puVar1 + -8 + uVar8 * 8);
        uVar3 = *param_1 + 1;
        *param_1 = uVar3;
        bVar9 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar9);
      uVar3 = param_1[0x122];
      uVar8 = 0;
      uVar7 = 0;
      if ((int)uVar3 < 0) {
LAB_1456b259a:
        param_1[0x122] = (uint)uVar8;
        uVar7 = (uint)uVar8 - uVar3;
        if (param_1[0x123] - uVar3 < uVar7) {
          FUN_14003198a(puVar1);
        }
        memset((void *)((longlong)(int)uVar3 * 8 + *(longlong *)puVar1),0,(longlong)(int)uVar7 << 3)
        ;
        return uVar2;
      }
    }
    if ((int)uVar7 < (int)uVar3) {
      param_1[0x122] = uVar7;
    }
  }
  return uVar2;
}



// FUNCTION 1456b25e2 FUN_1456b25e2 body=299 status=ok
// SIG undefined FUN_1456b25e2(void)

longlong FUN_1456b25e2(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar6 = 0xf;
  uVar8 = (longlong)(int)param_1;
  if (0xf < (int)param_1) {
    uVar6 = (ulonglong)param_1;
  }
  do {
    uVar7 = uVar8;
    if (uVar7 == uVar6) goto LAB_1456b264d;
    uVar8 = uVar7 + 1;
    while( true ) {
      uVar1 = (&DAT_14c94b480)[uVar8 * 0x130];
      uVar9 = (ulonglong)((uVar1 & 0xf) << 6);
      lVar2 = *(longlong *)((longlong)&DAT_14c94b4c0 + uVar9 + uVar8 * 0x4c0);
      if (lVar2 == 0) break;
      if (lVar2 != 1) {
        plVar5 = (longlong *)((longlong)&DAT_14c94b4c0 + uVar9 + uVar8 * 0x4c0);
        LOCK();
        lVar3 = *plVar5;
        bVar10 = lVar2 == lVar3;
        if (bVar10) {
          *plVar5 = 1;
          lVar3 = lVar2;
        }
        UNLOCK();
        if (bVar10) {
          if (uVar1 == (&DAT_14c94b480)[uVar8 * 0x130]) {
            LOCK();
            (&DAT_14c94b480)[uVar8 * 0x130] = (&DAT_14c94b480)[uVar8 * 0x130] + 1;
            UNLOCK();
            *plVar5 = 0;
            goto LAB_1456b2642;
          }
          *plVar5 = lVar3;
        }
      }
    }
    lVar3 = 0;
LAB_1456b2642:
  } while (lVar3 == 0);
  if (0xe < (longlong)uVar7) {
LAB_1456b264d:
    if ((int)param_1 < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      uVar8 = 0;
      do {
        while( true ) {
          uVar1 = (&DAT_14c94b480)[uVar8 * 0x130];
          uVar6 = (ulonglong)((uVar1 & 0xf) << 6);
          lVar2 = *(longlong *)((longlong)&DAT_14c94b4c0 + uVar6 + uVar8 * 0x4c0);
          if (lVar2 == 0) break;
          if (lVar2 != 1) {
            plVar5 = (longlong *)((longlong)&DAT_14c94b4c0 + uVar6 + uVar8 * 0x4c0);
            LOCK();
            lVar4 = *plVar5;
            bVar10 = lVar2 == lVar4;
            if (bVar10) {
              *plVar5 = 1;
              lVar4 = lVar2;
            }
            UNLOCK();
            if (bVar10) {
              if (uVar1 == (&DAT_14c94b480)[uVar8 * 0x130]) {
                LOCK();
                (&DAT_14c94b480)[uVar8 * 0x130] = (&DAT_14c94b480)[uVar8 * 0x130] + 1;
                UNLOCK();
                *plVar5 = 0;
                if (lVar4 != 0) {
                  return lVar4;
                }
                break;
              }
              *plVar5 = lVar4;
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_1);
    }
  }
  return lVar3;
}



// FUNCTION 1456b270e FUN_1456b270e body=140 status=ok
// SIG undefined FUN_1456b270e(void)

void FUN_1456b270e(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c950058;
  if (param_1 <= (int)DAT_14c950058) {
    if (DAT_14c95005c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c950058) {
        uVar2 = DAT_14c950058;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c950058 + ((ulonglong)((longlong)(int)DAT_14c950058 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 7,0x40);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    DAT_14c95005c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c950050,param_1,uVar5,0x80,0x40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456b279a FUN_1456b279a body=807 status=ok
// SIG undefined FUN_1456b279a(void)

int FUN_1456b279a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar8 = (longlong)iVar2 * 0xe8;
        if ((((((*(longlong *)(lVar3 + lVar8) == *param_3) &&
               (lVar1 = lVar3 + lVar8, *(longlong *)(lVar1 + 8) == param_3[1])) &&
              (*(longlong *)(lVar1 + 0x10) == param_3[2])) &&
             ((*(longlong *)(lVar1 + 0x18) == param_3[3] &&
              (*(longlong *)(lVar1 + 0x20) == param_3[4])))) &&
            (*(longlong *)(lVar1 + 0x28) == param_3[5])) &&
           (((*(longlong *)(lVar1 + 0x30) == param_3[6] &&
             (*(longlong *)(lVar1 + 0x38) == param_3[7])) &&
            (*(longlong *)(lVar1 + 0x40) == param_3[8])))) {
          lVar7 = 0;
          bVar4 = true;
          do {
            bVar6 = bVar4;
            if (*(longlong *)(lVar1 + 0x48 + lVar7 * 8) != param_3[lVar7 + 9]) goto LAB_1456b2a9a;
            lVar7 = 1;
            bVar4 = false;
          } while (bVar6);
          if ((((*(int *)(lVar1 + 0x58) == (int)param_3[0xb]) &&
               (*(char *)(lVar1 + 0xc5) == *(char *)((longlong)param_3 + 0xc5))) &&
              (*(char *)(lVar1 + 0xc6) == *(char *)((longlong)param_3 + 0xc6))) &&
             (((*(char *)(lVar1 + 0xc9) == *(char *)((longlong)param_3 + 0xc9) &&
               (*(char *)(lVar1 + 200) == (char)param_3[0x19])) &&
              ((*(char *)(lVar1 + 199) == *(char *)((longlong)param_3 + 199) &&
               (*(int *)(lVar1 + 0x5c) == *(int *)((longlong)param_3 + 0x5c))))))) {
            lVar7 = 0;
            do {
              if (*(char *)(lVar1 + 0x60 + lVar7) != *(char *)((longlong)param_3 + lVar7 + 0x60))
              goto LAB_1456b2a9a;
              lVar7 = lVar7 + 1;
            } while (lVar7 != 8);
            lVar7 = 0;
            do {
              if (((*(uint *)(param_3 + lVar7 + 0xd) ^ *(uint *)(lVar1 + 0x68 + lVar7 * 8)) &
                  0x2000010) != 0) goto LAB_1456b2a9a;
              lVar7 = lVar7 + 1;
            } while (lVar7 != 8);
            if (((*(char *)(lVar1 + 0xa8) == (char)param_3[0x15]) &&
                (((*(uint *)(lVar1 + 0xb0) ^ (uint)param_3[0x16]) & 0x2000014) == 0)) &&
               ((((*(char *)(lVar1 + 0xb8) == (char)param_3[0x17] &&
                  (((*(char *)(lVar1 + 0xb9) == *(char *)((longlong)param_3 + 0xb9) &&
                    (*(char *)(lVar1 + 0xba) == *(char *)((longlong)param_3 + 0xba))) &&
                   (*(char *)(lVar1 + 0xbb) == *(char *)((longlong)param_3 + 0xbb))))) &&
                 (((*(int *)(lVar1 + 0xbc) == *(int *)((longlong)param_3 + 0xbc) &&
                   (*(short *)(lVar1 + 0xc0) == (short)param_3[0x18])) &&
                  (*(char *)(lVar1 + 0xc2) == *(char *)((longlong)param_3 + 0xc2))))) &&
                ((*(char *)(lVar1 + 0xc3) == *(char *)((longlong)param_3 + 0xc3) &&
                 (*(char *)(lVar1 + 0xc4) == *(char *)((longlong)param_3 + 0xc4))))))) {
              return iVar2;
            }
          }
        }
LAB_1456b2a9a:
        iVar2 = *(int *)(lVar3 + 0xe0 + lVar8);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1456b2ac2 FUN_1456b2ac2 body=132 status=ok
// SIG undefined FUN_1456b2ac2(void)

void FUN_1456b2ac2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456b2b48 FUN_1456b2b48 body=178 status=ok
// SIG undefined FUN_1456b2b48(void)

void FUN_1456b2b48(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1[0x33] != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  iVar3 = (int)param_1[0x36];
  if ((iVar3 == 0) || (1 < (int)param_1[0x38])) {
    FUN_14471562a(param_1);
    iVar3 = (int)param_1[0x36];
  }
  *(undefined4 *)(param_1 + 0x38) = 1;
  lVar2 = *(longlong *)(param_1[0x35] + (longlong)(iVar3 + -1) * 8);
  iVar3 = *(int *)(lVar2 + 0x1d0);
  *(uint *)(lVar2 + 0x1d0) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0x1d4) < iVar3 + 1U) {
    FUN_1456b2bfa((longlong *)(lVar2 + 0x1c8),iVar3);
  }
  lVar2 = *(longlong *)(lVar2 + 0x1c8);
  *(undefined8 *)(lVar2 + (longlong)iVar3 * 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar3 * 0x10) = param_3;
  return;
}



// FUNCTION 1456b2bfa FUN_1456b2bfa body=132 status=ok
// SIG undefined FUN_1456b2bfa(void)

void FUN_1456b2bfa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456b2ecc FUN_1456b2ecc body=41 status=ok
// SIG undefined FUN_1456b2ecc(void)

longlong FUN_1456b2ecc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x170);
  if (0 < lVar2) {
    lVar1 = *(longlong *)(param_1 + 0x168) + 8;
    do {
      if (*(longlong *)(lVar1 + -8) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 1456b2ef6 FUN_1456b2ef6 body=59 status=ok
// SIG undefined FUN_1456b2ef6(void)

ulonglong FUN_1456b2ef6(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte in_AL;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    param_1 = (longlong *)*puVar1;
    if ((param_1 == (longlong *)0x0) || (*(char *)((longlong)puVar1 + 0x1c) != '\x01')) {
      in_AL = 0;
    }
    else {
      in_AL = (**(code **)(*param_1 + 0x2c0))();
    }
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),(int)lVar2 != 0 & in_AL) & 0xffffffff;
}



// FUNCTION 1456b2f32 FUN_1456b2f32 body=38 status=ok
// SIG undefined FUN_1456b2f32(void)

undefined8 FUN_1456b2f32(undefined8 param_1,int param_2)

{
  FUN_140036a64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456b2f58 FUN_1456b2f58 body=53 status=ok
// SIG undefined FUN_1456b2f58(void)

void FUN_1456b2f58(longlong *param_1)

{
  FUN_1456b30ca();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b2f8e FUN_1456b2f8e body=55 status=ok
// SIG undefined FUN_1456b2f8e(void)

void FUN_1456b2f8e(longlong *param_1)

{
  FUN_140037bbc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b2fc6 FUN_1456b2fc6 body=82 status=ok
// SIG undefined FUN_1456b2fc6(void)

void FUN_1456b2fc6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_1456b36ee(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b3018(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456b3018 FUN_1456b3018 body=53 status=ok
// SIG undefined FUN_1456b3018(void)

void FUN_1456b3018(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b304e(param_1);
  return;
}



// FUNCTION 1456b304e FUN_1456b304e body=80 status=ok
// SIG undefined FUN_1456b304e(void)

void FUN_1456b304e(longlong *param_1)

{
  FUN_140037db8();
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140037edc(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b309e FUN_1456b309e body=43 status=ok
// SIG undefined FUN_1456b309e(void)

void FUN_1456b309e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1472d3330(param_1);
    param_1 = param_1 + 0x220;
  }
  return;
}



// FUNCTION 1456b30ca FUN_1456b30ca body=86 status=ok
// SIG undefined FUN_1456b30ca(void)

void FUN_1456b30ca(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456b3776(param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3120 FUN_1456b3120 body=96 status=ok
// SIG undefined FUN_1456b3120(void)

void FUN_1456b3120(longlong param_1)

{
  FUN_140037c76(param_1 + 0x1b0);
  FUN_1456b3180(param_1 + 0x128);
  FUN_14473400f(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  FUN_140037cc8(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3180 FUN_1456b3180 body=53 status=ok
// SIG undefined FUN_1456b3180(void)

void FUN_1456b3180(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b31b6(param_1);
  return;
}



// FUNCTION 1456b31b6 FUN_1456b31b6 body=80 status=ok
// SIG undefined FUN_1456b31b6(void)

void FUN_1456b31b6(longlong *param_1)

{
  FUN_1456b3ea0();
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140037c36(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3206 FUN_1456b3206 body=53 status=ok
// SIG undefined FUN_1456b3206(void)

void FUN_1456b3206(longlong *param_1)

{
  FUN_1456b3c08();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b323c FUN_1456b323c body=53 status=ok
// SIG undefined FUN_1456b323c(void)

void FUN_1456b323c(longlong *param_1)

{
  FUN_1456b4e88();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3272 FUN_1456b3272 body=53 status=ok
// SIG undefined FUN_1456b3272(void)

void FUN_1456b3272(longlong *param_1)

{
  FUN_14126a7e8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b32a8 FUN_1456b32a8 body=53 status=ok
// SIG undefined FUN_1456b32a8(void)

void FUN_1456b32a8(longlong *param_1)

{
  FUN_1456b3bb0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b32de FUN_1456b32de body=53 status=ok
// SIG undefined FUN_1456b32de(void)

void FUN_1456b32de(longlong *param_1)

{
  FUN_1456b4fe4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3314 FUN_1456b3314 body=53 status=ok
// SIG undefined FUN_1456b3314(void)

void FUN_1456b3314(longlong *param_1)

{
  FUN_1456b3c62();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b334a FUN_1456b334a body=53 status=ok
// SIG undefined FUN_1456b334a(void)

void FUN_1456b334a(longlong *param_1)

{
  FUN_1456b3cbc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3380 FUN_1456b3380 body=53 status=ok
// SIG undefined FUN_1456b3380(void)

void FUN_1456b3380(longlong *param_1)

{
  FUN_1456b3b00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b33b6 FUN_1456b33b6 body=53 status=ok
// SIG undefined FUN_1456b33b6(void)

void FUN_1456b33b6(longlong *param_1)

{
  FUN_1456b5140();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b33ec FUN_1456b33ec body=53 status=ok
// SIG undefined FUN_1456b33ec(void)

void FUN_1456b33ec(longlong *param_1)

{
  FUN_1456b3422();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3422 FUN_1456b3422 body=90 status=ok
// SIG undefined FUN_1456b3422(void)

void FUN_1456b3422(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b347c FUN_1456b347c body=53 status=ok
// SIG undefined FUN_1456b347c(void)

void FUN_1456b347c(longlong *param_1)

{
  FUN_1456b4a9a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b34b2 FUN_1456b34b2 body=53 status=ok
// SIG undefined FUN_1456b34b2(void)

void FUN_1456b34b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b39f4(param_1);
  return;
}



// FUNCTION 1456b34e8 FUN_1456b34e8 body=53 status=ok
// SIG undefined FUN_1456b34e8(void)

void FUN_1456b34e8(longlong *param_1)

{
  FUN_1456b4be8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b351e FUN_1456b351e body=63 status=ok
// SIG undefined FUN_1456b351e(void)

void FUN_1456b351e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1456b4d38(param_1);
    FUN_1456b3422(param_1);
    return;
  }
  FUN_1456b3422(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14721d0fe(param_1);
  return;
}



// FUNCTION 1456b355e FUN_1456b355e body=132 status=ok
// SIG undefined FUN_1456b355e(void)

void FUN_1456b355e(longlong param_1)

{
  FUN_14003833a();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_1456b3666(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b35e2(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
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



// FUNCTION 1456b35e2 FUN_1456b35e2 body=53 status=ok
// SIG undefined FUN_1456b35e2(void)

void FUN_1456b35e2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b3618(param_1);
  return;
}



// FUNCTION 1456b3618 FUN_1456b3618 body=78 status=ok
// SIG undefined FUN_1456b3618(void)

void FUN_1456b3618(longlong *param_1)

{
  FUN_140037fb0();
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140038102(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3666 FUN_1456b3666 body=135 status=ok
// SIG undefined FUN_1456b3666(void)

void FUN_1456b3666(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14475fe8c(param_1 + 0x40,1);
    iVar2 = *(int *)(param_1 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x54);
  }
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_146f3c7b6(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 1) {
    FUN_14476002c(param_1 + 0x58,1);
  }
  FUN_144718544(param_1 + 0x58);
  FUN_140037fb0(param_1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1456b36ee FUN_1456b36ee body=135 status=ok
// SIG undefined FUN_1456b36ee(void)

void FUN_1456b36ee(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14475fe8c(param_1 + 0x40,1);
    iVar2 = *(int *)(param_1 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x54);
  }
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_146f3c7b6(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 1) {
    FUN_14476002c(param_1 + 0x58,1);
  }
  FUN_144718544(param_1 + 0x58);
  FUN_140037db8(param_1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 1456b3776 FUN_1456b3776 body=51 status=ok
// SIG undefined FUN_1456b3776(void)

void FUN_1456b3776(longlong *param_1)

{
  longlong lVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    if (*param_1 != 0) {
      lVar1 = FUN_14001fdce(*param_1,0,0x10);
      *param_1 = lVar1;
    }
  }
  return;
}



// FUNCTION 1456b37a9 FUN_1456b37a9 body=71 status=ok
// SIG undefined FUN_1456b37a9(void)

void FUN_1456b37a9(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1456b37f0 FUN_1456b37f0 body=71 status=ok
// SIG undefined FUN_1456b37f0(void)

void FUN_1456b37f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1456b3837 FUN_1456b3837 body=71 status=ok
// SIG undefined FUN_1456b3837(void)

void FUN_1456b3837(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1456b387e FUN_1456b387e body=80 status=ok
// SIG undefined FUN_1456b387e(void)

void FUN_1456b387e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b38ce(param_1);
  return;
}



// FUNCTION 1456b38ce FUN_1456b38ce body=53 status=ok
// SIG undefined FUN_1456b38ce(void)

void FUN_1456b38ce(longlong *param_1)

{
  FUN_1456b3b58();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3903 FUN_1456b3903 body=80 status=ok
// SIG undefined FUN_1456b3903(void)

void FUN_1456b3903(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_14c9c2250;
  lVar2 = (longlong)DAT_14c9c2258;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x10))
                (*(longlong **)(lVar1 + lVar3),param_1,param_2);
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1456b3954 FUN_1456b3954 body=160 status=ok
// SIG undefined FUN_1456b3954(void)

void FUN_1456b3954(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  FUN_140037f4a(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14471867d(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1456b39f4 FUN_1456b39f4 body=80 status=ok
// SIG undefined FUN_1456b39f4(void)

void FUN_1456b39f4(longlong *param_1)

{
  FUN_1456b4442();
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1456b3a44(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3a44 FUN_1456b3a44 body=49 status=ok
// SIG undefined FUN_1456b3a44(void)

void FUN_1456b3a44(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456b3a76 FUN_1456b3a76 body=84 status=ok
// SIG undefined FUN_1456b3a76(void)

void FUN_1456b3a76(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_1400020a8();
  }
  FUN_140037fae(param_1 + 0x388);
  FUN_140038e28(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b3aca(param_1);
  return;
}



// FUNCTION 1456b3aca FUN_1456b3aca body=53 status=ok
// SIG undefined FUN_1456b3aca(void)

void FUN_1456b3aca(longlong *param_1)

{
  FUN_1456b3d16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3b00 FUN_1456b3b00 body=88 status=ok
// SIG undefined FUN_1456b3b00(void)

void FUN_1456b3b00(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3b58 FUN_1456b3b58 body=88 status=ok
// SIG undefined FUN_1456b3b58(void)

void FUN_1456b3b58(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456b3fa4(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3bb0 FUN_1456b3bb0 body=88 status=ok
// SIG undefined FUN_1456b3bb0(void)

void FUN_1456b3bb0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456b4004(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3c08 FUN_1456b3c08 body=90 status=ok
// SIG undefined FUN_1456b3c08(void)

void FUN_1456b3c08(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3c62 FUN_1456b3c62 body=90 status=ok
// SIG undefined FUN_1456b3c62(void)

void FUN_1456b3c62(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3cbc FUN_1456b3cbc body=90 status=ok
// SIG undefined FUN_1456b3cbc(void)

void FUN_1456b3cbc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3d16 FUN_1456b3d16 body=90 status=ok
// SIG undefined FUN_1456b3d16(void)

void FUN_1456b3d16(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1472cec54(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b3d70 FUN_1456b3d70 body=96 status=ok
// SIG undefined FUN_1456b3d70(void)

void FUN_1456b3d70(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  while (plVar1 != (longlong *)0x0) {
    param_1[7] = *plVar1;
    FUN_1400020a8();
    plVar1 = (longlong *)param_1[7];
  }
  while ((longlong *)param_1[5] != (longlong *)0x0) {
    param_1[5] = *(longlong *)param_1[5];
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b3dd0 FUN_1456b3dd0 body=103 status=ok
// SIG undefined FUN_1456b3dd0(void)

void FUN_1456b3dd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140038146(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456b3e38 FUN_1456b3e38 body=103 status=ok
// SIG undefined FUN_1456b3e38(void)

void FUN_1456b3e38(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140038171(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456b3ea0 FUN_1456b3ea0 body=260 status=ok
// SIG undefined FUN_1456b3ea0(void)

void FUN_1456b3ea0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  plVar1 = param_1 + 2;
  uVar2 = *(uint *)(param_1 + 1);
  uVar5 = 0;
  do {
    uVar6 = uVar5;
    if (uVar2 == uVar6) goto LAB_1456b3ec2;
    uVar5 = uVar6 + 1;
  } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar6 * 4)));
  if (uVar2 + 1 != uVar6 + 1) {
    do {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x30 + (longlong)(int)uVar6 * 0x48) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + (longlong)(int)uVar6 * 0x48 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar5 = uVar6 + 1;
      if (uVar6 + 1 < *(uint *)(param_1 + 1)) {
        uVar5 = *(uint *)(param_1 + 1);
      }
      do {
        uVar4 = uVar5;
        if (uVar5 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar4 = uVar6;
      } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar6 * 4)));
      uVar6 = uVar4;
    } while (uVar6 != uVar2);
  }
LAB_1456b3ec2:
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_140037c36(*param_1,0);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1472cecf4(param_1);
  }
  FUN_14473de44(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1446fb5ec(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1456b3fa4 FUN_1456b3fa4 body=96 status=ok
// SIG undefined FUN_1456b3fa4(void)

void FUN_1456b3fa4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1456b4004 FUN_1456b4004 body=112 status=ok
// SIG undefined FUN_1456b4004(void)

void FUN_1456b4004(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x150,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x150,0x10);
  }
  return;
}



// FUNCTION 1456b4074 FUN_1456b4074 body=144 status=ok
// SIG undefined FUN_1456b4074(void)

void FUN_1456b4074(longlong *param_1)

{
  FUN_1456b41bc();
  FUN_1456b4104(param_1[0x13],(int)param_1[0x14]);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1456b412c(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b4104 FUN_1456b4104 body=40 status=ok
// SIG undefined FUN_1456b4104(void)

void FUN_1456b4104(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14476820c(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1456b412c FUN_1456b412c body=53 status=ok
// SIG undefined FUN_1456b412c(void)

void FUN_1456b412c(longlong *param_1)

{
  FUN_1456b4162();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b4162 FUN_1456b4162 body=90 status=ok
// SIG undefined FUN_1456b4162(void)

void FUN_1456b4162(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b41bc FUN_1456b41bc body=109 status=ok
// SIG undefined FUN_1456b41bc(void)

void FUN_1456b41bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x98);
      FUN_1407f1458(lVar1 + lVar3);
      *(undefined4 *)(lVar1 + 0x30 + lVar3) = 0;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x38;
    } while (lVar2 < *(int *)(param_1 + 0xa0));
  }
  while (0 < (int)*(uint *)(param_1 + 0x18)) {
    FUN_144b23e54(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 8 + -8);
  }
  return;
}



// FUNCTION 1456b422a FUN_1456b422a body=175 status=ok
// SIG undefined FUN_1456b422a(void)

void FUN_1456b422a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2417f0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1456b42da(param_1 + 0x37);
  FUN_1456b5dea(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1456b4312(param_1 + 6);
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1456b42da FUN_1456b42da body=55 status=ok
// SIG undefined FUN_1456b42da(void)

void FUN_1456b42da(longlong *param_1)

{
  FUN_1456b434a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b4312 FUN_1456b4312 body=55 status=ok
// SIG undefined FUN_1456b4312(void)

void FUN_1456b4312(longlong *param_1)

{
  FUN_1456b43c6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b434a FUN_1456b434a body=123 status=ok
// SIG undefined FUN_1456b434a(void)

void FUN_1456b434a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b43c6 FUN_1456b43c6 body=123 status=ok
// SIG undefined FUN_1456b43c6(void)

void FUN_1456b43c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b4442 FUN_1456b4442 body=232 status=ok
// SIG undefined FUN_1456b4442(void)

void FUN_1456b4442(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  plVar1 = param_1 + 2;
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    if (uVar2 == uVar6) goto LAB_1456b4460;
    uVar4 = uVar6 + 1;
  } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar6 * 4)));
  uVar4 = uVar2;
  if (uVar2 + 1 != uVar6 + 1) {
    do {
      if (*(longlong *)(*param_1 + 0x48 + (longlong)(int)uVar6 * 0x58) != 0) {
        FUN_1400020a8();
        uVar4 = *(uint *)(param_1 + 1);
      }
      uVar5 = uVar6 + 1;
      if (uVar6 + 1 < uVar4) {
        uVar5 = uVar4;
      }
      do {
        uVar3 = uVar5;
        if (uVar5 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar3 = uVar6;
      } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar6 * 4)));
      uVar6 = uVar3;
    } while (uVar6 != uVar2);
  }
LAB_1456b4460:
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1456b3a44(*param_1,0);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1472cecc4(param_1);
  }
  FUN_14473de44(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1446fb5ec(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1456b452a FUN_1456b452a body=238 status=ok
// SIG undefined FUN_1456b452a(void)

void FUN_1456b452a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_1456b4618(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x128) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x120) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b464e(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a2e69d0;
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
  }
  FUN_144a4509c(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b4618 FUN_1456b4618 body=53 status=ok
// SIG undefined FUN_1456b4618(void)

void FUN_1456b4618(longlong *param_1)

{
  FUN_1456b47c6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b464e FUN_1456b464e body=87 status=ok
// SIG undefined FUN_1456b464e(void)

void FUN_1456b464e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b46a6(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b46dc(param_1);
  return;
}



// FUNCTION 1456b46a6 FUN_1456b46a6 body=53 status=ok
// SIG undefined FUN_1456b46a6(void)

void FUN_1456b46a6(longlong *param_1)

{
  FUN_1456b4712();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b46dc FUN_1456b46dc body=53 status=ok
// SIG undefined FUN_1456b46dc(void)

void FUN_1456b46dc(longlong *param_1)

{
  FUN_1456b476c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b4712 FUN_1456b4712 body=90 status=ok
// SIG undefined FUN_1456b4712(void)

void FUN_1456b4712(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b476c FUN_1456b476c body=90 status=ok
// SIG undefined FUN_1456b476c(void)

void FUN_1456b476c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b47c6 FUN_1456b47c6 body=90 status=ok
// SIG undefined FUN_1456b47c6(void)

void FUN_1456b47c6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b4820 FUN_1456b4820 body=279 status=ok
// SIG undefined FUN_1456b4820(void)

void FUN_1456b4820(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456b49c8();
  iVar1 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x168);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_1472cf472((longlong *)(param_1 + 0x168),0);
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b4938(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1456b4938 FUN_1456b4938 body=53 status=ok
// SIG undefined FUN_1456b4938(void)

void FUN_1456b4938(longlong *param_1)

{
  FUN_1456b496e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b496e FUN_1456b496e body=90 status=ok
// SIG undefined FUN_1456b496e(void)

void FUN_1456b496e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b49c8 FUN_1456b49c8 body=209 status=ok
// SIG undefined FUN_1456b49c8(void)

ulonglong FUN_1456b49c8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[0x58];
  uVar2 = 0;
  if ((longlong)(int)uVar1 != 0) {
    uVar2 = param_1[0x5c];
    param_1[0x5c] = uVar2 + uVar1;
    if (param_1[0x5d] - uVar2 < uVar1) {
      FUN_1472cf4d2(param_1 + 0x5a,uVar2);
    }
    memcpy((void *)((longlong)(int)uVar2 * 8 + *(longlong *)(param_1 + 0x5a)),
           *(void **)(param_1 + 0x56),(longlong)(int)uVar1 << 3);
    uVar2 = param_1[0x58];
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar2);
    }
  }
  param_1[0x58] = 0;
  if (param_1[0x59] != uVar2) {
    FUN_1472cf472(param_1 + 0x56);
  }
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  uVar1 = param_1[(ulonglong)(byte)param_1[0x40] + 0xd];
  param_1[0x61] = uVar1 - uVar1 % *param_1;
  return (ulonglong)uVar1 / (ulonglong)*param_1;
}



// FUNCTION 1456b4a9a FUN_1456b4a9a body=332 status=ok
// SIG undefined FUN_1456b4a9a(void)

void FUN_1456b4a9a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456b4be8 FUN_1456b4be8 body=335 status=ok
// SIG undefined FUN_1456b4be8(void)

void FUN_1456b4be8(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_144ab2e4c((longlong)iStack_4c * 0x98 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140f776e6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456b4d38 FUN_1456b4d38 body=335 status=ok
// SIG undefined FUN_1456b4d38(void)

void FUN_1456b4d38(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1456b4e88 FUN_1456b4e88 body=346 status=ok
// SIG undefined FUN_1456b4e88(void)

void FUN_1456b4e88(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456b4fe4 FUN_1456b4fe4 body=346 status=ok
// SIG undefined FUN_1456b4fe4(void)

void FUN_1456b4fe4(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456b5140 FUN_1456b5140 body=363 status=ok
// SIG undefined FUN_1456b5140(void)

void FUN_1456b5140(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1406893db(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456b52ac FUN_1456b52ac body=89 status=ok
// SIG undefined FUN_1456b52ac(void)

void FUN_1456b52ac(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456b5302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1456b5306 FUN_1456b5306 body=445 status=ok
// SIG undefined FUN_1456b5306(void)

void FUN_1456b5306(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0xa6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xa2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x9e];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x9a];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x96];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_1456b55c6(param_1 + 0x5f);
  FUN_1456b54c4(param_1 + 0x50);
  FUN_1456b54fa(param_1 + 2);
  FUN_14010ff52(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456b54c4 FUN_1456b54c4 body=53 status=ok
// SIG undefined FUN_1456b54c4(void)

void FUN_1456b54c4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b5532(param_1);
  return;
}



// FUNCTION 1456b54fa FUN_1456b54fa body=55 status=ok
// SIG undefined FUN_1456b54fa(void)

void FUN_1456b54fa(longlong *param_1)

{
  FUN_1456b56a6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b5532 FUN_1456b5532 body=67 status=ok
// SIG undefined FUN_1456b5532(void)

void FUN_1456b5532(longlong *param_1)

{
  FUN_1456b5576();
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b5576 FUN_1456b5576 body=79 status=ok
// SIG undefined FUN_1456b5576(void)

void FUN_1456b5576(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456b5646(param_1,0);
  }
  FUN_14473de44(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1446fb5ec(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1456b55c6 FUN_1456b55c6 body=127 status=ok
// SIG undefined FUN_1456b55c6(void)

void FUN_1456b55c6(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    if (param_1[1] != 0) {
      FUN_144740518();
      lVar3 = param_1[2];
      if (lVar3 == 0) goto LAB_1456b55f1;
    }
    FUN_1400385cc(lVar3);
    FUN_1400020a8(lVar3);
  }
LAB_1456b55f1:
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456b5632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1456b5646 FUN_1456b5646 body=96 status=ok
// SIG undefined FUN_1456b5646(void)

void FUN_1456b5646(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 1456b56a6 FUN_1456b56a6 body=383 status=ok
// SIG undefined FUN_1456b56a6(void)

void FUN_1456b56a6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456b5828 FUN_1456b5828 body=503 status=ok
// SIG undefined FUN_1456b5828(void)

void FUN_1456b5828(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_14003878e(*(undefined8 *)(param_1 + 0x360),*(undefined4 *)(param_1 + 0x368));
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x220);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140038744(param_1 + 0x210);
  puVar2 = *(undefined8 **)(param_1 + 0x208);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_140038744(param_1 + 0x120);
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140038744(param_1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140038744(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456b5a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1456b5a20 FUN_1456b5a20 body=916 status=ok
// SIG undefined FUN_1456b5a20(void)

void FUN_1456b5a20(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_1456b5f16(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_1456b5f16(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_140038bc3(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(param_1 + 0x5c0));
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140038a34(param_1 + 0x568);
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x558 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  FUN_140038b94(*(undefined8 *)(param_1 + 0x538),*(undefined4 *)(param_1 + 0x540));
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x530) = 0;
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FUN_1400020a8();
  }
  FUN_140038a34(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FUN_1400020a8();
  }
  FUN_140038a34(param_1 + 0x498);
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_1400020a8();
  }
  FUN_1400b2b21(*(undefined8 *)(param_1 + 0x468),*(undefined4 *)(param_1 + 0x470));
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_1400020a8();
  }
  FUN_140038ae8(param_1 + 0x450);
  FUN_140038ae8(param_1 + 0x438);
  if (*(longlong **)(param_1 + 0x420) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x420) + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_1400020a8();
  }
  FUN_140038ae8(param_1 + 0x3e0);
  FUN_140038ae8(param_1 + 0x3c8);
  FUN_1456b5dea(param_1 + 0x298);
  if (*(longlong **)(param_1 + 0x290) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x290) + 0x38))();
  }
  FUN_140038744(param_1 + 0x280);
  puVar2 = *(undefined8 **)(param_1 + 0x278);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400389e8(param_1 + 0x1b0);
  puVar2 = *(undefined8 **)(param_1 + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b5db4(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400389e8(param_1 + 0xc0);
  FUN_1400389e8(param_1 + 0x88);
  FUN_1400389e8(param_1 + 0x50);
  FUN_1400389e8(param_1 + 0x18);
  return;
}



// FUNCTION 1456b5db4 FUN_1456b5db4 body=53 status=ok
// SIG undefined FUN_1456b5db4(void)

void FUN_1456b5db4(longlong *param_1)

{
  FUN_140038bf6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b5dea FUN_1456b5dea body=119 status=ok
// SIG undefined FUN_1456b5dea(void)

void FUN_1456b5dea(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_1456b5e62(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b5e62 FUN_1456b5e62 body=55 status=ok
// SIG undefined FUN_1456b5e62(void)

void FUN_1456b5e62(longlong *param_1)

{
  FUN_1456b5e9a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456b5e9a FUN_1456b5e9a body=123 status=ok
// SIG undefined FUN_1456b5e9a(void)

void FUN_1456b5e9a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456b5f16 FUN_1456b5f16 body=74 status=ok
// SIG undefined FUN_1456b5f16(void)

void FUN_1456b5f16(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456b5f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1456b5f60 FUN_1456b5f60 body=7112 status=ok
// SIG undefined FUN_1456b5f60(void)

void FUN_1456b5f60(longlong *param_1,ulonglong param_2,uint param_3,ushort *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  void *pvVar26;
  longlong lVar27;
  byte bVar28;
  uint *puVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uint *puVar35;
  ulonglong uVar36;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  int iVar40;
  longlong lVar41;
  ulonglong uVar42;
  void *pvVar43;
  uint uVar44;
  uint *puVar45;
  bool bVar46;
  
  lVar27 = param_1[0x33];
  if (lVar27 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar27 = param_1[0x33];
  }
  if (*(longlong *)(param_2 + 0xe0) == 0) {
    if ((*(byte *)(param_2 + 0xdf) & 2) != 0) {
      lVar23 = *(longlong *)(param_2 + 0x30);
      if (lVar23 == 0) {
        plVar24 = (longlong *)(param_2 + 0x38);
      }
      else {
        plVar24 = (longlong *)(lVar23 + 0x70);
        if (*(char *)(lVar23 + 0x81) == '\0') goto LAB_1456b5ff9;
      }
      lVar23 = *plVar24;
      if (((lVar23 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar23 + 8) != 0)) {
        puVar45 = *(uint **)(lVar27 + 0x10);
        if (*(char *)(lVar23 + 0x28 + (ulonglong)*puVar45) == '\0') {
          *(undefined1 *)(lVar23 + 0x28 + (ulonglong)*puVar45) = 1;
          pvVar43 = *(void **)(puVar45 + 2);
          if (pvVar43 == (void *)0x0) {
            uVar19 = puVar45[4];
LAB_1456b764e:
            uVar44 = 0x1000;
            if (uVar19 != 0) {
              uVar44 = (int)((float)(int)uVar19 * 0.5 + (float)(int)uVar19);
            }
            puVar45[4] = uVar44;
            lVar27 = -1;
            if (-1 < (int)uVar44) {
              lVar27 = (longlong)(int)uVar44 * 8 + (ulonglong)((longlong)(int)uVar44 * 8 == 0);
            }
            pvVar26 = (void *)FUN_14001cc68(lVar27,0x10);
            if ((pvVar43 == (void *)0x0) || (pvVar26 == (void *)0x0)) {
              *(void **)(puVar45 + 2) = pvVar26;
              pvVar43 = pvVar26;
              if (pvVar26 == (void *)0x0) {
                *(undefined1 *)((longlong)puVar45 + 0x19) = 1;
                goto LAB_1456b5ff9;
              }
            }
            else {
              memcpy(pvVar26,pvVar43,(longlong)(int)puVar45[5] << 3);
              FUN_1400020a8(pvVar43);
              *(void **)(puVar45 + 2) = pvVar26;
              pvVar43 = pvVar26;
            }
          }
          else {
            uVar19 = puVar45[4];
            if ((int)uVar19 <= (int)puVar45[5]) goto LAB_1456b764e;
          }
          uVar19 = puVar45[5];
          puVar45[5] = uVar19 + 1;
          *(longlong *)((longlong)pvVar43 + (longlong)(int)uVar19 * 8) = lVar23;
        }
      }
    }
  }
  else {
    if (*(int *)(lVar27 + 0x1a4) == 0) {
      iVar37 = *(int *)(lVar27 + 0x178);
      *(int *)(lVar27 + 0x178) = iVar37 + 1;
      if (*(int *)(lVar27 + 0x17c) == iVar37) {
        FUN_1446efaca((longlong *)(lVar27 + 0x170),iVar37);
      }
      iVar40 = *(int *)(lVar27 + 0x198);
      if (iVar40 == 0) {
        iVar21 = -1;
      }
      else {
        iVar21 = iVar40 + 0x1e;
        if (-1 < iVar40 + -1) {
          iVar21 = iVar40 + -1;
        }
        iVar21 = iVar21 >> 5;
      }
      lVar23 = lVar27 + 0x180;
      iVar33 = iVar40 + 1;
      iVar31 = iVar40 + 0x1f;
      if (-1 < iVar40) {
        iVar31 = iVar40;
      }
      if (iVar31 >> 5 == iVar21) {
        *(int *)(lVar27 + 0x198) = iVar33;
      }
      else {
        if (*(int *)(lVar27 + 0x19c) <= iVar40) {
          if (iVar40 + 0x20U < 0xa0) {
            iVar33 = 0x80;
            iVar21 = iVar40;
          }
          else {
            uVar19 = iVar40 + 0x20U >> 5;
            if (*(int *)(lVar27 + 0x19c) + 0x1fU < 0xa0) {
              uVar44 = 4;
              if (4 < uVar19) {
                uVar44 = uVar19;
              }
            }
            else {
              uVar44 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
            }
            uVar30 = FUN_144a3809e(uVar44 << 2,0);
            iVar21 = (int)(uVar30 >> 2);
            iVar33 = -0x20;
            if ((int)uVar19 <= iVar21) {
              iVar33 = iVar21 << 5;
            }
            iVar21 = *(int *)(lVar27 + 0x198);
          }
          *(int *)(lVar27 + 0x19c) = iVar33;
          FUN_1446efbd8(lVar23,iVar21);
          iVar33 = *(int *)(lVar27 + 0x198) + 1;
        }
        iVar21 = iVar33 + 0x1f;
        if (-1 < iVar33) {
          iVar21 = iVar33;
        }
        *(int *)(lVar27 + 0x198) = iVar33;
        if (iVar33 % 0x20 != 0) {
          lVar25 = *(longlong *)(lVar27 + 400);
          if (*(longlong *)(lVar27 + 400) == 0) {
            lVar25 = lVar23;
          }
          bVar28 = -(char)(iVar33 % 0x20);
          *(uint *)(lVar25 + (longlong)(iVar21 >> 5) * 4) =
               (uint)(*(int *)(lVar25 + (longlong)(iVar21 >> 5) * 4) << (bVar28 & 0x1f)) >>
               (bVar28 & 0x1f);
        }
      }
      lVar25 = (longlong)iVar37;
      if (*(longlong *)(lVar27 + 400) != 0) {
        lVar23 = *(longlong *)(lVar27 + 400);
      }
      bVar28 = (byte)iVar40 & 0x1f;
      puVar45 = (uint *)(lVar23 + (longlong)(iVar31 >> 5) * 4);
      *puVar45 = *puVar45 & (-2 << bVar28 | 0xfffffffeU >> 0x20 - bVar28);
    }
    else {
      iVar37 = *(int *)(lVar27 + 0x1a0);
      lVar25 = (longlong)iVar37;
      iVar40 = *(int *)(*(longlong *)(lVar27 + 0x170) + 4 + lVar25 * 0x10);
      *(int *)(lVar27 + 0x1a0) = iVar40;
      iVar21 = *(int *)(lVar27 + 0x1a4) + -1;
      *(int *)(lVar27 + 0x1a4) = iVar21;
      if (iVar21 != 0) {
        *(undefined4 *)(*(longlong *)(lVar27 + 0x170) + (longlong)iVar40 * 0x10) = 0xffffffff;
      }
    }
    puVar45 = (uint *)(lVar27 + 0x180);
    uVar19 = 1;
    uVar44 = 1 << ((byte)iVar37 & 0x1f);
    puVar29 = *(uint **)(lVar27 + 400);
    if (*(uint **)(lVar27 + 400) == (uint *)0x0) {
      puVar29 = puVar45;
    }
    iVar40 = iVar37 + 0x1f;
    if (-1 < iVar37) {
      iVar40 = iVar37;
    }
    puVar29[iVar40 >> 5] = puVar29[iVar40 >> 5] | uVar44;
    lVar23 = *(longlong *)(lVar27 + 0x170);
    lVar25 = lVar25 * 0x10;
    *(ulonglong *)(lVar23 + lVar25) = param_2;
    *(undefined4 *)(lVar23 + 8 + lVar25) = 0xffffffff;
    uVar22 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
    uVar22 = uVar22 >> 0x10 ^ uVar22;
    uVar34 = *(int *)(lVar27 + 0x178) - *(int *)(lVar27 + 0x1a4);
    if ((uVar34 != 0) && (uVar34 != 1)) {
      lVar38 = lVar27 + 0x1a8;
      if (*(longlong *)(lVar27 + 0x1b0) != 0) {
        lVar38 = *(longlong *)(lVar27 + 0x1b0);
      }
      iVar21 = *(int *)(lVar38 + (ulonglong)(*(int *)(lVar27 + 0x1b8) - 1U & uVar22) * 4);
      if (iVar21 != -1) {
        lVar38 = *(longlong *)(lVar27 + 0x170);
        do {
          puVar4 = (ulonglong *)(lVar38 + (longlong)iVar21 * 0x10);
          if (*(ulonglong *)(lVar38 + (longlong)iVar21 * 0x10) == param_2) {
            *puVar4 = param_2;
            lVar23 = *(longlong *)(lVar27 + 0x170);
            if (*(int *)(lVar27 + 0x1a4) != 0) {
              *(int *)(lVar23 + (longlong)*(int *)(lVar27 + 0x1a0) * 0x10) = iVar37;
            }
            *(undefined4 *)(lVar23 + (longlong)iVar37 * 0x10) = 0xffffffff;
            uVar20 = 0xffffffff;
            if (0 < *(int *)(lVar27 + 0x1a4)) {
              uVar20 = *(undefined4 *)(lVar27 + 0x1a0);
            }
            *(undefined4 *)(lVar23 + (longlong)iVar37 * 0x10 + 4) = uVar20;
            *(int *)(lVar27 + 0x1a0) = iVar37;
            *(int *)(lVar27 + 0x1a4) = *(int *)(lVar27 + 0x1a4) + 1;
            if (*(uint **)(lVar27 + 400) != (uint *)0x0) {
              puVar45 = *(uint **)(lVar27 + 400);
            }
            puVar45[iVar40 >> 5] = puVar45[iVar40 >> 5] & ~uVar44;
            goto LAB_1456b5ff9;
          }
          iVar21 = (int)puVar4[1];
        } while (iVar21 != -1);
      }
    }
    if (3 < uVar34) {
      uVar30 = (ulonglong)(uVar34 & 0xfffffffe) + 0xf;
      lVar38 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      uVar19 = 1 << ((byte)lVar38 & 0x1f);
    }
    if (((int)uVar34 < 1) || ((int)uVar19 <= *(int *)(lVar27 + 0x1b8))) {
      uVar22 = *(int *)(lVar27 + 0x1b8) - 1U & uVar22;
      *(uint *)(lVar23 + lVar25 + 0xc) = uVar22;
      lVar38 = *(longlong *)(lVar27 + 0x1b0);
      if (*(longlong *)(lVar27 + 0x1b0) == 0) {
        lVar38 = lVar27 + 0x1a8;
      }
      *(undefined4 *)(lVar23 + lVar25 + 8) =
           *(undefined4 *)
            (lVar38 + ((longlong)*(int *)(lVar27 + 0x1b8) - 1U & (longlong)(int)uVar22) * 4);
      lVar23 = *(longlong *)(lVar27 + 0x1b0);
      if (*(longlong *)(lVar27 + 0x1b0) == 0) {
        lVar23 = lVar27 + 0x1a8;
      }
      *(int *)(lVar23 + ((longlong)*(int *)(lVar27 + 0x1b8) - 1U & (longlong)(int)uVar22) * 4) =
           iVar37;
      goto LAB_1456b5ff9;
    }
    *(uint *)(lVar27 + 0x1b8) = uVar19;
    plVar24 = (longlong *)(lVar27 + 0x1b0);
    if (*(longlong *)(lVar27 + 0x1b0) != 0) {
      FUN_1446efa72(plVar24,0,0,4);
      uVar19 = *(uint *)(lVar27 + 0x1b8);
      if (uVar19 == 0) goto LAB_1456b5ff9;
    }
    lVar23 = lVar27 + 0x1a8;
    if (uVar19 == 1) {
      if (*plVar24 != 0) {
        FUN_1446efa72(plVar24,0,0,4);
      }
LAB_1456b6327:
      uVar44 = 0;
      do {
        lVar25 = *(longlong *)(lVar27 + 0x1b0);
        if (*(longlong *)(lVar27 + 0x1b0) == 0) {
          lVar25 = lVar23;
        }
        *(undefined4 *)(lVar25 + (ulonglong)(*(int *)(lVar27 + 0x1b8) + 0x7fffffffU & uVar44) * 4) =
             0xffffffff;
        uVar44 = uVar44 + 1;
      } while (uVar19 != uVar44);
    }
    else {
      FUN_1446efa72(plVar24,0,uVar19,4);
      if (0 < (int)uVar19) goto LAB_1456b6327;
    }
    iVar37 = *(int *)(lVar27 + 0x198);
    if (iVar37 == 0) {
      uVar30 = 0;
      uVar36 = 1;
      iVar40 = 0;
      iVar21 = 0;
    }
    else {
      puVar29 = *(uint **)(lVar27 + 400);
      if (*(uint **)(lVar27 + 400) == (uint *)0x0) {
        puVar29 = puVar45;
      }
      uVar19 = *puVar29;
      if (uVar19 == 0) {
        iVar40 = iVar37 + 0x1e;
        if (-1 < iVar37 + -1) {
          iVar40 = iVar37 + -1;
        }
        uVar30 = 0;
        uVar36 = (ulonglong)(uint)(iVar40 >> 5);
        if (iVar40 >> 5 < 1) {
          uVar36 = uVar30;
        }
        iVar21 = 0;
        do {
          if (uVar36 == uVar30) goto LAB_1456b5ff9;
          iVar21 = iVar21 + 0x20;
          uVar19 = puVar29[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar30 = 0;
        iVar21 = 0;
      }
      uVar36 = (ulonglong)(-uVar19 & uVar19);
      uVar42 = uVar36 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar42 != 0) {
        for (; uVar42 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar40 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar37 <= iVar40) {
        iVar40 = iVar37;
      }
    }
    if (iVar40 < iVar37) {
      uVar19 = 0xffffffff;
      do {
        lVar25 = *(longlong *)(lVar27 + 0x170);
        lVar41 = (longlong)iVar40 * 0x10;
        uVar44 = ((uint)(*(ulonglong *)(lVar25 + lVar41) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar25 + lVar41) >> 4)) * -0x7a143595;
        uVar44 = (uVar44 >> 0xd ^ uVar44) * -0x3d4d51cb;
        uVar42 = (longlong)(int)(uVar44 >> 0x10 ^ uVar44) & (longlong)*(int *)(lVar27 + 0x1b8) - 1U;
        iVar37 = (int)uVar42;
        *(int *)(lVar25 + 0xc + lVar41) = iVar37;
        lVar38 = *(longlong *)(lVar27 + 0x1b0);
        if (*(longlong *)(lVar27 + 0x1b0) == 0) {
          lVar38 = lVar23;
        }
        *(undefined4 *)(lVar25 + 8 + lVar41) =
             *(undefined4 *)(lVar38 + ((longlong)*(int *)(lVar27 + 0x1b8) - 1U & uVar42) * 4);
        lVar25 = *(longlong *)(lVar27 + 0x1b0);
        if (*(longlong *)(lVar27 + 0x1b0) == 0) {
          lVar25 = lVar23;
        }
        *(int *)(lVar25 + ((longlong)iVar37 & (longlong)*(int *)(lVar27 + 0x1b8) - 1U) * 4) = iVar40
        ;
        uVar19 = ~(uint)uVar36 & uVar19;
        puVar29 = *(uint **)(lVar27 + 400);
        if (*(uint **)(lVar27 + 400) == (uint *)0x0) {
          puVar29 = puVar45;
        }
        iVar37 = *(int *)(lVar27 + 0x198);
        iVar40 = (int)uVar30;
        lVar25 = (longlong)iVar40;
        uVar44 = puVar29[lVar25] & uVar19;
        if (uVar44 == 0) {
          iVar33 = iVar37 + 0x1e;
          if (-1 < iVar37 + -1) {
            iVar33 = iVar37 + -1;
          }
          iVar33 = iVar33 >> 5;
          iVar31 = iVar33;
          if (iVar33 < iVar40) {
            iVar31 = iVar40;
          }
          if (iVar33 <= iVar40) break;
          lVar38 = 0;
          while( true ) {
            iVar21 = iVar21 + 0x20;
            uVar44 = puVar29[lVar25 + lVar38 + 1];
            if (uVar44 != 0) break;
            lVar38 = lVar38 + 1;
            if (iVar31 - lVar25 == lVar38) goto LAB_1456b5ff9;
          }
          uVar30 = (ulonglong)(iVar40 + (int)lVar38 + 1);
          uVar19 = 0xffffffff;
        }
        uVar36 = (ulonglong)(-uVar44 & uVar44);
        uVar42 = uVar36 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar40 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      } while (iVar40 < iVar37);
    }
  }
LAB_1456b5ff9:
  if (((char)param_4[5] == '\0') &&
     (*(char *)((longlong)param_4 + 0xb) == *(char *)((longlong)param_4 + 3))) {
    bVar46 = false;
    if (param_4[2] == 0) {
      bVar46 = false;
      if ((param_4[3] == *param_4) && (bVar46 = false, (char)param_4[4] == '\0')) {
        bVar46 = *(char *)((longlong)param_4 + 9) == (char)param_4[1];
      }
    }
  }
  else {
    bVar46 = false;
  }
  lVar27 = param_1[0x33];
  if (lVar27 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar27 = param_1[0x33];
  }
  plVar24 = (longlong *)(lVar27 + 0xa8);
  uVar19 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  uVar19 = uVar19 >> 0x10 ^ uVar19;
  iVar37 = *(int *)(lVar27 + 0xb0);
  iVar40 = *(int *)(lVar27 + 0xdc);
  if (iVar37 != iVar40) {
    lVar23 = lVar27 + 0xe0;
    if (*(longlong *)(lVar27 + 0xe8) != 0) {
      lVar23 = *(longlong *)(lVar27 + 0xe8);
    }
    iVar21 = *(int *)(lVar23 + (ulonglong)(*(int *)(lVar27 + 0xf0) - 1U & uVar19) * 4);
    if (iVar21 != -1) {
      do {
        lVar23 = *plVar24 + (longlong)iVar21 * 0x38;
        if (*(ulonglong *)(*plVar24 + (longlong)iVar21 * 0x38) == param_2) {
          if (lVar23 != 0) goto LAB_1456b60f6;
          break;
        }
        iVar21 = *(int *)(lVar23 + 0x30);
      } while (iVar21 != -1);
    }
  }
  if (iVar40 == 0) {
    *(int *)(lVar27 + 0xb0) = iVar37 + 1;
    if (*(int *)(lVar27 + 0xb4) == iVar37) {
      FUN_1447030e2(plVar24,iVar37);
    }
    iVar40 = *(int *)(lVar27 + 0xd0);
    if (iVar40 == 0) {
      iVar21 = -1;
    }
    else {
      iVar21 = iVar40 + 0x1e;
      if (-1 < iVar40 + -1) {
        iVar21 = iVar40 + -1;
      }
      iVar21 = iVar21 >> 5;
    }
    lVar25 = lVar27 + 0xb8;
    iVar33 = iVar40 + 1;
    iVar31 = iVar40 + 0x1f;
    if (-1 < iVar40) {
      iVar31 = iVar40;
    }
    if (iVar31 >> 5 == iVar21) {
      *(int *)(lVar27 + 0xd0) = iVar33;
    }
    else {
      if (*(int *)(lVar27 + 0xd4) <= iVar40) {
        if (iVar40 + 0x20U < 0xa0) {
          iVar33 = 0x80;
          iVar21 = iVar40;
        }
        else {
          uVar44 = iVar40 + 0x20U >> 5;
          if (*(int *)(lVar27 + 0xd4) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar44) {
              uVar22 = uVar44;
            }
          }
          else {
            uVar22 = (uVar44 * 3 >> 3) + uVar44 + 0x10;
          }
          uVar30 = FUN_144a3809e(uVar22 << 2,0);
          iVar21 = (int)(uVar30 >> 2);
          iVar33 = -0x20;
          if ((int)uVar44 <= iVar21) {
            iVar33 = iVar21 << 5;
          }
          iVar21 = *(int *)(lVar27 + 0xd0);
        }
        *(int *)(lVar27 + 0xd4) = iVar33;
        FUN_1446efbd8(lVar25,iVar21);
        iVar33 = *(int *)(lVar27 + 0xd0) + 1;
      }
      iVar21 = iVar33 + 0x1f;
      if (-1 < iVar33) {
        iVar21 = iVar33;
      }
      *(int *)(lVar27 + 0xd0) = iVar33;
      if (iVar33 % 0x20 != 0) {
        lVar23 = *(longlong *)(lVar27 + 200);
        if (*(longlong *)(lVar27 + 200) == 0) {
          lVar23 = lVar25;
        }
        bVar28 = -(char)(iVar33 % 0x20);
        *(uint *)(lVar23 + (longlong)(iVar21 >> 5) * 4) =
             (uint)(*(int *)(lVar23 + (longlong)(iVar21 >> 5) * 4) << (bVar28 & 0x1f)) >>
             (bVar28 & 0x1f);
      }
    }
    lVar23 = (longlong)iVar37;
    if (*(longlong *)(lVar27 + 200) != 0) {
      lVar25 = *(longlong *)(lVar27 + 200);
    }
    bVar28 = (byte)iVar40 & 0x1f;
    puVar45 = (uint *)(lVar25 + (longlong)(iVar31 >> 5) * 4);
    *puVar45 = *puVar45 & (-2 << bVar28 | 0xfffffffeU >> 0x20 - bVar28);
  }
  else {
    iVar37 = *(int *)(lVar27 + 0xd8);
    lVar23 = (longlong)iVar37;
    iVar21 = *(int *)(*(longlong *)(lVar27 + 0xa8) + 4 + lVar23 * 0x38);
    *(int *)(lVar27 + 0xd8) = iVar21;
    *(int *)(lVar27 + 0xdc) = iVar40 + -1;
    if (iVar40 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar27 + 0xa8) + (longlong)iVar21 * 0x38) = 0xffffffff;
    }
  }
  puVar45 = (uint *)(lVar27 + 0xb8);
  uVar44 = 1;
  puVar29 = *(uint **)(lVar27 + 200);
  if (*(uint **)(lVar27 + 200) == (uint *)0x0) {
    puVar29 = puVar45;
  }
  iVar40 = iVar37 + 0x1f;
  if (-1 < iVar37) {
    iVar40 = iVar37;
  }
  puVar29[iVar40 >> 5] = puVar29[iVar40 >> 5] | 1 << ((byte)iVar37 & 0x1f);
  lVar25 = *(longlong *)(lVar27 + 0xa8);
  lVar23 = lVar23 * 0x38;
  puVar2 = (undefined4 *)(lVar25 + lVar23);
  *(ulonglong *)(lVar25 + lVar23) = param_2;
  puVar5 = (undefined8 *)(lVar25 + 8 + lVar23);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5 = (undefined8 *)(lVar25 + 0x18 + lVar23);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(lVar25 + 0x28 + lVar23) = 0;
  *(undefined8 *)(lVar25 + 0x2c + lVar23) = 0xffffffff00000004;
  uVar22 = *(int *)(lVar27 + 0xb0) - *(int *)(lVar27 + 0xdc);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    lVar23 = lVar27 + 0xe0;
    if (*(longlong *)(lVar27 + 0xe8) != 0) {
      lVar23 = *(longlong *)(lVar27 + 0xe8);
    }
    iVar40 = *(int *)(lVar23 + (ulonglong)(*(int *)(lVar27 + 0xf0) - 1U & uVar19) * 4);
    if (iVar40 != -1) {
      do {
        puVar3 = (undefined4 *)(*plVar24 + (longlong)iVar40 * 0x38);
        if (*(ulonglong *)(*plVar24 + (longlong)iVar40 * 0x38) == param_2) {
          if (*(longlong *)(puVar3 + 8) != 0) {
            FUN_1400020a8();
          }
          uVar20 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          uVar12 = puVar2[4];
          uVar13 = puVar2[5];
          uVar14 = puVar2[6];
          uVar15 = puVar2[7];
          uVar16 = puVar2[9];
          uVar17 = puVar2[10];
          uVar18 = puVar2[0xb];
          puVar3[8] = puVar2[8];
          puVar3[9] = uVar16;
          puVar3[10] = uVar17;
          puVar3[0xb] = uVar18;
          puVar3[4] = uVar12;
          puVar3[5] = uVar13;
          puVar3[6] = uVar14;
          puVar3[7] = uVar15;
          *puVar3 = uVar20;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          FUN_1473703f0(plVar24,iVar37);
          goto LAB_1456b68d5;
        }
        iVar40 = puVar3[0xc];
      } while (iVar40 != -1);
    }
  }
  if (3 < uVar22) {
    uVar30 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar23 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar44 = 1 << ((byte)lVar23 & 0x1f);
  }
  if (((int)uVar22 < 1) || ((int)uVar44 <= *(int *)(lVar27 + 0xf0))) {
    uVar44 = *(int *)(lVar27 + 0xf0) - 1U & uVar19;
    puVar2[0xd] = uVar44;
    lVar23 = *(longlong *)(lVar27 + 0xe8);
    if (*(longlong *)(lVar27 + 0xe8) == 0) {
      lVar23 = lVar27 + 0xe0;
    }
    puVar2[0xc] = *(undefined4 *)
                   (lVar23 + ((longlong)*(int *)(lVar27 + 0xf0) - 1U & (longlong)(int)uVar44) * 4);
    lVar23 = *(longlong *)(lVar27 + 0xe8);
    if (*(longlong *)(lVar27 + 0xe8) == 0) {
      lVar23 = lVar27 + 0xe0;
    }
    *(int *)(lVar23 + ((longlong)*(int *)(lVar27 + 0xf0) - 1U & (longlong)(int)uVar44) * 4) = iVar37
    ;
  }
  else {
    *(uint *)(lVar27 + 0xf0) = uVar44;
    plVar1 = (longlong *)(lVar27 + 0xe8);
    if (*(longlong *)(lVar27 + 0xe8) != 0) {
      FUN_1446efa72(plVar1,0,0,4);
      uVar44 = *(uint *)(lVar27 + 0xf0);
      if (uVar44 == 0) goto LAB_1456b68d5;
    }
    lVar23 = lVar27 + 0xe0;
    if (uVar44 == 1) {
      if (*plVar1 != 0) {
        FUN_1446efa72(plVar1,0,0,4);
      }
LAB_1456b69ab:
      uVar22 = 0;
      do {
        lVar25 = *(longlong *)(lVar27 + 0xe8);
        if (*(longlong *)(lVar27 + 0xe8) == 0) {
          lVar25 = lVar23;
        }
        *(undefined4 *)(lVar25 + (ulonglong)(*(int *)(lVar27 + 0xf0) + 0x7fffffffU & uVar22) * 4) =
             0xffffffff;
        uVar22 = uVar22 + 1;
      } while (uVar44 != uVar22);
    }
    else {
      FUN_1446efa72(plVar1,0,uVar44,4);
      if (0 < (int)uVar44) goto LAB_1456b69ab;
    }
    iVar40 = *(int *)(lVar27 + 0xd0);
    if (iVar40 == 0) {
      uVar30 = 0;
      uVar36 = 1;
      iVar33 = 0;
      iVar21 = 0;
    }
    else {
      puVar29 = *(uint **)(lVar27 + 200);
      if (*(uint **)(lVar27 + 200) == (uint *)0x0) {
        puVar29 = puVar45;
      }
      uVar44 = *puVar29;
      if (uVar44 == 0) {
        iVar21 = iVar40 + 0x1e;
        if (-1 < iVar40 + -1) {
          iVar21 = iVar40 + -1;
        }
        uVar30 = 0;
        uVar36 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar36 = uVar30;
        }
        iVar21 = 0;
        do {
          if (uVar36 == uVar30) goto LAB_1456b68d5;
          iVar21 = iVar21 + 0x20;
          uVar44 = puVar29[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar44 == 0);
      }
      else {
        uVar30 = 0;
        iVar21 = 0;
      }
      uVar36 = (ulonglong)(-uVar44 & uVar44);
      uVar42 = uVar36 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar42 != 0) {
        for (; uVar42 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar33 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar40 <= iVar33) {
        iVar33 = iVar40;
      }
    }
    if (iVar33 < iVar40) {
      uVar44 = 0xffffffff;
      do {
        lVar25 = *(longlong *)(lVar27 + 0xa8);
        lVar41 = (longlong)iVar33 * 0x38;
        uVar22 = ((uint)(*(ulonglong *)(lVar25 + lVar41) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar25 + lVar41) >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar42 = (longlong)(int)(uVar22 >> 0x10 ^ uVar22) & (longlong)*(int *)(lVar27 + 0xf0) - 1U;
        iVar40 = (int)uVar42;
        *(int *)(lVar25 + 0x34 + lVar41) = iVar40;
        lVar38 = *(longlong *)(lVar27 + 0xe8);
        if (*(longlong *)(lVar27 + 0xe8) == 0) {
          lVar38 = lVar23;
        }
        *(undefined4 *)(lVar25 + 0x30 + lVar41) =
             *(undefined4 *)(lVar38 + ((longlong)*(int *)(lVar27 + 0xf0) - 1U & uVar42) * 4);
        lVar25 = *(longlong *)(lVar27 + 0xe8);
        if (*(longlong *)(lVar27 + 0xe8) == 0) {
          lVar25 = lVar23;
        }
        *(int *)(lVar25 + ((longlong)iVar40 & (longlong)*(int *)(lVar27 + 0xf0) - 1U) * 4) = iVar33;
        uVar44 = ~(uint)uVar36 & uVar44;
        puVar29 = *(uint **)(lVar27 + 200);
        if (*(uint **)(lVar27 + 200) == (uint *)0x0) {
          puVar29 = puVar45;
        }
        iVar40 = *(int *)(lVar27 + 0xd0);
        iVar33 = (int)uVar30;
        lVar25 = (longlong)iVar33;
        uVar22 = puVar29[lVar25] & uVar44;
        if (uVar22 == 0) {
          iVar31 = iVar40 + 0x1e;
          if (-1 < iVar40 + -1) {
            iVar31 = iVar40 + -1;
          }
          iVar31 = iVar31 >> 5;
          iVar32 = iVar31;
          if (iVar31 < iVar33) {
            iVar32 = iVar33;
          }
          if (iVar31 <= iVar33) break;
          lVar38 = 0;
          while( true ) {
            iVar21 = iVar21 + 0x20;
            uVar22 = puVar29[lVar25 + lVar38 + 1];
            if (uVar22 != 0) break;
            lVar38 = lVar38 + 1;
            if (iVar32 - lVar25 == lVar38) goto LAB_1456b68d5;
          }
          uVar30 = (ulonglong)(iVar33 + (int)lVar38 + 1);
          uVar44 = 0xffffffff;
        }
        uVar36 = (ulonglong)(-uVar22 & uVar22);
        uVar42 = uVar36 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar33 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      } while (iVar33 < iVar40);
    }
  }
LAB_1456b68d5:
  lVar23 = *plVar24 + (longlong)iVar37 * 0x38;
LAB_1456b60f6:
  puVar45 = (uint *)(lVar23 + 8);
  if (*(int *)(lVar23 + 0x28) < 1) {
    FUN_14471e8ca(puVar45,*(undefined2 *)(param_2 + 0xdc));
  }
  if (((!bVar46) || (uVar44 = *puVar45, -1 < (int)uVar44)) ||
     (uVar22 = uVar44 & 0x7fffffff, uVar22 == 0x7fffffff)) {
    bVar28 = *(byte *)((longlong)param_4 + 3);
    uVar7 = *param_4;
    iVar40 = (uint)uVar7 * (uint)bVar28;
    iVar37 = (uint)(byte)param_4[4] * iVar40;
    iVar40 = (uint)(byte)(*(char *)((longlong)param_4 + 9) + (byte)param_4[4]) * iVar40;
    if (iVar37 != iVar40) {
      bVar6 = *(byte *)((longlong)param_4 + 0xb);
      uVar8 = param_4[3];
      iVar33 = (uint)param_4[2] * (uint)bVar28 + (uint)(byte)param_4[5];
      iVar37 = iVar37 + iVar33;
      uVar19 = 0;
      uVar44 = 0;
      iVar21 = iVar37;
      do {
        FUN_1456b0b82(param_1,param_2,puVar45,iVar37,param_3);
        if ((int)*puVar45 < 0) {
          uVar22 = *puVar45 & 0x7fffffff;
        }
        else {
          lVar27 = *(longlong *)(lVar23 + 0x20);
          if (*(longlong *)(lVar23 + 0x20) == 0) {
            lVar27 = lVar23 + 0x10;
          }
          uVar22 = *(uint *)(lVar27 + (longlong)iVar37 * 4);
        }
        uVar44 = uVar44 + 1;
        if (uVar44 == bVar6) {
          uVar19 = uVar19 + 1;
          uVar44 = 0;
          iVar37 = 0;
          if (uVar19 == uVar8) {
            uVar19 = uVar44;
            iVar37 = ((uint)uVar7 - (uint)uVar8) * (uint)bVar28;
          }
          iVar21 = iVar37 + iVar21 + (uint)bVar28;
        }
        bVar46 = (bool)(bVar46 & uVar22 == param_3);
        iVar37 = uVar44 + iVar21;
      } while (iVar37 != iVar40 + iVar33);
    }
    if (!bVar46) {
      return;
    }
    FUN_14471e924(puVar45);
    return;
  }
  if ((param_3 == 8) && (uVar22 == 8)) {
    uVar22 = 8;
LAB_1456b6167:
    uVar44 = uVar22 | param_3;
    if (((uVar22 | param_3) & 0xfffff53c) != 0) {
      uVar44 = param_3;
    }
    if (uVar44 == uVar22) {
LAB_1456b6180:
      *puVar45 = uVar22 | 0x80000000;
      return;
    }
  }
  else {
    lVar27 = *(longlong *)(param_2 + 0x28);
    if ((lVar27 != 0) && (((uVar44 | param_3) & 8) != 0)) {
      if ((param_3 & 8) != 0) {
        plVar24 = (longlong *)(param_2 + 0x28);
        if ((uVar44 & 8) == 0) {
          plVar24 = (longlong *)(param_2 + 0x20);
        }
        FUN_144703b84(param_1,*plVar24,lVar27);
        *(uint *)(lVar23 + 0xc) = *(uint *)(lVar23 + 0xc) & 0x80000000 | uVar22;
        return;
      }
      if ((uVar44 & 8) == 0) {
        lVar27 = *(longlong *)(param_2 + 0x20);
      }
      FUN_144703b84(param_1,lVar27);
      uVar22 = *(uint *)(lVar23 + 0xc) & 0x7fffffff;
      if (uVar22 == 0x7fffffff) {
        FUN_14736cbc2(param_1,param_2,param_3,0xffffffff,puVar45);
        return;
      }
    }
    if ((param_3 == 0x20) && (uVar22 == 0x10)) {
      uVar22 = (uint)(DAT_14ca76990 == 0) * 0x10 + 0x10;
      goto LAB_1456b6180;
    }
    if (param_3 != 0) goto LAB_1456b6167;
    uVar44 = 0;
  }
  if (uVar22 == uVar44) goto LAB_1456b6ca6;
  FUN_144715808(param_1 + 0x31,param_2,uVar22,uVar44,0xffffffff);
  lVar27 = param_1[0x33];
  if (lVar27 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar27 = param_1[0x33];
  }
  if (*(longlong *)(param_2 + 0xe0) == 0) {
    if ((*(byte *)(param_2 + 0xdf) & 2) != 0) {
      lVar23 = *(longlong *)(param_2 + 0x30);
      if (lVar23 == 0) {
        plVar24 = (longlong *)(param_2 + 0x38);
      }
      else {
        plVar24 = (longlong *)(lVar23 + 0x70);
        if (*(char *)(lVar23 + 0x81) == '\0') goto LAB_1456b6c94;
      }
      lVar23 = *plVar24;
      if (((lVar23 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar23 + 8) != 0)) {
        puVar29 = *(uint **)(lVar27 + 0x10);
        if (*(char *)(lVar23 + 0x28 + (ulonglong)*puVar29) == '\0') {
          *(undefined1 *)(lVar23 + 0x28 + (ulonglong)*puVar29) = 1;
          pvVar43 = *(void **)(puVar29 + 2);
          if (pvVar43 == (void *)0x0) {
            uVar19 = puVar29[4];
LAB_1456b778a:
            uVar22 = 0x1000;
            if (uVar19 != 0) {
              uVar22 = (int)((float)(int)uVar19 * 0.5 + (float)(int)uVar19);
            }
            puVar29[4] = uVar22;
            lVar27 = -1;
            if (-1 < (int)uVar22) {
              lVar27 = (longlong)(int)uVar22 * 8 + (ulonglong)((longlong)(int)uVar22 * 8 == 0);
            }
            pvVar26 = (void *)FUN_14001cc68(lVar27,0x10);
            if ((pvVar43 == (void *)0x0) || (pvVar26 == (void *)0x0)) {
              *(void **)(puVar29 + 2) = pvVar26;
              pvVar43 = pvVar26;
              if (pvVar26 == (void *)0x0) {
                *(undefined1 *)((longlong)puVar29 + 0x19) = 1;
                goto LAB_1456b6c94;
              }
            }
            else {
              memcpy(pvVar26,pvVar43,(longlong)(int)puVar29[5] << 3);
              FUN_1400020a8(pvVar43);
              *(void **)(puVar29 + 2) = pvVar26;
              pvVar43 = pvVar26;
            }
          }
          else {
            uVar19 = puVar29[4];
            if ((int)uVar19 <= (int)puVar29[5]) goto LAB_1456b778a;
          }
          uVar19 = puVar29[5];
          puVar29[5] = uVar19 + 1;
          *(longlong *)((longlong)pvVar43 + (longlong)(int)uVar19 * 8) = lVar23;
        }
      }
    }
  }
  else {
    if (*(int *)(lVar27 + 0x1a4) == 0) {
      iVar37 = *(int *)(lVar27 + 0x178);
      *(int *)(lVar27 + 0x178) = iVar37 + 1;
      if (*(int *)(lVar27 + 0x17c) == iVar37) {
        FUN_1446efaca((longlong *)(lVar27 + 0x170),iVar37);
      }
      iVar40 = *(int *)(lVar27 + 0x198);
      if (iVar40 == 0) {
        iVar21 = -1;
      }
      else {
        iVar21 = iVar40 + 0x1e;
        if (-1 < iVar40 + -1) {
          iVar21 = iVar40 + -1;
        }
        iVar21 = iVar21 >> 5;
      }
      lVar23 = lVar27 + 0x180;
      iVar33 = iVar40 + 1;
      iVar31 = iVar40 + 0x1f;
      if (-1 < iVar40) {
        iVar31 = iVar40;
      }
      if (iVar31 >> 5 == iVar21) {
        *(int *)(lVar27 + 0x198) = iVar33;
      }
      else {
        if (*(int *)(lVar27 + 0x19c) <= iVar40) {
          if (iVar40 + 0x20U < 0xa0) {
            iVar33 = 0x80;
            iVar21 = iVar40;
          }
          else {
            uVar22 = iVar40 + 0x20U >> 5;
            if (*(int *)(lVar27 + 0x19c) + 0x1fU < 0xa0) {
              uVar34 = 4;
              if (4 < uVar22) {
                uVar34 = uVar22;
              }
            }
            else {
              uVar34 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
            }
            uVar30 = FUN_144a3809e(uVar34 << 2,0);
            iVar21 = (int)(uVar30 >> 2);
            iVar33 = -0x20;
            if ((int)uVar22 <= iVar21) {
              iVar33 = iVar21 << 5;
            }
            iVar21 = *(int *)(lVar27 + 0x198);
          }
          *(int *)(lVar27 + 0x19c) = iVar33;
          FUN_1446efbd8(lVar23,iVar21);
          iVar33 = *(int *)(lVar27 + 0x198) + 1;
        }
        iVar21 = iVar33 + 0x1f;
        if (-1 < iVar33) {
          iVar21 = iVar33;
        }
        *(int *)(lVar27 + 0x198) = iVar33;
        if (iVar33 % 0x20 != 0) {
          lVar25 = *(longlong *)(lVar27 + 400);
          if (*(longlong *)(lVar27 + 400) == 0) {
            lVar25 = lVar23;
          }
          bVar28 = -(char)(iVar33 % 0x20);
          *(uint *)(lVar25 + (longlong)(iVar21 >> 5) * 4) =
               (uint)(*(int *)(lVar25 + (longlong)(iVar21 >> 5) * 4) << (bVar28 & 0x1f)) >>
               (bVar28 & 0x1f);
        }
      }
      lVar25 = (longlong)iVar37;
      if (*(longlong *)(lVar27 + 400) != 0) {
        lVar23 = *(longlong *)(lVar27 + 400);
      }
      bVar28 = (byte)iVar40 & 0x1f;
      puVar29 = (uint *)(lVar23 + (longlong)(iVar31 >> 5) * 4);
      *puVar29 = *puVar29 & (-2 << bVar28 | 0xfffffffeU >> 0x20 - bVar28);
    }
    else {
      iVar37 = *(int *)(lVar27 + 0x1a0);
      lVar25 = (longlong)iVar37;
      iVar40 = *(int *)(*(longlong *)(lVar27 + 0x170) + 4 + lVar25 * 0x10);
      *(int *)(lVar27 + 0x1a0) = iVar40;
      iVar21 = *(int *)(lVar27 + 0x1a4) + -1;
      *(int *)(lVar27 + 0x1a4) = iVar21;
      if (iVar21 != 0) {
        *(undefined4 *)(*(longlong *)(lVar27 + 0x170) + (longlong)iVar40 * 0x10) = 0xffffffff;
      }
    }
    puVar29 = (uint *)(lVar27 + 0x180);
    uVar22 = 1 << ((byte)iVar37 & 0x1f);
    puVar35 = *(uint **)(lVar27 + 400);
    if (*(uint **)(lVar27 + 400) == (uint *)0x0) {
      puVar35 = puVar29;
    }
    iVar40 = iVar37 + 0x1f;
    if (-1 < iVar37) {
      iVar40 = iVar37;
    }
    puVar35[iVar40 >> 5] = puVar35[iVar40 >> 5] | uVar22;
    uVar34 = 1;
    lVar23 = *(longlong *)(lVar27 + 0x170);
    lVar25 = lVar25 * 0x10;
    *(ulonglong *)(lVar23 + lVar25) = param_2;
    *(undefined4 *)(lVar23 + 8 + lVar25) = 0xffffffff;
    uVar39 = *(int *)(lVar27 + 0x178) - *(int *)(lVar27 + 0x1a4);
    if ((uVar39 != 0) && (uVar39 != 1)) {
      lVar38 = lVar27 + 0x1a8;
      if (*(longlong *)(lVar27 + 0x1b0) != 0) {
        lVar38 = *(longlong *)(lVar27 + 0x1b0);
      }
      iVar21 = *(int *)(lVar38 + (ulonglong)(*(int *)(lVar27 + 0x1b8) - 1U & uVar19) * 4);
      if (iVar21 != -1) {
        lVar38 = *(longlong *)(lVar27 + 0x170);
        do {
          puVar4 = (ulonglong *)(lVar38 + (longlong)iVar21 * 0x10);
          if (*(ulonglong *)(lVar38 + (longlong)iVar21 * 0x10) == param_2) {
            *puVar4 = param_2;
            lVar23 = *(longlong *)(lVar27 + 0x170);
            if (*(int *)(lVar27 + 0x1a4) != 0) {
              *(int *)(lVar23 + (longlong)*(int *)(lVar27 + 0x1a0) * 0x10) = iVar37;
            }
            *(undefined4 *)(lVar23 + (longlong)iVar37 * 0x10) = 0xffffffff;
            uVar20 = 0xffffffff;
            if (0 < *(int *)(lVar27 + 0x1a4)) {
              uVar20 = *(undefined4 *)(lVar27 + 0x1a0);
            }
            *(undefined4 *)(lVar23 + (longlong)iVar37 * 0x10 + 4) = uVar20;
            *(int *)(lVar27 + 0x1a0) = iVar37;
            *(int *)(lVar27 + 0x1a4) = *(int *)(lVar27 + 0x1a4) + 1;
            if (*(uint **)(lVar27 + 400) != (uint *)0x0) {
              puVar29 = *(uint **)(lVar27 + 400);
            }
            puVar29[iVar40 >> 5] = puVar29[iVar40 >> 5] & ~uVar22;
            goto LAB_1456b6c94;
          }
          iVar21 = (int)puVar4[1];
        } while (iVar21 != -1);
      }
    }
    if (3 < uVar39) {
      uVar30 = (ulonglong)(uVar39 & 0xfffffffe) + 0xf;
      lVar38 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      uVar34 = 1 << ((byte)lVar38 & 0x1f);
    }
    if (((int)uVar39 < 1) || ((int)uVar34 <= *(int *)(lVar27 + 0x1b8))) {
      uVar19 = *(int *)(lVar27 + 0x1b8) - 1U & uVar19;
      *(uint *)(lVar23 + lVar25 + 0xc) = uVar19;
      lVar38 = *(longlong *)(lVar27 + 0x1b0);
      if (*(longlong *)(lVar27 + 0x1b0) == 0) {
        lVar38 = lVar27 + 0x1a8;
      }
      *(undefined4 *)(lVar23 + lVar25 + 8) =
           *(undefined4 *)
            (lVar38 + ((longlong)*(int *)(lVar27 + 0x1b8) - 1U & (longlong)(int)uVar19) * 4);
      lVar23 = *(longlong *)(lVar27 + 0x1b0);
      if (*(longlong *)(lVar27 + 0x1b0) == 0) {
        lVar23 = lVar27 + 0x1a8;
      }
      *(int *)(lVar23 + ((longlong)*(int *)(lVar27 + 0x1b8) - 1U & (longlong)(int)uVar19) * 4) =
           iVar37;
      goto LAB_1456b6c94;
    }
    *(uint *)(lVar27 + 0x1b8) = uVar34;
    plVar24 = (longlong *)(lVar27 + 0x1b0);
    if (*(longlong *)(lVar27 + 0x1b0) != 0) {
      FUN_1446efa72(plVar24,0,0,4);
      uVar34 = *(uint *)(lVar27 + 0x1b8);
      if (uVar34 == 0) goto LAB_1456b6c94;
    }
    lVar23 = lVar27 + 0x1a8;
    if (uVar34 == 1) {
      if (*plVar24 != 0) {
        FUN_1446efa72(plVar24,0,0,4);
      }
LAB_1456b6e38:
      uVar19 = 0;
      do {
        lVar25 = *(longlong *)(lVar27 + 0x1b0);
        if (*(longlong *)(lVar27 + 0x1b0) == 0) {
          lVar25 = lVar23;
        }
        *(undefined4 *)(lVar25 + (ulonglong)(*(int *)(lVar27 + 0x1b8) + 0x7fffffffU & uVar19) * 4) =
             0xffffffff;
        uVar19 = uVar19 + 1;
      } while (uVar34 != uVar19);
    }
    else {
      FUN_1446efa72(plVar24,0,uVar34,4);
      if (0 < (int)uVar34) goto LAB_1456b6e38;
    }
    iVar37 = *(int *)(lVar27 + 0x198);
    if (iVar37 == 0) {
      uVar30 = 0;
      uVar36 = 1;
      iVar40 = 0;
      iVar21 = 0;
    }
    else {
      puVar35 = *(uint **)(lVar27 + 400);
      if (*(uint **)(lVar27 + 400) == (uint *)0x0) {
        puVar35 = puVar29;
      }
      uVar19 = *puVar35;
      if (uVar19 == 0) {
        iVar40 = iVar37 + 0x1e;
        if (-1 < iVar37 + -1) {
          iVar40 = iVar37 + -1;
        }
        uVar30 = 0;
        uVar36 = (ulonglong)(uint)(iVar40 >> 5);
        if (iVar40 >> 5 < 1) {
          uVar36 = uVar30;
        }
        iVar21 = 0;
        do {
          if (uVar36 == uVar30) goto LAB_1456b6c94;
          iVar21 = iVar21 + 0x20;
          uVar19 = puVar35[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar30 = 0;
        iVar21 = 0;
      }
      uVar36 = (ulonglong)(-uVar19 & uVar19);
      uVar42 = uVar36 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar42 != 0) {
        for (; uVar42 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar40 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar37 <= iVar40) {
        iVar40 = iVar37;
      }
    }
    if (iVar40 < iVar37) {
      uVar19 = 0xffffffff;
      do {
        lVar25 = *(longlong *)(lVar27 + 0x170);
        lVar41 = (longlong)iVar40 * 0x10;
        uVar22 = ((uint)(*(ulonglong *)(lVar25 + lVar41) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar25 + lVar41) >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar42 = (longlong)(int)(uVar22 >> 0x10 ^ uVar22) & (longlong)*(int *)(lVar27 + 0x1b8) - 1U;
        iVar37 = (int)uVar42;
        *(int *)(lVar25 + 0xc + lVar41) = iVar37;
        lVar38 = *(longlong *)(lVar27 + 0x1b0);
        if (*(longlong *)(lVar27 + 0x1b0) == 0) {
          lVar38 = lVar23;
        }
        *(undefined4 *)(lVar25 + 8 + lVar41) =
             *(undefined4 *)(lVar38 + ((longlong)*(int *)(lVar27 + 0x1b8) - 1U & uVar42) * 4);
        lVar25 = *(longlong *)(lVar27 + 0x1b0);
        if (*(longlong *)(lVar27 + 0x1b0) == 0) {
          lVar25 = lVar23;
        }
        *(int *)(lVar25 + ((longlong)iVar37 & (longlong)*(int *)(lVar27 + 0x1b8) - 1U) * 4) = iVar40
        ;
        uVar19 = ~(uint)uVar36 & uVar19;
        puVar35 = *(uint **)(lVar27 + 400);
        if (*(uint **)(lVar27 + 400) == (uint *)0x0) {
          puVar35 = puVar29;
        }
        iVar37 = *(int *)(lVar27 + 0x198);
        iVar40 = (int)uVar30;
        lVar25 = (longlong)iVar40;
        uVar22 = puVar35[lVar25] & uVar19;
        if (uVar22 == 0) {
          iVar33 = iVar37 + 0x1e;
          if (-1 < iVar37 + -1) {
            iVar33 = iVar37 + -1;
          }
          iVar33 = iVar33 >> 5;
          iVar31 = iVar33;
          if (iVar33 < iVar40) {
            iVar31 = iVar40;
          }
          if (iVar33 <= iVar40) break;
          lVar38 = 0;
          while( true ) {
            iVar21 = iVar21 + 0x20;
            uVar22 = puVar35[lVar25 + lVar38 + 1];
            if (uVar22 != 0) break;
            lVar38 = lVar38 + 1;
            if (iVar31 - lVar25 == lVar38) goto LAB_1456b6c94;
          }
          uVar30 = (ulonglong)(iVar40 + (int)lVar38 + 1);
          uVar19 = 0xffffffff;
        }
        uVar36 = (ulonglong)(-uVar22 & uVar22);
        uVar42 = uVar36 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar40 = (iVar21 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      } while (iVar40 < iVar37);
    }
  }
LAB_1456b6c94:
  if ((DAT_14c760b78 == 0) && ((int)param_1[0x32] != 0)) {
    lVar27 = param_1[0x33];
    if (lVar27 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar27 = param_1[0x33];
    }
    FUN_144ad5b2c(param_1 + 0x31,lVar27,param_1 + 7);
  }
LAB_1456b6ca6:
  if ((*(byte *)(param_2 + 0xdf) & 1) == 0) {
    return;
  }
  if (puVar45 == (uint *)0x0) {
    lVar27 = param_1[0x33];
    if (lVar27 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar27 = param_1[0x33];
    }
    puVar45 = (uint *)FUN_1456b17c6(lVar27,param_2);
  }
  *puVar45 = uVar44 | 0x80000000;
  *(byte *)((longlong)puVar45 + 7) = *(byte *)((longlong)puVar45 + 7) | 0x80;
  return;
}



// FUNCTION 1456b7b28 FUN_1456b7b28 body=12260 status=ok
// SIG undefined FUN_1456b7b28(void)

void FUN_1456b7b28(longlong *param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *plVar27;
  uint *puVar28;
  void *pvVar29;
  void *pvVar30;
  byte bVar31;
  ulonglong uVar32;
  uint *puVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  int iVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  uint uVar48;
  uint *puVar49;
  longlong lVar50;
  void *local_98;
  
  uVar6 = *(ulonglong *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x5c) != 4) {
    switch(*(int *)(param_2 + 0x5c)) {
    case 5:
    case 7:
      FUN_1456b5f60(param_1,uVar6,param_3,param_2 + 0x28);
      return;
    case 6:
    case 8:
      break;
    default:
      FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12CommandList.cpp",0x240,
                    L"Unsupported resource dimension %d");
      return;
    }
  }
  iVar41 = *(int *)(param_2 + 0x60);
  if (param_1[0x33] == 0) {
    if (*(code **)(*param_1 + 8) == FUN_144703254) {
      FUN_1400248de(param_1);
      FUN_14471eb70(param_1 + 0x6e8);
    }
    else {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  lVar47 = param_1[0x33];
  if (*(longlong *)(uVar6 + 0xe0) == 0) {
    if ((*(byte *)(uVar6 + 0xdf) & 2) != 0) {
      lVar24 = *(longlong *)(uVar6 + 0x30);
      if (lVar24 == 0) {
        plVar23 = (longlong *)(uVar6 + 0x38);
      }
      else {
        plVar23 = (longlong *)(lVar24 + 0x70);
        if (*(char *)(lVar24 + 0x81) == '\0') goto LAB_1456b7bdb;
      }
      lVar24 = *plVar23;
      if (((lVar24 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar24 + 8) != 0)) {
        puVar49 = *(uint **)(lVar47 + 0x10);
        if (*(char *)(lVar24 + 0x28 + (ulonglong)*puVar49) == '\0') {
          *(undefined1 *)(lVar24 + 0x28 + (ulonglong)*puVar49) = 1;
          pvVar30 = *(void **)(puVar49 + 2);
          if (pvVar30 == (void *)0x0) {
            uVar18 = puVar49[4];
LAB_1456b9f58:
            uVar48 = 0x1000;
            if (uVar18 != 0) {
              uVar48 = (int)((float)(int)uVar18 * 0.5 + (float)(int)uVar18);
            }
            puVar49[4] = uVar48;
            lVar47 = -1;
            if (-1 < (int)uVar48) {
              lVar47 = (longlong)(int)uVar48 * 8 + (ulonglong)((longlong)(int)uVar48 * 8 == 0);
            }
            pvVar29 = (void *)FUN_14001cc68(lVar47,0x10);
            if ((pvVar30 == (void *)0x0) || (pvVar29 == (void *)0x0)) {
              *(void **)(puVar49 + 2) = pvVar29;
              pvVar30 = pvVar29;
              if (pvVar29 == (void *)0x0) {
                *(undefined1 *)((longlong)puVar49 + 0x19) = 1;
                goto LAB_1456b7bdb;
              }
            }
            else {
              memcpy(pvVar29,pvVar30,(longlong)(int)puVar49[5] << 3);
              FUN_1400020a8(pvVar30);
              *(void **)(puVar49 + 2) = pvVar29;
              pvVar30 = pvVar29;
            }
          }
          else {
            uVar18 = puVar49[4];
            if ((int)uVar18 <= (int)puVar49[5]) goto LAB_1456b9f58;
          }
          uVar18 = puVar49[5];
          puVar49[5] = uVar18 + 1;
          *(longlong *)((longlong)pvVar30 + (longlong)(int)uVar18 * 8) = lVar24;
        }
      }
    }
  }
  else {
    if (*(int *)(lVar47 + 0x1a4) == 0) {
      iVar34 = *(int *)(lVar47 + 0x178);
      *(int *)(lVar47 + 0x178) = iVar34 + 1;
      if (*(int *)(lVar47 + 0x17c) == iVar34) {
        FUN_1446efaca((longlong *)(lVar47 + 0x170),iVar34);
      }
      iVar37 = *(int *)(lVar47 + 0x198);
      if (iVar37 == 0) {
        iVar20 = -1;
      }
      else {
        iVar20 = iVar37 + 0x1e;
        if (-1 < iVar37 + -1) {
          iVar20 = iVar37 + -1;
        }
        iVar20 = iVar20 >> 5;
      }
      lVar24 = lVar47 + 0x180;
      iVar36 = iVar37 + 1;
      iVar35 = iVar37 + 0x1f;
      if (-1 < iVar37) {
        iVar35 = iVar37;
      }
      if (iVar35 >> 5 == iVar20) {
        *(int *)(lVar47 + 0x198) = iVar36;
      }
      else {
        if (*(int *)(lVar47 + 0x19c) <= iVar37) {
          iVar20 = iVar37;
          if (iVar37 + 0x20U < 0xa0) {
            iVar36 = 0x80;
          }
          else {
            uVar18 = iVar37 + 0x20U >> 5;
            if (*(int *)(lVar47 + 0x19c) + 0x1fU < 0xa0) {
              uVar48 = 4;
              if (4 < uVar18) {
                uVar48 = uVar18;
              }
            }
            else {
              uVar48 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
            }
            uVar32 = (ulonglong)(uVar48 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar21 = (uint)(uVar32 + 0xf);
                if (uVar48 < 0x1ffd) {
                  uVar32 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar21 >> 4]];
                }
                else {
                  uVar39 = uVar32 + 0xf & 0xfffffffffffffff0;
                  if (uVar39 < 0x7ff1) {
                    bVar31 = (&DAT_14c841e00)[uVar21 >> 4];
                    uVar40 = 0x32;
                    if (0x32 < bVar31) {
                      uVar40 = (ulonglong)bVar31;
                    }
                    uVar42 = 0x32 - (ulonglong)bVar31;
                    do {
                      uVar32 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar42 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar42 & 0xffffffff] & 0xf) == 0) goto LAB_1456b9d53;
                      lVar50 = uVar40 + 1 + uVar42;
                      uVar42 = uVar42 - 1;
                    } while (lVar50 != 0x33);
                  }
                  uVar32 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar32 = (ulonglong)DAT_14c841df8;
                  }
                  uVar32 = -uVar32 & (uVar39 + uVar32) - 1;
                }
              }
              else {
                uVar32 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar32,0);
                iVar20 = *(int *)(lVar47 + 0x198);
              }
            }
LAB_1456b9d53:
            iVar22 = (int)(uVar32 >> 2);
            iVar36 = -0x20;
            if ((int)uVar18 <= iVar22) {
              iVar36 = iVar22 << 5;
            }
          }
          *(int *)(lVar47 + 0x19c) = iVar36;
          FUN_1446efbd8(lVar24,iVar20);
          iVar36 = *(int *)(lVar47 + 0x198) + 1;
        }
        iVar20 = iVar36 + 0x1f;
        if (-1 < iVar36) {
          iVar20 = iVar36;
        }
        *(int *)(lVar47 + 0x198) = iVar36;
        if (iVar36 % 0x20 != 0) {
          lVar50 = *(longlong *)(lVar47 + 400);
          if (*(longlong *)(lVar47 + 400) == 0) {
            lVar50 = lVar24;
          }
          bVar31 = -(char)(iVar36 % 0x20);
          *(uint *)(lVar50 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)(lVar50 + (longlong)(iVar20 >> 5) * 4) << (bVar31 & 0x1f)) >>
               (bVar31 & 0x1f);
        }
      }
      lVar50 = (longlong)iVar34;
      if (*(longlong *)(lVar47 + 400) != 0) {
        lVar24 = *(longlong *)(lVar47 + 400);
      }
      bVar31 = (byte)iVar37 & 0x1f;
      puVar49 = (uint *)(lVar24 + (longlong)(iVar35 >> 5) * 4);
      *puVar49 = *puVar49 & (-2 << bVar31 | 0xfffffffeU >> 0x20 - bVar31);
    }
    else {
      iVar34 = *(int *)(lVar47 + 0x1a0);
      lVar50 = (longlong)iVar34;
      iVar37 = *(int *)(*(longlong *)(lVar47 + 0x170) + 4 + lVar50 * 0x10);
      *(int *)(lVar47 + 0x1a0) = iVar37;
      iVar20 = *(int *)(lVar47 + 0x1a4) + -1;
      *(int *)(lVar47 + 0x1a4) = iVar20;
      if (iVar20 != 0) {
        *(undefined4 *)(*(longlong *)(lVar47 + 0x170) + (longlong)iVar37 * 0x10) = 0xffffffff;
      }
    }
    puVar49 = (uint *)(lVar47 + 0x180);
    uVar18 = 1;
    uVar48 = 1 << ((byte)iVar34 & 0x1f);
    puVar28 = *(uint **)(lVar47 + 400);
    if (*(uint **)(lVar47 + 400) == (uint *)0x0) {
      puVar28 = puVar49;
    }
    iVar37 = iVar34 + 0x1f;
    if (-1 < iVar34) {
      iVar37 = iVar34;
    }
    puVar28[iVar37 >> 5] = puVar28[iVar37 >> 5] | uVar48;
    lVar24 = *(longlong *)(lVar47 + 0x170);
    lVar50 = lVar50 * 0x10;
    *(ulonglong *)(lVar24 + lVar50) = uVar6;
    *(undefined4 *)(lVar24 + 8 + lVar50) = 0xffffffff;
    uVar21 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    uVar21 = uVar21 >> 0x10 ^ uVar21;
    uVar38 = *(int *)(lVar47 + 0x178) - *(int *)(lVar47 + 0x1a4);
    if ((uVar38 != 0) && (uVar38 != 1)) {
      lVar26 = lVar47 + 0x1a8;
      if (*(longlong *)(lVar47 + 0x1b0) != 0) {
        lVar26 = *(longlong *)(lVar47 + 0x1b0);
      }
      iVar20 = *(int *)(lVar26 + (ulonglong)(*(int *)(lVar47 + 0x1b8) - 1U & uVar21) * 4);
      if (iVar20 != -1) {
        lVar26 = *(longlong *)(lVar47 + 0x170);
        do {
          puVar3 = (ulonglong *)(lVar26 + (longlong)iVar20 * 0x10);
          if (*(ulonglong *)(lVar26 + (longlong)iVar20 * 0x10) == uVar6) {
            *puVar3 = uVar6;
            lVar24 = *(longlong *)(lVar47 + 0x170);
            if (*(int *)(lVar47 + 0x1a4) != 0) {
              *(int *)(lVar24 + (longlong)*(int *)(lVar47 + 0x1a0) * 0x10) = iVar34;
            }
            *(undefined4 *)(lVar24 + (longlong)iVar34 * 0x10) = 0xffffffff;
            uVar19 = 0xffffffff;
            if (0 < *(int *)(lVar47 + 0x1a4)) {
              uVar19 = *(undefined4 *)(lVar47 + 0x1a0);
            }
            *(undefined4 *)(lVar24 + (longlong)iVar34 * 0x10 + 4) = uVar19;
            *(int *)(lVar47 + 0x1a0) = iVar34;
            *(int *)(lVar47 + 0x1a4) = *(int *)(lVar47 + 0x1a4) + 1;
            if (*(uint **)(lVar47 + 400) != (uint *)0x0) {
              puVar49 = *(uint **)(lVar47 + 400);
            }
            puVar49[iVar37 >> 5] = puVar49[iVar37 >> 5] & ~uVar48;
            goto LAB_1456b7bdb;
          }
          iVar20 = (int)puVar3[1];
        } while (iVar20 != -1);
      }
    }
    if (3 < uVar38) {
      uVar32 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
      lVar26 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar26 & 0x1f);
    }
    if (((int)uVar38 < 1) || ((int)uVar18 <= *(int *)(lVar47 + 0x1b8))) {
      uVar21 = *(int *)(lVar47 + 0x1b8) - 1U & uVar21;
      *(uint *)(lVar24 + lVar50 + 0xc) = uVar21;
      lVar26 = *(longlong *)(lVar47 + 0x1b0);
      if (*(longlong *)(lVar47 + 0x1b0) == 0) {
        lVar26 = lVar47 + 0x1a8;
      }
      *(undefined4 *)(lVar24 + lVar50 + 8) =
           *(undefined4 *)
            (lVar26 + ((longlong)*(int *)(lVar47 + 0x1b8) - 1U & (longlong)(int)uVar21) * 4);
      lVar24 = *(longlong *)(lVar47 + 0x1b0);
      if (*(longlong *)(lVar47 + 0x1b0) == 0) {
        lVar24 = lVar47 + 0x1a8;
      }
      *(int *)(lVar24 + ((longlong)*(int *)(lVar47 + 0x1b8) - 1U & (longlong)(int)uVar21) * 4) =
           iVar34;
      goto LAB_1456b7bdb;
    }
    *(uint *)(lVar47 + 0x1b8) = uVar18;
    plVar23 = (longlong *)(lVar47 + 0x1b0);
    if (*(longlong *)(lVar47 + 0x1b0) != 0) {
      FUN_1446efa72(plVar23,0,0,4);
      uVar18 = *(uint *)(lVar47 + 0x1b8);
      if (uVar18 == 0) goto LAB_1456b7bdb;
    }
    lVar24 = lVar47 + 0x1a8;
    if (uVar18 == 1) {
      if (*plVar23 != 0) {
        FUN_1446efa72(plVar23,0,0,4);
      }
LAB_1456b7f87:
      uVar48 = 0;
      do {
        lVar50 = *(longlong *)(lVar47 + 0x1b0);
        if (*(longlong *)(lVar47 + 0x1b0) == 0) {
          lVar50 = lVar24;
        }
        *(undefined4 *)(lVar50 + (ulonglong)(*(int *)(lVar47 + 0x1b8) + 0x7fffffffU & uVar48) * 4) =
             0xffffffff;
        uVar48 = uVar48 + 1;
      } while (uVar18 != uVar48);
    }
    else {
      FUN_1446efa72(plVar23,0,uVar18,4);
      if (0 < (int)uVar18) goto LAB_1456b7f87;
    }
    iVar34 = *(int *)(lVar47 + 0x198);
    if (iVar34 == 0) {
      uVar32 = 0;
      uVar39 = 1;
      iVar37 = 0;
      iVar20 = 0;
    }
    else {
      puVar28 = *(uint **)(lVar47 + 400);
      if (*(uint **)(lVar47 + 400) == (uint *)0x0) {
        puVar28 = puVar49;
      }
      uVar18 = *puVar28;
      if (uVar18 == 0) {
        iVar37 = iVar34 + 0x1e;
        if (-1 < iVar34 + -1) {
          iVar37 = iVar34 + -1;
        }
        uVar32 = 0;
        uVar39 = (ulonglong)(uint)(iVar37 >> 5);
        if (iVar37 >> 5 < 1) {
          uVar39 = uVar32;
        }
        iVar20 = 0;
        do {
          if (uVar39 == uVar32) goto LAB_1456b7bdb;
          iVar20 = iVar20 + 0x20;
          uVar18 = puVar28[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar32 = 0;
        iVar20 = 0;
      }
      uVar39 = (ulonglong)(-uVar18 & uVar18);
      uVar40 = uVar39 * 2 + 1;
      lVar50 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar50 == 0; lVar50 = lVar50 + -1) {
        }
      }
      iVar37 = (iVar20 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
      if (iVar34 <= iVar37) {
        iVar37 = iVar34;
      }
    }
    if (iVar37 < iVar34) {
      uVar18 = 0xffffffff;
      do {
        lVar50 = *(longlong *)(lVar47 + 0x170);
        lVar43 = (longlong)iVar37 * 0x10;
        uVar48 = ((uint)(*(ulonglong *)(lVar50 + lVar43) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar50 + lVar43) >> 4)) * -0x7a143595;
        uVar48 = (uVar48 >> 0xd ^ uVar48) * -0x3d4d51cb;
        uVar40 = (longlong)(int)(uVar48 >> 0x10 ^ uVar48) & (longlong)*(int *)(lVar47 + 0x1b8) - 1U;
        iVar34 = (int)uVar40;
        *(int *)(lVar50 + 0xc + lVar43) = iVar34;
        lVar26 = *(longlong *)(lVar47 + 0x1b0);
        if (*(longlong *)(lVar47 + 0x1b0) == 0) {
          lVar26 = lVar24;
        }
        *(undefined4 *)(lVar50 + 8 + lVar43) =
             *(undefined4 *)(lVar26 + ((longlong)*(int *)(lVar47 + 0x1b8) - 1U & uVar40) * 4);
        lVar50 = *(longlong *)(lVar47 + 0x1b0);
        if (*(longlong *)(lVar47 + 0x1b0) == 0) {
          lVar50 = lVar24;
        }
        *(int *)(lVar50 + ((longlong)iVar34 & (longlong)*(int *)(lVar47 + 0x1b8) - 1U) * 4) = iVar37
        ;
        uVar18 = ~(uint)uVar39 & uVar18;
        puVar28 = *(uint **)(lVar47 + 400);
        if (*(uint **)(lVar47 + 400) == (uint *)0x0) {
          puVar28 = puVar49;
        }
        iVar34 = *(int *)(lVar47 + 0x198);
        iVar37 = (int)uVar32;
        lVar50 = (longlong)iVar37;
        uVar48 = puVar28[lVar50] & uVar18;
        if (uVar48 == 0) {
          iVar36 = iVar34 + 0x1e;
          if (-1 < iVar34 + -1) {
            iVar36 = iVar34 + -1;
          }
          iVar36 = iVar36 >> 5;
          iVar35 = iVar36;
          if (iVar36 < iVar37) {
            iVar35 = iVar37;
          }
          if (iVar36 <= iVar37) break;
          lVar26 = 0;
          while( true ) {
            iVar20 = iVar20 + 0x20;
            uVar48 = puVar28[lVar50 + lVar26 + 1];
            if (uVar48 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar35 - lVar50 == lVar26) goto LAB_1456b7bdb;
          }
          uVar32 = (ulonglong)(iVar37 + (int)lVar26 + 1);
          uVar18 = 0xffffffff;
        }
        uVar39 = (ulonglong)(-uVar48 & uVar48);
        uVar40 = uVar39 * 2 + 1;
        lVar50 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar50 == 0; lVar50 = lVar50 + -1) {
          }
        }
        iVar37 = (iVar20 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
      } while (iVar37 < iVar34);
    }
  }
LAB_1456b7bdb:
  lVar47 = param_1[0x33];
  if (lVar47 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar47 = param_1[0x33];
  }
  plVar23 = (longlong *)(lVar47 + 0xa8);
  uVar18 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  uVar18 = uVar18 >> 0x10 ^ uVar18;
  iVar34 = *(int *)(lVar47 + 0xb0);
  iVar37 = *(int *)(lVar47 + 0xdc);
  if (iVar34 != iVar37) {
    lVar24 = lVar47 + 0xe0;
    if (*(longlong *)(lVar47 + 0xe8) != 0) {
      lVar24 = *(longlong *)(lVar47 + 0xe8);
    }
    iVar20 = *(int *)(lVar24 + (ulonglong)(*(int *)(lVar47 + 0xf0) - 1U & uVar18) * 4);
    if (iVar20 != -1) {
      do {
        lVar24 = *plVar23 + (longlong)iVar20 * 0x38;
        if (*(ulonglong *)(*plVar23 + (longlong)iVar20 * 0x38) == uVar6) {
          if (lVar24 != 0) goto LAB_1456b7c8e;
          break;
        }
        iVar20 = *(int *)(lVar24 + 0x30);
      } while (iVar20 != -1);
    }
  }
  if (iVar37 == 0) {
    *(int *)(lVar47 + 0xb0) = iVar34 + 1;
    if (*(int *)(lVar47 + 0xb4) == iVar34) {
      FUN_1447030e2(plVar23,iVar34);
    }
    iVar37 = *(int *)(lVar47 + 0xd0);
    if (iVar37 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = iVar37 + 0x1e;
      if (-1 < iVar37 + -1) {
        iVar20 = iVar37 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    lVar50 = lVar47 + 0xb8;
    iVar36 = iVar37 + 1;
    iVar35 = iVar37 + 0x1f;
    if (-1 < iVar37) {
      iVar35 = iVar37;
    }
    if (iVar35 >> 5 == iVar20) {
      *(int *)(lVar47 + 0xd0) = iVar36;
    }
    else {
      if (*(int *)(lVar47 + 0xd4) <= iVar37) {
        iVar20 = iVar37;
        if (iVar37 + 0x20U < 0xa0) {
          iVar36 = 0x80;
        }
        else {
          uVar48 = iVar37 + 0x20U >> 5;
          if (*(int *)(lVar47 + 0xd4) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar48) {
              uVar21 = uVar48;
            }
          }
          else {
            uVar21 = uVar48 + (uVar48 * 3 >> 3) + 0x10;
          }
          uVar32 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar38 = (uint)(uVar32 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar32 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar38 >> 4]];
              }
              else {
                uVar39 = uVar32 + 0xf & 0xfffffffffffffff0;
                if (uVar39 < 0x7ff1) {
                  bVar31 = (&DAT_14c841e00)[uVar38 >> 4];
                  uVar40 = 0x32;
                  if (0x32 < bVar31) {
                    uVar40 = (ulonglong)bVar31;
                  }
                  uVar42 = 0x32 - (ulonglong)bVar31;
                  do {
                    uVar32 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar42 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar42 & 0xffffffff] & 0xf) == 0) goto LAB_1456b95a5;
                    lVar24 = uVar40 + 1 + uVar42;
                    uVar42 = uVar42 - 1;
                  } while (lVar24 != 0x33);
                }
                uVar32 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar32 = (ulonglong)DAT_14c841df8;
                }
                uVar32 = -uVar32 & (uVar39 + uVar32) - 1;
              }
            }
            else {
              uVar32 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar32,0);
              iVar20 = *(int *)(lVar47 + 0xd0);
            }
          }
LAB_1456b95a5:
          iVar22 = (int)(uVar32 >> 2);
          iVar36 = -0x20;
          if ((int)uVar48 <= iVar22) {
            iVar36 = iVar22 << 5;
          }
        }
        *(int *)(lVar47 + 0xd4) = iVar36;
        FUN_1446efbd8(lVar50,iVar20);
        iVar36 = *(int *)(lVar47 + 0xd0) + 1;
      }
      iVar20 = iVar36 + 0x1f;
      if (-1 < iVar36) {
        iVar20 = iVar36;
      }
      *(int *)(lVar47 + 0xd0) = iVar36;
      if (iVar36 % 0x20 != 0) {
        lVar24 = *(longlong *)(lVar47 + 200);
        if (*(longlong *)(lVar47 + 200) == 0) {
          lVar24 = lVar50;
        }
        bVar31 = -(char)(iVar36 % 0x20);
        *(uint *)(lVar24 + (longlong)(iVar20 >> 5) * 4) =
             (uint)(*(int *)(lVar24 + (longlong)(iVar20 >> 5) * 4) << (bVar31 & 0x1f)) >>
             (bVar31 & 0x1f);
      }
    }
    lVar24 = (longlong)iVar34;
    if (*(longlong *)(lVar47 + 200) != 0) {
      lVar50 = *(longlong *)(lVar47 + 200);
    }
    bVar31 = (byte)iVar37 & 0x1f;
    puVar49 = (uint *)(lVar50 + (longlong)(iVar35 >> 5) * 4);
    *puVar49 = *puVar49 & (-2 << bVar31 | 0xfffffffeU >> 0x20 - bVar31);
  }
  else {
    iVar34 = *(int *)(lVar47 + 0xd8);
    lVar24 = (longlong)iVar34;
    iVar20 = *(int *)(*(longlong *)(lVar47 + 0xa8) + 4 + lVar24 * 0x38);
    *(int *)(lVar47 + 0xd8) = iVar20;
    *(int *)(lVar47 + 0xdc) = iVar37 + -1;
    if (iVar37 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar47 + 0xa8) + (longlong)iVar20 * 0x38) = 0xffffffff;
    }
  }
  puVar49 = (uint *)(lVar47 + 0xb8);
  uVar48 = 1;
  puVar28 = *(uint **)(lVar47 + 200);
  if (*(uint **)(lVar47 + 200) == (uint *)0x0) {
    puVar28 = puVar49;
  }
  iVar37 = iVar34 + 0x1f;
  if (-1 < iVar34) {
    iVar37 = iVar34;
  }
  puVar28[iVar37 >> 5] = puVar28[iVar37 >> 5] | 1 << ((byte)iVar34 & 0x1f);
  lVar50 = *(longlong *)(lVar47 + 0xa8);
  lVar24 = lVar24 * 0x38;
  puVar1 = (undefined4 *)(lVar50 + lVar24);
  *(ulonglong *)(lVar50 + lVar24) = uVar6;
  puVar4 = (undefined8 *)(lVar50 + 8 + lVar24);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar50 + 0x18 + lVar24);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar50 + 0x28 + lVar24) = 0;
  *(undefined8 *)(lVar50 + 0x2c + lVar24) = 0xffffffff00000004;
  uVar21 = *(int *)(lVar47 + 0xb0) - *(int *)(lVar47 + 0xdc);
  if ((uVar21 != 0) && (uVar21 != 1)) {
    lVar24 = lVar47 + 0xe0;
    if (*(longlong *)(lVar47 + 0xe8) != 0) {
      lVar24 = *(longlong *)(lVar47 + 0xe8);
    }
    iVar37 = *(int *)(lVar24 + (ulonglong)(*(int *)(lVar47 + 0xf0) - 1U & uVar18) * 4);
    if (iVar37 != -1) {
      do {
        puVar2 = (undefined4 *)(*plVar23 + (longlong)iVar37 * 0x38);
        if (*(ulonglong *)(*plVar23 + (longlong)iVar37 * 0x38) == uVar6) {
          if (*(longlong *)(puVar2 + 8) != 0) {
            FUN_1400020a8();
          }
          uVar19 = *puVar1;
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          uVar11 = puVar1[4];
          uVar12 = puVar1[5];
          uVar13 = puVar1[6];
          uVar14 = puVar1[7];
          uVar15 = puVar1[9];
          uVar16 = puVar1[10];
          uVar17 = puVar1[0xb];
          puVar2[8] = puVar1[8];
          puVar2[9] = uVar15;
          puVar2[10] = uVar16;
          puVar2[0xb] = uVar17;
          puVar2[4] = uVar11;
          puVar2[5] = uVar12;
          puVar2[6] = uVar13;
          puVar2[7] = uVar14;
          *puVar2 = uVar19;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          FUN_1473703f0(plVar23,iVar34);
          goto LAB_1456b84c0;
        }
        iVar37 = puVar2[0xc];
      } while (iVar37 != -1);
    }
  }
  if (3 < uVar21) {
    uVar32 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar24 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar48 = 1 << ((byte)lVar24 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar48 <= *(int *)(lVar47 + 0xf0))) {
    uVar48 = *(int *)(lVar47 + 0xf0) - 1U & uVar18;
    puVar1[0xd] = uVar48;
    lVar24 = *(longlong *)(lVar47 + 0xe8);
    if (*(longlong *)(lVar47 + 0xe8) == 0) {
      lVar24 = lVar47 + 0xe0;
    }
    puVar1[0xc] = *(undefined4 *)
                   (lVar24 + ((longlong)*(int *)(lVar47 + 0xf0) - 1U & (longlong)(int)uVar48) * 4);
    lVar24 = *(longlong *)(lVar47 + 0xe8);
    if (*(longlong *)(lVar47 + 0xe8) == 0) {
      lVar24 = lVar47 + 0xe0;
    }
    *(int *)(lVar24 + ((longlong)*(int *)(lVar47 + 0xf0) - 1U & (longlong)(int)uVar48) * 4) = iVar34
    ;
  }
  else {
    *(uint *)(lVar47 + 0xf0) = uVar48;
    plVar25 = (longlong *)(lVar47 + 0xe8);
    if (*(longlong *)(lVar47 + 0xe8) != 0) {
      FUN_1446efa72(plVar25,0,0,4);
      uVar48 = *(uint *)(lVar47 + 0xf0);
      if (uVar48 == 0) goto LAB_1456b84c0;
    }
    lVar24 = lVar47 + 0xe0;
    if (uVar48 == 1) {
      if (*plVar25 != 0) {
        FUN_1446efa72(plVar25,0,0,4);
      }
LAB_1456b87a4:
      uVar21 = 0;
      do {
        lVar50 = *(longlong *)(lVar47 + 0xe8);
        if (*(longlong *)(lVar47 + 0xe8) == 0) {
          lVar50 = lVar24;
        }
        *(undefined4 *)(lVar50 + (ulonglong)(*(int *)(lVar47 + 0xf0) + 0x7fffffffU & uVar21) * 4) =
             0xffffffff;
        uVar21 = uVar21 + 1;
      } while (uVar48 != uVar21);
    }
    else {
      FUN_1446efa72(plVar25,0,uVar48,4);
      if (0 < (int)uVar48) goto LAB_1456b87a4;
    }
    iVar37 = *(int *)(lVar47 + 0xd0);
    if (iVar37 == 0) {
      uVar32 = 0;
      uVar39 = 1;
      iVar36 = 0;
      iVar20 = 0;
    }
    else {
      puVar28 = *(uint **)(lVar47 + 200);
      if (*(uint **)(lVar47 + 200) == (uint *)0x0) {
        puVar28 = puVar49;
      }
      uVar48 = *puVar28;
      if (uVar48 == 0) {
        iVar20 = iVar37 + 0x1e;
        if (-1 < iVar37 + -1) {
          iVar20 = iVar37 + -1;
        }
        uVar32 = 0;
        uVar39 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar39 = uVar32;
        }
        iVar20 = 0;
        do {
          if (uVar39 == uVar32) goto LAB_1456b84c0;
          iVar20 = iVar20 + 0x20;
          uVar48 = puVar28[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar48 == 0);
      }
      else {
        uVar32 = 0;
        iVar20 = 0;
      }
      uVar39 = (ulonglong)(-uVar48 & uVar48);
      uVar40 = uVar39 * 2 + 1;
      lVar50 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar50 == 0; lVar50 = lVar50 + -1) {
        }
      }
      iVar36 = (iVar20 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
      if (iVar37 <= iVar36) {
        iVar36 = iVar37;
      }
    }
    if (iVar36 < iVar37) {
      uVar48 = 0xffffffff;
      do {
        lVar50 = *(longlong *)(lVar47 + 0xa8);
        lVar43 = (longlong)iVar36 * 0x38;
        uVar21 = ((uint)(*(ulonglong *)(lVar50 + lVar43) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar50 + lVar43) >> 4)) * -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        uVar40 = (longlong)(int)(uVar21 >> 0x10 ^ uVar21) & (longlong)*(int *)(lVar47 + 0xf0) - 1U;
        iVar37 = (int)uVar40;
        *(int *)(lVar50 + 0x34 + lVar43) = iVar37;
        lVar26 = *(longlong *)(lVar47 + 0xe8);
        if (*(longlong *)(lVar47 + 0xe8) == 0) {
          lVar26 = lVar24;
        }
        *(undefined4 *)(lVar50 + 0x30 + lVar43) =
             *(undefined4 *)(lVar26 + ((longlong)*(int *)(lVar47 + 0xf0) - 1U & uVar40) * 4);
        lVar50 = *(longlong *)(lVar47 + 0xe8);
        if (*(longlong *)(lVar47 + 0xe8) == 0) {
          lVar50 = lVar24;
        }
        *(int *)(lVar50 + ((longlong)iVar37 & (longlong)*(int *)(lVar47 + 0xf0) - 1U) * 4) = iVar36;
        uVar48 = ~(uint)uVar39 & uVar48;
        puVar28 = *(uint **)(lVar47 + 200);
        if (*(uint **)(lVar47 + 200) == (uint *)0x0) {
          puVar28 = puVar49;
        }
        iVar37 = *(int *)(lVar47 + 0xd0);
        iVar36 = (int)uVar32;
        lVar50 = (longlong)iVar36;
        uVar21 = puVar28[lVar50] & uVar48;
        if (uVar21 == 0) {
          iVar35 = iVar37 + 0x1e;
          if (-1 < iVar37 + -1) {
            iVar35 = iVar37 + -1;
          }
          iVar35 = iVar35 >> 5;
          iVar22 = iVar35;
          if (iVar35 < iVar36) {
            iVar22 = iVar36;
          }
          if (iVar35 <= iVar36) break;
          lVar26 = 0;
          while( true ) {
            iVar20 = iVar20 + 0x20;
            uVar21 = puVar28[lVar50 + lVar26 + 1];
            if (uVar21 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar22 - lVar50 == lVar26) goto LAB_1456b84c0;
          }
          uVar32 = (ulonglong)(iVar36 + (int)lVar26 + 1);
          uVar48 = 0xffffffff;
        }
        uVar39 = (ulonglong)(-uVar21 & uVar21);
        uVar40 = uVar39 * 2 + 1;
        lVar50 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar50 == 0; lVar50 = lVar50 + -1) {
          }
        }
        iVar36 = (iVar20 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
      } while (iVar36 < iVar37);
    }
  }
LAB_1456b84c0:
  lVar24 = *plVar23 + (longlong)iVar34 * 0x38;
LAB_1456b7c8e:
  puVar49 = (uint *)(lVar24 + 8);
  iVar34 = *(int *)(lVar24 + 0x28);
  if (iVar34 < 1) {
    uVar5 = *(ushort *)(uVar6 + 0xdc);
    if ((iVar34 < (int)(uint)uVar5) &&
       (*(uint *)(lVar24 + 0x28) = (uint)uVar5,
       (uint)(*(int *)(lVar24 + 0x2c) - iVar34) < (uint)uVar5 - iVar34)) {
      FUN_14471e96e(lVar24 + 0x10);
    }
    puVar49[0] = 0xffffffff;
    puVar49[1] = 0x7fffffff;
  }
  lVar47 = (longlong)iVar41;
  uVar48 = *puVar49;
  if (iVar41 == -1) {
    if ((-1 < (int)uVar48) || (uVar21 = uVar48 & 0x7fffffff, uVar21 == 0x7fffffff)) {
      uVar5 = *(ushort *)(uVar6 + 0xdc);
      if ((ulonglong)uVar5 != 0) {
        plVar23 = (longlong *)(uVar6 + 0x28);
        lVar47 = lVar24 + 0x10;
        uVar32 = 0;
        do {
          if ((int)*puVar49 < 0) {
            uVar48 = *puVar49 & 0x7fffffff;
          }
          else {
            lVar50 = *(longlong *)(lVar24 + 0x20);
            if (*(longlong *)(lVar24 + 0x20) == 0) {
              lVar50 = lVar47;
            }
            uVar48 = *(uint *)(lVar50 + uVar32 * 4);
          }
          if (uVar48 == 0x7fffffff) {
            if (*plVar23 == 0 || (param_3 & 8) == 0) {
              lVar50 = param_1[0x33];
              if (lVar50 == 0) {
                (**(code **)(*param_1 + 8))(param_1);
                lVar50 = param_1[0x33];
              }
              iVar41 = *(int *)(lVar50 + 0xa0);
              *(uint *)(lVar50 + 0xa0) = iVar41 + 1U;
              if (*(uint *)(lVar50 + 0xa4) < iVar41 + 1U) {
                FUN_140039d58((longlong *)(lVar50 + 0x98),iVar41);
              }
              lVar50 = *(longlong *)(lVar50 + 0x98);
              lVar26 = (longlong)iVar41 * 0x10;
              *(ulonglong *)(lVar50 + lVar26) = uVar6;
              *(uint *)(lVar50 + 8 + lVar26) = param_3;
              *(int *)(lVar50 + 0xc + lVar26) = (int)uVar32;
              iVar41 = *(int *)(lVar24 + 0x28);
              if (iVar41 != 1) {
                uVar48 = *puVar49;
                if ((int)uVar48 < 0) {
                  if (iVar41 != 0) {
                    iVar34 = 0;
                    do {
                      lVar50 = *(longlong *)(lVar24 + 0x20);
                      if (*(longlong *)(lVar24 + 0x20) == 0) {
                        lVar50 = lVar47;
                      }
                      *(uint *)(lVar50 + (longlong)iVar34 * 4) = *puVar49 & 0x7fffffff;
                      iVar34 = iVar34 + 1;
                    } while (iVar41 != iVar34);
                    goto LAB_1456b85aa;
                  }
                  goto LAB_1456b85ad;
                }
                goto LAB_1456b8575;
              }
              *puVar49 = param_3 | 0x80000000;
            }
            else {
              FUN_144703b84(param_1,*(undefined8 *)(uVar6 + 0x20));
              *(uint *)(lVar24 + 0xc) = *(uint *)(lVar24 + 0xc) | 0x7fffffff;
            }
          }
          else {
            if ((param_3 == 8) && (uVar48 == 8)) {
              uVar48 = 8;
            }
            else {
              lVar50 = *plVar23;
              if ((lVar50 != 0) && (((uVar48 | param_3) & 8) != 0)) {
                if ((param_3 & 8) == 0) {
                  if ((uVar48 & 8) == 0) {
                    lVar50 = *(longlong *)(uVar6 + 0x20);
                  }
                  FUN_144703b84(param_1,lVar50);
                  uVar48 = *(uint *)(lVar24 + 0xc) & 0x7fffffff;
                  if (uVar48 != 0x7fffffff) goto LAB_1456b8538;
                  FUN_14736cbc2(param_1,uVar6,param_3,uVar32 & 0xffffffff,puVar49);
                }
                else {
                  plVar25 = (longlong *)(uVar6 + 0x20);
                  if ((uVar48 & 8) != 0) {
                    plVar25 = plVar23;
                  }
                  FUN_144703b84(param_1,*plVar25,lVar50);
                  *(uint *)(lVar24 + 0xc) =
                       *(uint *)(lVar24 + 0xc) & 0x80000000 | uVar48 & 0x7fffffff;
                }
                goto LAB_1456b8560;
              }
            }
LAB_1456b8538:
            uVar21 = 0;
            if (uVar48 != param_3) {
              uVar21 = param_3;
            }
            if ((param_3 == 0) || (uVar48 != param_3)) {
              if (uVar48 != uVar21) {
                plVar25 = param_1 + 0x31;
                iVar41 = (int)param_1[0x32];
                if ((longlong)iVar41 == 0) {
                  lVar50 = *(longlong *)(uVar6 + 0x20);
LAB_1456b9319:
                  *(uint *)(param_1 + 0x32) = iVar41 + 1U;
                  if (*(uint *)((longlong)param_1 + 0x194) < iVar41 + 1U) {
                    FUN_1447158f0(plVar25,iVar41);
                  }
                  lVar26 = *plVar25;
                  lVar43 = (longlong)iVar41 * 0x20;
                  *(undefined8 *)(lVar26 + lVar43) = 0;
                  *(longlong *)(lVar26 + 8 + lVar43) = lVar50;
                  *(int *)(lVar26 + 0x10 + lVar43) = (int)uVar32;
                  *(uint *)(lVar26 + 0x14 + lVar43) = uVar48;
                  *(uint *)(lVar26 + 0x18 + lVar43) = uVar21;
                  *(undefined4 *)(lVar26 + 0x1c + lVar43) = 0;
                  if (((uVar21 & 0x150c) != 0) && ((*(byte *)(uVar6 + 0x92) & 4) != 0)) {
                    *(undefined4 *)(lVar26 + lVar43 + 4) = 0x80000000;
                  }
                }
                else {
                  lVar26 = (longlong)(iVar41 + -1) * 0x20;
                  lVar50 = *(longlong *)(uVar6 + 0x20);
                  if ((((*(int *)(*plVar25 + lVar26) != 0) ||
                       (lVar26 = *plVar25 + lVar26, lVar50 != *(longlong *)(lVar26 + 8))) ||
                      (uVar32 != *(uint *)(lVar26 + 0x10))) ||
                     ((*(uint *)(lVar26 + 0x18) != uVar48 || (*(uint *)(lVar26 + 0x14) != uVar21))))
                  goto LAB_1456b9319;
                  *(int *)(param_1 + 0x32) = iVar41 + -1;
                  FUN_1447159f0(plVar25);
                }
                lVar50 = param_1[0x33];
                if (lVar50 == 0) {
                  (**(code **)(*param_1 + 8))(param_1);
                  lVar50 = param_1[0x33];
                }
                if (*(longlong *)(uVar6 + 0xe0) == 0) {
                  if ((*(byte *)(uVar6 + 0xdf) & 2) != 0) {
                    lVar26 = *(longlong *)(uVar6 + 0x30);
                    if (lVar26 == 0) {
                      plVar27 = (longlong *)(uVar6 + 0x38);
                    }
                    else {
                      plVar27 = (longlong *)(lVar26 + 0x70);
                      if (*(char *)(lVar26 + 0x81) == '\0') goto LAB_1456b9479;
                    }
                    lVar26 = *plVar27;
                    if (((lVar26 != 0) && (DAT_14c760b88 != '\0')) &&
                       (*(longlong *)(lVar26 + 8) != 0)) {
                      puVar28 = *(uint **)(lVar50 + 0x10);
                      if (*(char *)(lVar26 + 0x28 + (ulonglong)*puVar28) == '\0') {
                        *(undefined1 *)(lVar26 + 0x28 + (ulonglong)*puVar28) = 1;
                        local_98 = *(void **)(puVar28 + 2);
                        if (local_98 == (void *)0x0) {
                          uVar48 = puVar28[4];
LAB_1456ba4fe:
                          uVar38 = 0x1000;
                          if (uVar48 != 0) {
                            uVar38 = (int)((float)(int)uVar48 * 0.5 + (float)(int)uVar48);
                          }
                          puVar28[4] = uVar38;
                          lVar50 = -1;
                          if (-1 < (int)uVar38) {
                            lVar50 = (longlong)(int)uVar38 * 8 +
                                     (ulonglong)((longlong)(int)uVar38 * 8 == 0);
                          }
                          pvVar30 = (void *)FUN_14001cc68(lVar50,0x10);
                          if ((local_98 == (void *)0x0) || (pvVar30 == (void *)0x0)) {
                            *(void **)(puVar28 + 2) = pvVar30;
                            local_98 = pvVar30;
                            if (pvVar30 == (void *)0x0) {
                              *(undefined1 *)((longlong)puVar28 + 0x19) = 1;
                              goto LAB_1456b9479;
                            }
                          }
                          else {
                            memcpy(pvVar30,local_98,(longlong)(int)puVar28[5] << 3);
                            FUN_1400020a8(local_98);
                            *(void **)(puVar28 + 2) = pvVar30;
                            local_98 = pvVar30;
                          }
                        }
                        else {
                          uVar48 = puVar28[4];
                          if ((int)uVar48 <= (int)puVar28[5]) goto LAB_1456ba4fe;
                        }
                        uVar48 = puVar28[5];
                        puVar28[5] = uVar48 + 1;
                        *(longlong *)((longlong)local_98 + (longlong)(int)uVar48 * 8) = lVar26;
                      }
                    }
                  }
                }
                else {
                  if (*(int *)(lVar50 + 0x1a4) == 0) {
                    iVar41 = *(int *)(lVar50 + 0x178);
                    *(int *)(lVar50 + 0x178) = iVar41 + 1;
                    if (*(int *)(lVar50 + 0x17c) == iVar41) {
                      FUN_1446efaca((longlong *)(lVar50 + 0x170),iVar41);
                    }
                    iVar34 = *(int *)(lVar50 + 0x198);
                    if (iVar34 == 0) {
                      iVar37 = -1;
                    }
                    else {
                      iVar37 = iVar34 + 0x1e;
                      if (-1 < iVar34 + -1) {
                        iVar37 = iVar34 + -1;
                      }
                      iVar37 = iVar37 >> 5;
                    }
                    lVar26 = lVar50 + 0x180;
                    iVar36 = iVar34 + 1;
                    iVar20 = iVar34 + 0x1f;
                    if (-1 < iVar34) {
                      iVar20 = iVar34;
                    }
                    if (iVar20 >> 5 == iVar37) {
                      *(int *)(lVar50 + 0x198) = iVar36;
                    }
                    else {
                      if (*(int *)(lVar50 + 0x19c) <= iVar34) {
                        if (iVar34 + 0x20U < 0xa0) {
                          iVar36 = 0x80;
                          iVar37 = iVar34;
                        }
                        else {
                          uVar48 = iVar34 + 0x20U >> 5;
                          if (*(int *)(lVar50 + 0x19c) + 0x1fU < 0xa0) {
                            uVar38 = 4;
                            if (4 < uVar48) {
                              uVar38 = uVar48;
                            }
                          }
                          else {
                            uVar38 = (uVar48 * 3 >> 3) + uVar48 + 0x10;
                          }
                          uVar39 = FUN_144a3809e(uVar38 << 2,0);
                          iVar37 = (int)(uVar39 >> 2);
                          iVar36 = -0x20;
                          if ((int)uVar48 <= iVar37) {
                            iVar36 = iVar37 << 5;
                          }
                          iVar37 = *(int *)(lVar50 + 0x198);
                        }
                        *(int *)(lVar50 + 0x19c) = iVar36;
                        FUN_1446efbd8(lVar26,iVar37);
                        iVar36 = *(int *)(lVar50 + 0x198) + 1;
                      }
                      iVar37 = iVar36 + 0x1f;
                      if (-1 < iVar36) {
                        iVar37 = iVar36;
                      }
                      *(int *)(lVar50 + 0x198) = iVar36;
                      if (iVar36 % 0x20 != 0) {
                        lVar43 = *(longlong *)(lVar50 + 400);
                        if (*(longlong *)(lVar50 + 400) == 0) {
                          lVar43 = lVar26;
                        }
                        bVar31 = -(char)(iVar36 % 0x20);
                        *(uint *)(lVar43 + (longlong)(iVar37 >> 5) * 4) =
                             (uint)(*(int *)(lVar43 + (longlong)(iVar37 >> 5) * 4) <<
                                   (bVar31 & 0x1f)) >> (bVar31 & 0x1f);
                      }
                    }
                    lVar43 = (longlong)iVar41;
                    if (*(longlong *)(lVar50 + 400) != 0) {
                      lVar26 = *(longlong *)(lVar50 + 400);
                    }
                    bVar31 = (byte)iVar34 & 0x1f;
                    puVar28 = (uint *)(lVar26 + (longlong)(iVar20 >> 5) * 4);
                    *puVar28 = *puVar28 & (-2 << bVar31 | 0xfffffffeU >> 0x20 - bVar31);
                  }
                  else {
                    iVar41 = *(int *)(lVar50 + 0x1a0);
                    lVar43 = (longlong)iVar41;
                    iVar34 = *(int *)(*(longlong *)(lVar50 + 0x170) + 4 + lVar43 * 0x10);
                    *(int *)(lVar50 + 0x1a0) = iVar34;
                    iVar37 = *(int *)(lVar50 + 0x1a4) + -1;
                    *(int *)(lVar50 + 0x1a4) = iVar37;
                    if (iVar37 != 0) {
                      *(undefined4 *)(*(longlong *)(lVar50 + 0x170) + (longlong)iVar34 * 0x10) =
                           0xffffffff;
                    }
                  }
                  puVar28 = (uint *)(lVar50 + 0x180);
                  uVar48 = 1 << ((byte)iVar41 & 0x1f);
                  puVar33 = *(uint **)(lVar50 + 400);
                  if (*(uint **)(lVar50 + 400) == (uint *)0x0) {
                    puVar33 = puVar28;
                  }
                  iVar34 = iVar41 + 0x1f;
                  if (-1 < iVar41) {
                    iVar34 = iVar41;
                  }
                  puVar33[iVar34 >> 5] = puVar33[iVar34 >> 5] | uVar48;
                  uVar38 = 1;
                  lVar26 = *(longlong *)(lVar50 + 0x170);
                  lVar43 = lVar43 * 0x10;
                  *(ulonglong *)(lVar26 + lVar43) = uVar6;
                  *(undefined4 *)(lVar26 + 8 + lVar43) = 0xffffffff;
                  uVar44 = *(int *)(lVar50 + 0x178) - *(int *)(lVar50 + 0x1a4);
                  if ((uVar44 != 0) && (uVar44 != 1)) {
                    lVar45 = lVar50 + 0x1a8;
                    if (*(longlong *)(lVar50 + 0x1b0) != 0) {
                      lVar45 = *(longlong *)(lVar50 + 0x1b0);
                    }
                    iVar37 = *(int *)(lVar45 + (ulonglong)(*(int *)(lVar50 + 0x1b8) - 1U & uVar18) *
                                               4);
                    if (iVar37 != -1) {
                      lVar45 = *(longlong *)(lVar50 + 0x170);
                      do {
                        puVar3 = (ulonglong *)(lVar45 + (longlong)iVar37 * 0x10);
                        if (*(ulonglong *)(lVar45 + (longlong)iVar37 * 0x10) == uVar6) {
                          *puVar3 = uVar6;
                          lVar26 = *(longlong *)(lVar50 + 0x170);
                          if (*(int *)(lVar50 + 0x1a4) != 0) {
                            *(int *)(lVar26 + (longlong)*(int *)(lVar50 + 0x1a0) * 0x10) = iVar41;
                          }
                          *(undefined4 *)(lVar26 + (longlong)iVar41 * 0x10) = 0xffffffff;
                          uVar19 = 0xffffffff;
                          if (0 < *(int *)(lVar50 + 0x1a4)) {
                            uVar19 = *(undefined4 *)(lVar50 + 0x1a0);
                          }
                          *(undefined4 *)(lVar26 + (longlong)iVar41 * 0x10 + 4) = uVar19;
                          *(int *)(lVar50 + 0x1a0) = iVar41;
                          *(int *)(lVar50 + 0x1a4) = *(int *)(lVar50 + 0x1a4) + 1;
                          if (*(uint **)(lVar50 + 400) != (uint *)0x0) {
                            puVar28 = *(uint **)(lVar50 + 400);
                          }
                          puVar28[iVar34 >> 5] = puVar28[iVar34 >> 5] & ~uVar48;
                          goto LAB_1456b9479;
                        }
                        iVar37 = (int)puVar3[1];
                      } while (iVar37 != -1);
                    }
                  }
                  if (3 < uVar44) {
                    uVar39 = (ulonglong)(uVar44 & 0xfffffffe) + 0xf;
                    lVar45 = 0x3f;
                    if (uVar39 != 0) {
                      for (; uVar39 >> lVar45 == 0; lVar45 = lVar45 + -1) {
                      }
                    }
                    uVar38 = 1 << ((byte)lVar45 & 0x1f);
                  }
                  if (((int)uVar44 < 1) || ((int)uVar38 <= *(int *)(lVar50 + 0x1b8))) {
                    uVar48 = *(int *)(lVar50 + 0x1b8) - 1U & uVar18;
                    *(uint *)(lVar26 + lVar43 + 0xc) = uVar48;
                    lVar45 = *(longlong *)(lVar50 + 0x1b0);
                    if (*(longlong *)(lVar50 + 0x1b0) == 0) {
                      lVar45 = lVar50 + 0x1a8;
                    }
                    *(undefined4 *)(lVar26 + lVar43 + 8) =
                         *(undefined4 *)
                          (lVar45 + ((longlong)*(int *)(lVar50 + 0x1b8) - 1U & (longlong)(int)uVar48
                                    ) * 4);
                    lVar26 = *(longlong *)(lVar50 + 0x1b0);
                    if (*(longlong *)(lVar50 + 0x1b0) == 0) {
                      lVar26 = lVar50 + 0x1a8;
                    }
                    *(int *)(lVar26 + ((longlong)*(int *)(lVar50 + 0x1b8) - 1U &
                                      (longlong)(int)uVar48) * 4) = iVar41;
                    goto LAB_1456b9479;
                  }
                  *(uint *)(lVar50 + 0x1b8) = uVar38;
                  plVar27 = (longlong *)(lVar50 + 0x1b0);
                  if (*(longlong *)(lVar50 + 0x1b0) != 0) {
                    FUN_1446efa72(plVar27,0,0,4);
                    uVar38 = *(uint *)(lVar50 + 0x1b8);
                    if (uVar38 == 0) goto LAB_1456b9479;
                  }
                  lVar26 = lVar50 + 0x1a8;
                  if (uVar38 == 1) {
                    if (*plVar27 != 0) {
                      FUN_1446efa72(plVar27,0,0,4);
                    }
LAB_1456b9815:
                    uVar48 = 0;
                    do {
                      lVar43 = *(longlong *)(lVar50 + 0x1b0);
                      if (*(longlong *)(lVar50 + 0x1b0) == 0) {
                        lVar43 = lVar26;
                      }
                      *(undefined4 *)
                       (lVar43 + (ulonglong)(*(int *)(lVar50 + 0x1b8) + 0x7fffffffU & uVar48) * 4) =
                           0xffffffff;
                      uVar48 = uVar48 + 1;
                    } while (uVar38 != uVar48);
                  }
                  else {
                    FUN_1446efa72(plVar27,0,uVar38,4);
                    if (0 < (int)uVar38) goto LAB_1456b9815;
                  }
                  iVar41 = *(int *)(lVar50 + 0x198);
                  if (iVar41 == 0) {
                    uVar39 = 0;
                    uVar40 = 1;
                    iVar37 = 0;
                    iVar34 = 0;
                  }
                  else {
                    puVar33 = *(uint **)(lVar50 + 400);
                    if (*(uint **)(lVar50 + 400) == (uint *)0x0) {
                      puVar33 = puVar28;
                    }
                    uVar48 = *puVar33;
                    uVar39 = 0;
                    if (uVar48 == 0) {
                      iVar34 = 0;
                      do {
                        iVar37 = iVar41 + 0x1e;
                        if (-1 < iVar41 + -1) {
                          iVar37 = iVar41 + -1;
                        }
                        uVar48 = iVar37 >> 5;
                        if (iVar37 >> 5 < 1) {
                          uVar48 = 0;
                        }
                        if (uVar39 == uVar48) goto LAB_1456b9479;
                        iVar34 = iVar34 + 0x20;
                        uVar48 = puVar33[uVar39 + 1];
                        uVar39 = uVar39 + 1;
                      } while (uVar48 == 0);
                    }
                    else {
                      iVar34 = 0;
                    }
                    uVar40 = (ulonglong)(-uVar48 & uVar48);
                    uVar42 = uVar40 * 2 + 1;
                    lVar43 = 0x3f;
                    if (uVar42 != 0) {
                      for (; uVar42 >> lVar43 == 0; lVar43 = lVar43 + -1) {
                      }
                    }
                    iVar37 = (iVar34 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
                    if (iVar41 <= iVar37) {
                      iVar37 = iVar41;
                    }
                  }
                  if (iVar37 < iVar41) {
                    uVar48 = 0xffffffff;
                    do {
                      lVar43 = *(longlong *)(lVar50 + 0x170);
                      lVar46 = (longlong)iVar37 * 0x10;
                      uVar38 = ((uint)(*(ulonglong *)(lVar43 + lVar46) >> 0x14) & 0xffff ^
                               (uint)(*(ulonglong *)(lVar43 + lVar46) >> 4)) * -0x7a143595;
                      uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
                      uVar42 = (longlong)(int)(uVar38 >> 0x10 ^ uVar38) &
                               (longlong)*(int *)(lVar50 + 0x1b8) - 1U;
                      iVar41 = (int)uVar42;
                      *(int *)(lVar43 + 0xc + lVar46) = iVar41;
                      lVar45 = *(longlong *)(lVar50 + 0x1b0);
                      if (*(longlong *)(lVar50 + 0x1b0) == 0) {
                        lVar45 = lVar26;
                      }
                      *(undefined4 *)(lVar43 + 8 + lVar46) =
                           *(undefined4 *)
                            (lVar45 + ((longlong)*(int *)(lVar50 + 0x1b8) - 1U & uVar42) * 4);
                      lVar43 = *(longlong *)(lVar50 + 0x1b0);
                      if (*(longlong *)(lVar50 + 0x1b0) == 0) {
                        lVar43 = lVar26;
                      }
                      *(int *)(lVar43 + ((longlong)iVar41 & (longlong)*(int *)(lVar50 + 0x1b8) - 1U)
                                        * 4) = iVar37;
                      uVar48 = ~(uint)uVar40 & uVar48;
                      puVar33 = *(uint **)(lVar50 + 400);
                      if (*(uint **)(lVar50 + 400) == (uint *)0x0) {
                        puVar33 = puVar28;
                      }
                      iVar41 = *(int *)(lVar50 + 0x198);
                      iVar37 = (int)uVar39;
                      lVar43 = (longlong)iVar37;
                      uVar38 = puVar33[lVar43] & uVar48;
                      if (uVar38 == 0) {
                        iVar20 = iVar41 + 0x1e;
                        if (-1 < iVar41 + -1) {
                          iVar20 = iVar41 + -1;
                        }
                        iVar20 = iVar20 >> 5;
                        iVar36 = iVar20;
                        if (iVar20 < iVar37) {
                          iVar36 = iVar37;
                        }
                        if (iVar20 <= iVar37) break;
                        lVar45 = 0;
                        while( true ) {
                          iVar34 = iVar34 + 0x20;
                          uVar38 = puVar33[lVar43 + lVar45 + 1];
                          if (uVar38 != 0) break;
                          lVar45 = lVar45 + 1;
                          if (iVar36 - lVar43 == lVar45) goto LAB_1456b9479;
                        }
                        uVar39 = (ulonglong)(iVar37 + (int)lVar45 + 1);
                        uVar48 = 0xffffffff;
                      }
                      uVar40 = (ulonglong)(-uVar38 & uVar38);
                      uVar42 = uVar40 * 2 + 1;
                      lVar43 = 0x3f;
                      if (uVar42 != 0) {
                        for (; uVar42 >> lVar43 == 0; lVar43 = lVar43 + -1) {
                        }
                      }
                      iVar37 = (iVar34 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
                    } while (iVar37 < iVar41);
                  }
                }
LAB_1456b9479:
                if ((DAT_14c760b78 == 0) && ((int)param_1[0x32] != 0)) {
                  lVar50 = param_1[0x33];
                  if (lVar50 == 0) {
                    (**(code **)(*param_1 + 8))(param_1);
                    lVar50 = param_1[0x33];
                  }
                  FUN_144ad5b2c(plVar25,lVar50,param_1 + 7);
                }
              }
              if ((*(byte *)(uVar6 + 0xdf) & 1) != 0) {
                puVar28 = puVar49;
                if (puVar49 == (uint *)0x0) {
                  lVar50 = param_1[0x33];
                  if (lVar50 == 0) {
                    (**(code **)(*param_1 + 8))(param_1);
                    lVar50 = param_1[0x33];
                  }
                  puVar28 = (uint *)FUN_1456b17c6(lVar50,uVar6);
                }
                uVar48 = puVar28[8];
                if (uVar48 == 1) {
                  *puVar28 = uVar21 | 0x80000000;
                }
                else {
                  uVar38 = *puVar28;
                  if ((int)uVar38 < 0) {
                    if (uVar48 != 0) {
                      uVar38 = 0;
                      do {
                        puVar33 = *(uint **)(puVar28 + 6);
                        if (*(uint **)(puVar28 + 6) == (uint *)0x0) {
                          puVar33 = puVar28 + 2;
                        }
                        puVar33[(int)uVar38] = *puVar28 & 0x7fffffff;
                        uVar38 = uVar38 + 1;
                      } while (uVar48 != uVar38);
                      uVar38 = *puVar28;
                    }
                    *puVar28 = uVar38 & 0x7fffffff;
                  }
                  puVar33 = puVar28 + 2;
                  if (*(uint **)(puVar28 + 6) != (uint *)0x0) {
                    puVar33 = *(uint **)(puVar28 + 6);
                  }
                  puVar33[uVar32] = uVar21;
                }
                *(byte *)((longlong)puVar28 + 7) = *(byte *)((longlong)puVar28 + 7) | 0x80;
              }
            }
            else {
              iVar41 = *(int *)(lVar24 + 0x28);
              if (iVar41 == 1) {
                *puVar49 = param_3 | 0x80000000;
              }
              else {
                uVar48 = *puVar49;
                if ((int)uVar48 < 0) {
                  if (iVar41 != 0) {
                    iVar34 = 0;
                    do {
                      lVar50 = *(longlong *)(lVar24 + 0x20);
                      if (*(longlong *)(lVar24 + 0x20) == 0) {
                        lVar50 = lVar47;
                      }
                      *(uint *)(lVar50 + (longlong)iVar34 * 4) = *puVar49 & 0x7fffffff;
                      iVar34 = iVar34 + 1;
                    } while (iVar41 != iVar34);
LAB_1456b85aa:
                    uVar48 = *puVar49;
                  }
LAB_1456b85ad:
                  *puVar49 = uVar48 & 0x7fffffff;
                }
LAB_1456b8575:
                lVar50 = *(longlong *)(lVar24 + 0x20);
                if (*(longlong *)(lVar24 + 0x20) == 0) {
                  lVar50 = lVar47;
                }
                *(uint *)(lVar50 + uVar32 * 4) = param_3;
              }
            }
          }
LAB_1456b8560:
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar5);
        uVar48 = *puVar49;
      }
      if ((int)uVar48 < 0) {
        return;
      }
      puVar28 = (uint *)(lVar24 + 0x10);
      if (*(uint **)(lVar24 + 0x20) != (uint *)0x0) {
        puVar28 = *(uint **)(lVar24 + 0x20);
      }
      if (1 < *(uint *)(lVar24 + 0x28)) {
        uVar18 = 1;
        do {
          if (puVar28[(int)uVar18] != *puVar28) {
            return;
          }
          uVar18 = uVar18 + 1;
        } while (*(uint *)(lVar24 + 0x28) != uVar18);
      }
      *puVar49 = *puVar28 | 0x80000000;
      return;
    }
  }
  else {
    if ((int)uVar48 < 0) {
      uVar21 = uVar48 & 0x7fffffff;
    }
    else {
      lVar50 = lVar24 + 0x10;
      if (*(longlong *)(lVar24 + 0x20) != 0) {
        lVar50 = *(longlong *)(lVar24 + 0x20);
      }
      uVar21 = *(uint *)(lVar50 + lVar47 * 4);
    }
    if (uVar21 == 0x7fffffff) {
      if ((param_3 & 8) != 0 && *(longlong *)(uVar6 + 0x28) != 0) {
        FUN_144703b84(param_1,*(undefined8 *)(uVar6 + 0x20));
        *(uint *)(lVar24 + 0xc) = *(uint *)(lVar24 + 0xc) | 0x7fffffff;
        return;
      }
      lVar50 = param_1[0x33];
      if (lVar50 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar50 = param_1[0x33];
      }
      iVar34 = *(int *)(lVar50 + 0xa0);
      *(uint *)(lVar50 + 0xa0) = iVar34 + 1U;
      if (*(uint *)(lVar50 + 0xa4) < iVar34 + 1U) {
        FUN_140039d58((longlong *)(lVar50 + 0x98),iVar34);
      }
      lVar50 = *(longlong *)(lVar50 + 0x98);
      lVar26 = (longlong)iVar34 * 0x10;
      *(ulonglong *)(lVar50 + lVar26) = uVar6;
      *(uint *)(lVar50 + 8 + lVar26) = param_3;
      *(int *)(lVar50 + 0xc + lVar26) = iVar41;
      iVar41 = *(int *)(lVar24 + 0x28);
      if (iVar41 == 1) {
        *puVar49 = param_3 | 0x80000000;
        return;
      }
      uVar18 = *puVar49;
      if ((int)uVar18 < 0) {
        if (iVar41 != 0) {
          iVar34 = 0;
          do {
            lVar50 = *(longlong *)(lVar24 + 0x20);
            if (*(longlong *)(lVar24 + 0x20) == 0) {
              lVar50 = lVar24 + 0x10;
            }
            *(uint *)(lVar50 + (longlong)iVar34 * 4) = *puVar49 & 0x7fffffff;
            iVar34 = iVar34 + 1;
          } while (iVar41 != iVar34);
          uVar18 = *puVar49;
        }
        *puVar49 = uVar18 & 0x7fffffff;
      }
      lVar50 = lVar24 + 0x10;
      if (*(longlong *)(lVar24 + 0x20) != 0) {
        lVar50 = *(longlong *)(lVar24 + 0x20);
      }
      *(uint *)(lVar50 + lVar47 * 4) = param_3;
      return;
    }
  }
  if ((param_3 == 8) && (uVar21 == 8)) {
    uVar21 = 8;
LAB_1456b7cfc:
    uVar48 = uVar21 | param_3;
    if (((uVar21 | param_3) & 0xfffff53c) != 0) {
      uVar48 = param_3;
    }
    if (uVar48 == uVar21) {
LAB_1456b7d11:
      if ((iVar41 == -1) || (iVar41 = *(int *)(lVar24 + 0x28), iVar41 == 1)) {
        *puVar49 = uVar21 | 0x80000000;
      }
      else {
        uVar18 = *puVar49;
        if ((int)uVar18 < 0) {
          if (iVar41 != 0) {
            iVar34 = 0;
            do {
              lVar50 = *(longlong *)(lVar24 + 0x20);
              if (*(longlong *)(lVar24 + 0x20) == 0) {
                lVar50 = lVar24 + 0x10;
              }
              *(uint *)(lVar50 + (longlong)iVar34 * 4) = *puVar49 & 0x7fffffff;
              iVar34 = iVar34 + 1;
            } while (iVar41 != iVar34);
            uVar18 = *puVar49;
          }
          *puVar49 = uVar18 & 0x7fffffff;
        }
        lVar50 = lVar24 + 0x10;
        if (*(longlong *)(lVar24 + 0x20) != 0) {
          lVar50 = *(longlong *)(lVar24 + 0x20);
        }
        *(uint *)(lVar50 + lVar47 * 4) = uVar21;
      }
      return;
    }
  }
  else {
    lVar50 = *(longlong *)(uVar6 + 0x28);
    if ((lVar50 != 0) && (((uVar21 | param_3) & 8) != 0)) {
      if ((param_3 & 8) != 0) {
        plVar23 = (longlong *)(uVar6 + 0x28);
        if ((uVar21 & 8) == 0) {
          plVar23 = (longlong *)(uVar6 + 0x20);
        }
        FUN_144703b84(param_1,*plVar23,lVar50);
        *(uint *)(lVar24 + 0xc) = *(uint *)(lVar24 + 0xc) & 0x80000000 | uVar21 & 0x7fffffff;
        return;
      }
      if ((uVar21 & 8) == 0) {
        lVar50 = *(longlong *)(uVar6 + 0x20);
      }
      FUN_144703b84(param_1,lVar50);
      uVar21 = *(uint *)(lVar24 + 0xc) & 0x7fffffff;
      if (uVar21 == 0x7fffffff) {
        FUN_14736cbc2(param_1,uVar6,param_3,iVar41,puVar49);
        return;
      }
    }
    if ((param_3 == 0x20) && (uVar21 == 0x10)) {
      uVar21 = (uint)(DAT_14ca76990 == 0) * 0x10 + 0x10;
      goto LAB_1456b7d11;
    }
    if (param_3 != 0) goto LAB_1456b7cfc;
    uVar48 = 0;
  }
  if (uVar21 == uVar48) goto LAB_1456b8b2f;
  plVar23 = param_1 + 0x31;
  iVar34 = (int)param_1[0x32];
  if ((longlong)iVar34 == 0) {
LAB_1456b8a43:
    uVar7 = *(undefined8 *)(uVar6 + 0x20);
    *(uint *)(param_1 + 0x32) = iVar34 + 1U;
    if (*(uint *)((longlong)param_1 + 0x194) < iVar34 + 1U) {
      FUN_1447158f0(plVar23,iVar34);
    }
    lVar24 = *plVar23;
    lVar50 = (longlong)iVar34 * 0x20;
    *(undefined8 *)(lVar24 + lVar50) = 0;
    *(undefined8 *)(lVar24 + 8 + lVar50) = uVar7;
    *(int *)(lVar24 + 0x10 + lVar50) = iVar41;
    *(uint *)(lVar24 + 0x14 + lVar50) = uVar21;
    *(uint *)(lVar24 + 0x18 + lVar50) = uVar48;
    *(undefined4 *)(lVar24 + 0x1c + lVar50) = 0;
    if (((uVar48 & 0x150c) != 0) && ((*(byte *)(uVar6 + 0x92) & 4) != 0)) {
      *(undefined4 *)(lVar24 + lVar50 + 4) = 0x80000000;
    }
  }
  else {
    lVar24 = (longlong)(iVar34 + -1) * 0x20;
    if ((((*(int *)(*plVar23 + lVar24) != 0) ||
         (lVar24 = *plVar23 + lVar24, *(longlong *)(uVar6 + 0x20) != *(longlong *)(lVar24 + 8))) ||
        (*(int *)(lVar24 + 0x10) != iVar41)) ||
       ((*(uint *)(lVar24 + 0x18) != uVar21 || (*(uint *)(lVar24 + 0x14) != uVar48))))
    goto LAB_1456b8a43;
    *(int *)(param_1 + 0x32) = iVar34 + -1;
    FUN_1447159f0(plVar23);
  }
  lVar24 = param_1[0x33];
  if (lVar24 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar24 = param_1[0x33];
  }
  if (*(longlong *)(uVar6 + 0xe0) == 0) {
    if ((*(byte *)(uVar6 + 0xdf) & 2) != 0) {
      lVar50 = *(longlong *)(uVar6 + 0x30);
      if (lVar50 == 0) {
        plVar25 = (longlong *)(uVar6 + 0x38);
      }
      else {
        plVar25 = (longlong *)(lVar50 + 0x70);
        if (*(char *)(lVar50 + 0x81) == '\0') goto LAB_1456b8b22;
      }
      lVar50 = *plVar25;
      if (((lVar50 != 0) && (DAT_14c760b88 != '\0')) && (*(longlong *)(lVar50 + 8) != 0)) {
        puVar28 = *(uint **)(lVar24 + 0x10);
        if (*(char *)(lVar50 + 0x28 + (ulonglong)*puVar28) == '\0') {
          *(undefined1 *)(lVar50 + 0x28 + (ulonglong)*puVar28) = 1;
          pvVar30 = *(void **)(puVar28 + 2);
          if (pvVar30 == (void *)0x0) {
            uVar18 = puVar28[4];
LAB_1456ba207:
            uVar21 = 0x1000;
            if (uVar18 != 0) {
              uVar21 = (int)((float)(int)uVar18 * 0.5 + (float)(int)uVar18);
            }
            puVar28[4] = uVar21;
            lVar24 = -1;
            if (-1 < (int)uVar21) {
              lVar24 = (longlong)(int)uVar21 * 8 + (ulonglong)((longlong)(int)uVar21 * 8 == 0);
            }
            pvVar29 = (void *)FUN_14001cc68(lVar24,0x10);
            if ((pvVar30 == (void *)0x0) || (pvVar29 == (void *)0x0)) {
              *(void **)(puVar28 + 2) = pvVar29;
              pvVar30 = pvVar29;
              if (pvVar29 == (void *)0x0) {
                *(undefined1 *)((longlong)puVar28 + 0x19) = 1;
                goto LAB_1456b8b22;
              }
            }
            else {
              memcpy(pvVar29,pvVar30,(longlong)(int)puVar28[5] << 3);
              FUN_1400020a8(pvVar30);
              *(void **)(puVar28 + 2) = pvVar29;
              pvVar30 = pvVar29;
            }
          }
          else {
            uVar18 = puVar28[4];
            if ((int)uVar18 <= (int)puVar28[5]) goto LAB_1456ba207;
          }
          uVar18 = puVar28[5];
          puVar28[5] = uVar18 + 1;
          *(longlong *)((longlong)pvVar30 + (longlong)(int)uVar18 * 8) = lVar50;
        }
      }
    }
  }
  else {
    if (*(int *)(lVar24 + 0x1a4) == 0) {
      iVar34 = *(int *)(lVar24 + 0x178);
      *(int *)(lVar24 + 0x178) = iVar34 + 1;
      if (*(int *)(lVar24 + 0x17c) == iVar34) {
        FUN_1446efaca((longlong *)(lVar24 + 0x170),iVar34);
      }
      iVar37 = *(int *)(lVar24 + 0x198);
      if (iVar37 == 0) {
        iVar20 = -1;
      }
      else {
        iVar20 = iVar37 + 0x1e;
        if (-1 < iVar37 + -1) {
          iVar20 = iVar37 + -1;
        }
        iVar20 = iVar20 >> 5;
      }
      lVar50 = lVar24 + 0x180;
      iVar36 = iVar37 + 1;
      iVar35 = iVar37 + 0x1f;
      if (-1 < iVar37) {
        iVar35 = iVar37;
      }
      if (iVar35 >> 5 == iVar20) {
        *(int *)(lVar24 + 0x198) = iVar36;
      }
      else {
        if (*(int *)(lVar24 + 0x19c) <= iVar37) {
          if (iVar37 + 0x20U < 0xa0) {
            iVar36 = 0x80;
            iVar20 = iVar37;
          }
          else {
            uVar21 = iVar37 + 0x20U >> 5;
            if (*(int *)(lVar24 + 0x19c) + 0x1fU < 0xa0) {
              uVar38 = 4;
              if (4 < uVar21) {
                uVar38 = uVar21;
              }
            }
            else {
              uVar38 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
            }
            uVar32 = FUN_144a3809e(uVar38 << 2,0);
            iVar20 = (int)(uVar32 >> 2);
            iVar36 = -0x20;
            if ((int)uVar21 <= iVar20) {
              iVar36 = iVar20 << 5;
            }
            iVar20 = *(int *)(lVar24 + 0x198);
          }
          *(int *)(lVar24 + 0x19c) = iVar36;
          FUN_1446efbd8(lVar50,iVar20);
          iVar36 = *(int *)(lVar24 + 0x198) + 1;
        }
        iVar20 = iVar36 + 0x1f;
        if (-1 < iVar36) {
          iVar20 = iVar36;
        }
        *(int *)(lVar24 + 0x198) = iVar36;
        if (iVar36 % 0x20 != 0) {
          lVar26 = *(longlong *)(lVar24 + 400);
          if (*(longlong *)(lVar24 + 400) == 0) {
            lVar26 = lVar50;
          }
          bVar31 = -(char)(iVar36 % 0x20);
          *(uint *)(lVar26 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)(lVar26 + (longlong)(iVar20 >> 5) * 4) << (bVar31 & 0x1f)) >>
               (bVar31 & 0x1f);
        }
      }
      lVar26 = (longlong)iVar34;
      if (*(longlong *)(lVar24 + 400) != 0) {
        lVar50 = *(longlong *)(lVar24 + 400);
      }
      bVar31 = (byte)iVar37 & 0x1f;
      puVar28 = (uint *)(lVar50 + (longlong)(iVar35 >> 5) * 4);
      *puVar28 = *puVar28 & (-2 << bVar31 | 0xfffffffeU >> 0x20 - bVar31);
    }
    else {
      iVar34 = *(int *)(lVar24 + 0x1a0);
      lVar26 = (longlong)iVar34;
      iVar37 = *(int *)(*(longlong *)(lVar24 + 0x170) + 4 + lVar26 * 0x10);
      *(int *)(lVar24 + 0x1a0) = iVar37;
      iVar20 = *(int *)(lVar24 + 0x1a4) + -1;
      *(int *)(lVar24 + 0x1a4) = iVar20;
      if (iVar20 != 0) {
        *(undefined4 *)(*(longlong *)(lVar24 + 0x170) + (longlong)iVar37 * 0x10) = 0xffffffff;
      }
    }
    puVar28 = (uint *)(lVar24 + 0x180);
    uVar21 = 1 << ((byte)iVar34 & 0x1f);
    puVar33 = *(uint **)(lVar24 + 400);
    if (*(uint **)(lVar24 + 400) == (uint *)0x0) {
      puVar33 = puVar28;
    }
    iVar37 = iVar34 + 0x1f;
    if (-1 < iVar34) {
      iVar37 = iVar34;
    }
    puVar33[iVar37 >> 5] = puVar33[iVar37 >> 5] | uVar21;
    uVar38 = 1;
    lVar50 = *(longlong *)(lVar24 + 0x170);
    lVar26 = lVar26 * 0x10;
    *(ulonglong *)(lVar50 + lVar26) = uVar6;
    *(undefined4 *)(lVar50 + 8 + lVar26) = 0xffffffff;
    uVar44 = *(int *)(lVar24 + 0x178) - *(int *)(lVar24 + 0x1a4);
    if ((uVar44 != 0) && (uVar44 != 1)) {
      lVar43 = lVar24 + 0x1a8;
      if (*(longlong *)(lVar24 + 0x1b0) != 0) {
        lVar43 = *(longlong *)(lVar24 + 0x1b0);
      }
      iVar20 = *(int *)(lVar43 + (ulonglong)(*(int *)(lVar24 + 0x1b8) - 1U & uVar18) * 4);
      if (iVar20 != -1) {
        lVar43 = *(longlong *)(lVar24 + 0x170);
        do {
          puVar3 = (ulonglong *)(lVar43 + (longlong)iVar20 * 0x10);
          if (*(ulonglong *)(lVar43 + (longlong)iVar20 * 0x10) == uVar6) {
            *puVar3 = uVar6;
            lVar50 = *(longlong *)(lVar24 + 0x170);
            if (*(int *)(lVar24 + 0x1a4) != 0) {
              *(int *)(lVar50 + (longlong)*(int *)(lVar24 + 0x1a0) * 0x10) = iVar34;
            }
            *(undefined4 *)(lVar50 + (longlong)iVar34 * 0x10) = 0xffffffff;
            uVar19 = 0xffffffff;
            if (0 < *(int *)(lVar24 + 0x1a4)) {
              uVar19 = *(undefined4 *)(lVar24 + 0x1a0);
            }
            *(undefined4 *)(lVar50 + (longlong)iVar34 * 0x10 + 4) = uVar19;
            *(int *)(lVar24 + 0x1a0) = iVar34;
            *(int *)(lVar24 + 0x1a4) = *(int *)(lVar24 + 0x1a4) + 1;
            if (*(uint **)(lVar24 + 400) != (uint *)0x0) {
              puVar28 = *(uint **)(lVar24 + 400);
            }
            puVar28[iVar37 >> 5] = puVar28[iVar37 >> 5] & ~uVar21;
            goto LAB_1456b8b22;
          }
          iVar20 = (int)puVar3[1];
        } while (iVar20 != -1);
      }
    }
    if (3 < uVar44) {
      uVar32 = (ulonglong)(uVar44 & 0xfffffffe) + 0xf;
      lVar43 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar43 == 0; lVar43 = lVar43 + -1) {
        }
      }
      uVar38 = 1 << ((byte)lVar43 & 0x1f);
    }
    if (((int)uVar44 < 1) || ((int)uVar38 <= *(int *)(lVar24 + 0x1b8))) {
      uVar18 = *(int *)(lVar24 + 0x1b8) - 1U & uVar18;
      *(uint *)(lVar50 + lVar26 + 0xc) = uVar18;
      lVar43 = *(longlong *)(lVar24 + 0x1b0);
      if (*(longlong *)(lVar24 + 0x1b0) == 0) {
        lVar43 = lVar24 + 0x1a8;
      }
      *(undefined4 *)(lVar50 + lVar26 + 8) =
           *(undefined4 *)
            (lVar43 + ((longlong)*(int *)(lVar24 + 0x1b8) - 1U & (longlong)(int)uVar18) * 4);
      lVar50 = *(longlong *)(lVar24 + 0x1b0);
      if (*(longlong *)(lVar24 + 0x1b0) == 0) {
        lVar50 = lVar24 + 0x1a8;
      }
      *(int *)(lVar50 + ((longlong)*(int *)(lVar24 + 0x1b8) - 1U & (longlong)(int)uVar18) * 4) =
           iVar34;
      goto LAB_1456b8b22;
    }
    *(uint *)(lVar24 + 0x1b8) = uVar38;
    plVar25 = (longlong *)(lVar24 + 0x1b0);
    if (*(longlong *)(lVar24 + 0x1b0) != 0) {
      FUN_1446efa72(plVar25,0,0,4);
      uVar38 = *(uint *)(lVar24 + 0x1b8);
      if (uVar38 == 0) goto LAB_1456b8b22;
    }
    lVar50 = lVar24 + 0x1a8;
    if (uVar38 == 1) {
      if (*plVar25 != 0) {
        FUN_1446efa72(plVar25,0,0,4);
      }
LAB_1456b8d44:
      uVar18 = 0;
      do {
        lVar26 = *(longlong *)(lVar24 + 0x1b0);
        if (*(longlong *)(lVar24 + 0x1b0) == 0) {
          lVar26 = lVar50;
        }
        *(undefined4 *)(lVar26 + (ulonglong)(*(int *)(lVar24 + 0x1b8) + 0x7fffffffU & uVar18) * 4) =
             0xffffffff;
        uVar18 = uVar18 + 1;
      } while (uVar38 != uVar18);
    }
    else {
      FUN_1446efa72(plVar25,0,uVar38,4);
      if (0 < (int)uVar38) goto LAB_1456b8d44;
    }
    iVar34 = *(int *)(lVar24 + 0x198);
    if (iVar34 == 0) {
      uVar32 = 0;
      uVar39 = 1;
      iVar20 = 0;
      iVar37 = 0;
    }
    else {
      puVar33 = *(uint **)(lVar24 + 400);
      if (*(uint **)(lVar24 + 400) == (uint *)0x0) {
        puVar33 = puVar28;
      }
      uVar18 = *puVar33;
      if (uVar18 == 0) {
        iVar37 = iVar34 + 0x1e;
        if (-1 < iVar34 + -1) {
          iVar37 = iVar34 + -1;
        }
        uVar32 = 0;
        uVar39 = (ulonglong)(uint)(iVar37 >> 5);
        if (iVar37 >> 5 < 1) {
          uVar39 = uVar32;
        }
        iVar37 = 0;
        do {
          if (uVar39 == uVar32) goto LAB_1456b8b22;
          iVar37 = iVar37 + 0x20;
          uVar18 = puVar33[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar32 = 0;
        iVar37 = 0;
      }
      uVar39 = (ulonglong)(-uVar18 & uVar18);
      uVar40 = uVar39 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar20 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (iVar34 <= iVar20) {
        iVar20 = iVar34;
      }
    }
    if (iVar20 < iVar34) {
      uVar18 = 0xffffffff;
      do {
        lVar26 = *(longlong *)(lVar24 + 0x170);
        lVar45 = (longlong)iVar20 * 0x10;
        uVar21 = ((uint)(*(ulonglong *)(lVar26 + lVar45) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar26 + lVar45) >> 4)) * -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        uVar40 = (longlong)(int)(uVar21 >> 0x10 ^ uVar21) & (longlong)*(int *)(lVar24 + 0x1b8) - 1U;
        iVar34 = (int)uVar40;
        *(int *)(lVar26 + 0xc + lVar45) = iVar34;
        lVar43 = *(longlong *)(lVar24 + 0x1b0);
        if (*(longlong *)(lVar24 + 0x1b0) == 0) {
          lVar43 = lVar50;
        }
        *(undefined4 *)(lVar26 + 8 + lVar45) =
             *(undefined4 *)(lVar43 + ((longlong)*(int *)(lVar24 + 0x1b8) - 1U & uVar40) * 4);
        lVar26 = *(longlong *)(lVar24 + 0x1b0);
        if (*(longlong *)(lVar24 + 0x1b0) == 0) {
          lVar26 = lVar50;
        }
        *(int *)(lVar26 + ((longlong)iVar34 & (longlong)*(int *)(lVar24 + 0x1b8) - 1U) * 4) = iVar20
        ;
        uVar18 = ~(uint)uVar39 & uVar18;
        puVar33 = *(uint **)(lVar24 + 400);
        if (*(uint **)(lVar24 + 400) == (uint *)0x0) {
          puVar33 = puVar28;
        }
        iVar34 = *(int *)(lVar24 + 0x198);
        iVar20 = (int)uVar32;
        lVar26 = (longlong)iVar20;
        uVar21 = puVar33[lVar26] & uVar18;
        if (uVar21 == 0) {
          iVar36 = iVar34 + 0x1e;
          if (-1 < iVar34 + -1) {
            iVar36 = iVar34 + -1;
          }
          iVar36 = iVar36 >> 5;
          iVar35 = iVar36;
          if (iVar36 < iVar20) {
            iVar35 = iVar20;
          }
          if (iVar36 <= iVar20) break;
          lVar43 = 0;
          while( true ) {
            iVar37 = iVar37 + 0x20;
            uVar21 = puVar33[lVar26 + lVar43 + 1];
            if (uVar21 != 0) break;
            lVar43 = lVar43 + 1;
            if (iVar35 - lVar26 == lVar43) goto LAB_1456b8b22;
          }
          uVar32 = (ulonglong)(iVar20 + (int)lVar43 + 1);
          uVar18 = 0xffffffff;
        }
        uVar39 = (ulonglong)(-uVar21 & uVar21);
        uVar40 = uVar39 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar20 = (iVar37 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      } while (iVar20 < iVar34);
    }
  }
LAB_1456b8b22:
  if ((DAT_14c760b78 == 0) && ((int)param_1[0x32] != 0)) {
    lVar24 = param_1[0x33];
    if (lVar24 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar24 = param_1[0x33];
    }
    FUN_144ad5b2c(plVar23,lVar24,param_1 + 7);
  }
LAB_1456b8b2f:
  if ((*(byte *)(uVar6 + 0xdf) & 1) == 0) {
    return;
  }
  if (puVar49 == (uint *)0x0) {
    lVar24 = param_1[0x33];
    if (lVar24 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      lVar24 = param_1[0x33];
    }
    puVar49 = (uint *)FUN_1456b17c6(lVar24,uVar6);
  }
  if ((iVar41 == -1) || (uVar18 = puVar49[8], uVar18 == 1)) {
    *puVar49 = uVar48 | 0x80000000;
  }
  else {
    uVar21 = *puVar49;
    if ((int)uVar21 < 0) {
      if (uVar18 != 0) {
        uVar21 = 0;
        do {
          puVar28 = *(uint **)(puVar49 + 6);
          if (*(uint **)(puVar49 + 6) == (uint *)0x0) {
            puVar28 = puVar49 + 2;
          }
          puVar28[(int)uVar21] = *puVar49 & 0x7fffffff;
          uVar21 = uVar21 + 1;
        } while (uVar18 != uVar21);
        uVar21 = *puVar49;
      }
      *puVar49 = uVar21 & 0x7fffffff;
    }
    puVar28 = puVar49 + 2;
    if (*(uint **)(puVar49 + 6) != (uint *)0x0) {
      puVar28 = *(uint **)(puVar49 + 6);
    }
    puVar28[lVar47] = uVar48;
  }
  *(byte *)((longlong)puVar49 + 7) = *(byte *)((longlong)puVar49 + 7) | 0x80;
  return;
}



// FUNCTION 1456bab0c FUN_1456bab0c body=63 status=ok
// SIG undefined FUN_1456bab0c(void)

void FUN_1456bab0c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456bab4c FUN_1456bab4c body=114 status=ok
// SIG undefined FUN_1456bab4c(void)

undefined8 FUN_1456bab4c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_14003c038(param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456babc0 FUN_1456babc0 body=477 status=ok
// SIG undefined FUN_1456babc0(void)

void FUN_1456babc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar11 = &DAT_14c9a1308;
  }
  else {
    plVar11 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdf770);
  }
  lVar4 = *plVar11;
  plVar11 = (longlong *)plVar11[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar12 = &DAT_14c9a1308;
  }
  else {
    plVar12 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdf778);
  }
  lVar5 = *plVar12;
  plVar12 = (longlong *)plVar12[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = FUN_14000584e(lVar4,1);
  }
  if (lVar5 == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = FUN_14000584e(lVar5,0);
  }
  bVar10 = FUN_1456bad9e(param_1);
  if (*(char *)(lVar3 + 0x150) == cVar8) {
    if (*(int *)(lVar3 + 0x154) == 0) {
      iVar13 = 1;
      goto LAB_1456bace8;
    }
    bVar7 = false;
  }
  else {
    iVar13 = *(int *)(lVar3 + 0x154) + 1;
LAB_1456bace8:
    *(char *)(lVar3 + 0x150) = cVar8;
    *(int *)(lVar3 + 0x154) = iVar13;
    bVar7 = true;
  }
  if (*(byte *)(lVar3 + 0x158) == (bVar10 | bVar9)) {
    if (*(int *)(lVar3 + 0x15c) == 0) {
      iVar13 = 1;
      goto LAB_1456bad01;
    }
    if (!bVar7) goto LAB_1456baca9;
  }
  else {
    iVar13 = *(int *)(lVar3 + 0x15c) + 1;
LAB_1456bad01:
    *(byte *)(lVar3 + 0x158) = bVar10 | bVar9;
    *(int *)(lVar3 + 0x15c) = iVar13;
  }
  puVar6 = *(ushort **)(lVar3 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
LAB_1456baca9:
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456bad99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x10))(plVar11);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456bad9e FUN_1456bad9e body=69 status=ok
// SIG undefined FUN_1456bad9e(void)

bool FUN_1456bad9e(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = FUN_141304ab2();
  if (cVar1 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x30);
    plVar4 = (longlong *)FUN_14101baae(uVar3);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar4 + 0x328))(plVar4);
      return iVar2 < 1;
    }
  }
  return false;
}



// FUNCTION 1456bade4 FUN_1456bade4 body=149 status=ok
// SIG undefined FUN_1456bade4(void)

char * FUN_1456bade4(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x02';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  uVar2 = FUN_14001cc68(0x270,0x10);
  FUN_1456bae7a(uVar2,param_1);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  if ((*param_1 == '\0') && (DAT_14c8445d9 == '\0')) {
    DAT_14c8445d9 = 1;
    cVar1 = FUN_14003c6fa(uVar2);
    *param_1 = cVar1;
    DAT_14c8445d9 = '\0';
  }
  return param_1;
}



// FUNCTION 1456bae7a FUN_1456bae7a body=392 status=ok
// SIG undefined FUN_1456bae7a(void)

undefined8 * FUN_1456bae7a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x32),4000);
  param_1[0x37] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x38),4000);
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x49));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x49),4000);
  return param_1;
}



// FUNCTION 1456bb002 FUN_1456bb002 body=149 status=ok
// SIG undefined FUN_1456bb002(void)

void FUN_1456bb002(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 8);
  piVar2 = *(int **)plVar1[1];
  if ((int *)((undefined8 *)plVar1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*plVar1 + 0x170))(plVar1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(plVar1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar2 != 0;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bb098 FUN_1456bb098 body=106 status=ok
// SIG undefined FUN_1456bb098(void)

void FUN_1456bb098(PSRWLOCK param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  
  AcquireSRWLockShared(param_1);
  lVar1 = *(longlong *)((longlong)param_1[3].Ptr + (longlong)(param_2 / 0x555) * 8);
  FUN_144724f4c(param_3,*(undefined8 *)(lVar1 + (longlong)(param_2 % 0x555) * 0x18),
                *(undefined4 *)(lVar1 + 8 + (longlong)(param_2 % 0x555) * 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001456bb0fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(param_1);
  return;
}



// FUNCTION 1456bb102 FUN_1456bb102 body=63 status=ok
// SIG undefined FUN_1456bb102(void)

void FUN_1456bb102(char *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if ((*param_1 == '\x03') && (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0))
  {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = '\x01';
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_144a1314c(param_1 + 0x28);
  return;
}



// FUNCTION 1456bb142 FUN_1456bb142 body=145 status=ok
// SIG undefined FUN_1456bb142(void)

ulonglong FUN_1456bb142(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  bool bVar7;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    pcVar1 = (char *)(param_1 + 0x19);
    LOCK();
    bVar7 = *(char *)(param_1 + 0x19) == '\0';
    if (bVar7) {
      *(char *)(param_1 + 0x19) = '\x01';
    }
    UNLOCK();
    if (!bVar7) {
      FUN_1447d2058();
    }
    bVar3 = *(byte *)(param_1 + 0x18);
    if ((bVar3 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
        FUN_144724bd8(param_1,iVar4);
      }
      lVar5 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar5 = param_1;
      }
      *(undefined8 *)(lVar5 + (longlong)iVar4 * 8) = param_2;
    }
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar3) ^ 1;
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 0xffffff01;
}



// FUNCTION 1456bb1d4 FUN_1456bb1d4 body=118 status=ok
// SIG undefined FUN_1456bb1d4(void)

char FUN_1456bb1d4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = *(char *)(param_1 + 0x18) == '\0';
  if (bVar4) {
    *(char *)(param_1 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1447d2058();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_144724bd8(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = param_2;
  LOCK();
  cVar2 = *(char *)(param_1 + 0x18);
  bVar4 = cVar2 == '\x01';
  if (bVar4) {
    *(char *)(param_1 + 0x18) = '\0';
    cVar2 = '\x01';
  }
  UNLOCK();
  if (bVar4) {
    return cVar2;
  }
  cVar2 = FUN_14008cdb0(param_1 + 0x18);
  return cVar2;
}



// FUNCTION 1456bb256 FUN_1456bb256 body=316 status=ok
// SIG undefined FUN_1456bb256(void)

undefined8 * FUN_1456bb256(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aeecfa0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 1;
  param_1[0x74] = 0;
  FUN_1446f470e(&local_28,L"DynamicMeshComponent",1);
  uVar1 = FUN_1411674f6();
  local_38 = 1;
  local_30 = 0;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  param_1[0x72] = plVar2;
  (**(code **)(*plVar2 + 0x588))(plVar2,2);
  FUN_14127091c(param_1[0x72],0);
  (**(code **)(*(longlong *)param_1[0x72] + 0x728))((longlong *)param_1[0x72],DAT_14cad0ef8,1);
  *(undefined1 *)(param_1[0x72] + 0x900) = 0;
  plVar2 = (longlong *)param_1[0x72];
  uVar1 = FUN_1447277f0(0);
  (**(code **)(*plVar2 + 0x638))(plVar2,0,uVar1);
  FUN_14092e51e(param_1,param_1[0x72]);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bb394 FUN_1456bb394 body=158 status=ok
// SIG undefined FUN_1456bb394(void)

void FUN_1456bb394(longlong *param_1,int param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((int)param_1[0xd6] <= param_2) {
    FUN_140ddbde4(param_1 + 0xd5,param_2 + 1,0);
  }
  lVar2 = param_1[0xd5];
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(lVar2 + (longlong)param_2 * 8) = param_3;
  FUN_1448215fa(param_1);
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar2 != 0) {
    cVar1 = FUN_144727810(lVar2);
    if (cVar1 != '\0') {
      FUN_1406cc5aa(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1456bb432 FUN_1456bb432 body=82 status=ok
// SIG undefined FUN_1456bb432(void)

void FUN_1456bb432(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (1 < (longlong)DAT_14cb016e0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(DAT_14cb016d8 + 0x860 + lVar1) == param_2) {
        *param_1 = *(undefined8 *)(DAT_14cb016d8 + 0x878 + lVar1);
        return;
      }
      lVar1 = lVar1 + 0x440;
    } while ((longlong)DAT_14cb016e0 * 0x440 + -0x440 != lVar1);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1456bb484 FUN_1456bb484 body=189 status=ok
// SIG undefined FUN_1456bb484(void)

undefined8 * FUN_1456bb484(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_1407c869a(param_2 + 0xc4,local_48,0);
    FUN_140ba7826(local_48 + 2,L"__SubsurfaceProfile",local_48);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(param_1,iVar1,local_48[2],1);
    if (local_48[2] != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bb542 FUN_1456bb542 body=1231 status=ok
// SIG undefined FUN_1456bb542(void)

void FUN_1456bb542(longlong param_1,int param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 local_5a;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca85180 == (longlong *)0x0) {
    plVar22 = (longlong *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
    plVar23 = plVar22 + 9;
    if (DAT_14ca85108 < plVar23) {
      FUN_140023dd8(&DAT_14ca85100,0x58);
      plVar22 = (longlong *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
      plVar23 = plVar22 + 9;
    }
    puVar15 = (undefined8 *)((longlong)plVar23 + 0xfU & 0xfffffffffffffff0);
    DAT_14ca85100 = puVar15 + 0x16;
    if (DAT_14ca85108 < DAT_14ca85100) {
      DAT_14ca85100 = plVar23;
      FUN_140023dd8(&DAT_14ca85100,0xc0);
      puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0);
      DAT_14ca85100 = puVar15 + 0x16;
    }
    *puVar15 = DAT_14ca85188;
    puVar15[1] = &DAT_14ca85100;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    *(undefined8 *)((longlong)puVar15 + 0x2e) = 0;
    if (DAT_14c872d30 == 0) {
      FUN_145bdc178();
      bVar24 = DAT_14c872d30 != 0;
      puVar15[7] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x56) = 0;
      if (bVar24) goto LAB_1456bb78f;
      FUN_145bdc178();
      bVar24 = DAT_14c872d30 != 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x7e) = 0;
      if (bVar24) goto LAB_1456bb7a4;
      FUN_145bdc178();
      bVar24 = DAT_14c872d30 == 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x14] = 0;
      *(undefined8 *)((longlong)puVar15 + 0xa6) = 0;
      if (bVar24) {
        FUN_145bdc178();
      }
    }
    else {
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[7] = 0;
      puVar15[8] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x56) = 0;
LAB_1456bb78f:
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      *(undefined8 *)((longlong)puVar15 + 0x7e) = 0;
LAB_1456bb7a4:
      puVar15[0x13] = 0;
      puVar15[0x14] = 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      *(undefined8 *)((longlong)puVar15 + 0xa6) = 0;
    }
    DAT_14ca85188 = puVar15;
    *plVar22 = (longlong)puVar15;
    plVar22[1] = 0;
    *(undefined4 *)(plVar22 + 2) = 0;
    plVar22[3] = 0;
    *(undefined4 *)(plVar22 + 4) = 0;
    plVar22[5] = 0;
    *(undefined4 *)(plVar22 + 6) = 0;
    plVar22[7] = 0;
    *(undefined4 *)(plVar22 + 8) = 0;
    DAT_14ca85180 = plVar22;
  }
  plVar23 = DAT_14ca85180;
  lVar14 = (longlong)param_2;
  iVar18 = (int)DAT_14ca85180[6] + (int)DAT_14ca85180[4];
  iVar19 = iVar18 + (int)DAT_14ca85180[8];
  if (iVar19 != 0 && SCARRY4(iVar18,(int)DAT_14ca85180[8]) == iVar19 < 0) {
    DAT_14ca85180[1] = 0;
    *(undefined4 *)(plVar23 + 2) = 0;
    plVar23[3] = 0;
    *(undefined4 *)(plVar23 + 4) = 0;
    plVar23[5] = 0;
    *(undefined4 *)(plVar23 + 6) = 0;
    plVar23[7] = 0;
    *(undefined4 *)(plVar23 + 8) = 0;
  }
  plVar23 = DAT_14ca85180;
  if (*(char *)(param_1 + 0xe8 + lVar14 * 4) == '\0') goto LAB_1456bb59e;
  uVar4 = *(undefined2 *)(param_1 + 0xe6 + lVar14 * 4);
  if (*(char *)(param_1 + 0xe9 + lVar14 * 4) == '\x06') {
    local_68 = &local_5a;
    local_5a = uVar4;
    local_58 = param_3;
    FUN_14175f4e2(*DAT_14ca85180,*DAT_14ca85180 + 0x88,DAT_14ca85180 + 7);
    goto LAB_1456bb59e;
  }
  lVar17 = *DAT_14ca85180;
  puVar1 = (ulonglong *)(lVar17 + 0x60);
  lVar14 = (longlong)(int)DAT_14ca85180[6] + 1;
  puVar15 = *(undefined8 **)(lVar17 + 0x60);
  if ((longlong)(int)DAT_14ca85180[6] == 0) {
    puVar15 = (undefined8 *)((longlong)puVar15 + 7U & 0xfffffffffffffff8);
    puVar20 = puVar15 + 2;
    puVar16 = puVar15;
    if (*(undefined8 **)(lVar17 + 0x68) < puVar20) {
      FUN_140023dd8(puVar1,0x18);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar20 = puVar15 + 2;
      puVar16 = puVar15;
    }
LAB_1456bb6e1:
    *puVar1 = (ulonglong)puVar20;
  }
  else {
    puVar20 = puVar15 + 2;
    if (puVar20 <= *(undefined8 **)(lVar17 + 0x68)) {
      puVar16 = (undefined8 *)DAT_14ca85180[5];
      goto LAB_1456bb6e1;
    }
    puVar16 = (undefined8 *)((longlong)puVar15 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + lVar14 * 2;
    if (*(undefined8 **)(lVar17 + 0x68) < puVar15) {
      FUN_140023dd8(puVar1,(int)lVar14 * 0x10 | 8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + lVar14 * 2;
    }
    *puVar1 = (ulonglong)puVar15;
    puVar15 = puVar16;
    if (0 < (int)plVar23[6]) {
      lVar17 = 0;
      lVar21 = 0;
      do {
        puVar2 = (undefined4 *)(plVar23[5] + lVar17);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)puVar16 + lVar17);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        lVar21 = lVar21 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar21 < (int)plVar23[6]);
      puVar15 = (undefined8 *)(lVar17 + (longlong)puVar16);
    }
  }
  *puVar15 = param_3;
  *(undefined2 *)(puVar15 + 1) = uVar4;
  *(undefined1 *)((longlong)puVar15 + 10) = 0;
  plVar23[5] = (longlong)puVar16;
  *(int *)(plVar23 + 6) = (int)lVar14;
LAB_1456bb59e:
  uVar13 = DAT_14ca85298;
  iVar18 = (int)plVar23[6] + (int)plVar23[4];
  iVar19 = iVar18 + (int)plVar23[8];
  if (iVar19 != 0 && SCARRY4(iVar18,(int)plVar23[8]) == iVar19 < 0) {
    puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    plVar22 = puVar15 + 0xb;
    if (DAT_14ca85108 < plVar22) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar15 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      plVar22 = puVar15 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = plVar22;
    *DAT_14ca85130 = puVar15;
    DAT_14ca85130 = puVar15 + 1;
    lVar14 = plVar23[7];
    lVar9 = plVar23[8];
    lVar17 = plVar23[5];
    lVar10 = plVar23[6];
    lVar21 = plVar23[3];
    lVar11 = plVar23[4];
    lVar5 = plVar23[1];
    lVar12 = plVar23[2];
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a1e7fd8;
    puVar15[2] = uVar13;
    puVar15[3] = lVar5;
    *(int *)(puVar15 + 4) = (int)lVar12;
    puVar15[5] = lVar21;
    *(int *)(puVar15 + 6) = (int)lVar11;
    puVar15[7] = lVar17;
    *(int *)(puVar15 + 8) = (int)lVar10;
    puVar15[9] = lVar14;
    *(int *)(puVar15 + 10) = (int)lVar9;
    plVar23[1] = 0;
    *(undefined4 *)(plVar23 + 2) = 0;
    plVar23[3] = 0;
    *(undefined4 *)(plVar23 + 4) = 0;
    plVar23[5] = 0;
    *(undefined4 *)(plVar23 + 6) = 0;
    plVar23[7] = 0;
    *(undefined4 *)(plVar23 + 8) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456bba12 FUN_1456bba12 body=377 status=ok
// SIG undefined FUN_1456bba12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456bba12(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  ulonglong uVar6;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_2 + 0x48);
  iVar1 = *(int *)(param_2 + 0x50);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3be38) {
    FUN_144b3d300(&DAT_14cb3be38);
    if (DAT_14cb3be38 == -1) {
      FUN_145dc068e(local_38);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FNiagaraDataInterfaceCurveParameters";
      local_48 = 0;
      local_60 = 0x20;
      local_68 = 0x25;
      local_58 = local_38;
      FUN_140b49562(&DAT_14cb3bdb8,0,1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3d970);
      _Init_thread_footer(&DAT_14cb3be38);
    }
  }
  uVar5 = iVar1 + 0xfU & 0xfffffff0;
  uVar6 = (ulonglong)uVar5;
  *(uint *)(param_2 + 0x50) = uVar5 + _DAT_14cb3bdf4;
  lVar3 = *(longlong *)(param_2 + 0x38);
  *(undefined4 *)(lVar3 + uVar6) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 4 + uVar6) = *(undefined4 *)(lVar2 + 0x14);
  *(undefined4 *)(lVar3 + 8 + uVar6) = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(lVar3 + 0xc + uVar6) = *(undefined4 *)(lVar2 + 0x1c);
  *(undefined4 *)(lVar3 + 0x10 + uVar6) = *(undefined4 *)(lVar2 + 0x20);
  lVar4 = *(longlong *)(lVar2 + 0x30);
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    lVar4 = DAT_14cb427b0;
  }
  *(longlong *)(lVar3 + 0x18 + uVar6) = lVar4;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bbb8c FUN_1456bbb8c body=983 status=ok
// SIG undefined FUN_1456bbb8c(void)

undefined8 * FUN_1456bbb8c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar4 = *param_3;
  bVar2 = *(byte *)(param_1 + 4);
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(byte *)(param_1 + 4) = bVar2 & 0xe0;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  *(char *)((longlong)param_1 + 0x24) = (((uint)uVar4 >> 0x12 & 1) == 0 && (param_4 & 4) == 0) << 6;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x70;
  if ((param_4 & 2) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0xfffff;
    *(undefined4 *)(param_1 + 0xb) = 0xfffff;
    *(byte *)(param_1 + 4) = bVar2 & 0xe0 | 0xf;
    *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  }
  *param_1 = &PTR_FUN_14a38ae50;
  uVar10 = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined1 (*) [16])((longlong)param_1 + 0x6c) = (undefined1  [16])0x0;
  *(int *)((longlong)param_1 + 0x7c) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  param_1[0x10] = 0x100000000;
  param_1[0x11] = 0x1000100000001;
  *(undefined4 *)(param_1 + 0x12) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_3 + 0x32);
  uVar4 = *param_3;
  param_1[0xc] = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x93) = *(undefined1 *)((longlong)param_3 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)((longlong)param_3 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)((longlong)param_3 + 0x24);
  *(undefined2 *)((longlong)param_1 + 0x8c) = *(undefined2 *)((longlong)param_3 + 0x2c);
  *(undefined2 *)((longlong)param_1 + 0x8e) = *(undefined2 *)((longlong)param_3 + 0x2e);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_3 + 6);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_3 + 0x31);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar6 = *(undefined4 *)(param_3 + 2);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 4);
  *(undefined1 *)((longlong)param_1 + 0x95) = *(undefined1 *)((longlong)param_3 + 0x35);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(byte *)(param_1 + 0x13) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  uVar8 = 0x200;
  if (*(char *)((longlong)param_3 + 0x33) != '\v') {
    uVar8 = (uint)(*(char *)((longlong)param_3 + 0x33) == ',') * 0x100 + 0x100;
  }
  iVar9 = ((uint)((byte)(*(char *)((longlong)param_3 + 0x32) - 3U) < 2) * 5 + 1) *
          (uint)*(ushort *)((longlong)param_3 + 0x2e);
  bVar2 = *(byte *)(param_3 + 6);
  uVar11 = iVar9 * 0x10000 | uVar8 | (uint)bVar2;
  *(uint *)(param_1 + 0x15) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(uint *)(param_1 + 0x16) = uVar11;
  uVar8 = (uVar8 >> 8) * (uint)bVar2 * iVar9;
  *(short *)((longlong)param_1 + 0xb4) = (short)uVar8;
  *(undefined1 (*) [16])(param_1 + 0x17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x19) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1b) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1d) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1f) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x21) = (undefined1  [16])0x0;
  param_1[0x23] = 0;
  if (((uint)uVar4 >> 10 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0x80000;
  }
  uVar11 = uVar8 & 0xffff;
  if (uVar11 != 0) {
    *(uint *)(param_1 + 0x18) = uVar11;
    FUN_14473d6dc(param_1 + 0x17);
    memset((void *)param_1[0x17],0,(ulonglong)(uVar11 << 3));
    uVar8 = (uint)*(ushort *)((longlong)param_1 + 0xb4);
    uVar10 = *(uint *)(param_1 + 0x1a);
  }
  plVar1 = param_1 + 0x19;
  uVar8 = uVar8 & 0xffff;
  uVar11 = uVar8 - uVar10;
  if (uVar11 == 0 || (int)uVar8 < (int)uVar10) {
    if (uVar8 < uVar10) {
      *(uint *)(param_1 + 0x1a) = uVar8;
      FUN_14742d3f8(plVar1);
    }
  }
  else {
    *(uint *)(param_1 + 0x1a) = uVar8;
    if (*(int *)((longlong)param_1 + 0xd4) - uVar10 < uVar11) {
      FUN_14473d6dc(plVar1);
    }
    memset((void *)((longlong)(int)uVar10 * 8 + *plVar1),0,(longlong)(int)uVar11 << 3);
  }
  plVar1 = param_1 + 0x1b;
  uVar3 = *(ushort *)((longlong)param_1 + 0xb4);
  uVar10 = *(uint *)(param_1 + 0x1c);
  uVar8 = (uint)uVar3;
  if ((int)uVar10 < (int)(uint)uVar3) {
    lVar12 = (ulonglong)uVar3 - (longlong)(int)uVar10;
    *(uint *)(param_1 + 0x1c) = uVar8;
    if (*(int *)((longlong)param_1 + 0xe4) - uVar10 < (uint)lVar12) {
      FUN_14473d6dc(plVar1);
    }
    memset((void *)((longlong)(int)uVar10 * 8 + *plVar1),0,lVar12 * 8);
  }
  else if (uVar3 <= uVar10 && uVar10 != uVar8) {
    *(uint *)(param_1 + 0x1c) = uVar8;
    FUN_14742d3f8(plVar1);
  }
  plVar1 = param_1 + 0x1d;
  uVar3 = *(ushort *)((longlong)param_1 + 0xb4);
  uVar10 = *(uint *)(param_1 + 0x1e);
  uVar8 = (uint)uVar3;
  if ((int)uVar10 < (int)(uint)uVar3) {
    *(uint *)(param_1 + 0x1e) = uVar8;
    if (*(int *)((longlong)param_1 + 0xf4) - uVar10 < uVar8 - uVar10) {
      FUN_14473d806(plVar1,uVar10);
    }
    FUN_14473d6b1((longlong)(int)uVar10 * 0x40 + *plVar1,uVar8 - uVar10);
  }
  else if (uVar3 <= uVar10 && uVar10 != uVar8) {
    *(uint *)(param_1 + 0x1e) = uVar8;
    FUN_14742f742(plVar1);
  }
  return param_1;
}



// FUNCTION 1456bbf64 FUN_1456bbf64 body=132 status=ok
// SIG undefined FUN_1456bbf64(void)

void FUN_1456bbf64(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456bbfea FUN_1456bbfea body=410 status=ok
// SIG undefined FUN_1456bbfea(void)

float FUN_1456bbfea(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  
  fVar16 = 0.0;
  if ((*DAT_14cb0b120 != 0) && (*DAT_14cb0b138 != 0)) {
    uVar10 = *(uint *)(param_1 + 0xa0);
    iVar5 = (int)(param_2 >> 0x20);
    if ((int)uVar10 < 1) {
      uVar15 = 0;
    }
    else {
      lVar14 = *(longlong *)(param_1 + 0x98);
      uVar15 = 0;
      do {
        uVar1 = uVar15 + (uVar10 >> 1);
        lVar6 = (ulonglong)uVar1 * 0x10;
        iVar4 = *(int *)(lVar14 + 8 + lVar6);
        if (iVar4 == (int)param_2) {
          iVar4 = *(int *)(lVar6 + lVar14 + 0xc) - iVar5;
        }
        else {
          iVar4 = FUN_14002c2bd(iVar4,param_2 & 0xffffffff);
        }
        if (iVar4 < 0) {
          uVar15 = uVar1 + (uVar10 & 1);
        }
        bVar3 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar3);
      uVar10 = *(uint *)(param_1 + 0xa0);
    }
    if ((int)uVar15 < (int)uVar10) {
      uVar11 = (ulonglong)uVar15;
      lVar14 = uVar11 * 0x10;
      if (*(int *)(*(longlong *)(param_1 + 0x98) + 8 + lVar14) == (int)param_2) {
        iVar5 = iVar5 - *(int *)(*(longlong *)(param_1 + 0x98) + lVar14 + 0xc);
      }
      else {
        iVar5 = FUN_14002c2bd(param_2 & 0xffffffff);
      }
      if (-1 < iVar5) {
        lVar8 = (longlong)*(int *)(param_1 + 0xa0);
        lVar6 = uVar11 + 1;
        if ((longlong)(uVar11 + 1) <= lVar8) {
          lVar6 = lVar8;
        }
        lVar12 = uVar11 - 1;
        lVar9 = lVar14 + 0x18;
        do {
          lVar13 = lVar6 + -1;
          if (lVar8 <= lVar12 + 2) break;
          lVar12 = lVar12 + 1;
          puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + lVar9);
          lVar9 = lVar9 + 0x10;
          lVar13 = lVar12;
        } while (*puVar2 == param_2);
        if ((int)uVar15 <= (int)lVar13) {
          iVar5 = ((int)lVar13 - uVar15) + 1;
          piVar7 = (int *)(*(longlong *)(param_1 + 0x98) + lVar14 + 4);
          fVar16 = 0.0;
          do {
            fVar17 = *(float *)(param_3 + 4 + (longlong)*piVar7 * 4) / (float)piVar7[-1];
            if (fVar17 <= fVar16) {
              fVar17 = fVar16;
            }
            fVar16 = fVar17;
            piVar7 = piVar7 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
  }
  return fVar16;
}



// FUNCTION 1456bc184 FUN_1456bc184 body=831 status=ok
// SIG undefined FUN_1456bc184(void)

undefined8 * FUN_1456bc184(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14b455300;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = FUN_14064813b(param_3);
  param_1[4] = lVar6;
  if (lVar6 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar6);
  }
  bVar5 = DAT_14c950c29;
  param_1[5] = 0;
  param_1[6] = param_2;
  if ((param_2 != 0) && ((bVar5 & 1) != 0)) {
    FUN_14689c22e(param_2);
  }
  uVar7 = FUN_14001cc68(0x18,0x10);
  FUN_1456bc4c4(uVar7,param_1[4]);
  puVar3 = (undefined8 *)param_1[5];
  param_1[5] = uVar7;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  uVar7 = param_1[4];
  uVar4 = param_1[6];
  FUN_1446f470e(&local_48,L"UITexture",1);
  FUN_14016d8b0(uVar7,local_48,uVar4);
  uVar7 = param_1[4];
  plVar8 = (longlong *)FUN_144a7d136();
  plVar9 = (longlong *)plVar8[0x22];
  if (plVar9 == (longlong *)0x0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    plVar9 = (longlong *)plVar8[0x22];
  }
  uVar11 = (**(code **)(*plVar9 + 0x2a8))(plVar9,0);
  FUN_1446f470e(&local_50,L"GammaCorrectionExponent",1);
  FUN_14472da24(uVar7,local_50,uVar11);
  lVar6 = FUN_14001cc68(0xb0,0x10);
  local_68 = (undefined2 *)&DAT_3f8000003f800000;
  FUN_1456bc516(lVar6,param_1[4]);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a55e630;
  plVar8[2] = lVar6;
  param_1[2] = lVar6;
  plVar9 = (longlong *)param_1[3];
  if (plVar8 == plVar9) {
    if (plVar8 == (longlong *)0x0) goto LAB_1456bc33d;
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_1456bc33d;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar8;
  }
  else {
    param_1[3] = plVar8;
    if (plVar9 == (longlong *)0x0) goto LAB_1456bc33d;
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1456bc33d;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1456bc33d:
  lVar6 = param_1[6];
  if (lVar6 != 0) {
    uVar7 = param_1[4];
    local_78 = 0;
    uStack_70 = 0;
    FUN_144a83b10(&local_78,*(undefined4 *)(lVar6 + 0xc));
    FUN_140ba7826(&local_68,L"UITexture",&local_78);
    puVar10 = local_68;
    if (local_60 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_58,puVar10,1);
    FUN_14016d8b0(uVar7,local_58,lVar6);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uVar11 = (**(code **)(*(longlong *)param_1[6] + 0x358))();
    uVar12 = (**(code **)(*(longlong *)param_1[6] + 0x350))();
    lVar6 = param_1[2];
    *(undefined4 *)(lVar6 + 0x20) = uVar12;
    *(undefined4 *)(lVar6 + 0x24) = uVar11;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bc4c4 FUN_1456bc4c4 body=81 status=ok
// SIG undefined FUN_1456bc4c4(void)

undefined8 * FUN_1456bc4c4(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14aaf8f40;
  param_1[2] = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  return param_1;
}



// FUNCTION 1456bc516 FUN_1456bc516 body=231 status=ok
// SIG undefined FUN_1456bc516(void)

undefined8 * FUN_1456bc516(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  local_60 = &DAT_149e1e2f8;
  local_50 = 0;
  local_70 = 1;
  local_78 = 0;
  local_68 = param_3;
  local_58 = param_2;
  FUN_1412ce282(0,3,0);
  *param_1 = &PTR_FUN_14a55dba0;
  FUN_144750a86(param_2,&local_38,0,0);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  param_1[0x15] = local_40;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456bc5fe FUN_1456bc5fe body=38 status=ok
// SIG undefined FUN_1456bc5fe(void)

void FUN_1456bc5fe(undefined4 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/Core/Private/Experimental/ConcurrentLinearAllocator.cpp",0x17,
                L"Trying to resize TConcurrentLinearArrayAllocator to an invalid size of %d with element size %I64u"
                ,param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1456bc624 FUN_1456bc624 body=133 status=ok
// SIG undefined FUN_1456bc624(void)

void FUN_1456bc624(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1456bc6aa(param_1 + 0x10);
  return;
}



// FUNCTION 1456bc6aa FUN_1456bc6aa body=55 status=ok
// SIG undefined FUN_1456bc6aa(void)

void FUN_1456bc6aa(longlong *param_1)

{
  FUN_1456bc6e2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456bc6e2 FUN_1456bc6e2 body=397 status=ok
// SIG undefined FUN_1456bc6e2(void)

void FUN_1456bc6e2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x68;
      *(undefined4 *)(lVar2 + 0x58 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x50 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(lVar2 + lVar5 + 0x10);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14059f004(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456bc872 FUN_1456bc872 body=279 status=ok
// SIG undefined FUN_1456bc872(void)

int FUN_1456bc872(longlong param_1,undefined4 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  undefined4 *local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar2 = 0;
  if (param_4 < *(int *)(param_1 + 0x60)) {
    lVar4 = (longlong)param_4;
    lVar3 = lVar4 * 0x88;
    iVar2 = 0;
    do {
      local_88 = *(undefined8 *)(param_2 + 0xc);
      local_b8 = *param_2;
      uStack_b4 = param_2[1];
      uStack_b0 = param_2[2];
      uStack_ac = param_2[3];
      local_a8 = param_2[4];
      uStack_a4 = param_2[5];
      uStack_a0 = param_2[6];
      uStack_9c = param_2[7];
      local_98 = param_2[8];
      uStack_94 = param_2[9];
      uStack_90 = param_2[10];
      uStack_8c = param_2[0xb];
      local_80 = (undefined4)lVar4;
      local_78 = *param_3;
      local_70 = param_3[1];
      local_68 = FUN_1437af2cc;
      local_60 = &local_b8;
      local_50 = &local_68;
      local_58 = FUN_147dc2bc0;
      iVar1 = FUN_1437ab1a2(*(longlong *)(param_1 + 0x58) + lVar3,param_2,&local_58);
      iVar2 = iVar2 + iVar1;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x88;
    } while (lVar4 < *(int *)(param_1 + 0x60));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bc98a FUN_1456bc98a body=955 status=ok
// SIG undefined FUN_1456bc98a(void)

int * FUN_1456bc98a(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  char cVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1446efaca(param_1,iVar16);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar5 = iVar8 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar13 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar13 = iVar8;
    }
    if (iVar13 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar5 = iVar8;
        }
        else {
          uVar15 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar15) {
              uVar14 = uVar15;
            }
          }
          else {
            uVar14 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar14 << 2,0);
          iVar5 = (int)(uVar10 >> 2);
          iVar9 = -0x20;
          if ((int)uVar15 <= iVar5) {
            iVar9 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar11,iVar5);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar5 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar11;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar6 = (longlong)iVar16;
    iVar8 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar8;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  uVar15 = 1 << ((byte)iVar16 & 0x1f);
  plVar11 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  iVar8 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar8 = iVar16;
  }
  puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 | uVar15;
  lVar3 = *param_1;
  lVar6 = lVar6 * 0x10;
  uVar10 = *param_3;
  *(ulonglong *)(lVar3 + lVar6) = uVar10;
  *(undefined4 *)(lVar3 + 8 + lVar6) = 0xffffffff;
  uVar14 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar5 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x10) == uVar10) {
          *puVar1 = uVar10;
          lVar4 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x10) = iVar16;
          }
          *(undefined4 *)(lVar4 + (longlong)iVar16 * 0x10) = 0xffffffff;
          uVar17 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar17 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar4 + (longlong)iVar16 * 0x10 + 4) = uVar17;
          *(int *)(param_1 + 6) = iVar16;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar11 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar11 = (longlong *)param_1[4];
          }
          puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar8 >> 5) * 4);
          *puVar2 = *puVar2 & ~uVar15;
          cVar18 = '\x01';
          goto LAB_1456bcb4d;
        }
        iVar5 = (int)puVar1[1];
      } while (iVar5 != -1);
    }
  }
  cVar18 = '\0';
  iVar5 = iVar16;
LAB_1456bcb4d:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar18;
  }
  if (cVar18 == '\0') {
    uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar15 < 4) {
      iVar16 = 1;
    }
    else {
      uVar10 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar16 <= (int)param_1[9])) {
      uVar14 = (int)param_1[9] - 1U & uVar14;
      *(uint *)(lVar3 + lVar6 + 0xc) = uVar14;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      *(undefined4 *)(lVar3 + lVar6 + 8) =
           *(undefined4 *)
            ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
           iVar5;
    }
    else {
      *(int *)(param_1 + 9) = iVar16;
      FUN_147dd5ed6(param_1);
    }
  }
  *param_2 = iVar5;
  return param_2;
}



// FUNCTION 1456bcd46 FUN_1456bcd46 body=147 status=ok
// SIG undefined FUN_1456bcd46(void)

void FUN_1456bcd46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456bcdda FUN_1456bcdda body=80 status=ok
// SIG undefined FUN_1456bcdda(void)

undefined8 * FUN_1456bcdda(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) goto LAB_1456bcdff;
  }
  lVar2 = 0;
LAB_1456bcdff:
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 1456bce2a FUN_1456bce2a body=134 status=ok
// SIG undefined FUN_1456bce2a(void)

undefined8 * FUN_1456bce2a(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  code *local_38;
  undefined8 **local_30;
  code **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cb78540 != 0) {
    local_30 = &local_40;
    local_28 = &local_38;
    local_38 = FUN_143d190e2;
    local_18 = &local_28;
    local_20 = FUN_1400460c0;
    local_40 = param_1;
    FUN_140045d3e(DAT_14cb78540,&local_20,0);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bceb2 FUN_1456bceb2 body=147 status=ok
// SIG undefined FUN_1456bceb2(void)

void FUN_1456bceb2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456bcf46 FUN_1456bcf46 body=38 status=ok
// SIG undefined FUN_1456bcf46(void)

undefined8 FUN_1456bcf46(undefined8 param_1,int param_2)

{
  FUN_1456bcf6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456bcf6c FUN_1456bcf6c body=79 status=ok
// SIG undefined FUN_1456bcf6c(void)

void FUN_1456bcf6c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149e325a0;
  FUN_1456bcffa();
  FUN_1456bcfbc(param_1[0x10d]);
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x0001456bcfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1456bcfbc FUN_1456bcfbc body=61 status=ok
// SIG undefined FUN_1456bcfbc(void)

void FUN_1456bcfbc(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1456bcffa FUN_1456bcffa body=113 status=ok
// SIG undefined FUN_1456bcffa(void)

void FUN_1456bcffa(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) goto LAB_1456bd044;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = FUN_1456bd06c();
    FUN_140047918(param_1,L"Log file closed, %s",uVar2);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) goto LAB_1456bd031;
  }
  else {
LAB_1456bd031:
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1456bd044:
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1456bd06c FUN_1456bd06c body=106 status=ok
// SIG undefined FUN_1456bd06c(void)

wchar_t * FUN_1456bd06c(void)

{
  wchar_t *_Dest;
  longlong lVar1;
  size_t sVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  _Dest = (wchar_t *)(lVar1 + 0x460);
  *_Dest = L'\0';
  FUN_1456bd17e(_Dest);
  wcscat(_Dest,L" ");
  sVar2 = wcslen(_Dest);
  FUN_1456bd0d6(lVar1 + (longlong)(int)sVar2 * 2 + 0x460,0x400 - (longlong)(int)sVar2);
  return _Dest;
}



// FUNCTION 1456bd0d6 FUN_1456bd0d6 body=167 status=ok
// SIG undefined FUN_1456bd0d6(void)

undefined8 FUN_1456bd0d6(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = local_50;
  local_68 = &local_4c;
  local_70 = &local_48;
  local_78 = &local_44;
  FUN_14004785a(local_34,local_38,local_3c,local_40);
  local_70 = (undefined4 *)CONCAT44(local_70._4_4_,local_4c);
  local_78 = (undefined4 *)CONCAT44(local_78._4_4_,local_48);
  FUN_144737500(param_1,param_2,L"%02d:%02d:%02d",local_44);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bd17e FUN_1456bd17e body=198 status=ok
// SIG undefined FUN_1456bd17e(void)

undefined8 FUN_1456bd17e(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = local_48;
  local_58 = local_44;
  local_60 = local_40;
  local_68 = local_3c;
  FUN_14004785a(&local_2c,&local_30,local_34,&local_38);
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,local_38);
  local_60 = (undefined1 *)CONCAT44(local_60._4_4_,local_2c % 100);
  FUN_144737500(param_1,0x400,L"%02d/%02d/%02d",local_30);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bd246 FUN_1456bd246 body=31 status=ok
// SIG undefined FUN_1456bd246(void)

void FUN_1456bd246(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 1456bd266 FUN_1456bd266 body=269 status=ok
// SIG undefined FUN_1456bd266(void)

void FUN_1456bd266(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(byte *)(param_1 + 4) = bVar1 & 0xe0;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  *(byte *)((longlong)param_1 + 0x24) = (~param_4 & 4) << 4;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x70;
  if ((param_4 & 2) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0xfffff;
    *(undefined4 *)(param_1 + 0xb) = 0xfffff;
    *(byte *)(param_1 + 4) = bVar1 & 0xe0 | 0xf;
    *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  }
  *param_1 = &PTR_FUN_14a38ae58;
  uVar2 = param_3[1];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar2;
  param_1[0xe] = param_3[2];
  *(byte *)(param_1 + 0xf) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}



// FUNCTION 1456bd374 FUN_1456bd374 body=226 status=ok
// SIG undefined FUN_1456bd374(void)

longlong * FUN_1456bd374(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b639e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bd45c FUN_1456bd45c body=138 status=ok
// SIG undefined FUN_1456bd45c(void)

undefined1 * FUN_1456bd45c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1456bd4e6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LocalFogVolumeCommon";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalFogVolumeCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x24;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1456bd458;
}



// FUNCTION 1456bd4e6 FUN_1456bd4e6 body=268 status=ok
// SIG undefined FUN_1456bd4e6(void)

undefined * FUN_1456bd4e6(void)

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
              0x110) < DAT_14c9c0bc0) {
    FUN_144b3d300(&DAT_14c9c0bc0);
    if (DAT_14c9c0bc0 == -1) {
      FUN_1456bd5f4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLocalFogVolumeCommonParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x16;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0b40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df4f);
      _Init_thread_footer(&DAT_14c9c0bc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0b40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bd5f4 FUN_1456bd5f4 body=226 status=ok
// SIG undefined FUN_1456bd5f4(void)

longlong * FUN_1456bd5f4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b6426;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bd6d8 FUN_1456bd6d8 body=132 status=ok
// SIG undefined FUN_1456bd6d8(void)

undefined1 * FUN_1456bd6d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalFogVolumeInstances";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147135e72;
}



// FUNCTION 1456bd75c FUN_1456bd75c body=138 status=ok
// SIG undefined FUN_1456bd75c(void)

code * FUN_1456bd75c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalFogVolumeMaxDensityIntoVolumetricFog";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147135cd4;
}



// FUNCTION 1456bd7e6 FUN_1456bd7e6 body=138 status=ok
// SIG undefined FUN_1456bd7e6(void)

code * FUN_1456bd7e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalStartDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b64ae;
}



// FUNCTION 1456bd870 FUN_1456bd870 body=148 status=ok
// SIG undefined FUN_1456bd870(void)

void FUN_1456bd870(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 << 3;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 3)) {
      uVar5 = uVar4 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456bd906 FUN_1456bd906 body=149 status=ok
// SIG undefined FUN_1456bd906(void)

void FUN_1456bd906(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  iVar3 = 0x80;
  if (0x9f < param_2 + 0x1fU) {
    uVar4 = param_2 + 0x1fU >> 5;
    if (*(int *)(param_1 + 0x1c) + 0x1fU < 0xa0) {
      uVar1 = 4;
      if (4 < uVar4) {
        uVar1 = uVar4;
      }
    }
    else {
      uVar1 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
    }
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1 << 2,0);
      uVar1 = (uint)(uVar2 >> 2);
    }
    iVar3 = -0x20;
    if ((int)uVar4 <= (int)uVar1) {
      iVar3 = uVar1 << 5;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  FUN_1446efbd8(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1456bd9fc FUN_1456bd9fc body=38 status=ok
// SIG undefined FUN_1456bd9fc(void)

void FUN_1456bd9fc(undefined4 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/RenderCore/Private/RenderGraphAllocator.cpp",0x70,
                L"Trying to resize TRDGArrayAllocator to an invalid size of %d with element size %I64u"
                ,param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1456bda22 FUN_1456bda22 body=85 status=ok
// SIG undefined FUN_1456bda22(void)

void FUN_1456bda22(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_1400e056e(param_1,*(undefined4 *)(param_1 + 0x10),uVar3,8);
  return;
}



// FUNCTION 1456bda78 FUN_1456bda78 body=309 status=ok
// SIG undefined FUN_1456bda78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1456bda78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14adfe6c0;
  param_1[0x402] = 0x20000000000;
  param_1[0x419] = 0;
  *(undefined4 *)(param_1 + 0x41a) = 0;
  memset(param_1 + 0x403,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0x20d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20dc) = 0;
  param_1[0x41d] = 0;
  *(undefined4 *)(param_1 + 0x41e) = 0;
  param_1[0x423] = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  param_1[0x41f] = 0;
  param_1[0x420] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x212c) = 0;
  param_1[0x427] = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  param_1[0x42d] = 0;
  *(undefined4 *)(param_1 + 0x42e) = 0;
  param_1[0x429] = 0;
  param_1[0x42a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x217c) = 0;
  param_1[0x431] = 0;
  *(undefined4 *)(param_1 + 0x432) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x433));
  *(undefined1 *)(param_1 + 0x434) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
  param_1[0x437] = puVar1;
  param_1[0x436] = puVar1;
  _DAT_14cb3ed08 = param_1;
  return param_1;
}



// FUNCTION 1456bdbae FUN_1456bdbae body=96 status=ok
// SIG undefined FUN_1456bdbae(void)

bool FUN_1456bdbae(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1[8] + 0x1c2) & 0x10) == 0) {
    bVar3 = false;
  }
  else {
    if (*(code **)(*param_1 + 0x270) == (code *)&LAB_1447f82f4) {
      plVar1 = (longlong *)param_1[9];
      if (plVar1 == (longlong *)0x0) {
        uVar2 = (**(code **)(*(longlong *)param_1[8] + 0x408))();
      }
      else {
        uVar2 = (**(code **)(*plVar1 + 0x408))(plVar1);
      }
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x270))(param_1);
    }
    bVar3 = 1 < uVar2;
  }
  return bVar3;
}



// FUNCTION 1456bdc0e FUN_1456bdc0e body=205 status=ok
// SIG undefined FUN_1456bdc0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456bdc0e(void)

{
  if ((DAT_14c9ca3f7 & 2) == 0) {
    DAT_14c9ca3f7 = DAT_14c9ca3f7 | 2;
    _DAT_14c9ca398 = L"FDistortionMeshVS";
    _DAT_14c9ca3b0 = FUN_146826540;
    _DAT_14c9ca3b8 = FUN_146825d77;
    _DAT_14c9ca3c0 = FUN_146825fd6;
    _DAT_14c9ca3c8 = FUN_1407e02ea;
    _DAT_14c9ca3d0 = FUN_146826273;
    _DAT_14c9ca3a8 = FUN_147157af0;
    _DAT_14c9ca3e8 = 0xffffffff00000108;
    _DAT_14c9ca3f0 = 8;
    DAT_14c9ca3f4 = 0;
    _DAT_14c9ca3d8 = &LAB_147157b34;
    FUN_1456bdcdc();
    FUN_1407e00cc(&DAT_14c9ca390);
    return;
  }
  return;
}



// FUNCTION 1456bdcdc FUN_1456bdcdc body=123 status=ok
// SIG undefined FUN_1456bdcdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456bdcdc(void)

{
  _DAT_14c9cef68 = L"BASE";
  DAT_14c9cef92 = 4;
  _DAT_14c9cef70 = FUN_141092e92();
  _DAT_14c9cef78 = DAT_14c9ca3a0;
  _DAT_14c9cef80 = &LAB_14682652b;
  DAT_14c9ca3a0 = &DAT_14c9cef68;
  DAT_14c9ca3f5 = DAT_14c9ca3f5 + '\x01';
  _DAT_14c9cef88 = 0x100000000;
  if (*(char *)(_DAT_14c9cef70 + 100) != '\0') {
    DAT_14c9ca3f6 = DAT_14c9ca3f6 + '\x01';
  }
  return;
}



// FUNCTION 1456bdd58 FUN_1456bdd58 body=205 status=ok
// SIG undefined FUN_1456bdd58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456bdd58(void)

{
  if ((DAT_14c9ca51f & 2) == 0) {
    DAT_14c9ca51f = DAT_14c9ca51f | 2;
    _DAT_14c9ca4c0 = L"FDistortionMeshPS";
    _DAT_14c9ca4d8 = FUN_146826540;
    _DAT_14c9ca4e0 = FUN_146825d77;
    _DAT_14c9ca4e8 = FUN_146825fd6;
    _DAT_14c9ca4f0 = FUN_1407e02ea;
    _DAT_14c9ca4f8 = FUN_146826273;
    _DAT_14c9ca4d0 = FUN_147157ccc;
    _DAT_14c9ca510 = 0xffffffff00000108;
    _DAT_14c9ca518 = 8;
    DAT_14c9ca51c = 0;
    _DAT_14c9ca500 = &LAB_147157d10;
    FUN_1456bde26();
    FUN_1407e00cc(&DAT_14c9ca4b8);
    return;
  }
  return;
}



// FUNCTION 1456bde26 FUN_1456bde26 body=123 status=ok
// SIG undefined FUN_1456bde26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456bde26(void)

{
  _DAT_14c9cef98 = L"BASE";
  DAT_14c9cefc2 = 4;
  _DAT_14c9cefa0 = FUN_141092e92();
  _DAT_14c9cefa8 = DAT_14c9ca4c8;
  _DAT_14c9cefb0 = &LAB_14682652b;
  DAT_14c9ca4c8 = &DAT_14c9cef98;
  DAT_14c9ca51d = DAT_14c9ca51d + '\x01';
  _DAT_14c9cefb8 = 0x100000000;
  if (*(char *)(_DAT_14c9cefa0 + 100) != '\0') {
    DAT_14c9ca51e = DAT_14c9ca51e + '\x01';
  }
  return;
}



// FUNCTION 1456bdea2 FUN_1456bdea2 body=71 status=ok
// SIG undefined FUN_1456bdea2(void)

undefined8 * FUN_1456bdea2(undefined8 *param_1)

{
  DWORD DVar1;
  
  *param_1 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  DVar1 = TlsAlloc();
  *(DWORD *)(param_1 + 1) = DVar1;
  return param_1;
}



// FUNCTION 1456bdeea FUN_1456bdeea body=606 status=ok
// SIG undefined FUN_1456bdeea(void)

void FUN_1456bdeea(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_1[6];
  if ((*(char *)(lVar3 + 0x178) == '\x03') && (*(int *)(lVar3 + 0xb4c) != -1)) {
    lVar6 = (**(code **)(*param_1 + 0x180))();
    lVar6 = *(longlong *)(lVar6 + 0x6d0);
    uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_1456be14a(&local_60,uVar7);
    if (local_58 != (longlong *)0x0) {
      iVar5 = (int)local_58[1];
      do {
        if (iVar5 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_58[1];
        bVar10 = iVar5 == iVar4;
        if (bVar10) {
          *(int *)(local_58 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar9 = local_58;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_60 != 0) {
          plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_14b9dedd0;
          plVar8[5] = 0;
          plVar8[2] = (longlong)&PTR_FUN_14b9dede8;
          plVar8[3] = 0;
          plVar8[4] = 0;
          *(undefined4 *)(plVar8 + 5) = 0;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          plVar8[3] = lVar6;
          *(int *)(plVar8 + 4) = (int)param_1[0x20];
          *(undefined4 *)((longlong)plVar8 + 0x24) = *(undefined4 *)((longlong)param_1 + 0xf4);
          uVar11 = FUN_141177588(param_1);
          *(undefined4 *)(plVar8 + 5) = uVar11;
          local_70 = plVar8 + 2;
          local_68 = plVar8;
          if (plVar8 == (longlong *)0x0) {
            local_78 = 0x404e000000000000;
            FUN_1456be230(local_60,*(undefined4 *)(lVar3 + 0xb4c),(char)param_1[0x12],&local_70);
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_78 = 0x404e000000000000;
            FUN_1456be230(local_60,*(undefined4 *)(lVar3 + 0xb4c),(char)param_1[0x12],&local_70);
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456be14a FUN_1456be14a body=228 status=ok
// SIG undefined FUN_1456be14a(void)

longlong * FUN_1456be14a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_144747626(&local_28,DAT_14cb82338,param_2);
    plVar1 = local_20;
    if (local_28 != 0) {
      if (local_20 == (longlong *)0x0) {
        *param_1 = local_28;
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        *param_1 = local_28;
        if ((longlong *)param_1[1] != local_20) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456be230 FUN_1456be230 body=559 status=ok
// SIG undefined FUN_1456be230(void)

void FUN_1456be230(longlong param_1,int param_2,char param_3,undefined8 *param_4,double param_5)

{
  longlong *plVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  
  lVar6 = FUN_14479d2ce(param_1 + 8);
  if ((lVar6 != 0) && (iVar5 = FUN_14490d72a(), iVar5 != 3)) {
    dVar12 = *(double *)(lVar6 + 0x6d0);
    if (*(double *)(param_1 + 0x28) + 300.0 <= dVar12) {
      *(double *)(param_1 + 0x28) = dVar12;
      uVar10 = (ulonglong)*(int *)(param_1 + 0x38);
      if (0 < (longlong)uVar10) {
        lVar11 = uVar10 * 0x20 + -0x18;
        do {
          dVar2 = *(double *)(*(longlong *)(param_1 + 0x30) + lVar11);
          if ((0.0 < dVar2) && (dVar2 <= dVar12)) {
            FUN_1456be4b8((longlong *)(param_1 + 0x30),(int)uVar10 + -1);
          }
          lVar11 = lVar11 + -0x20;
          bVar4 = 1 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar4);
      }
    }
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      lVar8 = 0;
      do {
        if ((*(int *)(lVar11 + lVar8) == param_2) && (*(char *)(lVar11 + 4 + lVar8) == param_3)) {
          dVar12 = 0.0;
          if (0.0 < param_5) {
            dVar12 = param_5 + *(double *)(lVar6 + 0x6d0);
          }
          *(double *)(lVar11 + 8 + lVar8) = dVar12;
          uVar3 = *param_4;
          lVar6 = param_4[1];
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          plVar9 = *(longlong **)(lVar11 + 0x18 + lVar8);
          *(undefined8 *)(lVar11 + 0x10 + lVar8) = uVar3;
          *(longlong *)(lVar11 + 0x18 + lVar8) = lVar6;
          goto LAB_1456be35b;
        }
        lVar8 = lVar8 + 0x20;
      } while ((longlong)*(int *)(param_1 + 0x38) * 0x20 != lVar8);
    }
    piVar7 = (int *)FUN_1456be460(param_1 + 0x30);
    *piVar7 = param_2;
    *(char *)(piVar7 + 1) = param_3;
    dVar12 = 0.0;
    if (0.0 < param_5) {
      dVar12 = param_5 + *(double *)(lVar6 + 0x6d0);
    }
    *(double *)(piVar7 + 2) = dVar12;
    uVar3 = *param_4;
    lVar6 = param_4[1];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar9 = *(longlong **)(piVar7 + 6);
    *(undefined8 *)(piVar7 + 4) = uVar3;
    *(longlong *)(piVar7 + 6) = lVar6;
LAB_1456be35b:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar7 = (int *)((longlong)plVar9 + 0xc);
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (*piVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  plVar9 = (longlong *)param_4[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456be45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456be460 FUN_1456be460 body=61 status=ok
// SIG undefined FUN_1456be460(void)

longlong FUN_1456be460(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456be574(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1456be49d(lVar2);
  return lVar2;
}



// FUNCTION 1456be49d FUN_1456be49d body=26 status=ok
// SIG undefined FUN_1456be49d(void)

void FUN_1456be49d(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1456be4b8 FUN_1456be4b8 body=115 status=ok
// SIG undefined FUN_1456be4b8(void)

void FUN_1456be4b8(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x20 + lVar1);
  FUN_1456be52b(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x20),(longlong)iVar3 << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1456be52b FUN_1456be52b body=73 status=ok
// SIG undefined FUN_1456be52b(void)

void FUN_1456be52b(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456be574 FUN_1456be574 body=132 status=ok
// SIG undefined FUN_1456be574(void)

void FUN_1456be574(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456be5f9 FUN_1456be5f9 body=396 status=ok
// SIG undefined FUN_1456be5f9(void)

void FUN_1456be5f9(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456be786 FUN_1456be786 body=582 status=ok
// SIG undefined FUN_1456be786(void)

void FUN_1456be786(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  iVar3 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
    FUN_1447502d0((longlong *)(param_1 + 0x50),iVar3);
  }
  lVar12 = *(longlong *)(param_1 + 0x50);
  lVar11 = (longlong)iVar3 * 0x58;
  puVar1 = (undefined8 *)(lVar12 + lVar11);
  *(undefined8 *)(lVar12 + lVar11) = 0;
  iVar3 = *(int *)(param_2 + 1);
  uVar5 = *param_2;
  *(int *)(lVar12 + 8 + lVar11) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1481f79f8(puVar1,iVar3);
    FUN_1481f7a51(*puVar1,uVar5,iVar3);
  }
  puVar16 = param_2 + 2;
  puVar17 = puVar1 + 2;
  for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(param_2 + 10);
  plVar6 = (longlong *)param_2[4];
  if (plVar6 != (longlong *)0x0) {
    lVar12 = *plVar6;
    iVar3 = (int)plVar6[6];
    if (iVar3 == 0) {
      uVar21 = 1;
      uVar20 = 0;
      iVar8 = 0;
      iVar15 = 0;
    }
    else {
      puVar9 = (uint *)plVar6[5];
      if ((uint *)plVar6[5] == (uint *)0x0) {
        puVar9 = (uint *)(plVar6 + 3);
      }
      uVar10 = *puVar9;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        uVar20 = 0;
        uVar21 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar21 = uVar20;
        }
        iVar15 = 0;
        do {
          if (uVar21 == uVar20) {
            return;
          }
          iVar15 = iVar15 + 0x20;
          uVar10 = puVar9[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar20 = 0;
        iVar15 = 0;
      }
      uVar21 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar21 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
    }
    if (iVar8 != iVar3) {
      uVar10 = 0xffffffff;
      do {
        plVar7 = *(longlong **)(plVar6[1] + (longlong)iVar8 * 0x18);
        (**(code **)(*plVar7 + 0x10))
                  (plVar7,*(int *)(plVar6[1] + 8 + (longlong)iVar8 * 0x18) + lVar12,param_2 + 2);
        uVar10 = ~(uint)uVar21 & uVar10;
        puVar9 = (uint *)plVar6[5];
        if ((uint *)plVar6[5] == (uint *)0x0) {
          puVar9 = (uint *)(plVar6 + 3);
        }
        iVar4 = (int)plVar6[6];
        iVar8 = (int)uVar20;
        lVar11 = (longlong)iVar8;
        uVar18 = puVar9[lVar11] & uVar10;
        if (uVar18 == 0) {
          iVar13 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar13 = iVar4 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar8) {
            iVar14 = iVar8;
          }
          if (iVar8 < iVar13) {
            lVar19 = 0;
            do {
              uVar18 = puVar9[lVar11 + lVar19 + 1];
              if (uVar18 != 0) {
                uVar20 = (ulonglong)(iVar8 + (int)lVar19 + 1);
                uVar10 = 0xffffffff;
                goto LAB_1456be934;
              }
              iVar15 = iVar15 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar14 - lVar11 != lVar19);
            uVar10 = 0xffffffff;
            iVar8 = iVar14;
          }
          uVar20 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar4;
        }
        else {
LAB_1456be934:
          uVar21 = (ulonglong)(-uVar18 & uVar18);
          uVar2 = uVar21 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar8) {
            iVar8 = iVar4;
          }
        }
      } while (iVar8 != iVar3);
    }
  }
  return;
}



// FUNCTION 1456be9cc FUN_1456be9cc body=100 status=ok
// SIG undefined FUN_1456be9cc(void)

undefined8 FUN_1456be9cc(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x60,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0x60);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x18c)) {
    return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  }
  *(int *)(param_1 + 0x18c) = iVar5;
  uVar3 = FUN_1481f8480(param_1,*(undefined4 *)(param_1 + 0x188));
  return uVar3;
}



// FUNCTION 1456bea30 FUN_1456bea30 body=114 status=ok
// SIG undefined FUN_1456bea30(void)

void FUN_1456bea30(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1456beaa2 FUN_1456beaa2 body=64 status=ok
// SIG undefined FUN_1456beaa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456beaa2(undefined8 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
  _DAT_14c9a10a4 = _DAT_14c9a10a4 + -1;
  *param_1 = DAT_14c9a1098;
  DAT_14c9a1098 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001456beadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a10b8);
  return;
}



// FUNCTION 1456beae2 FUN_1456beae2 body=180 status=ok
// SIG undefined FUN_1456beae2(void)

undefined8 FUN_1456beae2(double *param_1,longlong *param_2,double *param_3,char param_4)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  if (param_4 == '\0') {
    dVar4 = param_1[3];
    lVar2 = *param_2;
    lVar3 = param_2[1];
  }
  else {
    lVar2 = *param_2;
    if (((lVar2 < 0) || (dVar4 = param_1[3], (longlong)dVar4 <= lVar2)) ||
       (lVar3 = param_2[1], (longlong)dVar4 <= lVar3 || lVar3 < 0)) {
      return 0;
    }
  }
  dVar1 = param_1[2];
  dVar4 = (double)((longlong)dVar4 * (longlong)dVar1) * 0.5;
  dVar5 = (double)(lVar3 * (longlong)dVar1) + (param_1[1] - dVar4);
  dVar4 = (double)(lVar2 * (longlong)dVar1) + (*param_1 - dVar4);
  *param_3 = dVar4;
  param_3[1] = dVar5;
  param_3[2] = (double)(longlong)dVar1 + dVar4;
  param_3[3] = dVar5 + (double)(longlong)dVar1;
  *(undefined1 *)(param_3 + 4) = 1;
  return CONCAT71((int7)((ulonglong)(lVar2 * (longlong)dVar1) >> 8),1);
}



// FUNCTION 1456beb96 FUN_1456beb96 body=1330 status=ok
// SIG undefined FUN_1456beb96(void)

undefined8 FUN_1456beb96(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
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
  
  dVar1 = *param_1;
  dVar14 = param_1[1];
  dVar10 = param_2[3];
  dVar7 = dVar14;
  if (dVar10 <= dVar14) {
    dVar7 = dVar10;
  }
  dVar2 = param_2[2];
  dVar9 = dVar1;
  if (dVar2 <= dVar1) {
    dVar9 = dVar2;
  }
  dVar11 = *param_2;
  dVar3 = param_2[1];
  dVar13 = dVar3;
  if (dVar3 <= dVar7) {
    dVar13 = dVar7;
  }
  dVar7 = dVar11;
  if (dVar11 <= dVar9) {
    dVar7 = dVar9;
  }
  if (param_1[3] * param_1[3] <
      (dVar7 - dVar1) * (dVar7 - dVar1) + (dVar13 - dVar14) * (dVar13 - dVar14)) {
    return 0;
  }
  dVar7 = param_1[7];
  if (360.0 <= dVar7) {
    return 1;
  }
  dVar3 = dVar3 - dVar14;
  dVar11 = dVar11 - dVar1;
  dVar9 = dVar11 * dVar11 + dVar3 * dVar3;
  if (9.99999993922529e-09 < dVar9) {
    dVar13 = dVar3 * (1.0 / SQRT(dVar9));
  }
  else {
    dVar13 = 0.0;
  }
  dVar2 = dVar2 - dVar1;
  dVar1 = dVar3 * dVar3 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar1) {
    dVar3 = dVar3 * (1.0 / SQRT(dVar1));
  }
  else {
    dVar3 = 0.0;
  }
  dVar10 = dVar10 - dVar14;
  dVar14 = dVar2 * dVar2 + dVar10 * dVar10;
  if (9.99999993922529e-09 < dVar14) {
    dVar5 = (1.0 / SQRT(dVar14)) * dVar10;
  }
  else {
    dVar5 = 0.0;
  }
  dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar9) &
                  (ulonglong)((1.0 / SQRT(dVar9)) * dVar11));
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar1) &
                  (ulonglong)((1.0 / SQRT(dVar1)) * dVar2));
  dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar14) &
                   (ulonglong)(dVar2 * (1.0 / SQRT(dVar14))));
  dVar2 = dVar11 * dVar11 + dVar10 * dVar10;
  dVar1 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar2) &
                  (ulonglong)(dVar11 * (1.0 / SQRT(dVar2))));
  if (9.99999993922529e-09 < dVar2) {
    dVar10 = dVar10 * (1.0 / SQRT(dVar2));
  }
  else {
    dVar10 = 0.0;
  }
  if (dVar7 <= 180.0) {
    dVar8 = sin((dVar7 * 0.5 * 3.1415927410125732) / 180.0);
    dVar7 = param_1[4];
    dVar2 = param_1[5];
    dVar12 = dVar7 * dVar13 - dVar9 * dVar2;
    dVar15 = dVar7 * dVar3 - dVar4 * dVar2;
    dVar16 = dVar7 * dVar5 - dVar14 * dVar2;
    dVar11 = dVar7 * dVar10 - dVar1 * dVar2;
    dVar6 = -dVar8;
    if (((((dVar6 <= dVar11) || (dVar6 <= dVar16)) || (dVar6 <= dVar12)) || (dVar6 <= dVar15)) &&
       (((dVar11 <= dVar8 || (dVar16 <= dVar8)) || ((dVar12 <= dVar8 || (dVar15 <= dVar8)))))) {
      if (0.0 <= dVar1 * dVar7 + dVar10 * dVar2) {
        return 1;
      }
      if (0.0 <= dVar14 * dVar7 + dVar5 * dVar2) {
        return 1;
      }
      if (0.0 <= dVar9 * dVar7 + dVar13 * dVar2) {
        return 1;
      }
      if (0.0 <= dVar7 * dVar4 + dVar3 * dVar2) {
        return 1;
      }
    }
  }
  else {
    dVar2 = param_1[4];
    dVar11 = param_1[5];
    if (0.0 <= dVar2 * dVar1 + dVar10 * dVar11) {
      return 1;
    }
    if (0.0 <= dVar2 * dVar14 + dVar5 * dVar11) {
      return 1;
    }
    if (0.0 <= dVar2 * dVar9 + dVar13 * dVar11) {
      return 1;
    }
    if (0.0 <= dVar2 * dVar4 + dVar11 * dVar3) {
      return 1;
    }
    dVar11 = sin(((360.0 - dVar7) * 0.5 * 3.1415927410125732) / 180.0);
    dVar7 = param_1[4];
    dVar2 = param_1[5];
    dVar1 = dVar1 * dVar2 - dVar10 * dVar7;
    if (dVar11 <= dVar1) {
      return 1;
    }
    dVar14 = dVar14 * dVar2 - dVar5 * dVar7;
    if (dVar11 <= dVar14) {
      return 1;
    }
    dVar10 = dVar4 * dVar2 - dVar3 * dVar7;
    if (dVar11 <= dVar10) {
      return 1;
    }
    dVar7 = dVar9 * dVar2 - dVar7 * dVar13;
    if (dVar11 <= dVar7) {
      return 1;
    }
    dVar11 = -dVar11;
    if (dVar1 <= dVar11) {
      return 1;
    }
    if (dVar14 <= dVar11) {
      return 1;
    }
    if (dVar7 <= dVar11) {
      return 1;
    }
    if (dVar10 <= dVar11) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1456bf0c8 FUN_1456bf0c8 body=63 status=ok
// SIG undefined FUN_1456bf0c8(void)

undefined1 FUN_1456bf0c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1456bf108(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 1456bf108 FUN_1456bf108 body=125 status=ok
// SIG undefined FUN_1456bf108(void)

longlong FUN_1456bf108(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_1456bf186();
  uVar3 = *(undefined8 *)(param_2 + 0x168);
  lVar4 = *(longlong *)(param_2 + 0x170);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  *(longlong *)(param_1 + 0x170) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  return param_1;
}



// FUNCTION 1456bf186 FUN_1456bf186 body=187 status=ok
// SIG undefined FUN_1456bf186(void)

longlong FUN_1456bf186(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  FUN_140cae46a(param_1 + 0x50,param_2 + 0x50);
  FUN_140cae46a(param_1 + 0xa0,param_2 + 0xa0);
  FUN_144756208(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14475634e(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  FUN_140061c82(param_1 + 0x120,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 1456bf242 FUN_1456bf242 body=40 status=ok
// SIG undefined FUN_1456bf242(void)

undefined8 FUN_1456bf242(undefined8 param_1,int param_2)

{
  FUN_1456bf26a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456bf26a FUN_1456bf26a body=78 status=ok
// SIG undefined FUN_1456bf26a(void)

void FUN_1456bf26a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b45e590;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140061fce(param_1 + 8);
  FUN_1456bf2b8(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1456bf2b8 FUN_1456bf2b8 body=91 status=ok
// SIG undefined FUN_1456bf2b8(void)

void FUN_1456bf2b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1456bf313 FUN_1456bf313 body=319 status=ok
// SIG undefined FUN_1456bf313(void)

void FUN_1456bf313(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_144a7add4();
  lVar4 = *(longlong *)(param_3 + 8);
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar6 = lVar4 != 0;
        if (lVar4 == lVar2) break;
      } while (lVar4 != 0);
    }
    if (bVar6) goto LAB_1456bf356;
LAB_1456bf3f4:
    lVar2 = FUN_14475a8dc();
    lVar4 = *(longlong *)(param_3 + 8);
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar6) goto LAB_1456bf39e;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1456bf39e;
    pcVar3 = FUN_143e9ee7c;
    pcVar5 = FUN_1489dbf7e;
  }
  else {
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1456bf3f4;
LAB_1456bf356:
    pcVar3 = FUN_140f80310;
    pcVar5 = FUN_1489dbfc0;
  }
  cVar1 = (*pcVar3)(param_3,param_4);
  if (cVar1 != '\0') {
    (*pcVar5)(&local_40,param_3);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,local_40);
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
LAB_1456bf39e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456bf454 FUN_1456bf454 body=146 status=ok
// SIG undefined FUN_1456bf454(void)

void FUN_1456bf454(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1456bf4e6 FUN_1456bf4e6 body=205 status=ok
// SIG undefined FUN_1456bf4e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456bf4e6(void)

{
  if ((DAT_14ca1508f & 2) == 0) {
    DAT_14ca1508f = DAT_14ca1508f | 2;
    _DAT_14ca15030 = L"FNodeAndClusterCull_CS";
    _DAT_14ca15048 = FUN_146826540;
    _DAT_14ca15050 = FUN_146825d77;
    _DAT_14ca15058 = FUN_146825fd6;
    _DAT_14ca15060 = FUN_1407e02ea;
    _DAT_14ca15068 = FUN_146826273;
    _DAT_14ca15040 = FUN_147252560;
    _DAT_14ca15080 = 0xffffffff000000e0;
    _DAT_14ca15088 = 8;
    DAT_14ca1508c = 0;
    _DAT_14ca15070 = &LAB_14725258c;
    FUN_1456bf5b4();
    FUN_1407e00cc(&DAT_14ca15028);
    return;
  }
  return;
}



// FUNCTION 1456bf5b4 FUN_1456bf5b4 body=123 status=ok
// SIG undefined FUN_1456bf5b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456bf5b4(void)

{
  _DAT_14ca19160 = L"BASE";
  DAT_14ca1918a = 4;
  _DAT_14ca19168 = FUN_140b35ae4();
  _DAT_14ca19170 = DAT_14ca15038;
  _DAT_14ca19178 = &LAB_14682652b;
  DAT_14ca15038 = &DAT_14ca19160;
  DAT_14ca1508d = DAT_14ca1508d + '\x01';
  _DAT_14ca19180 = 0x100000000;
  if (*(char *)(_DAT_14ca19168 + 100) != '\0') {
    DAT_14ca1508e = DAT_14ca1508e + '\x01';
  }
  return;
}



// FUNCTION 1456bf630 FUN_1456bf630 body=226 status=ok
// SIG undefined FUN_1456bf630(void)

longlong * FUN_1456bf630(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f1452;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456bf714 FUN_1456bf714 body=136 status=ok
// SIG undefined FUN_1456bf714(void)

code * FUN_1456bf714(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxStartDistanceLODBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1240000040c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456bf79c;
}



// FUNCTION 1456bf79c FUN_1456bf79c body=138 status=ok
// SIG undefined FUN_1456bf79c(void)

code * FUN_1456bf79c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NodeLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000040a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456bf826;
}



// FUNCTION 1456bf826 FUN_1456bf826 body=138 status=ok
// SIG undefined FUN_1456bf826(void)

code * FUN_1456bf826(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NextNodeIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11800000408;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472585f8;
}



// FUNCTION 1456bf8b0 FUN_1456bf8b0 body=147 status=ok
// SIG undefined FUN_1456bf8b0(void)

void FUN_1456bf8b0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456bf944 FUN_1456bf944 body=47 status=ok
// SIG undefined FUN_1456bf944(void)

void FUN_1456bf944(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 1456bf974 FUN_1456bf974 body=1958 status=ok
// SIG undefined FUN_1456bf974(void)

void FUN_1456bf974(wchar_t *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  char *param_5,byte param_6,int param_7,undefined8 param_8,undefined8 param_9,
                  longlong *param_10,undefined8 param_11,longlong *param_12,longlong *param_13)

{
  ushort uVar1;
  ulonglong *puVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  ushort *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar11;
  short *psVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  char *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_50 [2];
  ulonglong local_40;
  uint uVar10;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pwVar17 = (wchar_t *)
            ((longlong)(int)(*(ulonglong *)(param_1 + 100) >> 1) * 8 + *(longlong *)(param_2 + 0x58)
            );
  if ((*(ulonglong *)(param_1 + 100) & 1) == 0) {
    pwVar17 = param_1 + 100;
  }
  if (*(longlong *)pwVar17 != 0) {
    uVar14 = *(ulonglong *)(param_1 + 0x7c);
    uVar7 = (longlong)param_1 + ((longlong)uVar14 >> 0x18) + 0xf8;
    if ((uVar14 & 1) == 0) {
      uVar7 = uVar14;
    }
    if (uVar7 != 0) {
      local_78 = param_13;
      local_80 = param_12;
      local_88 = param_10;
      local_90 = param_5;
      local_98 = CONCAT44(local_98._4_4_,param_7);
      local_a0 = (wchar_t *)CONCAT71(local_a0._1_7_,param_6);
      local_a8 = param_1;
      (**(code **)(*(longlong *)pwVar17 + 0x40))
                (CONCAT71((int7)(uVar14 >> 8),(char)param_1[0x68]) & 0xffffffffffffff0f);
    }
  }
  if (param_3 == 0) {
    puVar6 = &DAT_14ca85550;
  }
  else {
    puVar6 = (ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 8) * 2);
  }
  uVar14 = (ulonglong)*puVar6;
  if (((*(byte *)((longlong)param_10 + 0x7d) & 8) == 0) || ((&DAT_14ca814b8)[uVar14 * 0xf] != 1)) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(byte *)((longlong)&DAT_14ca814d8 + uVar14 * 0x3c + 1) & 0x10) >> 4;
  }
  bVar4 = DAT_14ca96500;
  if (param_7 == 1) {
joined_r0x0001456bfd0d:
    if (bVar4 != 0) {
LAB_1456bface:
      if (bVar5 == 0 && -1 < param_5[(ulonglong)param_6 + 0x128]) {
        if (DAT_14c846b14 == '\x01') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
            FUN_1413288e0(&DAT_14c926ca8);
            atexit(FUN_1427ac032);
            _Init_thread_footer(&DAT_14c926f30);
          }
          if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
            (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb02ef0) &&
           (FUN_144b3d300(&DAT_14cb02ef0), DAT_14cb02ef0 == -1)) {
          FUN_14156891c(local_50);
          local_60 = 0;
          local_68 = 0;
          local_70 = 0;
          local_90 = "Unknown";
          local_98 = 0;
          local_a0 = L"Primitive";
          local_a8 = L"FPrimitiveUniformShaderParameters";
          local_80 = (longlong *)CONCAT44(local_80._4_4_,0x360);
          local_88 = (longlong *)CONCAT44(local_88._4_4_,0x1a);
          local_78 = local_50;
          FUN_140b49562(&DAT_14cb02e70,1);
          if (local_50[0] != 0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_1436a26f6);
          _Init_thread_footer(&DAT_14cb02ef0);
        }
        uVar14 = *(ulonglong *)(param_1 + 0x50);
        uVar7 = (longlong)param_1 + ((longlong)uVar14 >> 0x18) + 0xa0;
        if ((uVar14 & 1) == 0) {
          uVar7 = uVar14;
        }
        if (0 < (longlong)*(int *)(param_1 + 0x54)) {
          lVar11 = 0;
          do {
            if (*(longlong *)(uVar7 + lVar11 * 8) == DAT_14cb02e98) goto LAB_1456bfbba;
            lVar11 = lVar11 + 1;
          } while (*(int *)(param_1 + 0x54) != lVar11);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9c45d0) &&
           (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
          DAT_14c9c45cc = 0xffff;
          _Init_thread_footer(&DAT_14c9c45d0);
        }
        goto LAB_1456bfbba;
      }
    }
  }
  else if (2 < param_7) {
    lVar11 = uVar14 * 0x3c;
    if ((*(longlong *)(&DAT_14ca814b0 + lVar11) != DAT_14ca81490) && (*puVar6 != 0xc)) {
      if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar11 + 3) & 0x10) != 0) {
        bVar4 = *(byte *)((longlong)&DAT_14ca814c8 + lVar11 + 3) & 0x20;
        goto joined_r0x0001456bfd0d;
      }
      goto LAB_1456bface;
    }
  }
  lVar11 = *param_10;
  if (lVar11 == 0) {
    lVar11 = FUN_144a8f66a();
    uVar14 = *(ulonglong *)(param_1 + 0x50);
    uVar7 = (longlong)param_1 + ((longlong)uVar14 >> 0x18) + 0xa0;
    if ((uVar14 & 1) == 0) {
      uVar7 = uVar14;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x54)) {
      lVar8 = 0;
      do {
        if (*(longlong *)(uVar7 + lVar8 * 4) == *(longlong *)(lVar11 + 0x28)) {
          uVar14 = *(ulonglong *)(param_1 + 0x58);
          uVar7 = (longlong)param_1 + ((longlong)uVar14 >> 0x18) + 0xb0;
          if ((uVar14 & 1) == 0) {
            uVar7 = uVar14;
          }
          psVar12 = (short *)(uVar7 + lVar8);
          goto LAB_1456c0063;
        }
        lVar8 = lVar8 + 2;
      } while ((longlong)*(int *)(param_1 + 0x54) * 2 != lVar8);
    }
    psVar12 = &DAT_14c9c45cc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
LAB_1456c0063:
    if (*psVar12 != -1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
    }
  }
  else {
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1))
      {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
      if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
        (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb02ef0) && (FUN_144b3d300(&DAT_14cb02ef0), DAT_14cb02ef0 == -1)) {
      FUN_14156891c(local_50);
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_98 = 0;
      local_a0 = L"Primitive";
      local_a8 = L"FPrimitiveUniformShaderParameters";
      local_80 = (longlong *)CONCAT44(local_80._4_4_,0x360);
      local_88 = (longlong *)CONCAT44(local_88._4_4_,0x1a);
      local_78 = local_50;
      FUN_140b49562(&DAT_14cb02e70,1,1);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a26f6);
      _Init_thread_footer(&DAT_14cb02ef0);
    }
    uVar14 = *(ulonglong *)(param_1 + 0x50);
    uVar7 = (longlong)param_1 + ((longlong)uVar14 >> 0x18) + 0xa0;
    if ((uVar14 & 1) == 0) {
      uVar7 = uVar14;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x54)) {
      lVar8 = 0;
      do {
        if (*(longlong *)(uVar7 + lVar8 * 4) == DAT_14cb02e98) {
          uVar14 = *(ulonglong *)(param_1 + 0x58);
          if ((uVar14 & 1) != 0) {
            uVar14 = (longlong)param_1 + ((longlong)uVar14 >> 0x18) + 0xb0;
          }
          puVar6 = (ushort *)(uVar14 + lVar8);
          goto LAB_1456bfe41;
        }
        lVar8 = lVar8 + 2;
      } while ((longlong)*(int *)(param_1 + 0x54) * 2 != lVar8);
    }
    puVar6 = &DAT_14c9c45cc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
LAB_1456bfe41:
    uVar1 = *puVar6;
    if (uVar1 != 0xffff) {
      puVar2 = (ulonglong *)*param_12;
      uVar14 = *puVar2;
      uVar7 = ((longlong)uVar14 >> 0x18) + (longlong)puVar2;
      if ((uVar14 & 1) == 0) {
        uVar7 = uVar14;
      }
      uVar10 = (uint)puVar2[1];
      uVar13 = 0;
      uVar15 = uVar10;
      if (8 < (int)uVar10) {
        uVar13 = 0;
        uVar16 = uVar10;
        do {
          uVar15 = uVar16 >> 1;
          if (*(ushort *)(uVar7 + (ulonglong)(uVar15 + uVar13) * 2) < uVar1) {
            uVar13 = uVar15 + uVar13 + (uVar16 & 1);
          }
          bVar3 = 0x11 < uVar16;
          uVar16 = uVar15;
        } while (bVar3);
      }
      uVar15 = uVar15 + uVar13 + 1;
      if ((int)uVar15 < (int)uVar10) {
        uVar10 = uVar15;
      }
      iVar9 = uVar10 - uVar13;
      if (iVar9 != 0 && (int)uVar13 <= (int)uVar10) {
        uVar14 = (ulonglong)uVar13;
        do {
          if (*(ushort *)(uVar7 + uVar14 * 2) == uVar1) {
            *(longlong *)(param_12[1] + (uVar14 & 0xffffffff) * 8) = lVar11;
            break;
          }
          uVar14 = uVar14 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
LAB_1456bfbba:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c013a FUN_1456c013a body=284 status=ok
// SIG undefined FUN_1456c013a(void)

void FUN_1456c013a(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  undefined1 auStack_1f8 [32];
  uint *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  uint local_1b4;
  undefined1 local_1b0 [216];
  undefined1 local_d8 [144];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14573402d(local_d8,param_1);
  local_1d8 = &local_1b4;
  local_1b4 = 0;
  bVar1 = FUN_144b13b12(&DAT_14cafc0a0,local_48,param_5,param_3);
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     ((DAT_14cafb358 == 2 && ((bVar1 & (local_1b4 & 0xfffffffd) != 0) == 1)))) {
    FUN_144a1fecc(local_d8,local_1b0);
    local_1c0 = local_48;
    local_1c8 = param_5;
    local_1d8 = param_3;
    local_1d0 = param_4;
    FUN_14365ef83(local_1b0,0,local_1b4,param_2);
  }
  FUN_1446fbe14(local_d8);
  if ((local_38 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c0257 FUN_1456c0257 body=345 status=ok
// SIG undefined FUN_1456c0257(void)

void FUN_1456c0257(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_298 [32];
  uint *local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  uint local_254;
  undefined1 local_250 [216];
  undefined1 local_178 [144];
  undefined8 local_e8;
  undefined1 local_d8 [144];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_1457340f6(local_d8,param_1);
  local_278 = &local_254;
  local_254 = 0;
  bVar1 = FUN_144b13b12(&DAT_14cafcd70,local_48,param_5,param_3);
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     ((DAT_14cafb358 == 2 && ((bVar1 & (local_254 & 0xfffffffd) != 0) == 1)))) {
    FUN_14573402d(local_178,param_1);
    cVar2 = FUN_147cbdbd6(&DAT_14cafc0a0,local_e8);
    if (cVar2 != '\0') {
      FUN_144a1fecc(local_d8,local_250);
      local_260 = local_e8;
      local_268 = param_5;
      local_278 = param_3;
      local_270 = param_4;
      FUN_14365ef83(local_250,1,local_254,param_2);
    }
    FUN_1446fbe14(local_178);
  }
  FUN_1446fbe14(local_d8);
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c03b2 FUN_1456c03b2 body=205 status=ok
// SIG undefined FUN_1456c03b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c03b2(void)

{
  if ((DAT_14ca4ea67 & 2) == 0) {
    DAT_14ca4ea67 = DAT_14ca4ea67 | 2;
    _DAT_14ca4ea08 = L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrect";
    _DAT_14ca4ea20 = FUN_146826540;
    _DAT_14ca4ea28 = FUN_146825d77;
    _DAT_14ca4ea30 = FUN_146825fd6;
    _DAT_14ca4ea38 = FUN_1407e02ea;
    _DAT_14ca4ea40 = FUN_146826273;
    _DAT_14ca4ea18 = FUN_1472ecaa0;
    _DAT_14ca4ea58 = 0xffffffff00000118;
    _DAT_14ca4ea60 = 8;
    DAT_14ca4ea64 = 0;
    _DAT_14ca4ea48 = &LAB_1472ecad8;
    FUN_1456c0480();
    FUN_1407e00cc(&DAT_14ca4ea00);
    return;
  }
  return;
}



// FUNCTION 1456c0480 FUN_1456c0480 body=133 status=ok
// SIG undefined FUN_1456c0480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0480(void)

{
  _DAT_14ca56be8 = L"BASE";
  DAT_14ca56c12 = 4;
  FUN_1456c0506();
  _DAT_14ca56bf8 = DAT_14ca4ea10;
  _DAT_14ca56bf0 = &DAT_14ca56c18;
  _DAT_14ca56c00 = &LAB_14682652b;
  DAT_14ca4ea10 = &DAT_14ca56be8;
  DAT_14ca4ea65 = DAT_14ca4ea65 + '\x01';
  _DAT_14ca56c08 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4ea66 = DAT_14ca4ea66 + '\x01';
  }
  return;
}



// FUNCTION 1456c0506 FUN_1456c0506 body=205 status=ok
// SIG undefined FUN_1456c0506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0506(void)

{
  if ((DAT_14ca56c7f & 2) != 0) {
    return;
  }
  DAT_14ca56c7f = DAT_14ca56c7f | 2;
  _DAT_14ca56c20 = L"FShadowDepthVS";
  _DAT_14ca56c38 = FUN_146826540;
  _DAT_14ca56c40 = FUN_146825d77;
  _DAT_14ca56c48 = FUN_146825fd6;
  _DAT_14ca56c50 = FUN_1407e02ea;
  _DAT_14ca56c58 = FUN_146826273;
  _DAT_14ca56c30 = FUN_1472fffd2;
  _DAT_14ca56c70 = 0xffffffff00000118;
  _DAT_14ca56c78 = 8;
  DAT_14ca56c7c = 0;
  _DAT_14ca56c60 = &LAB_14730000a;
  FUN_1456c1644();
  FUN_1456c05d4();
  FUN_1407e00cc(&DAT_14ca56c18);
  return;
}



// FUNCTION 1456c05d4 FUN_1456c05d4 body=133 status=ok
// SIG undefined FUN_1456c05d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c05d4(void)

{
  _DAT_14ca56ce0 = L"BASE";
  DAT_14ca56d0a = 4;
  FUN_141092e92();
  _DAT_14ca56cf0 = DAT_14ca56c28;
  _DAT_14ca56ce8 = &DAT_14ca4d008;
  _DAT_14ca56cf8 = &LAB_14682652b;
  DAT_14ca56c28 = &DAT_14ca56ce0;
  DAT_14ca56c7d = DAT_14ca56c7d + '\x01';
  _DAT_14ca56d00 = 0x100000000;
  if (DAT_14ca4d06c != '\0') {
    DAT_14ca56c7e = DAT_14ca56c7e + '\x01';
  }
  return;
}



// FUNCTION 1456c065a FUN_1456c065a body=205 status=ok
// SIG undefined FUN_1456c065a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c065a(void)

{
  if ((DAT_14ca4eb8f & 2) == 0) {
    DAT_14ca4eb8f = DAT_14ca4eb8f | 2;
    _DAT_14ca4eb30 = L"TShadowDepthVSVertexShadowDepth_OutputDepth";
    _DAT_14ca4eb48 = FUN_146826540;
    _DAT_14ca4eb50 = FUN_146825d77;
    _DAT_14ca4eb58 = FUN_146825fd6;
    _DAT_14ca4eb60 = FUN_1407e02ea;
    _DAT_14ca4eb68 = FUN_146826273;
    _DAT_14ca4eb40 = FUN_1472ecbcc;
    _DAT_14ca4eb80 = 0xffffffff00000118;
    _DAT_14ca4eb88 = 8;
    DAT_14ca4eb8c = 0;
    _DAT_14ca4eb70 = &LAB_1472ecc04;
    FUN_1456c0728();
    FUN_1407e00cc(&DAT_14ca4eb28);
    return;
  }
  return;
}



// FUNCTION 1456c0728 FUN_1456c0728 body=133 status=ok
// SIG undefined FUN_1456c0728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0728(void)

{
  _DAT_14ca56d60 = L"BASE";
  DAT_14ca56d8a = 4;
  FUN_1456c0506();
  _DAT_14ca56d70 = DAT_14ca4eb38;
  _DAT_14ca56d68 = &DAT_14ca56c18;
  _DAT_14ca56d78 = &LAB_14682652b;
  DAT_14ca4eb38 = &DAT_14ca56d60;
  DAT_14ca4eb8d = DAT_14ca4eb8d + '\x01';
  _DAT_14ca56d80 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4eb8e = DAT_14ca4eb8e + '\x01';
  }
  return;
}



// FUNCTION 1456c07ae FUN_1456c07ae body=205 status=ok
// SIG undefined FUN_1456c07ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c07ae(void)

{
  if ((DAT_14ca4ecb7 & 2) == 0) {
    DAT_14ca4ecb7 = DAT_14ca4ecb7 | 2;
    _DAT_14ca4ec58 = L"TShadowDepthVSVertexShadowDepth_OnePassPointLight";
    _DAT_14ca4ec70 = FUN_146826540;
    _DAT_14ca4ec78 = FUN_146825d77;
    _DAT_14ca4ec80 = FUN_146825fd6;
    _DAT_14ca4ec88 = FUN_1407e02ea;
    _DAT_14ca4ec90 = FUN_146826273;
    _DAT_14ca4ec68 = FUN_1472ece14;
    _DAT_14ca4eca8 = 0xffffffff00000118;
    _DAT_14ca4ecb0 = 8;
    DAT_14ca4ecb4 = 0;
    _DAT_14ca4ec98 = &LAB_1472ece4c;
    FUN_1456c087c();
    FUN_1407e00cc(&DAT_14ca4ec50);
    return;
  }
  return;
}



// FUNCTION 1456c087c FUN_1456c087c body=133 status=ok
// SIG undefined FUN_1456c087c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c087c(void)

{
  _DAT_14ca56dc0 = L"BASE";
  DAT_14ca56dea = 4;
  FUN_1456c0506();
  _DAT_14ca56dd0 = DAT_14ca4ec60;
  _DAT_14ca56dc8 = &DAT_14ca56c18;
  _DAT_14ca56dd8 = &LAB_14682652b;
  DAT_14ca4ec60 = &DAT_14ca56dc0;
  DAT_14ca4ecb5 = DAT_14ca4ecb5 + '\x01';
  _DAT_14ca56de0 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4ecb6 = DAT_14ca4ecb6 + '\x01';
  }
  return;
}



// FUNCTION 1456c0902 FUN_1456c0902 body=205 status=ok
// SIG undefined FUN_1456c0902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0902(void)

{
  if ((DAT_14ca4eddf & 2) == 0) {
    DAT_14ca4eddf = DAT_14ca4eddf | 2;
    _DAT_14ca4ed80 = L"TShadowDepthVSVertexShadowDepth_VirtualShadowMap";
    _DAT_14ca4ed98 = FUN_146826540;
    _DAT_14ca4eda0 = FUN_146825d77;
    _DAT_14ca4eda8 = FUN_146825fd6;
    _DAT_14ca4edb0 = FUN_1407e02ea;
    _DAT_14ca4edb8 = FUN_146826273;
    _DAT_14ca4ed90 = FUN_1472ecf40;
    _DAT_14ca4edd0 = 0xffffffff00000118;
    _DAT_14ca4edd8 = 8;
    DAT_14ca4eddc = 0;
    _DAT_14ca4edc0 = &LAB_1472ecf78;
    FUN_1456c09d0();
    FUN_1407e00cc(&DAT_14ca4ed78);
    return;
  }
  return;
}



// FUNCTION 1456c09d0 FUN_1456c09d0 body=133 status=ok
// SIG undefined FUN_1456c09d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c09d0(void)

{
  _DAT_14ca56e20 = L"BASE";
  DAT_14ca56e4a = 4;
  FUN_1456c0506();
  _DAT_14ca56e30 = DAT_14ca4ed88;
  _DAT_14ca56e28 = &DAT_14ca56c18;
  _DAT_14ca56e38 = &LAB_14682652b;
  DAT_14ca4ed88 = &DAT_14ca56e20;
  DAT_14ca4eddd = DAT_14ca4eddd + '\x01';
  _DAT_14ca56e40 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4edde = DAT_14ca4edde + '\x01';
  }
  return;
}



// FUNCTION 1456c0a56 FUN_1456c0a56 body=205 status=ok
// SIG undefined FUN_1456c0a56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0a56(void)

{
  if ((DAT_14ca4ef07 & 2) == 0) {
    DAT_14ca4ef07 = DAT_14ca4ef07 | 2;
    _DAT_14ca4eea8 = L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectPositionOnly";
    _DAT_14ca4eec0 = FUN_146826540;
    _DAT_14ca4eec8 = FUN_146825d77;
    _DAT_14ca4eed0 = FUN_146825fd6;
    _DAT_14ca4eed8 = FUN_1407e02ea;
    _DAT_14ca4eee0 = FUN_146826273;
    _DAT_14ca4eeb8 = FUN_1472ed188;
    _DAT_14ca4eef8 = 0xffffffff00000118;
    _DAT_14ca4ef00 = 8;
    DAT_14ca4ef04 = 0;
    _DAT_14ca4eee8 = &LAB_1472ed1c0;
    FUN_1456c0b24();
    FUN_1407e00cc(&DAT_14ca4eea0);
    return;
  }
  return;
}



// FUNCTION 1456c0b24 FUN_1456c0b24 body=133 status=ok
// SIG undefined FUN_1456c0b24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0b24(void)

{
  _DAT_14ca56e80 = L"BASE";
  DAT_14ca56eaa = 4;
  FUN_1456c0506();
  _DAT_14ca56e90 = DAT_14ca4eeb0;
  _DAT_14ca56e88 = &DAT_14ca56c18;
  _DAT_14ca56e98 = &LAB_14682652b;
  DAT_14ca4eeb0 = &DAT_14ca56e80;
  DAT_14ca4ef05 = DAT_14ca4ef05 + '\x01';
  _DAT_14ca56ea0 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4ef06 = DAT_14ca4ef06 + '\x01';
  }
  return;
}



// FUNCTION 1456c0baa FUN_1456c0baa body=205 status=ok
// SIG undefined FUN_1456c0baa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0baa(void)

{
  if ((DAT_14ca4f02f & 2) == 0) {
    DAT_14ca4f02f = DAT_14ca4f02f | 2;
    _DAT_14ca4efd0 = L"TShadowDepthVSVertexShadowDepth_OutputDepthPositionOnly";
    _DAT_14ca4efe8 = FUN_146826540;
    _DAT_14ca4eff0 = FUN_146825d77;
    _DAT_14ca4eff8 = FUN_146825fd6;
    _DAT_14ca4f000 = FUN_1407e02ea;
    _DAT_14ca4f008 = FUN_146826273;
    _DAT_14ca4efe0 = FUN_1472ed2b4;
    _DAT_14ca4f020 = 0xffffffff00000118;
    _DAT_14ca4f028 = 8;
    DAT_14ca4f02c = 0;
    _DAT_14ca4f010 = &LAB_1472ed2ec;
    FUN_1456c0c78();
    FUN_1407e00cc(&DAT_14ca4efc8);
    return;
  }
  return;
}



// FUNCTION 1456c0c78 FUN_1456c0c78 body=133 status=ok
// SIG undefined FUN_1456c0c78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0c78(void)

{
  _DAT_14ca56ee0 = L"BASE";
  DAT_14ca56f0a = 4;
  FUN_1456c0506();
  _DAT_14ca56ef0 = DAT_14ca4efd8;
  _DAT_14ca56ee8 = &DAT_14ca56c18;
  _DAT_14ca56ef8 = &LAB_14682652b;
  DAT_14ca4efd8 = &DAT_14ca56ee0;
  DAT_14ca4f02d = DAT_14ca4f02d + '\x01';
  _DAT_14ca56f00 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4f02e = DAT_14ca4f02e + '\x01';
  }
  return;
}



// FUNCTION 1456c0cfe FUN_1456c0cfe body=205 status=ok
// SIG undefined FUN_1456c0cfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0cfe(void)

{
  if ((DAT_14ca4f157 & 2) == 0) {
    DAT_14ca4f157 = DAT_14ca4f157 | 2;
    _DAT_14ca4f0f8 = L"TShadowDepthVSVertexShadowDepth_OnePassPointLightPositionOnly";
    _DAT_14ca4f110 = FUN_146826540;
    _DAT_14ca4f118 = FUN_146825d77;
    _DAT_14ca4f120 = FUN_146825fd6;
    _DAT_14ca4f128 = FUN_1407e02ea;
    _DAT_14ca4f130 = FUN_146826273;
    _DAT_14ca4f108 = FUN_1472ed3e0;
    _DAT_14ca4f148 = 0xffffffff00000118;
    _DAT_14ca4f150 = 8;
    DAT_14ca4f154 = 0;
    _DAT_14ca4f138 = &LAB_1472ed418;
    FUN_1456c0dcc();
    FUN_1407e00cc(&DAT_14ca4f0f0);
    return;
  }
  return;
}



// FUNCTION 1456c0dcc FUN_1456c0dcc body=133 status=ok
// SIG undefined FUN_1456c0dcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0dcc(void)

{
  _DAT_14ca56f40 = L"BASE";
  DAT_14ca56f6a = 4;
  FUN_1456c0506();
  _DAT_14ca56f50 = DAT_14ca4f100;
  _DAT_14ca56f48 = &DAT_14ca56c18;
  _DAT_14ca56f58 = &LAB_14682652b;
  DAT_14ca4f100 = &DAT_14ca56f40;
  DAT_14ca4f155 = DAT_14ca4f155 + '\x01';
  _DAT_14ca56f60 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4f156 = DAT_14ca4f156 + '\x01';
  }
  return;
}



// FUNCTION 1456c0e52 FUN_1456c0e52 body=205 status=ok
// SIG undefined FUN_1456c0e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0e52(void)

{
  if ((DAT_14ca4f27f & 2) == 0) {
    DAT_14ca4f27f = DAT_14ca4f27f | 2;
    _DAT_14ca4f220 = L"TShadowDepthVSVertexShadowDepth_VirtualShadowMapPositionOnly";
    _DAT_14ca4f238 = FUN_146826540;
    _DAT_14ca4f240 = FUN_146825d77;
    _DAT_14ca4f248 = FUN_146825fd6;
    _DAT_14ca4f250 = FUN_1407e02ea;
    _DAT_14ca4f258 = FUN_146826273;
    _DAT_14ca4f230 = FUN_1472ed50c;
    _DAT_14ca4f270 = 0xffffffff00000118;
    _DAT_14ca4f278 = 8;
    DAT_14ca4f27c = 0;
    _DAT_14ca4f260 = &LAB_1472ed544;
    FUN_1456c0f20();
    FUN_1407e00cc(&DAT_14ca4f218);
    return;
  }
  return;
}



// FUNCTION 1456c0f20 FUN_1456c0f20 body=133 status=ok
// SIG undefined FUN_1456c0f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0f20(void)

{
  _DAT_14ca56fa0 = L"BASE";
  DAT_14ca56fca = 4;
  FUN_1456c0506();
  _DAT_14ca56fb0 = DAT_14ca4f228;
  _DAT_14ca56fa8 = &DAT_14ca56c18;
  _DAT_14ca56fb8 = &LAB_14682652b;
  DAT_14ca4f228 = &DAT_14ca56fa0;
  DAT_14ca4f27d = DAT_14ca4f27d + '\x01';
  _DAT_14ca56fc0 = 0x100000000;
  if (DAT_14ca56c7c != '\0') {
    DAT_14ca4f27e = DAT_14ca4f27e + '\x01';
  }
  return;
}



// FUNCTION 1456c0fa6 FUN_1456c0fa6 body=205 status=ok
// SIG undefined FUN_1456c0fa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c0fa6(void)

{
  if ((DAT_14ca4f3a7 & 2) == 0) {
    DAT_14ca4f3a7 = DAT_14ca4f3a7 | 2;
    _DAT_14ca4f348 = L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrect";
    _DAT_14ca4f360 = FUN_146826540;
    _DAT_14ca4f368 = FUN_146825d77;
    _DAT_14ca4f370 = FUN_146825fd6;
    _DAT_14ca4f378 = FUN_1407e02ea;
    _DAT_14ca4f380 = FUN_146826273;
    _DAT_14ca4f358 = FUN_1472ed638;
    _DAT_14ca4f398 = 0xffffffff00000108;
    _DAT_14ca4f3a0 = 8;
    DAT_14ca4f3a4 = 0;
    _DAT_14ca4f388 = &LAB_1472ed670;
    FUN_1456c1074();
    FUN_1407e00cc(&DAT_14ca4f340);
    return;
  }
  return;
}



// FUNCTION 1456c1074 FUN_1456c1074 body=133 status=ok
// SIG undefined FUN_1456c1074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c1074(void)

{
  _DAT_14ca57000 = L"BASE";
  DAT_14ca5702a = 4;
  FUN_1456c10fa();
  _DAT_14ca57010 = DAT_14ca4f350;
  _DAT_14ca57008 = &DAT_14ca57030;
  _DAT_14ca57018 = &LAB_14682652b;
  DAT_14ca4f350 = &DAT_14ca57000;
  DAT_14ca4f3a5 = DAT_14ca4f3a5 + '\x01';
  _DAT_14ca57020 = 0x100000000;
  if (DAT_14ca57094 != '\0') {
    DAT_14ca4f3a6 = DAT_14ca4f3a6 + '\x01';
  }
  return;
}



// FUNCTION 1456c10fa FUN_1456c10fa body=200 status=ok
// SIG undefined FUN_1456c10fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c10fa(void)

{
  if ((DAT_14ca57097 & 2) != 0) {
    return;
  }
  DAT_14ca57097 = DAT_14ca57097 | 2;
  _DAT_14ca57038 = L"FShadowDepthBasePS";
  _DAT_14ca57050 = FUN_146826540;
  _DAT_14ca57058 = FUN_146825d77;
  _DAT_14ca57060 = FUN_146825fd6;
  _DAT_14ca57068 = FUN_1407e02ea;
  _DAT_14ca57070 = FUN_146826273;
  _DAT_14ca57048 = FUN_1473000a6;
  _DAT_14ca57088 = 0xffffffff00000108;
  _DAT_14ca57090 = 8;
  DAT_14ca57094 = 0;
  _DAT_14ca57078 = &LAB_1473000de;
  FUN_1456c11c2();
  FUN_1407e00cc(&DAT_14ca57030);
  return;
}



// FUNCTION 1456c11c2 FUN_1456c11c2 body=133 status=ok
// SIG undefined FUN_1456c11c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c11c2(void)

{
  _DAT_14ca57098 = L"BASE";
  DAT_14ca570c2 = 4;
  FUN_141092e92();
  _DAT_14ca570a8 = DAT_14ca57040;
  _DAT_14ca570a0 = &DAT_14ca4d008;
  _DAT_14ca570b0 = &LAB_14682652b;
  DAT_14ca57040 = &DAT_14ca57098;
  DAT_14ca57095 = DAT_14ca57095 + '\x01';
  _DAT_14ca570b8 = 0x100000000;
  if (DAT_14ca4d06c != '\0') {
    DAT_14ca57096 = DAT_14ca57096 + '\x01';
  }
  return;
}



// FUNCTION 1456c1248 FUN_1456c1248 body=205 status=ok
// SIG undefined FUN_1456c1248(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c1248(void)

{
  if ((DAT_14ca4f4cf & 2) == 0) {
    DAT_14ca4f4cf = DAT_14ca4f4cf | 2;
    _DAT_14ca4f470 = L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrect";
    _DAT_14ca4f488 = FUN_146826540;
    _DAT_14ca4f490 = FUN_146825d77;
    _DAT_14ca4f498 = FUN_146825fd6;
    _DAT_14ca4f4a0 = FUN_1407e02ea;
    _DAT_14ca4f4a8 = FUN_146826273;
    _DAT_14ca4f480 = FUN_1472ed75c;
    _DAT_14ca4f4c0 = 0xffffffff00000108;
    _DAT_14ca4f4c8 = 8;
    DAT_14ca4f4cc = 0;
    _DAT_14ca4f4b0 = &LAB_1472ed794;
    FUN_1456c1316();
    FUN_1407e00cc(&DAT_14ca4f468);
    return;
  }
  return;
}



// FUNCTION 1456c1316 FUN_1456c1316 body=133 status=ok
// SIG undefined FUN_1456c1316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c1316(void)

{
  _DAT_14ca570c8 = L"BASE";
  DAT_14ca570f2 = 4;
  FUN_1456c10fa();
  _DAT_14ca570d8 = DAT_14ca4f478;
  _DAT_14ca570d0 = &DAT_14ca57030;
  _DAT_14ca570e0 = &LAB_14682652b;
  DAT_14ca4f478 = &DAT_14ca570c8;
  DAT_14ca4f4cd = DAT_14ca4f4cd + '\x01';
  _DAT_14ca570e8 = 0x100000000;
  if (DAT_14ca57094 != '\0') {
    DAT_14ca4f4ce = DAT_14ca4f4ce + '\x01';
  }
  return;
}



// FUNCTION 1456c139c FUN_1456c139c body=205 status=ok
// SIG undefined FUN_1456c139c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c139c(void)

{
  if ((DAT_14ca4f5f7 & 2) == 0) {
    DAT_14ca4f5f7 = DAT_14ca4f5f7 | 2;
    _DAT_14ca4f598 = L"TShadowDepthPSPixelShadowDepth_OnePassPointLight";
    _DAT_14ca4f5b0 = FUN_146826540;
    _DAT_14ca4f5b8 = FUN_146825d77;
    _DAT_14ca4f5c0 = FUN_146825fd6;
    _DAT_14ca4f5c8 = FUN_1407e02ea;
    _DAT_14ca4f5d0 = FUN_146826273;
    _DAT_14ca4f5a8 = FUN_1472ed880;
    _DAT_14ca4f5e8 = 0xffffffff00000108;
    _DAT_14ca4f5f0 = 8;
    DAT_14ca4f5f4 = 0;
    _DAT_14ca4f5d8 = &LAB_1472ed8b8;
    FUN_1456c146a();
    FUN_1407e00cc(&DAT_14ca4f590);
    return;
  }
  return;
}



// FUNCTION 1456c146a FUN_1456c146a body=133 status=ok
// SIG undefined FUN_1456c146a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c146a(void)

{
  _DAT_14ca570f8 = L"BASE";
  DAT_14ca57122 = 4;
  FUN_1456c10fa();
  _DAT_14ca57108 = DAT_14ca4f5a0;
  _DAT_14ca57100 = &DAT_14ca57030;
  _DAT_14ca57110 = &LAB_14682652b;
  DAT_14ca4f5a0 = &DAT_14ca570f8;
  DAT_14ca4f5f5 = DAT_14ca4f5f5 + '\x01';
  _DAT_14ca57118 = 0x100000000;
  if (DAT_14ca57094 != '\0') {
    DAT_14ca4f5f6 = DAT_14ca4f5f6 + '\x01';
  }
  return;
}



// FUNCTION 1456c14f0 FUN_1456c14f0 body=205 status=ok
// SIG undefined FUN_1456c14f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c14f0(void)

{
  if ((DAT_14ca4f71f & 2) == 0) {
    DAT_14ca4f71f = DAT_14ca4f71f | 2;
    _DAT_14ca4f6c0 = L"TShadowDepthPSPixelShadowDepth_VirtualShadowMap";
    _DAT_14ca4f6d8 = FUN_146826540;
    _DAT_14ca4f6e0 = FUN_146825d77;
    _DAT_14ca4f6e8 = FUN_146825fd6;
    _DAT_14ca4f6f0 = FUN_1407e02ea;
    _DAT_14ca4f6f8 = FUN_146826273;
    _DAT_14ca4f6d0 = FUN_1472ed9a4;
    _DAT_14ca4f710 = 0xffffffff00000108;
    _DAT_14ca4f718 = 8;
    DAT_14ca4f71c = 0;
    _DAT_14ca4f700 = &LAB_1472ed9dc;
    FUN_1456c15be();
    FUN_1407e00cc(&DAT_14ca4f6b8);
    return;
  }
  return;
}



// FUNCTION 1456c15be FUN_1456c15be body=133 status=ok
// SIG undefined FUN_1456c15be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c15be(void)

{
  _DAT_14ca57128 = L"BASE";
  DAT_14ca57152 = 4;
  FUN_1456c10fa();
  _DAT_14ca57138 = DAT_14ca4f6c8;
  _DAT_14ca57130 = &DAT_14ca57030;
  _DAT_14ca57140 = &LAB_14682652b;
  DAT_14ca4f6c8 = &DAT_14ca57128;
  DAT_14ca4f71d = DAT_14ca4f71d + '\x01';
  _DAT_14ca57148 = 0x100000000;
  if (DAT_14ca57094 != '\0') {
    DAT_14ca4f71e = DAT_14ca4f71e + '\x01';
  }
  return;
}



// FUNCTION 1456c1644 FUN_1456c1644 body=216 status=ok
// SIG undefined FUN_1456c1644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c1644(void)

{
  _DAT_14ca56cb0 = L"bUseGpuSceneInstancing";
  DAT_14ca56cda = FUN_140850cc5();
  _DAT_14ca56cb8 = FUN_140ec6960();
  _DAT_14ca56cc8 = &LAB_14682652b;
  _DAT_14ca56cd0 = 0x10000010e;
  _DAT_14ca56cd8 = 0;
  _DAT_14ca56cc0 = DAT_14ca56c28;
  DAT_14ca56c28 = &DAT_14ca56cb0;
  _DAT_14ca56c80 = L"LayerId";
  DAT_14ca56caa = FUN_140850cc5();
  _DAT_14ca56c88 = FUN_140ec6960();
  _DAT_14ca56c98 = &LAB_14682652b;
  _DAT_14ca56ca0 = &DAT_100000108;
  _DAT_14ca56ca8 = 0;
  _DAT_14ca56c90 = DAT_14ca56c28;
  DAT_14ca56c28 = &DAT_14ca56c80;
  return;
}


