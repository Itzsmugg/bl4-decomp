// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467c08da FUN_1467c08da body=38 status=ok
// SIG undefined FUN_1467c08da(void)

undefined8 FUN_1467c08da(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c0900 FUN_1467c0900 body=32 status=ok
// SIG undefined FUN_1467c0900(void)

undefined8 FUN_1467c0900(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FArchiveFileWriterDummy");
  return param_2;
}



// FUNCTION 1467c0938 FUN_1467c0938 body=57 status=ok
// SIG undefined FUN_1467c0938(void)

undefined8 * FUN_1467c0938(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e13640;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c0972 FUN_1467c0972 body=46 status=ok
// SIG undefined FUN_1467c0972(void)

void FUN_1467c0972(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467c098c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))();
  return;
}



// FUNCTION 1467c09a0 FUN_1467c09a0 body=68 status=ok
// SIG undefined FUN_1467c09a0(void)

void FUN_1467c09a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467c09d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x200))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1467c09e4 FUN_1467c09e4 body=29 status=ok
// SIG undefined FUN_1467c09e4(void)

undefined8 FUN_1467c09e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c0a0e FUN_1467c0a0e body=79 status=ok
// SIG undefined FUN_1467c0a0e(void)

undefined4 FUN_1467c0a0e(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (ulonglong)(bVar1 ^ 1);
  }
  if (*(char *)(param_1 + 0x50 + uVar2) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f800000;
  }
  return uVar3;
}



// FUNCTION 1467c0a5e FUN_1467c0a5e body=50 status=ok
// SIG undefined FUN_1467c0a5e(void)

undefined8 FUN_1467c0a5e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  
  cVar1 = FUN_1467c0fb4();
  pwVar2 = L"false";
  if (cVar1 != '\0') {
    pwVar2 = L"true";
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 1467c0ac0 FUN_1467c0ac0 body=47 status=ok
// SIG undefined FUN_1467c0ac0(void)

void FUN_1467c0ac0(longlong param_1,int param_2)

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



// FUNCTION 1467c0af0 FUN_1467c0af0 body=612 status=ok
// SIG undefined FUN_1467c0af0(void)

undefined8 FUN_1467c0af0(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong *_Dst;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  uVar5 = 0;
  if (0 < (int)uVar2) {
    uVar6 = (ulonglong)uVar2;
    uVar11 = uVar2;
    do {
      uVar6 = uVar6 >> 1;
      uVar12 = (uint)uVar6 + uVar5;
      if (*(int *)(lVar4 + (ulonglong)uVar12 * 0x18) < (int)param_2) {
        uVar5 = uVar12 + (uVar11 & 1);
      }
      bVar3 = 1 < uVar11;
      uVar11 = (uint)uVar6;
    } while (bVar3);
  }
  if ((int)uVar2 <= (int)uVar5) {
    return 0;
  }
  piVar13 = (int *)(lVar4 + (ulonglong)uVar5 * 0x18);
  uVar6 = 0;
  if (piVar13 == (int *)&DAT_fffffffffffffff8 || (int)param_2 < *piVar13) {
    return 0;
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    uVar7 = (ulonglong)uVar2;
    do {
      uVar11 = (int)(uVar7 >> 1) + (int)uVar6;
      uVar5 = (uint)uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar11 * 0x18) < (int)param_2) {
        uVar6 = (ulonglong)(uVar11 + (uVar5 & 1));
      }
      uVar7 = uVar7 >> 1;
    } while (1 < uVar5);
  }
  if ((int)uVar6 < (int)uVar2) {
    piVar1 = (int *)(lVar4 + uVar6 * 0x18);
    piVar13 = (int *)0x0;
    if (*piVar1 <= (int)param_2) {
      piVar13 = piVar1 + 2;
    }
  }
  else {
    piVar13 = (int *)0x0;
  }
  if (param_3 == 0) {
    uVar7 = 0;
    if (piVar13[2] < 1) {
      return 0;
    }
    if (0 < (int)uVar2) {
      uVar7 = 0;
      uVar10 = (ulonglong)uVar2;
      do {
        uVar11 = (int)(uVar10 >> 1) + (int)uVar7;
        uVar5 = (uint)uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 0x18) < (int)param_2) {
          uVar7 = (ulonglong)(uVar11 + (uVar5 & 1));
        }
        uVar10 = uVar10 >> 1;
      } while (1 < uVar5);
    }
  }
  else {
    uVar5 = piVar13[2];
    uVar8 = CONCAT71((int7)(uVar6 >> 8),0 < (int)uVar5);
    if ((param_2 & 0xfd000000) == 0x5000000 || (param_2 & 0xfe000000) == 0xa000000) {
      if (0 < (int)uVar5) {
        _Dst = *(longlong **)piVar13;
        uVar6 = 0;
        while (*_Dst != param_3) {
          uVar6 = uVar6 + 1;
          _Dst = (longlong *)((longlong)_Dst + 0xc);
          if (uVar5 == uVar6) {
            return 0;
          }
        }
        if (uVar5 - 1 != (int)uVar6) {
          memmove(_Dst,(void *)((longlong)_Dst + 0xc),
                  (longlong)(int)((uVar5 - 1) - (int)uVar6) * 0xc);
          uVar5 = piVar13[2];
        }
        piVar13[2] = uVar5 - 1;
        FUN_1467c0dfe(piVar13);
        uVar5 = piVar13[2];
      }
      if (uVar5 != 0) {
        return uVar8;
      }
      uVar2 = *(uint *)(param_1 + 1);
      lVar4 = *param_1;
      uVar7 = 0;
      if (0 < (int)uVar2) {
        uVar6 = (ulonglong)uVar2;
        do {
          uVar11 = (int)(uVar6 >> 1) + (int)uVar7;
          uVar5 = (uint)uVar6;
          if (*(int *)(lVar4 + (ulonglong)uVar11 * 0x18) < (int)param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar5 & 1));
          }
          uVar6 = uVar6 >> 1;
        } while (1 < uVar5);
      }
      if ((int)uVar2 <= (int)uVar7) {
        return uVar8;
      }
      goto LAB_1467c0c6c;
    }
    if ((int)uVar5 < 1) {
      return 0;
    }
    uVar7 = 0;
    uVar6 = 0;
    if (**(longlong **)piVar13 != param_3) {
      return 0;
    }
    if (0 < (int)uVar2) {
      uVar7 = 0;
      uVar10 = (ulonglong)uVar2;
      do {
        uVar11 = (int)(uVar10 >> 1) + (int)uVar7;
        uVar5 = (uint)uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 0x18) < (int)param_2) {
          uVar7 = (ulonglong)(uVar11 + (uVar5 & 1));
        }
        uVar10 = uVar10 >> 1;
      } while (1 < uVar5);
    }
  }
  uVar9 = (undefined7)(uVar6 >> 8);
  if ((int)uVar2 <= (int)uVar7) {
    return CONCAT71(uVar9,1);
  }
  uVar8 = CONCAT71(uVar9,1);
LAB_1467c0c6c:
  if (*(int *)(lVar4 + uVar7 * 0x18) <= (int)param_2) {
    FUN_1467c0eac(param_1);
    FUN_1467c0f06(param_1);
    return uVar8;
  }
  return uVar8;
}



// FUNCTION 1467c0d54 FUN_1467c0d54 body=170 status=ok
// SIG undefined FUN_1467c0d54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1467c0d54(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = (longlong)(int)param_1[1] + 1;
  puVar1 = (undefined4 *)((longlong)(int)param_1[1] * 0x18 + *param_1);
  while (puVar3 = puVar1, lVar2 = lVar2 + -1, lVar2 != 0) {
    puVar1 = puVar3 + -6;
    if (0 < (int)puVar3[-2]) {
      *param_2 = puVar3[-6];
      return (undefined *)(*(longlong *)(puVar3 + -4) + (longlong)(puVar3[-2] + -1) * 0xc + 8);
    }
  }
  *param_2 = 0xff000000;
  if (DAT_14c83ff88 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110)) {
    return &DAT_14c83ff84;
  }
  FUN_144b3d300(&DAT_14c83ff88);
  if (DAT_14c83ff88 != -1) {
    return &DAT_14c83ff84;
  }
  _DAT_14c83ff84 = 0;
  _Init_thread_footer(&DAT_14c83ff88);
  return &DAT_14c83ff84;
}



// FUNCTION 1467c0dfe FUN_1467c0dfe body=62 status=ok
// SIG undefined FUN_1467c0dfe(void)

void FUN_1467c0dfe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467c0e3c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1467c0e3c FUN_1467c0e3c body=112 status=ok
// SIG undefined FUN_1467c0e3c(void)

ulonglong FUN_1467c0e3c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467c0e76;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_1467c0e76:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467c0eac FUN_1467c0eac body=90 status=ok
// SIG undefined FUN_1467c0eac(void)

void FUN_1467c0eac(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1467c0f06 FUN_1467c0f06 body=62 status=ok
// SIG undefined FUN_1467c0f06(void)

void FUN_1467c0f06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467c0f44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1467c0f44 FUN_1467c0f44 body=112 status=ok
// SIG undefined FUN_1467c0f44(void)

ulonglong FUN_1467c0f44(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467c0f7e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1467c0f7e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467c0fb4 FUN_1467c0fb4 body=115 status=ok
// SIG undefined FUN_1467c0fb4(void)

undefined8 FUN_1467c0fb4(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  
  plVar6 = (longlong *)param_1[9];
  if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467c1017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0xa8))();
    return uVar5;
  }
  uVar3 = *(uint *)(plVar6 + 1);
  uVar8 = 0;
  uVar7 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      if (*(int *)(*plVar6 + (ulonglong)uVar1 * 0x18) < 0) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  if ((int)uVar8 < (int)uVar3) {
    piVar2 = (int *)(*plVar6 + (ulonglong)uVar8 * 0x18);
    plVar6 = (longlong *)0x0;
    if (*piVar2 < 1) {
      plVar6 = (longlong *)(piVar2 + 2);
    }
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  return CONCAT71((int7)((ulonglong)*plVar6 >> 8),*(undefined1 *)(*plVar6 + 8));
}



// FUNCTION 1467c1028 FUN_1467c1028 body=426 status=ok
// SIG undefined FUN_1467c1028(void)

void FUN_1467c1028(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  wchar_t *pwVar3;
  uint *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  uint *local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_2 + 0x10))(param_2,L"\nHISTORY",*puVar2,puVar2 + 4);
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar4 = (uint *)*param_1;
    local_80 = puVar4 + (longlong)*(int *)(param_1 + 1) * 6;
    do {
      if ((longlong)(int)puVar4[4] != 0) {
        plVar8 = *(longlong **)(puVar4 + 2);
        lVar7 = (longlong)(int)puVar4[4] * 0xc;
        do {
          lVar1 = *plVar8;
          puVar5 = &DAT_149dfb77a;
          if (lVar1 != 0) {
            FUN_1400021e4(plVar8,&local_68);
            puVar5 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar5 = local_68;
            }
            FUN_140002266(&local_58,L" [%s]",puVar5);
            puVar5 = &DAT_149dfb77a;
            if (local_50 != 0) {
              puVar5 = local_58;
            }
          }
          pwVar3 = L"false";
          if ((char)plVar8[1] != '\0') {
            pwVar3 = L"true";
          }
          FUN_140056680(&local_78,pwVar3);
          puVar6 = &DAT_149dfb77a;
          if (local_70 != 0) {
            puVar6 = local_78;
          }
          pwVar3 = L"<UNKNOWN>";
          if (*puVar4 < 0xf000000) {
            pwVar3 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[*puVar4 >> 0x18];
          }
          local_88 = puVar5;
          FUN_140047918(param_2,L"%s: %s%s",pwVar3,puVar6);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (lVar1 != 0) {
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar8 = (longlong *)((longlong)plVar8 + 0xc);
          lVar7 = lVar7 + -0xc;
        } while (lVar7 != 0);
      }
      puVar4 = puVar4 + 6;
    } while (puVar4 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c11e0 FUN_1467c11e0 body=65 status=ok
// SIG undefined FUN_1467c11e0(void)

float FUN_1467c11e0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (ulonglong)(bVar1 ^ 1);
  }
  return (float)*(int *)(param_1 + 0x50 + uVar2 * 4);
}



// FUNCTION 1467c1234 FUN_1467c1234 body=76 status=ok
// SIG undefined FUN_1467c1234(void)

byte FUN_1467c1234(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (ulonglong)(bVar1 ^ 1);
  }
  return -(*(float *)(param_1 + 0x50 + uVar2 * 4) != 0.0) & 1;
}



// FUNCTION 1467c1280 FUN_1467c1280 body=46 status=ok
// SIG undefined FUN_1467c1280(void)

undefined8 FUN_1467c1280(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_1467c1458();
  FUN_140002266(param_2,&DAT_149e02016,(double)fVar1);
  return param_2;
}



// FUNCTION 1467c12e2 FUN_1467c12e2 body=47 status=ok
// SIG undefined FUN_1467c12e2(void)

void FUN_1467c12e2(longlong param_1,int param_2)

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



// FUNCTION 1467c1312 FUN_1467c1312 body=170 status=ok
// SIG undefined FUN_1467c1312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1467c1312(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = (longlong)(int)param_1[1] + 1;
  puVar1 = (undefined4 *)((longlong)(int)param_1[1] * 0x18 + *param_1);
  while (puVar3 = puVar1, lVar2 = lVar2 + -1, lVar2 != 0) {
    puVar1 = puVar3 + -6;
    if (0 < (int)puVar3[-2]) {
      *param_2 = puVar3[-6];
      return (undefined *)(*(longlong *)(puVar3 + -4) + (longlong)(puVar3[-2] + -1) * 0x10 + 8);
    }
  }
  *param_2 = 0xff000000;
  if (DAT_14c83ff98 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110)) {
    return &DAT_14c83ff90;
  }
  FUN_144b3d300(&DAT_14c83ff98);
  if (DAT_14c83ff98 != -1) {
    return &DAT_14c83ff90;
  }
  _DAT_14c83ff90 = 0;
  _Init_thread_footer(&DAT_14c83ff98);
  return &DAT_14c83ff90;
}



// FUNCTION 1467c13bc FUN_1467c13bc body=62 status=ok
// SIG undefined FUN_1467c13bc(void)

void FUN_1467c13bc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467c13fa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1467c13fa FUN_1467c13fa body=93 status=ok
// SIG undefined FUN_1467c13fa(void)

ulonglong FUN_1467c13fa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1467c1458 FUN_1467c1458 body=117 status=ok
// SIG undefined FUN_1467c1458(void)

ulonglong FUN_1467c1458(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  plVar5 = (longlong *)param_1[9];
  if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467c14bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*param_1 + 0xb8))();
    return uVar8;
  }
  uVar3 = *(uint *)(plVar5 + 1);
  uVar7 = 0;
  uVar6 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(*plVar5 + (ulonglong)uVar1 * 0x18) < 0) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  if ((int)uVar7 < (int)uVar3) {
    piVar2 = (int *)(*plVar5 + (ulonglong)uVar7 * 0x18);
    plVar5 = (longlong *)0x0;
    if (*piVar2 < 1) {
      plVar5 = (longlong *)(piVar2 + 2);
    }
  }
  else {
    plVar5 = (longlong *)0x0;
  }
  return (ulonglong)*(uint *)(*plVar5 + 8);
}



// FUNCTION 1467c14ce FUN_1467c14ce body=412 status=ok
// SIG undefined FUN_1467c14ce(void)

void FUN_1467c14ce(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  uint *puVar8;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  uint *local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_2 + 0x10))(param_2,L"\nHISTORY",*puVar2,puVar2 + 4);
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar8 = (uint *)*param_1;
    local_80 = puVar8 + (longlong)*(int *)(param_1 + 1) * 6;
    do {
      if ((longlong)(int)puVar8[4] != 0) {
        plVar3 = *(longlong **)(puVar8 + 2);
        lVar4 = (longlong)(int)puVar8[4] << 4;
        do {
          lVar1 = *plVar3;
          puVar5 = &DAT_149dfb77a;
          if (lVar1 != 0) {
            FUN_1400021e4(plVar3,&local_68);
            puVar5 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar5 = local_68;
            }
            FUN_140002266(&local_58,L" [%s]",puVar5);
            puVar5 = &DAT_149dfb77a;
            if (local_50 != 0) {
              puVar5 = local_58;
            }
          }
          FUN_140002266(&local_78,&DAT_149e02016,(double)*(float *)(plVar3 + 1));
          puVar7 = &DAT_149dfb77a;
          if (local_70 != 0) {
            puVar7 = local_78;
          }
          pwVar6 = L"<UNKNOWN>";
          if (*puVar8 < 0xf000000) {
            pwVar6 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[*puVar8 >> 0x18];
          }
          local_88 = puVar5;
          FUN_140047918(param_2,L"%s: %s%s",pwVar6,puVar7);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (lVar1 != 0) {
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar3 = plVar3 + 2;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
      puVar8 = puVar8 + 6;
    } while (puVar8 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c1684 FUN_1467c1684 body=218 status=ok
// SIG undefined FUN_1467c1684(void)

undefined4 FUN_1467c1684(longlong param_1)

{
  void *_Src;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (uint)(bVar1 ^ 1);
  }
  local_30 = (undefined2 *)0x0;
  local_28 = *(int *)(param_1 + 0x58 + (ulonglong)(uVar2 << 4));
  lVar5 = (longlong)local_28;
  _Src = *(void **)(param_1 + 0x50 + (ulonglong)(uVar2 << 4));
  if (lVar5 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar5 * 2);
    puVar4 = local_30;
    if (local_28 != 0) goto LAB_1467c1728;
  }
  puVar4 = &DAT_149dfb77a;
LAB_1467c1728:
  uVar3 = FUN_14052c20c(puVar4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1467c1760 FUN_1467c1760 body=219 status=ok
// SIG undefined FUN_1467c1760(void)

int FUN_1467c1760(longlong param_1)

{
  void *_Src;
  byte bVar1;
  uint uVar2;
  int iVar3;
  wchar_t *_Str;
  longlong lVar4;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (uint)(bVar1 ^ 1);
  }
  local_30 = (wchar_t *)0x0;
  local_28 = *(int *)(param_1 + 0x58 + (ulonglong)(uVar2 << 4));
  lVar4 = (longlong)local_28;
  _Src = *(void **)(param_1 + 0x50 + (ulonglong)(uVar2 << 4));
  if (lVar4 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar4 * 2);
    _Str = local_30;
    if (local_28 != 0) goto LAB_1467c1804;
  }
  _Str = L"";
LAB_1467c1804:
  iVar3 = _wtoi(_Str);
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1467c183c FUN_1467c183c body=186 status=ok
// SIG undefined FUN_1467c183c(void)

void FUN_1467c183c(longlong param_1)

{
  void *_Src;
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_144a61b4f();
    uVar2 = (uint)(bVar1 ^ 1);
  }
  local_30 = (void *)0x0;
  local_28 = *(int *)(param_1 + 0x58 + (ulonglong)(uVar2 << 4));
  lVar3 = (longlong)local_28;
  _Src = *(void **)(param_1 + 0x50 + (ulonglong)(uVar2 << 4));
  if (lVar3 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar3 * 2);
  }
  FUN_1467bc8dc(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c1902 FUN_1467c1902 body=38 status=ok
// SIG undefined FUN_1467c1902(void)

undefined8 FUN_1467c1902(undefined8 param_1,int param_2)

{
  FUN_145eeac12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c193c FUN_1467c193c body=51 status=ok
// SIG undefined FUN_1467c193c(void)

undefined4 FUN_1467c193c(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    pcVar2 = (char *)(param_1 + 0x58);
  }
  else {
    pcVar2 = *(char **)(param_1 + 0x50);
  }
  if (*pcVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f800000;
  }
  return uVar3;
}



// FUNCTION 1467c1976 FUN_1467c1976 body=38 status=ok
// SIG undefined FUN_1467c1976(void)

undefined8 FUN_1467c1976(undefined8 param_1,int param_2)

{
  FUN_145eeadb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c19b0 FUN_1467c19b0 body=37 status=ok
// SIG undefined FUN_1467c19b0(void)

float FUN_1467c19b0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x58);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x50);
  }
  return (float)*piVar2;
}



// FUNCTION 1467c19dc FUN_1467c19dc body=38 status=ok
// SIG undefined FUN_1467c19dc(void)

undefined8 FUN_1467c19dc(undefined8 param_1,int param_2)

{
  FUN_14591f750();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c1a16 FUN_1467c1a16 body=48 status=ok
// SIG undefined FUN_1467c1a16(void)

byte FUN_1467c1a16(longlong param_1)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    pfVar2 = (float *)(param_1 + 0x58);
  }
  else {
    pfVar2 = *(float **)(param_1 + 0x50);
  }
  return -(*pfVar2 != 0.0) & 1;
}



// FUNCTION 1467c1a46 FUN_1467c1a46 body=37 status=ok
// SIG undefined FUN_1467c1a46(void)

int FUN_1467c1a46(longlong param_1)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    pfVar2 = (float *)(param_1 + 0x58);
  }
  else {
    pfVar2 = *(float **)(param_1 + 0x50);
  }
  return (int)*pfVar2;
}



// FUNCTION 1467c1a76 FUN_1467c1a76 body=138 status=ok
// SIG undefined FUN_1467c1a76(void)

