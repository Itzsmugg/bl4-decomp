// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1401adeb9 FUN_1401adeb9 body=618 status=ok
// SIG undefined FUN_1401adeb9(void)

void FUN_1401adeb9(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,int param_5)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f0;
  longlong local_e8;
  int local_dc;
  longlong local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *(longlong *)(param_1 + 0x10);
  dVar1 = *(double *)(lVar2 + 0x50);
  iVar6 = param_5 - *(int *)(lVar2 + 0x58);
  if (iVar6 != 0 && *(int *)(lVar2 + 0x58) <= param_5) {
    dVar9 = (double)param_4 / (double)iVar6;
    if (1.0 <= dVar9) {
      dVar9 = 1.0;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    dVar1 = (dVar1 - *(double *)(lVar2 + 0x48)) * dVar9 + *(double *)(lVar2 + 0x48);
  }
  iVar6 = (int)param_2[1];
  if (0 < iVar6) {
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    lVar8 = 0;
    local_dc = param_5 + -1;
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      if ((*(char *)(lVar3 + 0xfc0 + lVar8) == '\0') &&
         ((0.0 < *(double *)(lVar3 + 0x238 + lVar8) || (0.0 < *(double *)(lVar3 + 0x240 + lVar8)))))
      {
        local_e8 = lVar3 + lVar8;
        local_d8 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4));
        local_f0 = param_5;
        local_f8 = param_4;
        uVar10 = FUN_146dc2a5f(local_e8,lVar3 + lVar8 + 0x18,lVar2 + 0x20,local_d8);
        FUN_146db7a3c(local_e8,uVar10,param_3);
        FUN_146db9d7e(local_e8,param_3,dVar1,lVar2 + 0x20);
        FUN_146dd052e(local_e8,local_b8);
        FUN_146dd0348(local_e8,local_d0);
        cVar4 = FUN_146dc2ac7(local_d8,param_3,local_d0,local_b8);
        if (cVar4 != '\0') {
          *(undefined1 *)(local_e8 + 0xfc0) = 1;
        }
        if (local_dc == param_4) {
          bVar5 = -(*(double *)(local_d8 + 0x2f0) != 3.4028234663852886e+38 &&
                   *(double *)(local_d8 + 0x2f0) < -57.29577951308232);
        }
        else {
          bVar5 = 0;
        }
        *(byte *)(lVar3 + 0xfc1 + lVar8) = bVar5 & 1;
        iVar6 = (int)param_2[1];
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0xfd0;
    } while (lVar7 < iVar6);
  }
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401ae124 FUN_1401ae124 body=687 status=ok
// SIG undefined FUN_1401ae124(void)

void FUN_1401ae124(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,int param_5)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  longlong in_stack_ffffffffffffff38;
  undefined4 uVar13;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  dVar1 = *(double *)(lVar2 + 0x50);
  iVar6 = param_5 - *(int *)(lVar2 + 0x58);
  if (iVar6 != 0 && *(int *)(lVar2 + 0x58) <= param_5) {
    dVar11 = (double)param_4 / (double)iVar6;
    if (1.0 <= dVar11) {
      dVar11 = 1.0;
    }
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    dVar1 = (dVar1 - *(double *)(lVar2 + 0x48)) * dVar11 + *(double *)(lVar2 + 0x48);
  }
  iVar6 = (int)param_2[1];
  if (0 < iVar6) {
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    lVar10 = 0x330;
    lVar9 = 0;
    do {
      uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
      lVar3 = *param_2;
      if ((*(char *)(lVar3 + 0x170 + lVar10) == '\0') &&
         ((0.0 < *(double *)(lVar3 + -0x110 + lVar10) ||
          (0.0 < *(double *)(lVar3 + -0x108 + lVar10))))) {
        lVar7 = lVar10 + lVar3 + -0x330;
        lVar8 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4));
        FUN_146dc4120(lVar7);
        dVar12 = (double)FUN_146dc2a5f(lVar7,lVar10 + lVar3 + -0x318,lVar2 + 0x20,lVar8,
                                       CONCAT44(uVar13,param_4),param_5);
        dVar11 = *(double *)(lVar10 + lVar3 + -0x160);
        if ((dVar11 != dVar12) || (NAN(dVar11) || NAN(dVar12))) {
          *(double *)(lVar3 + -0x160 + lVar10) = dVar12;
          FUN_146dc4da6(lVar7);
        }
        dVar11 = *(double *)(lVar3 + -0x158 + lVar10);
        if ((dVar11 != 1.0) || (NAN(dVar11))) {
          *(undefined8 *)(lVar3 + -0x158 + lVar10) = 0x3ff0000000000000;
          FUN_146dc4ee6(lVar7);
        }
        in_stack_ffffffffffffff38 = lVar8;
        FUN_146dc5626(lVar7,param_3,dVar1,lVar2 + 0x20,lVar8);
        cVar4 = FUN_146dc2ac7(lVar8,param_3,lVar10 + lVar3,lVar10 + lVar3 + 0x18);
        if (cVar4 != '\0') {
          *(undefined1 *)(lVar3 + 0x170 + lVar10) = 1;
        }
        if (param_5 + -1 == param_4) {
          dVar11 = *(double *)(lVar8 + 0x2c8);
          if (((dVar11 == 3.4028234663852886e+38) && (!NAN(dVar11))) ||
             (bVar5 = true, *(double *)(lVar3 + 0x30 + lVar10) <= dVar11 * dVar11)) {
            dVar11 = *(double *)(lVar8 + 0x2f0);
            if ((dVar11 == 3.4028234663852886e+38) && (!NAN(dVar11))) goto LAB_1401ae3c1;
            bVar5 = dVar11 < *(double *)(lVar3 + 0x38 + lVar10) * 57.29577951308232;
          }
        }
        else {
LAB_1401ae3c1:
          bVar5 = false;
        }
        *(bool *)(lVar3 + 0x171 + lVar10) = bVar5;
        iVar6 = (int)param_2[1];
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x4b0;
    } while (lVar9 < iVar6);
  }
  return;
}



// FUNCTION 1401ae3d4 FUN_1401ae3d4 body=261 status=ok
// SIG undefined FUN_1401ae3d4(void)

undefined4 FUN_1401ae3d4(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_38);
  FUN_1401ae5e4(&local_38);
  local_48 = 0;
  uStack_40 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_140115598(&local_48,param_1 + 0x10);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((int)uStack_40 < 1) {
    uVar2 = 0;
  }
  else {
    lVar4 = 8;
    lVar5 = 1;
    do {
      puVar3 = &DAT_149dfb77a;
      if (local_30 != 0) {
        puVar3 = local_38;
      }
      uVar2 = FUN_1401ae4da(*(undefined8 *)(local_48 + lVar4),puVar3);
      if ((char)uVar2 != '\0') break;
      lVar4 = lVar4 + 0x10;
      bVar1 = lVar5 < (int)uStack_40;
      lVar5 = lVar5 + 1;
    } while (bVar1);
  }
  FUN_14482b2f5(local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ae4da FUN_1401ae4da body=171 status=ok
// SIG undefined FUN_1401ae4da(void)

ulonglong FUN_1401ae4da(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = FUN_1401ae586();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    if (*(char *)(param_1 + 0x214) == '\0') {
      lVar2 = FUN_1401af9f2(param_1,local_28);
      uVar3 = CONCAT71(uVar4,lVar2 != 0);
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x188));
      lVar2 = FUN_1401af9f2(param_1,local_28);
      uVar3 = CONCAT71(uVar4,lVar2 != 0);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x188));
    }
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ae586 FUN_1401ae586 body=93 status=ok
// SIG undefined FUN_1401ae586(void)

void FUN_1401ae586(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  
  FUN_14020fad6();
  uVar1 = (int)param_3[1] - 1;
  if ((int)param_3[1] == 0) {
    uVar1 = 0;
  }
  if ((0 < (int)uVar1) && (*(short *)(*param_3 + -2 + (ulonglong)uVar1 * 2) != 0x2f)) {
    FUN_1400020e8(param_3,&DAT_149e065c6,1);
  }
  FUN_1448b5408(param_3,param_1 + 200);
  return;
}



// FUNCTION 1401ae5e4 FUN_1401ae5e4 body=126 status=ok
// SIG undefined FUN_1401ae5e4(void)

void FUN_1401ae5e4(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401ae664(&local_28,param_1);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ae664 FUN_1401ae664 body=820 status=ok
// SIG undefined FUN_1401ae664(void)

undefined8 * FUN_1401ae664(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *_Src;
  wchar_t *_Src_00;
  short *psVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar_t *_Str;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t *_Str1;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  short *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar13 = *(uint *)(param_2 + 1);
  if ((ulonglong)(longlong)(int)uVar13 < 2) {
    uVar9 = FUN_1401aee94();
    FUN_140056680(&local_58,uVar9);
    if (local_50 < 2) {
      *param_1 = local_58;
      *(uint *)(param_1 + 1) = local_50;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_4c;
      goto LAB_1401ae7c4;
    }
    FUN_1401ae664(param_1,&local_58);
  }
  else {
    local_58 = (short *)0x0;
    _Src = (void *)*param_2;
    uVar14 = 0;
    local_50 = uVar13;
    FUN_1446dd670(&local_58,uVar13,0);
    memcpy(local_58,_Src,(longlong)(int)uVar13 * 2);
    FUN_1448097c4(&local_58,&DAT_149e01f64,&DAT_149e065c6);
    psVar4 = local_58;
    uVar13 = local_50 - 1;
    if (local_50 == 0) {
      uVar13 = uVar14;
    }
    _Str = (wchar_t *)FUN_1401af3ae();
    local_60 = 0;
    if (_Str != (wchar_t *)0x0) {
      local_60 = wcslen(_Str);
    }
    iVar3 = *(int *)(param_2 + 1);
    _Src_00 = (wchar_t *)*param_2;
    puVar12 = &DAT_149dfb77a;
    _Str1 = _Src_00;
    if ((longlong)iVar3 == 0) {
      _Str1 = L"";
    }
    iVar5 = wcsncmp(_Str1,L"\\\\",2);
    if ((iVar3 - 3U < 0x7ffffffe) && (_Src_00[1] == L':')) {
      uVar6 = uVar13;
      if ((int)(uint)local_60 < (int)uVar13) {
        uVar6 = (uint)local_60;
      }
      uVar14 = 0;
      if (0 < (int)uVar6) {
        uVar14 = uVar6;
      }
      if ((uint)local_60 == uVar14) {
        uVar14 = 0;
        if (((uint)local_60 != 0) && (uVar14 = 0, 0 < (int)uVar6)) {
          uVar10 = local_60 & 0xffffffff;
          lVar11 = 0;
LAB_1401ae831:
          uVar1 = *(ushort *)((longlong)_Str + lVar11);
          uVar2 = *(ushort *)((longlong)psVar4 + lVar11);
          if (uVar1 == uVar2) {
            iVar7 = 0;
            if ((uVar1 == 0) || (iVar7 = 0, uVar10 == 1)) goto LAB_1401ae883;
LAB_1401ae84f:
            uVar10 = uVar10 - 1;
            lVar11 = lVar11 + 2;
            goto LAB_1401ae831;
          }
          if ((uVar2 | uVar1) < 0x80) {
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
              iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                      (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
              goto LAB_1401ae883;
            }
            if (uVar10 == 1) {
              iVar7 = 0;
              goto LAB_1401ae883;
            }
            goto LAB_1401ae84f;
          }
          iVar7 = (uint)uVar1 - (uint)uVar2;
LAB_1401ae883:
          uVar14 = (uint)(iVar7 != 0);
        }
      }
      else {
        uVar14 = 1;
      }
    }
    bVar15 = false;
    if (*local_58 == 0x2f) {
      if ((int)(uint)local_60 < (int)uVar13) {
        uVar13 = (uint)local_60;
      }
      uVar6 = 0;
      if (0 < (int)uVar13) {
        uVar6 = uVar13;
      }
      bVar15 = true;
      if ((uint)local_60 == uVar6) {
        if ((uint)local_60 == 0) {
          bVar15 = false;
        }
        else {
          bVar15 = false;
          if (0 < (int)uVar13) {
            iVar7 = FUN_144a54874(_Str,psVar4,local_60 & 0xffffffff);
            bVar15 = iVar7 != 0;
          }
        }
      }
    }
    if ((iVar5 == 0 || uVar14 != 0) || bVar15) {
      *param_1 = 0;
      *(int *)(param_1 + 1) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar3,0);
        memcpy((void *)*param_1,_Src_00,(longlong)iVar3 * 2);
      }
    }
    else {
      FUN_1401aea18(param_1,&local_58);
      FUN_1401ae99a(param_1);
      puVar8 = (undefined8 *)FUN_1401aecd6();
      if (*(int *)(puVar8 + 1) != 0) {
        puVar12 = (undefined2 *)*puVar8;
      }
      FUN_1448097c4(param_1,_Str,puVar12,1);
    }
  }
  if (local_58 != (short *)0x0) {
    FUN_1400020a8();
  }
LAB_1401ae7c4:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401ae99a FUN_1401ae99a body=126 status=ok
// SIG undefined FUN_1401ae99a(void)

void FUN_1401ae99a(undefined8 *param_1)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  _Str = (wchar_t *)*param_1;
  if (_Str != (wchar_t *)0x0) {
    pwVar1 = wcsstr(_Str,L"//");
    if (pwVar1 != (wchar_t *)0x0) {
      iVar2 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        iVar2 = 0;
      }
      pwVar3 = pwVar1 + 1;
      for (pwVar1 = pwVar1 + 2; pwVar1 < _Str + iVar2; pwVar1 = pwVar1 + 1) {
        if ((pwVar3[-1] != L'/') || (*pwVar1 != L'/')) {
          *pwVar3 = *pwVar1;
          pwVar3 = pwVar3 + 1;
        }
      }
      *pwVar3 = L'\0';
      FUN_1401af9b2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1401aea18 FUN_1401aea18 body=203 status=ok
// SIG undefined FUN_1401aea18(void)

undefined8 FUN_1401aea18(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  uVar1 = FUN_1401aee94();
  FUN_140056680(local_48,uVar1);
  FUN_1401aeae4(param_1,local_48,&local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401aeae4 FUN_1401aeae4 body=184 status=ok
// SIG undefined FUN_1401aeae4(void)

undefined8 * FUN_1401aeae4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  cVar3 = FUN_1401aeb9c(param_3);
  if (cVar3 == '\0') {
    if (param_1 != param_3) {
      uVar1 = param_3[1];
      *param_1 = *param_3;
      *param_3 = 0;
      param_1[1] = uVar1;
      param_3[1] = 0;
    }
  }
  else {
    if (param_1 != param_2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      *param_2 = 0;
      param_1[1] = uVar1;
      param_2[1] = 0;
    }
    iVar2 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar2 = 0;
    }
    FUN_1401aebe8(param_1,*param_3,iVar2);
  }
  FUN_1448097c4(param_1,&DAT_149e01f64,&DAT_149e065c6,0);
  FUN_1448b5552(param_1);
  if (*(uint *)(param_1 + 1) < 2) {
    FUN_14020fad6(param_1,&DAT_149e065c6);
  }
  return param_1;
}



// FUNCTION 1401aeb9c FUN_1401aeb9c body=75 status=ok
// SIG undefined FUN_1401aeb9c(void)

bool FUN_1401aeb9c(undefined8 *param_1)

{
  wint_t _C;
  wint_t wVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 1) < 2) {
    return true;
  }
  _C = *(wint_t *)*param_1;
  if (_C != 0x2f) {
    if (*(uint *)(param_1 + 1) == 2) {
      return true;
    }
    wVar1 = ((wint_t *)*param_1)[1];
    if ((_C != 0x5c) || (wVar1 != 0x5c)) {
      if (wVar1 != 0x3a) {
        return true;
      }
      iVar2 = iswalpha(_C);
      return iVar2 == 0;
    }
  }
  return false;
}



// FUNCTION 1401aebe8 FUN_1401aebe8 body=238 status=ok
// SIG undefined FUN_1401aebe8(void)

void FUN_1401aebe8(longlong *param_1,short *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar2;
  if (param_3 == 0) {
    if ((int)uVar2 < 2) {
      return;
    }
    sVar1 = *(short *)(*param_1 + -4 + uVar4 * 2);
    if (sVar1 == 0x2f) {
      return;
    }
    if (sVar1 == 0x5c) {
      return;
    }
    *(undefined2 *)(*param_1 + -2 + uVar4 * 2) = 0x2f;
    goto LAB_1401aec7a;
  }
  if (0 < (int)uVar2) {
    if (uVar2 != 1) {
      sVar1 = *(short *)(*param_1 + -4 + uVar4 * 2);
      if (((sVar1 != 0x2f) && (sVar1 != 0x5c)) && (*param_2 != 0x2f)) {
        *(undefined2 *)(*param_1 + -2 + uVar4 * 2) = 0x2f;
        goto LAB_1401aec30;
      }
    }
    uVar2 = uVar2 - 1;
    *(uint *)(param_1 + 1) = uVar2;
  }
LAB_1401aec30:
  iVar3 = uVar2 + param_3;
  if ((iVar3 != 0 && SCARRY4(uVar2,param_3) == iVar3 < 0) &&
     (*(int *)((longlong)param_1 + 0xc) <= iVar3)) {
    FUN_1446f8c06(param_1,iVar3 + 1);
  }
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_3) {
    FUN_144a2dbb8(param_1,iVar3);
  }
  memcpy((void *)((longlong)iVar3 * 2 + *param_1),param_2,(longlong)(int)param_3 * 2);
LAB_1401aec7a:
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_144a2dbb8(param_1,iVar3);
  }
  *(undefined2 *)(*param_1 + (longlong)iVar3 * 2) = 0;
  return;
}



// FUNCTION 1401aecd6 FUN_1401aecd6 body=325 status=ok
// SIG undefined FUN_1401aecd6(void)

longlong FUN_1401aecd6(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  wchar_t *_Str1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1401aee1c();
  if (*(char *)(lVar3 + 0x125) == '\0') {
    uVar4 = FUN_1401af3ae();
    FUN_140056680(&local_38,uVar4);
    uVar4 = FUN_1401aee94();
    FUN_140056680(&local_48,uVar4);
    plVar1 = (longlong *)(lVar3 + 0x108);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(plVar1,local_38,iVar2);
    puVar5 = local_48;
    if (local_40 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_14107002a(plVar1,puVar5);
    if (*(int *)(lVar3 + 0x110) - 2U < 0x7fffffff) {
      _Str1 = (wchar_t *)(*plVar1 + (ulonglong)(*(int *)(lVar3 + 0x110) - 1) * 2 + -2);
      iVar2 = wcscmp(_Str1,L"/");
      if ((iVar2 != 0) && (iVar2 = wcscmp(_Str1,L"\\"), iVar2 != 0)) {
        FUN_1400020e8(plVar1,&DAT_149e065c6,1);
      }
    }
    *(undefined1 *)(lVar3 + 0x125) = 1;
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x108;
}



// FUNCTION 1401aee1c FUN_1401aee1c body=120 status=ok
// SIG undefined FUN_1401aee1c(void)

undefined * FUN_1401aee1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8733e0) {
    FUN_144b3d300(&DAT_14c8733e0);
    if (DAT_14c8733e0 == -1) {
      FUN_1456d5fee(&DAT_14c8732b0);
      DAT_14c8733d8 = &DAT_14c8732b0;
      atexit(FUN_14278883e);
      _Init_thread_footer(&DAT_14c8733e0);
    }
  }
  return DAT_14c8733d8;
}



// FUNCTION 1401aee94 FUN_1401aee94 body=1304 status=ok
// SIG undefined FUN_1401aee94(void)

undefined2 * FUN_1401aee94(void)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  LPWSTR pWVar4;
  longlong lVar5;
  size_t sVar6;
  wchar_t *_Source;
  wchar_t *pwVar7;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong local_1d0;
  int local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  wchar_t *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  HMODULE local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong local_80;
  wchar_t *local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined2 *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (DAT_14c8c2c00 == 0) {
    local_198 = (wchar_t *)0x0;
    uStack_190 = 0;
    pWVar4 = GetCommandLineW();
    local_1d8 = 0;
    FUN_14063337c(pWVar4,L"-basedir=",&local_198,1);
    if ((uint)uStack_190 < 2) {
      pWVar4 = GetCommandLineW();
      lVar5 = FUN_1448324a4(pWVar4,L"-BaseFromWorkingDir");
      if (lVar5 == 0) {
        BVar3 = GetModuleHandleExW(6,(LPCWSTR)FUN_1401aee94,&local_1a0);
        if (BVar3 == 0) {
          local_1a0 = DAT_14c8c26f8;
        }
        GetModuleFileNameW(local_1a0,&DAT_14c8c2c00,0x200);
        FUN_140056680(&local_1b0,&DAT_14c8c2c00);
        local_1d8 = CONCAT44(local_1d8._4_4_,1);
        FUN_140807d8e(&local_1b0,&local_180,&DAT_149e01f64,&DAT_149e065c6);
        if (local_1b0 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_1b0 = (wchar_t *)CONCAT44(uStack_17c,local_180);
        local_1a8 = iStack_178;
        local_1a4 = uStack_174;
        pwVar7 = L"";
        _Source = local_1b0;
        if (iStack_178 == 0) {
          _Source = L"";
        }
        wcscpy(&DAT_14c8c2c00,_Source);
        sVar6 = wcslen(&DAT_14c8c2c00);
        if (0 < (int)(uint)sVar6) {
          sVar6 = (size_t)((uint)sVar6 & 0x7fffffff);
          while (1 < (longlong)sVar6) {
            lVar5 = sVar6 * 2;
            sVar6 = sVar6 - 1;
            if ((*(short *)(&DAT_14c8c2bfc + lVar5) == 0x2f) ||
               (*(short *)(&DAT_14c8c2bfc + lVar5) == 0x5c)) goto LAB_1401af024;
          }
          sVar6 = 0;
        }
LAB_1401af024:
        (&DAT_14c8c2c00)[(int)sVar6] = 0;
        pWVar4 = GetCommandLineW();
        lVar5 = FUN_1448324a4(pWVar4,L"-basedir");
        if (lVar5 != 0) {
          FUN_140056680(&local_1c0,&DAT_14c8c2c00);
          cVar2 = FUN_144a38768(&local_1c0,L"/Binaries/Win64/",0x10,1);
          if (cVar2 != '\0') {
            local_1d8 = CONCAT44(local_1d8._4_4_,1);
            FUN_140807d8e(&local_1c0,&local_180,L"/Binaries/Win64/",L"/Saved/StagedBuilds/");
            if (CONCAT44(uStack_1bc,local_1c0) != 0) {
              FUN_1400020a8();
            }
            local_1c0 = local_180;
            uStack_1bc = uStack_17c;
            iStack_1b8 = iStack_178;
            uStack_1b4 = uStack_174;
            FUN_144a81018(&local_180,"Windows");
            local_68 = local_78;
            iStack_60 = 0;
            if (local_78 != (wchar_t *)0x0) {
              sVar6 = wcslen(local_78);
              iStack_60 = (int)sVar6;
            }
            local_58 = &DAT_14c764000;
            sVar6 = wcslen(&DAT_14c764000);
            local_48 = L"Binaries";
            local_40 = 8;
            local_38 = L"Win64";
            local_30 = 5;
            local_50 = (int)sVar6;
            FUN_140bee87a(&local_1d0,&local_68,4);
            iVar1 = local_1c8 + -1;
            if (local_1c8 == 0) {
              iVar1 = 0;
            }
            FUN_1400020e8(&local_1c0,local_1d0,iVar1);
            if (local_1d0 != 0) {
              FUN_1400020a8();
            }
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            FUN_140002184(&local_1c0,0x2f);
            if (iStack_1b8 != 0) {
              pwVar7 = (wchar_t *)CONCAT44(uStack_1bc,local_1c0);
            }
            wcscpy(&DAT_14c8c2c00,pwVar7);
          }
          if (CONCAT44(uStack_1bc,local_1c0) != 0) {
            FUN_1400020a8();
          }
        }
        FUN_140056680(&local_180,&DAT_14c8c2c00);
        FUN_1448b5552(&local_180);
        if (iStack_178 == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)CONCAT44(uStack_17c,local_180);
        }
        wcscpy(&DAT_14c8c2c00,pwVar7);
        if (CONCAT44(uStack_17c,local_180) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        GetCurrentDirectoryW(0x200,&DAT_14c8c2c00);
        FUN_140056680(&local_180,&DAT_14c8c2c00);
        local_1d8 = CONCAT44(local_1d8._4_4_,1);
        FUN_140807d8e(&local_180,&local_68,&DAT_149e01f64,&DAT_149e065c6);
        if (CONCAT44(uStack_17c,local_180) != 0) {
          FUN_1400020a8();
        }
        local_180 = (undefined4)local_68;
        uStack_17c = local_68._4_4_;
        iStack_178 = iStack_60;
        uStack_174 = uStack_5c;
        cVar2 = FUN_144a38768(&local_180,&DAT_149e065c6,1,1);
        if (cVar2 == '\0') {
          FUN_140002184(&local_180,0x2f);
        }
        if (iStack_178 == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)CONCAT44(uStack_17c,local_180);
        }
        wcscpy(&DAT_14c8c2c00,pwVar7);
        local_1b0 = (wchar_t *)CONCAT44(uStack_17c,local_180);
      }
      if (local_1b0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_1d8 = CONCAT44(local_1d8._4_4_,1);
      FUN_140807d8e(&local_198,&local_180,&DAT_149e01f64,&DAT_149e065c6);
      if (local_198 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_198 = (wchar_t *)CONCAT44(uStack_17c,local_180);
      uStack_190 = CONCAT44(uStack_174,iStack_178);
      cVar2 = FUN_144a38768(&local_198,&DAT_149e065c6,1,1);
      if (cVar2 == '\0') {
        FUN_140002184(&local_198,0x2f);
      }
      pwVar7 = local_198;
      if ((uint)uStack_190 == 0) {
        pwVar7 = L"";
      }
      wcscpy(&DAT_14c8c2c00,pwVar7);
    }
    if (local_198 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14c8c2c00;
}



// FUNCTION 1401af3ae FUN_1401af3ae body=1407 status=ok
// SIG undefined FUN_1401af3ae(void)

wchar_t * FUN_1401af3ae(void)

{
  ushort uVar1;
  ushort uVar2;
  wchar_t **ppwVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  size_t sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78 [2];
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_1401af92e(FUN_1456d6024);
  ppwVar3 = *(wchar_t ***)(lVar6 + 0x68);
  if (*(uint *)(ppwVar3 + 1) < 2) {
    FUN_1401afab0(&local_58);
    local_80 = 0xffffffff;
    local_88 = 1;
    iVar5 = FUN_1447ee042(&local_58,L"/Engine",7,1);
    if (iVar5 == -1) {
      uVar9 = FUN_1401aee94();
      FUN_14020fad6(&local_58,uVar9);
      pwVar8 = L"";
      if ((uint)uStack_50 != 0) {
        pwVar8 = local_58;
      }
      lVar6 = 0;
      iVar5 = (uint)uStack_50 + -1;
      if ((uint)uStack_50 == 0) {
        iVar5 = 0;
      }
      FUN_140056680(&local_68,
                    (longlong)pwVar8 + ((longlong)iVar5 * 2 - (ulonglong)((uint)(0 < iVar5) * 2)));
      pwVar8 = L"";
      if ((int)uStack_60 != 0) {
        pwVar8 = local_68;
      }
      while( true ) {
        uVar1 = *(ushort *)((longlong)pwVar8 + lVar6);
        uVar2 = *(ushort *)((longlong)&DAT_149e065c6 + lVar6);
        uVar13 = (uint)uVar2;
        uVar12 = (uint)uVar1;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1401af5b6;
          }
          iVar5 = uVar12 - uVar13;
          goto LAB_1401af5e0;
        }
        if (uVar12 == 0) break;
LAB_1401af5b6:
        lVar6 = lVar6 + 2;
      }
      iVar5 = 0;
LAB_1401af5e0:
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (iVar5 == 0) {
        iVar5 = (uint)uStack_50 + -1;
        if ((uint)uStack_50 == 0) {
          iVar5 = 0;
        }
        iVar11 = 1;
        if (1 < iVar5) {
          iVar11 = iVar5;
        }
        uVar13 = iVar11 - 1;
        if ((int)uVar13 < iVar5) {
          uVar12 = (uint)(0 < (int)(iVar5 - uVar13));
          iVar5 = (uint)uStack_50 - (uVar13 + uVar12);
          if (iVar5 != 0) {
            memmove(local_58 + uVar13,local_58 + (ulonglong)uVar13 + 1,(longlong)iVar5 * 2);
          }
          uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 - uVar12);
        }
      }
      FUN_140002266(&local_68,L"/%s/Binaries",&DAT_14c764000);
      pwVar8 = local_68;
      if ((int)uStack_60 == 0) {
        pwVar8 = L"";
      }
      if (pwVar8 == (wchar_t *)0x0) {
        iVar5 = -1;
      }
      else {
        sVar10 = wcslen(pwVar8);
        local_80 = 0xffffffff;
        local_88 = 0;
        iVar5 = FUN_1447ee042(&local_58,pwVar8,sVar10 & 0xffffffff,1);
      }
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (iVar5 == -1) {
        local_80 = 0xffffffff;
        local_88 = 1;
        iVar5 = FUN_1447ee042(&local_58,L"/../Binaries",0xc,1);
        if (iVar5 == -1) {
          if (1 < (uint)uStack_50) {
            do {
              FUN_140056680(&local_68);
              pwVar8 = local_68;
              if ((int)uStack_60 == 0) {
                pwVar8 = L"";
              }
              lVar6 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)pwVar8 + lVar6);
                uVar2 = *(ushort *)((longlong)&DAT_149e065c6 + lVar6);
                uVar12 = (uint)uVar2;
                uVar13 = (uint)uVar1;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1401af896;
                  }
                  iVar5 = uVar13 - uVar12;
                  goto LAB_1401af89f;
                }
                if (uVar13 == 0) break;
LAB_1401af896:
                lVar6 = lVar6 + 2;
              }
              iVar5 = 0;
LAB_1401af89f:
              if (local_68 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              if (iVar5 == 0) break;
              iVar5 = (uint)uStack_50 - 1;
              if ((uint)uStack_50 == 0) {
                iVar5 = 0;
              }
              iVar11 = 1;
              if (1 < iVar5) {
                iVar11 = iVar5;
              }
              uVar12 = iVar11 - 1;
              bVar4 = 0 < (int)(iVar5 - uVar12);
              uVar13 = (uint)uStack_50;
              if ((int)uVar12 < iVar5) {
                iVar5 = (uint)uStack_50 - (uVar12 + bVar4);
                if (iVar5 != 0) {
                  memmove(local_58 + uVar12,local_58 + (ulonglong)uVar12 + 1,(longlong)iVar5 * 2);
                }
                uVar13 = (uint)uStack_50 - bVar4;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar13);
              }
            } while (1 < uVar13);
          }
        }
        else {
          iVar11 = (uint)uStack_50 - 1;
          pwVar8 = local_58;
          if ((uint)uStack_50 == 0) {
            iVar11 = 0;
            pwVar8 = L"";
          }
          if (iVar5 + 1 < iVar11) {
            iVar11 = iVar5 + 1;
          }
          if (iVar11 < 1) {
            iVar11 = 0;
          }
          FUN_14006620a(local_78,pwVar8,iVar11);
          FUN_144a882a8(&local_68,local_78,L"../../");
          if (local_58 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_58 = local_68;
          uStack_50 = uStack_60;
          local_68 = (wchar_t *)0x0;
          uStack_60 = 0;
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      else {
        uVar13 = (uint)uStack_50 - 1;
        if ((uint)uStack_50 == 0) {
          uVar13 = 0;
        }
        uVar12 = iVar5 + 1U;
        if ((int)uVar13 <= (int)(iVar5 + 1U)) {
          uVar12 = uVar13;
        }
        uVar7 = (ulonglong)uVar12;
        if ((int)uVar12 < 1) {
          uVar7 = 0;
        }
        uVar13 = uVar13 - (int)uVar7;
        if (0 < (int)uVar13) {
          iVar5 = (uint)uStack_50 - (uVar13 + (int)uVar7);
          if (iVar5 != 0) {
            memmove(local_58 + uVar7,local_58 + uVar7 + uVar13,(longlong)iVar5 * 2);
          }
          uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 - uVar13);
        }
      }
    }
    else {
      uVar13 = (uint)uStack_50 - 1;
      if ((uint)uStack_50 == 0) {
        uVar13 = 0;
      }
      uVar12 = iVar5 + 1U;
      if ((int)uVar13 <= (int)(iVar5 + 1U)) {
        uVar12 = uVar13;
      }
      uVar7 = (ulonglong)uVar12;
      if ((int)uVar12 < 1) {
        uVar7 = 0;
      }
      uVar13 = uVar13 - (int)uVar7;
      if (0 < (int)uVar13) {
        iVar5 = (uint)uStack_50 - (uVar13 + (int)uVar7);
        if (iVar5 != 0) {
          memmove(local_58 + uVar7,local_58 + uVar7 + uVar13,(longlong)iVar5 * 2);
        }
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 - uVar13);
      }
    }
    FUN_1401aea18(&local_68,&local_58);
    if (ppwVar3 == &local_68) {
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppwVar3 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      *ppwVar3 = local_68;
      local_68 = (wchar_t *)0x0;
      *(int *)(ppwVar3 + 1) = (int)uStack_60;
      *(undefined4 *)((longlong)ppwVar3 + 0xc) = uStack_60._4_4_;
    }
    FUN_1401ae99a(ppwVar3);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)(ppwVar3 + 1) == 0) {
      pwVar8 = L"";
      goto LAB_1401af3e6;
    }
  }
  pwVar8 = *ppwVar3;