void FUN_1467c1a76(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467c1b00 FUN_1467c1b00 body=224 status=ok
// SIG undefined FUN_1467c1b00(void)

void FUN_1467c1b00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  
  if (DAT_14c83f430 != DAT_14c83f45c) {
    iVar2 = FUN_144a788f7();
    puVar4 = &DAT_14c83f460;
    if (DAT_14c83f468 != (undefined *)0x0) {
      puVar4 = DAT_14c83f468;
    }
    for (iVar2 = *(int *)(puVar4 + ((longlong)(iVar2 + (int)((ulonglong)param_1 >> 0x20)) &
                                   (longlong)DAT_14c83f470 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c83f428 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c83f428 + (longlong)iVar2 * 0x18) == param_1) {
        puVar4 = &DAT_14c83f460;
        if (DAT_14c83f468 != (undefined *)0x0) {
          puVar4 = DAT_14c83f468;
        }
        lVar1 = DAT_14c83f428 + (longlong)iVar2 * 0x18;
        lVar6 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar4 + lVar6 * 4);
        if (iVar5 == iVar2) {
          puVar3 = (undefined4 *)(puVar4 + lVar6 * 4);
        }
        else {
          do {
            lVar6 = (longlong)iVar5;
            iVar5 = *(int *)(DAT_14c83f428 + 0x10 + lVar6 * 0x18);
          } while (iVar5 != iVar2);
          puVar3 = (undefined4 *)(DAT_14c83f428 + lVar6 * 0x18 + 0x10);
        }
        *puVar3 = *(undefined4 *)(lVar1 + 0x10);
        FUN_1467be98a();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1467c1be2 FUN_1467c1be2 body=83 status=ok
// SIG undefined FUN_1467c1be2(void)

undefined8 * FUN_1467c1be2(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c1c36 FUN_1467c1c36 body=83 status=ok
// SIG undefined FUN_1467c1c36(void)

undefined8 * FUN_1467c1c36(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c1c8a FUN_1467c1c8a body=83 status=ok
// SIG undefined FUN_1467c1c8a(void)

undefined8 * FUN_1467c1c8a(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c1cde FUN_1467c1cde body=83 status=ok
// SIG undefined FUN_1467c1cde(void)

undefined8 * FUN_1467c1cde(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c1d31 FUN_1467c1d31 body=74 status=ok
// SIG undefined FUN_1467c1d31(void)

void * FUN_1467c1d31(void *param_1,size_t param_2,uint param_3)

{
  void *pvVar1;
  
  if (param_2 != 0 && param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467c1d4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)_aligned_realloc(param_1,param_2,param_3);
    return pvVar1;
  }
  if (param_1 != (void *)0x0) {
    _aligned_free(param_1);
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467c1d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = _aligned_malloc(param_2,(ulonglong)param_3);
  return pvVar1;
}



// FUNCTION 1467c1d7c FUN_1467c1d7c body=99 status=ok
// SIG undefined FUN_1467c1d7c(void)

undefined8 * FUN_1467c1d7c(undefined8 *param_1)

{
  HANDLE HeapHandle;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = &PTR_FUN_149e14350;
  HeapHandle = (HANDLE)_get_heap_handle();
  local_14 = 2;
  HeapSetInformation(HeapHandle,HeapCompatibilityInformation,&local_14,4);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c1df2 FUN_1467c1df2 body=17 status=ok
// SIG undefined FUN_1467c1df2(void)

undefined1 FUN_1467c1df2(void)

{
  _heapchk();
  return 1;
}



// FUNCTION 1467c1e06 FUN_1467c1e06 body=79 status=ok
// SIG undefined FUN_1467c1e06(void)

void FUN_1467c1e06(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e14bb0;
  lVar1 = 0xd10;
  do {
    DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + lVar1));
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0x50);
  *param_1 = &PTR_LAB_149e15d70;
                    /* WARNING: Could not recover jumptable at 0x0001467c1e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return;
}



// FUNCTION 1467c1e5e FUN_1467c1e5e body=173 status=ok
// SIG undefined FUN_1467c1e5e(void)

void FUN_1467c1e5e(undefined8 param_1,ulonglong param_2,uint param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_4 == '\0') {
    uVar3 = 0x10;
    if (0x10 < param_3) {
      uVar3 = (ulonglong)param_3;
    }
    uVar4 = -uVar3 & (param_2 + uVar3) - 1;
    if (param_3 < 0x81 && uVar4 < 0x7ff1) {
      bVar2 = (&DAT_14c840860)[uVar4 + 0xf >> 4];
      uVar4 = 0x32;
      if (0x32 < bVar2) {
        uVar4 = (ulonglong)bVar2;
      }
      uVar5 = 0x32 - (ulonglong)bVar2;
      do {
        param_2 = (ulonglong)(ushort)(&DAT_14c8407e0)[uVar5 & 0xffffffff];
        if (((uint)(ushort)(&DAT_14c8407e0)[uVar5 & 0xffffffff] & (int)uVar3 + 0xffffU) == 0)
        goto LAB_1467c1e64;
        lVar1 = uVar4 + 1 + uVar5;
        uVar5 = uVar5 - 1;
      } while (lVar1 != 0x33);
    }
    FUN_1400229f8();
    return;
  }
LAB_1467c1e64:
  FUN_140022b52(param_1,param_2);
  return;
}



// FUNCTION 1467c1f0c FUN_1467c1f0c body=1105 status=ok
// SIG undefined FUN_1467c1f0c(void)

void * FUN_1467c1f0c(longlong param_1,void *param_2,ulonglong param_3,uint param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  
  if (param_3 == 0) {
    FUN_140023428(param_1,param_2);
    pvVar4 = (void *)0x0;
  }
  else {
    if ((short)param_2 == 0) {
      if (param_2 == (void *)0x0) {
        pvVar4 = (void *)FUN_1467c1e5e(param_1,param_3,param_4,param_4 < 0x11 && param_3 < 0x7ff1);
        return pvVar4;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
      EnterCriticalSection(lpCriticalSection);
      uVar9 = (longlong)param_2 - *(longlong *)(param_1 + 0x28);
      uVar5 = uVar9 >> (*(byte *)(param_1 + 0x10) & 0x3f);
      puVar6 = (ulonglong *)
               ((ulonglong)(*(int *)(param_1 + 0x20) - 1U & (uint)uVar5) * 0x20 +
               *(longlong *)(param_1 + 0x68));
      puVar7 = puVar6;
      do {
        if (*puVar7 == uVar5) {
          lVar10 = (ulonglong)
                   (*(uint *)(param_1 + 0x18) & (uint)(uVar9 >> (*(byte *)(param_1 + 8) & 0x3f))) *
                   0x20 + puVar7[1];
          if (lVar10 != 0) goto LAB_1467c208b;
          break;
        }
        puVar7 = (ulonglong *)puVar7[3];
      } while (puVar7 != puVar6);
      FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x2f1,
                    L"FMallocBinned2 Attempt to realloc an unrecognized pointer %p",param_2);
      lVar10 = 0;
LAB_1467c208b:
      if (*(short *)(lVar10 + 2) != 0x17ea) {
        FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x90,
                      L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",
                      *(short *)(lVar10 + 2),0x17ea);
      }
      uVar3 = *(uint *)(lVar10 + 4);
      uVar9 = param_3;
      if (param_3 < 0x7ff1 && param_4 < 0x11) {
LAB_1467c2341:
        LeaveCriticalSection(lpCriticalSection);
        pvVar4 = (void *)FUN_140022b52(param_1,uVar9);
      }
      else {
        uVar5 = *(ulonglong *)(lVar10 + 8);
        uVar11 = 0x10;
        if (0x10 < param_4) {
          uVar11 = (ulonglong)param_4;
        }
        uVar9 = (param_3 + uVar11) - 1 & -uVar11;
        if (param_4 < 0x81 && uVar9 < 0x7ff1) {
          bVar2 = (&DAT_14c840860)[uVar9 + 0xf >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar2) {
            uVar8 = (ulonglong)bVar2;
          }
          uVar12 = 0x32 - (ulonglong)bVar2;
          do {
            uVar9 = (ulonglong)(ushort)(&DAT_14c8407e0)[uVar12 & 0xffffffff];
            if (((uint)(ushort)(&DAT_14c8407e0)[uVar12 & 0xffffffff] & (int)uVar11 + 0xffffU) == 0)
            goto LAB_1467c2341;
            lVar1 = uVar8 + 1 + uVar12;
            uVar12 = uVar12 - 1;
          } while (lVar1 != 0x33);
        }
        if ((param_3 <= uVar5) &&
           (uVar5 <= (-(ulonglong)DAT_14c841d40 & (param_3 - 1) + (ulonglong)DAT_14c841d40))) {
          LeaveCriticalSection(lpCriticalSection);
          if (*(short *)(lVar10 + 2) != 0x17ea) {
            FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x90,
                          L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",
                          *(short *)(lVar10 + 2),0x17ea);
          }
          *(int *)(lVar10 + 4) = (int)((param_3 + uVar11 + 0xfffffffff & -uVar11) >> 4);
          *(ulonglong *)(lVar10 + 8) = uVar5;
          return param_2;
        }
        pvVar4 = (void *)FUN_1400229f8(param_1,param_3,uVar11);
        LeaveCriticalSection(lpCriticalSection);
        uVar9 = param_3;
      }
      param_3 = (ulonglong)uVar3 << 4;
      if (uVar9 < param_3) {
        param_3 = uVar9;
      }
    }
    else {
      puVar13 = (ushort *)((ulonglong)param_2 & 0xffffffffffff0000);
      if (*(char *)((longlong)puVar13 + 3) != -0x1d) {
        FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x3cb,
                      L"FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x"
                      ,puVar13,*(char *)((longlong)puVar13 + 3),0xe3);
      }
      uVar9 = (ulonglong)*puVar13;
      if ((param_3 <= uVar9) && ((param_4 - 1 & (uint)*puVar13) == 0)) {
        if ((byte)puVar13[1] == 0) {
          return param_2;
        }
        if ((ushort)(&DAT_14c8407e0)[0x33 - (byte)puVar13[1]] < param_3) {
          return param_2;
        }
      }
      if ((param_3 < 0x7ff1) && (uVar5 = param_3, param_4 < 0x11)) {
LAB_1467c1f7c:
        pvVar4 = (void *)FUN_140022b52(param_1,uVar5);
      }
      else {
        uVar11 = 0x10;
        if (0x10 < param_4) {
          uVar11 = (ulonglong)param_4;
        }
        uVar5 = -uVar11 & (param_3 + uVar11) - 1;
        if (param_4 < 0x81 && uVar5 < 0x7ff1) {
          bVar2 = (&DAT_14c840860)[uVar5 + 0xf >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar2) {
            uVar8 = (ulonglong)bVar2;
          }
          uVar12 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c8407e0)[uVar12 & 0xffffffff];
            if (((uint)(ushort)(&DAT_14c8407e0)[uVar12 & 0xffffffff] & (int)uVar11 + 0xffffU) == 0)
            goto LAB_1467c1f7c;
            lVar10 = uVar8 + 1 + uVar12;
            uVar12 = uVar12 - 1;
          } while (lVar10 != 0x33);
        }
        pvVar4 = (void *)FUN_1400229f8(param_1,param_3);
      }
      if (uVar9 <= param_3) {
        param_3 = uVar9;
      }
    }
    memcpy(pvVar4,param_2,param_3);
    FUN_140023428(param_1,param_2);
  }
  return pvVar4;
}



// FUNCTION 1467c235e FUN_1467c235e body=76 status=ok
// SIG undefined FUN_1467c235e(void)

undefined1 FUN_1467c235e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x90;
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar1));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + lVar1));
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0xd50);
  return 1;
}



// FUNCTION 1467c23e4 FUN_1467c23e4 body=54 status=ok
// SIG undefined FUN_1467c23e4(void)

undefined8 FUN_1467c23e4(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x568));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x568));
  return 1;
}



// FUNCTION 1467c2422 FUN_1467c2422 body=92 status=ok
// SIG undefined FUN_1467c2422(void)

ulonglong FUN_1467c2422(longlong param_1)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar2;
  ulonglong uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x78) + 0x80);
  if (UNRECOVERED_JUMPTABLE == FUN_1467c2c2c) {
    pbVar2 = TlsGetValue(DAT_14c758740);
    uVar3 = 0;
    if (pbVar2 != (byte *)0x0) {
      uVar3 = 0;
      LOCK();
      bVar1 = *pbVar2;
      if (bVar1 == 0) {
        *pbVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)bVar1;
      }
      UNLOCK();
      if (bVar1 != 0) {
        uVar3 = FUN_1447d2058(pbVar2);
      }
      pbVar2[0x670] = 1;
    }
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467c2471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)();
  return uVar3;
}



// FUNCTION 1467c247e FUN_1467c247e body=95 status=ok
// SIG undefined FUN_1467c247e(void)

char FUN_1467c247e(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x78) + 0x88);
  if (UNRECOVERED_JUMPTABLE != FUN_1467c2c66) {
                    /* WARNING: Could not recover jumptable at 0x0001467c24d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    cVar1 = (*UNRECOVERED_JUMPTABLE)();
    return cVar1;
  }
  FUN_14002cacc();
  pcVar2 = TlsGetValue(DAT_14c758740);
  cVar1 = '\0';
  if (pcVar2 != (char *)0x0) {
    pcVar2[0x670] = '\0';
    LOCK();
    cVar1 = *pcVar2;
    bVar3 = cVar1 == '\x01';
    if (bVar3) {
      *pcVar2 = '\0';
      cVar1 = '\x01';
    }
    UNLOCK();
    if (!bVar3) {
      cVar1 = FUN_14008cdb0();
      return cVar1;
    }
  }
  return cVar1;
}



// FUNCTION 1467c24de FUN_1467c24de body=41 status=ok
// SIG undefined FUN_1467c24de(void)

void FUN_1467c24de(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb0))();
  FUN_1468161aa(param_2,
                L"Allocator Stats for binned2 are not in this build set UE_MB2_ALLOCATOR_STATS 1 in MallocBinned2.cpp"
               );
  return;
}



// FUNCTION 1467c2508 FUN_1467c2508 body=435 status=ok
// SIG undefined FUN_1467c2508(void)

undefined8 FUN_1467c2508(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  for (puVar5 = *(undefined8 **)(param_1 + 0x548); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    if ((*(ulonglong *)(puVar5[2] + 8) <= param_2) && (param_2 < *(ulonglong *)(puVar5[2] + 0x10)))
    {
      FUN_142758cd8(param_2 & 0xffffffffffff0000);
      goto LAB_1467c256e;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  if (*(code **)(*plVar4 + 0x68) != FUN_1467c2bc0) {
                    /* WARNING: Could not recover jumptable at 0x0001467c2667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2,param_3);
    return uVar7;
  }
  if ((short)param_2 == 0) {
    if (param_2 == 0) {
      return 0;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar4 + 7);
    EnterCriticalSection(lpCriticalSection);
    lVar10 = plVar4[5];
    bVar2 = *(byte *)(plVar4 + 1);
    uVar9 = param_2 - lVar10 >> (*(byte *)(plVar4 + 2) & 0x3f);
    uVar3 = *(uint *)(plVar4 + 3);
    puVar6 = (ulonglong *)((ulonglong)((int)plVar4[4] - 1U & (uint)uVar9) * 0x20 + plVar4[0xd]);
    puVar8 = puVar6;
    do {
      if (*puVar8 == uVar9) {
        uVar9 = puVar8[1];
        LeaveCriticalSection(lpCriticalSection);
        lVar10 = uVar9 + (ulonglong)(uVar3 & (uint)(param_2 - lVar10 >> (bVar2 & 0x3f))) * 0x20;
        if (lVar10 == 0) goto LAB_1467c2615;
        goto LAB_1467c25e8;
      }
      puVar8 = (ulonglong *)puVar8[3];
    } while (puVar8 != puVar6);
    LeaveCriticalSection(lpCriticalSection);
LAB_1467c2615:
    FUN_140033559("Runtime\\Core\\Public\\HAL/MallocBinnedCommon.h",0x369,
                  L"FMallocBinned Attempt to GetAllocationSizeExternal an unrecognized pointer %p",
                  param_2);
    lVar10 = 0;
LAB_1467c25e8:
    if (*(short *)(lVar10 + 2) != 0x17ea) {
      FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x90,
                    L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",
                    *(short *)(lVar10 + 2),0x17ea);
    }
    uVar9 = *(ulonglong *)(lVar10 + 8);
  }
  else {
    cVar1 = *(char *)((param_2 & 0xffffffffffff0000) + 3);
    if (cVar1 != -0x1d) {
      FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x3cb,
                    L"FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x"
                    ,param_2 & 0xffffffffffff0000,cVar1,0xe3);
    }
LAB_1467c256e:
    uVar9 = (ulonglong)*(ushort *)(param_2 & 0xffffffffffff0000);
  }
  *param_3 = uVar9;
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 1467c26e0 FUN_1467c26e0 body=44 status=ok
// SIG undefined FUN_1467c26e0(void)

void FUN_1467c26e0(longlong *param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*param_1 + 0x28))();
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_2);
    return;
  }
  return;
}



// FUNCTION 1467c270c FUN_1467c270c body=263 status=ok
// SIG undefined FUN_1467c270c(void)

longlong *
FUN_1467c270c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e16d70;
  local_58 = *param_7;
  uStack_54 = param_7[1];
  uStack_50 = param_7[2];
  uStack_4c = param_7[3];
  local_68 = &local_58;
  local_60 = param_8;
  local_70 = param_6;
  local_78 = param_5;
  FUN_1411b0f48(plVar3 + 2,param_2,param_3,param_4);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
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
  FUN_1411b0ef2(*param_1,param_1);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c2814 FUN_1467c2814 body=52 status=ok
// SIG undefined FUN_1467c2814(void)

undefined8 FUN_1467c2814(longlong *param_1)

{
  longlong lVar1;
  DWORD DVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0xb0) == 0)) {
    uVar3 = 0;
  }
  else {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,DVar2) >> 8),
                     DVar2 != *(DWORD *)(*(longlong *)(lVar1 + 0xb0) + 0x34));
  }
  return uVar3;
}



// FUNCTION 1467c2848 FUN_1467c2848 body=8 status=ok
// SIG undefined FUN_1467c2848(void)

undefined8 FUN_1467c2848(void)

{
  return DAT_14c8426d8;
}



// FUNCTION 1467c2862 FUN_1467c2862 body=161 status=ok
// SIG undefined FUN_1467c2862(void)

bool FUN_1467c2862(longlong param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  longlong lVar3;
  DWORD DVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x208) == 0) {
    DVar2 = GetCurrentThreadId();
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      lVar3 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x80);
      }
      DVar4 = *(DWORD *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & DVar2) * 4);
      if (DVar4 != 0xffffffff) {
        do {
          pDVar1 = (DWORD *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)DVar4 * 0x48);
          if (*pDVar1 == DVar2) {
            if (((ulonglong)(pDVar1 + 2) & 0xfffffffffffffff7) != 0) {
              bVar5 = pDVar1[6] == 0;
              goto LAB_1467c28a1;
            }
            break;
          }
          DVar4 = pDVar1[0x10];
        } while (DVar4 != 0xffffffff);
      }
    }
    bVar5 = false;
LAB_1467c28a1:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 1467c2916 FUN_1467c2916 body=279 status=ok
// SIG undefined FUN_1467c2916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1467c2916(LPCRITICAL_SECTION param_1,uint param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG *pp_Var1;
  HANDLE *ppvVar2;
  LPCRITICAL_SECTION p_Var3;
  int iVar4;
  undefined *puVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c842768) && (FUN_144b3d300(&DAT_14c842768), DAT_14c842768 == -1)) {
    _DAT_14c842758 = 0;
    uRam000000014c842760 = 0;
    atexit((_func_5014 *)&LAB_14275bb1b);
    _Init_thread_footer(&DAT_14c842768);
  }
  EnterCriticalSection(param_1);
  puVar5 = &DAT_14c842758;
  if ((int)param_1[0x9a].SpinCount != param_1[0x9c].RecursionCount) {
    ppvVar2 = &param_1[0x9c].OwningThread;
    if (*(HANDLE **)&param_1[0xa9].LockCount != (HANDLE *)0x0) {
      ppvVar2 = *(HANDLE **)&param_1[0xa9].LockCount;
    }
    iVar4 = *(int *)((longlong)ppvVar2 +
                    (ulonglong)(*(int *)&param_1[0xa9].OwningThread - 1U & param_2) * 4);
    if (iVar4 != -1) {
      p_Var3 = param_1 + 1;
      if (param_1[0x9a].LockSemaphore != (LPCRITICAL_SECTION)0x0) {
        p_Var3 = param_1[0x9a].LockSemaphore;
      }
      do {
        pp_Var1 = &p_Var3->DebugInfo + (longlong)iVar4 * 3;
        if (*(uint *)pp_Var1 == param_2) {
          if (pp_Var1 + 1 != (PRTL_CRITICAL_SECTION_DEBUG *)0x0 &&
              pp_Var1 != (PRTL_CRITICAL_SECTION_DEBUG *)0x0) {
            puVar5 = (undefined *)((longlong)pp_Var1[1] + 8);
          }
          break;
        }
        iVar4 = *(int *)(pp_Var1 + 2);
      } while (iVar4 != -1);
    }
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return puVar5;
}



// FUNCTION 1467c2a2e FUN_1467c2a2e body=123 status=ok
// SIG undefined FUN_1467c2a2e(void)

void FUN_1467c2a2e(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 800);
  if ((longlong)iVar1 < 100) {
    *(undefined4 *)(param_1 + 800) = 100;
    if ((uint)(*(int *)(param_1 + 0x324) - iVar1) < 100U - iVar1) {
      FUN_1467c36e8(param_1);
    }
    memset((void *)(param_1 + (longlong)iVar1 * 8),0,(ulonglong)(100U - iVar1) << 3);
    return;
  }
  if (iVar1 == 100) {
    return;
  }
  *(undefined4 *)(param_1 + 800) = 100;
  FUN_1467c370e(param_1);
  return;
}



// FUNCTION 1467c2aaa FUN_1467c2aaa body=111 status=ok
// SIG undefined FUN_1467c2aaa(void)

undefined8 * FUN_1467c2aaa(undefined8 *param_1)

{
  uint uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_LAB_149e16820;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  uVar1 = DAT_14c758758 | 0x80000000;
  DAT_14c758758 = DAT_14c758758 + 1;
  *(uint *)((longlong)param_1 + 0x34) = uVar1;
  FUN_141033dca();
  FUN_141033f1e(&DAT_14c842770,*(undefined4 *)((longlong)param_1 + 0x34),param_1);
  return param_1;
}



// FUNCTION 1467c2b1a FUN_1467c2b1a body=80 status=ok
// SIG undefined FUN_1467c2b1a(void)

undefined8 FUN_1467c2b1a(int *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (param_1[0x1c] <= iVar3) {
    return 0;
  }
  piVar2 = param_1 + 2;
  if (*(int **)(param_1 + 0x1a) != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x1a);
  }
  piVar2 = piVar2 + (longlong)iVar3 * 4 + 2;
  do {
    if (0 < *piVar2) {
      uVar1 = **(undefined8 **)(piVar2 + -2);
      if (param_2 == (undefined1 *)0x0) {
        return uVar1;
      }
      *param_2 = (char)iVar3;
      return uVar1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 4;
  } while (param_1[0x1c] != iVar3);
  return 0;
}



// FUNCTION 1467c2b6a free body=7 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001467c2b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 1467c2b72 FUN_1467c2b72 body=30 status=ok
// SIG undefined FUN_1467c2b72(void)

void * FUN_1467c2b72(void *param_1,int param_2)

{
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1467c2b98 FUN_1467c2b98 body=39 status=ok
// SIG undefined FUN_1467c2b98(void)

void * FUN_1467c2b98(void *param_1,int param_2)

{
  FUN_1467c1e06();
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1467c2bc0 FUN_1467c2bc0 body=108 status=ok
// SIG undefined FUN_1467c2bc0(void)

undefined8 FUN_1467c2bc0(undefined8 param_1,ulonglong param_2,ulonglong *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  if ((short)param_2 != 0) {
    puVar3 = (ushort *)(param_2 & 0xffffffffffff0000);
    if (*(char *)((longlong)puVar3 + 3) != -0x1d) {
      FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x3cb,
                    L"FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x"
                    ,puVar3,*(char *)((longlong)puVar3 + 3),0xe3);
    }
    uVar1 = *puVar3;
    *param_3 = (ulonglong)uVar1;
    return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
  }
  uVar2 = FUN_1467c4d90(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 1467c2c2c FUN_1467c2c2c body=58 status=ok
// SIG undefined FUN_1467c2c2c(void)

ulonglong FUN_1467c2c2c(void)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  pbVar2 = TlsGetValue(DAT_14c758740);
  uVar3 = 0;
  if (pbVar2 != (byte *)0x0) {
    uVar3 = 0;
    LOCK();
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      *pbVar2 = 1;
    }
    else {
      uVar3 = (ulonglong)bVar1;
    }
    UNLOCK();
    if (bVar1 != 0) {
      uVar3 = FUN_1447d2058(pbVar2);
    }
    pbVar2[0x670] = 1;
  }
  return uVar3;
}



// FUNCTION 1467c2c66 FUN_1467c2c66 body=61 status=ok
// SIG undefined FUN_1467c2c66(void)

char FUN_1467c2c66(void)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  FUN_14002cacc();
  pcVar2 = TlsGetValue(DAT_14c758740);
  cVar1 = (char)pcVar2;
  if (pcVar2 != (char *)0x0) {
    pcVar2[0x670] = '\0';
    LOCK();
    cVar1 = *pcVar2;
    bVar3 = cVar1 == '\x01';
    if (bVar3) {
      *pcVar2 = '\0';
      cVar1 = '\x01';
    }
    UNLOCK();
    if (!bVar3) {
      cVar1 = FUN_14008cdb0();
      return cVar1;
    }
  }
  return cVar1;
}



// FUNCTION 1467c2cac FUN_1467c2cac body=89 status=ok
// SIG undefined FUN_1467c2cac(void)

undefined8 * FUN_1467c2cac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e15440;
  DAT_14c842600 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xad));
  *param_1 = &PTR_LAB_149e15d70;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1467c2d06 FUN_1467c2d06 body=3 status=ok
// SIG undefined FUN_1467c2d06(void)

undefined8 FUN_1467c2d06(void)

{
  return 0;
}



// FUNCTION 1467c2d2a FUN_1467c2d2a body=68 status=ok
// SIG undefined FUN_1467c2d2a(void)

void FUN_1467c2d2a(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 <= *(int *)(param_1 + 0x408)) {
    uVar1 = FUN_1467c2d70(*(int *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x40c));
    *(undefined4 *)(param_1 + 0x40c) = uVar1;
    FUN_140b3d1ac(param_1,param_2,uVar1,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467c2d70 FUN_1467c2d70 body=91 status=ok
// SIG undefined FUN_1467c2d70(void)

ulonglong FUN_1467c2d70(uint param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0x20;
  if (0x20 < param_1) {
    lVar1 = (longlong)(int)param_1;
    if (0x20 < param_2) {
      lVar1 = lVar1 + ((ulonglong)(lVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = lVar1 << 5;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
    }
    uVar3 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar2 >> 5)) {
      uVar3 = uVar2 >> 5 & 0xffffffff;
    }
  }
  return uVar3;
}



// FUNCTION 1467c2dcc FUN_1467c2dcc body=160 status=ok
// SIG undefined FUN_1467c2dcc(void)

int FUN_1467c2dcc(longlong param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x42c)) {
    lVar5 = param_1 + 0x430;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x470);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x478) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar5 = param_1;
      }
      uVar3 = *param_3;
      iVar2 = *(int *)(param_3 + 1);
      do {
        lVar6 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar5 + 8 + lVar6) == iVar2) {
          if (iVar2 == 0) {
            return iVar1;
          }
          iVar4 = FUN_144a54874(*(undefined8 *)(lVar5 + lVar6),uVar3,(longlong)iVar2);
          if (iVar4 == 0) {
            return iVar1;
          }
        }
        iVar1 = *(int *)(lVar5 + 0x18 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1467c2ea4 FUN_1467c2ea4 body=29 status=ok
// SIG undefined FUN_1467c2ea4(void)

undefined8 FUN_1467c2ea4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c2ec2 FUN_1467c2ec2 body=29 status=ok
// SIG undefined FUN_1467c2ec2(void)

undefined8 FUN_1467c2ec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c2f68 FUN_1467c2f68 body=30 status=ok
// SIG undefined FUN_1467c2f68(void)

undefined8 FUN_1467c2f68(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
  return param_2;
}



// FUNCTION 1467c2f98 FUN_1467c2f98 body=30 status=ok
// SIG undefined FUN_1467c2f98(void)

undefined8 FUN_1467c2f98(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))();
  return param_2;
}



// FUNCTION 1467c2fb6 FUN_1467c2fb6 body=30 status=ok
// SIG undefined FUN_1467c2fb6(void)

undefined8 FUN_1467c2fb6(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 200))();
  return param_2;
}



// FUNCTION 1467c2fd4 FUN_1467c2fd4 body=139 status=ok
// SIG undefined FUN_1467c2fd4(void)

undefined8 * FUN_1467c2fd4(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0xe8))();
  if (plVar1 == (longlong *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20058,0x10);
    *puVar2 = &PTR_FUN_149e167c0;
    puVar2[1] = plVar1;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    puVar2[2] = uVar3;
    puVar2[3] = uVar3;
    uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1);
    puVar2[4] = uVar3;
    *(undefined2 *)(puVar2 + 5) = 0x100;
    *(undefined4 *)(puVar2 + 0x400a) = 0;
    *(undefined4 *)(puVar2 + 0x4006) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x20034) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x4007) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2003c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x4008) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x20044) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x4009) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2004c) = 0xffffffff;
  }
  return puVar2;
}



// FUNCTION 1467c3060 FUN_1467c3060 body=145 status=ok
// SIG undefined FUN_1467c3060(void)

undefined8 *
FUN_1467c3060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x100))();
  if (plVar1 == (longlong *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20058,0x10);
    *puVar2 = &PTR_FUN_149e167c0;
    puVar2[1] = plVar1;
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    puVar2[2] = uVar3;
    puVar2[3] = uVar3;
    uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1);
    puVar2[4] = uVar3;
    *(undefined1 *)(puVar2 + 5) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x29) = param_4;
    *(undefined4 *)(puVar2 + 0x400a) = 0;
    *(undefined4 *)(puVar2 + 0x4006) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x20034) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x4007) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2003c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x4008) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x20044) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x4009) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x2004c) = 0xffffffff;
  }
  return puVar2;
}



// FUNCTION 1467c3128 FUN_1467c3128 body=30 status=ok
// SIG undefined FUN_1467c3128(void)

undefined8 FUN_1467c3128(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x120))();
  return param_2;
}



// FUNCTION 1467c3230 FUN_1467c3230 body=30 status=ok
// SIG undefined FUN_1467c3230(void)

undefined8 FUN_1467c3230(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x1f0))();
  return param_2;
}



// FUNCTION 1467c324e FUN_1467c324e body=30 status=ok
// SIG undefined FUN_1467c324e(void)

undefined8 FUN_1467c324e(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x1f8))();
  return param_2;
}



// FUNCTION 1467c327e FUN_1467c327e body=62 status=ok
// SIG undefined FUN_1467c327e(void)

undefined8 * FUN_1467c327e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e167c0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c32ec FUN_1467c32ec body=534 status=ok
// SIG undefined FUN_1467c32ec(void)

undefined8 FUN_1467c32ec(longlong param_1,void *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  size_t _Size;
  ulonglong _Size_00;
  
  if ((longlong)param_3 < 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 0;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x20) < (longlong)(uVar7 + param_3)) {
LAB_1467c331c:
    uVar5 = 0;
  }
  else {
    if (param_3 != 0) {
      if (param_3 < 0x10001) {
        do {
          uVar4 = 0;
          bVar1 = true;
          do {
            bVar6 = bVar1;
            if ((*(longlong *)(&DAT_00020030 + uVar4 * 8 + param_1) <= (longlong)uVar7) &&
               ((longlong)uVar7 < *(longlong *)(&DAT_00020040 + uVar4 * 8 + param_1)))
            goto LAB_1467c3463;
            uVar4 = 1;
            bVar1 = false;
          } while (bVar6);
          uVar7 = uVar7 & 0xffffffffffff0000;
          uVar4 = *(longlong *)(param_1 + 0x20) - uVar7;
          if (0xffff < uVar4) {
            uVar4 = 0x10000;
          }
          if ((*(ulonglong *)(param_1 + 0x18) != uVar7) &&
             (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                                (*(longlong **)(param_1 + 8),uVar7), cVar2 != '\0')) {
            *(ulonglong *)(param_1 + 0x18) = uVar7;
          }
          cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                            (*(longlong **)(param_1 + 8),
                             (longlong)*(int *)(param_1 + 0x20050) * 0x10000 + param_1 + 0x2a,uVar4)
          ;
          if (cVar2 == '\0') goto LAB_1467c331c;
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + uVar4;
          *(ulonglong *)(&DAT_00020030 + (longlong)*(int *)(param_1 + 0x20050) * 8 + param_1) =
               uVar7;
          *(ulonglong *)(&DAT_00020040 + (longlong)*(int *)(param_1 + 0x20050) * 8 + param_1) =
               uVar4 + uVar7;
          uVar4 = (ulonglong)*(uint *)(param_1 + 0x20050);
          *(uint *)(param_1 + 0x20050) = ~*(uint *)(param_1 + 0x20050) & 1;
          uVar7 = *(ulonglong *)(param_1 + 0x10);
LAB_1467c3463:
          _Size_00 = *(longlong *)(&DAT_00020040 + uVar4 * 8 + param_1) - uVar7;
          if (param_3 < *(longlong *)(&DAT_00020040 + uVar4 * 8 + param_1) - uVar7) {
            _Size_00 = param_3;
          }
          memcpy(param_2,(void *)((uVar7 - *(longlong *)(&DAT_00020030 + uVar4 * 8 + param_1)) +
                                 uVar4 * 0x10000 + param_1 + 0x2a),_Size_00);
          uVar7 = *(longlong *)(param_1 + 0x10) + _Size_00;
          *(ulonglong *)(param_1 + 0x10) = uVar7;
          param_2 = (void *)((longlong)param_2 + _Size_00);
          param_3 = param_3 - _Size_00;
        } while (param_3 != 0);
      }
      else {
        lVar3 = 0;
        bVar1 = true;
        do {
          bVar6 = bVar1;
          if ((*(longlong *)(&DAT_00020030 + lVar3 * 8 + param_1) <= (longlong)uVar7) &&
             (_Size = *(longlong *)(&DAT_00020040 + lVar3 * 8 + param_1) - uVar7,
             _Size != 0 && (longlong)uVar7 <= *(longlong *)(&DAT_00020040 + lVar3 * 8 + param_1))) {
            memcpy(param_2,(void *)((uVar7 - *(longlong *)(&DAT_00020030 + lVar3 * 8 + param_1)) +
                                    lVar3 * 0x10000 + param_1 + 0x2a),_Size);
            uVar7 = *(longlong *)(param_1 + 0x10) + _Size;
            *(ulonglong *)(param_1 + 0x10) = uVar7;
            param_3 = param_3 - _Size;
            param_2 = (void *)((longlong)param_2 + _Size);
            break;
          }
          lVar3 = 1;
          bVar1 = false;
        } while (bVar6);
        if (*(ulonglong *)(param_1 + 0x18) != uVar7) {
          cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                            (*(longlong **)(param_1 + 8),uVar7);
          if (cVar2 == '\0') goto LAB_1467c331c;
          *(ulonglong *)(param_1 + 0x18) = uVar7;
        }
        cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                          (*(longlong **)(param_1 + 8),param_2,param_3);
        if (cVar2 == '\0') goto LAB_1467c331c;
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1467c3510 FUN_1467c3510 body=157 status=ok
// SIG undefined FUN_1467c3510(void)

undefined8 FUN_1467c3510(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (((-1 < param_3) && (*(char *)(param_1 + 0x28) != '\0')) && (uVar3 = 1, param_3 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x18) != lVar2) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),lVar2);
      if (cVar1 != '\0') {
        *(longlong *)(param_1 + 0x18) = lVar2;
      }
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,param_3);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      param_3 = param_3 + *(longlong *)(param_1 + 0x10);
      *(longlong *)(param_1 + 0x10) = param_3;
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) <= param_3) {
        lVar2 = param_3;
      }
      *(longlong *)(param_1 + 0x20) = lVar2;
      *(undefined4 *)(&DAT_00020030 + param_1) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20034) = 0xffffffff;
      *(undefined4 *)(&DAT_00020038 + param_1) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2003c) = 0xffffffff;
      *(undefined4 *)(&DAT_00020040 + param_1) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20044) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20048) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2004c) = 0xffffffff;
      *(longlong *)(param_1 + 0x18) = param_3;
    }
  }
  return uVar3;
}



// FUNCTION 1467c35c6 FUN_1467c35c6 body=92 status=ok
// SIG undefined FUN_1467c35c6(void)

undefined8 FUN_1467c35c6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x28) == '\x01') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(), cVar1 != '\0')) {
    *(undefined4 *)(&DAT_00020040 + param_1) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20044) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20048) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2004c) = 0xffffffff;
    *(undefined4 *)(&DAT_00020030 + param_1) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20034) = 0xffffffff;
    *(undefined4 *)(&DAT_00020038 + param_1) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2003c) = 0xffffffff;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1467c3634 FUN_1467c3634 body=90 status=ok
// SIG undefined FUN_1467c3634(void)

void FUN_1467c3634(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 1467c368e FUN_1467c368e body=90 status=ok
// SIG undefined FUN_1467c368e(void)

void FUN_1467c368e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 1467c36e8 FUN_1467c36e8 body=37 status=ok
// SIG undefined FUN_1467c36e8(void)

void FUN_1467c36e8(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 800)) {
    *(undefined4 *)(param_1 + 0x324) = 100;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467c370e FUN_1467c370e body=20 status=ok
// SIG undefined FUN_1467c370e(void)

void FUN_1467c370e(longlong param_1)

{
  if (*(int *)(param_1 + 0x324) != 100) {
    *(undefined4 *)(param_1 + 0x324) = 100;
  }
  return;
}



// FUNCTION 1467c3722 FUN_1467c3722 body=140 status=ok
// SIG undefined FUN_1467c3722(void)

longlong FUN_1467c3722(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x1a50);
    FUN_145eec79a((void *)(param_1 + 0x1848),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x1848);
      if (*(void **)(param_1 + 0x1a48) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x1a48);
      }
      _Src = (void *)(param_2 + 0x1848);
      if (*(void **)(param_2 + 0x1a48) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x1a48);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x1a50) = iVar1;
    FUN_1467c37ae(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1467c37ae FUN_1467c37ae body=174 status=ok
// SIG undefined FUN_1467c37ae(void)

void * FUN_1467c37ae(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)((longlong)param_2 + 0x1808);
    FUN_146269fba(param_1,uVar1);
    iVar2 = *(int *)((longlong)param_1 + 0x1808);
    *(uint *)((longlong)param_1 + 0x1808) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x180c) - iVar2) < uVar1) {
      FUN_145be01b0(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1840) = *(undefined4 *)((longlong)param_2 + 0x1840);
    *(undefined4 *)((longlong)param_1 + 0x1844) = *(undefined4 *)((longlong)param_2 + 0x1844);
    FUN_1467c385c((longlong)param_1 + 0x1810,(longlong)param_2 + 0x1810);
    if (uVar1 != 0) {
      _Src = *(void **)((longlong)param_2 + 0x1800);
      if (*(void **)((longlong)param_2 + 0x1800) == (void *)0x0) {
        _Src = param_2;
      }
      _Dst = *(void **)((longlong)param_1 + 0x1800);
      if (*(void **)((longlong)param_1 + 0x1800) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1467c385c FUN_1467c385c body=137 status=ok
// SIG undefined FUN_1467c385c(void)

void FUN_1467c385c(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  void *_Src;
  
  uVar2 = *(int *)((longlong)param_2 + 0x28) + 0x1fU & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar2) ||
     (0x100 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x100;
    if (0x100 < (int)uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1456d07e4(param_1,0);
  }
  iVar1 = *(int *)((longlong)param_2 + 0x28);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if (iVar1 != 0) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    _Dst = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    return;
  }
  return;
}



// FUNCTION 1467c38ec FUN_1467c38ec body=36 status=ok
// SIG undefined FUN_1467c38ec(void)

undefined1 FUN_1467c38ec(undefined8 param_1)

{
  FUN_141033dca();
  FUN_1459af332(&DAT_14c842770,param_1);
  return 1;
}



// FUNCTION 1467c3910 FUN_1467c3910 body=33 status=ok
// SIG undefined FUN_1467c3910(void)

void FUN_1467c3910(undefined8 param_1)

{
  FUN_141033dca();
  FUN_1459af332(&DAT_14c842770,param_1);
  return;
}



// FUNCTION 1467c3938 FUN_1467c3938 body=71 status=ok
// SIG undefined FUN_1467c3938(void)

undefined8 * FUN_1467c3938(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e16820;
  FUN_141033dca();
  FUN_1459af332(&DAT_14c842770,param_1);
  FUN_140e01508(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c3980 FUN_1467c3980 body=84 status=ok
// SIG undefined FUN_1467c3980(void)

bool FUN_1467c3980(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  
  FUN_14020fad6(param_1 + 8,param_3);
  *(undefined8 *)(param_1 + 0x28) = param_6;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  *(longlong *)(param_1 + 0x40) = lVar1;
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    (**(code **)*param_2)(param_2);
    *(longlong **)(param_1 + 0x18) = param_2;
    bVar2 = *(longlong *)(param_1 + 0x40) != 0;
  }
  return bVar2;
}



// FUNCTION 1467c39ee FUN_1467c39ee body=41 status=ok
// SIG undefined FUN_1467c39ee(void)

void FUN_1467c39ee(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_14158802e(param_1,1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1467c3a46 FUN_1467c3a46 body=57 status=ok
// SIG undefined FUN_1467c3a46(void)

ulonglong FUN_1467c3a46(longlong param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    uVar2 = (ulonglong)uVar1;
  }
  FUN_141033dca();
  FUN_1459af332(&DAT_14c842770,param_1);
  return uVar2 & 0xffffffff;
}



// FUNCTION 1467c3a80 FUN_1467c3a80 body=48 status=ok
// SIG undefined FUN_1467c3a80(void)

void FUN_1467c3a80(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))();
  }
  FUN_141033dca();
  FUN_1459af332(&DAT_14c842770,param_1);
  return;
}



// FUNCTION 1467c3ab6 FUN_1467c3ab6 body=38 status=ok
// SIG undefined FUN_1467c3ab6(void)

undefined8 FUN_1467c3ab6(undefined8 param_1,int param_2)

{
  FUN_1467c3b98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c3adc FUN_1467c3adc body=145 status=ok
// SIG undefined FUN_1467c3adc(void)

undefined1
FUN_1467c3adc(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x58);
  FUN_14020fad6(param_1 + 8,param_3);
  *(undefined8 *)(param_1 + 0x28) = param_6;
  if (cVar1 == '\x01') {
    *(longlong **)(param_1 + 0x18) = param_2;
    (**(code **)*param_2)(param_2);
    uVar3 = FUN_1467c3bf2(param_1);
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    *(longlong *)(param_1 + 0x40) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      (**(code **)*param_2)(param_2);
      *(longlong **)(param_1 + 0x18) = param_2;
      uVar3 = *(longlong *)(param_1 + 0x40) != 0;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = param_4;
  *(undefined4 *)(param_1 + 0x50) = param_5;
  return uVar3;
}



// FUNCTION 1467c3b98 FUN_1467c3b98 body=89 status=ok
// SIG undefined FUN_1467c3b98(void)

void FUN_1467c3b98(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e16930;
  plVar1 = (longlong *)param_1[9];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  param_1[9] = 0;
  *param_1 = &PTR_LAB_149e16820;
  FUN_141033dca();
  FUN_1459af332(&DAT_14c842770,param_1);
  FUN_140e01508(param_1);
  return;
}



// FUNCTION 1467c3bf2 FUN_1467c3bf2 body=182 status=ok
// SIG undefined FUN_1467c3bf2(void)

undefined4 FUN_1467c3bf2(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0xffffffffffffffff;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = &PTR_FUN_149e416b0;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 8);
  }
  uVar2 = FUN_14279d462(puVar3,*(undefined8 *)(param_1 + 0x18),puVar4,
                        *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x28),0);
  if ((char)uVar2 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else if (*(char *)(param_1 + 0x38) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(longlong **)(param_1 + 0x48),1);
  }
  return uVar2;
}



// FUNCTION 1467c3ca8 FUN_1467c3ca8 body=66 status=ok
// SIG undefined FUN_1467c3ca8(void)

undefined8 * FUN_1467c3ca8(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e16990;
  lVar1 = 0x100;
  do {
    FUN_14493be96((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1467c3d14 FUN_1467c3d14 body=600 status=ok
// SIG undefined FUN_1467c3d14(void)

ulonglong FUN_1467c3d14(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  uint local_60;
  undefined4 local_58;
  size_t local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  local_50 = 0;
  pvVar9 = param_2;
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_50);
  memset(param_2,(int)CONCAT71((int7)((ulonglong)pvVar9 >> 8),0xdc),local_50);
  uVar4 = DAT_14c75b13c & 3;
  uVar5 = FUN_14493c560();
  if (uVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (ulonglong)((uVar5 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar5 >> 0xe) * 8);
  }
  *(void **)(lVar8 + 8) = param_2;
  FUN_144a8fde6((longlong)param_1 + (ulonglong)(uVar4 << 6) + 0x40,uVar5);
  LOCK();
  *(int *)((longlong)param_1 + 0x14) =
       *(int *)((longlong)param_1 + 0x14) + (int)(local_50 + 0x3ff >> 10);
  uVar5 = DAT_14c75b13c;
  UNLOCK();
  uVar4 = *(uint *)(param_1 + 2);
  uVar7 = (ulonglong)uVar4;
  if (0x17d78 < *(int *)((longlong)param_1 + 0x14) || uVar4 != DAT_14c75b13c) {
    if (*(int *)((longlong)param_1 + 0x14) < 0x17d79) {
      LOCK();
      uVar2 = *(uint *)(param_1 + 2);
      if (uVar4 == uVar2) {
        *(uint *)(param_1 + 2) = DAT_14c75b13c;
      }
      else {
        uVar7 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar4 != uVar2) goto LAB_1467c3deb;
    }
    else {
      LOCK();
      plVar1 = param_1 + 3;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
      uVar5 = (int)lVar8 + 1;
    }
    lVar8 = (longlong)param_1 + (ulonglong)((uVar5 - 1 & 3) << 6) + 0x40;
    uVar7 = FUN_14470efbc(lVar8);
    iVar6 = (int)uVar7;
    while (iVar6 != 0) {
      lVar3 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + (uVar7 >> 0xe & 0x3ffff) * 8) + 8 +
               (ulonglong)((uint)uVar7 & 0x3fff) * 0x18);
      uVar7 = FUN_1447d080c(uVar7 & 0xffffffff);
      if (lVar3 == 0) break;
      local_50 = 0;
      (**(code **)(*param_1 + 0x68))(param_1,lVar3,&local_50);
      if (local_50 != 0) {
        uVar10 = 0;
        uVar7 = local_50;
        do {
          if (*(char *)(lVar3 + uVar10) != -0x24) {
            local_68 = CONCAT44(local_68._4_4_,0xdc);
            FUN_145d03cb4(L"Freed memory at %p + %d == %x (should be %x)\r\n",lVar3,uVar10);
            local_58 = 0xdc;
            local_60 = (uint)*(byte *)(lVar3 + uVar10);
            local_68 = uVar10;
            FUN_140033559(".\\Runtime/Core/Private/HAL/UnrealMemory.cpp",0x96,
                          L"Freed memory at %p + %d == %x (should be %x)",lVar3);
            uVar7 = local_50;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar7);
      }
      (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],lVar3);
      LOCK();
      *(int *)((longlong)param_1 + 0x14) =
           *(int *)((longlong)param_1 + 0x14) - (int)(local_50 + 0x3ff >> 10);
      UNLOCK();
      uVar7 = FUN_14470efbc(lVar8);
      iVar6 = (int)uVar7;
    }
  }
LAB_1467c3deb:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c4060 FUN_1467c4060 body=30 status=ok
// SIG undefined FUN_1467c4060(void)

void * FUN_1467c4060(void *param_1,int param_2)

{
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1467c408c FUN_1467c408c body=59 status=ok
// SIG undefined FUN_1467c408c(void)

void FUN_1467c408c(longlong param_1,size_t param_2)

{
  void *_Dst;
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_2;
  _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  if (param_2 != 0 && _Dst != (void *)0x0) {
    memset(_Dst,CONCAT31((int3)((uint)uVar1 >> 8),0xcd),param_2);
    return;
  }
  return;
}



// FUNCTION 1467c40c8 FUN_1467c40c8 body=194 status=ok
// SIG undefined FUN_1467c40c8(void)

longlong FUN_1467c40c8(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_2 != 0) {
    lVar2 = param_2;
    bVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_38);
    if (((param_3 <= local_38 && local_38 - param_3 != 0) & bVar1) == 1) {
      memset((void *)(param_2 + param_3),(int)CONCAT71((int7)((ulonglong)lVar2 >> 8),0xdd),
             local_38 - param_3);
    }
  }
  lVar2 = (**(code **)(*(longlong *)param_1[1] + 0x38))
                    ((longlong *)param_1[1],param_2,param_3,param_4);
  if (((lVar2 != 0) && (local_38 != 0)) && (local_38 <= param_3 && param_3 - local_38 != 0)) {
    memset((void *)(lVar2 + local_38),(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xcd),
           param_3 - local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c418c FUN_1467c418c body=116 status=ok
// SIG undefined FUN_1467c418c(void)

void FUN_1467c418c(longlong *param_1,void *param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined1 auStack_48 [32];
  size_t local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (void *)0x0) {
    pvVar2 = param_2;
    bVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_28);
    if ((local_28 != 0 & bVar1) == 1) {
      memset(param_2,(int)CONCAT71((int7)((ulonglong)pvVar2 >> 8),0xdd),local_28);
    }
    (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c42f6 FUN_1467c42f6 body=54 status=ok
// SIG undefined FUN_1467c42f6(void)

undefined8 * FUN_1467c42f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e16c60;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}



// FUNCTION 1467c432c FUN_1467c432c body=80 status=ok
// SIG undefined FUN_1467c432c(void)

undefined4 FUN_1467c432c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1467c437c FUN_1467c437c body=72 status=ok
// SIG undefined FUN_1467c437c(void)

undefined8 FUN_1467c437c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1467c43c4 FUN_1467c43c4 body=82 status=ok
// SIG undefined FUN_1467c43c4(void)

undefined8 FUN_1467c43c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1467c4416 FUN_1467c4416 body=70 status=ok
// SIG undefined FUN_1467c4416(void)

void FUN_1467c4416(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001467c444c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 1467c445c FUN_1467c445c body=70 status=ok
// SIG undefined FUN_1467c445c(void)

undefined4 FUN_1467c445c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1467c44a2 FUN_1467c44a2 body=54 status=ok
// SIG undefined FUN_1467c44a2(void)

void FUN_1467c44a2(longlong param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001467c44d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1467c44e6 FUN_1467c44e6 body=59 status=ok
// SIG undefined FUN_1467c44e6(void)

void FUN_1467c44e6(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001467c451a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1467c4522 FUN_1467c4522 body=59 status=ok
// SIG undefined FUN_1467c4522(void)

void FUN_1467c4522(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001467c4556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1467c4562 FUN_1467c4562 body=57 status=ok
// SIG undefined FUN_1467c4562(void)

undefined4 FUN_1467c4562(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1467c459c FUN_1467c459c body=57 status=ok
// SIG undefined FUN_1467c459c(void)

undefined8 FUN_1467c459c(longlong param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 200))();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1467c4600 FUN_1467c4600 body=337 status=ok
// SIG undefined FUN_1467c4600(void)

undefined4 *
FUN_1467c4600(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14004a3ae(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14004a316(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14004a7b6(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c4752 FUN_1467c4752 body=138 status=ok
// SIG undefined FUN_1467c4752(void)

void FUN_1467c4752(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467c47ee FUN_1467c47ee body=93 status=ok
// SIG undefined FUN_1467c47ee(void)

void FUN_1467c47ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e17030;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467c484c FUN_1467c484c body=126 status=ok
// SIG undefined FUN_1467c484c(void)

void FUN_1467c484c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e17030;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467c48bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467c48e0 FUN_1467c48e0 body=38 status=ok
// SIG undefined FUN_1467c48e0(void)

undefined8 FUN_1467c48e0(undefined8 param_1,int param_2)

{
  FUN_1467c4964();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c4906 FUN_1467c4906 body=45 status=ok
// SIG undefined FUN_1467c4906(void)

longlong FUN_1467c4906(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1467c4964(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c4934 FUN_1467c4934 body=47 status=ok
// SIG undefined FUN_1467c4934(void)

void FUN_1467c4934(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x68);
  plVar2 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x78);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001467c4960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1467c4964 FUN_1467c4964 body=145 status=ok
// SIG undefined FUN_1467c4964(void)

void FUN_1467c4964(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xb0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    plVar3 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x80);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar3 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x40);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001467c49f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1467c49f6 FUN_1467c49f6 body=31 status=ok
// SIG undefined FUN_1467c49f6(void)

undefined8 FUN_1467c49f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c4a32 FUN_1467c4a32 body=93 status=ok
// SIG undefined FUN_1467c4a32(void)

void FUN_1467c4a32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e16dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467c4a90 FUN_1467c4a90 body=93 status=ok
// SIG undefined FUN_1467c4a90(void)

void FUN_1467c4a90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e16dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467c4aee FUN_1467c4aee body=126 status=ok
// SIG undefined FUN_1467c4aee(void)

void FUN_1467c4aee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e16dd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467c4b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467c4b78 FUN_1467c4b78 body=21 status=ok
// SIG undefined FUN_1467c4b78(void)

undefined8 FUN_1467c4b78(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1467c4bc6 FUN_1467c4bc6 body=29 status=ok
// SIG undefined FUN_1467c4bc6(void)

undefined8 FUN_1467c4bc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467c4be4 FUN_1467c4be4 body=148 status=ok
// SIG undefined FUN_1467c4be4(void)

void FUN_1467c4be4(longlong param_1,int param_2)

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



// FUNCTION 1467c4c7a FUN_1467c4c7a body=100 status=ok
// SIG undefined FUN_1467c4c7a(void)

void FUN_1467c4c7a(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x10 + lVar2);
  FUN_141286b11(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x68);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 0x68) = iVar1 - param_3;
  return;
}



// FUNCTION 1467c4cde FUN_1467c4cde body=52 status=ok
// SIG undefined FUN_1467c4cde(void)

void FUN_1467c4cde(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467c4d12(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == *(int *)(param_1 + 0x6c)) {
    return;
  }
  *(int *)(param_1 + 0x6c) = iVar1;
  FUN_1458784ca(param_1,*(undefined4 *)(param_1 + 0x68),iVar1);
  return;
}



// FUNCTION 1467c4d12 FUN_1467c4d12 body=126 status=ok
// SIG undefined FUN_1467c4d12(void)

ulonglong FUN_1467c4d12(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 6;
  if (6 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if (((int)param_1 < 1) || (DAT_14c872d28 == (longlong *)0x0)) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1467c4d90 FUN_1467c4d90 body=318 status=ok
// SIG undefined FUN_1467c4d90(void)

undefined8 FUN_1467c4d90(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((short)param_2 == 0) {
    if (param_2 == 0) {
      return 0;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
    EnterCriticalSection(lpCriticalSection);
    uVar5 = param_2 - *(longlong *)(param_1 + 0x28);
    bVar1 = *(byte *)(param_1 + 8);
    uVar7 = uVar5 >> (*(byte *)(param_1 + 0x10) & 0x3f);
    uVar2 = *(uint *)(param_1 + 0x18);
    puVar3 = (ulonglong *)
             ((ulonglong)(*(int *)(param_1 + 0x20) - 1U & (uint)uVar7) * 0x20 +
             *(longlong *)(param_1 + 0x68));
    puVar4 = puVar3;
    do {
      if (*puVar4 == uVar7) {
        uVar7 = puVar4[1];
        LeaveCriticalSection(lpCriticalSection);
        lVar8 = uVar7 + (ulonglong)(uVar2 & (uint)(uVar5 >> (bVar1 & 0x3f))) * 0x20;
        if (lVar8 == 0) goto LAB_1467c4e4b;
        goto LAB_1467c4e1d;
      }
      puVar4 = (ulonglong *)puVar4[3];
    } while (puVar4 != puVar3);
    LeaveCriticalSection(lpCriticalSection);
LAB_1467c4e4b:
    FUN_140033559("Runtime\\Core\\Public\\HAL/MallocBinnedCommon.h",0x369,
                  L"FMallocBinned Attempt to GetAllocationSizeExternal an unrecognized pointer %p",
                  param_2);
    lVar8 = 0;
LAB_1467c4e1d:
    if (*(short *)(lVar8 + 2) != 0x17ea) {
      FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x90,
                    L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",
                    *(short *)(lVar8 + 2),0x17ea);
    }
    uVar5 = *(ulonglong *)(lVar8 + 8);
  }
  else {
    puVar6 = (ushort *)(param_2 & 0xffffffffffff0000);
    if (*(char *)((longlong)puVar6 + 3) != -0x1d) {
      FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x3cb,
                    L"FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x"
                    ,puVar6,*(char *)((longlong)puVar6 + 3),0xe3);
    }
    uVar5 = (ulonglong)*puVar6;
  }
  *param_3 = uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1467c4ece FUN_1467c4ece body=153 status=ok
// SIG undefined FUN_1467c4ece(void)

void FUN_1467c4ece(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_2 + 8);
  if (*(longlong *)(param_2 + 8) == 0) {
    lVar6 = param_2;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar5);
      if (plVar2 == (longlong *)0x0) {
        lVar4 = 0;
LAB_1467c4f41:
        lVar3 = 0;
      }
      else {
        if ((plVar2[3] & 0x4000000000000000U) == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        lVar4 = plVar2[2];
        plVar2 = *(longlong **)(lVar6 + lVar5);
        if (plVar2 == (longlong *)0x0) goto LAB_1467c4f41;
        if ((plVar2[3] & 0x4000000000000000U) == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        lVar3 = plVar2[1];
      }
      FUN_144b47410(param_1,lVar3,lVar4);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1467c4f68 FUN_1467c4f68 body=128 status=ok
// SIG undefined FUN_1467c4f68(void)

undefined8 * FUN_1467c4f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_7b8 [32];
  undefined1 local_798 [1912];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_7b8;
  FUN_144b46480(local_798);
  FUN_144b47410(local_798,*param_2,param_2[1]);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144b45d30(local_798,param_1,0x20);
  if ((local_20 ^ (ulonglong)auStack_7b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c4fea FUN_1467c4fea body=124 status=ok
// SIG undefined FUN_1467c4fea(void)

undefined8 * FUN_1467c4fea(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_7b8 [32];
  undefined1 local_798 [1912];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_7b8;
  FUN_144b46480(local_798);
  FUN_1467c4ece(local_798,param_2);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144b45d30(local_798,param_1,0x20);
  if ((local_20 ^ (ulonglong)auStack_7b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c5068 FUN_1467c5068 body=5 status=ok
// SIG undefined FUN_1467c5068(void)

longlong FUN_1467c5068(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1467c506e FUN_1467c506e body=5 status=ok
// SIG undefined FUN_1467c506e(void)

longlong FUN_1467c506e(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 1467c5074 FUN_1467c5074 body=7 status=ok
// SIG undefined FUN_1467c5074(void)

undefined1 FUN_1467c5074(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xd8);
}



// FUNCTION 1467c507c FUN_1467c507c body=13 status=ok
// SIG undefined FUN_1467c507c(void)

void FUN_1467c507c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001467c5082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x88))();
  return;
}



// FUNCTION 1467c508a FUN_1467c508a body=16 status=ok
// SIG undefined FUN_1467c508a(void)

void FUN_1467c508a(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001467c5097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x90))();
  return;
}



// FUNCTION 1467c509a FUN_1467c509a body=81 status=ok
// SIG undefined FUN_1467c509a(void)

void FUN_1467c509a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1467c50eb FUN_1467c50eb body=1301 status=ok
// SIG undefined FUN_1467c50eb(void)

undefined8 *
FUN_1467c50eb(undefined8 *param_1,double param_2,longlong *param_3,uint param_4,longlong param_5,
             undefined1 *param_6)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar9;
  ushort uVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  undefined8 *puVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  undefined8 *local_200;
  undefined1 local_1f8 [96];
  double local_198;
  undefined8 local_190;
  int local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  ulonglong *local_170;
  undefined1 local_168;
  undefined2 local_160 [128];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (((int)param_4 < 1) || (*param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_228);
  }
  uVar10 = (ulonglong)param_4;
  local_180 = local_160;
  local_168 = 0;
  local_170 = local_60;
  bVar12 = *(char *)(param_5 + 0x74) != '\0' & param_6[1];
  local_178 = local_180;
  dVar18 = log(param_2);
  if (bVar12 == 1) {
    bVar9 = (byte)((char)(int)ABS(dVar18 / 2.302585092994046) + 1U) % *(byte *)(param_5 + 0x74);
  }
  else {
    bVar9 = 0;
  }
  puVar3 = (ushort *)*param_3;
  iVar13 = *(int *)(param_6 + 8) - param_4;
  puVar6 = puVar3;
  local_200 = param_1;
  if (iVar13 != 0 && (int)param_4 <= *(int *)(param_6 + 8)) {
    local_208 = uVar10;
    do {
      if ((bVar12 != 0) && (bVar16 = bVar9 == 0, bVar9 = bVar9 - 1, bVar16)) {
        uVar2 = *(undefined2 *)(param_5 + 0x70);
        if (local_170 <= local_178 + 1) {
          FUN_140213274(&local_180,1);
        }
        *local_178 = uVar2;
        bVar9 = *(byte *)(param_5 + 0x75);
        local_178 = local_178 + 1;
      }
      uVar2 = *(undefined2 *)(param_5 + 0x78);
      if (local_170 <= local_178 + 1) {
        FUN_140213274(&local_180,1);
      }
      puVar1 = local_178 + 1;
      *local_178 = uVar2;
      iVar13 = iVar13 + -1;
      local_178 = puVar1;
    } while (iVar13 != 0);
    puVar6 = (ushort *)*param_3;
    uVar10 = local_208;
  }
  puVar3 = puVar3 + uVar10;
  uVar5 = *puVar6;
  if ((uVar5 == 0x2b) || (uVar5 == 0x2d)) {
    puVar6 = puVar6 + 1;
    *param_3 = (longlong)puVar6;
  }
  if (puVar6 < puVar3) {
    local_208 = CONCAT44(local_208._4_4_,(uint)uVar5);
    bVar16 = false;
    bVar15 = 0;
    do {
      uVar5 = *puVar6;
      if (uVar5 == 0x2e) {
        if (*(int *)(param_6 + 0x14) < 1) break;
        uVar2 = *(undefined2 *)(param_5 + 0x72);
        if (local_170 <= local_178 + 1) {
          FUN_140213274(&local_180,1);
        }
        *local_178 = uVar2;
        bVar16 = true;
      }
      else {
        if ((bVar12 == 1 && !bVar16) && (bVar17 = bVar9 == 0, bVar9 = bVar9 - 1, bVar17)) {
          uVar2 = *(undefined2 *)(param_5 + 0x70);
          if (local_170 <= local_178 + 1) {
            FUN_140213274(&local_180,1);
          }
          *local_178 = uVar2;
          bVar9 = *(char *)(param_5 + 0x75) - 1;
          uVar5 = *(ushort *)*param_3;
          local_178 = local_178 + 1;
        }
        if ((uVar5 < 0x30) || (9 < (ulonglong)uVar5 - 0x30)) break;
        uVar2 = *(undefined2 *)(param_5 + 0x18 + (ulonglong)uVar5 * 2);
        if (local_170 <= local_178 + 1) {
          FUN_140213274(&local_180,1);
        }
        *local_178 = uVar2;
        bVar15 = bVar15 + bVar16;
      }
      local_178 = local_178 + 1;
      puVar6 = (ushort *)(*param_3 + 2);
      *param_3 = (longlong)puVar6;
    } while (puVar6 < puVar3);
    uVar11 = (uint)bVar15;
    dVar18 = modf(param_2,&local_198);
    puVar14 = local_200;
    uVar5 = (ushort)local_208;
    if (*(int *)(param_6 + 0x14) <= (int)(uint)bVar15) goto LAB_1467c551f;
    uVar19 = SUB84(dVar18,0);
    uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
    uVar4 = (uint)bVar15;
    if (bVar16 == false) goto LAB_1467c547a;
  }
  else {
    dVar18 = modf(param_2,&local_198);
    puVar14 = local_200;
    if (*(int *)(param_6 + 0x14) < 1) goto LAB_1467c551f;
    uVar19 = SUB84(dVar18,0);
    uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
    uVar4 = 0;
LAB_1467c547a:
    uVar11 = uVar4;
    puVar14 = local_200;
    uVar2 = *(undefined2 *)(param_5 + 0x72);
    if (local_170 <= local_178 + 1) {
      FUN_140213274(&local_180,1);
    }
    *local_178 = uVar2;
    local_178 = local_178 + 1;
  }
  if (((double)CONCAT44(uVar20,uVar19) != 0.0) &&
     (iVar13 = *(int *)(param_6 + 0x14) - uVar11,
     iVar13 != 0 && (int)uVar11 <= *(int *)(param_6 + 0x14))) {
    do {
      uVar2 = *(undefined2 *)(param_5 + 0x78);
      if (local_170 <= local_178 + 1) {
        FUN_140213274(&local_180,1);
      }
      puVar1 = local_178 + 1;
      *local_178 = uVar2;
      iVar13 = iVar13 + -1;
      local_178 = puVar1;
    } while (iVar13 != 0);
  }
LAB_1467c551f:
  FUN_140236862(local_1f8,param_5,*param_6);
  if (uVar5 == 0x2d) {
    puVar7 = (undefined8 *)FUN_140b614b8();
    puVar8 = (undefined8 *)FUN_140b6165c(local_1f8);
  }
  else {
    puVar7 = (undefined8 *)FUN_14023676e(local_1f8);
    puVar8 = (undefined8 *)FUN_1402367e8(local_1f8);
  }
  local_188 = *(int *)(puVar7 + 1) + -1;
  if (*(int *)(puVar7 + 1) == 0) {
    local_188 = 0;
  }
  local_190 = *puVar7;
  FUN_144a08824(&local_180,0,0);
  iVar13 = *(int *)(puVar8 + 1) + -1;
  if (*(int *)(puVar8 + 1) == 0) {
    iVar13 = 0;
  }
  FUN_1449668a2(&local_180,*puVar8,iVar13);
  *local_178 = 0;
  FUN_140056680(puVar14,local_180);
  FUN_1467c509a(local_1f8);
  FUN_144724f3c(&local_180);
  if ((local_60[0] ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar14;
}



// FUNCTION 1467c5604 FUN_1467c5604 body=507 status=ok
// SIG undefined FUN_1467c5604(void)

undefined8
FUN_1467c5604(longlong param_1,int param_2,undefined8 param_3,char *param_4,longlong *param_5,
             char *param_6,ulonglong *param_7,undefined4 *param_8)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_238 [32];
  byte *local_218;
  undefined4 local_210;
  char *local_208;
  char *local_200;
  ulonglong *local_1f8;
  char *local_1f0;
  longlong local_1e8;
  char local_1da;
  char local_1d9;
  undefined1 local_1d8 [96];
  undefined1 local_178 [96];
  undefined1 local_118 [96];
  undefined1 local_b8 [96];
  longlong local_58;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1e8 = param_1;
  local_58 = param_1;
  FUN_140b610c8(local_1d8,param_3);
  uVar4 = 0;
  local_200 = &local_1d9;
  local_1d9 = '\0';
  local_1f0 = &local_1da;
  local_1da = '\0';
  local_49 = *param_4 << 3 | param_4[1] << 4 | param_4[2] << 5 | 7;
  local_218 = &local_49;
  local_1f8 = param_7;
  local_208 = param_6;
  local_210 = 0x14;
  cVar1 = FUN_140b61119(&local_58,param_1 + (longlong)param_2 * 2,param_3,local_1d8);
  if (local_1da == '\0' || cVar1 != '\x01') goto LAB_1467c5776;
  if (param_4[1] == '\x01') {
    if ((char)param_5[2] == '\x01') {
      uVar4 = 0;
      if (*param_6 == '\0') {
        uVar3 = param_5[1];
      }
      else {
        uVar3 = -*param_5;
      }
      if ((local_1d9 != '\0') || (uVar3 < *param_7)) goto LAB_1467c5776;
    }
    else {
      uVar4 = 0;
      if ((*param_6 != '\0' || local_1d9 != '\0') || ((ulonglong)param_5[1] < *param_7))
      goto LAB_1467c5776;
    }
  }
  uVar4 = 1;
  if (param_4[2] == '\x01') {
    if (*param_6 == '\0') {
      uVar3 = param_5[1];
    }
    else {
      uVar3 = -*param_5;
    }
    uVar2 = *param_7;
    if (uVar3 <= *param_7) {
      uVar2 = uVar3;
    }
    if (local_1d9 != '\0') {
      uVar2 = uVar3;
    }
    *param_7 = uVar2;
  }
LAB_1467c5776:
  if (param_8 != (undefined4 *)0x0 && local_1da != '\0') {
    *param_8 = (int)((ulonglong)(local_58 - local_1e8) >> 1);
  }
  FUN_1467c509a(local_b8);
  FUN_1467c509a(local_118);
  FUN_1467c509a(local_178);
  FUN_1467c509a(local_1d8);
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1467c5800 FUN_1467c5800 body=487 status=ok
// SIG undefined FUN_1467c5800(void)

ulonglong FUN_1467c5800(undefined8 *param_1,short *param_2,longlong param_3,char *param_4,
                       undefined8 param_5,longlong param_6)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  undefined2 *puVar4;
  short *psVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 unaff_RDI;
  undefined7 uVar9;
  ulonglong uVar8;
  short sVar10;
  undefined1 auStack_78 [47];
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(short *)*param_1 == 0) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  else {
    cVar1 = *param_4;
    local_49 = '\0';
    FUN_140b61320(param_5,param_1,&local_49);
    if (local_49 == '\x01') {
      puVar4 = *(undefined2 **)(param_6 + 8);
      if (*(undefined2 **)(param_6 + 0x10) <= puVar4 + 1) {
        FUN_140213274(param_6);
        puVar4 = *(undefined2 **)(param_6 + 8);
      }
      *(undefined2 **)(param_6 + 8) = puVar4 + 1;
      *puVar4 = 0x2d;
    }
    uVar9 = (undefined7)((ulonglong)&local_49 >> 8);
    bVar7 = 1;
    psVar5 = (short *)*param_1;
    while (psVar5 < param_2) {
      sVar2 = *psVar5;
      if (sVar2 == *(short *)(param_3 + 0x70)) {
        if (cVar1 == '\0') {
          uVar8 = 0;
          goto LAB_1467c59ba;
        }
        *param_1 = psVar5 + 1;
      }
      else if (sVar2 == *(short *)(param_3 + 0x72)) {
        *param_1 = psVar5 + 1;
        puVar4 = *(undefined2 **)(param_6 + 8);
        if (*(undefined2 **)(param_6 + 0x10) <= puVar4 + 1) {
          FUN_140213274(param_6);
          puVar4 = *(undefined2 **)(param_6 + 8);
        }
        *(undefined2 **)(param_6 + 8) = puVar4 + 1;
        *puVar4 = 0x2e;
      }
      else {
        lVar6 = 0;
        while ((sVar10 = *(short *)((longlong)&DAT_149e173e0 + lVar6),
               sVar2 != *(short *)(param_3 + 0x78 + lVar6) &&
               (sVar10 = sVar2, sVar2 != *(short *)((longlong)&DAT_149e173e0 + lVar6)))) {
          lVar6 = lVar6 + 2;
          if (lVar6 == 0x14) {
            bVar7 = 0;
            uVar9 = 0;
            goto LAB_1467c5972;
          }
        }
        *param_1 = psVar5 + 1;
        psVar5 = *(short **)(param_6 + 8);
        if (*(short **)(param_6 + 0x10) <= psVar5 + 1) {
          FUN_140213274(param_6);
          psVar5 = *(short **)(param_6 + 8);
        }
        *(short **)(param_6 + 8) = psVar5 + 1;
        *psVar5 = sVar10;
      }
      psVar5 = (short *)*param_1;
    }
LAB_1467c5972:
    bVar3 = FUN_140b61532(param_5,param_1,&local_49);
    puVar4 = *(undefined2 **)(param_6 + 8);
    if (puVar4[-1] != 0) {
      if (*(undefined2 **)(param_6 + 0x10) <= puVar4 + 1) {
        FUN_140213274(param_6,1);
        puVar4 = *(undefined2 **)(param_6 + 8);
      }
      *(undefined2 **)(param_6 + 8) = puVar4 + 1;
      *puVar4 = 0;
    }
    uVar8 = CONCAT71(uVar9,bVar7 | bVar3);
  }
LAB_1467c59ba:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c59e8 FUN_1467c59e8 body=25 status=ok
// SIG undefined FUN_1467c59e8(void)

undefined8 FUN_1467c59e8(int param_1)

{
  int iVar1;
  
  iVar1 = 0x12;
  if (param_1 < 0x12) {
    iVar1 = param_1;
  }
  return (&DAT_149e17340)[iVar1];
}



// FUNCTION 1467c5a01 FUN_1467c5a01 body=97 status=ok
// SIG undefined FUN_1467c5a01(void)

void FUN_1467c5a01(longlong *param_1,longlong param_2)

{
  FUN_14021219d(*(undefined8 *)(*param_1 + 8));
  FUN_14021219d(*(undefined8 *)(*param_1 + 8),param_2 + 0x10);
  FUN_1456bb002(*param_1,param_2 + 0x20);
  FUN_1456bb002(*param_1,param_2 + 0x21);
  FUN_1467cb4a8(param_1,param_2 + 0x28);
  FUN_1467cb4a8(param_1,param_2 + 0x78);
  return;
}



// FUNCTION 1467c5a62 FUN_1467c5a62 body=104 status=ok
// SIG undefined FUN_1467c5a62(void)

undefined8 FUN_1467c5a62(undefined8 param_1)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  undefined8 local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_1;
  FUN_1467c5acb();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c5acb FUN_1467c5acb body=206 status=ok
// SIG undefined FUN_1467c5acb(void)

void FUN_1467c5acb(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  int local_34;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14021219d(*(undefined8 *)(*param_1 + 8));
  FUN_14021219d(*(undefined8 *)(*param_1 + 8),param_2 + 0x10);
  FUN_1467cb4a8(param_1,param_2 + 0x20);
  local_34 = *(int *)(param_2 + 0x78);
  local_30 = param_1;
  FUN_1449b19ea(*param_1);
  lVar1 = FUN_144aff0ec(&local_30);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    FUN_1467d66a4((longlong *)(param_2 + 0x70),local_34);
  }
  if (0 < local_34) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_1467c5a01(param_1,*(longlong *)(param_2 + 0x70) + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (lVar2 < local_34);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c5b9a FUN_1467c5b9a body=164 status=ok
// SIG undefined FUN_1467c5b9a(void)

void FUN_1467c5b9a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = (longlong *)param_1[2];
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1467c5bd9;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = (longlong *)param_1[1];
    bVar2 = false;
  }
LAB_1467c5bd9:
  lVar5 = thunk_FUN_1424da030(0x40);
  if (lVar5 != 0) {
    FUN_14024eeb8(lVar5,param_2);
  }
  (**(code **)(*plVar7 + 0x40))(plVar7,lVar5);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001467c5c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



// FUNCTION 1467c5c3e FUN_1467c5c3e body=256 status=ok
// SIG undefined FUN_1467c5c3e(void)

void FUN_1467c5c3e(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)param_1[2];
  bVar2 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    plVar6 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1467c5c8e;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar6 = (longlong *)param_1[1];
    bVar2 = false;
  }
LAB_1467c5c8e:
  puVar5 = (undefined8 *)thunk_FUN_1424da030(0x40);
  if (puVar5 != (undefined8 *)0x0) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14003c090(puVar5);
    *puVar5 = &PTR_FUN_149e17b10;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = local_48;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_44;
    *(undefined4 *)(puVar5 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_3c;
    FUN_14003c0c0(puVar5,puVar5[6],*(undefined4 *)(puVar5 + 7));
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,puVar5);
  if (!bVar2) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001467c5d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



// FUNCTION 1467c5d40 FUN_1467c5d40 body=120 status=ok
// SIG undefined FUN_1467c5d40(void)

undefined4 FUN_1467c5d40(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1467c5d73;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c5d73:
  uVar5 = (**(code **)(*plVar7 + 0x70))(plVar7);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c5db8 FUN_1467c5db8 body=120 status=ok
// SIG undefined FUN_1467c5db8(void)

undefined4 FUN_1467c5db8(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1467c5deb;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c5deb:
  uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c5e30 FUN_1467c5e30 body=120 status=ok
// SIG undefined FUN_1467c5e30(void)

undefined4 FUN_1467c5e30(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1467c5e63;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c5e63:
  uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c5ea8 FUN_1467c5ea8 body=120 status=ok
// SIG undefined FUN_1467c5ea8(void)

undefined4 FUN_1467c5ea8(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1467c5edb;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c5edb:
  uVar5 = (**(code **)(*plVar7 + 0x58))(plVar7);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c5f20 FUN_1467c5f20 body=120 status=ok
// SIG undefined FUN_1467c5f20(void)

undefined4 FUN_1467c5f20(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1467c5f53;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c5f53:
  uVar5 = (**(code **)(*plVar7 + 0x68))(plVar7);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c5f98 FUN_1467c5f98 body=136 status=ok
// SIG undefined FUN_1467c5f98(void)

undefined4 FUN_1467c5f98(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    plVar6 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1467c5fcd;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar6 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c5fcd:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  uVar5 = (**(code **)(*plVar6 + 0x80))(plVar6,param_2);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (!bVar2) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c6020 FUN_1467c6020 body=133 status=ok
// SIG undefined FUN_1467c6020(void)

undefined4 FUN_1467c6020(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    plVar6 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1467c6055;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar6 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c6055:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  uVar5 = (**(code **)(*plVar6 + 0x78))(plVar6,param_2);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (!bVar2) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c60aa FUN_1467c60aa body=905 status=ok
// SIG undefined FUN_1467c60aa(void)

undefined8 * FUN_1467c60aa(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x138) == 0) {
    local_4c = 0;
    lVar3 = FUN_14003c1a0(param_1 + 8);
    plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149e189d0;
    plVar4[2] = lVar3;
    plVar5 = plVar4;
    if (lVar3 == 0) {
      FUN_14275eb3a();
      lVar3 = FUN_14003c1a0(&DAT_14c844a10,&local_4c);
      plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_149e189d0;
      plVar5[2] = lVar3;
      if (plVar5 != plVar4) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        goto LAB_1467c6198;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        goto LAB_1467c61a4;
      }
LAB_1467c63df:
      *(longlong *)(param_1 + 0x138) = lVar3;
      plVar5 = *(longlong **)(param_1 + 0x140);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x140) = 0;
        bVar2 = true;
        plVar4 = (longlong *)0x0;
LAB_1467c6407:
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        if (!bVar2) goto LAB_1467c61e0;
      }
    }
    else {
LAB_1467c6198:
      plVar4 = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_1467c63df;
LAB_1467c61a4:
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(longlong *)(param_1 + 0x138) = lVar3;
      plVar5 = *(longlong **)(param_1 + 0x140);
      if (plVar4 != plVar5) {
        *(longlong **)(param_1 + 0x140) = plVar4;
        if (plVar5 == (longlong *)0x0) goto LAB_1467c61e0;
        bVar2 = false;
        goto LAB_1467c6407;
      }
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
LAB_1467c61e0:
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  local_4c = 0;
  plVar5 = *(longlong **)(param_1 + 0x138);
  plVar4 = *(longlong **)(param_1 + 0x140);
  if (plVar4 == (longlong *)0x0) {
    if (param_3 == 0) {
      *param_2 = plVar5;
      param_2[1] = 0;
      goto LAB_1467c611c;
    }
LAB_1467c6220:
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))();
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e189d0;
    plVar6[2] = (longlong)plVar5;
    uVar7 = 0xffffffff;
    if (param_3 - 1U < 5) {
      uVar7 = *(undefined4 *)(&DAT_149e19f74 + (ulonglong)(param_3 - 1U) * 4);
    }
    (**(code **)(*plVar5 + 0xb0))(plVar5,5,uVar7,&local_4c);
    *param_2 = plVar5;
    param_2[1] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_1467c611c;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (param_3 != 0) goto LAB_1467c6220;
    *param_2 = plVar5;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1467c611c:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467c6434 FUN_1467c6434 body=1424 status=ok
// SIG undefined FUN_1467c6434(void)

undefined8 * FUN_1467c6434(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  uint local_160;
  undefined4 local_15c;
  longlong local_158;
  int local_150;
  undefined **local_148;
  undefined2 local_140;
  undefined **local_108;
  undefined2 local_100;
  undefined **local_c8;
  undefined2 local_c0;
  undefined **local_88;
  undefined2 local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = param_2;
  local_160 = param_3;
  if (*(longlong *)(param_1 + 0x148) == 0) {
    plVar5 = (longlong *)FUN_1424bde60(2,param_1 + 8);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e18e70;
    plVar6[2] = (longlong)plVar5;
    plVar13 = plVar6;
    if (plVar5 == (longlong *)0x0) {
      FUN_14275eb3a();
      plVar5 = (longlong *)FUN_1424bde60(2,&DAT_14c844a10);
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_149e18e70;
      plVar7[2] = (longlong)plVar5;
      if (plVar7 == plVar6) {
        if (plVar6 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar10 = plVar7 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar10 = plVar7;
joined_r0x0001467c6521:
            plVar13 = plVar6;
            if (iVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
        }
      }
      else {
        plVar13 = plVar7;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar6 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar10 = plVar6;
            plVar6 = plVar7;
            goto joined_r0x0001467c6521;
          }
        }
      }
    }
    uVar8 = FUN_1424b77f0();
    (**(code **)(*plVar5 + 0xb0))(plVar5,uVar8);
    if (plVar13 == (longlong *)0x0) {
      *(longlong **)(param_1 + 0x148) = plVar5;
      plVar6 = *(longlong **)(param_1 + 0x150);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x150) = 0;
LAB_1467c6589:
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        if (plVar13 != (longlong *)0x0) goto LAB_1467c664b;
      }
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      plVar6 = plVar13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x148) = plVar5;
      plVar6 = *(longlong **)(param_1 + 0x150);
      if (plVar13 == plVar6) {
        LOCK();
        plVar6 = plVar13 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x150) = plVar13;
        if (plVar6 != (longlong *)0x0) goto LAB_1467c6589;
      }
LAB_1467c664b:
      LOCK();
      plVar6 = plVar13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  FUN_1467c69c5(&local_158,param_4);
  local_88 = &PTR_FUN_149e18960;
  local_80 = 2;
  FUN_140e20829(&local_158,&local_88,0);
  plVar6 = *(longlong **)(param_1 + 0x148);
  plVar13 = *(longlong **)(param_1 + 0x150);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  bVar14 = true;
  if (1 < local_150) {
    local_15c = 0;
    local_c8 = &PTR_FUN_149e18960;
    local_c0 = 2;
    FUN_1424b93f0(&local_88,&local_c8,&local_15c);
    local_108 = &PTR_FUN_149e18960;
    local_100 = 2;
    lVar9 = (**(code **)(*plVar6 + 0xa8))(plVar6);
    FUN_1424a7c80(&local_108,lVar9 + 8);
    local_148 = &PTR_FUN_149e18960;
    local_140 = 2;
    FUN_1424b93f0(&local_108,&local_148,&local_15c);
    cVar4 = FUN_14626a19a(&local_c8,&local_148);
    bVar14 = cVar4 != '\0';
    FUN_140859a90(&local_148);
    FUN_140859a90(&local_108);
    FUN_140859a90(&local_c8);
  }
  uVar3 = local_160;
  if ((bool)(bVar14 ^ 1U | local_160 != 0)) {
    uVar11 = 2;
    if (local_160 < 5) {
      uVar11 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)local_160 * 4);
    }
    plVar7 = (longlong *)FUN_1424bde60(uVar11,param_1 + 8);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149e18e70;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
    if (plVar7 == (longlong *)0x0) {
      FUN_14275eb3a();
      uVar11 = 2;
      if (uVar3 < 5) {
        uVar11 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)uVar3 * 4);
      }
      plVar7 = (longlong *)FUN_1424bde60(uVar11,&DAT_14c844a10);
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_149e18e70;
      plVar10[2] = (longlong)plVar7;
      if (plVar10 == plVar5) {
        if (plVar5 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
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
            iVar2 = *piVar1;
            UNLOCK();
            plVar5 = plVar10;
            goto joined_r0x0001467c69ad;
          }
        }
      }
      else {
        plVar6 = plVar10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x0001467c69ad:
            if (iVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
        }
      }
    }
    if (bVar14) {
      uVar8 = FUN_1424b77f0();
    }
    else {
      uVar8 = FUN_1424b7440(&local_88);
    }
    (**(code **)(*plVar7 + 0xb0))(plVar7,uVar8);
    puVar12 = local_168;
    if (plVar6 == (longlong *)0x0) {
      *local_168 = plVar7;
      local_168[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *local_168 = plVar7;
      local_168[1] = plVar6;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (plVar13 == (longlong *)0x0) goto LAB_1467c693f;
  }
  else {
    *local_168 = plVar6;
    local_168[1] = plVar13;
    puVar12 = local_168;
    if (plVar13 == (longlong *)0x0) goto LAB_1467c693f;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar6 = plVar13 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_1467c693f:
  FUN_140859a90(&local_88);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c69c5 FUN_1467c69c5 body=519 status=ok
// SIG undefined FUN_1467c69c5(void)

undefined8 * FUN_1467c69c5(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  void *_Src;
  ushort *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar13 = (ulonglong)uVar3;
  *param_1 = 0;
  _Src = (void *)*param_2;
  *(uint *)(param_1 + 1) = uVar3;
  if ((longlong)(int)uVar3 < 2) {
    if (uVar13 != 0) {
      FUN_1446dd670(param_1,uVar3,0);
      memcpy((void *)*param_1,_Src,(longlong)(int)uVar3 * 2);
      return param_1;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  FUN_1446dd670(param_1,uVar13,0);
  memcpy((void *)*param_1,_Src,uVar13 * 2);
  uVar3 = *(uint *)(param_1 + 1);
  lVar10 = (longlong)(int)uVar3;
  if (lVar10 == 0) {
    return param_1;
  }
  puVar4 = (ushort *)*param_1;
  uVar2 = *puVar4;
  iVar11 = 0;
  if ((uVar2 != 0) && (iVar11 = 0, uVar2 != 0x2f)) {
    if ((10 < (ushort)(uVar2 - 0x30)) && (0x19 < (ushort)((uVar2 & 0xffdf) - 0x41))) {
      bVar6 = true;
      uVar9 = uVar2 - 0x2b;
      iVar11 = 0;
      if ((0x34 < uVar9) || (iVar11 = 0, (0x10000000000005U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0))
      goto LAB_1467c6a71;
    }
    iVar11 = 1;
  }
  bVar6 = false;
LAB_1467c6a71:
  uVar9 = 0;
  uVar14 = 0;
  uVar7 = uVar14;
LAB_1467c6a7c:
  do {
    uVar13 = (ulonglong)uVar14;
    uVar8 = uVar14;
    do {
      uVar13 = uVar13 + 1;
      if (lVar10 <= (longlong)uVar13) {
        uVar8 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar3) {
          uVar8 = uVar3;
        }
LAB_1467c6afe:
        if (bVar6) {
LAB_1467c6b05:
          bVar6 = false;
          uVar14 = uVar8;
          goto joined_r0x0001467c6b5b;
        }
        break;
      }
      uVar2 = puVar4[uVar13];
      if (uVar2 == 0) {
LAB_1467c6b1d:
        uVar14 = uVar8 + 1;
        if (bVar6) {
          uVar8 = uVar8 + 1;
          goto LAB_1467c6b05;
        }
        goto LAB_1467c6a7c;
      }
      if (uVar2 == 0x2f) {
        iVar11 = 0;
        goto LAB_1467c6b1d;
      }
      if ((((ushort)(uVar2 - 0x30) < 0xb) || ((ushort)((uVar2 & 0xffdf) - 0x41) < 0x1a)) ||
         ((uVar12 = uVar2 - 0x2b, uVar12 < 0x35 &&
          ((0x10000000000005U >> ((ulonglong)uVar12 & 0x3f) & 1) != 0)))) {
        uVar14 = uVar8 + 1;
        iVar1 = iVar11 + 1;
        bVar5 = 0xd < iVar11;
        iVar11 = iVar1;
        if ((bool)(bVar5 ^ bVar6)) {
          uVar8 = uVar8 + 1;
          goto LAB_1467c6afe;
        }
        goto LAB_1467c6a7c;
      }
      uVar8 = uVar8 + 1;
    } while (bVar6);
    if (uVar9 != uVar7) {
      memmove(puVar4 + (int)uVar9,puVar4 + uVar7,(longlong)(int)(uVar8 - uVar7) * 2);
    }
    uVar9 = uVar9 + (uVar8 - uVar7);
    bVar6 = true;
    uVar14 = uVar8;
joined_r0x0001467c6b5b:
    uVar7 = uVar14;
    if (lVar10 <= (longlong)uVar13) {
      *(uint *)(param_1 + 1) = uVar9;
      return param_1;
    }
  } while( true );
}



// FUNCTION 1467c6bcc FUN_1467c6bcc body=1424 status=ok
// SIG undefined FUN_1467c6bcc(void)

undefined8 * FUN_1467c6bcc(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  uint local_160;
  undefined4 local_15c;
  longlong local_158;
  int local_150;
  undefined **local_148;
  undefined2 local_140;
  undefined **local_108;
  undefined2 local_100;
  undefined **local_c8;
  undefined2 local_c0;
  undefined **local_88;
  undefined2 local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = param_2;
  local_160 = param_3;
  if (*(longlong *)(param_1 + 0x158) == 0) {
    plVar5 = (longlong *)FUN_1424bde30(2,param_1 + 8);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e18e70;
    plVar6[2] = (longlong)plVar5;
    plVar13 = plVar6;
    if (plVar5 == (longlong *)0x0) {
      FUN_14275eb3a();
      plVar5 = (longlong *)FUN_1424bde30(2,&DAT_14c844a10);
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_149e18e70;
      plVar7[2] = (longlong)plVar5;
      if (plVar7 == plVar6) {
        if (plVar6 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar10 = plVar7 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar10 = plVar7;
joined_r0x0001467c6cb9:
            plVar13 = plVar6;
            if (iVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
        }
      }
      else {
        plVar13 = plVar7;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar6 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar10 = plVar6;
            plVar6 = plVar7;
            goto joined_r0x0001467c6cb9;
          }
        }
      }
    }
    uVar8 = FUN_1424b77f0();
    (**(code **)(*plVar5 + 0xb0))(plVar5,uVar8);
    if (plVar13 == (longlong *)0x0) {
      *(longlong **)(param_1 + 0x158) = plVar5;
      plVar6 = *(longlong **)(param_1 + 0x160);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x160) = 0;
LAB_1467c6d21:
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        if (plVar13 != (longlong *)0x0) goto LAB_1467c6de3;
      }
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      plVar6 = plVar13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x158) = plVar5;
      plVar6 = *(longlong **)(param_1 + 0x160);
      if (plVar13 == plVar6) {
        LOCK();
        plVar6 = plVar13 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x160) = plVar13;
        if (plVar6 != (longlong *)0x0) goto LAB_1467c6d21;
      }
LAB_1467c6de3:
      LOCK();
      plVar6 = plVar13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  FUN_1467c69c5(&local_158,param_4);
  local_88 = &PTR_FUN_149e18960;
  local_80 = 2;
  FUN_140e20829(&local_158,&local_88,0);
  plVar6 = *(longlong **)(param_1 + 0x158);
  plVar13 = *(longlong **)(param_1 + 0x160);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  bVar14 = true;
  if (1 < local_150) {
    local_15c = 0;
    local_c8 = &PTR_FUN_149e18960;
    local_c0 = 2;
    FUN_1424b93f0(&local_88,&local_c8,&local_15c);
    local_108 = &PTR_FUN_149e18960;
    local_100 = 2;
    lVar9 = (**(code **)(*plVar6 + 0xa8))(plVar6);
    FUN_1424a7c80(&local_108,lVar9 + 8);
    local_148 = &PTR_FUN_149e18960;
    local_140 = 2;
    FUN_1424b93f0(&local_108,&local_148,&local_15c);
    cVar4 = FUN_14626a19a(&local_c8,&local_148);
    bVar14 = cVar4 != '\0';
    FUN_140859a90(&local_148);
    FUN_140859a90(&local_108);
    FUN_140859a90(&local_c8);
  }
  uVar3 = local_160;
  if ((bool)(bVar14 ^ 1U | local_160 != 0)) {
    uVar11 = 2;
    if (local_160 < 5) {
      uVar11 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)local_160 * 4);
    }
    plVar7 = (longlong *)FUN_1424bde30(uVar11,param_1 + 8);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149e18e70;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
    if (plVar7 == (longlong *)0x0) {
      FUN_14275eb3a();
      uVar11 = 2;
      if (uVar3 < 5) {
        uVar11 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)uVar3 * 4);
      }
      plVar7 = (longlong *)FUN_1424bde30(uVar11,&DAT_14c844a10);
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_149e18e70;
      plVar10[2] = (longlong)plVar7;
      if (plVar10 == plVar5) {
        if (plVar5 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
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
            iVar2 = *piVar1;
            UNLOCK();
            plVar5 = plVar10;
            goto joined_r0x0001467c7145;
          }
        }
      }
      else {
        plVar6 = plVar10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x0001467c7145:
            if (iVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
        }
      }
    }
    if (bVar14) {
      uVar8 = FUN_1424b77f0();
    }
    else {
      uVar8 = FUN_1424b7440(&local_88);
    }
    (**(code **)(*plVar7 + 0xb0))(plVar7,uVar8);
    puVar12 = local_168;
    if (plVar6 == (longlong *)0x0) {
      *local_168 = plVar7;
      local_168[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *local_168 = plVar7;
      local_168[1] = plVar6;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (plVar13 == (longlong *)0x0) goto LAB_1467c70d7;
  }
  else {
    *local_168 = plVar6;
    local_168[1] = plVar13;
    puVar12 = local_168;
    if (plVar13 == (longlong *)0x0) goto LAB_1467c70d7;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar6 = plVar13 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_1467c70d7:
  FUN_140859a90(&local_88);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c715e FUN_1467c715e body=1575 status=ok
// SIG undefined FUN_1467c715e(void)

undefined8 *
FUN_1467c715e(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  uint local_16c;
  longlong *local_168;
  undefined4 local_15c;
  longlong local_158;
  int local_150;
  undefined **local_148;
  undefined2 local_140;
  undefined **local_108;
  undefined2 local_100;
  undefined **local_c8;
  undefined2 local_c0;
  undefined **local_88;
  undefined2 local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar4 = (longlong *)FUN_1424bde40(2,2,param_1 + 8);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149e18e70;
    plVar5[2] = (longlong)plVar4;
    plVar13 = plVar5;
    if (plVar4 == (longlong *)0x0) {
      FUN_14275eb3a();
      plVar4 = (longlong *)FUN_1424bde40(2,2,&DAT_14c844a10);
      plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_149e18e70;
      plVar6[2] = (longlong)plVar4;
      if (plVar6 == plVar5) {
        if (plVar5 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar9 = plVar6 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar9 = plVar6;
joined_r0x0001467c7260:
            plVar13 = plVar5;
            if (iVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
          }
        }
      }
      else {
        plVar13 = plVar6;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar5 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar9 = plVar5;
            plVar5 = plVar6;
            goto joined_r0x0001467c7260;
          }
        }
      }
    }
    uVar7 = FUN_1424b77f0();
    (**(code **)(*plVar4 + 0xb0))(plVar4,uVar7);
    if (plVar13 == (longlong *)0x0) {
      *(longlong **)(param_1 + 0x168) = plVar4;
      plVar5 = *(longlong **)(param_1 + 0x170);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x170) = 0;
LAB_1467c72d9:
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        if (plVar13 != (longlong *)0x0) goto LAB_1467c73b3;
      }
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar13 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      plVar5 = plVar13 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x168) = plVar4;
      plVar5 = *(longlong **)(param_1 + 0x170);
      if (plVar13 == plVar5) {
        LOCK();
        plVar5 = plVar13 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x170) = plVar13;
        if (plVar5 != (longlong *)0x0) goto LAB_1467c72d9;
      }
LAB_1467c73b3:
      LOCK();
      plVar5 = plVar13 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  local_178 = param_2;
  FUN_1467c69c5(&local_158,param_5);
  local_88 = &PTR_FUN_149e18960;
  local_80 = 2;
  FUN_140e20829(&local_158,&local_88,0);
  plVar5 = *(longlong **)(param_1 + 0x168);
  plVar13 = *(longlong **)(param_1 + 0x170);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  bVar14 = true;
  if (1 < local_150) {
    local_15c = 0;
    local_c8 = &PTR_FUN_149e18960;
    local_c0 = 2;
    local_168 = plVar13;
    FUN_1424b93f0(&local_88,&local_c8);
    local_108 = &PTR_FUN_149e18960;
    local_100 = 2;
    local_16c = param_3;
    lVar8 = (**(code **)(*plVar5 + 0xa8))(plVar5);
    FUN_1424a7c80(&local_108,lVar8 + 8);
    local_148 = &PTR_FUN_149e18960;
    local_140 = 2;
    FUN_1424b93f0(&local_108,&local_148,&local_15c);
    cVar3 = FUN_14626a19a(&local_c8,&local_148);
    bVar14 = cVar3 != '\0';
    FUN_140859a90(&local_148);
    param_3 = local_16c;
    FUN_140859a90(&local_108);
    plVar13 = local_168;
    FUN_140859a90(&local_c8);
  }
  if ((bool)(bVar14 ^ 1U | (param_4 != 0 || param_3 != 0))) {
    uVar10 = 2;
    uVar11 = 2;
    if (param_4 < 5) {
      uVar11 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)param_4 * 4);
    }
    if (param_3 < 5) {
      uVar10 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)param_3 * 4);
    }
    plVar6 = (longlong *)FUN_1424bde40(uVar10,uVar11,param_1 + 8);
    plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149e18e70;
    plVar4[2] = (longlong)plVar6;
    puVar12 = local_178;
    plVar5 = plVar4;
    if (plVar6 == (longlong *)0x0) {
      FUN_14275eb3a();
      uVar10 = 2;
      uVar11 = 2;
      if (param_4 < 5) {
        uVar11 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)param_4 * 4);
      }
      if (param_3 < 5) {
        uVar10 = *(undefined4 *)(&DAT_149e19f44 + (ulonglong)param_3 * 4);
      }
      plVar6 = (longlong *)FUN_1424bde40(uVar10,uVar11,&DAT_14c844a10);
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      puVar12 = local_178;
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_149e18e70;
      plVar9[2] = (longlong)plVar6;
      if (plVar9 == plVar4) {
        if (plVar4 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar4 = plVar9 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar4 = plVar9;
            goto joined_r0x0001467c776a;
          }
        }
      }
      else {
        plVar5 = plVar9;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar4 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x0001467c776a:
            if (iVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
      }
    }
    if (bVar14) {
      uVar7 = FUN_1424b77f0();
    }
    else {
      uVar7 = FUN_1424b7440(&local_88);
    }
    (**(code **)(*plVar6 + 0xb0))(plVar6,uVar7);
    if (plVar5 == (longlong *)0x0) {
      *puVar12 = plVar6;
      puVar12[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *puVar12 = plVar6;
      puVar12[1] = plVar5;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (plVar13 == (longlong *)0x0) goto LAB_1467c76fb;
  }
  else {
    *local_178 = plVar5;
    local_178[1] = plVar13;
    puVar12 = local_178;
    if (plVar13 == (longlong *)0x0) goto LAB_1467c76fb;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar5 = plVar13 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_1467c76fb:
  FUN_140859a90(&local_88);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c7786 FUN_1467c7786 body=1826 status=ok
// SIG undefined FUN_1467c7786(void)

undefined8 *
FUN_1467c7786(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ushort uVar8;
  longlong *plVar9;
  ushort *puVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  int local_c8;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined1 local_90;
  undefined *local_88 [8];
  undefined *local_48;
  
  local_48 = (undefined *)(DAT_14c707940 ^ (ulonglong)auStack_108);
  if (*(int *)(param_3 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (ushort *)*param_3;
  }
  local_a8 = local_88;
  local_90 = 0;
  local_98 = &local_48;
  local_e0 = param_2;
  local_d8 = param_4;
  local_a0 = local_a8;
  for (; uVar8 = *puVar10, uVar8 == 0x25; puVar10 = puVar10 + 1) {
    uVar8 = puVar10[1];
    puVar10 = puVar10 + 1;
    if (uVar8 < 0x59) {
      if (0x47 < uVar8) {
        switch(uVar8) {
        case 0x48:
          if (local_98 <= (undefined **)((longlong)local_a0 + 4)) {
            FUN_140213274(&local_a8,2);
          }
          *(undefined4 *)local_a0 = 0x480048;
          break;
        case 0x49:
          if (local_98 <= (undefined **)((longlong)local_a0 + 4)) {
            FUN_140213274(&local_a8,2);
          }
          *(undefined4 *)local_a0 = 0x680068;
          break;
        default:
          goto switchD_1467c787b_caseD_63;
        case 0x4d:
          if (local_98 <= (undefined **)((longlong)local_a0 + 4)) {
            FUN_140213274(&local_a8,2);
          }
          *(undefined4 *)local_a0 = 0x6d006d;
          break;
        case 0x50:
          goto switchD_1467c787b_caseD_70;
        case 0x53:
          if (local_98 <= (undefined **)((longlong)local_a0 + 4)) {
            FUN_140213274(&local_a8,2);
          }
          *(undefined4 *)local_a0 = 0x730073;
        }
        goto LAB_1467c7a25;
      }
      if (uVar8 == 0) goto switchD_1467c787b_caseD_63;
      if (uVar8 == 0x41) {
        if (local_98 <= local_a0 + 1) {
          FUN_140213274(&local_a8,4);
        }
        *local_a0 = (undefined *)0x45004500450045;
      }
      else {
        if (uVar8 != 0x42) goto switchD_1467c787b_caseD_63;
        if (local_98 <= local_a0 + 1) {
          FUN_140213274(&local_a8,4);
        }
        *local_a0 = (undefined *)0x4d004d004d004d;
      }
LAB_1467c7a58:
      local_a0 = local_a0 + 1;
      goto LAB_1467c7851;
    }
    switch(uVar8) {
    case 0x61:
      if (local_98 <= (undefined **)((longlong)local_a0 + 6)) {
        FUN_140213274(&local_a8,3);
      }
      *(ushort *)((longlong)local_a0 + 4) = 0x45;
      *(undefined4 *)local_a0 = 0x450045;
      goto LAB_1467c7b0e;
    case 0x62:
      if (local_98 <= (undefined **)((longlong)local_a0 + 6)) {
        FUN_140213274(&local_a8,3);
      }
      *(ushort *)((longlong)local_a0 + 4) = 0x4d;
      *(undefined4 *)local_a0 = 0x4d004d;
LAB_1467c7b0e:
      local_a0 = (undefined **)((longlong)local_a0 + 6);
      goto LAB_1467c7851;
    case 99:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6b:
    case 0x6e:
    case 0x6f:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x78:
      goto switchD_1467c787b_caseD_63;
    case 100:
      if (local_98 <= (undefined **)((longlong)local_a0 + 4)) {
        FUN_140213274(&local_a8,2);
      }
      *(undefined4 *)local_a0 = 0x640064;
      goto LAB_1467c7a25;
    case 0x65:
      if (local_98 <= (undefined **)((longlong)local_a0 + 2)) {
        FUN_140213274(&local_a8,1);
      }
      *(ushort *)local_a0 = 100;
      break;
    case 0x6a:
      if (local_98 <= (undefined **)((longlong)local_a0 + 2)) {
        FUN_140213274(&local_a8,1);
      }
      *(ushort *)local_a0 = 0x44;
      break;
    case 0x6c:
      if (local_98 <= (undefined **)((longlong)local_a0 + 2)) {
        FUN_140213274(&local_a8,1);
      }
      *(ushort *)local_a0 = 0x68;
      break;
    case 0x6d:
      if (local_98 <= (undefined **)((longlong)local_a0 + 4)) {
        FUN_140213274(&local_a8,2);
      }
      *(undefined4 *)local_a0 = 0x4d004d;
      goto LAB_1467c7a25;
    case 0x70:
switchD_1467c787b_caseD_70:
      if (local_98 <= (undefined **)((longlong)local_a0 + 2)) {
        FUN_140213274(&local_a8,1);
      }
      *(ushort *)local_a0 = 0x61;
      break;
    case 0x77:
      if (local_98 <= (undefined **)((longlong)local_a0 + 2)) {
        FUN_140213274(&local_a8,1);
      }
      *(ushort *)local_a0 = 0x65;
      break;
    case 0x79:
      if (local_98 <= (undefined **)((longlong)local_a0 + 4)) {
        FUN_140213274(&local_a8,2);
      }
      *(undefined4 *)local_a0 = 0x790079;
LAB_1467c7a25:
      local_a0 = (undefined **)((longlong)local_a0 + 4);
      goto LAB_1467c7851;
    default:
      if (uVar8 == 0x59) {
        if (local_98 <= local_a0 + 1) {
          FUN_140213274(&local_a8,4);
        }
        *local_a0 = (undefined *)0x79007900790079;
        goto LAB_1467c7a58;
      }
      goto switchD_1467c787b_caseD_63;
    }
    local_a0 = (undefined **)((longlong)local_a0 + 2);
LAB_1467c7851:
  }
  if (uVar8 != 0) goto switchD_1467c787b_caseD_63;
  *(ushort *)local_a0 = 0;
  FUN_140056680(local_b8,local_a8);
  FUN_144724f3c(&local_a8);
  local_bc = 0;
  local_a8 = &PTR_FUN_149e18960;
  local_a0._0_2_ = 2;
  FUN_140e20829(local_b8,&local_a8,1);
  plVar4 = (longlong *)FUN_1424be360(&local_a8,param_1 + 8,&local_bc);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149e18e70;
  plVar5[2] = (longlong)plVar4;
  FUN_140859a90(&local_a8);
  plVar9 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    FUN_14275eb3a();
    local_a8 = &PTR_FUN_149e18960;
    local_a0._0_2_ = 2;
    FUN_140e20829(local_b8,&local_a8,1);
    plVar4 = (longlong *)FUN_1424be360(&local_a8,&DAT_14c844a10,&local_bc);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e18e70;
    plVar6[2] = (longlong)plVar4;
    if (plVar6 == plVar5) {
      if (plVar5 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar5 = plVar6;
          goto joined_r0x0001467c7d1b;
        }
      }
    }
    else {
      plVar9 = plVar6;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001467c7d1b:
          if (iVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
    }
    FUN_140859a90(&local_a8);
    bVar3 = true;
    if (plVar4 == (longlong *)0x0) goto LAB_1467c7d38;
  }
  FUN_1467c69c5(&local_d0,local_d8);
  if (local_c8 < 2) {
    uVar7 = FUN_1424b77f0();
    (**(code **)(*plVar4 + 0xb0))(plVar4,uVar7);
  }
  else {
    local_a8 = &PTR_FUN_149e18960;
    local_a0._0_2_ = 2;
    FUN_140e20829(&local_d0,&local_a8,0);
    uVar7 = FUN_1424b7440(&local_a8);
    (**(code **)(*plVar4 + 0xb0))(plVar4,uVar7);
    FUN_140859a90(&local_a8);
  }
  if (plVar9 == (longlong *)0x0) {
    *local_e0 = plVar4;
    local_e0[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *local_e0 = plVar4;
    local_e0[1] = plVar9;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  bVar3 = false;
LAB_1467c7d38:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (bVar3) {
    local_e8 = local_d8;
    FUN_1467c715e(param_1,local_e0,0,0);
  }
  if (((ulonglong)local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
switchD_1467c787b_caseD_63:
  if (local_98 <= (undefined **)((longlong)local_a0 + 2)) {
    FUN_140213274(&local_a8,1);
  }
  *(ushort *)local_a0 = uVar8;
  local_a0 = (undefined **)((longlong)local_a0 + 2);
  goto LAB_1467c7851;
}



// FUNCTION 1467c7eaa FUN_1467c7eaa body=665 status=ok
// SIG undefined FUN_1467c7eaa(void)

longlong FUN_1467c7eaa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [42];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  if (lVar4 != 0) goto LAB_1467c7eda;
  local_e8[0] = 0;
  lVar4 = FUN_1424bb8f0(param_1 + 8);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149e18e90;
  plVar5[2] = lVar4;
  plVar7 = plVar5;
  if (lVar4 == 0) {
    FUN_14275eb3a();
    lVar4 = FUN_1424bb8f0(&DAT_14c844a10,local_e8);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e18e90;
    plVar6[2] = lVar4;
    if (plVar6 == plVar5) {
      if (plVar5 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar1 = plVar6;
joined_r0x0001467c7fbe:
          plVar7 = plVar5;
          if (iVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))();
          }
        }
      }
    }
    else {
      plVar7 = plVar6;
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
          iVar3 = *piVar2;
          UNLOCK();
          plVar1 = plVar5;
          plVar5 = plVar6;
          goto joined_r0x0001467c7fbe;
        }
      }
    }
  }
  FUN_140236d9a(local_e8,param_1 + 8,lVar4);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    plVar5 = (longlong *)FUN_14001cc68(0xb8,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149e18eb0;
    FUN_1456e9496(plVar5 + 2,local_e8);
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1e0) = 0x10;
      plVar6 = *(longlong **)(param_1 + 0x1e8);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x1e8) = 0;
LAB_1467c806d:
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
        if (plVar5 != (longlong *)0x0) goto LAB_1467c80d8;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x1e0) = plVar5 + 2;
      plVar6 = *(longlong **)(param_1 + 0x1e8);
      if (plVar5 == plVar6) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x1e8) = plVar5;
        if (plVar6 != (longlong *)0x0) goto LAB_1467c806d;
      }
LAB_1467c80d8:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  FUN_1456e91d4(local_e8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_1467c7eda:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c8144 FUN_1467c8144 body=2263 status=ok
// SIG undefined FUN_1467c8144(void)

longlong * FUN_1467c8144(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *plStack_120;
  undefined2 *local_118;
  int local_110;
  undefined2 **local_108;
  longlong **local_100;
  undefined1 local_f4 [4];
  undefined **local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1467c8a1c(&local_118);
  iVar5 = local_110;
  if (local_110 < 2) {
    plVar7 = *(longlong **)(param_1 + 0x218);
LAB_1467c8188:
    if (plVar7 != (longlong *)0x0) goto LAB_1467c8191;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2a0);
    EnterCriticalSection(lpCriticalSection);
    puVar10 = local_118;
    if (local_110 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    iVar3 = local_110 + -1;
    if (local_110 == 0) {
      iVar3 = 0;
    }
    uVar4 = FUN_144a49b4a(iVar3,puVar10);
    iVar3 = FUN_1467d6d0c((longlong *)(param_1 + 0x250),uVar4,&local_118);
    if ((iVar3 != -1) &&
       (lVar9 = (longlong)iVar3 * 0x28 + *(longlong *)(param_1 + 0x250), lVar9 != 0)) {
      plVar7 = *(longlong **)(lVar9 + 0x10);
      plVar11 = *(longlong **)(lVar9 + 0x18);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar11 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      LeaveCriticalSection(lpCriticalSection);
      goto LAB_1467c8188;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  local_f0 = (undefined **)((ulonglong)local_f0 & 0xffffffff00000000);
  plVar6 = (longlong *)FUN_1424bb8e0(param_1 + 8);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e18e90;
  plVar7[2] = (longlong)plVar6;
  plVar11 = plVar7;
  if (plVar6 == (longlong *)0x0) {
    FUN_14275eb3a();
    plVar6 = (longlong *)FUN_1424bb8e0(&DAT_14c844a10,&local_f0);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_149e18e90;
    plVar8[2] = (longlong)plVar6;
    if (plVar8 == plVar7) {
      if (plVar7 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar1 = plVar8;
joined_r0x0001467c8324:
          plVar11 = plVar7;
          if (iVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))();
          }
        }
      }
    }
    else {
      plVar11 = plVar8;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar1 = plVar7;
          plVar7 = plVar8;
          goto joined_r0x0001467c8324;
        }
      }
    }
  }
  if (1 < iVar5) {
    local_f0 = &PTR_FUN_149e18960;
    local_e8 = CONCAT62(local_e8._2_6_,2);
    FUN_140e20829(&local_118,&local_f0,1);
    if ((local_e8 & 0x11) == 0) {
      lVar9 = local_d8;
      if ((local_e8 & 2) != 0) {
        lVar9 = (longlong)&local_e8 + 2;
      }
    }
    else {
      lVar9 = 0;
    }
    (**(code **)(*plVar6 + 0x248))(plVar6,lVar9);
    FUN_140859a90(&local_f0);
  }
  FUN_140236d9a(&local_f0,param_1 + 8,plVar6);
  FUN_14275ec1a(&local_c0);
  FUN_14275ec1a(&local_e0);
  FUN_14275ec74(&local_b0);
  FUN_14275ec74(&local_d0);
  if (iVar5 < 2) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x228));
    if (*(longlong *)(param_1 + 0x218) == 0) {
      plVar7 = (longlong *)FUN_14001cc68(0xb8,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_149e18eb0;
      plVar7[2] = (longlong)local_f0;
      local_f0 = (undefined **)0x0;
      *(undefined4 *)(plVar7 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = local_e8._4_4_;
      local_e8 = 0;
      plVar7[4] = local_e0;
      local_e0 = 0;
      *(undefined4 *)(plVar7 + 5) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar7 + 0x2c) = local_d8._4_4_;
      local_d8 = 0;
      plVar7[6] = local_d0;
      local_d0 = 0;
      *(undefined4 *)(plVar7 + 7) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar7 + 0x3c) = local_c8._4_4_;
      local_c8 = 0;
      plVar7[8] = local_c0;
      local_c0 = 0;
      *(undefined4 *)(plVar7 + 9) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar7 + 0x4c) = local_b8._4_4_;
      local_b8 = 0;
      plVar7[10] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(plVar7 + 0xb) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar7 + 0x5c) = local_a8._4_4_;
      local_a8 = 0;
      plVar7[0xc] = local_a0;
      local_a0 = 0;
      *(undefined4 *)(plVar7 + 0xd) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar7 + 0x6c) = local_98._4_4_;
      local_98 = 0;
      plVar7[0xe] = local_90;
      local_90 = 0;
      *(undefined4 *)(plVar7 + 0xf) = (undefined4)local_88;
      *(undefined4 *)((longlong)plVar7 + 0x7c) = local_88._4_4_;
      local_88 = 0;
      *(undefined4 *)(plVar7 + 0x16) = local_50;
      *(undefined4 *)(plVar7 + 0x14) = local_60;
      *(undefined4 *)((longlong)plVar7 + 0xa4) = uStack_5c;
      *(undefined4 *)(plVar7 + 0x15) = uStack_58;
      *(undefined4 *)((longlong)plVar7 + 0xac) = uStack_54;
      *(undefined4 *)(plVar7 + 0x12) = local_70;
      *(undefined4 *)((longlong)plVar7 + 0x94) = uStack_6c;
      *(undefined4 *)(plVar7 + 0x13) = uStack_68;
      *(undefined4 *)((longlong)plVar7 + 0x9c) = uStack_64;
      *(undefined4 *)(plVar7 + 0x10) = local_80;
      *(undefined4 *)((longlong)plVar7 + 0x84) = uStack_7c;
      *(undefined4 *)(plVar7 + 0x11) = uStack_78;
      *(undefined4 *)((longlong)plVar7 + 0x8c) = uStack_74;
      if (plVar7 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x218) = 0x10;
        plVar6 = *(longlong **)(param_1 + 0x220);
        if (plVar6 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x220) = 0;
LAB_1467c85d6:
          LOCK();
          plVar8 = plVar6 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          if (plVar7 != (longlong *)0x0) goto LAB_1467c89b0;
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x218) = plVar7 + 2;
        plVar6 = *(longlong **)(param_1 + 0x220);
        if (plVar7 == plVar6) {
          LOCK();
          plVar6 = plVar7 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0x220) = plVar7;
          if (plVar6 != (longlong *)0x0) goto LAB_1467c85d6;
        }
LAB_1467c89b0:
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x228));
    plVar7 = *(longlong **)(param_1 + 0x218);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a0));
    plVar7 = (longlong *)(param_1 + 0x250);
    puVar10 = local_118;
    if (local_110 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    iVar5 = local_110 + -1;
    if (local_110 == 0) {
      iVar5 = 0;
    }
    uVar4 = FUN_144a49b4a(iVar5,puVar10);
    iVar5 = FUN_1467d6d0c(plVar7,uVar4,&local_118);
    if ((iVar5 == -1) || (lVar9 = (longlong)iVar5 * 0x28 + *plVar7, lVar9 == 0)) {
      local_128 = (longlong *)0x0;
      plStack_120 = (longlong *)0x0;
LAB_1467c866f:
      plVar8 = (longlong *)FUN_14001cc68(0xb8,0x10);
      plVar6 = plStack_120;
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_149e18eb0;
      local_128 = plVar8 + 2;
      plVar8[2] = (longlong)local_f0;
      local_f0 = (undefined **)0x0;
      *(undefined4 *)(plVar8 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = local_e8._4_4_;
      local_e8 = 0;
      plVar8[4] = local_e0;
      local_e0 = 0;
      *(undefined4 *)(plVar8 + 5) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar8 + 0x2c) = local_d8._4_4_;
      local_d8 = 0;
      plVar8[6] = local_d0;
      local_d0 = 0;
      *(undefined4 *)(plVar8 + 7) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar8 + 0x3c) = local_c8._4_4_;
      local_c8 = 0;
      plVar8[8] = local_c0;
      local_c0 = 0;
      *(undefined4 *)(plVar8 + 9) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar8 + 0x4c) = local_b8._4_4_;
      local_b8 = 0;
      plVar8[10] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(plVar8 + 0xb) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar8 + 0x5c) = local_a8._4_4_;
      local_a8 = 0;
      plVar8[0xc] = local_a0;
      local_a0 = 0;
      *(undefined4 *)(plVar8 + 0xd) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar8 + 0x6c) = local_98._4_4_;
      local_98 = 0;
      plVar8[0xe] = local_90;
      local_90 = 0;
      *(undefined4 *)(plVar8 + 0xf) = (undefined4)local_88;
      *(undefined4 *)((longlong)plVar8 + 0x7c) = local_88._4_4_;
      local_88 = 0;
      *(undefined4 *)(plVar8 + 0x16) = local_50;
      *(undefined4 *)(plVar8 + 0x14) = local_60;
      *(undefined4 *)((longlong)plVar8 + 0xa4) = uStack_5c;
      *(undefined4 *)(plVar8 + 0x15) = uStack_58;
      *(undefined4 *)((longlong)plVar8 + 0xac) = uStack_54;
      *(undefined4 *)(plVar8 + 0x12) = local_70;
      *(undefined4 *)((longlong)plVar8 + 0x94) = uStack_6c;
      *(undefined4 *)(plVar8 + 0x13) = uStack_68;
      *(undefined4 *)((longlong)plVar8 + 0x9c) = uStack_64;
      *(undefined4 *)(plVar8 + 0x10) = local_80;
      *(undefined4 *)((longlong)plVar8 + 0x84) = uStack_7c;
      *(undefined4 *)(plVar8 + 0x11) = uStack_78;
      *(undefined4 *)((longlong)plVar8 + 0x8c) = uStack_74;
      if (plVar8 == (longlong *)0x0) {
        if (plStack_120 != (longlong *)0x0) {
          plStack_120 = (longlong *)0x0;
LAB_1467c882e:
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
          if (plVar8 != (longlong *)0x0) goto LAB_1467c892e;
        }
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        if (plVar8 == plStack_120) {
          LOCK();
          plVar6 = plVar8 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        else {
          bVar12 = plStack_120 != (longlong *)0x0;
          plStack_120 = plVar8;
          if (bVar12) goto LAB_1467c882e;
        }
LAB_1467c892e:
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_100 = &local_128;
      local_108 = &local_118;
      FUN_1467d6dd8(plVar7,local_f4);
    }
    else {
      local_128 = *(longlong **)(lVar9 + 0x10);
      plStack_120 = *(longlong **)(lVar9 + 0x18);
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      if (local_128 == (longlong *)0x0) goto LAB_1467c866f;
    }
    plVar6 = plStack_120;
    plVar7 = local_128;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_120 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a0));
  }
  FUN_1456e91d4(&local_f0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_1467c8191:
  if (local_118 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c8a1c FUN_1467c8a1c body=427 status=ok
// SIG undefined FUN_1467c8a1c(void)

undefined8 * FUN_1467c8a1c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  ushort *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar8 = (ulonglong)uVar1;
  *param_1 = 0;
  _Src = (void *)*param_2;
  *(uint *)(param_1 + 1) = uVar1;
  if ((longlong)(int)uVar1 < 2) {
    if (uVar8 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,uVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  else {
    uVar10 = 0;
    FUN_1446dd670(param_1,uVar8,0);
    memcpy((void *)*param_1,_Src,uVar8 * 2);
    uVar1 = *(uint *)(param_1 + 1);
    uVar8 = (ulonglong)(int)uVar1;
    if (uVar8 != 0) {
      puVar2 = (ushort *)*param_1;
      if (*puVar2 == 0) {
        bVar4 = false;
      }
      else {
        bVar11 = (ushort)((*puVar2 & 0xffdf) - 0x41) < 0x1a;
        bVar4 = !bVar11;
        uVar10 = (uint)bVar11;
      }
      uVar7 = 0;
      uVar5 = 0;
LAB_1467c8ad2:
      uVar6 = (ulonglong)uVar5;
LAB_1467c8ade:
      uVar9 = (int)uVar6 + 1;
      if ((int)uVar9 < (int)uVar1) {
        uVar6 = (longlong)(int)uVar6 + 1;
        bVar11 = true;
        do {
          if (puVar2[uVar6] == 0) {
            if (bVar4 != false) {
              if (!bVar11) goto LAB_1467c8ba0;
              bVar4 = false;
              uVar5 = (uint)uVar6;
              goto LAB_1467c8ad2;
            }
          }
          else {
            if ((ushort)((puVar2[uVar6] & 0xffdf) - 0x41) < 0x1a) goto LAB_1467c8b22;
            if (!bVar4) goto LAB_1467c8b6b;
          }
          uVar6 = uVar6 + 1;
          bVar11 = (longlong)uVar6 < (longlong)uVar8;
          if (uVar6 == uVar8) {
            uVar6 = (ulonglong)uVar1;
            goto LAB_1467c8b3d;
          }
        } while( true );
      }
      if (bVar4 != false) goto LAB_1467c8ba0;
      bVar11 = false;
      goto LAB_1467c8b6e;
    }
  }
  return param_1;
LAB_1467c8b22:
  uVar9 = uVar10 + 1;
  bVar3 = 2 < (int)uVar10;
  uVar10 = uVar9;
  if (bVar4 != bVar3) goto LAB_1467c8b3d;
  goto LAB_1467c8ade;
LAB_1467c8b3d:
  if (bVar4 == false) {
LAB_1467c8b6b:
    uVar9 = (uint)uVar6;
LAB_1467c8b6e:
    if (uVar7 != uVar5) {
      memmove(puVar2 + (int)uVar7,puVar2 + (int)uVar5,(longlong)(int)(uVar9 - uVar5) * 2);
    }
    uVar7 = uVar7 + (uVar9 - uVar5);
    bVar4 = true;
    uVar5 = uVar9;
  }
  else {
    bVar4 = false;
    uVar5 = (uint)uVar6;
  }
  if (!bVar11) {
LAB_1467c8ba0:
    *(uint *)(param_1 + 1) = uVar7;
    return param_1;
  }
  goto LAB_1467c8ad2;
}



// FUNCTION 1467c8bc8 FUN_1467c8bc8 body=104 status=ok
// SIG undefined FUN_1467c8bc8(void)

undefined4 FUN_1467c8bc8(longlong param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1424c1340(*(undefined8 *)(param_1 + 0x178 + (ulonglong)(param_3 != '\0') * 8),local_58,param_2
               );
  uVar1 = FUN_1412adb2b(local_58);
  FUN_140859a90(local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c8c32 FUN_1467c8c32 body=102 status=ok
// SIG undefined FUN_1467c8c32(void)

undefined4 FUN_1467c8c32(longlong param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1424c1440(*(undefined8 *)(param_1 + 0x178 + (ulonglong)(param_3 != '\0') * 8),local_58,param_2
               );
  uVar1 = FUN_1412adb2b(local_58);
  FUN_140859a90(local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c8cae FUN_1467c8cae body=535 status=ok
// SIG undefined FUN_1467c8cae(void)

double FUN_1467c8cae(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_90;
  int local_88;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar1 = *param_2;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    FUN_14021300e(&local_68,0x7b2,1,1);
    dVar6 = (double)((lVar1 - CONCAT44(uStack_64,local_68)) / 10000000) * 1000.0;
  }
  else {
    FUN_14021332c(param_2,&local_68,&local_6c,&local_70);
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)((lVar1 / 36000000000) * 0x2aaaaaab) >> 0x20);
    auVar3 = SEXT816(lVar1 / 600000000) * ZEXT816(0x8888888888888889);
    lVar5 = lVar1 / 10000000 - lVar1 / -0x6769800000000000;
    auVar4 = SEXT816(lVar5) * ZEXT816(0x8888888888888889);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    local_98 = (int)(lVar1 / 36000000000) + ((uVar2 >> 2) - ((int)uVar2 >> 0x1f)) * -0x18;
    local_90 = (int)(lVar1 / 600000000) +
               ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c;
    local_88 = (int)lVar5 + ((int)(auVar4._8_8_ >> 5) - (auVar4._12_4_ >> 0x1f)) * -0x3c;
    FUN_1424cd550(*(undefined8 *)(param_1 + 0x1b8),local_68,local_6c + -1,local_70);
    local_74 = 0;
    dVar6 = (double)FUN_1424cd180(*(undefined8 *)(param_1 + 0x1b8));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return dVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c8eca FUN_1467c8eca body=127 status=ok
// SIG undefined FUN_1467c8eca(void)

undefined4 FUN_1467c8eca(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    plVar6 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1467c8f00;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar6 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_1467c8f00:
  uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  (**(code **)(*plVar6 + 0x20))(plVar6);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  if (!bVar2) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1467c8f58 FUN_1467c8f58 body=183 status=ok
// SIG undefined FUN_1467c8f58(void)

LPCRITICAL_SECTION FUN_1467c8f58(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].SpinCount = 0;
  *(undefined4 *)&param_1[2].DebugInfo = 0;
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[2].DebugInfo + 4) = 0xffffffff00000080;
  param_1[2].RecursionCount = 0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[2].SpinCount = 0;
  InitializeCriticalSection(param_1 + 3);
  SetCriticalSectionSpinCount(param_1 + 3,4000);
  param_1[4].SpinCount = 0;
  *(undefined4 *)&param_1[5].DebugInfo = 0;
  param_1[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[4].LockCount = 0;
  param_1[4].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[5].DebugInfo + 4) = 0xffffffff00000080;
  param_1[5].RecursionCount = 0;
  param_1[5].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[5].SpinCount = 0;
  return param_1;
}



// FUNCTION 1467c9010 FUN_1467c9010 body=152 status=ok
// SIG undefined FUN_1467c9010(void)

undefined4 FUN_1467c9010(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  uVar7 = 0xffffffff;
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1467c9082;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(lVar3 + 0x40);
    if (lVar3 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = FUN_1424b5920(lVar3,&local_1c);
    }
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
LAB_1467c9082:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1467c90aa FUN_1467c90aa body=152 status=ok
// SIG undefined FUN_1467c90aa(void)

undefined4 FUN_1467c90aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  uVar7 = 0xffffffff;
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1467c911c;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(lVar3 + 0x40);
    if (lVar3 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = FUN_1424ab280(lVar3,&local_1c);
    }
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
LAB_1467c911c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1467c9144 FUN_1467c9144 body=154 status=ok
// SIG undefined FUN_1467c9144(void)

undefined4 FUN_1467c9144(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  uVar7 = 0xffffffff;
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1467c91b8;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(lVar3 + 0x40);
    if (lVar3 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = FUN_140d5ff10(lVar3,param_2,&local_1c);
    }
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
LAB_1467c91b8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1467c91e0 FUN_1467c91e0 body=154 status=ok
// SIG undefined FUN_1467c91e0(void)

undefined4 FUN_1467c91e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  uVar7 = 0xffffffff;
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1467c9254;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(lVar3 + 0x40);
    if (lVar3 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = FUN_140d5fe90(lVar3,param_2,&local_1c);
    }
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
LAB_1467c9254:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1467c927c FUN_1467c927c body=102 status=ok
// SIG undefined FUN_1467c927c(void)

undefined4 FUN_1467c927c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  uVar7 = 0xffffffff;
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        return 0xffffffff;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(lVar3 + 0x40) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = FUN_1424b4080();
    }
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
  return uVar7;
}



// FUNCTION 1467c92e2 FUN_1467c92e2 body=102 status=ok
// SIG undefined FUN_1467c92e2(void)

undefined4 FUN_1467c92e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  uVar7 = 0xffffffff;
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        return 0xffffffff;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if (*(longlong *)(lVar3 + 0x40) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = FUN_1424b4060();
    }
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
  return uVar7;
}



// FUNCTION 1467c9348 FUN_1467c9348 body=141 status=ok
// SIG undefined FUN_1467c9348(void)

void FUN_1467c9348(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1467c93b9;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar3 = *(longlong *)(lVar3 + 0x40);
    if (lVar3 != 0) {
      local_14 = 0;
      FUN_1424b3f90(lVar3,(longlong)param_2,(longlong)param_3);
    }
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
LAB_1467c93b9:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467c93d6 FUN_1467c93d6 body=245 status=ok
// SIG undefined FUN_1467c93d6(void)

undefined8 *
FUN_1467c93d6(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined **local_80;
  undefined2 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_145c56324();
  uVar4 = FUN_1467c8cae(*(undefined8 *)(lVar3 + 0x20),param_2);
  FUN_1467c6434(*param_5,&local_90,param_3,param_4);
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  FUN_1424bdb60(local_90,uVar4,&local_80);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1412abb25(&local_80,param_1);
  FUN_140859a90(&local_80);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c94cc FUN_1467c94cc body=245 status=ok
// SIG undefined FUN_1467c94cc(void)

undefined8 *
FUN_1467c94cc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined **local_80;
  undefined2 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_145c56324();
  uVar4 = FUN_1467c8cae(*(undefined8 *)(lVar3 + 0x20),param_2);
  FUN_1467c6bcc(*param_5,&local_90,param_3,param_4);
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  FUN_1424bdb60(local_90,uVar4,&local_80);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1412abb25(&local_80,param_1);
  FUN_140859a90(&local_80);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c95c2 FUN_1467c95c2 body=263 status=ok
// SIG undefined FUN_1467c95c2(void)

undefined8 *
FUN_1467c95c2(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined **local_90;
  undefined2 local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_145c56324();
  uVar4 = FUN_1467c8cae(*(undefined8 *)(lVar3 + 0x20),param_2);
  local_a8 = param_5;
  FUN_1467c715e(*param_6,&local_a0,param_3,param_4);
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  FUN_1424bdb60(local_a0,uVar4,&local_90);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1412abb25(&local_90,param_1);
  FUN_140859a90(&local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c96ca FUN_1467c96ca body=245 status=ok
// SIG undefined FUN_1467c96ca(void)

undefined8 *
FUN_1467c96ca(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined **local_80;
  undefined2 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_145c56324();
  uVar4 = FUN_1467c8cae(*(undefined8 *)(lVar3 + 0x20),param_2);
  FUN_1467c7786(*param_5,&local_90,param_3,param_4);
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  FUN_1424bdb60(local_90,uVar4,&local_80);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1412abb25(&local_80,param_1);
  FUN_140859a90(&local_80);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c97c0 FUN_1467c97c0 body=134 status=ok
// SIG undefined FUN_1467c97c0(void)

undefined8 * FUN_1467c97c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c56324();
  local_60 = &PTR_FUN_149e18960;
  local_58 = 2;
  FUN_140e20829(param_2,&local_60,1);
  uVar1 = FUN_1424d64f0(&local_60);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1412abb25(uVar1,param_1);
  FUN_140859a90(&local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c9848 FUN_1467c9848 body=134 status=ok
// SIG undefined FUN_1467c9848(void)

undefined8 * FUN_1467c9848(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c56324();
  local_60 = &PTR_FUN_149e18960;
  local_58 = 2;
  FUN_140e20829(param_2,&local_60,1);
  uVar1 = FUN_1424d6570(&local_60);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1412abb25(uVar1,param_1);
  FUN_140859a90(&local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467c98d0 FUN_1467c98d0 body=1542 status=ok
// SIG undefined FUN_1467c98d0(void)

undefined4 FUN_1467c98d0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_1f8 [36];
  undefined4 local_1d4;
  undefined **local_1d0 [4];
  longlong local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined1 local_190 [112];
  undefined **local_120 [4];
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  int local_e8;
  undefined4 local_e0 [28];
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844be8) && (FUN_144b3d300(&DAT_14c844be8), DAT_14c844be8 == -1)) {
    FUN_1456bade4(&DAT_14c844b48);
    DAT_14c844be0 = &DAT_14c844b48;
    atexit(FUN_142761918);
    _Init_thread_footer(&DAT_14c844be8);
  }
  plVar10 = *(longlong **)(DAT_14c844be0 + 0x28);
  plVar2 = *(longlong **)(DAT_14c844be0 + 0x30);
  if (plVar2 == (longlong *)0x0) {
    FUN_1467c60aa(*plVar10,&local_70,param_3);
    goto LAB_1467c99b1;
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  lVar3 = *plVar10;
  if (*(longlong *)(lVar3 + 0x138) == 0) {
    local_e0[0] = 0;
    lVar7 = FUN_14003c1a0(lVar3 + 8);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_149e189d0;
    plVar8[2] = lVar7;
    plVar10 = plVar8;
    if (lVar7 == 0) {
      FUN_14275eb3a();
      lVar7 = FUN_14003c1a0(&DAT_14c844a10,local_e0);
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_149e189d0;
      plVar10[2] = lVar7;
      if (plVar10 != plVar8) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        goto LAB_1467c9ba0;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        goto LAB_1467c9bac;
      }
LAB_1467c9e82:
      *(longlong *)(lVar3 + 0x138) = lVar7;
      plVar10 = *(longlong **)(lVar3 + 0x140);
      if (plVar10 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + 0x140) = 0;
        bVar5 = true;
        plVar8 = (longlong *)0x0;
LAB_1467c9eaa:
        LOCK();
        plVar9 = plVar10 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (!bVar5) goto LAB_1467c9be8;
      }
    }
    else {
LAB_1467c9ba0:
      plVar8 = plVar10;
      if (plVar10 == (longlong *)0x0) goto LAB_1467c9e82;
LAB_1467c9bac:
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *(longlong *)(lVar3 + 0x138) = lVar7;
      plVar10 = *(longlong **)(lVar3 + 0x140);
      if (plVar8 != plVar10) {
        *(longlong **)(lVar3 + 0x140) = plVar8;
        if (plVar10 == (longlong *)0x0) goto LAB_1467c9be8;
        bVar5 = false;
        goto LAB_1467c9eaa;
      }
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
LAB_1467c9be8:
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  local_e0[0] = 0;
  local_70 = *(longlong **)(lVar3 + 0x138);
  plVar10 = *(longlong **)(lVar3 + 0x140);
  if (plVar10 == (longlong *)0x0) {
    if (param_3 != 0) goto LAB_1467c9cbe;
    local_68 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (param_3 == 0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      local_68 = plVar10;
    }
    else {
LAB_1467c9cbe:
      plVar8 = (longlong *)(**(code **)(*local_70 + 0x20))();
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_149e189d0;
      plVar9[2] = (longlong)plVar8;
      uVar6 = 0xffffffff;
      if (param_3 - 1U < 5) {
        uVar6 = *(undefined4 *)(&DAT_149e19f74 + (ulonglong)(param_3 - 1U) * 4);
      }
      (**(code **)(*plVar8 + 0xb0))(plVar8,5,uVar6,local_e0);
      local_70 = plVar8;
      local_68 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
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
      if (plVar10 == (longlong *)0x0) goto LAB_1467c99a7;
    }
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_1467c99a7:
  LOCK();
  plVar10 = plVar2 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_1467c99b1:
  uVar4 = *param_1;
  iVar11 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar11 = 0;
  }
  FUN_14003c090(local_120);
  local_120[0] = &PTR_FUN_149e17b10;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = uVar4;
  local_e8 = iVar11;
  FUN_14003c0c0(local_120,uVar4,iVar11);
  FUN_14003c0f0(local_e0,local_120);
  local_1a0 = *param_2;
  local_198 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_198 = 0;
  }
  FUN_14003c090(local_1d0);
  local_1d0[0] = &PTR_FUN_149e17b10;
  local_1b0 = 0;
  uStack_1a8 = 0;
  FUN_14003c0c0(local_1d0,local_1a0,local_198);
  FUN_14003c0f0(local_190,local_1d0);
  local_1d4 = 0;
  uVar6 = (**(code **)(*local_70 + 0x28))(local_70,local_e0,local_190);
  local_1d0[0] = &PTR_FUN_149e17b10;
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  FUN_14003c080(local_1d0);
  local_120[0] = &PTR_FUN_149e17b10;
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_14003c080(local_120);
  plVar10 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1467c9ee0 FUN_1467c9ee0 body=88 status=ok
// SIG undefined FUN_1467c9ee0(void)

undefined8 * FUN_1467c9ee0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  FUN_1424a5c50();
  *param_1 = &PTR_FUN_149e17b10;
  FUN_14006620a(param_1 + 4,*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  param_1[6] = param_1[4];
  iVar1 = *(int *)(param_1 + 5) + -1;
  if (*(int *)(param_1 + 5) == 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 7) = iVar1;
  FUN_14003c0c0(param_1);
  return param_1;
}



// FUNCTION 1467c9f38 FUN_1467c9f38 body=50 status=ok
// SIG undefined FUN_1467c9f38(void)

longlong FUN_1467c9f38(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x40);
  if (lVar1 != 0) {
    FUN_1467c9ee0(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 1467c9f6a FUN_1467c9f6a body=397 status=ok
// SIG undefined FUN_1467c9f6a(void)

ulonglong FUN_1467c9f6a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14588f6d2(*(undefined8 *)(param_1 + 0x20),&local_28,param_2,0);
  if (local_28 == 0) {
    local_28 = 0;
  }
  else if (((*(longlong *)(param_1 + 0x28) != local_28) ||
           (*(longlong *)(param_1 + 0x38) != local_28)) || (0 < *(int *)(param_1 + 0x50))) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x28) = local_28;
    *(longlong **)(param_1 + 0x30) = local_20;
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x38) = local_28;
    *(longlong **)(param_1 + 0x40) = local_20;
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
    iVar3 = *(int *)(param_1 + 0x54);
    FUN_145ae987e(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
      FUN_1467d7b50(param_1 + 0x48);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    local_38 = *(undefined8 *)(param_1 + 0x28);
    local_30 = *(longlong *)(param_1 + 0x30);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_14611b45e(uVar5,&local_38);
    FUN_1447f69b6(param_1 + 8);
  }
  if ((*(longlong *)(param_1 + 0x28) == local_28) && (*(longlong *)(param_1 + 0x38) == local_28)) {
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(int *)(param_1 + 0x50) == 0);
  }
  else {
    uVar6 = 0;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ca0f8 FUN_1467ca0f8 body=265 status=ok
// SIG undefined FUN_1467ca0f8(void)

bool FUN_1467ca0f8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14588f6d2(*(undefined8 *)(param_1 + 0x20),&local_30,param_2,0);
  if (local_30 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = local_30;
    if (*(longlong *)(param_1 + 0x28) != local_30) {
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_1 + 0x30);
      *(longlong *)(param_1 + 0x28) = local_30;
      *(longlong **)(param_1 + 0x30) = local_28;
      local_38 = local_28;
      local_40 = local_30;
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
        local_40 = *(longlong *)(param_1 + 0x28);
        local_38 = *(longlong **)(param_1 + 0x30);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_14611b45e(uVar5,&local_40);
      FUN_1447f69b6(param_1 + 8);
      lVar6 = local_30;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 == lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ca202 FUN_1467ca202 body=223 status=ok
// SIG undefined FUN_1467ca202(void)

bool FUN_1467ca202(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14588f6d2(*(undefined8 *)(param_1 + 0x20),&local_30,param_2,0);
  if (local_30 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = local_30;
    if (*(longlong *)(param_1 + 0x38) != local_30) {
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)(param_1 + 0x40);
      *(longlong *)(param_1 + 0x38) = local_30;
      *(longlong **)(param_1 + 0x40) = local_28;
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
      FUN_1447f69b6(param_1 + 8);
      lVar5 = local_30;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4 == lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ca2e2 FUN_1467ca2e2 body=240 status=ok
// SIG undefined FUN_1467ca2e2(void)

void FUN_1467ca2e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  
  iVar1 = *(int *)(param_1 + 0x50);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar2 = *param_2;
    plVar3 = *(longlong **)(param_1 + 0x48);
    iVar14 = 0;
    bVar6 = *plVar3 == lVar2;
    iVar8 = 0;
    do {
      lVar12 = (longlong)iVar8;
      iVar7 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar7 = iVar1;
      }
      plVar11 = plVar3 + lVar12 * 3 + 3;
      iVar9 = iVar8;
      lVar13 = lVar12;
      do {
        lVar13 = lVar13 + 1;
        iVar10 = iVar7;
        if (lVar5 <= lVar13) break;
        lVar4 = *plVar11;
        iVar9 = iVar9 + 1;
        plVar11 = plVar11 + 3;
        iVar10 = iVar9;
      } while (bVar6 == (lVar4 == lVar2));
      iVar7 = iVar10 - iVar8;
      if (bVar6 == false) {
        if (iVar14 != iVar8) {
          memmove(plVar3 + (longlong)iVar14 * 3,plVar3 + lVar12 * 3,(longlong)iVar7 * 0x18);
        }
        iVar14 = iVar14 + iVar7;
      }
      else {
        FUN_145ae987e(plVar3 + lVar12 * 3,iVar7);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar10;
    } while (lVar13 < lVar5);
    *(int *)(param_1 + 0x50) = iVar14;
  }
  return;
}



// FUNCTION 1467ca3d2 FUN_1467ca3d2 body=478 status=ok
// SIG undefined FUN_1467ca3d2(void)

undefined8 *
FUN_1467ca3d2(longlong param_1,undefined8 *param_2,char param_3,char param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != '\0') {
    local_50 = *(undefined8 *)(param_1 + 0x28);
    plVar5 = *(longlong **)(param_1 + 0x30);
    local_48 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      FUN_1467d7b80(param_2,&local_50);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_1467d7b80(param_2);
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
    }
  }
  if (param_4 != '\0') {
    local_50 = *(undefined8 *)(param_1 + 0x38);
    plVar5 = *(longlong **)(param_1 + 0x40);
    local_48 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      FUN_1467d7b80(param_2,&local_50);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_1467d7b80(param_2);
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
    }
  }
  if ((param_5 != '\0') && (iVar3 = *(int *)(param_1 + 0x50), (longlong)iVar3 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    lVar6 = 0;
    do {
      local_50 = *(undefined8 *)(lVar4 + 8 + lVar6);
      plVar5 = *(longlong **)(lVar4 + 0x10 + lVar6);
      local_48 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        FUN_1467d7b80(param_2,&local_50);
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        FUN_1467d7b80(param_2,&local_50);
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
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467ca5b2 FUN_1467ca5b2 body=582 status=ok
// SIG undefined FUN_1467ca5b2(void)

undefined8 * FUN_1467ca5b2(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_68 = param_2 + 2;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_70);
  }
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_90 = local_70;
  local_88 = local_68;
  local_98 = param_2;
  if (iStack_5c < (int)local_68[3]) {
    do {
      lVar3 = *local_98;
      lVar6 = (longlong)iStack_7c;
      plVar4 = *(longlong **)(lVar3 + 0x10 + lVar6 * 0x28);
      plVar5 = *(longlong **)(lVar3 + 0x18 + lVar6 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_b8);
        local_a8 = local_b8;
        local_a0 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
          UNLOCK();
        }
        local_70 = lVar6 * 0x28 + lVar3;
        local_68 = &local_a8;
        FUN_1467d7c96(param_1,local_4c,&local_70);
        plVar4 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        plVar4 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (iStack_7c < (int)local_88[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467ca7fa FUN_1467ca7fa body=568 status=ok
// SIG undefined FUN_1467ca7fa(void)

ulonglong FUN_1467ca7fa(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    uVar14 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar9 = local_78._4_4_;
      local_78 = uVar6;
      do {
        lVar15 = *local_90;
        lVar11 = (longlong)iVar9;
        plVar3 = *(longlong **)(lVar15 + 0x10 + lVar11 * 0x28);
        plVar4 = *(longlong **)(lVar15 + 0x18 + lVar11 * 0x28);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        puVar2 = (undefined8 *)(lVar15 + lVar11 * 0x28);
        iVar9 = *(int *)(puVar2 + 1);
        puVar12 = &DAT_149dfb77a;
        if (iVar9 != 0) {
          puVar12 = (undefined2 *)*puVar2;
        }
        iVar13 = 0;
        iVar10 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar10 = iVar13;
        }
        uVar8 = FUN_144a49b4a(iVar10,puVar12);
        iVar9 = FUN_1467d7f98(param_2,uVar8,puVar2);
        lVar15 = 0;
        if (iVar9 != -1) {
          lVar15 = (longlong)iVar9 * 0x28 + *param_2;
        }
        if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x10) != 0)) {
          cVar7 = FUN_144a791f8(puVar2,&DAT_149e060b2,1,1);
          iVar13 = 0;
          if (cVar7 == '\0') {
            iVar9 = (**(code **)(*plVar3 + 0x38))(plVar3);
            iVar10 = (**(code **)(**(longlong **)(lVar15 + 0x10) + 0x38))();
            if (iVar9 == iVar10) {
              plVar5 = *(longlong **)(lVar15 + 0x10);
              iVar9 = (**(code **)(*plVar3 + 0x38))(plVar3);
              iVar10 = (**(code **)(*plVar5 + 0x38))(plVar5);
              if ((iVar9 == iVar10) &&
                 (cVar7 = (**(code **)(*plVar3 + 0x40))(plVar3,plVar5), cVar7 != '\0'))
              goto LAB_1467ca957;
            }
            iVar13 = 1;
          }
        }
LAB_1467ca957:
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        if (iVar13 != 0) goto LAB_1467ca9f0;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
LAB_1467ca9f0:
    uVar14 = 0;
    uVar6 = local_78;
  }
  local_78 = uVar6;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1467caa34 FUN_1467caa34 body=904 status=ok
// SIG undefined FUN_1467caa34(void)

ulonglong FUN_1467caa34(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined7 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_a0 = param_1;
  FUN_1467caeac(param_1,&local_78);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = param_2;
  FUN_1467caeac(param_2,&local_88);
  FUN_1467d853d(local_78,uStack_70 & 0xffffffff);
  FUN_1467d853d(local_88,uStack_80 & 0xffffffff);
  uVar8 = uStack_80 & 0xffffffff;
  if ((longlong)(int)uStack_70 < 1) {
    uVar11 = CONCAT71((int7)((ulonglong)&local_78 >> 8),(int)uStack_70 < (int)uStack_80);
  }
  else {
    uVar11 = 0;
    uVar19 = 0;
    if (0 < (int)uStack_80) {
      uVar19 = uStack_80 & 0xffffffff;
    }
    do {
      if (uVar11 == uVar19) {
        uVar11 = 0;
        goto LAB_1467cacd4;
      }
      lVar15 = uVar11 * 0x10;
      iVar5 = *(int *)(local_78 + 8 + lVar15);
      iVar6 = *(int *)(local_88 + 8 + lVar15);
      if (iVar5 == iVar6) {
        if (1 < iVar5) {
          puVar9 = *(undefined2 **)(local_88 + lVar15);
          puVar16 = *(undefined2 **)(local_78 + lVar15);
          lVar15 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)puVar16 + lVar15);
            uVar2 = *(ushort *)((longlong)puVar9 + lVar15);
            if (uVar1 != uVar2) break;
            if (uVar1 == 0) goto LAB_1467cab61;
LAB_1467cab2a:
            lVar15 = lVar15 + 2;
          }
          if ((uVar2 | uVar1) < 0x80) {
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_1467cab2a;
            iVar18 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
            ;
          }
          else {
            iVar18 = (uint)uVar1 - (uint)uVar2;
          }
          if (iVar18 != 0) goto LAB_1467cad46;
        }
      }
      else if (iVar6 + iVar5 != 1) {
        puVar9 = *(undefined2 **)(local_88 + lVar15);
        puVar16 = *(undefined2 **)(local_78 + lVar15);
LAB_1467cad46:
        if (iVar6 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        if (iVar5 == 0) {
          puVar16 = &DAT_149dfb77a;
        }
        lVar15 = 0;
        goto LAB_1467cad5d;
      }
LAB_1467cab61:
      uVar11 = uVar11 + 1;
    } while (uVar11 != (longlong)(int)uStack_70);
    uVar11 = CONCAT71((int7)(uVar11 >> 8),(int)uStack_70 < (int)uStack_80);
    if (0 < (int)uStack_70 && (int)uStack_70 >= (int)uStack_80) {
      lVar15 = 0;
      lVar21 = 0;
      do {
        iVar5 = *(int *)(local_78 + 8 + lVar15);
        puVar9 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar9 = *(undefined2 **)(local_78 + lVar15);
        }
        lVar12 = local_78 + lVar15;
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        uVar4 = FUN_144a49b4a(iVar6,puVar9);
        plVar20 = local_a0;
        iVar5 = FUN_1467d7f98(local_a0,uVar4,lVar12);
        if (iVar5 == -1) {
          lVar12 = 0;
        }
        else {
          lVar12 = (longlong)iVar5 * 0x28 + *plVar20;
        }
        plVar20 = (longlong *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          plVar20 = (longlong *)0x0;
        }
        iVar5 = *(int *)(local_78 + 8 + lVar15);
        puVar9 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar9 = *(undefined2 **)(local_78 + lVar15);
        }
        lVar12 = local_78 + lVar15;
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        uVar4 = FUN_144a49b4a(iVar6,puVar9);
        plVar14 = local_98;
        iVar5 = FUN_1467d7f98(local_98,uVar4,lVar12);
        lVar7 = 0;
        if (iVar5 != -1) {
          lVar7 = (longlong)iVar5 * 0x28 + *plVar14;
        }
        plVar14 = (longlong *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          plVar14 = (longlong *)0x0;
        }
        if (plVar20 != (longlong *)0x0 || plVar14 != (longlong *)0x0) {
          uVar13 = (undefined7)((ulonglong)lVar12 >> 8);
          uVar11 = CONCAT71(uVar13,plVar14 == (longlong *)0x0);
          if ((plVar20 != (longlong *)0x0) == (plVar14 == (longlong *)0x0)) goto LAB_1467cacc9;
          lVar12 = *plVar14;
          if (*plVar20 != 0 || lVar12 != 0) {
            uVar11 = CONCAT71(uVar13,lVar12 != 0);
            if ((*plVar20 != 0) != (lVar12 != 0)) goto LAB_1467cacc9;
            cVar3 = FUN_1467cb1ba();
            if (cVar3 != '\0') {
              uVar11 = CONCAT71(uVar13,1);
              goto LAB_1467cacc9;
            }
            plVar20 = (longlong *)*plVar20;
            plVar14 = (longlong *)*plVar14;
            iVar5 = (**(code **)(*plVar20 + 0x38))(plVar20);
            iVar6 = (**(code **)(*plVar14 + 0x38))(plVar14);
            if ((iVar5 != iVar6) ||
               (cVar3 = (**(code **)(*plVar20 + 0x40))(plVar20,plVar14), cVar3 == '\0')) break;
          }
        }
        lVar21 = lVar21 + 1;
        lVar15 = lVar15 + 0x10;
      } while (lVar21 < (int)uStack_70);
      uVar11 = 0;
LAB_1467cacc9:
      uVar8 = uStack_80 & 0xffffffff;
    }
  }
LAB_1467cacd4:
  FUN_1447a1747(local_88,uVar8);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
LAB_1467cad5d:
  uVar1 = *(ushort *)((longlong)puVar16 + lVar15);
  uVar10 = (uint)uVar1;
  uVar2 = *(ushort *)((longlong)puVar9 + lVar15);
  uVar17 = (uint)uVar2;
  if (uVar1 != uVar2) {
    if ((uVar2 | uVar1) < 0x80) {
      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1467cad71;
    }
    uVar10 = uVar10 - uVar17;
    goto LAB_1467cad9b;
  }
  if (uVar1 == 0) goto LAB_1467cad99;
LAB_1467cad71:
  lVar15 = lVar15 + 2;
  goto LAB_1467cad5d;
LAB_1467cad99:
  uVar10 = 0;
LAB_1467cad9b:
  uVar11 = (ulonglong)(uVar10 >> 0x1f);
  goto LAB_1467cacd4;
}



// FUNCTION 1467cadbe FUN_1467cadbe body=143 status=ok
// SIG undefined FUN_1467cadbe(void)

void FUN_1467cadbe(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar1 = (undefined2 *)*param_2;
  }
  (**(code **)(*param_1 + 0x50))(param_1,&local_30);
  puVar2 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar2 = local_30;
  }
  local_38 = puVar1;
  FUN_140033559(".\\Runtime/Core/Private/Internationalization/InternationalizationMetadata.cpp",0x19
                ,L"LocMetadata Value of type \'%s\' used as a \'%s\'.",puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cae4e FUN_1467cae4e body=93 status=ok
// SIG undefined FUN_1467cae4e(void)

undefined8 * FUN_1467cae4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_149e17d70;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1467d6624(param_1 + 1,iVar1);
    FUN_1467d667c(param_1[1],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1467caeac FUN_1467caeac body=780 status=ok
// SIG undefined FUN_1467caeac(void)

void FUN_1467caeac(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_140e83416(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14482b9e8();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1408be2c4(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar2 = *local_e0;
      lVar4 = (longlong)iStack_c4;
      iVar6 = *(int *)(lVar2 + 8 + lVar4 * 0x28);
      puVar7 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4 * 0x28);
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar7);
      iVar6 = FUN_1456cf568(&local_98,uVar3,lVar2 + lVar4 * 0x28);
      if (iVar6 == -1) {
        puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x28 + *local_e0);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar6 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(lVar2 + lVar4) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar2 + 8 + lVar4) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar6,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
        }
        FUN_14482b35e(&local_98,&local_b8,(longlong)iStack_c4 * 0x28 + *local_e0,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467cb1ba FUN_1467cb1ba body=87 status=ok
// SIG undefined FUN_1467cb1ba(void)

bool FUN_1467cb1ba(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x38))();
  iVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar2 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001467cb1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
    return (bool)uVar1;
  }
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  iVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  return iVar2 < iVar3;
}



// FUNCTION 1467cb212 FUN_1467cb212 body=661 status=ok
// SIG undefined FUN_1467cb212(void)

undefined8 FUN_1467cb212(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0 [2];
  longlong local_b0;
  int local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  plVar1 = param_1 + 2;
  local_68 = &DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_c8 = param_2;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = (int)param_1[5];
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = param_1;
  if ((iStack_54 == iVar11) && (uStack_60 == plVar1)) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    do {
      lVar9 = *local_a0;
      lVar8 = (longlong)iStack_84;
      local_68 = (undefined1 *)0x0;
      uVar3 = *(uint *)(lVar9 + 8 + lVar8 * 0x28);
      _Src = *(void **)(lVar9 + lVar8 * 0x28);
      uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        uStack_60 = (longlong *)(ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_68,uVar3,0);
        memcpy(local_68,_Src,(longlong)(int)uVar3 * 2);
      }
      lVar9 = lVar8 * 0x28 + lVar9;
      plVar4 = *(longlong **)(lVar9 + 0x10);
      plVar5 = *(longlong **)(lVar9 + 0x18);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar4 + 8))(plVar4,local_c0);
      puVar10 = (undefined2 *)&DAT_149e06196;
      if ((int)uStack_70 < 2) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140ba7826(&local_b0,puVar10,local_c0);
      iVar6 = local_a8 + -1;
      if (local_a8 == 0) {
        iVar6 = 0;
      }
      FUN_1400020e8(&local_78,local_b0,iVar6);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0[0] != 0) {
        FUN_1400020a8();
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != param_1 ||
             ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar1 || iStack_84 != iVar11));
    puVar10 = &DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      puVar10 = local_78;
    }
  }
  uVar7 = local_c8;
  FUN_140002266(local_c8,L"{%s}",puVar10);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cb4a8 FUN_1467cb4a8 body=595 status=ok
// SIG undefined FUN_1467cb4a8(void)

void FUN_1467cb4a8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  uint local_84;
  longlong *local_80;
  undefined2 **local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  local_80 = param_1;
  FUN_144aa02de(*param_1);
  lVar8 = FUN_144aff0ec(&local_80);
  uVar10 = local_84;
  bVar3 = *(byte *)(lVar8 + 0x28);
  if (((bVar3 & 1) != 0) &&
     ((uint)((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) < local_84)) {
    if ((int)local_84 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)local_84);
    }
    FUN_1467d8c54(param_2,local_84);
    iVar6 = 1;
    if (3 < uVar10) {
      uVar10 = (uVar10 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if (((int)param_2[9] == 0) || ((int)param_2[9] < iVar6)) {
      *(int *)(param_2 + 9) = iVar6;
      FUN_1467d80d6(param_2);
    }
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_1467caeac(param_2);
  if (0 < (int)local_84) {
    lVar11 = 8;
    lVar8 = 0;
    do {
      local_a8 = (undefined2 *)0x0;
      uStack_a0 = 0;
      if ((bVar3 & 1) == 0) {
        iVar6 = *(int *)(local_98 + lVar11) + -1;
        if (*(int *)(local_98 + lVar11) == 0) {
          iVar6 = 0;
        }
        FUN_1402980a2(&local_a8,*(undefined8 *)(local_98 + -8 + lVar11),iVar6);
        FUN_14021219d(*(undefined8 *)(*param_1 + 8),&local_a8);
        iVar6 = (int)uStack_a0 + -1;
        puVar4 = local_a8;
        if ((int)uStack_a0 == 0) {
          iVar6 = 0;
          puVar4 = &DAT_149dfb77a;
        }
        uVar7 = FUN_144a49b4a(iVar6,puVar4);
        iVar6 = FUN_1467d7f98(param_2,uVar7,&local_a8);
        lVar9 = 0;
        if (iVar6 != -1) {
          lVar9 = (longlong)iVar6 * 0x28 + *param_2;
        }
        FUN_14275f9ab(param_1,lVar9 + 0x10);
      }
      else {
        FUN_14021219d(*(undefined8 *)(*param_1 + 8),&local_a8);
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        FUN_14275f9ab(param_1,&local_b8);
        local_78 = &local_a8;
        local_70 = &local_b8;
        FUN_1467d82b4(param_2,local_64,&local_78);
        plVar5 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar8 < (int)local_84);
  }
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cb7dc FUN_1467cb7dc body=180 status=ok
// SIG undefined FUN_1467cb7dc(void)

undefined8 * FUN_1467cb7dc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = &PTR_FUN_149e17cb0;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 1,iVar1,0);
    memcpy((void *)puVar2[1],_Src,(longlong)iVar1 * 2);
  }
  *param_2 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149e18ff0;
  puVar3[2] = puVar2;
  param_2[1] = puVar3;
  return param_2;
}



// FUNCTION 1467cb890 FUN_1467cb890 body=163 status=ok
// SIG undefined FUN_1467cb890(void)

void FUN_1467cb890(longlong param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x10);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 8);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cb94c FUN_1467cb94c body=108 status=ok
// SIG undefined FUN_1467cb94c(void)

undefined8 * FUN_1467cb94c(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_149e17d10;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  *param_2 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149e19010;
  puVar3[2] = puVar2;
  param_2[1] = puVar3;
  return param_2;
}



// FUNCTION 1467cb9b8 FUN_1467cb9b8 body=422 status=ok
// SIG undefined FUN_1467cb9b8(void)

ulonglong FUN_1467cb9b8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != *(int *)(param_2 + 0x10)) {
    uVar7 = 0;
    goto LAB_1467cb9dd;
  }
  local_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = iVar5;
  if (iVar5 == 0) {
    local_3c = 0;
    local_50 = 0;
LAB_1467cba2f:
    local_58 = 0;
    local_4c = 0;
  }
  else {
    FUN_1467d6624(&local_48,iVar5);
    FUN_1467d667c(local_48,uVar1,iVar5);
    iVar5 = *(int *)(param_2 + 0x10);
    local_58 = 0;
    unaff_RSI = *(undefined8 *)(param_2 + 8);
    local_50 = iVar5;
    if (iVar5 == 0) goto LAB_1467cba2f;
    FUN_1467d6624(&local_58,iVar5);
    FUN_1467d667c(local_58,unaff_RSI,iVar5);
  }
  FUN_1467d8def(local_48,local_40);
  FUN_1467d8def(local_58,local_50);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (0 < local_40) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      plVar2 = *(longlong **)(local_48 + lVar8);
      plVar3 = *(longlong **)(local_58 + lVar8);
      iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2);
      iVar6 = (**(code **)(*plVar3 + 0x38))(plVar3);
      if ((iVar5 != iVar6) || (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,plVar3), cVar4 == '\0'))
      {
        uVar7 = 0;
        break;
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar9 < local_40);
  }
  FUN_1467d65da(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1467d65da(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1467cb9dd:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1467cbb60 FUN_1467cbb60 body=481 status=ok
// SIG undefined FUN_1467cbb60(void)

ulonglong FUN_1467cbb60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = iVar7;
  if (iVar7 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1467d6624(&local_48,iVar7);
    FUN_1467d667c(local_48,uVar1,iVar7);
  }
  local_58 = 0;
  iVar7 = *(int *)(param_2 + 0x10);
  uVar10 = *(ulonglong *)(param_2 + 8);
  local_50 = iVar7;
  if (iVar7 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1467d6624(&local_58,iVar7);
    FUN_1467d667c(local_58,uVar10,iVar7);
  }
  FUN_1467d8def(local_48,local_40);
  FUN_1467d8def(local_58,local_50);
  if (local_40 < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (local_50 < 1) {
      uVar10 = 0;
    }
    else {
      lVar11 = 0;
      lVar12 = 1;
      do {
        plVar2 = *(longlong **)(local_48 + lVar11);
        plVar3 = *(longlong **)(local_58 + lVar11);
        iVar7 = (**(code **)(*plVar2 + 0x38))(plVar2);
        iVar8 = (**(code **)(*plVar3 + 0x38))(plVar3);
        if ((iVar7 != iVar8) ||
           (cVar6 = (**(code **)(*plVar2 + 0x40))(plVar2,plVar3), cVar6 == '\0')) {
          uVar9 = FUN_1467cb1ba(*(undefined8 *)(local_48 + lVar11),
                                *(undefined8 *)(local_58 + lVar11));
          uVar10 = (ulonglong)uVar9;
          bVar4 = true;
          break;
        }
        uVar10 = 0;
        bVar4 = lVar12 < local_40;
        if (local_40 <= lVar12) break;
        lVar11 = lVar11 + 0x10;
        bVar5 = lVar12 < local_50;
        lVar12 = lVar12 + 1;
      } while (bVar5);
    }
  }
  iVar8 = local_40;
  iVar7 = local_50;
  FUN_1467d65da(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1467d65da(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uVar10 = uVar10 & 0xff;
  if (!bVar4) {
    uVar10 = (ulonglong)(iVar8 < iVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffffffffff01;
}



// FUNCTION 1467cbd42 FUN_1467cbd42 body=367 status=ok
// SIG undefined FUN_1467cbd42(void)

undefined8 * FUN_1467cbd42(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_2;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar10 = 0;
    iVar9 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar10);
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_68);
      uVar5 = uStack_50;
      plVar2 = local_60;
      uVar7 = local_68;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      lVar11 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_1467d9712(&local_58,uVar5 & 0xffffffff);
      }
      plVar4 = local_60;
      *(undefined8 *)(local_58 + lVar11 * 0x10) = uVar7;
      *(longlong **)(local_58 + 8 + lVar11 * 0x10) = plVar2;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while (iVar9 < *(int *)(param_1 + 0x10));
  }
  uVar7 = FUN_14001cc68(0x18,0x10);
  FUN_1467cae4e(uVar7,&local_58);
  puVar3 = local_70;
  *local_70 = uVar7;
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_149e19030;
  puVar8[2] = uVar7;
  puVar3[1] = puVar8;
  FUN_1467d65da(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 1467cbeb2 FUN_1467cbeb2 body=307 status=ok
// SIG undefined FUN_1467cbeb2(void)

undefined8 FUN_1467cbeb2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    local_80 = param_2;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      (**(code **)(*plVar3 + 8))(plVar3,local_78);
      puVar5 = (undefined2 *)&DAT_149e06196;
      if ((int)uStack_50 < 2) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_140ba7826(&local_68,puVar5,local_78);
      iVar4 = local_60 + -1;
      if (local_60 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar4);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
    param_2 = local_80;
    puVar5 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar5 = local_58;
    }
  }
  FUN_140002266(param_2,L"[%s]",puVar5);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467cbfe6 FUN_1467cbfe6 body=151 status=ok
// SIG undefined FUN_1467cbfe6(void)

undefined8 * FUN_1467cbfe6(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149e17d70;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1449b19ea(*param_2,&local_2c);
  FUN_1467cc07e(param_1 + 1,local_2c);
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    lVar1 = param_1[1];
    lVar2 = (longlong)*(int *)(param_1 + 2) << 4;
    do {
      FUN_14275f9ab(param_2,lVar1);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cc07e FUN_1467cc07e body=130 status=ok
// SIG undefined FUN_1467cc07e(void)

void FUN_1467cc07e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1467d9712(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1467d9798(param_1,param_2,iVar1 - param_2);
    FUN_1467d97f2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467cc102 FUN_1467cc102 body=114 status=ok
// SIG undefined FUN_1467cc102(void)

void FUN_1467cc102(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *(undefined4 *)(param_1 + 0x10);
  FUN_1449b19ea(*param_2);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = (longlong)*(int *)(param_1 + 0x10) << 4;
    do {
      FUN_14275f9ab(param_2,lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cc1c4 FUN_1467cc1c4 body=284 status=ok
// SIG undefined FUN_1467cc1c4(void)

undefined8 * FUN_1467cc1c4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar3 = FUN_14001cc68(0x50,0x10);
  FUN_1467ca5b2(lVar3,*(undefined8 *)(param_1 + 8));
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e18fd0;
  plVar4[2] = lVar3;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  if (plVar4 == (longlong *)0x0) {
    *puVar5 = &PTR_FUN_149e17dd0;
    puVar5[1] = lVar3;
    puVar5[2] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_FUN_149e17dd0;
    puVar5[1] = lVar3;
    puVar5[2] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  *param_2 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_149e19050;
  puVar6[2] = puVar5;
  param_2[1] = puVar6;
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
  return param_2;
}



// FUNCTION 1467cc2e0 FUN_1467cc2e0 body=26 status=ok
// SIG undefined FUN_1467cc2e0(void)

undefined8 FUN_1467cc2e0(longlong param_1,undefined8 param_2)

{
  FUN_1467cb212(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 1467cc2fa FUN_1467cc2fa body=150 status=ok
// SIG undefined FUN_1467cc2fa(void)

undefined8 * FUN_1467cc2fa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e17dd0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  param_1[1] = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149e18fd0;
  puVar2[2] = puVar1;
  param_1[2] = puVar2;
  FUN_1467cb4a8(param_2,puVar1);
  return param_1;
}



// FUNCTION 1467cc390 FUN_1467cc390 body=335 status=ok
// SIG undefined FUN_1467cc390(void)

undefined8 FUN_1467cc390(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x30) < 2) {
    if (param_2 != 0) {
      local_38 = L"ValidationError_NoKey";
      local_30 = 0x15;
      FUN_1446e940c(local_4c,&local_38);
      local_38 = L"PolyglotTextData";
      local_30 = 0x10;
      FUN_1446e940c(local_50,&local_38);
      local_38 = L"Polyglot data has no key set";
      local_30 = 0x1c;
LAB_1467cc41c:
      FUN_140208c1e(local_48,local_50,local_4c,&local_38);
      FUN_140008f88(param_2,local_48);
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
    }
  }
  else {
    uVar1 = CONCAT71((int7)(local_28 >> 8),1);
    if (1 < *(int *)(param_1 + 0x40)) goto LAB_1467cc44f;
    if (param_2 != 0) {
      local_38 = L"ValidationError_NoNativeString";
      local_30 = 0x1e;
      FUN_1446e940c(local_4c,&local_38);
      local_38 = L"PolyglotTextData";
      local_30 = 0x10;
      FUN_1446e940c(local_50,&local_38);
      local_38 = L"Polyglot data has no native string set";
      local_30 = 0x26;
      goto LAB_1467cc41c;
    }
  }
  uVar1 = 0;
LAB_1467cc44f:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cc4e0 FUN_1467cc4e0 body=84 status=ok
// SIG undefined FUN_1467cc4e0(void)

void FUN_1467cc4e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140e82300();
  plVar2 = DAT_14c844840;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != DAT_14c844840) {
    *(longlong **)(param_1 + 0xa0) = DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = DAT_14c844848;
  return;
}



// FUNCTION 1467cc534 FUN_1467cc534 body=3 status=ok
// SIG undefined FUN_1467cc534(void)

undefined1 FUN_1467cc534(undefined1 *param_1)

{
  return *param_1;
}



// FUNCTION 1467cc538 FUN_1467cc538 body=104 status=ok
// SIG undefined FUN_1467cc538(void)

undefined8 * FUN_1467cc538(undefined1 *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 2) {
    FUN_145df9c92(param_2,*param_1);
    if (*(int *)(param_2 + 1) < 2) {
      FUN_14020fad6(param_2,&DAT_149e19e7a);
    }
  }
  else {
    *param_2 = 0;
    _Src = *(void **)(param_1 + 8);
    *(uint *)(param_2 + 1) = uVar1;
    FUN_1446dd670(param_2,(ulonglong)uVar1,0);
    memcpy((void *)*param_2,_Src,(ulonglong)uVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1467cc5a0 FUN_1467cc5a0 body=376 status=ok
// SIG undefined FUN_1467cc5a0(void)

void FUN_1467cc5a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
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
  FUN_1408be27e(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      puVar5 = (undefined8 *)((longlong)iStack_64 * 0x28 + *local_80);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar4 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      *(undefined8 *)(lVar3 + lVar4) = 0;
      iVar2 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(lVar3 + 8 + lVar4) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467cc71a FUN_1467cc71a body=5 status=ok
// SIG undefined FUN_1467cc71a(void)

longlong FUN_1467cc71a(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 1467cc720 FUN_1467cc720 body=5 status=ok
// SIG undefined FUN_1467cc720(void)

longlong FUN_1467cc720(longlong param_1)

{
  return param_1 + 0x28;
}



// FUNCTION 1467cc726 FUN_1467cc726 body=5 status=ok
// SIG undefined FUN_1467cc726(void)

longlong FUN_1467cc726(longlong param_1)

{
  return param_1 + 0x38;
}



// FUNCTION 1467cc72c FUN_1467cc72c body=130 status=ok
// SIG undefined FUN_1467cc72c(void)

bool FUN_1467cc72c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_1457511aa((longlong *)(param_1 + 0x48),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x48);
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    FUN_144a787a6(param_3,lVar5);
  }
  return lVar5 != 0;
}



// FUNCTION 1467cc7ae FUN_1467cc7ae body=7 status=ok
// SIG undefined FUN_1467cc7ae(void)

undefined1 FUN_1467cc7ae(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



// FUNCTION 1467cc7b6 FUN_1467cc7b6 body=102 status=ok
// SIG undefined FUN_1467cc7b6(void)

longlong * FUN_1467cc7b6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x50))();
  FUN_1447a1fc0(uVar2);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))();
  if (*(int *)(lVar3 + 8) < 2) {
    FUN_1467cc81c(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xa8);
  return param_2;
}



// FUNCTION 1467cc81c FUN_1467cc81c body=240 status=ok
// SIG undefined FUN_1467cc81c(void)

void FUN_1467cc81c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_1467cc390(param_1,0);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  uVar2 = FUN_140008f10();
  FUN_1467e7c06(uVar2,param_1,1);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_40 = *(int *)(param_1 + 0x30) + -1;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_40 = 0;
  }
  FUN_1446e940c(local_4c,&local_48);
  local_48 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) == 0) {
    local_40 = 0;
  }
  FUN_1446e940c(local_50,&local_48);
  cVar1 = FUN_140008c02(local_50,local_4c,param_1 + 0xa0,param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1467cc4e0(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cc922 FUN_1467cc922 body=304 status=ok
// SIG undefined FUN_1467cc922(void)

undefined8 FUN_1467cc922(longlong param_1,byte param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      uVar4 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0xb0;
        if (*(byte *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0xb0) == param_2) {
          if (((longlong *)(lVar2 + 8) == (longlong *)0x0 || lVar2 == 0) ||
             (*(int *)(lVar2 + 0x10) <= *(int *)(lVar2 + 0x3c))) goto LAB_1467cc95d;
          local_48 = lVar2 + 0x18;
          local_50 = 0x100000000;
          local_40 = 0xffffffff;
          local_38 = 0;
          if (*(int *)(lVar2 + 0x30) == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1449c0562(&local_50);
            lVar3 = (longlong)local_40._4_4_;
          }
          FUN_144a787a6(param_3,lVar3 * 0x20 + *(longlong *)(lVar2 + 8));
          uVar4 = 1;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0xa8);
      } while (iVar1 != -1);
      goto LAB_1467cc95f;
    }
  }
LAB_1467cc95d:
  uVar4 = 0;
LAB_1467cc95f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1467cca54 FUN_1467cca54 body=676 status=ok
// SIG undefined FUN_1467cca54(void)

void FUN_1467cca54(longlong *param_1,byte *param_2,byte param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  int *local_d8;
  byte *local_c8;
  undefined1 local_bc [4];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  longlong *local_98;
  undefined4 local_90;
  longlong local_88 [3];
  longlong local_70 [2];
  byte *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_60 = param_2;
  iVar3 = (**(code **)(*param_1 + 8))();
  iVar1 = param_4[2];
  FUN_1467cc538(param_2,local_70);
  if ((param_3 & 1) != 0) {
    cVar2 = FUN_1412ac69e(param_4,local_70);
    if (cVar2 == '\0') {
      local_88[0] = 0;
      local_88[1] = 0;
      local_90 = 1;
      local_98 = local_70;
      cVar2 = FUN_142760288(&local_60,&local_98,local_88,0);
      if (cVar2 != '\0') {
        local_9c = -1;
        local_c8 = param_2 + 0x38;
        local_58 = *(undefined8 *)(param_2 + 0x28);
        local_50 = *(int *)(param_2 + 0x30) + -1;
        if (*(int *)(param_2 + 0x30) == 0) {
          local_50 = 0;
        }
        FUN_1446e940c(&local_a0,&local_58);
        local_58 = *(undefined8 *)(param_2 + 0x18);
        local_50 = *(int *)(param_2 + 0x20) + -1;
        if (*(int *)(param_2 + 0x20) == 0) {
          local_50 = 0;
        }
        FUN_1446e940c(local_a4,&local_58);
        local_d8 = &local_9c;
        local_e8 = local_88;
        local_e0 = iVar1 - iVar3;
        FUN_1467e7fa6(param_5,local_a4,&local_a0,local_c8);
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((*param_2 < 3) && (((byte)(0x20824 >> ((*param_2 & 3) << 3)) & param_3) != 0)) {
    local_9c = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_b8 = *param_4;
    uStack_b4 = param_4[1];
    uStack_b0 = param_4[2];
    uStack_ac = param_4[3];
    cVar2 = FUN_142760288(&local_60,&local_b8,local_88);
    if (cVar2 != '\0') {
      local_a0 = -1;
      iVar3 = local_9c - iVar3;
      local_58 = *(undefined8 *)(param_2 + 0x28);
      local_50 = *(int *)(param_2 + 0x30) + -1;
      if (*(int *)(param_2 + 0x30) == 0) {
        local_50 = 0;
      }
      FUN_1446e940c(local_a4,&local_58);
      local_58 = *(undefined8 *)(param_2 + 0x18);
      local_50 = *(int *)(param_2 + 0x20) + -1;
      if (*(int *)(param_2 + 0x20) == 0) {
        local_50 = 0;
      }
      FUN_1446e940c(local_bc,&local_58);
      local_e8 = local_88;
      local_e0 = iVar3;
      local_d8 = &local_a0;
      FUN_1467e7fa6(param_6,local_bc,local_a4,param_2 + 0x38);
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cccfa FUN_1467cccfa body=437 status=ok
// SIG undefined FUN_1467cccfa(void)

void FUN_1467cccfa(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar3 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_68);
    iVar3 = *(int *)(param_1 + 0x80);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar3) || (local_60 != lVar2)) {
    do {
      do {
        local_a8 = *param_3;
        uStack_a4 = param_3[1];
        uStack_a0 = param_3[2];
        uStack_9c = param_3[3];
        local_c8 = local_b0;
        local_c0 = param_5;
        FUN_1467cca54(param_1,*local_90 + (longlong)iStack_74 * 0xc0 + 8,param_2);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar3);
    } while ((local_80 != lVar2) || (local_90 != plVar1));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467cceb0 FUN_1467cceb0 body=332 status=ok
// SIG undefined FUN_1467cceb0(void)

undefined8
FUN_1467cceb0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  uVar2 = FUN_144afd4c3((longlong)&local_48 + 4);
  uVar3 = FUN_144afd4c3(&local_48);
  uVar4 = FUN_144a78877(uVar3,uVar2);
  uVar7 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x58);
      do {
        lVar8 = (longlong)iVar6 * 0xc0;
        lVar1 = lVar5 + lVar8;
        if ((*(int *)(lVar5 + lVar8) == (int)param_4) &&
           (*(int *)(lVar5 + 4 + lVar8) == (int)((ulonglong)param_4 >> 0x20))) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            local_58 = *param_3;
            uStack_54 = param_3[1];
            uStack_50 = param_3[2];
            uStack_4c = param_3[3];
            local_60 = param_6;
            local_68 = param_5;
            FUN_1467cca54(param_1,lVar1 + 8,param_2);
            uVar7 = 0;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xb8);
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1467ccffe FUN_1467ccffe body=449 status=ok
// SIG undefined FUN_1467ccffe(void)

void FUN_1467ccffe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [44];
  int local_5c;
  int local_58;
  int local_54;
  wchar_t *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if (*(int *)(param_2 + 0x30) == 0) {
    local_50 = L"";
  }
  else {
    local_50 = *(wchar_t **)(param_2 + 0x28);
  }
  uVar2 = 0;
  if (local_50 != (wchar_t *)0x0) {
    sVar5 = wcslen(local_50);
    uVar2 = (int)sVar5;
  }
  local_48 = CONCAT44(local_48._4_4_,uVar2);
  FUN_1446e940c(&local_54);
  if (*(int *)(param_2 + 0x20) == 0) {
    local_50 = L"";
  }
  else {
    local_50 = *(wchar_t **)(param_2 + 0x18);
  }
  uVar2 = 0;
  if (local_50 != (wchar_t *)0x0) {
    sVar5 = wcslen(local_50);
    uVar2 = (int)sVar5;
  }
  local_48 = CONCAT44(local_48._4_4_,uVar2);
  FUN_1446e940c(&local_5c);
  local_58 = local_54;
  uVar2 = FUN_144afd4c3();
  uVar3 = FUN_144afd4c3(&local_5c);
  uVar4 = FUN_144a78877(uVar3,uVar2);
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar8 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x98);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x58);
      do {
        lVar7 = (longlong)iVar6 * 0xc0;
        lVar1 = lVar8 + lVar7;
        if ((*(int *)(lVar8 + lVar7) == local_5c) && (*(int *)(lVar8 + 4 + lVar7) == local_58)) {
          lVar8 = lVar1 + 8;
          if (lVar8 != 0 && lVar1 != 0) {
            FUN_1467cd1c0(param_1,lVar8);
            FUN_1467cd294(lVar8,param_2);
            goto LAB_1467cd11c;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xb8);
      } while (iVar6 != -1);
    }
  }
  local_50 = (wchar_t *)&local_5c;
  local_48 = param_2;
  FUN_1467d9bc6((longlong *)(param_1 + 0x58),&local_54);
  lVar8 = param_2;
LAB_1467cd11c:
  FUN_1467cd33c(param_1,lVar8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467cd1c0 FUN_1467cd1c0 body=211 status=ok
// SIG undefined FUN_1467cd1c0(void)

void FUN_1467cd1c0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = CONCAT71(local_38._1_7_,*param_2);
  lVar1 = FUN_1467da348(param_1 + 8,*param_2,&local_38);
  FUN_1427603dc(lVar1,param_2 + 8);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1467cc5a0(param_2 + 0x48,&local_38);
  FUN_140e836da(local_38,uStack_30 & 0xffffffff);
  if ((longlong)(int)uStack_30 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)(int)uStack_30 << 4;
    lVar4 = local_38;
    do {
      FUN_1427603dc(lVar1 + 0x50,lVar4);
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar2 = uStack_30 & 0xffffffff;
  }
  FUN_1447a1747(local_38,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cd294 FUN_1467cd294 body=168 status=ok
// SIG undefined FUN_1467cd294(void)

undefined1 * FUN_1467cd294(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_14058acb2(param_1 + 0x48,param_2 + 0x48);
  param_1[0x98] = param_2[0x98];
  plVar1 = *(longlong **)(param_2 + 0xa0);
  plVar2 = *(longlong **)(param_1 + 0xa0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xa0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 1467cd33c FUN_1467cd33c body=211 status=ok
// SIG undefined FUN_1467cd33c(void)

void FUN_1467cd33c(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = CONCAT71(local_38._1_7_,*param_2);
  lVar1 = FUN_1467da348(param_1 + 8,*param_2,&local_38);
  FUN_14276035c(lVar1,param_2 + 8);
  local_38 = 0;
  uStack_30 = 0;
  FUN_1467cc5a0(param_2 + 0x48,&local_38);
  FUN_140e836da(local_38,uStack_30 & 0xffffffff);
  if ((longlong)(int)uStack_30 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)(int)uStack_30 << 4;
    lVar4 = local_38;
    do {
      FUN_14276035c(lVar1 + 0x50,lVar4);
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar2 = uStack_30 & 0xffffffff;
  }
  FUN_1447a1747(local_38,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cd410 FUN_1467cd410 body=134 status=ok
// SIG undefined FUN_1467cd410(void)

undefined8 *
FUN_1467cd410(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 3) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[4] = param_4;
  plVar4 = (longlong *)param_2[1];
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
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1467cd496 FUN_1467cd496 body=27 status=ok
// SIG undefined FUN_1467cd496(void)

undefined8 FUN_1467cd496(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*param_1 == 0) || (lVar1 = param_1[1], lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 8));
  }
  return uVar2;
}



// FUNCTION 1467cd4b2 FUN_1467cd4b2 body=5 status=ok
// SIG undefined FUN_1467cd4b2(void)

longlong FUN_1467cd4b2(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 1467cd4b8 FUN_1467cd4b8 body=124 status=ok
// SIG undefined FUN_1467cd4b8(void)

undefined8 * FUN_1467cd4b8(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1467e1cfa();
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    uVar2 = FUN_140008f10();
    local_28 = param_1 + 0x10;
    local_1c = *(undefined4 *)(param_1 + 0x24);
    local_20 = *(undefined4 *)(param_1 + 0x20);
    FUN_14008e936(uVar2,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cd536 FUN_1467cd536 body=11 status=ok
// SIG undefined FUN_1467cd536(void)

undefined8 * FUN_1467cd536(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  return param_2;
}