LAB_1401af3e6:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return pwVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401af92e FUN_1401af92e body=131 status=ok
// SIG undefined FUN_1401af92e(void)

undefined * FUN_1401af92e(code *param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f1d8) {
    FUN_144b3d300(&DAT_14c83f1d8);
    if (DAT_14c83f1d8 == -1) {
      if (param_1 == (code *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = &DAT_14c83f168;
        (*param_1)(&DAT_14c83f168);
      }
      DAT_14c83f1d0 = puVar1;
      atexit(FUN_14275089b);
      _Init_thread_footer(&DAT_14c83f1d8);
    }
  }
  return &DAT_14c83f168;
}



// FUNCTION 1401af9b2 FUN_1401af9b2 body=64 status=ok
// SIG undefined FUN_1401af9b2(void)

void FUN_1401af9b2(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 != 0) {
    sVar3 = wcslen((wchar_t *)*param_1);
    uVar2 = ~(uint)sVar3;
    if ((int)(uint)sVar3 < 1) {
      uVar2 = 0;
    }
    if (iVar1 + uVar2 != 0) {
      *(uint *)(param_1 + 1) = -uVar2;
      FUN_1449649ae(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1401af9f2 FUN_1401af9f2 body=190 status=ok
// SIG undefined FUN_1401af9f2(void)

longlong FUN_1401af9f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  iVar2 = FUN_1447413de();
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x68 + *(longlong *)(param_1 + 0xe8);
  }
  lVar1 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1401afab0 FUN_1401afab0 body=33 status=ok
// SIG undefined FUN_1401afab0(void)

undefined8 FUN_1401afab0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d6ac5a();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 1401afad2 FUN_1401afad2 body=108 status=ok
// SIG undefined FUN_1401afad2(void)

undefined4 * FUN_1401afad2(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401afb40();
  FUN_1401afb40();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9e5530,0);
  FUN_1401afb40();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401afb40 FUN_1401afb40 body=289 status=ok
// SIG undefined FUN_1401afb40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401afb40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e55d8) {
    FUN_144b3d300(&DAT_14c9e55d8);
    if (DAT_14c9e55d8 == -1) {
      FUN_1401afc62();
      FUN_1456d6060();
      FUN_140db5666(&DAT_14c9e5530,0,&DAT_14c9e54c8,L"FCalculateCompactBlockInstanceOffsetsCs",
                    L"/Engine/Private/InstanceCulling/CompactVisibleInstances.usf",
                    L"CalculateCompactBlockInstanceOffsetsCS",5,1,FUN_1471be2b6,FUN_1471be256,
                    FUN_1462d1278,&LAB_1471be252,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6970);
      _DAT_14c9e5530 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cc5b30);
      _Init_thread_footer(&DAT_14c9e55d8);
    }
  }
  return &DAT_14c9e5530;
}



// FUNCTION 1401afc62 FUN_1401afc62 body=258 status=ok
// SIG undefined FUN_1401afc62(void)

void FUN_1401afc62(void)

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
              0x110) < DAT_14c9e69f0) {
    FUN_144b3d300(&DAT_14c9e69f0);
    if (DAT_14c9e69f0 == -1) {
      FUN_1456d61aa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1bf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6970,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf612);
      _Init_thread_footer(&DAT_14c9e69f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401afd66 FUN_1401afd66 body=700 status=ok
// SIG undefined FUN_1401afd66(void)

void FUN_1401afd66(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = (undefined8 *)0x0;
  local_30 = &DAT_100000001;
  local_40 = param_2;
  uVar4 = 1;
  do {
    puVar7 = local_38;
    if (local_38 == (undefined8 *)0x0) {
      puVar7 = &local_40;
    }
    lVar2 = puVar7[(ulonglong)uVar4 - 1];
    local_30 = (undefined1 *)CONCAT44(local_30._4_4_,uVar4 - 1);
    uVar4 = uVar4 - 1;
    if (lVar2 != 0) {
      if (DAT_14cac6e60 == 0) {
        local_60 = &local_48;
        local_48 = FUN_144a7958c;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_142b47bc4;
        local_68 = &LAB_1478989f1;
        local_70 = &LAB_146391124;
        local_78 = L"Engine";
        local_80 = 0x10000000000;
        local_88 = 0x10000005;
        local_90 = 0x10;
        local_98 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
        lVar6 = *(longlong *)(lVar2 + 0xb0);
        if (lVar6 == 0) {
          lVar6 = FUN_1448abda6(lVar2);
          if (lVar6 == 0) goto LAB_1401afe51;
          lVar6 = *(longlong *)(lVar2 + 0xb0);
          if (lVar6 == 0) {
            lVar6 = FUN_1448abda6(lVar2);
          }
        }
        if (*(longlong *)(lVar6 + 0x218) == param_1) {
          if ((((DAT_14c76152c == '\x01') && (*(char *)(lVar2 + 0x1fc) != '\0')) &&
              ((lVar6 = *(longlong *)(lVar2 + 0xb0), lVar6 != 0 ||
               (lVar6 = FUN_1448abda6(lVar2), lVar6 != 0)))) &&
             ((((*(byte *)(lVar6 + 0x152) == 1 || (*(byte *)(lVar6 + 0x152) - 5 < 2)) &&
               (*(longlong *)(lVar6 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
            bVar1 = *(byte *)(lVar2 + 0x1fc);
            iVar5 = *(int *)(*(longlong *)(lVar6 + 0x178) + 0x3e4);
            if (iVar5 < 0) {
              iVar5 = FUN_141348de4();
            }
            if (iVar5 < (int)(uint)bVar1) goto LAB_1401afe51;
          }
          if (((int)(uint)*(byte *)(lVar2 + 0x1fc) <= DAT_14cb0cbf8) &&
             (((cVar3 = FUN_140041326(lVar2), cVar3 != '\0' ||
               ((*(byte *)(lVar2 + 0x2dc) & 0x40) != 0)) ||
              (((*(byte *)(lVar2 + 0x2d6) & 0x10) != 0 || ((*(byte *)(lVar2 + 0x2df) & 2) != 0))))))
          {
            FUN_1448b58d8(param_1,lVar2);
          }
        }
      }
LAB_1401afe51:
      FUN_1401b0024(&local_40,lVar2 + 0x138);
      uVar4 = (uint)local_30;
    }
    if ((int)uVar4 < 1) {
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1401b0024 FUN_1401b0024 body=101 status=ok
// SIG undefined FUN_1401b0024(void)

void FUN_1401b0024(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x14) - iVar2) < uVar1) {
    FUN_1401b057e(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = param_1;
  }
  FUN_144738dca(lVar3 + (longlong)iVar2 * 8,*param_2,uVar1);
  return;
}



// FUNCTION 1401b008a FUN_1401b008a body=1267 status=ok
// SIG undefined FUN_1401b008a(void)

void FUN_1401b008a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_1401b01d0;
  uVar11 = *(undefined8 *)(param_2 + 0x218);
  local_80 = *param_3;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_90 = param_1;
  uStack_88 = uVar11;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1401b00f1;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1401b00f6;
      goto LAB_1401b012b;
    }
  }
  else {
LAB_1401b00f1:
    if (iVar6 != 0x10) {
LAB_1401b012b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1401b00f6;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1401b00f6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1401b0298;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_142fb49ae);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1401b0298:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1401b0318;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1401b0318:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a2e8310;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_90;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_90._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_88._4_4_;
        puVar16[0x17] = CONCAT44(uStack_7c,local_80);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_98 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a2e82f0;
        local_50 = (undefined4)local_90;
        uStack_4c = local_90._4_4_;
        uStack_48 = (undefined4)uStack_88;
        uStack_44 = uStack_88._4_4_;
        local_40 = CONCAT44(uStack_7c,local_80);
        local_78[0] = &LAB_14085e0ac;
        FUN_14005a792(&DAT_14ca9a440,L"UpdatePrimitiveCmd",&DAT_14ca44c50);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1401b01d0;
    }
  }
LAB_1401b00f6:
  FUN_14085e0c4(param_1 + 0x53a0,uVar11,&local_80);
LAB_1401b01d0:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b057e FUN_1401b057e body=528 status=ok
// SIG undefined FUN_1401b057e(void)

void FUN_1401b057e(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x10);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    _Src = *(void **)((longlong)param_1 + 8);
joined_r0x0001401b0727:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14) < 2) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = uVar3;
      }
      lVar7 = (longlong)(int)uVar6;
    }
    else {
      lVar7 = (longlong)(int)uVar3 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_1401b0613;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_1401b0613:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 8);
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar6;
      _Src = *(void **)((longlong)param_1 + 8);
      if (uVar6 < 2) goto joined_r0x0001401b0727;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,uVar8,8);
  return;
}



// FUNCTION 1401b078e FUN_1401b078e body=275 status=ok
// SIG undefined FUN_1401b078e(void)

longlong * FUN_1401b078e(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401b08a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68),&local_38,param_3,
                param_4 | *(uint *)(param_1 + 0x90) >> 4 & 1);
  if ((longlong *)&local_38 == param_2) {
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
    *(undefined4 *)(param_2 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x16c0) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x188);
    if ((longlong)(int)uVar1 != 0) {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
        FUN_1401b0d4a(param_2,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(param_1 + 0x180),
             (longlong)(int)uVar1 << 3);
      *(undefined4 *)(param_1 + 0x188) = 0;
      if (*(int *)(param_1 + 0x18c) != 0) {
        FUN_1401b0cea(param_1 + 0x180,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b08a2 FUN_1401b08a2 body=155 status=ok
// SIG undefined FUN_1401b08a2(void)

undefined8 * FUN_1401b08a2(longlong param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_4 & 1) == 0) {
    FUN_1401b093e(param_1,param_2);
  }
  local_28 = FUN_1401b09e0(param_1,param_3);
  if (local_28 != 0) {
    FUN_1435b0bd0(param_2,&local_28,
                  (*(int *)(*(longlong *)(param_1 + 0x130) + 0xa0) * 8 -
                  *(int *)(*(longlong *)(param_1 + 0x130) + 0x130)) + -0x235);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b093e FUN_1401b093e body=161 status=ok
// SIG undefined FUN_1401b093e(void)

void FUN_1401b093e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x308)) {
    FUN_1435af632(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x2f8);
  if (0 < (longlong)(int)uVar1) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1401b0d4a(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(param_1 + 0x2f0),
           (longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    if (*(int *)(param_1 + 0x2fc) != 0) {
      FUN_1401b0cea(param_1 + 0x2f0,0);
      return;
    }
  }
  return;
}



// FUNCTION 1401b09e0 FUN_1401b09e0 body=776 status=ok
// SIG undefined FUN_1401b09e0(void)

longlong * FUN_1401b09e0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  longlong local_78 [2];
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  if (0 < (longlong)*(int *)(param_2 + 0x130)) {
    puVar11 = (uint *)(param_2 + 0x118);
    if (*(uint **)(param_2 + 0x128) != (uint *)0x0) {
      puVar11 = *(uint **)(param_2 + 0x128);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x408) + 0x28);
    puVar1 = puVar11 + *(int *)(param_2 + 0x130);
    do {
      uVar4 = local_50;
      uVar5 = *puVar11;
      if ((iVar2 == 1) || ((uVar5 & 0x800000) == 0)) {
        if (*(int *)(param_1 + 0x420) != *(int *)(param_1 + 0x44c)) {
          lVar13 = *(longlong *)(param_1 + 0x458);
          if (*(longlong *)(param_1 + 0x458) == 0) {
            lVar13 = param_1 + 0x450;
          }
          iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x460) - 1U & uVar5) * 4);
          if (iVar9 != -1) {
            do {
              if (*(uint *)(*(longlong *)(param_1 + 0x418) + (longlong)iVar9 * 0xc) == uVar5)
              goto LAB_1401b0b0a;
              iVar9 = *(int *)(*(longlong *)(param_1 + 0x418) + (longlong)iVar9 * 0xc + 4);
            } while (iVar9 != -1);
          }
        }
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_68;
        }
        lVar13 = (longlong)(int)local_50;
        if (lVar13 != 0) {
          lVar12 = 0;
          do {
            if (*(uint *)(puVar8 + lVar12) == uVar5) goto LAB_1401b0b0a;
            lVar12 = lVar12 + 4;
          } while (lVar13 * 4 - lVar12 != 0);
        }
        uVar10 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar10);
        if (local_50._4_4_ < uVar10) {
          FUN_146f01f82(local_68,uVar4 & 0xffffffff);
          uVar5 = *puVar11;
        }
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_68;
        }
        *(uint *)(puVar8 + lVar13 * 4) = uVar5;
      }
LAB_1401b0b0a:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
    if ((int)local_50 != 0) {
      plVar6 = (longlong *)FUN_14001cc68(0x138,0x10);
      FUN_144a679e2(plVar6,param_1,0x400);
      *plVar6 = (longlong)&PTR_FUN_14a8a3730;
      plVar6[0x19] = 0;
      plVar6[0x1a] = 0;
      plVar6[0x1b] = 0;
      plVar6[0x1c] = 0;
      *(undefined8 *)((longlong)plVar6 + 0xe5) = 0;
      *(undefined8 *)((longlong)plVar6 + 0xed) = 0;
      *(undefined1 *)((longlong)plVar6 + 0xf6) = 0;
      plVar6[0x25] = 0;
      plVar6[0x26] = 0x400000000;
      plVar6[0x1f] = 0;
      plVar6[0x20] = 0;
      plVar6[0x21] = 0;
      plVar6[0x22] = 0;
      *(byte *)((longlong)plVar6 + 0xf5) = *(byte *)((longlong)plVar6 + 0xf5) & 0xf8 | 4;
      *(undefined1 *)(plVar6 + 0x16) = 1;
      FUN_140002266(local_78,L"%s ExportsBunch",&DAT_149dfb77a);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      puVar8 = local_68;
      if (local_58 != (undefined1 *)0x0) {
        puVar8 = local_58;
      }
      lVar13 = (longlong)(int)local_50;
      if (lVar13 != 0) {
        lVar12 = 0;
        do {
          uVar3 = *(undefined4 *)(puVar8 + lVar12);
          local_79 = 1;
          (**(code **)(*plVar6 + 0x178))(plVar6,&local_79,1);
          FUN_146f293e6(plVar6,uVar3,1);
          FUN_142a817fe(*(undefined8 *)(param_1 + 0x408),plVar6,uVar3);
          iVar2 = (int)plVar6[0x26];
          *(uint *)(plVar6 + 0x26) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar6 + 0x134) < iVar2 + 1U) {
            FUN_146f01f82(plVar6 + 0x23,iVar2);
          }
          plVar7 = (longlong *)plVar6[0x25];
          if ((longlong *)plVar6[0x25] == (longlong *)0x0) {
            plVar7 = plVar6 + 0x23;
          }
          *(undefined4 *)((longlong)plVar7 + (longlong)iVar2 * 4) = uVar3;
          lVar12 = lVar12 + 4;
        } while (lVar13 * 4 != lVar12);
      }
      local_79 = 0;
      (**(code **)(*plVar6 + 0x178))(plVar6,&local_79,1);
      goto LAB_1401b0caf;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1401b0caf:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 1401b0cea FUN_1401b0cea body=96 status=ok
// SIG undefined FUN_1401b0cea(void)

void FUN_1401b0cea(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1401b0d4a FUN_1401b0d4a body=356 status=ok
// SIG undefined FUN_1401b0d4a(void)

void FUN_1401b0d4a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401b0dcf;
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
LAB_1401b0dcf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401b0eb0 FUN_1401b0eb0 body=103 status=ok
// SIG undefined FUN_1401b0eb0(void)

undefined8 FUN_1401b0eb0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (lVar4 != 0) {
          uVar1 = FUN_1401b0ffe(lVar4);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1401b0f18 FUN_1401b0f18 body=228 status=ok
// SIG undefined FUN_1401b0f18(void)

longlong FUN_1401b0f18(void)

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
  if (DAT_14cb1a338 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147e18a87;
    local_40 = FUN_14641758b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"GbxActor",&DAT_14cb1a338,FUN_146417564);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a338;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b0ffe FUN_1401b0ffe body=326 status=ok
// SIG undefined FUN_1401b0ffe(void)

ulonglong FUN_1401b0ffe(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x103) != '\0') goto LAB_1401b10cb;
  if ((((((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x74))) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
         ((*plVar6 != 0 && (lVar3 = FUN_1447210f0(), lVar3 != 0)))))))) &&
      (*(longlong *)(lVar3 + 0x30) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 != 0)) {
    lVar4 = FUN_1401b1144();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (*(char *)(lVar3 + 0x631) != '\0')) goto LAB_1401b10cb;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 == 0) {
    uVar5 = FUN_140927942();
    lVar3 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x60) = lVar3;
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 == 0) {
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
      plVar6 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar4 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x58));
        *(longlong *)(param_1 + 0x68) = lVar4;
        if (lVar4 != 0) goto LAB_1401b10c3;
      }
    }
  }
  else {
LAB_1401b10c3:
    if (*(char *)(lVar4 + 0x4d) != '\0') goto LAB_1401b10cb;
  }
  uVar7 = 0;
LAB_1401b10cb:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1401b1144 FUN_1401b1144 body=228 status=ok
// SIG undefined FUN_1401b1144(void)

longlong FUN_1401b1144(void)

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
  if (DAT_14c9a5b08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462af7d4;
    local_38 = &LAB_1470d1d85;
    local_40 = &LAB_1462af7d9;
    local_48 = L"game";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x648;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxWorldSettings",&DAT_14c9a5b08,&DAT_1470d1d84);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5b08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b122a FUN_1401b122a body=108 status=ok
// SIG undefined FUN_1401b122a(void)

undefined4 * FUN_1401b122a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401b1298();
  FUN_1401b1298();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9e5658,0);
  FUN_1401b1298();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b1298 FUN_1401b1298 body=289 status=ok
// SIG undefined FUN_1401b1298(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401b1298(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5700) {
    FUN_144b3d300(&DAT_14c9e5700);
    if (DAT_14c9e5700 == -1) {
      FUN_1401b13ba();
      FUN_1456d63a0();
      FUN_140db5666(&DAT_14c9e5658,0,&DAT_14c9e55f0,L"FCompactVisibleInstancesCs",
                    L"/Engine/Private/InstanceCulling/CompactVisibleInstances.usf",
                    L"CompactVisibleInstances",5,1,FUN_1471be37c,FUN_1471be31c,FUN_1462d12ac,
                    &LAB_1471be318,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e69f8);
      _DAT_14c9e5658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cc5b3c);
      _Init_thread_footer(&DAT_14c9e5700);
    }
  }
  return &DAT_14c9e5658;
}



// FUNCTION 1401b13ba FUN_1401b13ba body=258 status=ok
// SIG undefined FUN_1401b13ba(void)

void FUN_1401b13ba(void)

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
              0x110) < DAT_14c9e6a78) {
    FUN_144b3d300(&DAT_14c9e6a78);
    if (DAT_14c9e6a78 == -1) {
      FUN_1456d64ea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1da;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e69f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf61e);
      _Init_thread_footer(&DAT_14c9e6a78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b14be FUN_1401b14be body=55 status=ok
// SIG undefined FUN_1401b14be(void)

void FUN_1401b14be(longlong param_1,longlong *param_2)

{
  FUN_1448b5a3e();
                    /* WARNING: Could not recover jumptable at 0x0001401b14f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x1d0,0,0);
  return;
}



// FUNCTION 1401b1532 FUN_1401b1532 body=147 status=ok
// SIG undefined FUN_1401b1532(void)

undefined8 FUN_1401b1532(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x1b8))) {
    lVar5 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1b0);
    }
    if (((char)param_3 != '\x04') &&
       (plVar2 = *(longlong **)(lVar5 + (longlong)iVar1 * 0x10), plVar2 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3);
        if (cVar3 == '\0') {
          return 0;
        }
      }
    }
  }
  uVar4 = FUN_1401b15c6(param_1,param_2,param_3);
  return uVar4;
}



// FUNCTION 1401b15c6 FUN_1401b15c6 body=152 status=ok
// SIG undefined FUN_1401b15c6(void)

ulonglong FUN_1401b15c6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar5);
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (((((char)param_3 != '\x04') && (cVar3 != '\0')) &&
          (cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2), cVar3 != '\0')) &&
         (cVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3), cVar3 == '\0')) {
        uVar4 = 0;
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1401b165e FUN_1401b165e body=189 status=ok
// SIG undefined FUN_1401b165e(void)

void FUN_1401b165e(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != '\x01') {
    iVar1 = *(int *)(param_1 + 0x450);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x448);
      lVar4 = 0;
      do {
        FUN_1448b5cf4(*(undefined8 *)(lVar2 + lVar4),param_3);
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    if (param_2 == '\x02') goto LAB_1401b16a5;
  }
  iVar1 = *(int *)(param_1 + 0x460);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x458);
    lVar4 = 0;
    do {
      FUN_1448b5cf4(*(undefined8 *)(lVar2 + lVar4),param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
LAB_1401b16a5:
  if (*param_3 == 0) {
    return;
  }
  plVar3 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_3[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001401b16cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 1401b171c FUN_1401b171c body=111 status=ok
// SIG undefined FUN_1401b171c(void)

undefined8 FUN_1401b171c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_1 + 0xbf0))();
  if (((cVar1 != '\0') && ((*(byte *)((longlong)param_1 + 0x89f) & 1) == 0)) &&
     ((longlong)(int)param_1[0x2c2] != 0)) {
    lVar4 = param_1[0x2c1];
    lVar3 = (longlong)(int)param_1[0x2c2] * 0x18;
    do {
      cVar1 = FUN_1401b1808(param_1,lVar4);
      if (cVar1 != '\0') {
        return 1;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  uVar2 = FUN_1401b178c(param_1);
  return uVar2;
}



// FUNCTION 1401b178c FUN_1401b178c body=124 status=ok
// SIG undefined FUN_1401b178c(void)

ulonglong FUN_1401b178c(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = (**(code **)(*param_1 + 0xa90))();
  if ((((lVar5 != 0) && (-1 < *(int *)((longlong)param_1 + 0x854))) &&
      (*(int *)((longlong)param_1 + 0x854) < *(int *)(lVar5 + 8))) &&
     (((*(byte *)((longlong)param_1 + 0x89f) & 1) == 0 && (param_1[0x115] != 0)))) {
    uVar2 = FUN_1448d11dc(param_1);
    iVar3 = FUN_1401b1882(lVar5,uVar2);
    cVar1 = (**(code **)(*(longlong *)param_1[0x115] + 0x40))();
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((cVar1 != '\0') || (iVar4 = FUN_1401a8bec(0), iVar3 <= iVar4)) goto LAB_1401b17ca;
  }
  uVar6 = 0;
LAB_1401b17ca:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1401b1808 FUN_1401b1808 body=121 status=ok
// SIG undefined FUN_1401b1808(void)

undefined8 FUN_1401b1808(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x40), lVar2 != 0)) &&
      (-1 < *(int *)(param_1 + 0x854))) && (*(int *)(param_1 + 0x854) < *(int *)(lVar2 + 8))) {
    lVar3 = param_2[1];
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      FUN_1448abda6(param_1);
    }
    uVar4 = FUN_1401b18d4(param_1,lVar1,lVar3,lVar2);
    iVar5 = FUN_1401b1882(lVar2,uVar4);
    if (iVar5 < 0x10000) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1401b1882 FUN_1401b1882 body=81 status=ok
// SIG undefined FUN_1401b1882(void)

int FUN_1401b1882(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 < (int)param_1[1]) {
    lVar4 = (longlong)param_2;
    iVar3 = 0;
    do {
      lVar2 = *(longlong *)(*param_1 + lVar4 * 8);
      lVar5 = (longlong)*(int *)(lVar2 + 0x18);
      if (0 < lVar5) {
        lVar6 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x40 + lVar6);
          if (iVar3 < iVar1) {
            iVar3 = iVar1;
          }
          lVar6 = lVar6 + 0xf8;
        } while (lVar5 * 0xf8 - lVar6 != 0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != (int)param_1[1]);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 1401b18d4 FUN_1401b18d4 body=357 status=ok
// SIG undefined FUN_1401b18d4(void)

int FUN_1401b18d4(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  int local_30;
  byte local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    if (param_2 != 0) {
      param_4 = *(longlong *)(param_2 + 0x40);
      goto LAB_1401b18fd;
    }
    if (param_3 != (longlong *)0x0) {
      param_4 = (**(code **)(*param_3 + 0x388))(param_3);
      goto LAB_1401b18fd;
    }
    if ((*(byte *)((longlong)param_1 + 0x89e) & 8) != 0) {
      iVar5 = (int)param_1[0x10a];
      lVar3 = (**(code **)(*param_1 + 0xa90))(param_1);
      if (lVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(lVar3 + 8);
      }
      goto LAB_1401b193f;
    }
LAB_1401b19dd:
    param_4 = (**(code **)(*param_1 + 0xa90))(param_1);
    if (param_4 == 0) {
      iVar4 = 0;
    }
    else {
LAB_1401b1987:
      iVar4 = *(int *)(param_4 + 8);
    }
    iVar5 = 0;
  }
  else {
LAB_1401b18fd:
    if ((*(byte *)((longlong)param_1 + 0x89e) & 8) == 0) {
      if (param_3 == (longlong *)0x0) {
        if (param_4 == 0) goto LAB_1401b19dd;
        goto LAB_1401b1987;
      }
      piVar2 = (int *)(**(code **)(*param_3 + 0x398))(param_3);
      iVar5 = *piVar2;
      if ((param_4 == 0) && (param_4 = (**(code **)(*param_1 + 0xa90))(param_1), param_4 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_4 + 8);
      }
    }
    else {
      iVar5 = (int)param_1[0x10a];
      if ((param_4 == 0) && (param_4 = (**(code **)(*param_1 + 0xa90))(param_1), param_4 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_4 + 8);
      }
      if (param_3 == (longlong *)0x0) goto LAB_1401b193f;
    }
    (**(code **)(*param_3 + 0x4a8))(param_3,&local_30);
    if ((local_2c & 1) != 0) {
      iVar5 = local_30;
    }
  }
LAB_1401b193f:
  iVar1 = iVar4 + -1;
  if (iVar5 < iVar4 + -1) {
    iVar1 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    iVar5 = iVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1401b1a3a FUN_1401b1a3a body=539 status=ok
// SIG undefined FUN_1401b1a3a(void)

void FUN_1401b1a3a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  undefined8 local_78;
  longlong lStack_70;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong lStack_50;
  ulonglong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    if (*(char *)(param_2 + 0x13) == '\x01') {
      FUN_142400d60(param_2[4],*(undefined4 *)(param_2 + 5));
    }
    else {
      FUN_1448859f0(param_2 + 4,param_2[6]);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78),param_2);
  }
  if ((*(char *)(param_1 + 0x11e) == '\x01') && (1e-05 < *(float *)(param_1 + 0x118))) {
    local_c8 = *param_2;
    local_c0 = 0;
    local_b8 = 1;
    local_b4 = 0xffffffffffffffff;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_87 = 0;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    lStack_40 = 0;
    local_38 = 0;
    local_30 = 1;
    FUN_1447ce2ce(&local_c8);
    local_b4 = *(undefined8 *)((longlong)param_2 + 0x14);
    FUN_1401b1cc0(param_1,&local_c8);
    local_e0 = param_2 + 4;
    local_d8 = param_2 + 7;
    local_d0 = param_2 + 0xb;
    local_f0 = &uStack_90;
    local_e8 = &lStack_70;
    local_f8 = &local_a8;
    FUN_1401b1c56(&local_e0,&local_f8,*(undefined4 *)(param_1 + 0x118));
    FUN_142400cf0(param_2[4],*(undefined4 *)(param_2 + 5));
    if (lStack_40 != 0) {
      FUN_1400020a8();
    }
    FUN_144716785(lStack_50,local_48 & 0xffffffff);
    if (lStack_50 != 0) {
      FUN_1400020a8();
    }
    FUN_144716758(lStack_60,local_58 & 0xffffffff);
    if (lStack_60 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(lStack_70,local_68 & 0xffffffff);
    if (lStack_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b1c56 FUN_1401b1c56 body=105 status=ok
// SIG undefined FUN_1401b1c56(void)

void FUN_1401b1c56(longlong *param_1,undefined8 *param_2,float param_3)

{
  FUN_140035f34(*param_1,*param_2);
  if (1e-05 < param_3) {
    FUN_144716836(param_1[1],param_2[1],param_3);
  }
  FUN_140035fa4(param_2[2],param_1[2],param_3,2);
  FUN_142400cf0(*(undefined8 *)*param_1,*(undefined4 *)((undefined8 *)*param_1 + 1));
  return;
}



// FUNCTION 1401b1cc0 FUN_1401b1cc0 body=372 status=ok
// SIG undefined FUN_1401b1cc0(void)

void FUN_1401b1cc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  double *local_b0;
  longlong **local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  double local_78;
  byte local_70;
  longlong local_6c;
  undefined4 local_64;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined1 local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
    local_a0 = param_2 + 4;
    local_98 = param_2 + 7;
    local_90 = param_2 + 0xb;
    local_60 = (**(code **)(*param_1 + 0x120))(param_1);
    local_6c = param_1[6];
    local_b0 = &local_78;
    local_64 = (undefined4)param_1[7];
    local_78 = (double)*(float *)((longlong)param_1 + 0x2c);
    local_70 = *(byte *)(*param_2 + 0x7e1) >> 1 & 1;
    local_37 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_88 = 0;
    local_80 = 0;
    local_b8 = 0;
    local_a8 = &local_a0;
    FUN_140035312(lVar1,param_1 + 10,&local_88,0);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
  }
  if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_1448859f0(param_2 + 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8,param_2[6]);
}



// FUNCTION 1401b1e5e FUN_1401b1e5e body=106 status=ok
// SIG undefined FUN_1401b1e5e(void)

void * FUN_1401b1e5e(void *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)((longlong)param_1 + 200) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xcc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 8;
  }
  else {
    FUN_1401b1ec8(param_1,iVar1);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0xc0);
      if (*(void **)((longlong)param_1 + 0xc0) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1401b1ec8 FUN_1401b1ec8 body=121 status=ok
// SIG undefined FUN_1401b1ec8(void)

void FUN_1401b1ec8(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 8, 8 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_146c5b11e(param_1,0,iVar3,0x18);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xcc) = param_3;
  return;
}



// FUNCTION 1401b1f42 FUN_1401b1f42 body=269 status=ok
// SIG undefined FUN_1401b1f42(void)

void FUN_1401b1f42(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1401b2056 FUN_1401b2056 body=364 status=ok
// SIG undefined FUN_1401b2056(void)

void FUN_1401b2056(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,local_30);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  lVar2 = param_1[0x2d];
  if (lVar2 != 0) {
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    iVar1 = *(int *)(lVar2 + 0x1c0);
    *(uint *)(lVar2 + 0x1c0) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x1c4) < iVar1 + 1U) {
      FUN_140b51998((longlong *)(lVar2 + 0x1b8),iVar1);
    }
    *(longlong **)(*(longlong *)(lVar2 + 0x1b8) + (longlong)iVar1 * 8) = param_1;
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    FUN_1410b8c2c(param_1[0x2d] + 0x330,param_1,1);
  }
  FUN_144842a8a(param_1,local_30);
  if (local_30[0] < 0x156) {
    *(byte *)((longlong)param_1 + 99) =
         *(byte *)((longlong)param_1 + 99) & 0xf7 | ((char)param_1[0xd] != '\0') << 3;
  }
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xfb;
  }
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) | 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1401b21c4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b21c4 FUN_1401b21c4 body=111 status=ok
// SIG undefined FUN_1401b21c4(void)

void FUN_1401b21c4(longlong *param_1)

{
  longlong *plVar1;
  
  if (((char)param_1[0xc] < '\0') && (plVar1 = param_1, (char)param_1[0x6d] == '\0')) {
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
      if ((*(uint *)(plVar1 + 1) & 0x30) != 0) {
        return;
      }
    }
    FUN_1400bc96c(param_1 + 0x6d,&DAT_14cac9d44);
    if (-1 < (char)param_1[0xc] == (bool)(char)param_1[0x6d]) {
                    /* WARNING: Could not recover jumptable at 0x0001401b2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x608))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1401b2234 FUN_1401b2234 body=140 status=ok
// SIG undefined FUN_1401b2234(void)

void FUN_1401b2234(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cadacc0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001401b228b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x838))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b22d0 FUN_1401b22d0 body=107 status=ok
// SIG undefined FUN_1401b22d0(void)

void FUN_1401b22d0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_1401b233c();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0001401b2338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,param_3,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 1401b233c FUN_1401b233c body=57 status=ok
// SIG undefined FUN_1401b233c(void)

void FUN_1401b233c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7428 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7428 = FUN_140002ddd(FUN_1465cbb6e,uVar1,L"OakBodyNodeSettings_GrappleTarget");
  }
  return;
}



// FUNCTION 1401b2376 FUN_1401b2376 body=28 status=ok
// SIG undefined FUN_1401b2376(void)

undefined1 FUN_1401b2376(void)

{
  undefined1 uVar1;
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_1401b2392(in_stack_00000028);
  *in_R9 = uVar1;
  return 1;
}



// FUNCTION 1401b2392 FUN_1401b2392 body=218 status=ok
// SIG undefined FUN_1401b2392(void)

void FUN_1401b2392(double *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x16 < uVar1) {
    iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar2 != 0x1a) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  local_24 = (float)param_1[2];
  local_28 = (float)param_1[1];
  local_2c = (float)*param_1;
  FUN_147885e20(&local_2c,param_2);
  *param_1 = (double)local_2c;
  param_1[1] = (double)local_28;
  param_1[2] = (double)local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b249c FUN_1401b249c body=335 status=ok
// SIG undefined FUN_1401b249c(void)

byte FUN_1401b249c(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return 0;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x1c)) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar4;
  }
  else {
    lVar5 = 0;
  }
  if (*(longlong *)(lVar5 + 0x30) == 0) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360) == 0) {
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 3);
    bVar6 = false;
    if (((int)uVar1 < 0) || (bVar6 = false, DAT_14c9647dc <= (int)uVar1)) goto LAB_1401b25c1;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)((longlong)param_1 + 0x1c) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      if (((*(longlong *)(lVar5 + 0x30) != 0) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360) != 0)) &&
         (cVar2 = (**(code **)(*param_1 + 0x58))(param_1), cVar2 != '\0')) {
        if (*(char *)(param_1[0xf] + 0x28) == '\0') {
          bVar6 = 0 < (int)param_1[0xd];
        }
        else {
          bVar6 = true;
        }
        goto LAB_1401b25c1;
      }
    }
  }
  bVar6 = false;
LAB_1401b25c1:
  bVar3 = FUN_1401b25ec(param_1);
  return bVar3 | bVar6;
}



// FUNCTION 1401b25ec FUN_1401b25ec body=311 status=ok
// SIG undefined FUN_1401b25ec(void)

byte FUN_1401b25ec(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 3);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x1c))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      if (((*(longlong *)(lVar5 + 0x30) != 0) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360) != 0)) &&
         ((cVar3 = (**(code **)(*param_1 + 0x58))(param_1), cVar3 != '\0' &&
          (*(int *)((longlong)param_1 + 0x24) != 0)))) {
        uVar2 = *(uint *)(param_1 + 4);
        if ((int)uVar2 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar2) {
          return 0;
        }
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)((longlong)param_1 + 0x24))) &&
           (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
            (lVar5 = FUN_1401b2724(param_1), lVar5 != 0)))) {
          if ((char)param_1[0x10] != '\x01') {
            return 1;
          }
          if (*(char *)((longlong)param_1 + 0x39) != '\x01') {
            return 1;
          }
          if ((longlong)(int)param_1[0xb] != 0) {
            lVar5 = 0;
            do {
              bVar1 = *(byte *)(param_1[10] + 1 + lVar5);
              if (bVar1 != 1) break;
              bVar6 = (longlong)(int)param_1[0xb] * 0x18 + -0x18 != lVar5;
              lVar5 = lVar5 + 0x18;
            } while (bVar6);
            return bVar1 ^ 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1401b2724 FUN_1401b2724 body=953 status=ok
// SIG undefined FUN_1401b2724(void)

longlong FUN_1401b2724(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1401b2ab7;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x24) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = 0;
      }
      lVar3 = FUN_1401b2ade(uVar5);
      if (lVar3 != 0) {
        if (DAT_14cb61cd0 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1463b31ae;
          local_48 = &LAB_1486dca4f;
          local_50 = &LAB_1464f50a6;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) &&
           (lVar3 = *(longlong *)(lVar3 + 0xa08), lVar3 != 0)) {
          if (DAT_14cb5b388 == 0) {
            local_40 = &local_20;
            local_20 = FUN_141864c34;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_146431698;
            local_48 = &LAB_1486775cb;
            local_50 = &LAB_1464cee35;
            local_58 = &DAT_149e063b2;
            local_60 = 0;
            local_68 = 0x10000005;
            local_70 = 0x10;
            local_78 = 0x3a20;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30))
          goto LAB_1401b2ab7;
        }
      }
      if (*(int *)(param_1 + 0x24) == 0) {
LAB_1401b28c4:
        lVar3 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x20);
        lVar3 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar7 == (longlong *)0x0) ||
             (((int)plVar7[2] != *(int *)(param_1 + 0x24) ||
              ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_1401b28c4;
          lVar3 = *plVar7;
        }
      }
      lVar4 = *(longlong *)(lVar3 + 0x408);
      if (lVar4 != 0) {
        if (DAT_14cb5b388 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141864c34;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_146431698;
          local_48 = &LAB_1486775cb;
          local_50 = &LAB_1464cee35;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000005;
          local_70 = 0x10;
          local_78 = 0x3a20;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          lVar4 = *(longlong *)(lVar3 + 0x408);
          if (lVar4 == 0) goto LAB_1401b2ab5;
        }
        lVar3 = 0;
        if ((DAT_14cb5b388 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0))
        goto LAB_1401b2ab7;
        if (*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(lVar2 + 0x38)) {
          lVar3 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) ==
              DAT_14cb5b388 + 0x30) {
            lVar3 = lVar4;
          }
          goto LAB_1401b2ab7;
        }
      }
    }
  }
LAB_1401b2ab5:
  lVar3 = 0;
LAB_1401b2ab7:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1401b2ade FUN_1401b2ade body=276 status=ok
// SIG undefined FUN_1401b2ade(void)

longlong FUN_1401b2ade(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463c0cc2;
      local_38 = &LAB_147c9db5b;
      local_40 = &LAB_1463f9c44;
      local_48 = &DAT_149e063b2;
      local_50 = 0x2000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) goto LAB_1401b2b28;
  }
  lVar1 = 0;
LAB_1401b2b28:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b2bf4 FUN_1401b2bf4 body=328 status=ok
// SIG undefined FUN_1401b2bf4(void)

undefined4 *
FUN_1401b2bf4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401b354a(param_1,local_50);
  FUN_1401b2e0a(local_48,0,*param_3,param_3[1]);
  local_48[0x68] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  local_68 = param_4;
  cVar1 = FUN_1401b2d3e(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[0x69] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[0x68] =
           *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1415ddb34(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b2d3e FUN_1401b2d3e body=204 status=ok
// SIG undefined FUN_1401b2d3e(void)

void FUN_1401b2d3e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  uVar1 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar1 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 == -1) {
      uVar1 = 0;
    }
    else {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x1a8);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x1a8) == *param_3) {
          FUN_1401a53d4((longlong)_Dst + 0x28);
          if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x1a0);
          FUN_1401b3aca(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x1a0);
        uVar1 = 0;
      } while (iVar3 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1401b2e0a FUN_1401b2e0a body=455 status=ok
// SIG undefined FUN_1401b2e0a(void)

longlong FUN_1401b2e0a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_1447a97f4(param_1,param_3);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a178070;
  uVar4 = *(undefined4 *)(param_4 + 0x1c);
  uVar5 = *(undefined4 *)(param_4 + 0x20);
  uVar6 = *(undefined4 *)(param_4 + 0x24);
  uVar7 = *(undefined4 *)(param_4 + 0x22);
  uVar8 = *(undefined4 *)(param_4 + 0x26);
  uVar9 = *(undefined4 *)(param_4 + 0x2a);
  uVar10 = *(undefined4 *)(param_4 + 0x2e);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x4a) = uVar7;
  *(undefined4 *)(param_1 + 0x4e) = uVar8;
  *(undefined4 *)(param_1 + 0x52) = uVar9;
  *(undefined4 *)(param_1 + 0x56) = uVar10;
  *(undefined8 *)(param_1 + 0x60) = 0;
  iVar1 = *(int *)(param_4 + 0x40);
  _Src = *(void **)(param_4 + 0x38);
  *(int *)(param_1 + 0x68) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    FUN_1401b309e((undefined8 *)(param_1 + 0x60),iVar1,0);
    memcpy(*(void **)(param_1 + 0x60),_Src,(longlong)iVar1 << 3);
  }
  uVar4 = *(undefined4 *)(param_4 + 0x4c);
  uVar5 = *(undefined4 *)(param_4 + 0x50);
  uVar6 = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_4 + 0x48);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  FUN_1401b2fd2(param_1 + 0x80,param_4 + 0x58);
  uVar4 = *(undefined4 *)(param_4 + 0x6c);
  uVar5 = *(undefined4 *)(param_4 + 0x70);
  uVar6 = *(undefined4 *)(param_4 + 0x74);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_4 + 0x68);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_4 + 0x78);
  lVar2 = *(longlong *)(param_4 + 0x80);
  *(longlong *)(param_1 + 0xa8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 2;
  if (param_1 + 0x28 == param_4) {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 2;
  }
  else {
    FUN_1401b31d8(param_1 + 0xb0,param_4 + 0x88);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 2;
    FUN_1401b31d8(param_1 + 200,param_4 + 0xa0);
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a1780a0;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_4 + 0xb8);
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_4 + 0xc0);
  FUN_1401b3020(param_1 + 0xf0,param_4 + 200);
  FUN_1401876dc(param_1 + 0x140,param_4 + 0x118);
  uVar3 = *(undefined8 *)(param_4 + 0x16e);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_4 + 0x168);
  *(undefined8 *)(param_1 + 0x196) = uVar3;
  return param_1;
}



// FUNCTION 1401b2fd2 FUN_1401b2fd2 body=77 status=ok
// SIG undefined FUN_1401b2fd2(void)

undefined8 * FUN_1401b2fd2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b397c(param_1,iVar1,0);
    FUN_1401b3808(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1401b3020 FUN_1401b3020 body=125 status=ok
// SIG undefined FUN_1401b3020(void)

undefined8 * FUN_1401b3020(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1401b336e();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1401b309e FUN_1401b309e body=314 status=ok
// SIG undefined FUN_1401b309e(void)

void FUN_1401b309e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401b310c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1401b310c:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401b31d8 FUN_1401b31d8 body=404 status=ok
// SIG undefined FUN_1401b31d8(void)

/* WARNING: Removing unreachable block (ram,0x0001401b3366) */

void FUN_1401b31d8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b336e FUN_1401b336e body=475 status=ok
// SIG undefined FUN_1401b336e(void)

longlong * FUN_1401b336e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_144aa7c3c(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401b354a FUN_1401b354a body=702 status=ok
// SIG undefined FUN_1401b354a(void)

int * FUN_1401b354a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14709f13e(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar7 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1401b3724;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar10 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = (int)param_1[5];
            }
          }
LAB_1401b3724:
          iVar3 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar9 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar4 * 0x1a8);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x1a8) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x1a8 + *param_1;
  return param_2;
}



// FUNCTION 1401b3808 FUN_1401b3808 body=143 status=ok
// SIG undefined FUN_1401b3808(void)

void FUN_1401b3808(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1401b3898(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 4);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401b3898 FUN_1401b3898 body=228 status=ok
// SIG undefined FUN_1401b3898(void)

void FUN_1401b3898(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401b397c FUN_1401b397c body=334 status=ok
// SIG undefined FUN_1401b397c(void)

void FUN_1401b397c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401b39ee;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1401b39ee:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401b3aca FUN_1401b3aca body=145 status=ok
// SIG undefined FUN_1401b3aca(void)

void FUN_1401b3aca(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x1a8 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1a8) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 0x6a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401b3b5c FUN_1401b3b5c body=184 status=ok
// SIG undefined FUN_1401b3b5c(void)

void FUN_1401b3b5c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar4 = FUN_142ebc28c();
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x10);
    if (uVar1 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
    }
    lVar2 = *(longlong *)(lVar4 + 0x18 + (ulonglong)uVar3 * 8);
    if (lVar2 != 0) {
      *(uint *)(lVar4 + 0x14) = uVar3;
      puVar5 = (undefined4 *)
               (**(code **)(*DAT_14ca83900 + 0xf8))
                         (DAT_14ca83900,&DAT_14ca85100,lVar2,*(undefined8 *)(lVar4 + 8),0,0x20);
      if (puVar5 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 4) = *puVar5;
        *(undefined4 *)(param_1 + 0xc) = puVar5[2];
        *(undefined4 *)(param_1 + 8) = puVar5[4];
                    /* WARNING: Could not recover jumptable at 0x0001401b3c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*DAT_14ca83900 + 0x100))
                  (DAT_14ca83900,&DAT_14ca85100,
                   *(undefined8 *)(lVar4 + 0x18 + (ulonglong)*(uint *)(lVar4 + 0x14) * 8));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401b3c1c FUN_1401b3c1c body=86 status=ok
// SIG undefined FUN_1401b3c1c(void)

undefined8 FUN_1401b3c1c(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 1401b3c72 FUN_1401b3c72 body=221 status=ok
// SIG undefined FUN_1401b3c72(void)

longlong * FUN_1401b3c72(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  local_1c = param_2[1];
  local_14 = local_18;
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
  }
  else {
    FUN_146821860(param_1,&local_14,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_18,4);
  }
  else {
    FUN_146821860(param_1,&local_18,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
  }
  else {
    FUN_146821860(param_1,&local_1c,4);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b3d50 FUN_1401b3d50 body=52 status=ok
// SIG undefined FUN_1401b3d50(void)

void FUN_1401b3d50(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1401b3d84(*(undefined8 *)(param_1 + 0x98),param_2,*(undefined8 *)(param_1 + 0xa0),
                        param_3);
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + param_3;
  }
  return;
}



// FUNCTION 1401b3d84 FUN_1401b3d84 body=119 status=ok
// SIG undefined FUN_1401b3d84(void)

ulonglong FUN_1401b3d84(longlong *param_1,void *param_2,longlong param_3,size_t param_4)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  
  if (param_3 < 0) {
LAB_1401b3ded:
    uVar2 = 0;
  }
  else {
    if (param_2 == (void *)0x0) {
      if (param_4 != 0) goto LAB_1401b3ded;
    }
    else if ((longlong)param_4 < 0) goto LAB_1401b3ded;
    lVar1 = param_1[1];
    if (param_1[1] < (longlong)(param_4 + param_3)) {
      lVar1 = param_4 + param_3;
    }
    param_1[1] = lVar1;
    if (param_1[2] < lVar1) {
      FUN_145cbb9ce(param_1);
    }
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (param_4 != 0) {
      memcpy((void *)(param_3 + *param_1),param_2,param_4);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1401b3dfc FUN_1401b3dfc body=45 status=ok
// SIG undefined FUN_1401b3dfc(void)

void FUN_1401b3dfc(longlong param_1)

{
  FUN_1405f1eac();
  FUN_1405f85e0(param_1 + 0x408);
  FUN_1401b3e2a(param_1 + 0x740);
  return;
}



// FUNCTION 1401b3e2a FUN_1401b3e2a body=615 status=ok
// SIG undefined FUN_1401b3e2a(void)

void FUN_1401b3e2a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  int local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x69) = 1;
    goto LAB_1401b3f70;
  }
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar5 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_50[2] = lVar4;
  *local_50 = (longlong)&PTR_FUN_14b3e76c0;
  local_50[3] = 0;
  uVar1 = *(uint *)(lVar2 + 0xc);
  *(uint *)(local_50 + 3) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar3 = *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar8 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar8) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar3 = *(int *)(lVar7 + 0x10);
    bVar8 = iVar3 == 0;
    if (bVar8) {
      *(int *)(lVar7 + 0x10) = iVar6;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar8) {
      iVar3 = iVar6;
    }
  }
  *(int *)((longlong)plVar5 + 0x1c) = iVar3;
  plVar5[4] = param_1;
  if ((*(byte *)(lVar2 + 0x348) & 0x10) == 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_14009d848(&local_40,&local_50);
    FUN_1448b6402(lVar2 + 0x350,local_58,&local_40);
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_1401b3f5b;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar5 = local_50;
    if (local_48 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))();
  }
LAB_1401b3f5b:
  if (local_48 != 0) {
    if (local_50 == (longlong *)0x0) goto LAB_1401b3f70;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1401b3f70:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401b409d FUN_1401b409d body=74 status=ok
// SIG undefined FUN_1401b409d(void)

void FUN_1401b409d(longlong param_1)

{
  if (DAT_14cae9980 == '\0') {
    FUN_145cadde2(&DAT_14cae9920);
  }
  if (DAT_14ca031e8 < 1) {
    FUN_1401b40e8(&DAT_14cae9920,param_1 + 0x1e04);
    return;
  }
  return;
}



// FUNCTION 1401b40e8 FUN_1401b40e8 body=154 status=ok
// SIG undefined FUN_1401b40e8(void)

undefined4 FUN_1401b40e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x58;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x58) == lVar2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar1 + 0x44);
        }
        iVar4 = *(int *)(lVar1 + 0x50);
      } while (iVar4 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1401b4182 FUN_1401b4182 body=199 status=ok
// SIG undefined FUN_1401b4182(void)

void FUN_1401b4182(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_2 + 0xb8);
  uVar2 = uVar1 >> 1 & 3;
  lVar3 = 0x2e0;
  if (uVar2 != 1) {
    if (uVar2 != 2) goto LAB_1401b41cd;
    lVar3 = 0x2f0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + lVar3) + (longlong)*(int *)(param_2 + 0x90) * 8) = 0;
  uVar1 = (uint)*(byte *)(param_2 + 0xb8);
LAB_1401b41cd:
  *(byte *)(param_2 + 0xb8) = (byte)uVar1 & 0xf9;
  *(undefined4 *)(param_2 + 0x90) = 0xffffffff;
  if ((uVar1 & 8) != 0) {
    local_20 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_14480d072(param_1 + 0x290,&local_20);
    *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) & 0xf7;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b424a FUN_1401b424a body=113 status=ok
// SIG undefined FUN_1401b424a(void)

void FUN_1401b424a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  if (0 < (int)param_2[1]) {
    iVar2 = 0;
    do {
      lVar1 = *(longlong *)(*param_2 + (longlong)iVar2 * 8);
      if (*(int *)(lVar1 + 8) == 1) {
        FUN_147d6baf4(param_2,iVar2);
        FUN_147d6bb60(param_2);
        iVar2 = iVar2 + -1;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x48) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x48) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FUN_1448b65ca(lVar1 + 0x10,1);
          *(undefined4 *)(lVar1 + 0x48) = 3;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1401b42bc FUN_1401b42bc body=224 status=ok
// SIG undefined FUN_1401b42bc(void)

ulonglong FUN_1401b42bc(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c98e618 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  else {
    FUN_1401b43e8(DAT_14c98e618,&local_30);
    lVar2 = local_30;
    if ((longlong)local_28 == 0) {
      uVar6 = CONCAT71((int7)(int3)((uint)local_28 >> 8),1);
      local_28 = 0;
    }
    else {
      lVar5 = (longlong)local_28 * 0x10;
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + lVar4) + 0x510);
        if ((((plVar1 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar1 + 0x78))(), cVar3 == '\0')) &&
            (plVar1 = *(longlong **)(*(longlong *)(lVar2 + lVar4) + 0x510),
            plVar1 != (longlong *)0x0)) && (cVar3 = (**(code **)(*plVar1 + 0x80))(), cVar3 != '\0'))
        {
          uVar6 = 0;
          goto LAB_1401b4347;
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar5 != lVar4);
      uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
LAB_1401b4347:
    FUN_1401b439d(local_30,local_28);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1401b439d FUN_1401b439d body=75 status=ok
// SIG undefined FUN_1401b439d(void)

void FUN_1401b439d(longlong param_1,int param_2)

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



// FUNCTION 1401b43e8 FUN_1401b43e8 body=809 status=ok
// SIG undefined FUN_1401b43e8(void)

/* WARNING: Removing unreachable block (ram,0x0001401b44cf) */

undefined8 * FUN_1401b43e8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x1e8) < 1) {
    *param_2 = 0;
    iVar3 = *(int *)(param_1 + 0x1b8);
    uVar10 = *(undefined8 *)(param_1 + 0x1b0);
    *(int *)(param_2 + 1) = iVar3;
    if (iVar3 != 0) {
      FUN_1401b4740(param_2,iVar3);
      FUN_1401b4712(*param_2,uVar10,iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x1e8) * 0x10;
    local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + -0x10 + lVar8);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + -8 + lVar8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_50 = &DAT_100000001;
    local_58 = (undefined8 *)0x0;
    plStack_60 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar4 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar8 = (longlong)*(int *)(param_1 + 0x1b8);
    if (0 < lVar8) {
      uVar13 = lVar8 + 1;
      lVar8 = lVar8 * 0x10 + -8;
      do {
        local_80 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + -8 + lVar8);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1b0) + lVar8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (*(int *)(param_1 + 0x318) < 1) {
          plVar11 = (longlong *)0x0;
          uVar10 = 0;
        }
        else {
          uVar10 = **(undefined8 **)(param_1 + 0x310);
          plVar11 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
        }
        local_78 = local_80;
        local_70 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          cVar6 = FUN_140d05f22(uVar10,&local_78);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          cVar6 = FUN_140d05f22(uVar10,&local_78);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        puVar5 = local_50;
        if (cVar6 == '\0') {
          if (plVar4 != (longlong *)0x0) goto LAB_1401b4660;
        }
        else {
          lVar12 = (longlong)(int)local_50;
          uVar7 = (int)local_50 + 1;
          local_50 = (undefined1 *)CONCAT44(local_50._4_4_,uVar7);
          if (local_50._4_4_ < uVar7) {
            FUN_1469b6372(&local_68,(ulonglong)puVar5 & 0xffffffff);
          }
          puVar9 = local_58;
          if (local_58 == (undefined8 *)0x0) {
            puVar9 = &local_68;
          }
          puVar9[lVar12 * 2] = local_80;
          puVar9[lVar12 * 2 + 1] = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
LAB_1401b4660:
            LOCK();
            plVar11 = plVar4 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
        uVar13 = uVar13 - 1;
        lVar8 = lVar8 + -0x10;
      } while (1 < uVar13);
    }
    puVar5 = local_50;
    *param_2 = 0;
    *(int *)(param_2 + 1) = (int)local_50;
    if ((int)local_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      puVar9 = &local_68;
      if (local_58 != (undefined8 *)0x0) {
        puVar9 = local_58;
      }
      FUN_1401b4740(param_2,(ulonglong)local_50 & 0xffffffff);
      FUN_1401b4712(*param_2,puVar9,(ulonglong)puVar5 & 0xffffffff);
    }
    FUN_1469aa96a(&local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b4712 FUN_1401b4712 body=45 status=ok
// SIG undefined FUN_1401b4712(void)

void FUN_1401b4712(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401b4740 FUN_1401b4740 body=213 status=ok
// SIG undefined FUN_1401b4740(void)

void FUN_1401b4740(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1401b4816 FUN_1401b4816 body=42 status=ok
// SIG undefined FUN_1401b4816(void)

bool FUN_1401b4816(longlong *param_1)

{
  longlong lVar1;
  
  if ((*(int *)((longlong)param_1 + 0x54) < (int)param_1[5]) &&
     (lVar1 = (**(code **)(*param_1 + 0x48))(), lVar1 != 0)) {
    return (*(byte *)(lVar1 + 0x155) & 4) == 0;
  }
  return false;
}



// FUNCTION 1401b4840 FUN_1401b4840 body=133 status=ok
// SIG undefined FUN_1401b4840(void)

undefined8 FUN_1401b4840(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x1c))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) &&
       (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)) {
      while (plVar3[5] == 0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))();
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
      }
      lVar2 = *(longlong *)(plVar3[5] + 0x30);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar2 + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 1401b48c6 FUN_1401b48c6 body=16 status=ok
// SIG undefined FUN_1401b48c6(void)

byte FUN_1401b48c6(void)

{
  byte bVar1;
  
  bVar1 = FUN_1401b48d6();
  return bVar1 ^ 1;
}



// FUNCTION 1401b48d6 FUN_1401b48d6 body=649 status=ok
// SIG undefined FUN_1401b48d6(void)

byte FUN_1401b48d6(float *param_1,float *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  if (NAN(*param_1) || NAN(*param_2)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc)) {
    return 0;
  }
  if (param_1[0xe] != param_2[0xe]) {
    return 0;
  }
  if (*(longlong *)(param_1 + 4) == 0) {
    uVar11 = FUN_140261af2();
    uVar11 = FUN_14477b664(uVar11);
    *(undefined8 *)(param_1 + 4) = uVar11;
  }
  lVar8 = *(longlong *)(param_2 + 4);
  if (lVar8 == 0) {
    lVar8 = FUN_140261af2();
  }
  lVar1 = *(longlong *)(param_2 + 2);
  lVar8 = FUN_14477b664(lVar8);
  iVar7 = 0;
  iVar6 = 0;
  if ((lVar8 != 0) && (plVar2 = *(longlong **)(lVar8 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar9 = *plVar2;
    pcVar3 = *(code **)(lVar9 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_1401b49b4;
      lVar9 = *plVar2;
    }
    pcVar3 = *(code **)(lVar9 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_1401b49b4:
  lVar9 = *(longlong *)(param_1 + 2);
  lVar4 = *(longlong *)(param_1 + 4);
  if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar10 = *plVar2;
    pcVar3 = *(code **)(lVar10 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      if (cVar5 == '\0') goto LAB_1401b4a1c;
      lVar10 = *plVar2;
    }
    pcVar3 = *(code **)(lVar10 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar7 = FUN_144aff48c(ppuVar12);
  }
LAB_1401b4a1c:
  if (iVar7 != iVar6) {
    return 0;
  }
  if (lVar9 != lVar1) {
    return 0;
  }
  if (lVar4 != lVar8) {
    if (lVar8 == 0) {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    iVar6 = *(int *)(lVar8 + 0x38);
    iVar7 = *(int *)(lVar4 + 0x38);
    if ((iVar7 < iVar6) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) != lVar8 + 0x30)) {
      if (iVar6 < iVar7) {
        return 0;
      }
      if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar7 * 8) != lVar4 + 0x30) {
        return 0;
      }
    }
  }
  if ((*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) &&
     (*(longlong *)(param_1 + 10) == *(longlong *)(param_2 + 10))) {
    return -(param_2[0x12] == param_1[0x12]) & 1;
  }
  return 0;
}



// FUNCTION 1401b4b60 FUN_1401b4b60 body=134 status=ok
// SIG undefined FUN_1401b4b60(void)

undefined8 FUN_1401b4b60(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1401b4be6(param_1 + -0xe60);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      if ((*(longlong *)(param_1 + 0x1510) != 0) && (*(int *)(param_1 + 0x1518) - 1U < 0xfffffffe))
      {
        return 0;
      }
      if (*(char *)(param_1 + 0x1508) != '\0') {
        return 0;
      }
      cVar1 = *(char *)(param_1 + 0x1558);
    }
    else {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0xe0) + 0x1990);
    }
    if ((cVar1 == '\0') &&
       ((plVar3 = (longlong *)FUN_1403ca102(param_1 + -0xe60), plVar3 == (longlong *)0x0 ||
        (bVar2 = (**(code **)(*plVar3 + 0x498))(plVar3), 7 < bVar2)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1401b4be6 FUN_1401b4be6 body=177 status=ok
// SIG undefined FUN_1401b4be6(void)

bool FUN_1401b4be6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = FUN_1401b4c98();
  lVar2 = *(longlong *)(param_1 + 0x2468);
  fVar8 = -1.0;
  fVar9 = -1.0;
  if (lVar2 != 0) {
    uVar4 = (uint)lVar2;
    fVar9 = fVar8;
    if ((int)(uVar4 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
      lVar6 = lVar3 + 0x18;
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        lVar6 = *(longlong *)(lVar3 + 0x28);
      }
      if ((*(uint *)(lVar6 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)
      {
        lVar6 = *(longlong *)(lVar3 + 8);
        lVar7 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
        lVar5 = lVar6 + lVar7;
        if (((lVar5 != 0) && (*(longlong *)(lVar6 + 0x60 + lVar7) == lVar2)) &&
           (cVar1 = *(char *)(lVar6 + 1 + lVar7), cVar1 != '\x04')) {
          if (cVar1 == '\x01') {
            fVar9 = (float)(*(double *)(lVar5 + 8) - *(double *)(lVar3 + 0x140));
          }
          else if (cVar1 == '\x03') {
            fVar9 = 0.0;
          }
          else {
            fVar9 = (float)*(double *)(lVar5 + 8);
          }
        }
      }
    }
  }
  return 0.0 < fVar9;
}



// FUNCTION 1401b4c98 FUN_1401b4c98 body=601 status=ok
// SIG undefined FUN_1401b4c98(void)

undefined8 FUN_1401b4c98(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
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
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar4 + 8))) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
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
      lVar4 = DAT_14cae8b20;
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
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar4 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
             (lVar6 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar4 + 0x30)) {
            lVar6 = 0;
          }
        } while ((lVar6 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if (lVar6 != 0) {
          lVar4 = *(longlong *)(lVar6 + 0xc0);
          goto LAB_1401b4d6f;
        }
      }
    }
  }
  lVar4 = 0;
LAB_1401b4d6f:
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return *puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b4ef2 FUN_1401b4ef2 body=164 status=ok
// SIG undefined FUN_1401b4ef2(void)

void FUN_1401b4ef2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStackY_48 [32];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_48;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x50);
    uVar1 = *(uint *)(lVar2 + 8);
    if ((1 < uVar1) && (uVar1 != 4)) {
      if (uVar1 == 5) {
        LOCK();
        *(undefined4 *)(lVar2 + 8) = 0;
        UNLOCK();
      }
      else {
        if (*(char *)(param_2 + 0x42) != '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStackY_48);
        }
        LOCK();
        *(undefined4 *)(lVar2 + 8) = 1;
        UNLOCK();
        local_1c = *(uint *)(param_2 + 0x38);
        AK::SoundEngine::PrepareEvent
                  (1,&local_1c,1,(_func_void_uint_void_ptr_AKRESULT_void_ptr *)&LAB_1438abac4,
                   *(void **)(param_2 + 0x50));
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStackY_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b5000 FUN_1401b5000 body=40 status=ok
// SIG undefined FUN_1401b5000(void)

undefined8 FUN_1401b5000(undefined8 param_1,int param_2)

{
  FUN_1401b5028();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401b5028 FUN_1401b5028 body=269 status=ok
// SIG undefined FUN_1401b5028(void)

void FUN_1401b5028(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae144c0;
  param_1[5] = &PTR_FUN_14ae14778;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b513f(param_1[0x71],*(undefined4 *)(param_1 + 0x72));
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b516e(param_1 + 0x3b);
  plVar3 = (longlong *)param_1[0x3a];
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
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c2ae(param_1 + 0x1a);
  FUN_14006c2ae(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1401b5136 FUN_1401b5136 body=9 status=ok
// SIG undefined FUN_1401b5136(void)

void FUN_1401b5136(longlong param_1)

{
  FUN_1407b72ae(param_1 + 0x10);
  return;
}



// FUNCTION 1401b513f FUN_1401b513f body=47 status=ok
// SIG undefined FUN_1401b513f(void)

void FUN_1401b513f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b516e FUN_1401b516e body=497 status=ok
// SIG undefined FUN_1401b516e(void)

void FUN_1401b516e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b538e(param_1[0x2f],(int)param_1[0x30]);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b54e4(param_1 + 0x23);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b53d4(param_1[0x1f],(int)param_1[0x20]);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c0c4(param_1[0x1b],(int)param_1[0x1c]);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b5485(param_1[0x19],(int)param_1[0x1a]);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b535f(param_1[0x17],(int)param_1[0x18]);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b5444(param_1[0x15],(int)param_1[0x16]);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b5405(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  plVar3 = (longlong *)param_1[7];
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401b535f FUN_1401b535f body=47 status=ok
// SIG undefined FUN_1401b535f(void)

void FUN_1401b535f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b538e FUN_1401b538e body=70 status=ok
// SIG undefined FUN_1401b538e(void)

void FUN_1401b538e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b53d4 FUN_1401b53d4 body=49 status=ok
// SIG undefined FUN_1401b53d4(void)

void FUN_1401b53d4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b5405 FUN_1401b5405 body=63 status=ok
// SIG undefined FUN_1401b5405(void)

void FUN_1401b5405(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b5444 FUN_1401b5444 body=65 status=ok
// SIG undefined FUN_1401b5444(void)

void FUN_1401b5444(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b5485 FUN_1401b5485 body=95 status=ok
// SIG undefined FUN_1401b5485(void)

void FUN_1401b5485(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b54e4 FUN_1401b54e4 body=158 status=ok
// SIG undefined FUN_1401b54e4(void)

void FUN_1401b54e4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[10];
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
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b5582(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b55b3(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401b5582 FUN_1401b5582 body=49 status=ok
// SIG undefined FUN_1401b5582(void)

void FUN_1401b5582(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b55b3 FUN_1401b55b3 body=87 status=ok
// SIG undefined FUN_1401b55b3(void)

void FUN_1401b55b3(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    do {
      FUN_1401b560a(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -8) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0xc) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b560a FUN_1401b560a body=95 status=ok
// SIG undefined FUN_1401b560a(void)

void FUN_1401b560a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401b566a FUN_1401b566a body=24 status=ok
// SIG undefined FUN_1401b566a(void)

void FUN_1401b566a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401b567e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1401b5682 FUN_1401b5682 body=87 status=ok
// SIG undefined FUN_1401b5682(void)

void FUN_1401b5682(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1401b56da FUN_1401b56da body=149 status=ok
// SIG undefined FUN_1401b56da(void)

undefined4 * FUN_1401b56da(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined1 auStack_78 [44];
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1401b5770();
  FUN_1448e935e(param_1,&local_38,&DAT_14c9fd528,param_3);
  uVar1 = *(undefined2 *)(param_1 + 0x50);
  FUN_1401b5770();
  local_44 = 1;
  local_40 = DAT_14c9fd548;
  local_4c = uVar1;
  local_48 = param_3;
  FUN_1401b5892();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b5770 FUN_1401b5770 body=289 status=ok
// SIG undefined FUN_1401b5770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401b5770(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd5d0) {
    FUN_144b3d300(&DAT_14c9fd5d0);
    if (DAT_14c9fd5d0 == -1) {
      FUN_1401b5b24();
      FUN_1456d671a();
      FUN_140db5666(&DAT_14c9fd528,0,&DAT_14c9fd4c0,L"FScreenProbeIntegrateCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",L"ScreenProbeIntegrateCS",5,
                    0x400,FUN_147209430,FUN_1472093d0,FUN_14176b78c,&LAB_14176b786,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ff878);
      _DAT_14c9fd528 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd56);
      _Init_thread_footer(&DAT_14c9fd5d0);
    }
  }
  return &DAT_14c9fd528;
}



// FUNCTION 1401b5892 FUN_1401b5892 body=505 status=ok
// SIG undefined FUN_1401b5892(void)

ulonglong FUN_1401b5892(longlong param_1)

{
  uint3 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulonglong unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [26];
  byte local_6e;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar10 = *(int *)(param_1 + 4);
  iVar2 = iVar10 + 3;
  iVar3 = iVar10 + 7;
  iVar4 = iVar10 + 0xf;
  iVar5 = iVar10 + 0x1f;
  iVar6 = iVar10 + 0x3f;
  iVar7 = iVar10 + 0xff;
  if (-1 < iVar10) {
    iVar2 = iVar10;
    iVar3 = iVar10;
    iVar4 = iVar10;
    iVar5 = iVar10;
    iVar6 = iVar10;
    iVar7 = iVar10;
  }
  if ((iVar5 >> 5 & 0x80000001U) == 1) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),2);
    cVar8 = FUN_14473b0f0();
    if (cVar8 == '\0') goto LAB_1401b5a2f;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),2);
  if (((iVar4 >> 4 & 0x80000001U) == 1) != (DAT_14c760734 == 0)) {
    if (((DAT_14c7606f8 == 0) || (DAT_14ca007b0 != 0)) || (DAT_14c9fc8c0 == 2)) {
      if (iVar10 % 4 != 3) goto LAB_1401b5a2f;
    }
    else if (iVar10 % 4 == 3) goto LAB_1401b5a2f;
    if (((iVar2 >> 2 & 0x80000001U) != 1) || (DAT_14c9fca00 != 0)) {
      iVar10 = (iVar3 >> 3) - ((iVar3 >> 3) - (iVar3 >> 0x1f) & 0xfeU);
      local_58 = 0;
      local_50 = 0x8000000000;
      FUN_1401b5a8c(local_88,0);
      if (((DAT_14ca007b0 == 0) && ((DAT_14c760758 != 0 && ((local_6e & 0x20) != 0)))) &&
         (DAT_14c9fca00 != 0)) {
        bVar9 = false;
      }
      else {
        bVar9 = 0 < DAT_14c760730;
      }
      uVar1 = (uint3)((uint)iVar10 >> 8);
      if (bVar9 == (bool)(char)iVar10) {
        if (((iVar6 >> 6 & 0x80000001U) == 1) && (DAT_14c9fc7d8 == 0)) {
          unaff_RBX = CONCAT71((uint7)uVar1,2);
        }
        else {
          unaff_RBX = (ulonglong)
                      CONCAT31(uVar1,((iVar7 >> 8) - ((iVar7 >> 8) - (iVar7 >> 0x1f) & 0xfffffffeU)
                                     != (uint)(0 < DAT_14c9fca88)) * '\x02');
        }
      }
      else {
        unaff_RBX = CONCAT71((uint7)uVar1,1);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1401b5a2f:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b5a8c FUN_1401b5a8c body=151 status=ok
// SIG undefined FUN_1401b5a8c(void)

void FUN_1401b5a8c(undefined1 (*param_1) [16],int param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (param_2 == 3) {
    param_1[1] = (undefined1  [16])0x0;
    *param_1 = (undefined1  [16])0x0;
  }
  else {
    *(undefined4 *)param_1[1] = 0xffffffff;
    *(undefined4 *)(param_1[1] + 4) = 0xffffffff;
    *(undefined4 *)(param_1[1] + 8) = 0xffffffff;
    *(undefined4 *)(param_1[1] + 0xc) = 0xffffffff;
    *(undefined4 *)*param_1 = 0xffffffff;
    *(undefined4 *)(*param_1 + 4) = 0xffffffff;
    *(undefined4 *)(*param_1 + 8) = 0xffffffff;
    *(undefined4 *)(*param_1 + 0xc) = 0xffffffff;
    FUN_144ae9174();
    bVar2 = param_2 - 3U < 0xfffffffe;
    uVar1 = 0x2002000;
    if (!bVar2) {
      uVar1 = 0;
    }
    *(uint *)param_1[1] =
         (uint)(param_2 == 1) << 0x1a | (uint)bVar2 << 9 | *(uint *)param_1[1] & 0xf8fffdff;
    *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfdffdff0 | uVar1;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) & 0xf7c0ff1d | 0x83f0000;
    *(uint *)*param_1 = *(uint *)*param_1 & 0x7ffdff7f;
    param_1[1][0xc] = param_1[1][0xc] | 2;
  }
  return;
}



// FUNCTION 1401b5b24 FUN_1401b5b24 body=258 status=ok
// SIG undefined FUN_1401b5b24(void)

void FUN_1401b5b24(void)

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
              0x110) < DAT_14c9ff8f8) {
    FUN_144b3d300(&DAT_14c9ff8f8);
    if (DAT_14c9ff8f8 == -1) {
      FUN_1401b5c28(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x240;
      local_58 = 0x38e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff878,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6f5);
      _Init_thread_footer(&DAT_14c9ff8f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b5c28 FUN_1401b5c28 body=226 status=ok
// SIG undefined FUN_1401b5c28(void)

longlong * FUN_1401b5c28(longlong *param_1)

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
  pcVar13 = FUN_1462e675a;
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



// FUNCTION 1401b5d0c FUN_1401b5d0c body=222 status=ok
// SIG undefined FUN_1401b5d0c(void)

void FUN_1401b5d0c(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0x218);
  pvVar2 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
  iVar1 = (int)((ulonglong)pvVar2 >> 0x20);
  TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
              (LPVOID)((ulonglong)(iVar1 + 1) << 0x20 | (ulonglong)pvVar2 & 0xffffffff));
  if (iVar1 + (int)pvVar2 == 0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x210));
  FUN_1448b6bc2(param_1 + 0xa88,param_1 + 0xb28);
  FUN_1401b5dea(param_1 + 0xad8,param_1 + 0xb78);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x210));
  pvVar2 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
  uVar3 = (int)((ulonglong)pvVar2 >> 0x20) - 1;
  TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
              (LPVOID)((ulonglong)uVar3 << 0x20 | (ulonglong)pvVar2 & 0xffffffff));
  if (uVar3 + (int)pvVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401b5dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
  return;
}



// FUNCTION 1401b5dea FUN_1401b5dea body=312 status=ok
// SIG undefined FUN_1401b5dea(void)

void FUN_1401b5dea(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *_Dst;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  FUN_1401b5f7a();
  param_1[0x11] = param_2[0x11];
  FUN_1401b5f22(param_1 + 2,param_2 + 2);
  puVar1 = param_1 + 6;
  if (param_1 != param_2) {
    uVar2 = param_2[0xc] + 0x1f & 0xffffffe0;
    param_1[0xc] = 0;
    if (((int)param_1[0xd] < (int)uVar2) || (0x80 < (int)param_1[0xd])) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar5 = uVar2;
      }
      param_1[0xd] = uVar5;
      FUN_1446efbd8(puVar1,0);
    }
    iVar3 = param_2[0xc];
    param_1[0xc] = iVar3;
    if (iVar3 != 0) {
      puVar6 = param_2 + 6;
      if (*(undefined4 **)(param_2 + 10) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(param_2 + 10);
      }
      _Dst = *(undefined4 **)(param_1 + 10);
      if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
        _Dst = puVar1;
      }
      memcpy(_Dst,puVar6,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
  }
  *param_1 = *param_2;
  if (0 < (longlong)(int)param_1[0x11]) {
    uVar4 = FUN_14001cc68((longlong)(int)param_1[0x11] * 0x28,8);
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    iVar3 = param_2[0x10];
    param_1[0x10] = iVar3;
    param_1[0x12] = param_2[0x12];
    if (0 < iVar3) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        puVar6 = *(undefined4 **)(param_1 + 10);
        if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
          puVar6 = puVar1;
        }
        if (((uint)puVar6[uVar8 >> 5 & 0x7ffffff] >> ((uint)uVar8 & 0x1f) & 1) != 0) {
          FUN_146c98d0a(*(longlong *)(param_1 + 0xe) + lVar7,*(longlong *)(param_2 + 0xe) + lVar7,1)
          ;
          iVar3 = param_1[0x10];
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x28;
      } while ((longlong)uVar8 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 1401b5f22 FUN_1401b5f22 body=88 status=ok
// SIG undefined FUN_1401b5f22(void)

undefined8 * FUN_1401b5f22(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146c98e18(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1401b5f7a FUN_1401b5f7a body=197 status=ok
// SIG undefined FUN_1401b5f7a(void)

void FUN_1401b5f7a(undefined4 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0xe);
  lVar4 = *(longlong *)(param_1 + 0xe);
  if (lVar4 != 0) {
    iVar2 = param_1[0x10];
    if (0 < iVar2) {
      lVar4 = 8;
      uVar5 = 0;
      do {
        puVar3 = *(undefined4 **)(param_1 + 10);
        if (*(undefined4 **)(param_1 + 10) == (undefined4 *)0x0) {
          puVar3 = param_1 + 6;
        }
        if ((((uint)puVar3[uVar5 >> 5 & 0x7ffffff] >> ((uint)uVar5 & 0x1f) & 1) != 0) &&
           (*(longlong *)(*plVar1 + lVar4) != 0)) {
          FUN_1400020a8();
          iVar2 = param_1[0x10];
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while ((longlong)uVar5 < (longlong)iVar2);
      lVar4 = *plVar1;
    }
    FUN_1400020a8(lVar4);
  }
  *param_1 = 0xffffff;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (-1 < (int)param_1[5]) {
    param_1[4] = 0;
    return;
  }
  param_1[4] = 0;
  FUN_146c98db8(param_1 + 2,0);
  return;
}



// FUNCTION 1401b6040 FUN_1401b6040 body=88 status=ok
// SIG undefined FUN_1401b6040(void)

undefined8 * FUN_1401b6040(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1401b60f6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1401b6098 FUN_1401b6098 body=93 status=ok
// SIG undefined FUN_1401b6098(void)

void FUN_1401b6098(undefined4 *param_1)

{
  if (*(longlong *)(param_1 + 0xe) != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0xffffff;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (-1 < (int)param_1[5]) {
    param_1[4] = 0;
    return;
  }
  param_1[4] = 0;
  FUN_146c98caa(param_1 + 2,0);
  return;
}



// FUNCTION 1401b60f6 FUN_1401b60f6 body=322 status=ok
// SIG undefined FUN_1401b60f6(void)

void FUN_1401b60f6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401b6164;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1401b6164:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401b6238 FUN_1401b6238 body=201 status=ok
// SIG undefined FUN_1401b6238(void)

ulonglong FUN_1401b6238(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong unaff_RDI;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x310);
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar8);
      if (lVar5 != 0) {
        local_48 = *param_2;
        local_40 = param_2[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        cVar7 = FUN_1401b6302(lVar5,&local_48);
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
        if (cVar7 != '\0') goto LAB_1401b62b3;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  unaff_RDI = 0;
LAB_1401b62b3:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RDI & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b6302 FUN_1401b6302 body=622 status=ok
// SIG undefined FUN_1401b6302(void)

ulonglong FUN_1401b6302(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  uint local_64;
  uint *local_60;
  uint local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)(param_1 + 0x148);
  puVar3 = (uint *)(param_1 + 0x158);
  iVar4 = *(int *)(param_1 + 0x170);
  local_64 = 1;
  if (iVar4 == 0) {
    local_50 = 0;
    local_68 = 0;
    local_54 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar9 = puVar3;
    }
    uVar11 = *puVar9;
    if (uVar11 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar12 = uVar14;
      }
      local_68 = (int)uVar12 + 1;
      local_50 = (int)uVar12 * 0x20 + 0x20;
      iVar13 = 0;
      do {
        local_54 = iVar4;
        if (uVar12 == uVar14) goto LAB_1401b63d4;
        iVar13 = iVar13 + 0x20;
        uVar11 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
      local_68 = (int)uVar14;
      local_50 = iVar13;
    }
    else {
      local_50 = 0;
      local_68 = 0;
    }
    local_64 = -uVar11 & uVar11;
    uVar12 = (ulonglong)local_64 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_54 = (local_50 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar4 <= local_54) {
      local_54 = iVar4;
    }
  }
LAB_1401b63d4:
  local_58 = 0xffffffff;
  local_70 = plVar2;
  local_60 = puVar3;
  if (local_54 != iVar4) {
    do {
      lVar6 = *(longlong *)(*local_70 + 8 + (longlong)local_54 * 0x30);
      lVar8 = (longlong)*(int *)(*local_70 + 0x10 + (longlong)local_54 * 0x30) * 0x10;
      plVar5 = *(longlong **)(lVar6 + -8 + lVar8);
      if (plVar5 == (longlong *)0x0) {
        if (*param_2 == 0) goto LAB_1401b6478;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + -0x10 + lVar8);
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        iVar13 = (int)plVar5[1];
        do {
          if (iVar13 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar15 = iVar13 == iVar7;
          if (bVar15) {
            *(int *)(plVar5 + 1) = iVar13 + 1;
            iVar7 = iVar13;
          }
          iVar13 = iVar7;
          UNLOCK();
          plVar10 = plVar5;
        } while (!bVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        lVar8 = *param_2;
        if (plVar10 == (longlong *)0x0) {
          lVar6 = 0;
        }
        else {
          LOCK();
          plVar5 = plVar10 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (lVar6 == lVar8) {
LAB_1401b6478:
          uVar12 = CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
          goto LAB_1401b647b;
        }
      }
      local_58 = local_58 & ~local_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar2 || (local_60 != puVar3 || local_54 != iVar4));
  }
  uVar12 = 0;
LAB_1401b647b:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b6588 FUN_1401b6588 body=12198 status=ok
// SIG undefined FUN_1401b6588(void)

void FUN_1401b6588(longlong *param_1,longlong param_2,longlong param_3,int param_4,
                  ulonglong *param_5)

{
  ulonglong *puVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined1 uVar24;
  int iVar25;
  void *pvVar26;
  ulonglong *puVar27;
  int iVar28;
  undefined8 *puVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  bool bVar34;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  undefined1 auStack_3a8 [32];
  undefined8 **local_388;
  ulonglong local_380;
  ulonglong uStack_378;
  char *local_370;
  undefined4 local_368;
  undefined4 local_360;
  undefined8 **local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined1 local_340;
  ulonglong *local_338;
  longlong local_330;
  undefined1 local_321;
  longlong *local_320;
  ulonglong local_318;
  ulonglong local_310;
  undefined4 local_304;
  longlong local_300;
  longlong *local_2f8;
  undefined8 *local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  ulonglong *local_2d8;
  ulonglong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  ulonglong local_290;
  ulonglong local_288;
  undefined8 *local_280;
  ulonglong local_278;
  uint local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  int local_258;
  int local_254;
  undefined4 local_250;
  undefined4 local_24c;
  longlong *local_248;
  ulonglong local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  longlong local_208;
  longlong *local_200;
  longlong local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  int local_1cc;
  undefined8 local_1c8;
  int local_1c0;
  undefined8 local_1bc;
  undefined1 local_1b1;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_1a0;
  byte local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 *local_188;
  longlong lStack_180;
  undefined *local_178;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  undefined6 uVar23;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  param_5[10] = 0;
  param_5[0xb] = 0;
  param_5[8] = 0;
  param_5[9] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  *param_5 = 0;
  param_5[1] = 0;
  if (*param_1 != 0) {
    uVar13 = FUN_1448c569e(*(undefined8 *)(*param_1 + 0x40),param_2);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b328) {
      FUN_144b3d300(&DAT_14ca4b328);
      if (DAT_14ca4b328 == -1) {
        DAT_14ca4b320 = FUN_145900d44();
        _Init_thread_footer(&DAT_14ca4b328);
      }
    }
    cVar8 = '\x02';
    if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
      cVar8 = *(char *)(DAT_14ca4b320 + 0x41);
    }
    param_5[8] = uVar13;
    *(char *)(param_5 + 9) = cVar8;
  }
  if ((((param_4 != 1) && (*param_1 != 0)) && (lVar30 = *(longlong *)(*param_1 + 0x38), lVar30 != 0)
      ) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
    if (*(char *)(lVar30 + 0x160) == '\0') {
      *param_5 = *(ulonglong *)(lVar30 + 0x140);
      *(undefined4 *)(param_5 + 1) = 4;
      param_5[2] = *(ulonglong *)(lVar30 + 0x148);
      *(undefined4 *)(param_5 + 3) = 8;
      uVar13 = *(ulonglong *)(lVar30 + 0x150);
      FUN_1449865da();
      cVar8 = DAT_14c9e53c1;
      if (DAT_14c9e53c1 == '\x03') {
        cVar8 = '\x02';
      }
      param_5[6] = uVar13;
      *(char *)(param_5 + 7) = cVar8;
      uVar13 = *(ulonglong *)(lVar30 + 0x158);
      FUN_144a92736();
      cVar8 = DAT_14c9e5461;
      if (DAT_14c9e5461 == '\x03') {
        cVar8 = '\x02';
      }
      param_5[10] = uVar13;
      *(char *)(param_5 + 0xb) = cVar8;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_3a8);
    }
    goto LAB_1401b83aa;
  }
  pcVar2 = (code *)param_1[0xc];
  if (pcVar2 != (code *)0x0) {
    plVar19 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[0xe];
    }
    uVar14 = (**(code **)(*plVar19 + 8))();
    (*pcVar2)(uVar14,param_1);
  }
  local_108 = (undefined8 *)param_1[0xc];
  uStack_c0 = param_1[0xd];
  local_f8 = (longlong *)param_1[0xe];
  uStack_b0 = param_1[0xf];
  local_a8 = param_1[0x10];
  uStack_a0 = param_1[0x11];
  local_98 = param_1[0x12];
  uStack_90 = param_1[0x13];
  lVar6 = local_98;
  lVar7 = uStack_90;
  lVar20 = local_a8;
  lVar5 = uStack_a0;
  local_b8 = local_f8;
  lVar16 = uStack_b0;
  local_c8 = local_108;
  lVar30 = uStack_c0;
  param_1[0x12] = CONCAT44(uStack_d4,local_d8);
  param_1[0x13] = CONCAT44(uStack_cc,uStack_d0);
  param_1[0x10] = CONCAT44(uStack_e4,local_e8);
  param_1[0x11] = CONCAT44(uStack_dc,uStack_e0);
  param_1[0xe] = 0;
  param_1[0xf] = CONCAT44(uStack_ec,uStack_f0);
  param_1[0xc] = 0;
  param_1[0xd] = CONCAT44(uStack_fc,uStack_100);
  uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_d8 = (undefined4)local_98;
  uStack_d4 = local_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  uStack_100 = (undefined4)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  local_320 = param_1;
  uStack_c0 = lVar30;
  uStack_b0 = lVar16;
  local_a8 = lVar20;
  uStack_a0 = lVar5;
  local_98 = lVar6;
  uStack_90 = lVar7;
  if (local_108 != (undefined8 *)0x0) {
    plVar19 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar19 = (longlong *)&local_e8;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (*(int *)((longlong)local_320 + 0x4c) == 0) {
    if (*local_320 != 0) {
      uVar13 = *(ulonglong *)(*local_320 + 0x10);
      FUN_1449865da();
      cVar8 = '\x02';
      if (DAT_14c9e53c1 != '\x03') {
        cVar8 = DAT_14c9e53c1;
      }
      param_5[6] = uVar13;
      *(char *)(param_5 + 7) = cVar8;
    }
    goto LAB_1401b83aa;
  }
  lVar30 = *local_320;
  if (lVar30 == 0) {
    local_304 = 0;
  }
  else {
    local_304 = (undefined4)
                CONCAT71((int7)((ulonglong)DAT_14c9e5330 >> 8),*(int *)(DAT_14c9e5330 + 4) != 0);
  }
  local_2d8 = param_5;
  if ((DAT_14c760434 == 0) || ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(local_320 + 1) * 0xf] == 1))
  {
    uVar13 = (ulonglong)*(uint *)(local_320 + 0x21);
LAB_1401b6836:
    local_248 = local_320 + 0x21;
    local_2a8 = 0;
    local_2f0 = (undefined8 *)0x0;
    local_2b0 = (undefined8 *)0x0;
    local_2e0 = 0;
    puVar29 = (undefined8 *)0x0;
    local_290 = 0;
    plVar19 = local_320;
  }
  else {
    local_248 = local_320 + 0x21;
    uVar9 = *(uint *)(local_320 + 0x21);
    uVar13 = (ulonglong)uVar9;
    if ((*(byte *)(local_320 + 9) & 1) != 0) goto LAB_1401b6836;
    uVar10 = (int)local_320[0x22] + (uint)((int)local_320[0x22] == 0);
    uVar21 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar21 = DAT_14ca84e48;
    }
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0x10109);
    local_b8 = (longlong *)0x0;
    if (DAT_14ca84e48 <= uVar10) {
      uVar10 = DAT_14ca84e48;
    }
    local_c8 = (undefined8 *)CONCAT44(uVar10 + (uVar10 == 0),uVar21 + (uVar21 == 0));
    puVar1 = (ulonglong *)(param_2 + 0x70);
    uVar32 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar15 = uVar32 + 0x150;
    local_338 = puVar1;
    if (*(ulonglong *)(param_2 + 0x78) < uVar15) {
      FUN_140023dd8(puVar1,0x160);
      uVar32 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar15 = uVar32 + 0x150;
    }
    lVar16 = param_2 + 0x188;
    *(ulonglong *)(param_2 + 0x70) = uVar15;
    FUN_1456bd266(uVar32,L"InstanceCulling.Compaction.TempInstanceIdsBuffer",&local_c8,0);
    iVar18 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar18 + 1U) {
      FUN_144737178(lVar16,iVar18);
    }
    puVar1 = local_338;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar32;
    *(int *)(uVar32 + 0x7c) = *(int *)(param_2 + 400) + -1;
    cVar8 = *(char *)(uVar32 + 0x68);
    puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar29 + 8;
    local_298 = lVar16;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x48);
      puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar29 + 8;
    }
    local_318 = param_2 + 0x198;
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar29[1] = *(undefined8 *)(uVar32 + 8);
    puVar29[2] = 0;
    *(undefined1 *)(puVar29 + 3) = 2;
    *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar29 + 5) = 0;
    *puVar29 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar29 + 6) = cVar8 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar29 + 0x31) = 0;
    puVar29[7] = uVar32;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    local_290 = uVar32;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_318,iVar18);
    }
    puVar1 = local_338;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar29;
    *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    uVar10 = uVar9 + (uVar9 == 0);
    uVar21 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar21 = DAT_14ca84e48;
    }
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0x10109);
    if (DAT_14ca84e48 <= uVar10) {
      uVar10 = DAT_14ca84e48;
    }
    local_b8 = (longlong *)0x0;
    local_c8 = (undefined8 *)CONCAT44(uVar10 + (uVar10 == 0),uVar21 + (uVar21 == 0));
    uVar32 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar15 = uVar32 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar15) {
      FUN_140023dd8(local_338,0x160);
      uVar32 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar15 = uVar32 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar15;
    FUN_1456bd266(uVar32,L"InstanceCulling.Compaction.BlockInstanceCounts",&local_c8,0);
    iVar18 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar18 + 1U) {
      FUN_144737178(local_298,iVar18);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar32;
    *(int *)(uVar32 + 0x7c) = *(int *)(param_2 + 400) + -1;
    cVar8 = *(char *)(uVar32 + 0x68);
    local_2b0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = local_2b0 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x48);
      local_2b0 = (undefined8 *)(*local_338 + 7 & 0xfffffffffffffff8);
      puVar17 = local_2b0 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    local_2b0[1] = *(undefined8 *)(uVar32 + 8);
    local_2b0[2] = 0;
    *(undefined1 *)(local_2b0 + 3) = 2;
    *(undefined8 *)((longlong)local_2b0 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_2b0 + 5) = 0;
    *local_2b0 = &PTR_FUN_14a1fb3e8;
    *(byte *)(local_2b0 + 6) = cVar8 >> 7 & 0x1c;
    *(undefined2 *)((longlong)local_2b0 + 0x31) = 0;
    local_2b0[7] = uVar32;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    local_2e0 = uVar32;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_318,iVar18);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_2b0;
    *(int *)((longlong)local_2b0 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    if ((int)local_320[0x1f] < 1) {
      lVar16 = FUN_144735828(&DAT_14ca63b10,param_2,0x14);
    }
    else {
      local_380 = (ulonglong)(uint)((int)local_320[0x1f] * 0x14);
      local_388 = (undefined8 **)local_320[0x1e];
      uStack_378 = uStack_378 & 0xffffffffffffff00;
      lVar16 = FUN_144942e63(param_2,L"InstanceCulling.DrawCommandCompactionData",0x14);
    }
    puVar1 = local_338;
    cVar8 = *(char *)(lVar16 + 0x68);
    local_2f0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = local_2f0 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      local_2f0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = local_2f0 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    local_2f0[1] = *(undefined8 *)(lVar16 + 8);
    local_2f0[2] = 0;
    *(undefined1 *)(local_2f0 + 3) = 3;
    *(undefined8 *)((longlong)local_2f0 + 0x1c) = 0xffffffffffffffff;
    *local_2f0 = &PTR_FUN_14a1fb168;
    *(byte *)(local_2f0 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)local_2f0 + 0x2c) = 0xffffffff00000000;
    local_2f0[7] = 0;
    local_2f0[8] = lVar16;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_318,iVar18);
    }
    plVar19 = local_320;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_2f0;
    iVar18 = *(int *)(param_2 + 0x1a0) + -1;
    *(int *)((longlong)local_2f0 + 0x1c) = iVar18;
    local_2a8 = CONCAT71((uint7)(uint3)((uint)iVar18 >> 8),1);
    if (uVar9 == 0) {
      uVar13 = 0;
    }
    else {
      FUN_1405bfba3(param_2,local_2b0,0,2);
    }
  }
  local_2a0 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(plVar19 + 1) * 8);
  iVar18 = (int)plVar19[6];
  if (iVar18 == 0) {
    local_388 = (undefined8 **)&DAT_14a240b80;
    uStack_378 = CONCAT71(uStack_378._1_7_,1);
    local_380 = 4;
    iVar18 = 1;
  }
  else {
    local_380 = (ulonglong)(uint)(iVar18 * 4);
    local_388 = (undefined8 **)(plVar19 + 2);
    if ((longlong *)plVar19[5] != (longlong *)0x0) {
      local_388 = (undefined8 **)plVar19[5];
    }
    uStack_378 = (ulonglong)uStack_378._1_7_ << 8;
  }
  uVar15 = FUN_144942e63(param_2,L"InstanceCulling.ViewIds",4,iVar18);
  if (*(char *)((longlong)plVar19 + 0x12d) == '\x01') {
    local_26c = ((*(uint *)(plVar19[0x24] + 0x30) & 0x7fffff) * 0x20 +
                (*(uint *)(plVar19[0x23] + 0x30) & 0xffffff) * 0x10) * (int)plVar19[6];
  }
  else {
    local_26c = (int)plVar19[6] * *(int *)((longlong)plVar19 + 0x4c);
  }
  if ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(plVar19 + 1) * 0xf] == 1) {
    local_26c = local_26c +
                ((uint)(&DAT_14ca814d8)[(ulonglong)*(ushort *)(plVar19 + 1) * 0xf] >> 2 & 0x400);
    uVar10 = (&DAT_14ca814d8)[(ulonglong)*(ushort *)(plVar19 + 1) * 0xf] & 0x1000;
    uVar9 = 0x10;
    if (uVar10 == 0) {
      uVar9 = 4;
    }
    uVar10 = uVar10 << 9 | 0x10109;
  }
  else {
    uVar10 = 0x10109;
    uVar9 = 4;
  }
  if (DAT_14ca84e48 <= uVar9) {
    uVar9 = DAT_14ca84e48;
  }
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar10);
  local_b8 = (longlong *)0x0;
  uVar10 = DAT_14ca84e48;
  if (local_26c < DAT_14ca84e48) {
    uVar10 = local_26c;
  }
  local_c8 = (undefined8 *)CONCAT44(uVar10 + (uVar10 == 0),uVar9 + (uVar9 == 0));
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar31 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar32 = uVar31 + 0x150;
  local_338 = puVar1;
  local_1d8 = puVar29;
  if (*(ulonglong *)(param_2 + 0x78) < uVar32) {
    FUN_140023dd8(puVar1,0x160);
    uVar31 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar32 = uVar31 + 0x150;
  }
  local_2e8 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar32;
  FUN_1456bd266(uVar31,L"InstanceCulling.InstanceIdsBuffer",&local_c8,0);
  iVar18 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar18 + 1U) {
    FUN_144737178(local_2e8,iVar18);
  }
  puVar1 = local_338;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar31;
  *(int *)(uVar31 + 0x7c) = *(int *)(param_2 + 400) + -1;
  cVar8 = *(char *)(uVar31 + 0x68);
  local_230 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = local_230 + 8;
  local_310 = uVar31;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x48);
    local_230 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = local_230 + 8;
  }
  local_330 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  local_230[1] = *(undefined8 *)(local_310 + 8);
  local_230[2] = 0;
  *(undefined1 *)(local_230 + 3) = 2;
  *(undefined8 *)((longlong)local_230 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_230 + 5) = 1;
  *local_230 = &PTR_FUN_14a1fb3e8;
  *(byte *)(local_230 + 6) = cVar8 >> 7 & 0x1c;
  *(undefined2 *)((longlong)local_230 + 0x31) = 0;
  local_230[7] = local_310;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_230;
  *(int *)((longlong)local_230 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  iVar18 = (int)plVar19[0x19];
  if (iVar18 == 0) {
    local_388 = (undefined8 **)&DAT_14a240b84;
    uStack_378 = CONCAT71(uStack_378._1_7_,1);
    local_380 = 4;
    iVar18 = 1;
  }
  else {
    local_380 = (ulonglong)(uint)(iVar18 * 4);
    local_388 = (undefined8 **)plVar19[0x18];
    uStack_378 = (ulonglong)uStack_378._1_7_ << 8;
  }
  local_318 = uVar15;
  lVar16 = FUN_144942e63(param_2,L"InstanceCulling.DrawCommandDescs",4,iVar18);
  puVar1 = local_338;
  cVar8 = *(char *)(lVar16 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar29 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x50);
    puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar29 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar29[1] = *(undefined8 *)(lVar16 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 3;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *puVar29 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar29 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
  puVar29[7] = 0;
  puVar29[8] = lVar16;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  iVar18 = (int)local_320[0x1b];
  if (iVar18 == 0) {
    local_388 = (undefined8 **)&DAT_14a240b88;
    uStack_378 = CONCAT71(uStack_378._1_7_,1);
    local_380 = 0x10;
    iVar18 = 1;
  }
  else {
    local_380 = (ulonglong)(uint)(iVar18 << 4);
    local_388 = (undefined8 **)local_320[0x1a];
    uStack_378 = (ulonglong)uStack_378._1_7_ << 8;
  }
  local_1e0 = puVar29;
  lVar16 = FUN_144942e63(param_2,L"InstanceCulling.PayloadData",0x10,iVar18);
  puVar1 = local_338;
  cVar8 = *(char *)(lVar16 + 0x68);
  puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar29 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x50);
    puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar29 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar29[1] = *(undefined8 *)(lVar16 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 3;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *puVar29 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar29 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
  puVar29[7] = 0;
  puVar29[8] = lVar16;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  FUN_1449b4134(param_3,&local_c8,param_2);
  plVar19 = local_320;
  puVar1 = local_338;
  local_1f0 = local_c8;
  local_1f8 = uStack_c0;
  local_200 = local_b8;
  local_208 = uStack_b0;
  local_24c = *(undefined4 *)(param_3 + 0x38);
  local_250 = uStack_a0._4_4_;
  local_254 = (int)local_320[10];
  local_258 = *(int *)((longlong)local_320 + 0x54) + local_254;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  uVar21 = (int)local_320[0x17] * 5;
  uVar10 = DAT_14ca84e48;
  if (uVar21 < DAT_14ca84e48) {
    uVar10 = uVar21;
  }
  local_25c = *(undefined4 *)(param_3 + 0x134 + (ulonglong)*(byte *)(param_3 + 0x200) * 4);
  local_260 = (undefined4)local_98;
  local_264 = local_98._4_4_;
  uStack_100 = 0x44189;
  local_f8 = (longlong *)0x0;
  local_108 = (undefined8 *)CONCAT44(uVar10 + (uVar10 == 0),uVar9 + (uVar9 == 0));
  uVar32 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar15 = uVar32 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar15) {
    FUN_140023dd8(local_338,0x160);
    uVar32 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar15 = uVar32 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar15;
  local_240 = uVar13;
  local_1e8 = puVar29;
  FUN_1456bd266(uVar32,L"InstanceCulling.DrawIndirectArgsBuffer",&local_108,0);
  iVar18 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar18 + 1U) {
    FUN_144737178(local_2e8,iVar18);
  }
  uVar13 = local_318;
  puVar1 = local_338;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar32;
  *(int *)(uVar32 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar9 = (int)plVar19[0x17] * 0x14;
  uVar15 = (ulonglong)uVar9;
  pvVar3 = (void *)plVar19[0x16];
  pvVar26 = pvVar3;
  local_2d0 = uVar32;
  if (uVar9 != 0) {
    pvVar26 = (void *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    uVar32 = (longlong)pvVar26 + uVar15;
    if (*(ulonglong *)(param_2 + 0x78) < uVar32) {
      FUN_140023dd8(local_338,uVar9 + 0x10);
      pvVar26 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar32 = (longlong)pvVar26 + uVar15;
    }
    *puVar1 = uVar32;
    memcpy(pvVar26,pvVar3,uVar15);
  }
  iVar18 = *(int *)(param_2 + 0x590);
  *(uint *)(param_2 + 0x590) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x594) < iVar18 + 1U) {
    FUN_144775ac8(param_2 + 0x588,iVar18);
  }
  lVar16 = *(longlong *)(param_2 + 0x588);
  lVar20 = (longlong)iVar18 * 0x120;
  *(undefined2 *)(lVar16 + lVar20) = 0;
  *(ulonglong *)(lVar16 + 8 + lVar20) = local_2d0;
  *(void **)(lVar16 + 0x10 + lVar20) = pvVar26;
  *(ulonglong *)(lVar16 + 0x18 + lVar20) = uVar15;
  *(undefined8 *)(lVar16 + 0x20 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0x30 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0x60 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0x70 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xa0 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xb0 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xe0 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xf0 + lVar20) = 0;
  *(byte *)(local_2d0 + 0x24) = *(byte *)(local_2d0 + 0x24) | 0x80;
  local_168 = 0;
  local_158 = 0;
  FUN_142cc5c1e(param_2,local_2a0);
  puVar1 = local_338;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  uVar10 = DAT_14ca84e48;
  if (*(uint *)(local_320 + 0x1d) < DAT_14ca84e48) {
    uVar10 = *(uint *)(local_320 + 0x1d);
  }
  uStack_100 = 0x4109;
  local_f8 = (longlong *)0x0;
  local_108 = (undefined8 *)CONCAT44(uVar10 + (uVar10 == 0),uVar9 + (uVar9 == 0));
  uVar32 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar15 = uVar32 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar15) {
    FUN_140023dd8(local_338,0x160);
    uVar32 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar15 = uVar32 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar15;
  FUN_1456bd266(uVar32,L"InstanceCulling.InstanceIdOffsetBuffer",&local_108,0);
  iVar18 = *(int *)(param_2 + 400);
  uVar9 = iVar18 + 1;
  *(uint *)(param_2 + 400) = uVar9;
  if (*(uint *)(param_2 + 0x194) < uVar9) {
    FUN_144737178(local_2e8);
  }
  plVar19 = local_320;
  puVar1 = local_338;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar32;
  *(int *)(uVar32 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar9 = (int)local_320[0x1d] * 4;
  uVar15 = (ulonglong)uVar9;
  pvVar3 = (void *)local_320[0x1c];
  pvVar26 = pvVar3;
  local_288 = uVar32;
  if (uVar9 != 0) {
    pvVar26 = (void *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    uVar32 = (longlong)pvVar26 + uVar15;
    if (*(ulonglong *)(param_2 + 0x78) < uVar32) {
      FUN_140023dd8(local_338,uVar9 + 0x10);
      pvVar26 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar32 = (longlong)pvVar26 + uVar15;
    }
    *local_338 = uVar32;
    memcpy(pvVar26,pvVar3,uVar15);
  }
  iVar18 = *(int *)(param_2 + 0x590);
  uVar9 = iVar18 + 1;
  *(uint *)(param_2 + 0x590) = uVar9;
  if (*(uint *)(param_2 + 0x594) < uVar9) {
    FUN_144775ac8(param_2 + 0x588);
  }
  puVar1 = local_338;
  lVar16 = *(longlong *)(param_2 + 0x588);
  lVar20 = (longlong)iVar18 * 0x120;
  *(undefined2 *)(lVar16 + lVar20) = 0;
  *(ulonglong *)(lVar16 + 8 + lVar20) = local_288;
  *(void **)(lVar16 + 0x10 + lVar20) = pvVar26;
  *(ulonglong *)(lVar16 + 0x18 + lVar20) = uVar15;
  *(undefined8 *)(lVar16 + 0x20 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0x30 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0x60 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0x70 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xa0 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xb0 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xe0 + lVar20) = 0;
  *(undefined8 *)(lVar16 + 0xf0 + lVar20) = 0;
  *(byte *)(local_288 + 0x24) = *(byte *)(local_288 + 0x24) | 0x80;
  cVar8 = *(char *)(uVar13 + 0x68);
  local_210 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = local_210 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x50);
    local_210 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = local_210 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  local_210[1] = *(undefined8 *)(uVar13 + 8);
  local_210[2] = 0;
  *(undefined1 *)(local_210 + 3) = 3;
  *(undefined8 *)((longlong)local_210 + 0x1c) = 0xffffffffffffffff;
  *local_210 = &PTR_FUN_14a1fb168;
  *(byte *)(local_210 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)local_210 + 0x2c) = 0xffffffff00000000;
  local_278 = 0;
  local_210[7] = 0;
  local_210[8] = uVar13;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  puVar1 = local_338;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_210;
  *(int *)((longlong)local_210 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  if ((lVar30 == 0 & ((byte)local_304 ^ 1)) == 0) {
    if ((longlong *)*plVar19 == (longlong *)0x0) {
      local_280 = (undefined8 *)0x0;
      local_278 = 0;
    }
    else {
      lVar16 = *(longlong *)*plVar19;
      cVar8 = *(char *)(lVar16 + 0x68);
      local_280 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar17 = local_280 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
        FUN_140023dd8(local_338,0x50);
        local_280 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar17 = local_280 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar17;
      local_280[1] = *(undefined8 *)(lVar16 + 8);
      local_280[2] = 0;
      *(undefined1 *)(local_280 + 3) = 3;
      *(undefined8 *)((longlong)local_280 + 0x1c) = 0xffffffffffffffff;
      *local_280 = &PTR_FUN_14a1fb168;
      *(byte *)(local_280 + 5) = cVar8 >> 7 & 0x1c;
      *(undefined8 *)((longlong)local_280 + 0x2c) = 0xffffffff00000000;
      local_280[7] = 0;
      local_280[8] = lVar16;
      iVar18 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_330,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_280;
      *(int *)((longlong)local_280 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      local_278 = (ulonglong)*(uint *)(*plVar19 + 8);
    }
  }
  else {
    local_280 = (undefined8 *)0x0;
  }
  puVar1 = local_338;
  local_268 = (undefined4)plVar19[6];
  puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar29 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x48);
    puVar29 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar29 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar29[1] = *(undefined8 *)(local_2d0 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 2;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar29 + 5) = 1;
  *puVar29 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar29 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar29 + 0x32) = 0;
  puVar29[7] = local_2d0;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  puVar1 = local_338;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_218 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = local_218 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x50);
    local_218 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = local_218 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  local_218[1] = *(undefined8 *)(local_288 + 8);
  local_218[2] = 0;
  *(undefined1 *)(local_218 + 3) = 3;
  *(undefined8 *)((longlong)local_218 + 0x1c) = 0xffffffffffffffff;
  *local_218 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(local_218 + 5) = 0x1c;
  *(undefined8 *)((longlong)local_218 + 0x2c) = 0xffffffff00000000;
  local_218[7] = 0;
  local_218[8] = local_288;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_218;
  *(int *)((longlong)local_218 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  lVar16 = DAT_14c9e5330;
  local_238 = puVar29;
  if (plVar19[7] == 0) {
LAB_1401b7871:
    local_2b8 = 0;
    local_2c0 = 0;
    local_2c8 = 0;
  }
  else {
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar18 = *(int *)(lVar20 + 0xc60);
    if (iVar18 == 0x40000002) {
      uVar13 = 0;
    }
    else {
      bVar34 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
        if (iVar18 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          bVar34 = DVar11 == DVar12;
        }
        else {
          bVar34 = false;
        }
      }
      uVar13 = (ulonglong)(bVar34 ^ 1);
    }
    lVar5 = DAT_14c9e5348;
    if (*(int *)(lVar16 + uVar13 * 4) == 0) goto LAB_1401b7871;
    iVar18 = *(int *)(lVar20 + 0xc60);
    if (iVar18 == 0x40000002) {
      uVar13 = 0;
    }
    else {
      bVar34 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
        if (iVar18 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          bVar34 = DVar11 == DVar12;
        }
        else {
          bVar34 = false;
        }
      }
      uVar13 = (ulonglong)(bVar34 ^ 1);
    }
    if (*(int *)(lVar5 + uVar13 * 4) == 0) goto LAB_1401b7871;
    local_2c0 = FUN_14473c272(param_2,plVar19 + 7,0);
    uVar14 = *(undefined8 *)(local_2c0 + 0x84);
    unaff_XMM6_Da = (float)(int)uVar14;
    unaff_XMM7_Da = (float)(int)((ulonglong)uVar14 >> 0x20);
    local_2b8 = CONCAT71((uint7)((ulonglong)uVar14 >> 0x28),1);
    local_2c8 = DAT_14c9c0d80;
  }
  puVar1 = local_338;
  lVar16 = *plVar19;
  if ((lVar16 == 0) || (lVar20 = *(longlong *)(lVar16 + 0x18), lVar20 == 0)) {
    lVar20 = FUN_144aba046(&DAT_14ca63b10,param_2,4,0);
    puVar1 = local_338;
    local_220 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = local_220 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      local_220 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = local_220 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    local_220[1] = *(undefined8 *)(lVar20 + 8);
    local_220[2] = 0;
    *(undefined1 *)(local_220 + 3) = 3;
    *(undefined8 *)((longlong)local_220 + 0x1c) = 0xffffffffffffffff;
    *local_220 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(local_220 + 5) = 0x1c;
  }
  else {
    uVar24 = *(undefined1 *)(lVar16 + 0x20);
    local_220 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = local_220 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      local_220 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = local_220 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    local_220[1] = *(undefined8 *)(lVar20 + 8);
    local_220[2] = 0;
    *(undefined1 *)(local_220 + 3) = 3;
    *(undefined8 *)((longlong)local_220 + 0x1c) = 0xffffffffffffffff;
    *local_220 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(local_220 + 5) = uVar24;
  }
  *(undefined8 *)((longlong)local_220 + 0x2c) = 0xffffffff00000000;
  local_220[7] = 0;
  local_220[8] = lVar20;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  local_321 = lVar30 != 0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_220;
  *(int *)((longlong)local_220 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_2f8 = (longlong *)(param_2 + 0x98);
  local_228 = param_2 + 0x168;
  uVar13 = CONCAT71((int7)((ulonglong)local_228 >> 8),1);
  uVar24 = 0;
  lVar30 = 0;
  local_300 = param_2;
  do {
    puVar1 = local_338;
    plVar4 = (longlong *)plVar19[lVar30 + 0x23];
    if ((int)plVar4[3] != 0) {
      local_318 = CONCAT44(local_318._4_4_,(int)uVar13);
      puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar17 = puVar29 + 0x22;
      if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
        FUN_140023dd8(local_338,0x120);
        puVar29 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar17 = puVar29 + 0x22;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar17;
      *puVar29 = &PTR_FUN_14a240b98;
      puVar17 = puVar29 + 10;
      puVar29[2] = 0;
      puVar29[3] = 0;
      puVar29[4] = 0;
      puVar29[5] = 0;
      puVar29[10] = 0;
      puVar29[0xb] = 0;
      puVar29[0xe] = 0;
      puVar29[0xf] = 0;
      puVar29[0x10] = 0;
      puVar29[0x11] = 0;
      puVar29[0x12] = 0;
      puVar29[0x13] = 0;
      puVar29[0x14] = 0;
      puVar29[0x15] = 0;
      puVar29[0x16] = 0;
      puVar29[0x17] = 0;
      puVar29[0x18] = 0;
      puVar29[0x19] = 0;
      puVar29[0x1a] = 0;
      puVar29[0x1b] = 0;
      puVar29[0x1c] = 0;
      puVar29[0x1d] = 0;
      iVar18 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
        FUN_1448cfae8(local_2f8,iVar18);
      }
      *(undefined8 **)(*local_2f8 + (longlong)iVar18 * 8) = puVar29;
      puVar29[2] = local_1f0;
      puVar29[3] = local_1f8;
      puVar29[4] = local_200;
      puVar29[5] = local_208;
      *(undefined4 *)(puVar29 + 6) = local_24c;
      *(undefined4 *)((longlong)puVar29 + 0x34) = local_250;
      *(undefined4 *)(puVar29 + 7) = local_260;
      *(undefined4 *)((longlong)puVar29 + 0x3c) = local_264;
      *(undefined4 *)(puVar29 + 8) = local_25c;
      *(undefined8 *)((longlong)puVar29 + 0x44) = local_114;
      *(undefined4 *)((longlong)puVar29 + 0x4c) = local_10c;
      *puVar17 = 0;
      puVar29[0xb] = 0;
      *(undefined4 *)(puVar29 + 0xc) = local_128;
      *(undefined4 *)((longlong)puVar29 + 100) = uStack_124;
      *(undefined4 *)(puVar29 + 0xd) = uStack_120;
      *(undefined4 *)((longlong)puVar29 + 0x6c) = uStack_11c;
      puVar29[0xe] = local_1e0;
      puVar29[0xf] = local_1e8;
      puVar29[0x10] = local_210;
      puVar29[0x11] = local_280;
      puVar29[0x12] = 0;
      puVar29[0x13] = 0;
      puVar29[0x14] = local_218;
      puVar29[0x15] = local_220;
      puVar29[0x16] = local_230;
      puVar29[0x17] = local_230;
      puVar29[0x18] = local_238;
      puVar29[0x19] = local_2f0;
      puVar29[0x1a] = local_1d8;
      puVar29[0x1b] = local_2b0;
      puVar29[0x1c] = local_2c0;
      puVar29[0x1d] = local_2c8;
      *(float *)(puVar29 + 0x1e) = unaff_XMM6_Da;
      *(float *)((longlong)puVar29 + 0xf4) = unaff_XMM7_Da;
      *(undefined4 *)(puVar29 + 0x1f) = local_268;
      *(int *)((longlong)puVar29 + 0xfc) = (int)local_278;
      *(int *)((longlong)puVar29 + 0x104) = local_254;
      *(int *)(puVar29 + 0x21) = local_258;
      uVar9 = *(uint *)((longlong)plVar4 + 0x24);
      if (uVar9 != 0) {
        iVar18 = *(int *)((longlong)plVar4 + 0x2c);
        iVar25 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar25 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar25 + 1U) {
          FUN_144757b64(plVar4,iVar25);
        }
        *(uint *)(*plVar4 + (longlong)iVar25 * 4) = uVar9 & 0x7f | iVar18 << 7;
        *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
        param_2 = local_300;
      }
      local_188 = (undefined8 *)plVar4[2];
      lStack_180 = CONCAT44(lStack_180._4_4_,(int)plVar4[3]);
      local_198 = *plVar4;
      uStack_190 = (undefined4)plVar4[1];
      local_380 = local_380 & 0xffffffffffffff00;
      local_388 = &local_188;
      uStack_378 = CONCAT44(uStack_378._4_4_,1);
      FUN_1448d080e(plVar4,&local_108,param_2,&local_198);
      FUN_1448d05fc(&local_108,param_2,puVar17);
      plVar19 = local_320;
      *(int *)(puVar29 + 0x20) = (int)lVar30;
      local_19f = (byte)local_304 & (byte)local_318;
      local_19e = local_321;
      local_19d = (undefined1)local_2b8;
      local_19c = *(int *)((longlong)local_320 + 0x44) == 1;
      local_19b = 0;
      local_19a = (undefined1)local_2a8;
      local_1a0 = uVar24;
      FUN_144a945ca(local_2a0,&local_1b0,&local_1a0);
      iVar18 = (int)plVar4[1];
      if (DAT_14ca84f24 < iVar18) {
        iVar25 = iVar18 + 0xfe;
        if (-1 < iVar18 + 0x7f) {
          iVar25 = iVar18 + 0x7f;
        }
        iVar25 = iVar25 >> 7;
        iVar18 = 0x80;
      }
      else {
        iVar25 = 1;
      }
      if (DAT_14ca84f28 < iVar25) {
        iVar28 = iVar25 + 0xfe;
        if (-1 < iVar25 + 0x7f) {
          iVar28 = iVar25 + 0x7f;
        }
        local_298 = CONCAT44(local_298._4_4_,iVar28 >> 7);
        iVar25 = 0x80;
      }
      else {
        local_298 = CONCAT44(local_298._4_4_,1);
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9e6b00) {
        FUN_144b3d300(&DAT_14c9e6b00);
        if (DAT_14c9e6b00 == -1) {
          FUN_1415dd832(&local_188);
          local_340 = 0;
          local_350 = 0;
          local_370 = "Unknown";
          local_380 = 0;
          uStack_378 = 0;
          local_388 = (undefined8 **)0x14a1fb178;
          local_348 = 0;
          local_360 = 0x100;
          local_368 = 0x234;
          local_358 = &local_188;
          FUN_140b49562(&DAT_14c9e6a80,0,1);
          if (local_188 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_142ccf62a);
          _Init_thread_footer(&DAT_14c9e6b00);
          param_2 = local_300;
          plVar19 = local_320;
        }
      }
      puVar29 = puVar29 + 2;
      local_188 = (undefined8 *)0x0;
      lStack_180 = 0;
      FUN_1448f70da(CONCAT44(uStack_1ac,local_1b0),&DAT_14c9e6a80,puVar29,&local_188);
      local_198 = CONCAT44(uStack_1ac,local_1b0);
      uStack_190 = uStack_1a8;
      uStack_18c = uStack_1a4;
      FUN_140069376(param_2);
      puVar1 = local_338;
      uVar23 = (undefined6)((ulonglong)puVar17 >> 0x10);
      uVar22 = (undefined4)CONCAT62(uVar23,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar22 = (undefined4)CONCAT62(uVar23,4);
      }
      puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar33 + 0x3d;
      if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
        FUN_140023dd8(local_338,0x1f0);
        puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar33 + 0x3d;
      }
      *local_338 = (ulonglong)puVar17;
      lStack_180 = DAT_14c9e6ac8;
      if (DAT_14c9e6ac8 != 0) {
        LOCK();
        *(int *)(DAT_14c9e6ac8 + 8) = *(int *)(DAT_14c9e6ac8 + 8) + 1;
        UNLOCK();
      }
      local_178 = &DAT_14c9e6a80;
      local_388 = (undefined8 **)CONCAT71(local_388._1_7_,2);
      local_188 = puVar29;
      FUN_140068f1a(puVar33,&local_1b1,&local_188,uVar22);
      *puVar33 = &PTR_FUN_14a240ba0;
      puVar33[0x37] = &DAT_14c9e6a80;
      puVar33[0x38] = puVar29;
      *(undefined4 *)(puVar33 + 0x39) = (undefined4)local_198;
      *(undefined4 *)((longlong)puVar33 + 0x1cc) = local_198._4_4_;
      *(undefined4 *)(puVar33 + 0x3a) = uStack_190;
      *(undefined4 *)((longlong)puVar33 + 0x1d4) = uStack_18c;
      *(int *)(puVar33 + 0x3b) = iVar18;
      *(int *)((longlong)puVar33 + 0x1dc) = iVar25;
      *(undefined4 *)(puVar33 + 0x3c) = (undefined4)local_298;
      iVar18 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar18 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
        FUN_14470e57a(local_228,iVar18);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar33);
      uVar13 = local_318 & 0xffffffff;
    }
    puVar1 = local_338;
    lVar30 = 1;
    uVar24 = 1;
    uVar15 = uVar13 & 1;
    uVar13 = 0;
  } while (uVar15 != 0);
  uVar9 = (uint)local_240;
  uVar13 = local_2d0;
  puVar27 = local_2d8;
  if (((byte)local_2a8 & uVar9 != 0) != 0) {
    uVar10 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar10 = DAT_14ca84e48;
    }
    uStack_100 = 0x10109;
    uVar21 = DAT_14ca84e48;
    if (uVar9 < DAT_14ca84e48) {
      uVar21 = uVar9;
    }
    local_f8 = (longlong *)0x0;
    local_108 = (undefined8 *)CONCAT44(uVar21 + (uVar21 == 0),uVar10 + (uVar10 == 0));
    uVar15 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar13 = uVar15 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar13) {
      FUN_140023dd8(local_338,0x160);
      uVar15 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar13 = uVar15 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar13;
    FUN_1456bd266(uVar15,L"InstanceCulling.Compaction.BlockDestInstanceOffsets",&local_108,0);
    plVar19 = local_320;
    iVar18 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar18 + 1U) {
      FUN_144737178(local_2e8,iVar18);
    }
    puVar1 = local_338;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar18 * 8) = uVar15;
    *(int *)(uVar15 + 0x7c) = *(int *)(param_2 + 400) + -1;
    puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar29 + 6;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x40);
      puVar29 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar29 + 6;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    *puVar29 = &PTR_FUN_14a240bb8;
    puVar29[2] = 0;
    puVar29[3] = 0;
    puVar29[4] = 0;
    puVar29[5] = 0;
    iVar18 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
      FUN_1448cfae8(local_2f8,iVar18);
    }
    puVar1 = local_338;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar29;
    puVar29[2] = local_2f0;
    cVar8 = *(char *)(local_2e0 + 0x68);
    puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar33 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar33 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar33[1] = *(undefined8 *)(local_2e0 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 3;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *puVar33 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
    puVar33[7] = 0;
    puVar33[8] = local_2e0;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_330,iVar18);
    }
    puVar1 = local_338;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar29[3] = puVar33;
    cVar8 = *(char *)(uVar15 + 0x68);
    puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar33 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x48);
      puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar33 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar33[1] = *(undefined8 *)(uVar15 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 2;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar33 + 5) = 0;
    *puVar33 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar33 + 6) = cVar8 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar33 + 0x31) = 0;
    puVar33[7] = uVar15;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_330,iVar18);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar29[4] = puVar33;
    puVar29[5] = local_238;
    FUN_1401afad2(local_2a0,&local_108);
    local_1c0 = (int)plVar19[0x1f];
    local_1bc = &DAT_100000001;
    iVar18 = 1;
    if (DAT_14ca84f24 < local_1c0) {
      iVar18 = local_1c0 + 0xfe;
      if (-1 < local_1c0 + 0x7f) {
        iVar18 = local_1c0 + 0x7f;
      }
      iVar18 = iVar18 >> 7;
      local_1bc = (undefined1 *)CONCAT44(1,iVar18);
      local_1c0 = 0x80;
    }
    if (DAT_14ca84f28 < iVar18) {
      iVar25 = iVar18 + 0xfe;
      if (-1 < iVar18 + 0x7f) {
        iVar25 = iVar18 + 0x7f;
      }
      local_1bc = (undefined1 *)CONCAT44(iVar25 >> 7,0x80);
    }
    local_388 = (undefined8 **)&local_1c0;
    FUN_1471be594(param_2,&local_188,&local_108,puVar29 + 2);
    iVar18 = (int)*local_248;
    if (iVar18 == 0) {
      local_388 = (undefined8 **)&DAT_14a240b84;
      uStack_378 = CONCAT71(uStack_378._1_7_,1);
      local_380 = 4;
      iVar18 = 1;
    }
    else {
      local_380 = (ulonglong)(uint)(iVar18 * 4);
      local_388 = (undefined8 **)plVar19[0x20];
      uStack_378 = (ulonglong)uStack_378._1_7_ << 8;
    }
    lVar30 = FUN_144942e63(param_2,L"InstanceCulling.Compaction.BlockDrawCommandIndices",4,iVar18);
    puVar1 = local_338;
    puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar29 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      puVar29 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar29 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    *puVar29 = &PTR_FUN_14a240bd8;
    puVar29[2] = 0;
    puVar29[3] = 0;
    puVar29[4] = 0;
    puVar29[5] = 0;
    puVar29[6] = 0;
    puVar29[7] = 0;
    iVar18 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
      FUN_1448cfae8(local_2f8,iVar18);
    }
    puVar1 = local_338;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar29;
    puVar29[2] = local_2f0;
    cVar8 = *(char *)(lVar30 + 0x68);
    puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar33 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar33 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar33[1] = *(undefined8 *)(lVar30 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 3;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *puVar33 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
    puVar33[7] = 0;
    puVar33[8] = lVar30;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_330,iVar18);
    }
    uVar13 = local_290;
    puVar1 = local_338;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar29[3] = puVar33;
    cVar8 = *(char *)(local_290 + 0x68);
    puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar33 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar33 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar33[1] = *(undefined8 *)(uVar13 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 3;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *puVar33 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
    puVar33[7] = 0;
    puVar33[8] = uVar13;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_330,iVar18);
    }
    puVar1 = local_338;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar29[4] = puVar33;
    cVar8 = *(char *)(uVar15 + 0x68);
    puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar33 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar33 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar33[1] = *(undefined8 *)(uVar15 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 3;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *puVar33 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
    puVar33[7] = 0;
    puVar33[8] = uVar15;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_330,iVar18);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar29[5] = puVar33;
    puVar29[6] = local_230;
    puVar29[7] = local_230;
    FUN_1401b122a(local_2a0,&local_108);
    uVar13 = local_2d0;
    puVar27 = local_2d8;
    local_1cc = (int)local_240;
    local_1c8 = &DAT_100000001;
    iVar18 = 1;
    if (DAT_14ca84f24 < local_1cc) {
      iVar18 = local_1cc + 0xfe;
      if (-1 < local_1cc + 0x7f) {
        iVar18 = local_1cc + 0x7f;
      }
      iVar18 = iVar18 >> 7;
      local_1c8 = (undefined1 *)CONCAT44(1,iVar18);
      local_1cc = 0x80;
    }
    if (DAT_14ca84f28 < iVar18) {
      iVar25 = iVar18 + 0xfe;
      if (-1 < iVar18 + 0x7f) {
        iVar25 = iVar18 + 0x7f;
      }
      local_1c8 = (undefined1 *)CONCAT44(iVar25 >> 7,0x80);
    }
    local_388 = (undefined8 **)&local_1cc;
    FUN_1471be646(param_2,&local_188,&local_108,puVar29 + 2);
  }
  puVar1 = local_338;
  *puVar27 = uVar13;
  *(undefined4 *)(puVar27 + 1) = 4;
  puVar27[2] = local_288;
  *(undefined4 *)(puVar27 + 3) = 8;
  puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar29 + 6;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x40);
    puVar29 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar17 = puVar29 + 6;
  }
  plVar19 = local_320;
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  *puVar29 = &PTR_FUN_14a240b70;
  puVar29[2] = 0;
  puVar29[3] = 0;
  iVar18 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar18 + 1U) {
    FUN_1448cfae8(local_2f8,iVar18);
  }
  puVar1 = local_338;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar18 * 8) = puVar29;
  cVar8 = *(char *)(local_310 + 0x68);
  puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar33 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x50);
    puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar33 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar33[1] = *(undefined8 *)(local_310 + 8);
  puVar33[2] = 0;
  *(undefined1 *)(puVar33 + 3) = 3;
  *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
  *puVar33 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
  puVar33[7] = 0;
  puVar33[8] = local_310;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  puVar1 = local_338;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar33;
  *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar29[2] = puVar33;
  cVar8 = *(char *)(local_310 + 0x68);
  puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar33 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_338,0x50);
    puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar33 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar33[1] = *(undefined8 *)(local_310 + 8);
  puVar33[2] = 0;
  *(undefined1 *)(puVar33 + 3) = 3;
  *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
  *puVar33 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
  puVar33[7] = 0;
  puVar33[8] = local_310;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_330,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar33;
  *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar29[3] = puVar33;
  *(uint *)(puVar29 + 4) = local_26c;
  local_108 = puVar29 + 2;
  FUN_1449865da();
  local_188 = DAT_14c9e5398;
  uVar13 = FUN_14498678e(param_2 + 0x1a8,local_338,&local_108);
  FUN_1449865da();
  puVar1 = local_338;
  cVar8 = '\x02';
  if (DAT_14c9e53c1 != '\x03') {
    cVar8 = DAT_14c9e53c1;
  }
  local_2d8[6] = uVar13;
  *(char *)(local_2d8 + 7) = cVar8;
  if (((&DAT_14ca814b8)[(ulonglong)*(ushort *)(plVar19 + 1) * 0xf] == 1) &&
     ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)*(ushort *)(plVar19 + 1) * 0x3c + 1) & 0x10)
      != 0)) {
    puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar29 + 4;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x30);
      puVar29 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar29 + 4;
    }
    *(undefined8 **)(local_300 + 0x70) = puVar17;
    *puVar29 = &PTR_FUN_14a241850;
    puVar29[2] = 0;
    iVar18 = *(int *)(local_300 + 0xa0);
    *(uint *)(local_300 + 0xa0) = iVar18 + 1U;
    if (*(uint *)(local_300 + 0xa4) < iVar18 + 1U) {
      FUN_1448cfae8(local_2f8,iVar18);
    }
    puVar1 = local_338;
    *(undefined8 **)(*(longlong *)(local_300 + 0x98) + (longlong)iVar18 * 8) = puVar29;
    cVar8 = *(char *)(local_310 + 0x68);
    puVar33 = (undefined8 *)(*(longlong *)(local_300 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar33 + 9;
    if (*(undefined8 **)(local_300 + 0x78) < puVar17) {
      FUN_140023dd8(local_338,0x50);
      puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar33 + 9;
    }
    *(undefined8 **)(local_300 + 0x70) = puVar17;
    puVar33[1] = *(undefined8 *)(local_310 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 3;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *puVar33 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar33 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
    puVar33[7] = 0;
    puVar33[8] = local_310;
    iVar18 = *(int *)(local_300 + 0x1a0);
    *(uint *)(local_300 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(local_300 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_330,iVar18);
    }
    *(undefined8 **)(*(longlong *)(local_300 + 0x198) + (longlong)iVar18 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(local_300 + 0x1a0) + -1;
    puVar29[2] = puVar33;
    local_108 = puVar29 + 2;
    FUN_144a92736();
    local_188 = DAT_14c9e5438;
    uVar13 = FUN_1471cffa6(param_2 + 0x1a8,local_338,&local_108);
    FUN_144a92736();
    cVar8 = '\x02';
    if (DAT_14c9e5461 != '\x03') {
      cVar8 = DAT_14c9e5461;
    }
    local_2d8[10] = uVar13;
    *(char *)(local_2d8 + 0xb) = cVar8;
  }
LAB_1401b83aa:
  if ((local_80 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401b956c FUN_1401b956c body=61 status=ok
// SIG undefined FUN_1401b956c(void)

void FUN_1401b956c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar1 = param_1;
  }
  FUN_1401b95a9(lVar1,*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401b95a9 FUN_1401b95a9 body=101 status=ok
// SIG undefined FUN_1401b95a9(void)

void FUN_1401b95a9(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1401b960e FUN_1401b960e body=14 status=ok
// SIG undefined FUN_1401b960e(void)

void FUN_1401b960e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1401b961c();
    return;
  }
  return;
}



// FUNCTION 1401b961c FUN_1401b961c body=449 status=ok
// SIG undefined FUN_1401b961c(void)

void FUN_1401b961c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x260);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401b9736:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401b9773:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x260;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401b9674;
LAB_1401b9669:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401b9674:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x6c) goto code_r0x0001401b969d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x98 + 0x1a;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401b96f3:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401b9773;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401b9736;
code_r0x0001401b969d:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401b96f3;
    }
  }
  goto LAB_1401b9669;
}



// FUNCTION 1401b97de FUN_1401b97de body=181 status=ok
// SIG undefined FUN_1401b97de(void)

void FUN_1401b97de(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9894(param_1 + 0x48);
  FUN_1401fc47e(param_1);
  return;
}



// FUNCTION 1401b9894 FUN_1401b9894 body=140 status=ok
// SIG undefined FUN_1401b9894(void)

void FUN_1401b9894(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401b9920 FUN_1401b9920 body=46 status=ok
// SIG undefined FUN_1401b9920(void)

void FUN_1401b9920(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1401b994e FUN_1401b994e body=309 status=ok
// SIG undefined FUN_1401b994e(void)

void FUN_1401b994e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  if (*(code **)(*param_1 + 1000) != (code *)&LAB_144b202e0) {
    lVar1 = *(longlong *)(*param_2 + 0x10);
    cVar3 = (**(code **)(*param_1 + 1000))(param_1);
    if (((cVar3 != '\0') &&
        ((((((*(byte *)((longlong)param_1 + 0x17f) & 1) != 0 ||
            (lVar2 = param_1[8], (int)param_1[0xb] != *(int *)(lVar2 + 0x178))) ||
           (*(int *)((longlong)param_1 + 0x5c) != *(int *)(lVar2 + 0x17c))) ||
          (((int)param_1[0xc] != *(int *)(lVar2 + 0x180) ||
           (*(int *)((longlong)param_1 + 100) != *(int *)(lVar2 + 0x184))))) ||
         ((*(char *)(lVar1 + 0xfb) != '\0' || (*(char *)(lVar1 + 0xfc) == '\x01')))))) &&
       (cVar3 = (**(code **)(*param_1 + 0x2c0))(param_1), cVar3 != '\0')) {
      if ((char)param_1[0x2a] == '\x02') {
        FUN_147929ec2(param_1,param_2,param_3);
      }
      else if ((char)param_1[0x2a] == '\x01') {
        FUN_147929d36(param_1,param_2,param_3);
      }
      goto LAB_1401b9987;
    }
  }
  FUN_1433e6492(param_1,param_2,param_3,0);
LAB_1401b9987:
  cVar3 = (**(code **)(*param_1 + 0x340))(param_1);
  if ((cVar3 != '\0') && (plVar4 = (longlong *)FUN_14010173e(), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 8))
              (plVar4,param_3 + 0xc,param_1,*(undefined1 *)(param_3 + 0x18),param_2[2]);
  }
  return;
}



// FUNCTION 1401b9a8c FUN_1401b9a8c body=1668 status=ok
// SIG undefined FUN_1401b9a8c(void)

undefined8 FUN_1401b9a8c(longlong param_1,double *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined1 *puStack_240;
  double *local_238;
  longlong local_230;
  double *local_228;
  longlong local_220;
  double local_218 [13];
  undefined1 local_1b0 [56];
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  dVar6 = *param_2;
  uVar11 = CONCAT71((int7)(local_d0 >> 8),1);
  if ((dVar6 != 0.0) && (*(int *)((longlong)dVar6 + 0x58) == *(int *)(param_2 + 2))) {
    iVar4 = *(int *)((longlong)dVar6 + 0x88);
    dStack_120 = (double)*(float *)((longlong)dVar6 + 0x4c);
    local_128 = (double)*(float *)((longlong)dVar6 + 0x48);
    local_138._8_4_ = SUB84((double)*(float *)((longlong)dVar6 + 0x44),0);
    local_138._0_8_ = (double)*(float *)((longlong)dVar6 + 0x40);
    local_138._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar6 + 0x44) >> 0x20);
    local_118 = *(undefined8 *)((longlong)dVar6 + 0x20);
    uStack_110 = *(undefined8 *)((longlong)dVar6 + 0x28);
    local_108 = *(undefined8 *)((longlong)dVar6 + 0x30);
    uStack_100 = 0;
    local_f8 = 0x3ff0000000000000;
    uStack_f0 = 0x3ff0000000000000;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0;
    lVar17 = *(longlong *)(param_1 + 0x90);
    if (lVar17 == 0) {
      dVar2 = *(double *)(param_1 + 0x38);
      dVar21 = *(double *)(param_1 + 0x40);
      dVar23 = *(double *)(param_1 + 0x48);
      dVar7 = -dVar23;
      dVar8 = -dVar21;
      dVar19 = -dVar2;
    }
    else {
      dVar7 = *(double *)(param_1 + 0xa0);
      dVar3 = *(double *)(param_1 + 0xa8);
      dVar8 = *(double *)(param_1 + 0xb0);
      dVar19 = *(double *)(lVar17 + 0x20) * *(double *)(param_1 + 0xe0);
      dVar20 = *(double *)(lVar17 + 0x28) * *(double *)(param_1 + 0xe8);
      dVar18 = *(double *)(lVar17 + 0x30) * *(double *)(param_1 + 0xf0);
      dVar2 = *(double *)(param_1 + 0xb8);
      dVar21 = dVar20 * dVar7 - dVar3 * dVar19;
      dVar22 = dVar18 * dVar3 - dVar8 * dVar20;
      dVar23 = dVar19 * dVar8 - dVar7 * dVar18;
      dVar22 = dVar22 + dVar22;
      dVar23 = dVar23 + dVar23;
      dVar21 = dVar21 + dVar21;
      dVar19 = (dVar21 * dVar3 - dVar23 * dVar8) + dVar2 * dVar22 + dVar19 +
               *(double *)(param_1 + 0xc0);
      dVar8 = (dVar8 * dVar22 - dVar7 * dVar21) + *(double *)(param_1 + 0xb8) * dVar23 + dVar20 +
              *(double *)(param_1 + 200);
      dVar7 = dVar21 * dVar2 + dVar18 + (dVar23 * dVar7 - dVar22 * dVar3) +
              *(double *)(param_1 + 0xd0);
      dVar3 = *(double *)(lVar17 + 0x10);
      dVar23 = dVar3 + dVar7;
      dVar21 = dVar3 + dVar8;
      dVar2 = dVar3 + dVar19;
      dVar7 = dVar7 - dVar3;
      dVar8 = dVar8 - dVar3;
      dVar19 = dVar19 - dVar3;
    }
    uVar11 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
    if (0 < iVar4) {
      local_220 = (longlong)dVar6 + 0x78;
      dVar23 = (dVar23 - dVar7) * 0.5;
      dVar21 = (dVar21 - dVar8) * 0.5;
      dVar2 = (dVar2 - dVar19) * 0.5;
      local_230 = param_1 + 0x80;
      local_238 = (double *)(param_1 + 0xa0);
      local_228 = (double *)(param_1 + 0x58);
      lVar17 = 0;
      do {
        lVar13 = *(longlong *)((longlong)dVar6 + 0x80);
        if (*(longlong *)((longlong)dVar6 + 0x80) == 0) {
          lVar13 = local_220;
        }
        lVar15 = *(longlong *)(lVar13 + lVar17 * 8);
        uVar11 = *(undefined8 *)(lVar15 + 0x10);
        if (1 < iVar4) {
          dVar18 = dVar21;
          dVar20 = dVar23;
          dVar3 = dVar2;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar3 = *(double *)(param_1 + 0x38);
            dVar18 = *(double *)(param_1 + 0x40);
            dVar20 = *(double *)(param_1 + 0x48);
          }
          local_218[0] = *(double *)(lVar15 + 0x18) - dVar3;
          local_218[1] = *(double *)(lVar15 + 0x20) - dVar18;
          local_218[2] = *(double *)(lVar15 + 0x28) - dVar20;
          local_218[3] = *(double *)(lVar15 + 0x30) + dVar3;
          local_218[4] = *(double *)(lVar15 + 0x38) + dVar18;
          local_218[5] = *(double *)(lVar15 + 0x40) + dVar20;
          local_178 = dVar19 + dVar2;
          uStack_170 = dVar8 + dVar21;
          local_168 = dVar7 + dVar23;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            local_178 = *(double *)(param_1 + 0xc0);
            uStack_170 = *(double *)(param_1 + 200);
            local_168 = *(double *)(param_1 + 0xd0);
          }
          lVar12 = 0;
          do {
            dVar3 = (double)(&local_178)[lVar12];
            if ((dVar3 < local_218[lVar12]) ||
               (local_218[lVar12 + 3] <= dVar3 && dVar3 != local_218[lVar12 + 3]))
            goto LAB_1401b9ff9;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 3);
        }
        cVar9 = '\x02';
        if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) {
LAB_1401b9e9e:
          local_168 = (double)CONCAT44(local_168._4_4_,0xffffffff);
          dStack_160 = 0.0;
          dStack_158 = 0.0;
          dStack_150 = 0.0;
          local_148 = 0xffffffff;
          uStack_170 = *(double *)(lVar13 + lVar17 * 8);
          local_178 = dVar6;
          if (*(longlong *)(param_1 + 0x90) != 0) {
            if ((*(byte *)(param_1 + 0x51) & 2) == 0) {
              pdVar14 = local_238;
              pdVar16 = local_218;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_240 = (undefined1 *)0x0;
            }
            else {
              pdVar14 = local_238;
              pdVar16 = local_218;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *pdVar16 = *pdVar14;
                pdVar14 = pdVar14 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_240 = local_1b0;
            }
            local_248 = 0;
            cVar10 = FUN_140682465(uVar11,local_138);
            if (cVar10 != '\0') {
              dStack_150 = local_228[2];
              dStack_160 = *local_228;
              dStack_158 = local_228[1];
              if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                cVar9 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                  (*(longlong **)(param_1 + 0x98),local_230,&local_178);
              }
              if (cVar9 != '\0') {
                if ((cVar9 == '\x02') || (*(char *)(param_1 + 0x52) == '\x01')) {
                  lVar13 = *(longlong *)(param_1 + 0x70);
LAB_1401b9fb1:
                  *(ulonglong *)(lVar13 + 0x38) = CONCAT44(uStack_144,local_148);
                  *(double *)(lVar13 + 0x28) = dStack_158;
                  *(double *)(lVar13 + 0x30) = dStack_150;
                  *(double *)(lVar13 + 0x18) = local_168;
                  *(double *)(lVar13 + 0x20) = dStack_160;
                  *(undefined4 *)(lVar13 + 8) = (undefined4)local_178;
                  *(undefined4 *)(lVar13 + 0xc) = local_178._4_4_;
                  *(undefined4 *)(lVar13 + 0x10) = (undefined4)uStack_170;
                  *(undefined4 *)(lVar13 + 0x14) = uStack_170._4_4_;
                  *(undefined1 *)(lVar13 + 0x44) = 1;
                }
                else {
                  lVar13 = *(longlong *)(param_1 + 0x70);
                  if (*(char *)(lVar13 + 0x45) == '\x01') goto LAB_1401b9fb1;
                  iVar5 = *(int *)(lVar13 + 0x1c50);
                  *(uint *)(lVar13 + 0x1c50) = iVar5 + 1U;
                  if (*(uint *)(lVar13 + 0x1c54) < iVar5 + 1U) {
                    FUN_140ef0e5e(lVar13 + 0x48,iVar5);
                  }
                  lVar15 = lVar13 + 0x48;
                  if (*(longlong *)(lVar13 + 0x1c48) != 0) {
                    lVar15 = *(longlong *)(lVar13 + 0x1c48);
                  }
                  lVar13 = (longlong)iVar5 * 0x38;
                  *(ulonglong *)(lVar15 + 0x30 + lVar13) = CONCAT44(uStack_144,local_148);
                  pdVar14 = (double *)(lVar15 + 0x20 + lVar13);
                  *pdVar14 = dStack_158;
                  pdVar14[1] = dStack_150;
                  pdVar14 = (double *)(lVar15 + 0x10 + lVar13);
                  *pdVar14 = local_168;
                  pdVar14[1] = dStack_160;
                  puVar1 = (undefined4 *)(lVar15 + lVar13);
                  *puVar1 = (undefined4)local_178;
                  puVar1[1] = local_178._4_4_;
                  puVar1[2] = (undefined4)uStack_170;
                  puVar1[3] = uStack_170._4_4_;
                }
                if (*(char *)(param_1 + 0x52) != '\0') {
                  uVar11 = 0;
                  goto LAB_1401ba099;
                }
              }
            }
          }
        }
        else {
          cVar9 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                            (*(longlong **)(param_1 + 0x98),local_230,lVar15,dVar6);
          if (cVar9 != '\0') goto LAB_1401b9e9e;
        }
LAB_1401b9ff9:
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)((longlong)dVar6 + 0x88));
      uVar11 = CONCAT71((int7)(int3)((uint)*(int *)((longlong)dVar6 + 0x88) >> 8),1);
    }
  }
LAB_1401ba099:
  if ((local_d0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ba112 FUN_1401ba112 body=225 status=ok
// SIG undefined FUN_1401ba112(void)

ulonglong FUN_1401ba112(longlong *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0xd8))();
  if (cVar2 == '\0') {
LAB_1401ba1b4:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_3;
    uVar4 = (undefined7)((ulonglong)param_4 >> 8);
    if (uVar1 == param_2 || (int)(uVar1 | param_2) < 0) {
      if (-1 < (int)param_2) {
        *param_4 = param_2;
        uVar3 = CONCAT71(uVar4,1);
        if (*param_3 == 0xffffffff) {
          (**(code **)(*param_1 + 0x58))(param_1,&local_34,param_2);
          if (local_34 == 0xffffffff) {
            cVar2 = (**(code **)(*param_1 + 0xe0))(param_1);
            if (cVar2 == '\0') {
              *param_3 = param_2;
              FUN_146928334(param_1 + 0xc,param_3);
              goto LAB_1401ba181;
            }
            (**(code **)(*param_1 + 0xb0))(param_1,&local_38);
            local_34 = local_38;
          }
          *param_3 = local_34;
        }
        goto LAB_1401ba181;
      }
      if ((int)uVar1 < 0) goto LAB_1401ba1b4;
      *param_4 = uVar1;
    }
    else {
      *param_4 = param_2;
    }
    uVar3 = CONCAT71(uVar4,1);
  }
LAB_1401ba181:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ba25e FUN_1401ba25e body=14 status=ok
// SIG undefined FUN_1401ba25e(void)

void FUN_1401ba25e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1401ba26c();
    return;
  }
  return;
}



// FUNCTION 1401ba26c FUN_1401ba26c body=450 status=ok
// SIG undefined FUN_1401ba26c(void)

void FUN_1401ba26c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401ba387:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401ba3c4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401ba2c2;
LAB_1401ba2b7:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401ba2c2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001401ba2ee;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401ba344:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401ba3c4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401ba387;
code_r0x0001401ba2ee:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401ba344;
    }
  }
  goto LAB_1401ba2b7;
}



// FUNCTION 1401ba42e FUN_1401ba42e body=333 status=ok
// SIG undefined FUN_1401ba42e(void)

void FUN_1401ba42e(longlong param_1)

{
  uint *_Dst;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401ba590();
  FUN_1401ba5e8(local_40);
  FUN_1409ca370((longlong *)(param_1 + 0x830),param_1);
  iVar3 = *(int *)(param_1 + 0x838);
  if (0 < iVar3) {
    lVar4 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar2 = *(longlong *)(param_1 + 0x830);
        _Dst = (uint *)(lVar2 + lVar4 * 0x10);
        if (((((*(longlong *)(lVar2 + 8 + lVar4 * 0x10) != 0) && (_Dst[1] != 0)) &&
             (uVar1 = *_Dst, -1 < (int)uVar1)) &&
            (((int)uVar1 < DAT_14c9647dc &&
             (plVar7 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar7 + 2) == _Dst[1] &&
            (((*(uint *)(plVar7 + 1) >> 0x1c & 1) == 0 && (*plVar7 != 0)))))) break;
        iVar6 = ~(uint)lVar4 + iVar3;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove(_Dst,(void *)(lVar2 + (longlong)(iVar3 - iVar6) * 0x10),(longlong)iVar6 << 4);
          iVar3 = *(int *)(param_1 + 0x838);
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 0x838) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar4) goto LAB_1401ba56f;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
    if (bVar5) {
LAB_1401ba56f:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ba590 FUN_1401ba590 body=87 status=ok
// SIG undefined FUN_1401ba590(void)

void FUN_1401ba590(longlong param_1)

{
  FUN_1401ba69c();
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  if (*(int *)(param_1 + 0x7bc) != 0) {
    FUN_1407d9874(param_1 + 0x7b0,0);
  }
  if (*(longlong *)(param_1 + 0xf28) == 0) {
    return;
  }
  FUN_140156df6(param_1 + 0xdf0,0,0);
  return;
}



// FUNCTION 1401ba5e8 FUN_1401ba5e8 body=179 status=ok
// SIG undefined FUN_1401ba5e8(void)

undefined8 * FUN_1401ba5e8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb89588) {
    FUN_144b3d300(&DAT_14cb89588);
    if (DAT_14cb89588 == -1) {
      builtin_wcsncpy(local_28,L"OnCollision",0xc);
      FUN_1446f470e(&DAT_14cb89580,local_28,1);
      _Init_thread_footer(&DAT_14cb89588);
    }
  }
  *param_1 = DAT_14cb89580;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ba69c FUN_1401ba69c body=257 status=ok
// SIG undefined FUN_1401ba69c(void)

void FUN_1401ba69c(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) & 0xf7;
  if (param_1[0x14b] != 0) {
    FUN_1408baeb8();
  }
  if (param_1[0x148] != 0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_149e01e20;
    local_30 = &DAT_14327d7e2;
    local_58[0] = FUN_140d11fbe;
    FUN_140759336(param_1[0x148] + 0x550,local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar2 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar2 = &local_38;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    lVar1 = FUN_1407592a6(param_1);
    if (lVar1 != 0) {
      FUN_1401ba8b2(lVar1,param_1[0x148]);
    }
    *(undefined1 *)((longlong)param_1 + 0x679) = 0;
    (**(code **)(*param_1 + 0xa98))(param_1);
    param_1[0x148] = 0;
  }
  FUN_140757974((longlong)param_1 + 0x59e,param_1,1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ba79e FUN_1401ba79e body=198 status=ok
// SIG undefined FUN_1401ba79e(void)

void FUN_1401ba79e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa70) != 0) {
    *(undefined8 *)(param_1 + 0xa70) = 0;
    FUN_140aeeb5c();
  }
  FUN_1401ba864(param_1 + 0x8b0);
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined1 *)(param_1 + 0x910) = 0;
  if (*(int *)(param_1 + 0x924) < 0) {
    *(undefined4 *)(param_1 + 0x920) = 0;
    FUN_1474aa8c2(param_1 + 0x918,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  if (*(int *)(param_1 + 0x93c) < 0) {
    *(undefined4 *)(param_1 + 0x938) = 0;
    FUN_1474aa930(param_1 + 0x930,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x938) = 0;
  }
  *(undefined4 *)(param_1 + 0xa80) = 0;
  *(undefined8 *)(param_1 + 0x940) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa78) = 0;
  return;
}



// FUNCTION 1401ba864 FUN_1401ba864 body=78 status=ok
// SIG undefined FUN_1401ba864(void)

void FUN_1401ba864(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1474aa7f4(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1474aa862(param_1 + 0x10,0);
  return;
}



// FUNCTION 1401ba8b2 FUN_1401ba8b2 body=297 status=ok
// SIG undefined FUN_1401ba8b2(void)

void FUN_1401ba8b2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  longlong lVar4;
  LPVOID pvVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    if (lVar2 != 0) {
      SRWLock = *(PSRWLOCK *)(lVar2 + 0x218);
      pvVar5 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
      iVar1 = (int)((ulonglong)pvVar5 >> 0x20);
      TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                  (LPVOID)((ulonglong)(iVar1 + 1) << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
      if (iVar1 + (int)pvVar5 == 0) {
        AcquireSRWLockExclusive(SRWLock);
      }
      iVar1 = *(int *)(param_2 + 0x448);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_2 + 0x440);
        lVar6 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar6);
          if (lVar4 != 0) {
            FUN_1401ba9dc(param_1,lVar4);
            FUN_1448b734e(lVar2,lVar4,0);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar1 * 8 != lVar6);
      }
      FUN_1401bac2c(lVar2,param_2);
      pvVar5 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
      uVar7 = (int)((ulonglong)pvVar5 >> 0x20) - 1;
      TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                  (LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
      if (uVar7 + (int)pvVar5 == 0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
    FUN_1448b7762(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1401ba9dc FUN_1401ba9dc body=590 status=ok
// SIG undefined FUN_1401ba9dc(void)

void FUN_1401ba9dc(longlong param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  int iVar2;
  LPVOID pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) && (*(int *)(param_2 + 0x58) != -1))
     && (*(longlong *)(param_1 + 0x38) != 0)) {
    SRWLock = *(PSRWLOCK *)(*(longlong *)(param_1 + 0x38) + 0x218);
    pvVar3 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
    iVar2 = (int)((ulonglong)pvVar3 >> 0x20);
    TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                (LPVOID)((ulonglong)(iVar2 + 1) << 0x20 | (ulonglong)pvVar3 & 0xffffffff));
    if (iVar2 + (int)pvVar3 == 0) {
      AcquireSRWLockExclusive(SRWLock);
    }
    local_70 = param_2;
    if (*(undefined8 **)(param_2 + 0x10) == (undefined8 *)0x0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)**(undefined8 **)(param_2 + 0x10))();
    }
    local_60 = *(undefined4 *)(param_2 + 0x58);
    local_5c = 0;
    uStack_54 = 0;
    local_4c = 0;
    uStack_44 = 0;
    if (DAT_14c992a90 == '\0') {
      FUN_144a61b4f();
    }
    lVar4 = param_2 + 0x78;
    if (*(longlong *)(param_2 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_2 + 0x80);
    }
    if ((longlong)*(int *)(param_2 + 0x88) != 0) {
      lVar5 = (longlong)*(int *)(param_2 + 0x88) * 8;
      lVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      do {
        lVar1 = *(longlong *)(lVar4 + lVar6);
        if (lVar1 != 0) {
          if ((*(byte *)(lVar1 + 0x71 + (ulonglong)((*(uint *)(lVar1 + 8) & 3) == 0) * 8) & 2) != 0)
          {
            uVar11 = (ulonglong)((*(uint *)(lVar1 + 8) & 3) == 0);
            uVar10 = uVar10 | *(uint *)(lVar1 + 0x48 + uVar11 * 8);
            uVar9 = uVar9 | *(uint *)(lVar1 + 0x4c + uVar11 * 8);
            local_5c = CONCAT44(uVar9,uVar10);
            uVar8 = uVar8 | *(uint *)(lVar1 + 0x50 + uVar11 * 8);
            uVar7 = uVar7 | *(uint *)(lVar1 + 0x54 + uVar11 * 8);
            uStack_54 = CONCAT44(uVar7,uVar8);
          }
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 != lVar6);
      lVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      do {
        lVar1 = *(longlong *)(lVar4 + lVar6);
        if (lVar1 != 0) {
          if ((*(byte *)(lVar1 + 0x71 + (ulonglong)((*(uint *)(lVar1 + 8) & 3) == 0) * 8) & 5) != 0)
          {
            uVar11 = (ulonglong)((*(uint *)(lVar1 + 8) & 3) == 0);
            uVar10 = uVar10 | *(uint *)(lVar1 + 0x58 + uVar11 * 8);
            uVar9 = uVar9 | *(uint *)(lVar1 + 0x5c + uVar11 * 8);
            local_4c = CONCAT44(uVar9,uVar10);
            uVar8 = uVar8 | *(uint *)(lVar1 + 0x60 + uVar11 * 8);
            uVar7 = uVar7 | *(uint *)(lVar1 + 100 + uVar11 * 8);
            uStack_44 = CONCAT44(uVar7,uVar8);
          }
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 != lVar6);
    }
    local_3c = 1;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
              (*(longlong **)(param_1 + 0x28),&local_70,*(undefined2 *)(param_2 + 0x5c));
    pvVar3 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
    uVar7 = (int)((ulonglong)pvVar3 >> 0x20) - 1;
    TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                (LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar3 & 0xffffffff));
    if (uVar7 + (int)pvVar3 == 0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bac2c FUN_1401bac2c body=165 status=ok
// SIG undefined FUN_1401bac2c(void)

void FUN_1401bac2c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  **(undefined1 **)(param_2 + 0x20) = 1;
  FUN_1401aa8ae(param_1 + 0x70);
  *(byte *)(param_2 + 0x319) = *(byte *)(param_2 + 0x319) | 0x40;
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *(undefined2 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined2 *)(puVar1 + 8) = 1;
  *puVar1 = &PTR_FUN_149f45dc0;
  puVar1[10] = FUN_142a10410;
  puVar1[0xc] = 0;
  puVar1[0xe] = &PTR_LAB_149f6af30;
  puVar1[0xf] = param_2;
  puVar1[0x10] = param_1;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar1);
  return;
}



// FUNCTION 1401bacd2 FUN_1401bacd2 body=114 status=ok
// SIG undefined FUN_1401bacd2(void)

void FUN_1401bacd2(longlong *param_1,int param_2)

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



// FUNCTION 1401bad44 FUN_1401bad44 body=114 status=ok
// SIG undefined FUN_1401bad44(void)

void FUN_1401bad44(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1401badb6 FUN_1401badb6 body=33 status=ok
// SIG undefined FUN_1401badb6(void)

undefined1 FUN_1401badb6(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1401badd8();
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x53c);
  }
  return uVar2;
}



// FUNCTION 1401badd8 FUN_1401badd8 body=173 status=ok
// SIG undefined FUN_1401badd8(void)

undefined8 FUN_1401badd8(longlong param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x750) == '\0') {
    piVar3 = &DAT_14c9485f0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      piVar3 = *(int **)(param_1 + 8);
    }
    if (((*piVar3 == 0) || (iVar1 = piVar3[1], iVar1 == 0)) || (*piVar3 == DAT_14c948000)) {
LAB_1401bae69:
      local_10 = DAT_14c948620;
      local_18 = DAT_14c948618;
    }
    else {
      if ((iVar1 < 2) && (piVar3[9] < 1)) {
        piVar3 = piVar3 + 2;
      }
      else {
        piVar3 = *(int **)(piVar3 + 6);
      }
      if (iVar1 < 1) goto LAB_1401bae69;
      local_10 = piVar3[2];
      local_18 = *(undefined8 *)piVar3;
    }
    cVar2 = FUN_1401bae86(&local_18);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_1401bae4d;
    }
  }
  uVar4 = 1;
LAB_1401bae4d:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bae86 FUN_1401bae86 body=90 status=ok
// SIG undefined FUN_1401bae86(void)

bool FUN_1401bae86(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((DAT_14c872bf2 == '\x01') && (DAT_14cb80ef0 != DAT_14cb80f1c)) {
    if (param_1[2] == 0) {
      uVar1 = *param_1;
    }
    else {
      uVar1 = FUN_144a78877(*param_1,param_1[2]);
    }
    iVar2 = FUN_1407a7398(&DAT_14cb80ee8,uVar1,param_1);
    bVar3 = iVar2 != -1;
  }
  return bVar3;
}



// FUNCTION 1401baee0 FUN_1401baee0 body=93 status=ok
// SIG undefined FUN_1401baee0(void)

void FUN_1401baee0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1401bb238();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401baf3e FUN_1401baf3e body=761 status=ok
// SIG undefined FUN_1401baf3e(void)

ulonglong * FUN_1401baf3e(longlong param_1,ulonglong *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  FUN_144ae9578(*(undefined8 *)(param_1 + 0x2a0),param_3,param_1 + 0x180);
  lVar3 = *(longlong *)(param_3 + 8);
  param_2[1] = 0;
  param_2[2] = 0;
  bVar1 = *(byte *)(param_1 + 0x77);
  cVar4 = FUN_14480c900(param_1,param_3);
  uVar13 = 0;
  uVar7 = 0;
  if (cVar4 != '\0') {
    uVar7 = *(uint *)(lVar3 + 0x50) >> 0x1c & 4;
  }
  cVar4 = FUN_144914152(param_1);
  if (cVar4 != '\0') {
    uVar13 = ~(uint)*(byte *)(param_1 + 0x2d7) >> 3 & 8;
  }
  if (((*(byte *)(param_1 + 0x2cc) & 0x10) != 0) || (uVar11 = 0, DAT_14c761b2c == '\x01')) {
    uVar11 = 0;
    if ((*(char *)((longlong)*(longlong **)(param_1 + 0x2a0) + 0x5e) == '\x01') &&
       ((((iVar5 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x90))(),
          (int)(uint)*(byte *)(*(longlong *)(param_1 + 0x2a8) + 0x1b) <= iVar5 &&
          ((*(byte *)(param_1 + 0x6c) & 0x20) == 0)) && ((*(byte *)(param_1 + 0x77) & 0x40) == 0))
        && ((*(longlong *)(param_1 + 0x220) == 0 && (*(longlong *)(param_1 + 0x228) == 0)))))) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x120) == 0) {
        uVar11 = 1;
      }
      else {
        uVar11 = (uint)((*(byte *)(param_1 + 0x77) & 0x20) == 0);
      }
    }
  }
  if (DAT_14c761ae8 - 1U < 3) {
    uVar8 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  else {
    uVar8 = 0;
  }
  bVar2 = *(byte *)(param_1 + 0x6e);
  uVar7 = (bVar2 & 8) * 0x10 + uVar8 + (uVar13 | uVar7 | (bVar1 & 0x40) << 10) + uVar11 * 2;
  cVar4 = *(char *)(param_1 + 0x82);
  bVar1 = *(byte *)(param_1 + 0x72);
  uVar10 = *(ulonglong *)(param_1 + 0x2d0);
  *param_2 = uVar10;
  uVar14 = uVar10 >> 0x20;
  bVar12 = (byte)(uVar10 >> 0x20);
  if (((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0))
      || (uVar13 = 0, (*(byte *)(param_1 + 0x75) & 200) != 0)) && (uVar13 = 0, (uVar14 & 2) != 0)) {
    uVar13 = uVar7 >> 3 & 0x10;
  }
  uVar8 = 0;
  if ((uVar14 & 4) != 0) {
    uVar8 = (uint)(*(longlong *)(param_1 + 0x220) != 0) << 0x11;
  }
  if (((uVar10 >> 0x28 & 2) != 0) || (uVar9 = 0, (uVar10 >> 0x28 & 1) != 0 || 0x3f < bVar12)) {
    uVar9 = (uint)(*(longlong *)(param_1 + 0x220) != 0) << 0x12;
  }
  bVar6 = 4;
  if ((uVar14 & 4) == 0) {
    bVar6 = (*(longlong *)(param_1 + 0x220) != 0) << 2;
  }
  *(byte *)((longlong)param_2 + 4) = bVar12 & 0xfb | bVar6;
  *(bool *)(param_2 + 1) = *(longlong *)(param_1 + 0x228) != 0;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    uVar14 = (longlong)*(int *)(param_1 + 0xf0) * 8;
    uVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar10) == *(longlong *)(param_3 + 0x4c0)) {
        bVar15 = true;
        if ((int)(~uVar10 >> 3) != 0) goto LAB_1401bb1c9;
        break;
      }
      uVar10 = uVar10 + 8;
    } while (uVar14 != uVar10);
    uVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar10) == *(longlong *)(param_3 + 0x30b0))
      {
        bVar15 = (int)(~uVar10 >> 3) != 0;
        goto LAB_1401bb1c9;
      }
      uVar10 = uVar10 + 8;
    } while (uVar14 != uVar10);
  }
  bVar15 = false;
LAB_1401bb1c9:
  *(uint *)(param_2 + 2) =
       (uVar7 | uVar13 | uVar8 | uVar9 |
        (uint)(byte)((*(byte *)(param_1 + 0x73) & 0x60) != 0 & bVar15) << 0x14 |
        (uint)(cVar4 != '\x01') << 0xd | (bVar1 & 1) << 0xe | (uint)((bVar2 & 0xc) != 0) << 6 |
       uVar11) ^ 2;
  return param_2;
}



// FUNCTION 1401bb238 FUN_1401bb238 body=469 status=ok
// SIG undefined FUN_1401bb238(void)

void FUN_1401bb238(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401bb368:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401bb3a5:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401bb2a2;
LAB_1401bb297:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401bb2a2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001401bb2cf;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401bb325:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401bb3a5;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401bb368;
code_r0x0001401bb2cf:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401bb325;
    }
  }
  goto LAB_1401bb297;
}



// FUNCTION 1401bb40e FUN_1401bb40e body=93 status=ok
// SIG undefined FUN_1401bb40e(void)

void FUN_1401bb40e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_14007d692();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401bb46c FUN_1401bb46c body=93 status=ok
// SIG undefined FUN_1401bb46c(void)

void FUN_1401bb46c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_140110556();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401bb4ca FUN_1401bb4ca body=14 status=ok
// SIG undefined FUN_1401bb4ca(void)

void FUN_1401bb4ca(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1401bb4d8();
    return;
  }
  return;
}



// FUNCTION 1401bb4d8 FUN_1401bb4d8 body=450 status=ok
// SIG undefined FUN_1401bb4d8(void)

void FUN_1401bb4d8(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401bb5f3:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401bb630:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401bb52e;
LAB_1401bb523:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401bb52e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001401bb55a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401bb5b0:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401bb630;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401bb5f3;
code_r0x0001401bb55a:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401bb5b0;
    }
  }
  goto LAB_1401bb523;
}



// FUNCTION 1401bb69a FUN_1401bb69a body=153 status=ok
// SIG undefined FUN_1401bb69a(void)

undefined1 * FUN_1401bb69a(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  FUN_1401bb734(param_1 + 8,param_2 + 8);
  param_1[0x138] = param_2[0x138];
  uVar3 = *(undefined8 *)(param_2 + 0x140);
  lVar4 = *(longlong *)(param_2 + 0x148);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = uVar3;
  *(longlong *)(param_1 + 0x148) = lVar4;
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
  FUN_1401bb840(param_1 + 0x150,param_2 + 0x150);
  return param_1;
}



// FUNCTION 1401bb734 FUN_1401bb734 body=88 status=ok
// SIG undefined FUN_1401bb734(void)

longlong FUN_1401bb734(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar1 = param_1;
    }
    FUN_1447157bd(lVar1,*(undefined4 *)(param_1 + 0x128));
    lVar1 = *(longlong *)(param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x120) == 0) {
      lVar1 = param_2;
    }
    FUN_1401bb78c(param_1,lVar1,*(undefined4 *)(param_2 + 0x128),*(undefined4 *)(param_1 + 300));
  }
  return param_1;
}



// FUNCTION 1401bb78c FUN_1401bb78c body=95 status=ok
// SIG undefined FUN_1401bb78c(void)

void FUN_1401bb78c(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x128) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_1401bba28(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar1 = param_1;
    }
    FUN_1401bb7eb(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 300) = 4;
  return;
}



// FUNCTION 1401bb7eb FUN_1401bb7eb body=85 status=ok
// SIG undefined FUN_1401bb7eb(void)

void FUN_1401bb7eb(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      *(undefined8 *)(param_1 + 0x30 + lVar9) = *(undefined8 *)(param_2 + 0x30 + lVar9);
      uVar4 = *(undefined8 *)(param_2 + lVar9);
      uVar5 = ((undefined8 *)(param_2 + lVar9))[1];
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar9);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + lVar9) = uVar4;
      ((undefined8 *)(param_1 + lVar9))[1] = uVar5;
      *(undefined8 *)(param_1 + 0x38 + lVar9) = *(undefined8 *)(param_2 + 0x38 + lVar9);
      lVar3 = *(longlong *)(param_2 + 0x40 + lVar9);
      *(longlong *)(param_1 + 0x40 + lVar9) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      lVar9 = lVar9 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401bb840 FUN_1401bb840 body=93 status=ok
// SIG undefined FUN_1401bb840(void)

undefined8 * FUN_1401bb840(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1447fa2ac(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1401bb8da(param_1,iVar1);
      FUN_1401bb89d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1401bb89d FUN_1401bb89d body=60 status=ok
// SIG undefined FUN_1401bb89d(void)

void FUN_1401bb89d(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0x10;
    do {
      cVar1 = *(char *)(param_2 + lVar3);
      *(char *)(param_1 + lVar3) = cVar1;
      if (cVar1 == '\x01') {
        uVar2 = *(undefined8 *)(param_2 + lVar3 + -8);
        *(undefined8 *)(param_1 + lVar3 + -0x10) = *(undefined8 *)(param_2 + lVar3 + -0x10);
        *(undefined8 *)(param_1 + lVar3 + -8) = uVar2;
      }
      lVar3 = lVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401bb8da FUN_1401bb8da body=334 status=ok
// SIG undefined FUN_1401bb8da(void)

void FUN_1401bb8da(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401bb94c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1401bb94c:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1401bba28 FUN_1401bba28 body=345 status=ok
// SIG undefined FUN_1401bba28(void)

void FUN_1401bba28(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 4;
    if (4 < param_2) {
      uVar4 = (longlong)(int)param_2 * 0x48;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar1 = uVar4 + 0xf;
          if (uVar4 < 0x7ff1) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
          }
          else {
            if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
              bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
              uVar6 = 0x32;
              if (0x32 < bVar3) {
                uVar6 = (ulonglong)bVar3;
              }
              uVar8 = 0x32 - (ulonglong)bVar3;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401bbacf;
                lVar2 = uVar6 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar2 != 0x33);
            }
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
LAB_1401bbacf:
      iVar5 = (int)(uVar4 / 0x48);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar5) {
        iVar7 = iVar5;
      }
    }
  }
  if (param_3 < iVar7) {
    FUN_14022ee7e(param_1,0,iVar7,0x48);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 300) = param_3;
  return;
}



// FUNCTION 1401bbb82 FUN_1401bbb82 body=397 status=ok
// SIG undefined FUN_1401bbb82(void)

longlong FUN_1401bbb82(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  float *local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf9 | 2;
  fVar6 = param_2[10] * param_2[1];
  fVar4 = *param_2 * param_2[8];
  fVar5 = param_2[1] * param_2[9];
  fVar3 = *param_2 * param_2[7];
  local_8c = param_2[0xc];
  local_74 = fVar4 + fVar6 + local_8c;
  local_90 = param_2[0xb];
  local_78 = fVar3 + fVar5 + local_90;
  local_98 = &local_78;
  fVar2 = param_2[8] * 0.0;
  fVar1 = param_2[7] * 0.0;
  local_7c = fVar6 + fVar2 + local_8c;
  local_80 = fVar5 + fVar1 + local_90;
  fVar5 = param_2[10] * 0.0;
  fVar6 = param_2[9] * 0.0;
  local_84 = fVar4 + fVar5 + local_8c;
  local_88 = fVar3 + fVar6 + local_90;
  local_8c = fVar5 + fVar2 + local_8c;
  local_90 = fVar6 + fVar1 + local_90;
  FUN_1401bbd10();
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bbd10 FUN_1401bbd10 body=300 status=ok
// SIG undefined FUN_1401bbd10(void)

void FUN_1401bbd10(float *param_1,float *param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 & 0xfe;
  if (0.1 < ABS(*param_2 - *param_4)) {
    if (0.1 < ABS(param_2[1] - param_4[1])) goto LAB_1401bbe20;
    fVar2 = *param_4 - *param_5;
  }
  else {
    fVar2 = param_4[1] - param_5[1];
  }
  if (ABS(fVar2) <= 0.1) {
    *(byte *)(param_1 + 8) = bVar1 | 1;
    auVar4 = blendps(ZEXT416((uint)(param_5[1] + 0.5)),ZEXT816(0),0xe);
    auVar5 = roundps(auVar4,auVar4,1);
    auVar4 = blendps(ZEXT416((uint)(*param_5 + 0.5)),ZEXT816(0),0xe);
    auVar7 = roundps(auVar4,auVar4,1);
    auVar4 = blendps(ZEXT416((uint)(param_2[1] + 0.5)),ZEXT816(0),0xe);
    auVar8 = roundps(auVar4,auVar4,1);
    auVar4 = blendps(ZEXT416((uint)(*param_2 + 0.5)),ZEXT816(0),0xe);
    auVar4 = roundps(auVar4,auVar4,1);
    fVar3 = auVar4._0_4_;
    fVar6 = auVar7._0_4_;
    fVar2 = fVar3;
    if (fVar6 <= fVar3) {
      fVar2 = fVar6;
    }
    if (fVar3 <= fVar6) {
      auVar4._0_4_ = fVar6;
    }
    fVar3 = auVar5._0_4_;
    auVar5 = auVar8;
    if (fVar3 <= auVar8._0_4_) {
      auVar5._4_12_ = auVar8._4_12_;
      auVar5._0_4_ = fVar3;
    }
    if (auVar8._0_4_ <= fVar3) {
      auVar8._0_4_ = fVar3;
    }
    *param_1 = fVar2;
    param_1[1] = auVar5._0_4_;
    param_1[2] = auVar4._0_4_;
    param_1[3] = auVar5._0_4_;
    param_1[4] = fVar2;
    param_1[5] = auVar8._0_4_;
    param_1[6] = auVar4._0_4_;
    param_1[7] = auVar8._0_4_;
    return;
  }
LAB_1401bbe20:
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = *param_3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)param_5;
  return;
}



// FUNCTION 1401bbe3c FUN_1401bbe3c body=229 status=ok
// SIG undefined FUN_1401bbe3c(void)

void FUN_1401bbe3c(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar10;
  undefined8 uVar11;
  
  if ((undefined4 *)(param_1 + 0x118) != param_2) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0xc);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar11 = *(undefined8 *)(param_2 + 4);
    uVar8 = *(undefined8 *)(param_2 + 6);
    uVar5 = param_2[9];
    uVar6 = param_2[10];
    uVar7 = param_2[0xb];
    *(undefined4 *)(param_1 + 0x138) = param_2[8];
    *(undefined4 *)(param_1 + 0x13c) = uVar5;
    *(undefined4 *)(param_1 + 0x140) = uVar6;
    *(undefined4 *)(param_1 + 0x144) = uVar7;
    *(undefined8 *)(param_1 + 0x128) = uVar11;
    *(undefined8 *)(param_1 + 0x130) = uVar8;
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    *(undefined4 *)(param_1 + 0x11c) = uVar2;
    *(undefined4 *)(param_1 + 0x120) = uVar3;
    *(undefined4 *)(param_1 + 0x124) = uVar4;
  }
  (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x148))(param_1 + -0xc0,param_4);
  plVar10 = *(longlong **)(param_1 + -0x30);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x38))(plVar10,param_4);
  }
  if (*(longlong **)(param_1 + -0x90) != (longlong *)0x0) {
    lVar9 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x30))();
    if (lVar9 != 0) {
      lVar9 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x30))();
      if (*(longlong *)(lVar9 + 0x218) != 0) {
        plVar10 = *(longlong **)(DAT_14c98e618 + 0x20);
        lVar9 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x30))();
        uVar11 = *(undefined8 *)(lVar9 + 0x218);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar10 + 0x168);
        goto LAB_1401bbefa;
      }
    }
  }
  plVar10 = *(longlong **)(DAT_14c98e618 + 0x20);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar10 + 0x168);
  uVar11 = 0;
LAB_1401bbefa:
                    /* WARNING: Could not recover jumptable at 0x0001401bbf05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar10,uVar11);
  return;
}



// FUNCTION 1401bbf24 FUN_1401bbf24 body=38 status=ok
// SIG undefined FUN_1401bbf24(void)

undefined8 FUN_1401bbf24(undefined8 param_1,int param_2)

{
  FUN_1401bbf6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401bbf6a FUN_1401bbf6a body=493 status=ok
// SIG undefined FUN_1401bbf6a(void)

void FUN_1401bbf6a(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  double dVar3;
  longlong *plVar4;
  byte bVar5;
  undefined1 auStack_e8 [32];
  double local_c8;
  undefined1 local_c0 [16];
  byte *local_b0;
  undefined1 local_a1;
  undefined1 *local_a0;
  byte **local_98;
  LARGE_INTEGER local_90;
  undefined1 *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_149e699b0;
  FUN_1401bc158();
  QueryPerformanceCounter(&local_90);
  bVar5 = *(byte *)(param_1 + 8);
  if ((bVar5 & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 8);
    dVar3 = (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0 + 4294967.295;
    do {
      if ((dVar3 < INFINITY) &&
         (QueryPerformanceCounter(&local_90),
         dVar3 <= (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0)) break;
      if ((bVar5 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar5 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar5 == bVar2) goto LAB_1401bc0d0;
      }
      else {
LAB_1401bc0d0:
        local_88 = &local_a1;
        local_90.QuadPart = (LONGLONG)&DAT_142743e10;
        local_98 = &local_b0;
        local_a0 = &LAB_142743e12;
        local_c8 = dVar3;
        local_b0 = pbVar1;
        FUN_1456d3e9c(local_c0,pbVar1,&local_a0,&local_90);
      }
      bVar5 = *pbVar1;
    } while ((bVar5 & 1) == 0);
  }
  if (param_1[10] != 0) {
    plVar4 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = param_1 + 5;
  FUN_1448ba902(plVar4);
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_1447ab16c(plVar4,0);
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
  FUN_1400d6814(param_1 + 2);
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401bc158 FUN_1401bc158 body=118 status=ok
// SIG undefined FUN_1401bc158(void)

ulonglong FUN_1401bc158(longlong param_1)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar2;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_140204ecc(param_1,3);
    uVar2 = CONCAT71(uVar3,1);
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    iVar4 = *(int *)(param_1 + 0x38);
    uVar2 = CONCAT71(uVar3,1);
    if (iVar4 != 0) {
      plVar1 = *(longlong **)(param_1 + 0x28);
      uVar6 = 0;
      do {
        FUN_1401bc1ce(uVar6 * 0x18 + *plVar1);
        uVar5 = (int)uVar6 + 1;
        plVar1 = plVar1 + (7 < uVar5);
        uVar6 = (ulonglong)uVar5;
        if (7 < uVar5) {
          uVar6 = 0;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1401bc1ce FUN_1401bc1ce body=74 status=ok
// SIG undefined FUN_1401bc1ce(void)

bool FUN_1401bc1ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = DAT_14c844ee0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xb4);
  }
  if (((iVar1 == 1) && (DAT_14c844ed8 != (undefined8 *)0x0)) && (*(longlong *)(param_1 + 0x10) != 0)
     ) {
    FUN_1402e42a2(*DAT_14c844ed8);
  }
  return iVar1 == 1;
}



// FUNCTION 1401bc218 FUN_1401bc218 body=55 status=ok
// SIG undefined FUN_1401bc218(void)

void FUN_1401bc218(longlong *param_1)

{
  FUN_1401bc250(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401bc250 FUN_1401bc250 body=121 status=ok
// SIG undefined FUN_1401bc250(void)

void FUN_1401bc250(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 1401bc2ca FUN_1401bc2ca body=96 status=ok
// SIG undefined FUN_1401bc2ca(void)

void FUN_1401bc2ca(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar3;
    FUN_1456d7d04(param_1,*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 1401bc32a FUN_1401bc32a body=370 status=ok
// SIG undefined FUN_1401bc32a(void)

void FUN_1401bc32a(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_4 < *param_3) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    do {
      if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
        return;
      }
      uVar6 = (ulonglong)(int)param_2[1];
      if ((longlong)uVar6 < 1) {
        return;
      }
      lVar3 = *param_3;
      if (lVar3 <= param_4) {
        return;
      }
      lVar7 = 0x7fffffffffffffff;
      while ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
        lVar9 = (longlong)*(int *)(*param_2 + -4 + uVar6 * 4);
        if (lVar9 != -1) {
          lVar4 = *(longlong *)(lVar2 + 0x10);
          lVar9 = lVar9 * 0xa8;
          cVar1 = *(char *)(lVar4 + 0x79 + lVar9);
          cVar8 = (char)*(undefined4 *)(lVar4 + 0x7c + lVar9);
          if (cVar8 < cVar1) {
            cVar8 = cVar1;
          }
          cVar1 = *(char *)(lVar4 + 0x81 + lVar9);
          lVar10 = (longlong)cVar1;
          if (cVar8 < cVar1) {
            plVar5 = (longlong *)(lVar4 + lVar9);
            cVar8 = *(char *)((longlong)plVar5 + 0x84);
            if ((((cVar8 == '\x01') || (*(char *)(lVar2 + 0x251) == '\0')) ||
                (lVar7 == 0x7fffffffffffffff)) ||
               (lVar7 <= (longlong)*(int *)((longlong)plVar5 + lVar10 * 4 + 0x14) -
                         (longlong)*(int *)((longlong)plVar5 + lVar10 * 4 + 0x10))) {
              if (*(char *)((longlong)plVar5 + 0x7e) < '\x01') {
                if (*plVar5 == 0) {
                  lVar9 = 0;
                }
                else {
                  *(char *)((longlong)plVar5 + 0x81) = cVar1 + -1;
                  lVar9 = (longlong)*(int *)((longlong)plVar5 + lVar10 * 4 + 0x10) -
                          (longlong)*(int *)((longlong)plVar5 + lVar10 * 4 + 0xc);
                }
                *param_3 = *param_3 - lVar9;
                if (((cVar8 == '\x01') && (0 < lVar9)) &&
                   ((*(char *)(lVar2 + 0x251) != '\0' && (lVar9 <= lVar7)))) {
                  lVar7 = lVar9;
                }
              }
              else {
                *(char *)((longlong)plVar5 + 0x7e) = *(char *)((longlong)plVar5 + 0x7e) + -1;
              }
            }
          }
          else {
            *(undefined4 *)(*param_2 + -4 + uVar6 * 4) = 0xffffffff;
          }
        }
        lVar9 = *param_3;
        if ((uVar6 < 2) || (uVar6 = uVar6 - 1, lVar9 <= param_4)) goto LAB_1401bc464;
      }
      lVar9 = *param_3;
LAB_1401bc464:
    } while (lVar3 != lVar9 && param_4 < lVar9);
  }
  return;
}



// FUNCTION 1401bc49c FUN_1401bc49c body=435 status=ok
// SIG undefined FUN_1401bc49c(void)

void FUN_1401bc49c(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_58;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if ((0 < *(int *)(lVar2 + 0x224)) && (param_4 < *param_3)) {
    iVar4 = 0;
    while ((((*(byte *)(param_1 + 0xe0) & 1) == 0 &&
            (uVar9 = (ulonglong)(int)param_2[1], 0 < (longlong)uVar9)) &&
           (lVar3 = *param_3, param_4 < lVar3))) {
      iVar5 = iVar4 + 1;
      local_58 = 0x7fffffffffffffff;
      while ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
        lVar6 = (longlong)*(int *)(*param_2 + -4 + uVar9 * 4);
        if (lVar6 != -1) {
          lVar10 = *(longlong *)(lVar2 + 0x10);
          lVar6 = lVar6 * 0xa8;
          cVar1 = *(char *)(lVar10 + 0x79 + lVar6);
          cVar8 = (char)*(undefined4 *)(lVar10 + 0x7c + lVar6);
          if (cVar8 < cVar1) {
            cVar8 = cVar1;
          }
          cVar1 = *(char *)(lVar10 + 0x81 + lVar6);
          if (cVar8 < cVar1) {
            lVar10 = lVar10 + lVar6;
            if ((*(char *)(lVar10 + 0x7d) - iVar4) + *(int *)(lVar10 + 0x70) <= (int)cVar1) {
              iVar7 = iVar5 - *(int *)(lVar10 + 0x70);
              if (*(char *)(lVar2 + 0x251) == '\x01') {
                cVar1 = *(char *)(lVar10 + 0x84);
                lVar6 = FUN_147d648e8(lVar10,iVar7);
                if (lVar6 == 0) goto LAB_1401bc5e2;
                if (cVar1 == '\x01') {
                  if (lVar6 <= local_58) {
                    local_58 = lVar6;
                  }
                }
                else if (local_58 != 0x7fffffffffffffff && lVar6 < local_58) goto LAB_1401bc5e2;
              }
              lVar6 = FUN_147d64844(lVar10,iVar7);
              *param_3 = *param_3 - lVar6;
            }
          }
          else {
            *(undefined4 *)(*param_2 + -4 + uVar9 * 4) = 0xffffffff;
          }
        }
LAB_1401bc5e2:
        lVar6 = *param_3;
        if ((uVar9 < 2) || (uVar9 = uVar9 - 1, lVar6 <= param_4)) goto LAB_1401bc61d;
      }
      lVar6 = *param_3;
LAB_1401bc61d:
      if (lVar3 == lVar6) {
        return;
      }
      if (lVar6 <= param_4) {
        return;
      }
      iVar4 = iVar5;
      if (*(int *)(lVar2 + 0x224) <= iVar5) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401bc66a FUN_1401bc66a body=338 status=ok
// SIG undefined FUN_1401bc66a(void)

void FUN_1401bc66a(longlong *param_1,double *param_2,float *param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  float local_4c;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  *param_3 = 2.0;
  lVar7 = param_1[0x16];
  if ((((lVar7 != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) &&
      (*(longlong *)(lVar7 + 0x218) != 0)) &&
     (cVar5 = (**(code **)(*param_1 + 0xc58))(param_1), cVar5 != '\0')) {
    local_48 = param_1[0x4c];
    lStack_40 = param_1[0x4d];
    local_38 = param_1[0x4e];
    local_60 = local_54;
    local_68 = local_50;
    (**(code **)(**(longlong **)(lVar7 + 0x218) + 0x370))
              (*(longlong **)(lVar7 + 0x218),&local_48,param_2,&local_4c);
    dVar1 = (double)local_4c;
    *param_2 = *param_2 * dVar1;
    param_2[1] = param_2[1] * dVar1;
    param_2[2] = dVar1 * param_2[2];
    iVar6 = rand();
    *param_3 = (float)(iVar6 % 0x14) * 0.1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401bc7bd FUN_1401bc7bd body=857 status=ok
// SIG undefined FUN_1401bc7bd(void)

void FUN_1401bc7bd(ulonglong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_108 [36];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = param_1;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar8 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_2[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ulonglong *)(*param_2 + (longlong)iVar8 * 0x10) == param_1) goto LAB_1401bc906;
        iVar8 = *(int *)((longlong)iVar8 * 0x10 + *param_2 + 8);
      } while (iVar8 != -1);
    }
  }
  uVar14 = 0;
  FUN_1401bcf08(param_2,local_98,&local_c8,0);
  if ((char)param_4 != '\0') {
    FUN_1448bf83d(local_c8,param_2,param_3,1);
  }
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1401bd540(local_c8);
  iVar8 = local_70;
  uVar11 = 1;
  iVar13 = 0;
  iVar10 = 0;
  if (local_70 != 0) {
    puVar5 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar5 = local_88;
    }
    uVar2 = *puVar5;
    if (uVar2 == 0) {
      iVar10 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar10 = local_70 + -1;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar11 = uVar14;
      }
      do {
        if (uVar11 == uVar14) goto LAB_1401bc8e0;
        iVar13 = iVar13 + 0x20;
        uVar2 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar14 = 0;
    }
    uVar11 = (ulonglong)(-uVar2 & uVar2);
    uVar1 = uVar11 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar10 = (iVar13 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar10) {
      iVar10 = local_70;
    }
  }
  if (iVar10 != local_70) {
    uVar2 = 0xffffffff;
    local_e0 = param_3;
    do {
      local_d8 = *(undefined8 *)(local_98[0] + (longlong)iVar10 * 0x14);
      local_d0 = *(undefined4 *)(local_98[0] + 8 + (longlong)iVar10 * 0x14);
      local_e4 = uVar2;
      FUN_1448075d0(local_c0,&local_d8);
      lVar4 = FUN_14060eaf6(local_c0);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (lVar4 != 0) {
        FUN_1401bc7bd(lVar4,param_2,local_e0,param_4);
      }
      uVar2 = local_e4 & ~(uint)uVar11;
      puVar5 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar5 = local_88;
      }
      iVar10 = (int)uVar14;
      lVar4 = (longlong)iVar10;
      uVar9 = puVar5[lVar4] & uVar2;
      if (uVar9 == 0) {
        iVar6 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar6 = local_70 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar12 = 0;
          do {
            uVar9 = puVar5[lVar4 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar10 + (int)lVar12 + 1);
              uVar2 = 0xffffffff;
              goto LAB_1401bca1d;
            }
            iVar13 = iVar13 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar4 != lVar12);
          uVar2 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar14 = (ulonglong)(iVar10 + 1);
        iVar10 = local_70;
      }
      else {
LAB_1401bca1d:
        uVar11 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar11 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar10 = (iVar13 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar10) {
          iVar10 = local_70;
        }
      }
    } while (iVar10 != iVar8);
  }
LAB_1401bc8e0:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(local_98);
LAB_1401bc906:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401bcb18 FUN_1401bcb18 body=320 status=ok
// SIG undefined FUN_1401bcb18(void)

undefined4 *
FUN_1401bcb18(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401bd8ba(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1401bcd7e(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1401bdd48(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bcc5a FUN_1401bcc5a body=55 status=ok
// SIG undefined FUN_1401bcc5a(void)

void FUN_1401bcc5a(longlong *param_1)

{
  FUN_1401bce10(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401bcc92 FUN_1401bcc92 body=55 status=ok
// SIG undefined FUN_1401bcc92(void)

void FUN_1401bcc92(longlong *param_1)

{
  FUN_1401bce8c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401bccca FUN_1401bccca body=55 status=ok
// SIG undefined FUN_1401bccca(void)

void FUN_1401bccca(longlong *param_1)

{
  FUN_1401bcd02(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401bcd02 FUN_1401bcd02 body=123 status=ok
// SIG undefined FUN_1401bcd02(void)

void FUN_1401bcd02(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 1401bcd7e FUN_1401bcd7e body=146 status=ok
// SIG undefined FUN_1401bcd7e(void)

void FUN_1401bcd7e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_148911fec(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1401bcde9;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1401bcde9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1401bce10 FUN_1401bce10 body=123 status=ok
// SIG undefined FUN_1401bce10(void)

void FUN_1401bce10(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1401bce8c FUN_1401bce8c body=123 status=ok
// SIG undefined FUN_1401bce8c(void)

void FUN_1401bce8c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1401bcf08 FUN_1401bcf08 body=335 status=ok
// SIG undefined FUN_1401bcf08(void)

undefined4 *
FUN_1401bcf08(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401bd35a(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1401bd058(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1401bdaa0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bd058 FUN_1401bd058 body=149 status=ok
// SIG undefined FUN_1401bd058(void)

void FUN_1401bd058(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_148911f62(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1401bd0c2;
    }
  }
  uVar1 = 0;
LAB_1401bd0c2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1401bd0ed FUN_1401bd0ed body=620 status=ok
// SIG undefined FUN_1401bd0ed(void)

void FUN_1401bd0ed(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  longlong *local_a0;
  undefined1 local_94 [12];
  undefined8 local_88;
  undefined1 local_7c [12];
  ulonglong local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a1 = param_4;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    pcVar7 = (char *)*param_1;
    pcVar8 = pcVar7 + (longlong)*(int *)(param_1 + 1) * 0x30;
    local_a0 = param_3 + 7;
    do {
      if (*pcVar7 == '\0') {
        if (*(int *)(pcVar7 + 0x20) == 0x2000) {
          local_88 = *(undefined8 *)(pcVar7 + 0x18);
          FUN_1401533ba(local_94,&local_88,1);
          FUN_1448075d0(local_70,local_94);
          if (((DAT_14cb86df8 == 0) || (uVar2 = FUN_144837462(DAT_14cb86df8,local_70), uVar2 == 0))
             || (*(char *)(uVar2 + 0x58) == '\0')) {
            uVar2 = 0;
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          local_70[0] = uVar2;
          if (uVar2 != 0) {
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              uVar1 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
              uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
              plVar3 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar3 = local_a0;
              }
              iVar5 = *(int *)((longlong)plVar3 +
                              (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
              if (iVar5 != -1) {
                do {
                  if (*(ulonglong *)(*param_3 + (longlong)iVar5 * 0x10) == uVar2)
                  goto LAB_1401bd2a1;
                  iVar5 = *(int *)((longlong)iVar5 * 0x10 + *param_3 + 8);
                } while (iVar5 != -1);
              }
            }
            FUN_1401bcb18(param_3,&local_88,local_70,0);
            FUN_1401bd0ed(local_70[0] + 0x78,param_2,param_3);
            iVar5 = *(int *)(local_70[0] + 0x68);
            if ((longlong)iVar5 != 0) {
              lVar4 = *(longlong *)(local_70[0] + 0x60);
              lVar6 = 0;
              do {
                FUN_1401bc7bd(*(undefined8 *)(lVar4 + lVar6),param_2,param_3);
                lVar6 = lVar6 + 8;
              } while ((longlong)iVar5 * 8 != lVar6);
            }
          }
        }
        else if (*(int *)(pcVar7 + 0x20) == 0x2001) {
          local_88 = *(undefined8 *)(pcVar7 + 0x18);
          FUN_1401533ba(local_7c,&local_88,1);
          FUN_1448075d0(local_70,local_7c);
          lVar4 = FUN_14060eaf6(local_70);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (lVar4 != 0) {
            FUN_1401bc7bd(lVar4,param_2,param_3,local_a1);
          }
        }
      }
LAB_1401bd2a1:
      pcVar7 = pcVar7 + 0x30;
    } while (pcVar7 != pcVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401bd35a FUN_1401bd35a body=485 status=ok
// SIG undefined FUN_1401bd35a(void)

int * FUN_1401bd35a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1446efaca(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1401bd540 FUN_1401bd540 body=608 status=ok
// SIG undefined FUN_1401bd540(void)

void FUN_1401bd540(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x4d0);
  if ((longlong)iVar2 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x4c8);
    lVar14 = 0;
    do {
      lVar4 = *(longlong *)(lVar13 + lVar14);
      if (lVar4 != 0) {
        puVar10 = *(undefined4 **)(lVar4 + 8);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = &DAT_14c9485f0;
        }
        FUN_144a7660c(puVar10,local_54,1);
        FUN_1409612f0(param_2,local_58,local_54,0);
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar2 * 8 != lVar14);
  }
  iVar2 = *(int *)(param_1 + 0x3d0);
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x3c8);
    if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x3b8);
    }
    uVar16 = *puVar6;
    if (uVar16 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_1401bd6d7;
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar6[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar16 = 0xffffffff;
    do {
      plVar7 = (longlong *)
               FUN_1401bd7a2(*(undefined8 *)
                              (*(longlong *)(param_1 + 0x3a8) + 0x10 + (longlong)iVar5 * 0x20));
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x48))(plVar7,param_2);
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar6 = *(uint **)(param_1 + 0x3c8);
      if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x3b8);
      }
      iVar3 = *(int *)(param_1 + 0x3d0);
      iVar5 = (int)uVar17;
      lVar13 = (longlong)iVar5;
      uVar11 = puVar6[lVar13] & uVar16;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar14 = 0;
          do {
            uVar11 = puVar6[lVar13 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar17 = (ulonglong)(iVar5 + (int)lVar14 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1401bd6a8;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar13 != lVar14);
          uVar16 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar17 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1401bd6a8:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_1401bd6d7:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401bd7a2 FUN_1401bd7a2 body=137 status=ok
// SIG undefined FUN_1401bd7a2(void)

undefined8 FUN_1401bd7a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401bd82c((ulonglong)((uint)*(ushort *)(param_1 + 0x2ae) * 0x18) +
                *(longlong *)(DAT_14cb86da8 + 0x340),&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bd82c FUN_1401bd82c body=83 status=ok
// SIG undefined FUN_1401bd82c(void)

longlong * FUN_1401bd82c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1401bd880();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1401bd880 FUN_1401bd880 body=57 status=ok
// SIG undefined FUN_1401bd880(void)

void FUN_1401bd880(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dc50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dc50 = FUN_140002ddd(FUN_14185ede7,uVar1,L"ObjectiveTypeSettingsBase");
  }
  return;
}



// FUNCTION 1401bd8ba FUN_1401bd8ba body=485 status=ok
// SIG undefined FUN_1401bd8ba(void)

int * FUN_1401bd8ba(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1446efaca(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1401bdaa0 FUN_1401bdaa0 body=679 status=ok
// SIG undefined FUN_1401bdaa0(void)

void FUN_1401bdaa0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1401bdb04;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1401bdb04:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1401bdd48 FUN_1401bdd48 body=679 status=ok
// SIG undefined FUN_1401bdd48(void)

void FUN_1401bdd48(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1401bddac;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1401bddac:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1401bdff2 FUN_1401bdff2 body=186 status=ok
// SIG undefined FUN_1401bdff2(void)

void FUN_1401bdff2(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0xd0);
    if ((*(byte *)(lVar1 + 0x150) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401be029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 200) + 0x38))();
      return;
    }
    if (0 < (int)*(uint *)(lVar1 + 0x2d0)) {
      uVar5 = 0;
      plVar4 = (longlong *)0x0;
      do {
        plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x2c8) + uVar5 * 8);
        if (*(int *)((longlong)plVar3 + 0x24) == param_2) {
          if ((char)plVar3[4] == '\x04') {
            plVar4 = plVar3;
          }
          if ((char)plVar3[4] == DAT_14cb0cc00) break;
        }
        plVar3 = plVar4;
        uVar5 = uVar5 + 1;
        plVar4 = plVar3;
      } while (*(uint *)(lVar1 + 0x2d0) != uVar5);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x30))();
        FUN_14003fbd6();
        plVar4 = (&DAT_14caea080)[iVar2];
        goto LAB_1401be08e;
      }
    }
  }
  FUN_14003fbd6();
  plVar4 = DAT_14caea080;
LAB_1401be08e:
                    /* WARNING: Could not recover jumptable at 0x0001401be097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x2f0))();
  return;
}



// FUNCTION 1401be0ac FUN_1401be0ac body=24 status=ok
// SIG undefined FUN_1401be0ac(void)

void FUN_1401be0ac(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401be0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1401be0c4 FUN_1401be0c4 body=80 status=ok
// SIG undefined FUN_1401be0c4(void)

undefined8 * FUN_1401be0c4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b401a00;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401be114 FUN_1401be114 body=232 status=ok
// SIG undefined FUN_1401be114(void)

longlong * FUN_1401be114(longlong *param_1,longlong param_2,longlong param_3,byte param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3 + 3;
  if (*(undefined8 **)(param_2 + 0x78) < puVar2) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x28);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 3;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar2;
  *puVar3 = &PTR_FUN_14a31a528;
  puVar3[1] = 0;
  puVar3[2] = 0;
  iVar1 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar1 * 8) = puVar3;
  *param_1 = (longlong)(puVar3 + 1);
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1401be1fc(puVar3 + 1,*(undefined4 *)(param_3 + 8),1);
  *(byte *)(param_1 + 1) = *(int *)(DAT_14ca60930 + 4) != 0 & param_4;
  return param_1;
}



// FUNCTION 1401be1fc FUN_1401be1fc body=169 status=ok
// SIG undefined FUN_1401be1fc(void)

void FUN_1401be1fc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1401be2a6(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
      puVar2 = puVar2 + 7;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_14732944c(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_1473294a8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1401be2a6 FUN_1401be2a6 body=85 status=ok
// SIG undefined FUN_1401be2a6(void)

void FUN_1401be2a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1401be2fc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401be2fc FUN_1401be2fc body=449 status=ok
// SIG undefined FUN_1401be2fc(void)

void FUN_1401be2fc(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x38);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401be416:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401be453:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401be351;
LAB_1401be346:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401be351:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x491) goto code_r0x0001401be37d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0xe + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401be3d3:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401be453;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401be416;
code_r0x0001401be37d:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401be3d3;
    }
  }
  goto LAB_1401be346;
}



// FUNCTION 1401be4be FUN_1401be4be body=91 status=ok
// SIG undefined FUN_1401be4be(void)

void FUN_1401be4be(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_1401be552(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(param_1 + 0x18);
  return;
}



// FUNCTION 1401be51a FUN_1401be51a body=55 status=ok
// SIG undefined FUN_1401be51a(void)

void FUN_1401be51a(longlong *param_1)

{
  FUN_1401be58a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401be552 FUN_1401be552 body=55 status=ok
// SIG undefined FUN_1401be552(void)

void FUN_1401be552(longlong *param_1)

{
  FUN_1401be604(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401be58a FUN_1401be58a body=121 status=ok
// SIG undefined FUN_1401be58a(void)

void FUN_1401be58a(longlong param_1,int param_2)

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



// FUNCTION 1401be604 FUN_1401be604 body=123 status=ok
// SIG undefined FUN_1401be604(void)

void FUN_1401be604(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1401be680 FUN_1401be680 body=109 status=ok
// SIG undefined FUN_1401be680(void)

void FUN_1401be680(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  FUN_1401be6ed(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_2 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_2 + 0x2c) != 0)) {
    FUN_147ca4b78(param_2 + 0x20);
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = 0;
  puVar3[1] = param_2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar3;
    *puVar2 = puVar3;
  }
  return;
}



// FUNCTION 1401be6ed FUN_1401be6ed body=47 status=ok
// SIG undefined FUN_1401be6ed(void)

void FUN_1401be6ed(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0xb0);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-0x10] == '\x01') {
        pcVar1[-0x10] = '\0';
      }
      pcVar1 = pcVar1 + 0xc0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401be71c FUN_1401be71c body=67 status=ok
// SIG undefined FUN_1401be71c(void)

void FUN_1401be71c(longlong param_1,ushort param_2)

{
  longlong lVar1;
  
  *(ushort *)(param_1 + 0x1b4) =
       (ushort)*(undefined4 *)(param_1 + 0x1b4) & 0xff1f | (param_2 & 7) << 5;
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 8;
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8), lVar1 != 0)) {
    FUN_144a78688(lVar1 + 0x70);
    return;
  }
  return;
}



// FUNCTION 1401be760 FUN_1401be760 body=159 status=ok
// SIG undefined FUN_1401be760(void)

void FUN_1401be760(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[0x14] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x14] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x11] != 0 && (param_1[0x11] & 1U) == 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1401be7ff(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401be7ff FUN_1401be7ff body=45 status=ok
// SIG undefined FUN_1401be7ff(void)

void FUN_1401be7ff(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1401be82c FUN_1401be82c body=353 status=ok
// SIG undefined FUN_1401be82c(void)

void FUN_1401be82c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401be8b3;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1401be8b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1401be98e FUN_1401be98e body=353 status=ok
// SIG undefined FUN_1401be98e(void)

void FUN_1401be98e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401bea15;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1401bea15:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1401beaf6 FUN_1401beaf6 body=57 status=ok
// SIG undefined FUN_1401beaf6(void)

void FUN_1401beaf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab8e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab8e8 = FUN_140002ddd(FUN_1418cac2a,uVar1,L"OakInteractiveObjectDef");
  }
  return;
}



// FUNCTION 1401beb30 FUN_1401beb30 body=240 status=ok
// SIG undefined FUN_1401beb30(void)

ulonglong FUN_1401beb30(longlong param_1)

{
  double _X;
  double _X_00;
  double _X_01;
  int iVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  _X = *(double *)(param_1 + 0x58);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((-DAT_14cb1c860 < _X) && (_X < DAT_14cb1c860)) {
    _X_00 = *(double *)(param_1 + 0x60);
    if ((-DAT_14cb1c868 < _X_00) && (_X_00 < DAT_14cb1c868)) {
      _X_01 = *(double *)(param_1 + 0x68);
      if ((-DAT_14cb1c870 < _X_01) && (_X_01 < DAT_14cb1c870)) {
        iVar1 = _finite(_X);
        if (iVar1 != 0) {
          iVar1 = _finite(_X_00);
          if (iVar1 != 0) {
            iVar1 = _finite(_X_01);
            if ((iVar1 != 0) && (*(int *)(param_1 + 0x110) != -1)) {
              uVar2 = FUN_1401bec20(param_1 + 0x58,param_1 + 0xa8,&DAT_41200000);
              uVar3 = (ulonglong)uVar2 ^ 1;
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1401bec20 FUN_1401bec20 body=567 status=ok
// SIG undefined FUN_1401bec20(void)

bool FUN_1401bec20(double *param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  
  dVar5 = *param_1;
  bVar4 = false;
  if ((-DAT_14cb1c860 < dVar5) && (bVar4 = false, dVar5 < DAT_14cb1c860)) {
    dVar1 = param_1[1];
    bVar4 = false;
    if ((-DAT_14cb1c868 < dVar1) && (dVar1 < DAT_14cb1c868)) {
      dVar2 = param_1[2];
      bVar4 = false;
      if ((-DAT_14cb1c870 < dVar2) && (dVar2 < DAT_14cb1c870)) {
        iVar3 = _finite(dVar5);
        if ((iVar3 == 0) || (iVar3 = _finite(dVar1), iVar3 == 0)) {
          bVar4 = false;
        }
        else {
          iVar3 = _finite(dVar2);
          bVar4 = iVar3 != 0;
        }
      }
    }
  }
  dVar5 = *param_2;
  if ((((dVar5 <= -DAT_14cb1c860) || (DAT_14cb1c860 <= dVar5)) ||
      (dVar1 = param_2[1], dVar1 <= -DAT_14cb1c868)) ||
     (((DAT_14cb1c868 <= dVar1 || (dVar2 = param_2[2], dVar2 <= -DAT_14cb1c870)) ||
      ((DAT_14cb1c870 <= dVar2 ||
       ((iVar3 = _finite(dVar5), iVar3 == 0 || (iVar3 = _finite(dVar1), iVar3 == 0)))))))) {
    if (bVar4 != false) {
      return false;
    }
  }
  else {
    iVar3 = _finite(dVar2);
    if (bVar4 != (iVar3 != 0)) {
      return false;
    }
  }
  dVar5 = (double)param_3;
  if ((((ABS(*param_1 - *param_2) < dVar5) && (ABS(param_1[1] - param_2[1]) < dVar5)) &&
      (ABS(param_1[2] - param_2[2]) < dVar5)) &&
     (ABS(*(float *)(param_1 + 9) - *(float *)(param_2 + 9)) <= param_3)) {
    return ABS(*(float *)((longlong)param_1 + 0x4c) - *(float *)((longlong)param_2 + 0x4c)) <=
           param_3;
  }
  return false;
}



// FUNCTION 1401bee6a FUN_1401bee6a body=124 status=ok
// SIG undefined FUN_1401bee6a(void)

void FUN_1401bee6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001401beee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401beee6 FUN_1401beee6 body=75 status=ok
// SIG undefined FUN_1401beee6(void)

void FUN_1401beee6(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401bef31 FUN_1401bef31 body=75 status=ok
// SIG undefined FUN_1401bef31(void)

void FUN_1401bef31(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401bef7c FUN_1401bef7c body=197 status=ok
// SIG undefined FUN_1401bef7c(void)

void FUN_1401bef7c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    lVar1 = FUN_1447210f0(param_1);
    if ((lVar1 != 0) && (lVar2 = FUN_140702026(lVar1), lVar1 = param_1, lVar2 != 0)) {
      for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
        if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1401bf016;
      }
      lVar1 = *(longlong *)(param_1 + 0x3a8);
      if (*(int *)(lVar1 + 0x1020) != -1) {
        FUN_1401bf042(lVar2 + 200);
        FUN_1401bf150(lVar2 + 0xf8,*(undefined4 *)(lVar1 + 0x1020),1);
        FUN_1401bf0ae(lVar2 + 0xe0,lVar1);
      }
    }
LAB_1401bf016:
    *(undefined4 *)(*(longlong *)(param_1 + 0x3a8) + 0x1020) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3b0) = 0xffffffff;
  }
  FUN_1448c0920(param_1,param_2);
  return;
}



// FUNCTION 1401bf042 FUN_1401bf042 body=107 status=ok
// SIG undefined FUN_1401bf042(void)

void FUN_1401bf042(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  code *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 1;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  local_10 = &local_20;
  local_18 = FUN_143b2a71e;
  local_20 = param_1;
  FUN_1407028fe();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bf0ae FUN_1401bf0ae body=162 status=ok
// SIG undefined FUN_1401bf0ae(void)

void FUN_1401bf0ae(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1401bf13b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1401bf13b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1401bf150 FUN_1401bf150 body=143 status=ok
// SIG undefined FUN_1401bf150(void)

void FUN_1401bf150(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_3 != 0) {
    lVar3 = *param_1;
    lVar1 = lVar3 + (longlong)param_2 * 8;
    lVar8 = 0;
    do {
      iVar7 = (int)lVar8;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar3 + (longlong)(int)param_1[6] * 8) = param_2 + iVar7;
      }
      *(undefined4 *)(lVar1 + lVar8 * 8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar8 * 8) = uVar5;
      iVar6 = param_2 + iVar7;
      *(int *)(param_1 + 6) = iVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar9 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      iVar7 = param_2 + iVar7 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      bVar4 = (byte)iVar6 & 0x1f;
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      lVar8 = lVar8 + 1;
    } while (param_3 != (int)lVar8);
  }
  return;
}



// FUNCTION 1401bf1e0 FUN_1401bf1e0 body=33 status=ok
// SIG undefined FUN_1401bf1e0(void)

void FUN_1401bf1e0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401bf1fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  return;
}



// FUNCTION 1401bf202 FUN_1401bf202 body=309 status=ok
// SIG undefined FUN_1401bf202(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bf202(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
    if (*(char *)((longlong)param_1 + 0x9f) < '\0') {
      if (*(code **)(*param_1 + 0x368) == FUN_1407a7646) {
        plVar2 = param_1;
        if (((byte *)param_1[0xc] != (byte *)0x0) &&
           (plVar2 = param_1, (*(byte *)param_1[0xc] & 1) != 0)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
            FUN_145e17f72(&DAT_14cb0bff0);
            atexit(FUN_14374ca90);
            _Init_thread_footer(&DAT_14cb0c040);
          }
          FUN_1402eb48e(*(undefined8 *)(param_1[0xc] + 0x28),param_1 + 8);
          *(byte *)param_1[0xc] = *(byte *)param_1[0xc] & 0xfe;
          plVar2 = param_1;
        }
      }
      else {
        (**(code **)(*param_1 + 0x368))(param_1,0);
        plVar2 = _DAT_14cad01b0;
      }
      _DAT_14cad01b0 = plVar2;
      *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) & 0x7f;
    }
    if ((((*(byte *)(param_1 + 0x17) & 0x10) != 0) && (*(longlong *)(param_1[0x16] + 0x260) != 0))
       && (lVar1 = *(longlong *)(*(longlong *)(param_1[0x16] + 0x260) + 0x378), lVar1 != 0)) {
      FUN_1479cbf44(lVar1 + 0xa8,param_1);
    }
    FUN_1400f88ca(param_1);
    param_1[0x16] = 0;
  }
  return;
}



// FUNCTION 1401bf338 FUN_1401bf338 body=350 status=ok
// SIG undefined FUN_1401bf338(void)

void FUN_1401bf338(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 200);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x19) {
    uVar6 = 0x18;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x18 < *(uint *)(param_1 + 0xcc)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1401bf3ca;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1401bf3ca:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 3)) {
      uVar6 = uVar4 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = (int)uVar6;
  FUN_1401bf496(param_1,param_2,uVar6,8);
  return;
}



// FUNCTION 1401bf496 FUN_1401bf496 body=141 status=ok
// SIG undefined FUN_1401bf496(void)

void FUN_1401bf496(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1401bf57a FUN_1401bf57a body=155 status=ok
// SIG undefined FUN_1401bf57a(void)

void FUN_1401bf57a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x440) = 0;
  if (*(char *)(param_1 + 0x438) == '\x01') {
    *(undefined1 *)(param_1 + 0x438) = 0;
    iVar2 = *(int *)(param_1 + 0x398);
    if (0 < iVar2) {
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x390);
        lVar3 = *(longlong *)(lVar1 + lVar4 * 8);
        if (lVar3 == 0) {
          iVar5 = iVar5 + -1;
        }
        else if (iVar5 < 0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c();
            lVar3 = *(longlong *)(lVar1 + lVar4 * 8);
          }
          *(longlong *)(lVar1 + (longlong)((int)lVar4 + iVar5) * 8) = lVar3;
          iVar2 = *(int *)(param_1 + 0x398);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
      if (iVar5 < 0) {
        iVar5 = iVar5 + iVar2;
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        *(int *)(param_1 + 0x398) = iVar5;
      }
    }
  }
  return;
}



// FUNCTION 1401bf620 FUN_1401bf620 body=159 status=ok
// SIG undefined FUN_1401bf620(void)

void FUN_1401bf620(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_141204c86(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_141204d5c(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_1400bc89a(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_146fdf34c(param_1 + 0x20,0);
  }
  if (-1 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_146fdf3be(param_1 + 0x30,0);
  return;
}



// FUNCTION 1401bf6c0 FUN_1401bf6c0 body=432 status=ok
// SIG undefined FUN_1401bf6c0(void)

bool FUN_1401bf6c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 == 0) {
    bVar7 = true;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
    do {
      if (*(char *)(lVar4 + lVar12) == '\x01') {
        plVar5 = *(longlong **)(lVar4 + 8 + lVar12);
        if ((DAT_14c950c29 == '\x01') && (plVar5 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar5);
        }
        else if (plVar5 == (longlong *)0x0) goto LAB_1401bf7c5;
        FUN_1448c1924(plVar5,&local_60);
        if ((*(char *)(param_1 + 0x3c) == '\x01') &&
           ((**(code **)(*plVar5 + 0xab8))(plVar5,&local_50), local_50 != 0)) {
          iVar9 = 3;
        }
        else {
          lVar6 = local_60;
          if (local_60 == 0) {
            iVar9 = 1;
          }
          else {
            iVar9 = *(int *)(local_60 + 0x184);
            if (*(longlong **)(local_60 + 0x150) == (longlong *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = (**(code **)(**(longlong **)(local_60 + 0x150) + 0x38))();
            }
            iVar8 = iVar8 + iVar9;
            if ((*(int *)(lVar6 + 500) != 5) || (iVar9 = iVar8, *(int *)(lVar6 + 0x18c) != 0)) {
              iVar9 = (*(int *)(lVar6 + 0x180) + *(int *)(lVar6 + 0x184)) -
                      (*(int *)(lVar6 + 0x18c) + *(int *)(lVar6 + 0x188));
            }
            iVar11 = iVar11 + iVar8;
            iVar10 = iVar10 + iVar9;
            iVar9 = 0;
          }
        }
        plVar5 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if ((iVar9 != 0) && (iVar9 != 3)) {
          bVar7 = false;
          goto LAB_1401bf7eb;
        }
      }
LAB_1401bf7c5:
      lVar12 = lVar12 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar12 != 0);
    bVar7 = true;
    if (0 < iVar11) {
      bVar7 = *(float *)(param_1 + 0x38) <= (float)iVar10 / (float)iVar11;
    }
  }
LAB_1401bf7eb:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 1401bf87a FUN_1401bf87a body=479 status=ok
// SIG undefined FUN_1401bf87a(void)

undefined8 FUN_1401bf87a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_2 + 0x18);
    uVar13 = 0;
    local_60 = param_1;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1401bfa04;
    plVar10 = (longlong *)
              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar10 != (longlong *)0x0) &&
       ((((int)plVar10[2] == *(int *)(param_2 + 0x1c) &&
         ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar6 = *plVar10, lVar6 != 0)))) {
      iVar4 = *(int *)(lVar6 + 0x498);
      iVar14 = 0;
      if ((longlong)iVar4 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x490);
        lVar12 = 0;
        iVar11 = 0;
        uVar13 = 0;
        do {
          plVar10 = *(longlong **)(lVar6 + lVar12);
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0xab8))(plVar10,&local_58);
            if (local_58 == 0) {
              FUN_1448c1924(plVar10,&local_58);
              lVar7 = local_58;
              if (local_58 != 0) {
                iVar5 = *(int *)(local_58 + 0x184);
                if (*(longlong **)(local_58 + 0x150) == (longlong *)0x0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = (**(code **)(**(longlong **)(local_58 + 0x150) + 0x38))();
                }
                iVar8 = iVar8 + iVar5;
                iVar9 = iVar8;
                if (*(int *)(lVar7 + 500) != 5 || *(int *)(lVar7 + 0x18c) != 0) {
                  iVar9 = (*(int *)(lVar7 + 0x180) + *(int *)(lVar7 + 0x184)) -
                          (*(int *)(lVar7 + 0x18c) + *(int *)(lVar7 + 0x188));
                }
                iVar14 = iVar14 + iVar8;
                iVar11 = iVar11 + iVar9;
                uVar13 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
              }
              plVar10 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_50 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
            }
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)iVar4 * 8 != lVar12);
        if ((~(byte)uVar13 & 1) == 0 && 0 < iVar14) {
          uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),
                            *(float *)(local_60 + 0x28) <= (float)iVar11 / (float)iVar14);
        }
        goto LAB_1401bfa04;
      }
    }
  }
  uVar13 = 0;
LAB_1401bfa04:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401bfa5a FUN_1401bfa5a body=194 status=ok
// SIG undefined FUN_1401bfa5a(void)

void FUN_1401bfa5a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_1 + 0x3e4);
  *(int *)(param_1 + 0x3e4) = iVar1 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x3d8);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0x3e4) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar6 * 0x10 + -8;
    uVar9 = uVar6;
    while (((lVar2 = *(longlong *)(param_1 + 0x3d0), *(int *)(lVar2 + lVar8) != 0 &&
            (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,param_2), cVar5 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar4 = uVar9 < 2;
      uVar9 = uVar9 - 1;
      if (bVar4) {
        *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1401bfb06;
      }
    }
    uVar6 = uVar9 - 1;
    bVar7 = true;
  } while (1 < uVar9);
  *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + -1;
LAB_1401bfb06:
  FUN_14474d06a((longlong *)(param_1 + 0x3d0),0);
  return;
}



// FUNCTION 1401bfb1c FUN_1401bfb1c body=1482 status=ok
// SIG undefined FUN_1401bfb1c(void)

void FUN_1401bfb1c(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *****pppppuVar8;
  undefined1 *puVar9;
  byte bVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_128 [44];
  int local_fc;
  undefined1 local_f8 [40];
  undefined4 local_d0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 ****local_a8 [2];
  undefined8 ****local_98;
  int local_90;
  uint local_8c;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(int *)(param_1 + 0x44) == 1) {
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        pcVar11 = *(char **)(param_1 + 0x30);
        lVar14 = (longlong)*(int *)(param_1 + 0x38) * 0x38;
        do {
          if (*pcVar11 == '\x01') {
            lVar3 = *(longlong *)(pcVar11 + 8);
            if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
              FUN_1456cec3c(lVar3);
            }
            else if (lVar3 == 0) goto LAB_1401bfc8d;
            cVar6 = FUN_1401c00e8(lVar3,0);
            if (cVar6 != '\0') {
              if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1401bfc8d;
              FUN_140af94c6(pcVar11);
            }
            fVar16 = (float)FUN_140ce4006();
            fVar17 = 0.0;
            if ((*pcVar11 == '\x01') && (*(longlong *)(pcVar11 + 8) != 0)) {
              fVar17 = *(float *)(pcVar11 + 0x10);
            }
            if (fVar16 < fVar17) {
              FUN_1401c0198(pcVar11,param_2,1);
            }
          }
LAB_1401bfc8d:
          pcVar11 = pcVar11 + 0x38;
          lVar14 = lVar14 + -0x38;
        } while (lVar14 != 0);
      }
      goto LAB_1401bfbd7;
    }
    if (*(int *)(param_1 + 0x44) != 2) goto LAB_1401bfb7b;
    local_f8[0] = 0;
    local_d0 = 0;
    FUN_1456bb102(local_f8,param_1);
    FUN_1447c3578(param_1 + 0x48,local_a8,local_f8);
    iVar7 = FUN_1405d5f74(local_a8);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppuVar8 = local_a8;
      if (0x18 < (ushort)local_90) {
        pppppuVar8 = (undefined8 *****)local_a8[0];
      }
      (*pcVar4)(pppppuVar8);
    }
    if (0x18 < (ushort)local_90) {
      FUN_1400020a8(local_a8[0]);
    }
    FUN_144a5ac3a(local_f8);
    iVar12 = *(int *)(param_1 + 0x38);
    if ((-1 < iVar7) && (iVar7 < iVar12)) {
      local_b8 = (undefined1 *)0x0;
      local_b0 = 0x1000000000;
      local_fc = iVar12;
      FUN_14097f3c8(local_f8,iVar12,1);
      local_98 = (undefined8 *****)0x0;
      local_8c = 0x80;
      local_90 = *(int *)(param_1 + 0x38);
      uVar13 = local_90 + 0x1f;
      if (0x1f < uVar13) {
        if (uVar13 < 0xa0) {
          pppppuVar8 = local_a8;
LAB_1401bfd98:
          uVar13 = uVar13 >> 3 & 0xfffffffc;
        }
        else {
          FUN_14499171c(local_a8,0,uVar13 >> 5,4);
          local_8c = uVar13 & 0xffffffe0;
          pppppuVar8 = (undefined8 *****)local_98;
          if ((undefined8 *****)local_98 == (undefined8 *****)0x0) {
            pppppuVar8 = local_a8;
          }
          if (uVar13 < 0x120) goto LAB_1401bfd98;
          uVar13 = (uVar13 >> 5) << 2;
        }
        memset(pppppuVar8,0,(ulonglong)uVar13);
        iVar12 = local_90 + 0x1f;
        if (-1 < local_90) {
          iVar12 = local_90;
        }
        if (local_90 % 0x20 != 0) {
          pppppuVar8 = (undefined8 *****)local_98;
          if ((undefined8 *****)local_98 == (undefined8 *****)0x0) {
            pppppuVar8 = local_a8;
          }
          bVar10 = -(char)(local_90 % 0x20);
          *(uint *)((longlong)pppppuVar8 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)pppppuVar8 + (longlong)(iVar12 >> 5) * 4) <<
                     (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
        }
        if (0 < *(int *)(param_1 + 0x38)) {
          lVar14 = 0;
          uVar15 = 0;
          fVar17 = 0.0;
          do {
            lVar3 = *(longlong *)(param_1 + 0x30);
            if (*(char *)(lVar3 + lVar14) == '\x01') {
              lVar5 = *(longlong *)(lVar3 + 8 + lVar14);
              if ((DAT_14c950c29 == 1) && (lVar5 != 0)) {
                FUN_1456cec3c(lVar5);
              }
              else if (lVar5 == 0) goto LAB_1401bfe7a;
              cVar6 = FUN_1401c00e8(lVar5,0);
              if (cVar6 != '\0') {
                if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1401bfe7a;
                pppppuVar8 = (undefined8 *****)local_98;
                if ((undefined8 *****)local_98 == (undefined8 *****)0x0) {
                  pppppuVar8 = local_a8;
                }
                puVar1 = (uint *)((longlong)pppppuVar8 + (uVar15 >> 5 & 0x7ffffff) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
              }
              fVar16 = 0.0;
              if ((*(char *)(lVar3 + lVar14) == '\x01') && (*(longlong *)(lVar3 + 8 + lVar14) != 0))
              {
                fVar16 = *(float *)(lVar3 + 0x10 + lVar14);
              }
              if (1.0 <= fVar16) {
                fVar16 = 1.0;
              }
              if (fVar16 <= 0.0) {
                fVar16 = 0.0;
              }
              fVar17 = fVar17 + fVar16;
              puVar9 = local_b8;
              if (local_b8 == (undefined1 *)0x0) {
                puVar9 = local_f8;
              }
              *(float *)(puVar9 + uVar15 * 4) = fVar16;
            }
LAB_1401bfe7a:
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 0x38;
          } while ((longlong)uVar15 < (longlong)*(int *)(param_1 + 0x38));
          if ((0 < iVar7) && (0.0 < fVar17)) {
            iVar12 = 0;
            do {
              fVar16 = (float)FUN_140ce4006();
              if (0 < (int)*(uint *)(param_1 + 0x38)) {
                puVar9 = local_b8;
                if (local_b8 == (undefined1 *)0x0) {
                  puVar9 = local_f8;
                }
                fVar16 = fVar16 * fVar17;
                lVar14 = 0;
                uVar15 = 0;
                do {
                  fVar2 = *(float *)(puVar9 + uVar15 * 4);
                  if (0.0 < fVar2) {
                    if ((fVar16 < fVar2) &&
                       (lVar3 = *(longlong *)(param_1 + 0x30), *(char *)(lVar3 + lVar14) == '\x01'))
                    {
                      lVar5 = *(longlong *)(lVar3 + 8 + lVar14);
                      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
                        if (lVar5 == 0) goto LAB_1401bff05;
                      }
                      else {
                        FUN_1456cec3c();
                      }
                      pppppuVar8 = (undefined8 *****)local_98;
                      if ((undefined8 *****)local_98 == (undefined8 *****)0x0) {
                        pppppuVar8 = local_a8;
                      }
                      if ((*(uint *)((longlong)pppppuVar8 + (uVar15 >> 5 & 0x7ffffff) * 4) >>
                           ((uint)uVar15 & 0x1f) & 1) != 0) {
                        FUN_140af94c6(lVar3 + lVar14);
                      }
                      FUN_1401c0198(lVar3 + lVar14,param_2,1);
                      puVar9 = local_b8;
                      if (local_b8 == (undefined1 *)0x0) {
                        puVar9 = local_f8;
                      }
                      fVar17 = fVar17 - *(float *)(puVar9 + uVar15 * 4);
                      *(undefined4 *)(puVar9 + uVar15 * 4) = 0;
                      break;
                    }
LAB_1401bff05:
                    fVar16 = fVar16 - fVar2;
                  }
                  uVar15 = uVar15 + 1;
                  lVar14 = lVar14 + 0x38;
                } while (*(uint *)(param_1 + 0x38) != uVar15);
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 != iVar7);
          }
        }
      }
      if ((undefined8 *****)local_98 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
      iVar12 = local_fc;
      if (local_b8 != (undefined1 *)0x0) {
        FUN_1400020a8();
        iVar12 = local_fc;
      }
    }
    if (iVar7 < iVar12) goto LAB_1401bfbd7;
  }
LAB_1401bfb7b:
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    pcVar11 = *(char **)(param_1 + 0x30);
    lVar14 = (longlong)*(int *)(param_1 + 0x38) * 0x38;
    do {
      if (*pcVar11 == '\x01') {
        lVar3 = *(longlong *)(pcVar11 + 8);
        if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        else if (lVar3 == 0) goto LAB_1401bfbcd;
        cVar6 = FUN_1401c00e8(lVar3,0);
        if (cVar6 != '\0') {
          if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1401bfbcd;
          FUN_140af94c6(pcVar11);
        }
        FUN_1401c0198(pcVar11,param_2,*(undefined1 *)(param_1 + 0x40));
      }
LAB_1401bfbcd:
      pcVar11 = pcVar11 + 0x38;
      lVar14 = lVar14 + -0x38;
    } while (lVar14 != 0);
  }
LAB_1401bfbd7:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c00e8 FUN_1401c00e8 body=174 status=ok
// SIG undefined FUN_1401c00e8(void)

bool FUN_1401c00e8(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(param_1,&local_30);
  if (local_30 == 0) {
    bVar5 = false;
    goto LAB_1401c0133;
  }
  if (param_2 == '\x02') {
    bVar5 = false;
    if (*(int *)(local_30 + 500) != 5) goto LAB_1401c0133;
LAB_1401c0190:
    iVar4 = 0;
    lVar3 = 0x18c;
  }
  else {
    if (param_2 == '\x01') goto LAB_1401c0190;
    iVar4 = 5;
    lVar3 = 500;
  }
  bVar5 = *(int *)(local_30 + lVar3) == iVar4;
LAB_1401c0133:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}


