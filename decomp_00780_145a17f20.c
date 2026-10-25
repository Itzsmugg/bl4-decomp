// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a17f20 FUN_145a17f20 body=38 status=ok
// SIG undefined FUN_145a17f20(void)

void FUN_145a17f20(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145a17f46(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145a17f46 FUN_145a17f46 body=61 status=ok
// SIG undefined FUN_145a17f46(void)

void FUN_145a17f46(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145a17f84 FUN_145a17f84 body=53 status=ok
// SIG undefined FUN_145a17f84(void)

void FUN_145a17f84(longlong *param_1)

{
  FUN_145a17fba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a17fba FUN_145a17fba body=90 status=ok
// SIG undefined FUN_145a17fba(void)

void FUN_145a17fba(longlong param_1)

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



// FUNCTION 145a18014 FUN_145a18014 body=53 status=ok
// SIG undefined FUN_145a18014(void)

void FUN_145a18014(longlong *param_1)

{
  FUN_145a1804a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a1804a FUN_145a1804a body=320 status=ok
// SIG undefined FUN_145a1804a(void)

void FUN_145a1804a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1818c FUN_145a1818c body=38 status=ok
// SIG undefined FUN_145a1818c(void)

undefined8 FUN_145a1818c(undefined8 param_1,int param_2)

{
  FUN_145a181b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a181b2 FUN_145a181b2 body=86 status=ok
// SIG undefined FUN_145a181b2(void)

void FUN_145a181b2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14b43b240;
  FUN_144725486();
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
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
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145a18208 FUN_145a18208 body=103 status=ok
// SIG undefined FUN_145a18208(void)

ulonglong FUN_145a18208(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145a18260:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a18260;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145a1827a FUN_145a1827a body=48 status=ok
// SIG undefined FUN_145a1827a(void)

void FUN_145a1827a(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x184) == *(int *)(param_1 + 0x38)) {
    FUN_145a182aa(param_1 + 0x38);
    FUN_1458b44fe(param_1);
    return;
  }
  return;
}



// FUNCTION 145a182aa FUN_145a182aa body=7 status=ok
// SIG undefined FUN_145a182aa(void)

void FUN_145a182aa(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 145a182b2 FUN_145a182b2 body=107 status=ok
// SIG undefined FUN_145a182b2(void)

void FUN_145a182b2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b419668;
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14b419c58;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a18311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145a1831e FUN_145a1831e body=132 status=ok
// SIG undefined FUN_145a1831e(void)

void FUN_145a1831e(longlong param_1,int param_2)

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



// FUNCTION 145a183a4 FUN_145a183a4 body=159 status=ok
// SIG undefined FUN_145a183a4(void)

void FUN_145a183a4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_1 + 200);
    iVar1 = *(int *)(param_1 + 0xd0);
    lVar3 = (longlong)iVar1;
    if (lVar3 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar2) == param_2) {
          return;
        }
        lVar2 = lVar2 + 8;
      } while (lVar3 * 8 - lVar2 != 0);
    }
    *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
      FUN_145a18444((longlong *)(param_1 + 200),iVar1);
      lVar4 = *(longlong *)(param_1 + 200);
    }
    *(longlong *)(lVar4 + lVar3 * 8) = param_2;
    if ((longlong)*(int *)(param_2 + 0x38) != 0) {
      lVar4 = (longlong)*(int *)(param_2 + 0x38) << 5;
      lVar3 = *(longlong *)(param_2 + 0x30) + 8;
      do {
        FUN_141453bf6(param_1,lVar3);
        lVar3 = lVar3 + 0x20;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 145a18444 FUN_145a18444 body=132 status=ok
// SIG undefined FUN_145a18444(void)

void FUN_145a18444(longlong param_1,int param_2)

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



// FUNCTION 145a184c8 FUN_145a184c8 body=189 status=ok
// SIG undefined FUN_145a184c8(void)

longlong FUN_145a184c8(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1459484dc();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 145a18586 FUN_145a18586 body=258 status=ok
// SIG undefined FUN_145a18586(void)

void FUN_145a18586(void)

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
              0x110) < DAT_14c9f67a8) {
    FUN_144b3d300(&DAT_14c9f67a8);
    if (DAT_14c9f67a8 == -1) {
      FUN_14145615c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenReflectionTracingParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x2e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6728,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d5872f);
      _Init_thread_footer(&DAT_14c9f67a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1868a FUN_145a1868a body=136 status=ok
// SIG undefined FUN_145a1868a(void)

code * FUN_145a1868a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWTraceRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f59e8;
}



// FUNCTION 145a18712 FUN_145a18712 body=138 status=ok
// SIG undefined FUN_145a18712(void)

code * FUN_145a18712(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWTraceHit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a1868a;
}



// FUNCTION 145a1879c FUN_145a1879c body=138 status=ok
// SIG undefined FUN_145a1879c(void)

code * FUN_145a1879c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionsStateFrameIndexMod8";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f6174;
}



// FUNCTION 145a18826 FUN_145a18826 body=217 status=ok
// SIG undefined FUN_145a18826(void)

undefined8 FUN_145a18826(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a395890;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a395820;
  local_38[3] = param_3;
  FUN_145a18900(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a18900 FUN_145a18900 body=216 status=ok
// SIG undefined FUN_145a18900(void)

undefined8 * FUN_145a18900(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a189ea FUN_145a189ea body=40 status=ok
// SIG undefined FUN_145a189ea(void)

undefined8 FUN_145a189ea(undefined8 param_1,int param_2)

{
  FUN_145a18a12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a18a12 FUN_145a18a12 body=70 status=ok
// SIG undefined FUN_145a18a12(void)

void FUN_145a18a12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4ce190;
  param_1[8] = &PTR_FUN_14a4ce470;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145a18a58(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a18a58 FUN_145a18a58 body=99 status=ok
// SIG undefined FUN_145a18a58(void)

void FUN_145a18a58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1409ca440(param_1 + 0x170);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) {
    FUN_140457ffc(lVar1 + 0x658,param_1);
    FUN_140457ffc(lVar1 + 0x670,param_1);
    FUN_140457ffc(lVar1 + 0x688,param_1);
  }
  FUN_145a18abc(param_1);
  return;
}



// FUNCTION 145a18abc FUN_145a18abc body=187 status=ok
// SIG undefined FUN_145a18abc(void)

void FUN_145a18abc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_145a18b78(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e8f2(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e882(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14094e8ba(param_1);
  return;
}



// FUNCTION 145a18b78 FUN_145a18b78 body=53 status=ok
// SIG undefined FUN_145a18b78(void)

void FUN_145a18b78(longlong *param_1)

{
  FUN_14592b31e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a18bae FUN_145a18bae body=226 status=ok
// SIG undefined FUN_145a18bae(void)

void FUN_145a18bae(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined *local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x318);
  if (lVar3 != 0) {
    local_40 = *(undefined8 *)(lVar3 + 0x1090);
    plVar4 = *(longlong **)(lVar3 + 0x1098);
    if (plVar4 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_38 = plVar4;
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
    local_30 = &DAT_149eda618;
    local_28 = &local_40;
    FUN_145a18c92(param_2,local_1c);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a18c92 FUN_145a18c92 body=341 status=ok
// SIG undefined FUN_145a18c92(void)

undefined4 * FUN_145a18c92(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412a5814(param_1,local_40);
  FUN_145a18de8(param_3,local_38);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_1412a5722(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1412a59f0(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a18de8 FUN_145a18de8 body=105 status=ok
// SIG undefined FUN_145a18de8(void)

ulonglong * FUN_145a18de8(undefined8 *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  puVar2 = (ulonglong *)param_1[1];
  uVar1 = *(uint *)*param_1;
  if ((ulonglong)uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar3 = (ulonglong)*(uint *)(&DAT_14c892b40 + (ulonglong)uVar1 * 4);
  }
  *param_2 = uVar3;
  param_2[1] = *puVar2;
  param_2[2] = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  return param_2;
}



// FUNCTION 145a18e52 FUN_145a18e52 body=132 status=ok
// SIG undefined FUN_145a18e52(void)

void FUN_145a18e52(longlong param_1,int param_2)

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



// FUNCTION 145a18ed6 FUN_145a18ed6 body=436 status=ok
// SIG undefined FUN_145a18ed6(void)

longlong * FUN_145a18ed6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ***pppuVar6;
  undefined4 uVar7;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  local_70 = 0;
  FUN_14575a19a(local_98,0);
  FUN_1448729ea(param_1 + 8,local_68,local_98);
  uVar7 = FUN_144a7b41a(local_68,0);
  plVar5 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b42a4b0;
  plVar1 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x2c) = 0;
  plVar5[7] = -1;
  *(undefined1 *)(plVar5 + 8) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x44) = 0xffffffff;
  plVar5[2] = (longlong)&PTR_FUN_14b42a4d0;
  *(undefined4 *)(plVar5 + 9) = uVar7;
  plVar5[10] = 0;
  local_a8 = plVar1;
  local_a0 = plVar5;
  FUN_145a1908c(&local_a8,plVar1);
  plVar4 = local_a0;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar6 = local_68;
    if (0x18 < local_50) {
      pppuVar6 = (undefined8 ***)local_68[0];
    }
    (*pcVar3)(pppuVar6);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_144a5ac3a(local_98);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1908c FUN_145a1908c body=162 status=ok
// SIG undefined FUN_145a1908c(void)

void FUN_145a1908c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145a190cb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145a190cb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145a190cb:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145a1912a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145a1913a FUN_145a1913a body=145 status=ok
// SIG undefined FUN_145a1913a(void)

undefined8 * FUN_145a1913a(undefined8 *param_1)

{
  FUN_145a192ca();
  *param_1 = &PTR_FUN_14b7d3700;
  param_1[0x761] = &PTR_FUN_14b7d3fe0;
  FUN_145a1920e(param_1 + 0x762);
  FUN_145a191cc(param_1 + 0x778);
  *(undefined1 *)(param_1 + 0x789) = 1;
  param_1[0x790] = 0;
  *(undefined4 *)(param_1 + 0x791) = 0;
  param_1[0x78a] = 0;
  param_1[0x78b] = 0;
  param_1[0x78c] = 0;
  param_1[0x78d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c94) = 0;
  param_1[0x794] = 0;
  *(undefined4 *)(param_1 + 0x795) = 0;
  return param_1;
}



// FUNCTION 145a191cc FUN_145a191cc body=65 status=ok
// SIG undefined FUN_145a191cc(void)

void FUN_145a191cc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 2) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = DAT_14c846508;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0x800000000;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  return;
}



// FUNCTION 145a1920e FUN_145a1920e body=188 status=ok
// SIG undefined FUN_145a1920e(void)

void FUN_145a1920e(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c846508;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 2;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x68) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = DAT_14c846508;
  *(undefined8 *)(param_1 + 0x90) = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0x80) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = 0x3f00000040800000;
  *(undefined8 *)(param_1 + 0xa0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0xa8) = 0x3ba3d70a;
  *(undefined2 *)(param_1 + 0xac) = 0;
  param_1[0xae] = 0;
  *(undefined8 *)(param_1 + 8) = 0x4034000000000000;
  *(undefined8 *)(param_1 + 0x10) = 0x4024000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x4024000000000000;
  return;
}



// FUNCTION 145a192ca FUN_145a192ca body=903 status=ok
// SIG undefined FUN_145a192ca(void)

undefined8 * FUN_145a192ca(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145a19730();
  *param_1 = &PTR_FUN_14b3b1160;
  param_1[0x5d2] = 0;
  param_1[0x5d3] = 0;
  param_1[0x5d4] = 0;
  *(undefined4 *)(param_1 + 0x5d5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2eac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2eb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ebc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2ec4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ecc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ed4) = 0;
  param_1[0x5db] = 2;
  *(undefined4 *)(param_1 + 0x5dc) = 0x41200000;
  param_1[0x5dd] = 0;
  *(undefined4 *)(param_1 + 0x5de) = 0;
  FUN_1400e6e60(param_1 + 0x5e0);
  param_1[0x726] = 0;
  param_1[0x727] = 0;
  param_1[0x728] = 0;
  param_1[0x729] = 0;
  param_1[0x72a] = 0;
  param_1[0x72b] = 0;
  *(undefined4 *)(param_1 + 0x72c) = 0x42b40000;
  param_1[0x72d] = 0;
  param_1[0x72e] = 0;
  param_1[0x72f] = 0;
  param_1[0x730] = 0;
  param_1[0x731] = 0;
  param_1[0x732] = 0;
  *(undefined4 *)(param_1 + 0x733) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x734) = 0;
  param_1[0x735] = 0;
  *(undefined4 *)(param_1 + 0x736) = 0x7201;
  param_1[0x737] = 0;
  param_1[0x738] = 0;
  param_1[0x739] = 0;
  param_1[0x73a] = 0;
  param_1[0x73b] = 0;
  param_1[0x73c] = 0;
  param_1[0x73d] = 0;
  *(undefined4 *)(param_1 + 0x73e) = 0x7201;
  param_1[0x73f] = 0;
  param_1[0x740] = 0;
  *(undefined4 *)(param_1 + 0x741) = 0x7202;
  param_1[0x742] = 0;
  *(undefined4 *)(param_1 + 0x743) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x3a1c) = 0;
  param_1[0x746] = 0;
  param_1[0x744] = 0;
  param_1[0x745] = 0;
  *(undefined4 *)(param_1 + 0x747) = 0x7201;
  param_1[0x74f] = 0;
  *(undefined4 *)(param_1 + 0x750) = 0;
  param_1[0x748] = 0;
  param_1[0x749] = 0;
  param_1[0x74a] = 0;
  param_1[0x74b] = 0;
  param_1[0x74c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3a8c) = 0;
  param_1[0x753] = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  param_1[0x755] = 0;
  param_1[0x756] = 0;
  param_1[0x757] = 0;
  param_1[0x758] = 0;
  param_1[0x759] = 0;
  param_1[0x75a] = 0;
  param_1[0x75b] = 0;
  param_1[0x75c] = 0;
  param_1[0x75d] = 0;
  param_1[0x75e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3af1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3af9) = 0;
  *(undefined1 *)(param_1 + 0x5d1) = 1;
  *(byte *)((longlong)param_1 + 0x2ef4) = *(byte *)((longlong)param_1 + 0x2ef4) & 0x80 | 0x10;
  uVar2 = FUN_145a19652();
  FUN_1400bbfc4(&local_60,uVar2);
  *(undefined4 *)(param_1 + 0x759) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x3acc) = uStack_5c;
  *(undefined4 *)(param_1 + 0x75a) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x3ad4) = uStack_54;
  if (param_1 + 0x759 == (undefined8 *)&local_60) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x75b] != 0) {
      FUN_1400020a8();
    }
    param_1[0x75b] = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 0x75c) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x3ae4) = local_44;
  }
  uVar2 = FUN_141167972();
  FUN_1400bbfc4(&local_60,uVar2);
  *(undefined4 *)(param_1 + 0x755) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x3aac) = uStack_5c;
  *(undefined4 *)(param_1 + 0x756) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x3ab4) = uStack_54;
  if (param_1 + 0x755 == (undefined8 *)&local_60) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x757] != 0) {
      FUN_1400020a8();
    }
    param_1[0x757] = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 0x758) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x3ac4) = local_44;
  }
  lVar3 = FUN_141433a8a();
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x5b3);
  *(uint *)(param_1 + 0x5b3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2d9c) < iVar1 + 1U) {
    FUN_145a19a3c(param_1 + 0x5b2,iVar1);
  }
  *(longlong *)(param_1[0x5b2] + (longlong)iVar1 * 8) = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a19652 FUN_145a19652 body=221 status=ok
// SIG undefined FUN_145a19652(void)

longlong FUN_145a19652(void)

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
  if (DAT_14cb55a90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14862949f;
    local_40 = &LAB_1464b45a0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xa50;
    FUN_14081cfa3(L"/Script/GbxGame",L"CameraModeInputs",&DAT_14cb55a90,&DAT_14862949e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55a90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a19730 FUN_145a19730 body=779 status=ok
// SIG undefined FUN_145a19730(void)

undefined8 * FUN_145a19730(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a7089b0;
  param_1[0x86] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  FUN_1400e6e60(param_1 + 0x88);
  param_1[0x1ce] = 0;
  param_1[0x1d0] = 0;
  FUN_1400e6e60(param_1 + 0x1d2);
  param_1[0x318] = 0;
  *(undefined4 *)((longlong)param_1 + 0x18d4) = 0;
  *(undefined1 *)(param_1 + 0x31b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x18dc) = 0x40000000;
  *(byte *)(param_1 + 0x31c) = *(byte *)(param_1 + 0x31c) & 0xfe;
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  param_1[799] = 2;
  *(undefined4 *)(param_1 + 800) = 0;
  FUN_1400e6e60(param_1 + 0x322);
  *(undefined4 *)(param_1 + 0x468) = 0;
  FUN_1400e6e60(param_1 + 0x46a);
  param_1[0x5d0] = 0;
  param_1[0x5b0] = 0;
  param_1[0x5b1] = 0;
  param_1[0x5b2] = 0;
  param_1[0x5b3] = 0;
  param_1[0x5bb] = 0;
  param_1[0x5bc] = 0;
  param_1[0x5c0] = 0;
  param_1[0x5c1] = 0;
  param_1[0x5c2] = 0;
  param_1[0x5c3] = 0;
  param_1[0x5c4] = 0;
  param_1[0x5c5] = 0;
  param_1[0x5c6] = 0;
  param_1[0x5c7] = 0;
  param_1[0x5c8] = 0;
  param_1[0x5c9] = 0;
  param_1[0x75] = 0x42a0000042b40000;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x3faaaa8f;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x44000000;
  *(byte *)(param_1 + 0x5ca) = *(byte *)(param_1 + 0x5ca) | 2;
  *(undefined4 *)((longlong)param_1 + 0x2e54) = 0;
  *(uint *)(param_1 + 0x5cb) = *(uint *)(param_1 + 0x5cb) & 0xfffffff8 | 3;
  FUN_1405bab3a(param_1,1);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  *(undefined4 *)(param_1 + 0x5b4) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0x2e5c) = 0xc2b3cccd;
  *(undefined4 *)(param_1 + 0x5cc) = 0x42b3cccd;
  *(undefined4 *)((longlong)param_1 + 0x2e64) = 0;
  *(undefined4 *)(param_1 + 0x5cd) = 0x43b3ffdf;
  *(undefined8 *)((longlong)param_1 + 0x2e6c) = 0x42b3cccdc2b3cccd;
  *(uint *)(param_1 + 0x5cb) = *(uint *)(param_1 + 0x5cb) & 0xfffffcff | 0x100;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  param_1[0x74] = (ulonglong)DAT_14c892e70;
  FUN_1403121a6(param_1,0);
  *(undefined4 *)((longlong)param_1 + 0x2e74) = 0;
  FUN_1446f470e(&local_48,L"TransformComponent0",1);
  uVar3 = FUN_144a799b0();
  local_50 = 0;
  local_58 = 1;
  lVar4 = FUN_14048696c(param_1,local_48,uVar3,uVar3);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar2 = DAT_14c950c29;
  param_1[0x73] = lVar4;
  if ((lVar4 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
    lVar4 = param_1[0x73];
  }
  param_1[0x39] = lVar4;
  lVar4 = FUN_141434440();
  if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x5b3);
  *(uint *)(param_1 + 0x5b3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2d9c) < iVar1 + 1U) {
    FUN_145a19a3c(param_1 + 0x5b2,iVar1);
  }
  *(longlong *)(param_1[0x5b2] + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a19a3c FUN_145a19a3c body=132 status=ok
// SIG undefined FUN_145a19a3c(void)

void FUN_145a19a3c(longlong param_1,int param_2)

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



// FUNCTION 145a19ad0 FUN_145a19ad0 body=36 status=ok
// SIG undefined FUN_145a19ad0(void)

undefined8 FUN_145a19ad0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145a19b02 FUN_145a19b02 body=36 status=ok
// SIG undefined FUN_145a19b02(void)

undefined8 FUN_145a19b02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145a19b32 FUN_145a19b32 body=39 status=ok
// SIG undefined FUN_145a19b32(void)

undefined8 * FUN_145a19b32(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5ddc30;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145a19b64 FUN_145a19b64 body=39 status=ok
// SIG undefined FUN_145a19b64(void)

undefined8 * FUN_145a19b64(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a628460;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145a19b96 FUN_145a19b96 body=39 status=ok
// SIG undefined FUN_145a19b96(void)

undefined8 * FUN_145a19b96(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6ffef0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 145a19bc8 FUN_145a19bc8 body=39 status=ok
// SIG undefined FUN_145a19bc8(void)

undefined8 * FUN_145a19bc8(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14a76de40;
  return param_1;
}



// FUNCTION 145a19bfa FUN_145a19bfa body=39 status=ok
// SIG undefined FUN_145a19bfa(void)

undefined8 * FUN_145a19bfa(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14acc1040;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 145a19c2c FUN_145a19c2c body=39 status=ok
// SIG undefined FUN_145a19c2c(void)

undefined8 * FUN_145a19c2c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad0f990;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145a19c5e FUN_145a19c5e body=39 status=ok
// SIG undefined FUN_145a19c5e(void)

undefined8 * FUN_145a19c5e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ad66490;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145a19c90 FUN_145a19c90 body=172 status=ok
// SIG undefined FUN_145a19c90(void)

undefined8 * FUN_145a19c90(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14596f8c0();
  *param_1 = &PTR_FUN_14ae51be0;
  param_1[5] = &PTR_FUN_14ae51f50;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38d) = 0;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  lVar1 = FUN_145a19d3c();
  *(undefined4 *)((longlong)param_1 + 0x39c) = *(undefined4 *)(lVar1 + 8);
  lVar1 = FUN_145a19d3c();
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x3e800000;
  *(undefined2 *)(param_1 + 0x77) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x78] = 0;
  return param_1;
}



// FUNCTION 145a19d3c FUN_145a19d3c body=117 status=ok
// SIG undefined FUN_145a19d3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145a19d3c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844830) {
    FUN_144b3d300(&DAT_14c844830);
    if (DAT_14c844830 == -1) {
      _DAT_14c844818 = 0;
      _DAT_14c84481c = 0;
      uRam000000014c844820 = 1;
      uRam000000014c844824 = 0x144;
      uRam000000014c844828 = 0;
      _DAT_14c84482c = 3;
      _Init_thread_footer(&DAT_14c844830);
    }
  }
  return &DAT_14c844818;
}



// FUNCTION 145a19dc0 FUN_145a19dc0 body=36 status=ok
// SIG undefined FUN_145a19dc0(void)

undefined8 FUN_145a19dc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145a19df2 FUN_145a19df2 body=40 status=ok
// SIG undefined FUN_145a19df2(void)

undefined8 FUN_145a19df2(undefined8 param_1,int param_2)

{
  FUN_145a19e1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a19e1a FUN_145a19e1a body=87 status=ok
// SIG undefined FUN_145a19e1a(void)

void FUN_145a19e1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18fbc0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_145a19e71(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a19e71 FUN_145a19e71 body=41 status=ok
// SIG undefined FUN_145a19e71(void)

void FUN_145a19e71(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145a19e9a(param_1);
    param_1 = param_1 + 0x100;
  }
  return;
}



// FUNCTION 145a19e9a FUN_145a19e9a body=218 status=ok
// SIG undefined FUN_145a19e9a(void)

void FUN_145a19e9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18f750;
  param_1[0x1a] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) != 0) {
    FUN_140115c12(param_1 + 0x1c,0);
  }
  param_1[0x1b] = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    FUN_140115c12(param_1 + 0x18,0);
  }
  param_1[0x17] = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a19f82 FUN_145a19f82 body=61 status=ok
// SIG undefined FUN_145a19f82(void)

undefined8 * FUN_145a19f82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b28b1e0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a19fce FUN_145a19fce body=36 status=ok
// SIG undefined FUN_145a19fce(void)

undefined8 FUN_145a19fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145a19ffe FUN_145a19ffe body=137 status=ok
// SIG undefined FUN_145a19ffe(void)

void FUN_145a19ffe(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0x7012;
  local_18 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x7012)) {
    local_28 = *param_2;
    local_20 = (int)param_2[1];
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb61b98);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a1a096 FUN_145a1a096 body=36 status=ok
// SIG undefined FUN_145a1a096(void)

undefined8 FUN_145a1a096(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145a1a0c8 FUN_145a1a0c8 body=36 status=ok
// SIG undefined FUN_145a1a0c8(void)

undefined8 FUN_145a1a0c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145a1a0fa FUN_145a1a0fa body=36 status=ok
// SIG undefined FUN_145a1a0fa(void)

undefined8 FUN_145a1a0fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145a1a12c FUN_145a1a12c body=36 status=ok
// SIG undefined FUN_145a1a12c(void)

undefined8 FUN_145a1a12c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a1a15e FUN_145a1a15e body=40 status=ok
// SIG undefined FUN_145a1a15e(void)

undefined8 FUN_145a1a15e(undefined8 param_1,int param_2)

{
  FUN_1414568f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1a194 FUN_145a1a194 body=36 status=ok
// SIG undefined FUN_145a1a194(void)

undefined8 FUN_145a1a194(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145a1a1c6 FUN_145a1a1c6 body=36 status=ok
// SIG undefined FUN_145a1a1c6(void)

undefined8 FUN_145a1a1c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145a1a1f8 FUN_145a1a1f8 body=36 status=ok
// SIG undefined FUN_145a1a1f8(void)

undefined8 FUN_145a1a1f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145a1a228 FUN_145a1a228 body=57 status=ok
// SIG undefined FUN_145a1a228(void)

undefined8 * FUN_145a1a228(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1414569ec(param_1,uVar1);
  *param_1 = &PTR_FUN_14b801dc0;
  param_1[0x72] = &PTR_FUN_14b802400;
  return param_1;
}



// FUNCTION 145a1a262 FUN_145a1a262 body=38 status=ok
// SIG undefined FUN_145a1a262(void)

undefined8 FUN_145a1a262(undefined8 param_1,int param_2)

{
  FUN_145a1a288();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1a288 FUN_145a1a288 body=62 status=ok
// SIG undefined FUN_145a1a288(void)

void FUN_145a1a288(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_1400020a8();
  }
  FUN_14588c37e(param_1 + 0x2a0);
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145a1a2c6 FUN_145a1a2c6 body=40 status=ok
// SIG undefined FUN_145a1a2c6(void)

undefined8 FUN_145a1a2c6(undefined8 param_1,int param_2)

{
  FUN_145a1a2ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1a2ee FUN_145a1a2ee body=60 status=ok
// SIG undefined FUN_145a1a2ee(void)

void FUN_145a1a2ee(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bcd5df0;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_149452aac(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a1a32a FUN_145a1a32a body=130 status=ok
// SIG undefined FUN_145a1a32a(void)

void FUN_145a1a32a(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_145a1a3ae(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_1472ae5c4(param_1);
  return;
}



// FUNCTION 145a1a3ae FUN_145a1a3ae body=132 status=ok
// SIG undefined FUN_145a1a3ae(void)

void FUN_145a1a3ae(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a1a43a FUN_145a1a43a body=151 status=ok
// SIG undefined FUN_145a1a43a(void)

undefined8 * FUN_145a1a43a(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_145a1a4d2(param_1);
  *param_1 = &PTR_FUN_14bccf8c0;
  param_1[0xb] = 0x4038000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1458b0bbe(param_1 + 0xf);
  FUN_145a1a506(param_1 + 0x10);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  *(undefined8 *)((longlong)param_1 + 0x149) = 0;
  memset(param_1 + 0x11,0,0xa9);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return param_1;
}



// FUNCTION 145a1a4d2 FUN_145a1a4d2 body=51 status=ok
// SIG undefined FUN_145a1a4d2(void)

undefined8 * FUN_145a1a4d2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ba87f70;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 145a1a506 FUN_145a1a506 body=84 status=ok
// SIG undefined FUN_145a1a506(void)

undefined8 * FUN_145a1a506(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  *param_1 = 0;
  FUN_1412d55ee(0);
  puVar2 = (undefined2 *)FUN_14494321d(2);
  *puVar2 = 0;
  FUN_145a1a598(puVar2);
  uVar1 = *param_1;
  *param_1 = puVar2;
  FUN_145a1a55a(uVar1);
  FUN_145a1a55a(0);
  FUN_1412d5698(0);
  return param_1;
}



// FUNCTION 145a1a55a FUN_145a1a55a body=62 status=ok
// SIG undefined FUN_145a1a55a(void)

void FUN_145a1a55a(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_1412d55ee(1);
  if (*(char *)(param_1 + 1) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  FUN_1412d5698(1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145a1a598 FUN_145a1a598 body=45 status=ok
// SIG undefined FUN_145a1a598(void)

longlong FUN_145a1a598(longlong param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1412d55ee(1);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_1412d5698(1);
  return param_1;
}



// FUNCTION 145a1a5c6 FUN_145a1a5c6 body=158 status=ok
// SIG undefined FUN_145a1a5c6(void)

bool FUN_145a1a5c6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1a666 FUN_145a1a666 body=491 status=ok
// SIG undefined FUN_145a1a666(void)

void FUN_145a1a666(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_2 != 0) && (*(int *)(param_1 + 0x180) != 0)) &&
     (*(longlong **)(param_1 + 0x178) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x178) + 0x30))();
    if (cVar5 != '\0') {
      local_78 = 0;
      uStack_70 = 0;
      FUN_1414ae211(local_60);
      uStack_70 = CONCAT44(uStack_70._4_4_,1);
      FUN_140f12bd2(&local_78,0);
      FUN_14014e938(local_78,local_60);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      FUN_1414ae1a9(local_60);
      uVar4 = uStack_70;
      lVar7 = (longlong)(int)uStack_70;
      uVar6 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
      if (uStack_70._4_4_ < uVar6) {
        FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
      }
      FUN_14014e938(lVar7 * 0x38 + local_78,local_60);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if ((*(int *)(param_1 + 0x180) == 0) ||
         (plVar2 = *(longlong **)(param_1 + 0x178), plVar2 == (longlong *)0x0)) {
        local_80 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_80);
      }
      uVar3 = local_80;
      lVar7 = FUN_140149a73(param_2,0);
      if (lVar7 != 0) {
        FUN_145a1a87a(&local_78,uVar3,lVar7,0);
      }
      FUN_1405d7ab2(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  iVar1 = *(int *)(param_1 + 0x174);
  FUN_145a1a852(*(undefined8 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x170));
  *(undefined4 *)(param_1 + 0x170) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
    FUN_148e639f0(param_1 + 0x168);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1a852 FUN_145a1a852 body=40 status=ok
// SIG undefined FUN_145a1a852(void)

void FUN_145a1a852(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145a1a87a FUN_145a1a87a body=96 status=ok
// SIG undefined FUN_145a1a87a(void)

void FUN_145a1a87a(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_3 != 0) && (*(char *)(param_3 + 0x6a) == '\0')) && (DAT_14c872bd8 == '\0')) &&
     ((longlong)(int)param_1[1] != 0)) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x38;
    do {
      FUN_140825b72(lVar1,param_2,param_3,param_4);
      lVar1 = lVar1 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145a1a8da FUN_145a1a8da body=339 status=ok
// SIG undefined FUN_145a1a8da(void)

void FUN_145a1a8da(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_145a1aa2e(*param_2,lVar11,*param_4,*param_5,*param_6,*param_7,*param_8);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 145a1aa2e FUN_145a1aa2e body=299 status=ok
// SIG undefined FUN_145a1aa2e(void)

void FUN_145a1aa2e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a86bff(param_2,param_1 + 0xe6);
  local_58 = param_6;
  local_54 = 0;
  local_4c = 0;
  if (0 < (int)param_7) {
    lVar2 = 0;
    do {
      FUN_144a86a8e(param_2,param_1 + 0xea + lVar2,*(undefined8 *)(param_4 + lVar2 * 2));
      *(undefined4 *)((longlong)&local_54 + lVar2) = *(undefined4 *)(param_5 + lVar2);
      lVar2 = lVar2 + 4;
    } while ((ulonglong)param_7 << 2 != lVar2);
    if (2 < (int)param_7) goto LAB_145a1ab18;
  }
  lVar2 = (longlong)(int)param_7;
  lVar1 = param_1 + lVar2 * 4 + 0xea;
  puVar3 = &DAT_14cae3dd8 + lVar2 * 8;
  do {
    lVar2 = lVar2 + 1;
    FUN_144a86a8e(param_2,lVar1,*puVar3);
    lVar1 = lVar1 + 4;
    puVar3 = puVar3 + 8;
  } while ((int)lVar2 != 3);
LAB_145a1ab18:
  FUN_144a86d70(param_2,param_1 + 0xe0,&local_58,0);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1ab5a FUN_145a1ab5a body=67 status=ok
// SIG undefined FUN_145a1ab5a(void)

void FUN_145a1ab5a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145a1ac1a(param_1);
    FUN_145a1ab9e(param_1,0);
    return;
  }
  FUN_145a1ab9e(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140f17470(param_1);
  return;
}



// FUNCTION 145a1ab9e FUN_145a1ab9e body=123 status=ok
// SIG undefined FUN_145a1ab9e(void)

void FUN_145a1ab9e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145a1ac1a FUN_145a1ac1a body=335 status=ok
// SIG undefined FUN_145a1ac1a(void)

void FUN_145a1ac1a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145a1ad6a FUN_145a1ad6a body=28 status=ok
// SIG undefined FUN_145a1ad6a(void)

undefined8 FUN_145a1ad6a(undefined8 param_1,undefined8 param_2)

{
  FUN_14145706a(param_1,param_2,0,0);
  return param_2;
}



// FUNCTION 145a1ad86 FUN_145a1ad86 body=418 status=ok
// SIG undefined FUN_145a1ad86(void)

void FUN_145a1ad86(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  uStack_50 = uStack_40;
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_80 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_20;
  uStack_74 = uStack_20._4_4_;
  uStack_70 = (undefined4)local_18;
  uStack_6c = local_18._4_4_;
  FUN_145a1af2a(&local_80,&local_68,&local_58);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1af2a FUN_145a1af2a body=125 status=ok
// SIG undefined FUN_145a1af2a(void)

void FUN_145a1af2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14126d364(param_1,&local_30);
  FUN_141457244(local_30,param_2,param_3);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1afb4 FUN_145a1afb4 body=102 status=ok
// SIG undefined FUN_145a1afb4(void)

undefined8 * FUN_145a1afb4(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b7b6ed0;
  *(undefined4 *)(param_1 + 0x79) = 1;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cbd3cb0,1);
  plVar1 = (longlong *)param_1[0x75];
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) | 8;
    (**(code **)(*plVar1 + 0x958))();
  }
  return param_1;
}



// FUNCTION 145a1b01a FUN_145a1b01a body=179 status=ok
// SIG undefined FUN_145a1b01a(void)

bool FUN_145a1b01a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1b0ce FUN_145a1b0ce body=109 status=ok
// SIG undefined FUN_145a1b0ce(void)

void FUN_145a1b0ce(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_141060562();
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
       ((*param_4 == '\b' || (*param_4 == '\x05')))) {
      FUN_145c57122(param_1,*(undefined4 *)(*(longlong *)(lVar1 + 0x30) + 0xd8));
      return;
    }
  }
  return;
}



// FUNCTION 145a1b13b FUN_145a1b13b body=165 status=ok
// SIG undefined FUN_145a1b13b(void)

void FUN_145a1b13b(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14145759d();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14145754c(param_1,param_2);
  return;
}



// FUNCTION 145a1b1e0 FUN_145a1b1e0 body=304 status=ok
// SIG undefined FUN_145a1b1e0(void)

longlong FUN_145a1b1e0(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  void **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)(param_1 + 0x110);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140e7d91e(plVar6,uVar2,param_2);
  if (iVar3 != -1) {
    if (*plVar6 + (longlong)iVar3 * 0x38 != 0) {
      lVar5 = *plVar6 + (longlong)iVar3 * 0x38;
      goto LAB_145a1b2bf;
    }
  }
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_60;
  _Src = (void *)*param_2;
  if (lVar5 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar5 * 2);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = param_2;
  local_40 = &local_68;
  FUN_145a1b35e(plVar6,&local_34);
  lVar5 = *plVar6 + (longlong)local_34 * 0x38;
  FUN_145a1b312(&local_68);
LAB_145a1b2bf:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1b312 FUN_145a1b312 body=75 status=ok
// SIG undefined FUN_145a1b312(void)

void FUN_145a1b312(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a1b35e FUN_145a1b35e body=321 status=ok
// SIG undefined FUN_145a1b35e(void)

undefined4 * FUN_145a1b35e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a1b5c0(param_1,local_48);
  FUN_145a1b4a0(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_145a1b530(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x34) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145a1b6ac(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1b4a0 FUN_145a1b4a0 body=144 status=ok
// SIG undefined FUN_145a1b4a0(void)

undefined8 * FUN_145a1b4a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[4] = param_3[2];
  param_1[5] = param_3[3];
  param_3[2] = 0;
  param_3[3] = 0;
  return param_1;
}



// FUNCTION 145a1b530 FUN_145a1b530 body=144 status=ok
// SIG undefined FUN_145a1b530(void)

undefined8 FUN_145a1b530(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_140e7d91e(), iVar14 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x38);
    plVar2 = (longlong *)(*param_1 + (longlong)iVar14 * 0x38);
    FUN_145a1b312(plVar2 + 2);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1[8] = param_3[8];
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_148fa983e(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 145a1b5c0 FUN_145a1b5c0 body=236 status=ok
// SIG undefined FUN_145a1b5c0(void)

int * FUN_145a1b5c0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 145a1b6ac FUN_145a1b6ac body=485 status=ok
// SIG undefined FUN_145a1b6ac(void)

void FUN_145a1b6ac(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x38;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1b892 FUN_145a1b892 body=67 status=ok
// SIG undefined FUN_145a1b892(void)

void FUN_145a1b892(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145a1b8d6(param_1);
    FUN_14136a0f0(param_1,0);
    return;
  }
  FUN_14136a0f0(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147852e08(param_1);
  return;
}



// FUNCTION 145a1b8d6 FUN_145a1b8d6 body=335 status=ok
// SIG undefined FUN_145a1b8d6(void)

void FUN_145a1b8d6(longlong *param_1)

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



// FUNCTION 145a1ba26 FUN_145a1ba26 body=38 status=ok
// SIG undefined FUN_145a1ba26(void)

undefined8 FUN_145a1ba26(undefined8 param_1,int param_2)

{
  FUN_141457686();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1ba4c FUN_145a1ba4c body=252 status=ok
// SIG undefined FUN_145a1ba4c(void)

void FUN_145a1ba4c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac70300;
  param_2[9] = DAT_14c9ab028;
  *(undefined1 *)(param_2 + 10) = 2;
  param_2[8] = &PTR_FUN_14a1a0a20;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0xd] = &PTR_FUN_14a1a0aa0;
  *(undefined4 *)(param_2 + 0x10) = 10;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x11] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x14) = 0x43fa0000;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x15] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x18) = 0x45bb8000;
  param_2[0x1a] = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x19] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x1c) = 0x44fa0000;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  return;
}



// FUNCTION 145a1bb4a FUN_145a1bb4a body=123 status=ok
// SIG undefined FUN_145a1bb4a(void)

longlong * FUN_145a1bb4a(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    if (param_1 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(longlong *)(param_1 + 0x20);
    }
  }
  local_20 = param_3;
  plVar1 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                     (param_2,&local_20,*(uint *)(param_1 + 0x28) & param_4);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1bbc6 FUN_145a1bbc6 body=53 status=ok
// SIG undefined FUN_145a1bbc6(void)

void FUN_145a1bbc6(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  FUN_145a1bbfc();
  return;
}



// FUNCTION 145a1bbfc FUN_145a1bbfc body=1 status=ok
// SIG undefined FUN_145a1bbfc(void)

void FUN_145a1bbfc(void)

{
  return;
}



// FUNCTION 145a1bbfe FUN_145a1bbfe body=147 status=ok
// SIG undefined FUN_145a1bbfe(void)

void FUN_145a1bbfe(longlong param_1,int param_2)

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



// FUNCTION 145a1bc98 FUN_145a1bc98 body=221 status=ok
// SIG undefined FUN_145a1bc98(void)

longlong FUN_145a1bc98(void)

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
  if (DAT_14cb5d3d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148696385;
    local_40 = &LAB_145aca716;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoverySaveGameData",&DAT_14cb5d3d0,&DAT_148696384);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d3d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1bd76 FUN_145a1bd76 body=198 status=ok
// SIG undefined FUN_145a1bd76(void)

void FUN_145a1bd76(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x130)) {
    lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar2 = param_1 + 0x68;
        if (*(longlong *)(param_1 + 0x128) != 0) {
          lVar2 = *(longlong *)(param_1 + 0x128);
        }
        if ((longlong)*(int *)(param_1 + 0x130) != 0) {
          lVar4 = (longlong)*(int *)(param_1 + 0x130) * 0x18;
          do {
            lVar3 = FUN_14479d2ce(lVar2);
            if (lVar3 != 0) {
              (**(code **)(*param_2 + 0x80))(param_2,lVar1,lVar3,*param_3);
            }
            lVar2 = lVar2 + 0x18;
            lVar4 = lVar4 + -0x18;
          } while (lVar4 != 0);
        }
      }
    }
  }
  FUN_145a1be3c(param_1,param_2,param_3);
  return;
}



// FUNCTION 145a1be3c FUN_145a1be3c body=198 status=ok
// SIG undefined FUN_145a1be3c(void)

void FUN_145a1be3c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_48 = (undefined8 *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    FUN_144a7bec8(param_2,&local_30);
    local_48 = local_30;
    plStack_40 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
  }
  local_38 = *param_3;
  local_30 = &local_48;
  FUN_145a1bf04(param_1 + 0x50);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1bf04 FUN_145a1bf04 body=316 status=ok
// SIG undefined FUN_145a1bf04(void)

void FUN_145a1bf04(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_145a1c040(param_2,lVar2);
    iVar7 = 0;
    iVar8 = 0;
    do {
      lVar5 = (longlong)iVar8;
      iVar11 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar12 = lVar2 + 0x18 + lVar5 * 0x18;
      iVar9 = iVar8;
      lVar6 = lVar5;
      do {
        lVar6 = lVar6 + 1;
        iVar10 = iVar11;
        if (lVar13 <= lVar6) break;
        bVar4 = FUN_145a1c040(param_2,lVar12);
        iVar9 = iVar9 + 1;
        lVar12 = lVar12 + 0x18;
        iVar10 = iVar9;
      } while ((bVar3 & 1) == bVar4);
      iVar11 = iVar10 - iVar8;
      if ((bVar3 & 1) == 0) {
        if (iVar7 != iVar8) {
          memmove((void *)(lVar2 + (longlong)iVar7 * 0x18),(void *)(lVar2 + lVar5 * 0x18),
                  (longlong)iVar11 * 0x18);
        }
        iVar7 = iVar7 + iVar11;
      }
      else {
        FUN_140160f86(lVar2 + lVar5 * 0x18,iVar11);
      }
      iVar8 = iVar10;
      bVar3 = bVar3 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 145a1c040 FUN_145a1c040 body=195 status=ok
// SIG undefined FUN_145a1c040(void)

undefined8 FUN_145a1c040(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  param_1 = (longlong *)*param_1;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
LAB_145a1c0c3:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_145a1c0c3;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = *param_2;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_145a1c096;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *param_1;
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
LAB_145a1c096:
  if (plVar7 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar9 == lVar8) {
    uVar6 = CONCAT71((int7)((ulonglong)param_2[2] >> 8),param_2[2] == param_1[2]);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 145a1c104 FUN_145a1c104 body=84 status=ok
// SIG undefined FUN_145a1c104(void)

void FUN_145a1c104(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_145a1c15a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1c15a FUN_145a1c15a body=79 status=ok
// SIG undefined FUN_145a1c15a(void)

void FUN_145a1c15a(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1e]);
    return;
  }
  return;
}



// FUNCTION 145a1c1b6 FUN_145a1c1b6 body=145 status=ok
// SIG undefined FUN_145a1c1b6(void)

void FUN_145a1c1b6(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x18);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  FUN_1414588cc(param_1);
  if (0 < iVar1) {
    local_28 = param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
    FUN_140f933a4(&DAT_14c964830,&local_28,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1c248 FUN_145a1c248 body=48 status=ok
// SIG undefined FUN_145a1c248(void)

void FUN_145a1c248(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145a1c278 FUN_145a1c278 body=40 status=ok
// SIG undefined FUN_145a1c278(void)

undefined8 FUN_145a1c278(undefined8 param_1,int param_2)

{
  FUN_145a1c2a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1c2a0 FUN_145a1c2a0 body=61 status=ok
// SIG undefined FUN_145a1c2a0(void)

void FUN_145a1c2a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6be270;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a1c2e8 FUN_145a1c2e8 body=193 status=ok
// SIG undefined FUN_145a1c2e8(void)

undefined8 * FUN_145a1c2e8(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14117d212();
  *param_1 = &PTR_FUN_14ae43ca0;
  param_1[5] = &PTR_FUN_14ae43fc0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  FUN_140e2f50a(param_1,4);
  *param_1 = &PTR_FUN_14ae4d6e0;
  param_1[5] = &PTR_LAB_14ae4da00;
  FUN_140fbcb60(param_1 + 0x65);
  *(undefined2 *)(param_1 + 0x6e) = 0x104;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145a1c3aa(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1c3aa FUN_145a1c3aa body=97 status=ok
// SIG undefined FUN_145a1c3aa(void)

void FUN_145a1c3aa(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  *(undefined4 *)(param_1 + 0x1b0) = uVar3;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_145ab4ba4();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1c40c FUN_145a1c40c body=54 status=ok
// SIG undefined FUN_145a1c40c(void)

void FUN_145a1c40c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a1c442(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b630940;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 145a1c442 FUN_145a1c442 body=47 status=ok
// SIG undefined FUN_145a1c442(void)

undefined8 * FUN_145a1c442(undefined8 *param_1)

{
  FUN_14060481e();
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14b657560;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 145a1c47c FUN_145a1c47c body=90 status=ok
// SIG undefined FUN_145a1c47c(void)

undefined8 * FUN_145a1c47c(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_1409e1656(param_1 + 5);
  *param_1 = &PTR_FUN_14b6e7c90;
  param_1[5] = &PTR_FUN_14b6e7f30;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    FUN_1449db8d8(param_1 + 5);
  }
  return param_1;
}



// FUNCTION 145a1c4d6 FUN_145a1c4d6 body=162 status=ok
// SIG undefined FUN_145a1c4d6(void)

undefined8 * FUN_145a1c4d6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145a1c57a(&local_38,param_3);
  FUN_145a1c5f8(param_1 + 0xe0,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1c57a FUN_145a1c57a body=124 status=ok
// SIG undefined FUN_145a1c57a(void)

void FUN_145a1c57a(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1c5f8 FUN_145a1c5f8 body=216 status=ok
// SIG undefined FUN_145a1c5f8(void)

undefined8 * FUN_145a1c5f8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1c6d1 FUN_145a1c6d1 body=42 status=ok
// SIG undefined FUN_145a1c6d1(void)

void FUN_145a1c6d1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a1c6fc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc9c8b0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 145a1c6fc FUN_145a1c6fc body=59 status=ok
// SIG undefined FUN_145a1c6fc(void)

undefined8 * FUN_145a1c6fc(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14bc23240;
  return param_1;
}



// FUNCTION 145a1c740 FUN_145a1c740 body=152 status=ok
// SIG undefined FUN_145a1c740(void)

undefined8 * FUN_145a1c740(undefined8 *param_1)

{
  FUN_145a1c7d8();
  *param_1 = &PTR_FUN_14b73e580;
  param_1[5] = &PTR_FUN_14b73efe0;
  param_1[6] = &PTR_LAB_14b73f020;
  param_1[0x55] = &PTR_FUN_14b73f070;
  param_1[0x56] = &PTR_FUN_14b73f0f0;
  param_1[0x57] = &PTR_FUN_14b73f100;
  param_1[0xc4] = &PTR_FUN_14b73f130;
  param_1[0xff] = &PTR_FUN_14b73f140;
  param_1[0x108] = &PTR_FUN_14b73f150;
  param_1[0x109] = &PTR_FUN_14b73f1f0;
  return param_1;
}



// FUNCTION 145a1c7d8 FUN_145a1c7d8 body=194 status=ok
// SIG undefined FUN_145a1c7d8(void)

undefined8 * FUN_145a1c7d8(undefined8 *param_1)

{
  FUN_14067215e();
  *param_1 = &PTR_FUN_14b7f5b90;
  param_1[5] = &PTR_FUN_14b7f65f0;
  param_1[6] = &PTR_LAB_14b7f6630;
  param_1[0x55] = &PTR_FUN_14b7f6680;
  param_1[0x56] = &PTR_FUN_14b7f6700;
  param_1[0x57] = &PTR_FUN_14b7f6710;
  param_1[0xc4] = &PTR_FUN_14b7f6740;
  param_1[0xff] = &PTR_FUN_14b7f6750;
  param_1[0x108] = &PTR_FUN_14b7f6760;
  param_1[0x109] = &PTR_FUN_14b7f6800;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  return param_1;
}



// FUNCTION 145a1c89a FUN_145a1c89a body=96 status=ok
// SIG undefined FUN_145a1c89a(void)

ulonglong FUN_145a1c89a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145a1c8dd:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145a1c8dd;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145a1c8fa FUN_145a1c8fa body=1102 status=ok
// SIG undefined FUN_145a1c8fa(void)

void FUN_145a1c8fa(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  ulonglong local_b8 [5];
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = 0;
  FUN_14485c47a(&local_c0,param_3);
  if (*(int *)(param_1 + 0xf0) == 0) goto LAB_145a1cb54;
  if (*(int *)(param_1 + 0xf0) < 1) {
    local_b8[0] = 0;
  }
  else {
    local_b8[0] = **(ulonglong **)(param_1 + 0xe8);
  }
  cVar5 = FUN_140383372(&local_c0);
  if (cVar5 == '\0') goto LAB_145a1cb54;
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 300);
  if ((plVar8 == (longlong *)0x0) || (plVar8 != param_2)) goto LAB_145a1cb54;
  lVar9 = (**(code **)(*plVar8 + 0x9f8))(plVar8);
  if (lVar9 == 0) {
LAB_145a1cb8f:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_14098e79e();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        != lVar10 + 0x30)) goto LAB_145a1cb8f;
  }
  FUN_14485c47a(param_1 + 300,lVar9);
  FUN_14485c47a(param_1 + 0x124,plVar8);
  lVar10 = plVar8[0x15];
  if (lVar10 == 0) {
LAB_145a1cb96:
    lVar10 = 0;
  }
  else {
    lVar11 = FUN_14145892e();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) != lVar11 + 0x30)) goto LAB_145a1cb96;
  }
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar11 = *(longlong *)(param_1 + 0xd8);
    lVar14 = (longlong)*(int *)(param_1 + 0xe0) << 3;
    uVar15 = 0;
    do {
      cVar5 = FUN_145a1cd6c(lVar11,lVar10);
      if (cVar5 != '\0') {
        if (0 < (int)uVar15) {
          if (*(int *)(param_1 + 400) < (int)uVar15) {
            uVar7 = *(undefined4 *)(param_1 + 0x180);
            goto LAB_145a1cba3;
          }
          *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
          plVar8 = *(longlong **)(param_1 + 0x140);
          if (plVar8 == (longlong *)0x0) goto LAB_145a1cb1c;
          iVar6 = (int)plVar8[1];
          goto LAB_145a1caa2;
        }
        break;
      }
      lVar11 = lVar11 + 8;
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x160);
LAB_145a1cba3:
  *(undefined4 *)(param_1 + 0x198) = uVar7;
  goto LAB_145a1cb1c;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar8[1];
    bVar16 = iVar6 == iVar4;
    if (bVar16) {
      *(int *)(plVar8 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    if (bVar16) break;
LAB_145a1caa2:
    if (iVar6 == 0) goto LAB_145a1cb1c;
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x188);
    lVar11 = FUN_145a1cd4a(*(longlong *)(param_1 + 0x138),
                           *(undefined4 *)(lVar10 + -0xc + (ulonglong)(uVar15 & 0x7fffffff) * 0xc));
    if (lVar11 != 0) {
      iVar6 = *(int *)(lVar10 + (ulonglong)(uVar15 & 0x7fffffff) * 0xc + -4);
      if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar11 + 0x80))) {
        lVar10 = lVar11 + 0x38;
        if (*(longlong *)(lVar11 + 0x78) != 0) {
          lVar10 = *(longlong *)(lVar11 + 0x78);
        }
        *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar10 + 8 + (longlong)iVar6 * 0x10);
      }
    }
  }
  LOCK();
  plVar1 = plVar8 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_145a1cb1c:
  if (lVar9 != 0) {
    FUN_1457706d4(local_b8,param_1);
    FUN_14577054c(lVar9 + 0x6b8,local_88,local_b8);
    FUN_1449db362(local_b8);
    goto LAB_145a1cb54;
  }
  lVar9 = FUN_14479d2ce(param_1 + 0xa8);
  if (lVar9 == 0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = *(float *)(lVar9 + 0x930);
  }
  lVar9 = *(longlong *)(param_1 + 0x98);
  if (lVar9 == 0) {
    uVar12 = FUN_141518b52();
    lVar9 = FUN_14477b664(uVar12);
    *(longlong *)(param_1 + 0x98) = lVar9;
  }
  lVar10 = *(longlong *)(param_1 + 0xa0);
  if (lVar10 == 0) {
    fVar17 = 0.0;
    if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
      plVar8 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')) {
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar10 = FUN_144aff482(uVar12,(longlong *)(param_1 + 0x90));
        *(longlong *)(param_1 + 0xa0) = lVar10;
        if (lVar10 != 0) goto LAB_145a1cca1;
      }
    }
  }
  else {
LAB_145a1cca1:
    uVar12 = FUN_14479d2ce(param_1 + 0xa8);
    local_b8[0] = local_b8[0] & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(local_b8,uVar12);
    FUN_1447c3578(lVar10 + 0x60,local_88,local_b8);
    fVar17 = (float)FUN_144a7ecd0(local_88);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar13 = local_88;
      if (0x18 < local_70) {
        ppppuVar13 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(local_b8);
  }
  *(float *)(param_1 + 0x1a0) = fVar18 + fVar17;
LAB_145a1cb54:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a1cd4a FUN_145a1cd4a body=33 status=ok
// SIG undefined FUN_145a1cd4a(void)

longlong FUN_145a1cd4a(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x90))) {
    return (ulonglong)param_2 * 0x90 + *(longlong *)(param_1 + 0x88);
  }
  return 0;
}



// FUNCTION 145a1cd6c FUN_145a1cd6c body=120 status=ok
// SIG undefined FUN_145a1cd6c(void)

ulonglong FUN_145a1cd6c(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if (*param_1 == (int)local_20) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
    if (param_1[1] == local_20._4_4_) goto LAB_145a1cdac;
  }
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(&local_20);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
LAB_145a1cdac:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 145a1cde6 FUN_145a1cde6 body=155 status=ok
// SIG undefined FUN_145a1cde6(void)

void FUN_145a1cde6(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14054cb04(&local_30,param_1 + 0x68,param_2);
  if (local_30 != 0) {
    FUN_145a1ce82(local_30,CONCAT44((float)param_4,(float)param_3));
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1ce82 FUN_145a1ce82 body=243 status=ok
// SIG undefined FUN_145a1ce82(void)

void FUN_145a1ce82(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0x380) = (int)param_2;
  *(int *)(param_1 + 900) = (int)((ulonglong)param_2 >> 0x20);
  FUN_145a1cf76(param_1 + 0x268,0);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_145a1cf21:
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145a1cf21;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_28 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_20 = plVar3;
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
  if ((*(int *)(param_1 + 0x5a8) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x5a0), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_28);
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a1cf76 FUN_145a1cf76 body=5 status=ok
// SIG undefined FUN_145a1cf76(void)

void FUN_145a1cf76(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x79) = 1;
  return;
}



// FUNCTION 145a1cf7c FUN_145a1cf7c body=1130 status=ok
// SIG undefined FUN_145a1cf7c(void)

bool FUN_145a1cf7c(longlong param_1,longlong param_2)

{
  void *_Src;
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110 [2];
  longlong local_100 [2];
  longlong local_f0 [2];
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0;
  int local_c8;
  int local_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_145a1d410(&local_d0,*(undefined8 *)(param_2 + 0x10));
  iVar2 = local_c8;
  iVar7 = 0;
  if (local_c8 == 0) goto LAB_145a1cfcb;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  plVar5 = (longlong *)(param_1 + 0xb0);
  iVar7 = *(int *)(param_1 + 0xbc);
  FUN_145a1d3e7(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar7 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_148e7ae88(plVar5);
  }
  local_c0 = local_c0 + 2;
  if ((longlong)local_c8 != 0) {
    lVar6 = (longlong)local_c8 * 0x68;
    lVar9 = local_d0 + 0x30;
    local_118 = plVar5;
    do {
      FUN_140056680(local_b8,L"#FFFFFF");
      FUN_144a5dc74(&local_a8);
      FUN_144a5dc74(local_98);
      plVar3 = local_a8;
      local_88 = 0;
      local_78 = 0;
      local_74 = 0;
      uStack_6c = 0;
      local_64 = 0xffffffff;
      local_80 = *(undefined8 *)(lVar9 + -0x30);
      plVar5 = *(longlong **)(lVar9 + -0x18);
      if (local_a8 != plVar5) {
        local_a8 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      local_a0 = *(undefined4 *)(lVar9 + -0x10);
      local_78 = *(undefined1 *)(lVar9 + 0x18);
      local_88 = *(undefined4 *)(lVar9 + -0x20);
      puVar4 = (undefined8 *)FUN_1447a1f4a(lVar9);
      local_e0 = (void *)0x0;
      local_d8 = *(int *)(puVar4 + 1);
      lVar8 = (longlong)local_d8;
      _Src = (void *)*puVar4;
      if (lVar8 == 0) {
        local_d4 = 0;
      }
      else {
        FUN_1446dd670(&local_e0,local_d8,0);
        memcpy(local_e0,_Src,lVar8 * 2);
      }
      FUN_1400b22c2(local_f0,L"[Left Bracket");
      FUN_1400b22c2(local_100,L"]Right Bracket");
      iVar7 = local_d8 + -1;
      if (local_d8 == 0) {
        iVar7 = 0;
      }
      FUN_1400020e8(local_f0,local_e0,iVar7);
      FUN_1400020e8(local_f0,local_100[0]);
      FUN_140009b9a(local_110,local_f0);
      FUN_140008f88(local_98,local_110);
      if (local_110[0] != (longlong *)0x0) {
        (**(code **)(*local_110[0] + 0x10))();
      }
      FUN_144a787a6(local_b8,*(longlong *)(param_2 + 0x10) + 0xb0);
      plVar5 = local_118;
      if ((lVar9 + 0x20 != (longlong)&local_74 + 4) && (*(int *)(lVar9 + 0x2c) != -1)) {
        FUN_14034a368((longlong)&local_74 + 4);
      }
      iVar7 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar7 + 1U) {
        FUN_145a1d696(plVar5,iVar7);
      }
      FUN_145a1d862((longlong)iVar7 * 0x58 + *plVar5,local_b8);
      if (local_100[0] != 0) {
        FUN_1400020a8();
      }
      if (local_f0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_e0 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_145a1d468(local_b8);
      lVar9 = lVar9 + 0x68;
      lVar6 = lVar6 + -0x68;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  FUN_145a1d564(plVar5,local_b8);
  FUN_145a1d726(param_1 + 0xe0,local_b8);
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    iVar7 = *(int *)(param_1 + 0x1dc) + 1;
LAB_145a1d312:
    *(undefined1 *)(param_1 + 0x1d8) = 1;
    *(int *)(param_1 + 0x1dc) = iVar7;
  }
  else if (*(int *)(param_1 + 0x1dc) == 0) {
    iVar7 = 1;
    goto LAB_145a1d312;
  }
  if (*(int *)(param_1 + 0x134) == -1) {
    lVar6 = *(longlong *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1a0) != *(int *)(lVar6 + 0xe0)) {
      FUN_144a787a6(param_1 + 400,lVar6 + 0xd0);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar6 + 0xe0);
    }
  }
  else {
    FUN_1449a0272(param_1 + 400,param_1 + 0x128);
  }
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  FUN_145a1d468(local_b8);
  iVar7 = local_c8;
LAB_145a1cfcb:
  FUN_1412de13c(local_d0,iVar7);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1d3e7 FUN_145a1d3e7 body=40 status=ok
// SIG undefined FUN_145a1d3e7(void)

void FUN_145a1d3e7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145a1d468(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 145a1d410 FUN_145a1d410 body=87 status=ok
// SIG undefined FUN_145a1d410(void)

undefined8 * FUN_145a1d410(undefined8 *param_1,undefined8 *param_2)

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
    FUN_145a1d502(param_1,iVar1);
    FUN_145a1d4d3(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 145a1d468 FUN_145a1d468 body=107 status=ok
// SIG undefined FUN_145a1d468(void)

void FUN_145a1d468(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x54) != -1) {
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = 0;
    param_1[10] = -0x100000000;
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145a1d4d3 FUN_145a1d4d3 body=47 status=ok
// SIG undefined FUN_145a1d4d3(void)

void FUN_145a1d4d3(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1458ba022(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145a1d502 FUN_145a1d502 body=98 status=ok
// SIG undefined FUN_145a1d502(void)

undefined8 FUN_145a1d502(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x68,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x4ec4ec4ec4ec4ec5),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x68)) {
    uVar5 = uVar2 / 0x68 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x68,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 145a1d564 FUN_145a1d564 body=139 status=ok
// SIG undefined FUN_145a1d564(void)

undefined8 FUN_145a1d564(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
  FUN_145a1d7c4(param_2,*param_1 + (longlong)(int)param_1[1] * 0x58 + -0x58);
  iVar3 = (int)param_1[1];
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)iVar3 * 0x58 + -0x58);
  FUN_145a1d468(_Dst);
  iVar2 = (int)param_1[1] - iVar3;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)iVar3 * 0x58),(longlong)iVar2 * 0x58);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_145a1d5f0(param_1);
  return param_2;
}



// FUNCTION 145a1d5f0 FUN_145a1d5f0 body=62 status=ok
// SIG undefined FUN_145a1d5f0(void)

void FUN_145a1d5f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a1d62e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 145a1d62e FUN_145a1d62e body=103 status=ok
// SIG undefined FUN_145a1d62e(void)

ulonglong FUN_145a1d62e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x58) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      uVar1 = uVar1 / 0x58;
    }
  }
  return uVar1;
}



// FUNCTION 145a1d696 FUN_145a1d696 body=143 status=ok
// SIG undefined FUN_145a1d696(void)

void FUN_145a1d696(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a1d726 FUN_145a1d726 body=157 status=ok
// SIG undefined FUN_145a1d726(void)

longlong FUN_145a1d726(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_14054da5a(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 145a1d7c4 FUN_145a1d7c4 body=158 status=ok
// SIG undefined FUN_145a1d7c4(void)

undefined8 * FUN_145a1d7c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_14023423e(param_1 + 2,param_2 + 2);
  FUN_14023423e(param_1 + 4,param_2 + 4);
  param_1[8] = param_2[8];
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  if (*(int *)((longlong)param_2 + 0x54) == -1) {
    param_1[9] = 0;
    param_1[10] = 0xffffffff00000000;
  }
  else {
    param_1[9] = 0;
    param_1[9] = param_2[9];
    param_2[9] = 0;
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
  }
  return param_1;
}



// FUNCTION 145a1d862 FUN_145a1d862 body=171 status=ok
// SIG undefined FUN_145a1d862(void)

undefined8 * FUN_145a1d862(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  plVar2 = (longlong *)param_2[2];
  param_1[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  plVar2 = (longlong *)param_2[4];
  param_1[4] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = param_2[8];
  FUN_141121e90(param_1 + 9,param_2 + 9);
  return param_1;
}



// FUNCTION 145a1d90e FUN_145a1d90e body=516 status=ok
// SIG undefined FUN_145a1d90e(void)

void FUN_145a1d90e(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x1ac) != *(int *)(lVar7 + 0xec)) {
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar7 + 0xe8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar7 + 0xec);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x1c0) != *(int *)(lVar7 + 0x100)) {
    FUN_144a787a6(param_1 + 0x1b0,lVar7 + 0xf0);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar7 + 0x100);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  bVar5 = *(byte *)(lVar7 + 0x110) ^ 1;
  if (bVar5 == *(byte *)(param_1 + 0x140)) {
    iVar6 = 1;
    if (*(int *)(param_1 + 0x144) != 0) goto LAB_145a1d9b1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x144) + 1;
  }
  *(byte *)(param_1 + 0x140) = bVar5;
  *(int *)(param_1 + 0x144) = iVar6;
  lVar7 = *(longlong *)(param_2 + 0x10);
LAB_145a1d9b1:
  if (*(int *)(param_1 + 0x180) != *(int *)(lVar7 + 0xc0)) {
    FUN_144a787a6(param_1 + 0x170,lVar7 + 0xb0);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar7 + 0xc0);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x14c) != *(int *)(lVar7 + 0x11c)) {
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(lVar7 + 0x118);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(lVar7 + 0x11c);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x168) != *(int *)(lVar7 + 0xa8)) {
    uVar2 = *(undefined4 *)(lVar7 + 0x9c);
    uVar3 = *(undefined4 *)(lVar7 + 0xa0);
    uVar4 = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar7 + 0x98);
    *(undefined4 *)(param_1 + 0x15c) = uVar2;
    *(undefined4 *)(param_1 + 0x160) = uVar3;
    *(undefined4 *)(param_1 + 0x164) = uVar4;
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(lVar7 + 0xa8);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x18c) != *(int *)(lVar7 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(lVar7 + 200);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(lVar7 + 0xcc);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x1a0) != *(int *)(lVar7 + 0xe0)) {
    FUN_144a787a6(param_1 + 400,lVar7 + 0xd0);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar7 + 0xe0);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(lVar7 + 0x124)) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(lVar7 + 0x120);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar7 + 0x124);
    lVar7 = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x1cc) != *(int *)(lVar7 + 0x10c)) {
    *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(lVar7 + 0x108);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(lVar7 + 0x10c);
  }
  puVar1 = *(ushort **)(param_1 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 145a1db12 FUN_145a1db12 body=57 status=ok
// SIG undefined FUN_145a1db12(void)

void FUN_145a1db12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc12f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc12f8 = FUN_140002ddd(FUN_14661aff0,uVar1,L"AtlasTrackerModDef");
  }
  return;
}



// FUNCTION 145a1db4c FUN_145a1db4c body=122 status=ok
// SIG undefined FUN_145a1db4c(void)

void FUN_145a1db4c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb95020 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb95020,local_38);
  }
  *(undefined8 *)(param_1 + 0x2b0) = uVar1;
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1dbc8 FUN_145a1dbc8 body=45 status=ok
// SIG undefined FUN_145a1dbc8(void)

undefined8 FUN_145a1dbc8(undefined8 param_1,int param_2)

{
  FUN_145a1dbf6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x910);
  }
  return param_1;
}



// FUNCTION 145a1dbf6 FUN_145a1dbf6 body=107 status=ok
// SIG undefined FUN_145a1dbf6(void)

void FUN_145a1dbf6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b486bf0;
  param_1[0x3b] = 0;
  FUN_14076ba36(param_1 + 0x3c);
  FUN_144a2da94(param_1 + 0x33);
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145a1dc82 FUN_145a1dc82 body=103 status=ok
// SIG undefined FUN_145a1dc82(void)

ulonglong FUN_145a1dc82(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145a1dccc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a1dccc;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145a1dcfc FUN_145a1dcfc body=40 status=ok
// SIG undefined FUN_145a1dcfc(void)

undefined8 FUN_145a1dcfc(undefined8 param_1,int param_2)

{
  FUN_145a1dd24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1dd24 FUN_145a1dd24 body=112 status=ok
// SIG undefined FUN_145a1dd24(void)

void FUN_145a1dd24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7aa5c0;
  param_1[5] = &PTR_FUN_14b7ab0a0;
  param_1[6] = &PTR_LAB_14b7ab0e0;
  param_1[0x55] = &PTR_FUN_14b7ab130;
  param_1[0x56] = &PTR_FUN_14b7ab1b0;
  param_1[0x57] = &PTR_FUN_14b7ab1c0;
  if (param_1[0xfb] != 0) {
    FUN_1400020a8();
  }
  FUN_14110ad5a(param_1);
  return;
}



// FUNCTION 145a1dd94 FUN_145a1dd94 body=123 status=ok
// SIG undefined FUN_145a1dd94(void)

void FUN_145a1dd94(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x3b0);
  if (0 < (longlong)(int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x3a8);
    _Size = (longlong)(int)uVar2 * 8;
    uVar3 = 0;
    do {
      _Size = _Size - 8;
      if (*(longlong *)(lVar1 + uVar3 * 8) == param_2) {
        if (uVar2 - 1 != (int)uVar3) {
          memmove((void *)(lVar1 + uVar3 * 8),(void *)(lVar1 + uVar3 * 8 + 8),_Size);
          uVar2 = *(uint *)(param_1 + 0x3b0);
        }
        *(uint *)(param_1 + 0x3b0) = uVar2 - 1;
        FUN_145a1de10((longlong *)(param_1 + 0x3a8));
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 145a1de10 FUN_145a1de10 body=63 status=ok
// SIG undefined FUN_145a1de10(void)

void FUN_145a1de10(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a1de50(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145a1de50 FUN_145a1de50 body=93 status=ok
// SIG undefined FUN_145a1de50(void)

ulonglong FUN_145a1de50(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145a1deae FUN_145a1deae body=460 status=ok
// SIG undefined FUN_145a1deae(void)

void FUN_145a1deae(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a1e08a FUN_145a1e08a body=40 status=ok
// SIG undefined FUN_145a1e08a(void)

undefined8 FUN_145a1e08a(undefined8 param_1,int param_2)

{
  FUN_145a1e0b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1e0b2 FUN_145a1e0b2 body=225 status=ok
// SIG undefined FUN_145a1e0b2(void)

void FUN_145a1e0b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5dcc10;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a1e194(param_1 + 0x24);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a1e194 FUN_145a1e194 body=55 status=ok
// SIG undefined FUN_145a1e194(void)

void FUN_145a1e194(longlong *param_1)

{
  FUN_145a1e1cc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a1e1cc FUN_145a1e1cc body=376 status=ok
// SIG undefined FUN_145a1e1cc(void)

void FUN_145a1e1cc(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1403af08a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145a1e346 FUN_145a1e346 body=104 status=ok
// SIG undefined FUN_145a1e346(void)

undefined8 FUN_145a1e346(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145a1e3b0(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1e3b0 FUN_145a1e3b0 body=22 status=ok
// SIG undefined FUN_145a1e3b0(void)

ulonglong FUN_145a1e3b0(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cb75d40;
  if (DAT_14cb75d40 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb75d40 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb75d40 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb75d40 + 0x1fc) < (int)DAT_14cb75d40[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cb75d40 + 0x300))(DAT_14cb75d40);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 145a1e3c6 FUN_145a1e3c6 body=102 status=ok
// SIG undefined FUN_145a1e3c6(void)

void FUN_145a1e3c6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  uVar1 = FUN_145a1e508();
  local_20 = &local_28;
  FUN_145a1e42e(uVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1e42e FUN_145a1e42e body=217 status=ok
// SIG undefined FUN_145a1e42e(void)

int FUN_145a1e42e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_44;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  local_44 = 0;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    local_44 = 0;
    bVar9 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar7 = iVar6;
      lVar5 = (longlong)iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar3;
        if (lVar4 <= lVar5) break;
        iVar7 = iVar7 + 1;
        iVar8 = iVar7;
      } while (bVar9 == (plVar2[lVar5] == *(longlong *)*param_2));
      if (bVar9 == false) {
        if (local_44 != iVar6) {
          memmove(plVar2 + local_44,plVar2 + iVar6,(longlong)(iVar8 - iVar6) << 3);
        }
        local_44 = local_44 + (iVar8 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar8;
    } while (lVar5 < lVar4);
    *(int *)(param_1 + 1) = local_44;
    local_44 = iVar1 - local_44;
  }
  return local_44;
}



// FUNCTION 145a1e508 FUN_145a1e508 body=258 status=ok
// SIG undefined FUN_145a1e508(void)

undefined8 * FUN_145a1e508(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  if (DAT_14cae9500 != (undefined8 *)0x0) {
    return DAT_14cae9500;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9510);
  plVar5 = DAT_14cae9508;
  if (DAT_14cae9500 != (undefined8 *)0x0) goto LAB_145a1e5b4;
  puVar6 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar6 + 2));
  puVar6[3] = 0;
  puVar6[4] = 0;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a9c3ab0;
  plVar7[2] = (longlong)puVar6;
  plVar1 = DAT_14cae9508;
  DAT_14cae9500 = puVar6;
  if (plVar7 == DAT_14cae9508) {
    plVar5 = DAT_14cae9508;
    if (plVar7 == (longlong *)0x0) goto LAB_145a1e5b4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar5 = DAT_14cae9508;
    if ((int)*plVar1 != 0) goto LAB_145a1e5b4;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar3 = (int *)((longlong)plVar7 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar4 = *piVar3;
    UNLOCK();
    plVar1 = plVar7;
  }
  else {
    plVar5 = plVar7;
    if (DAT_14cae9508 == (longlong *)0x0) goto LAB_145a1e5b4;
    LOCK();
    plVar2 = DAT_14cae9508 + 1;
    DAT_14cae9508 = plVar7;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plVar5 = DAT_14cae9508;
    if ((int)*plVar2 != 0) goto LAB_145a1e5b4;
    (**(code **)*plVar1)(plVar1);
    LOCK();
    piVar3 = (int *)((longlong)plVar1 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar4 = *piVar3;
    UNLOCK();
  }
  plVar5 = DAT_14cae9508;
  if (iVar4 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar5 = DAT_14cae9508;
  }
LAB_145a1e5b4:
  DAT_14cae9508 = plVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9510);
  return DAT_14cae9500;
}



// FUNCTION 145a1e60a FUN_145a1e60a body=95 status=ok
// SIG undefined FUN_145a1e60a(void)

void FUN_145a1e60a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145a1e66a(param_1,param_2,1);
  return;
}



// FUNCTION 145a1e66a FUN_145a1e66a body=134 status=ok
// SIG undefined FUN_145a1e66a(void)

void FUN_145a1e66a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145a1e6f0 FUN_145a1e6f0 body=179 status=ok
// SIG undefined FUN_145a1e6f0(void)

void FUN_145a1e6f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (((*(char *)(param_1 + 0x30) == '\x01') && (DAT_14c98e618 != 0)) &&
     (*(longlong *)(DAT_14c98e618 + 0x20) != 0)) {
    puVar3 = *(undefined8 **)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar4 = puVar3[2];
      plVar5 = (longlong *)puVar3[3];
    }
    else {
      uVar4 = *puVar3;
      plVar5 = (longlong *)puVar3[1];
    }
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FUN_145a1e7a4(uVar4,param_1 + 0x148);
    FUN_145a1e7b2(uVar4,param_1);
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
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145a1e7a4 FUN_145a1e7a4 body=13 status=ok
// SIG undefined FUN_145a1e7a4(void)

void FUN_145a1e7a4(longlong param_1)

{
  FUN_145a1e8a0(*(longlong *)(param_1 + 0x40) + 8);
  return;
}



// FUNCTION 145a1e7b2 FUN_145a1e7b2 body=112 status=ok
// SIG undefined FUN_145a1e7b2(void)

void FUN_145a1e7b2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x208));
    FUN_145a1e834(param_1 + 0x230,&local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1e834 FUN_145a1e834 body=107 status=ok
// SIG undefined FUN_145a1e834(void)

void FUN_145a1e834(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140ef9edc(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 145a1e8a0 FUN_145a1e8a0 body=132 status=ok
// SIG undefined FUN_145a1e8a0(void)

void FUN_145a1e8a0(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14694f47e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145a1e930 FUN_145a1e930 body=129 status=ok
// SIG undefined FUN_145a1e930(void)

undefined8 * FUN_145a1e930(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab1cca0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfe;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return param_1;
}



// FUNCTION 145a1e9b2 FUN_145a1e9b2 body=265 status=ok
// SIG undefined FUN_145a1e9b2(void)

undefined * FUN_145a1e9b2(void)

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
              0x110) < DAT_14c9d5418) {
    FUN_144b3d300(&DAT_14c9d5418);
    if (DAT_14c9d5418 == -1) {
      FUN_145a1eabc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x17;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d5398,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46dd1);
      _Init_thread_footer(&DAT_14c9d5418);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d5398;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1eabc FUN_145a1eabc body=226 status=ok
// SIG undefined FUN_145a1eabc(void)

longlong * FUN_145a1eabc(longlong *param_1)

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
  pcVar13 = FUN_1462c67ea;
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



// FUNCTION 145a1eba4 FUN_145a1eba4 body=132 status=ok
// SIG undefined FUN_145a1eba4(void)

undefined1 * FUN_145a1eba4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145a1eba0;
}



// FUNCTION 145a1ec28 FUN_145a1ec28 body=136 status=ok
// SIG undefined FUN_145a1ec28(void)

code * FUN_145a1ec28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRectPrimitive";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a1eba4;
}



// FUNCTION 145a1ecb0 FUN_145a1ecb0 body=252 status=ok
// SIG undefined FUN_145a1ecb0(void)

void FUN_145a1ecb0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
  }
  FUN_145a1edae(param_1 + 0x28,&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  lVar4 = param_1 + 0x38;
  cVar3 = FUN_145a1ee04(lVar4,param_2);
  if (cVar3 != '\0') {
    local_38 = *param_2;
    plVar2 = (longlong *)param_2[1];
    local_30 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      FUN_1477fcfe0(lVar4,&local_38);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      FUN_1477fcfe0(lVar4);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145a1ed3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1edae FUN_145a1edae body=85 status=ok
// SIG undefined FUN_145a1edae(void)

void FUN_145a1edae(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_145a1ee98();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_145a1ef92(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x10) = *param_2;
    *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 145a1ee04 FUN_145a1ee04 body=147 status=ok
// SIG undefined FUN_145a1ee04(void)

bool FUN_145a1ee04(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)(int)param_1[1] == 0) {
    bVar10 = false;
  }
  else {
    plVar8 = (longlong *)*param_1;
    plVar6 = plVar8 + (longlong)(int)param_1[1] * 2;
    do {
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 == (longlong *)0x0) {
LAB_145a1ee5f:
        lVar9 = *param_2;
        lVar7 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_145a1ee5f;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        lVar7 = *plVar8;
        lVar9 = *param_2;
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
      bVar10 = lVar7 == lVar9;
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar6 && !bVar10);
  }
  return bVar10;
}



// FUNCTION 145a1ee98 FUN_145a1ee98 body=249 status=ok
// SIG undefined FUN_145a1ee98(void)

ulonglong FUN_145a1ee98(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar8 = (longlong *)plVar10[1];
      if (plVar8 == (longlong *)0x0) {
LAB_145a1ef36:
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_145a1ef36;
          LOCK();
          iVar5 = (int)plVar8[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar7 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_145a1ef3a:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_145a1ef3a;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar8 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (lVar7 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 145a1ef92 FUN_145a1ef92 body=132 status=ok
// SIG undefined FUN_145a1ef92(void)

void FUN_145a1ef92(longlong param_1,int param_2)

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



// FUNCTION 145a1f016 FUN_145a1f016 body=117 status=ok
// SIG undefined FUN_145a1f016(void)

void FUN_145a1f016(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x178), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_145a1f08c(0);
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_145a1f08c(*(undefined8 *)(param_1 + 0x170));
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
                    /* WARNING: Could not recover jumptable at 0x000145a1f087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a1f08c FUN_145a1f08c body=117 status=ok
// SIG undefined FUN_145a1f08c(void)

void FUN_145a1f08c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x6e0) = *param_2;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_145a1f102(0,&local_28);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1f102 FUN_145a1f102 body=142 status=ok
// SIG undefined FUN_145a1f102(void)

void FUN_145a1f102(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_1 + 0x6e0,local_60);
  FUN_1414f3eb8(local_50,param_1 + 0x28,&DAT_14cbced50,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1458291a6(param_1,local_50,param_2);
  FUN_14119d498(local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1f191 FUN_145a1f191 body=59 status=ok
// SIG undefined FUN_145a1f191(void)

void FUN_145a1f191(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a1f1cc(puVar1,param_1);
  *puVar1 = &PTR_FUN_149e5ba00;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  return;
}



// FUNCTION 145a1f1cc FUN_145a1f1cc body=94 status=ok
// SIG undefined FUN_145a1f1cc(void)

undefined8 * FUN_145a1f1cc(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_149e6bd00;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145a1f232 FUN_145a1f232 body=43 status=ok
// SIG undefined FUN_145a1f232(void)

undefined8 * FUN_145a1f232(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f7f4b0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 145a1f268 FUN_145a1f268 body=91 status=ok
// SIG undefined FUN_145a1f268(void)

undefined8 * FUN_145a1f268(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *param_1 = &PTR_FUN_14a533a00;
  param_1[5] = &PTR_FUN_14a533d20;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145a1f2cc FUN_145a1f2cc body=43 status=ok
// SIG undefined FUN_145a1f2cc(void)

undefined8 * FUN_145a1f2cc(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a5e4170;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145a1f302 FUN_145a1f302 body=40 status=ok
// SIG undefined FUN_145a1f302(void)

undefined8 * FUN_145a1f302(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_145cda522(param_1);
  *param_1 = &PTR_FUN_14a64ded0;
  return param_1;
}



// FUNCTION 145a1f336 FUN_145a1f336 body=40 status=ok
// SIG undefined FUN_145a1f336(void)

void FUN_145a1f336(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_FUN_14ab3a700;
  puVar1[1] = &PTR_LAB_14ab3a740;
  return;
}



// FUNCTION 145a1f366 FUN_145a1f366 body=43 status=ok
// SIG undefined FUN_145a1f366(void)

undefined8 * FUN_145a1f366(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14afb4250;
  param_1[5] = &PTR_FUN_14afb44f0;
  return param_1;
}



// FUNCTION 145a1f39e FUN_145a1f39e body=40 status=ok
// SIG undefined FUN_145a1f39e(void)

void FUN_145a1f39e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14afcc5a0;
  return;
}



// FUNCTION 145a1f3d2 FUN_145a1f3d2 body=40 status=ok
// SIG undefined FUN_145a1f3d2(void)

void FUN_145a1f3d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14afcde10;
  return;
}



// FUNCTION 145a1f402 FUN_145a1f402 body=43 status=ok
// SIG undefined FUN_145a1f402(void)

undefined8 * FUN_145a1f402(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14aff3540;
  return param_1;
}



// FUNCTION 145a1f436 FUN_145a1f436 body=43 status=ok
// SIG undefined FUN_145a1f436(void)

undefined8 * FUN_145a1f436(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14b0aee20;
  return param_1;
}



// FUNCTION 145a1f46a FUN_145a1f46a body=43 status=ok
// SIG undefined FUN_145a1f46a(void)

undefined8 * FUN_145a1f46a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14b0af100;
  return param_1;
}



// FUNCTION 145a1f4a4 FUN_145a1f4a4 body=88 status=ok
// SIG undefined FUN_145a1f4a4(void)

undefined8 * FUN_145a1f4a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b25e9c0;
  (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 0x12)])(param_1 + 0xb);
  (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 9)])(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1f4fc FUN_145a1f4fc body=55 status=ok
// SIG undefined FUN_145a1f4fc(void)

void FUN_145a1f4fc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456eb03e(param_1,iVar1);
  }
  FUN_145a1f533((longlong)iVar1 * 0x20 + *param_1);
  return;
}



// FUNCTION 145a1f533 FUN_145a1f533 body=47 status=ok
// SIG undefined FUN_145a1f533(void)

void FUN_145a1f533(undefined8 *param_1)

{
  FUN_140265f12();
  param_1[1] = &DAT_14cb83310;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b1828b0;
  return;
}



// FUNCTION 145a1f582 FUN_145a1f582 body=103 status=ok
// SIG undefined FUN_145a1f582(void)

ulonglong FUN_145a1f582(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145a1f5cc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145a1f5cc;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145a1f5ea FUN_145a1f5ea body=83 status=ok
// SIG undefined FUN_145a1f5ea(void)

void FUN_145a1f5ea(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x5c) = param_2;
    (**(code **)(*param_1 + 0x78))(param_1,param_2);
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000145a1f636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 145a1f640 FUN_145a1f640 body=86 status=ok
// SIG undefined FUN_145a1f640(void)

void FUN_145a1f640(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1458c7f24();
  if (cVar1 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x5c) = param_2;
    (**(code **)(*param_1 + 0x80))(param_1,param_2);
    FUN_145d7c4e6(param_1);
    return;
  }
  uVar2 = FUN_143f2ac96(param_1,0x17);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000145a1f68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 145a1f698 FUN_145a1f698 body=132 status=ok
// SIG undefined FUN_145a1f698(void)

void FUN_145a1f698(longlong param_1,int param_2)

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



// FUNCTION 145a1f72a FUN_145a1f72a body=40 status=ok
// SIG undefined FUN_145a1f72a(void)

void FUN_145a1f72a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b5251a0;
  return;
}



// FUNCTION 145a1f75e FUN_145a1f75e body=40 status=ok
// SIG undefined FUN_145a1f75e(void)

undefined8 * FUN_145a1f75e(undefined8 *param_1)

{
  FUN_140f05222();
  *param_1 = &PTR_FUN_14b52b170;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 145a1f786 FUN_145a1f786 body=40 status=ok
// SIG undefined FUN_145a1f786(void)

undefined8 FUN_145a1f786(undefined8 param_1,int param_2)

{
  FUN_145a1f7ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a1f7ae FUN_145a1f7ae body=136 status=ok
// SIG undefined FUN_145a1f7ae(void)

void FUN_145a1f7ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7fac10;
  param_1[5] = &PTR_FUN_14b7faed0;
  param_1[6] = &PTR_FUN_14b7faf10;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a1f836(param_1 + 0x14);
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145a1f86c(param_1);
  return;
}



// FUNCTION 145a1f836 FUN_145a1f836 body=53 status=ok
// SIG undefined FUN_145a1f836(void)

void FUN_145a1f836(longlong *param_1)

{
  FUN_145a1f97a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a1f86c FUN_145a1f86c body=151 status=ok
// SIG undefined FUN_145a1f86c(void)

void FUN_145a1f86c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2a8840;
  param_1[5] = &PTR_FUN_14b2a8b00;
  param_1[6] = &PTR_FUN_14b2a8b40;
  FUN_145a1f92e(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145a1f903(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a1f903 FUN_145a1f903 body=43 status=ok
// SIG undefined FUN_145a1f903(void)

void FUN_145a1f903(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140665564(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 145a1f92e FUN_145a1f92e body=76 status=ok
// SIG undefined FUN_145a1f92e(void)

void FUN_145a1f92e(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0xffffffffffffffff;
      if (*(char *)((longlong)puVar1 + -0xc) == '\x01') {
        *(undefined1 *)((longlong)puVar1 + -0xc) = 0;
      }
      if ((longlong *)puVar1[-6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-6] + 0x10))();
      }
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a1f97a FUN_145a1f97a body=316 status=ok
// SIG undefined FUN_145a1f97a(void)

void FUN_145a1f97a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = *(longlong **)(*local_68 + 0x60 + (longlong)iStack_4c * 0x78);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1fab8 FUN_145a1fab8 body=96 status=ok
// SIG undefined FUN_145a1fab8(void)

ulonglong FUN_145a1fab8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145a1fafb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145a1fafb;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145a1fb1e FUN_145a1fb1e body=103 status=ok
// SIG undefined FUN_145a1fb1e(void)

void FUN_145a1fb1e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x168);
    if (cVar2 != '\0') {
      plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x168);
      uVar3 = FUN_1458e8696(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145a1fb82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xa00))
                (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x2a0),uVar3,
                 *(code **)(*plVar1 + 0xa00));
      return;
    }
  }
  return;
}



// FUNCTION 145a1fb86 FUN_145a1fb86 body=51 status=ok
// SIG undefined FUN_145a1fb86(void)

void FUN_145a1fb86(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14480f766(&DAT_14cb7df98);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 145a1fbc6 FUN_145a1fbc6 body=40 status=ok
// SIG undefined FUN_145a1fbc6(void)

void FUN_145a1fbc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = &PTR_FUN_14ba70550;
  puVar1[1] = &PTR_FUN_14ba70590;
  return;
}



// FUNCTION 145a1fbf6 FUN_145a1fbf6 body=43 status=ok
// SIG undefined FUN_145a1fbf6(void)

undefined8 * FUN_145a1fbf6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140198756(param_1,uVar1);
  *param_1 = &PTR_FUN_14ba82510;
  return param_1;
}



// FUNCTION 145a1fc2e FUN_145a1fc2e body=40 status=ok
// SIG undefined FUN_145a1fc2e(void)

void FUN_145a1fc2e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14bcb3ac0;
  return;
}



// FUNCTION 145a1fc62 FUN_145a1fc62 body=40 status=ok
// SIG undefined FUN_145a1fc62(void)

void FUN_145a1fc62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14beac920;
  return;
}



// FUNCTION 145a1fc8a FUN_145a1fc8a body=265 status=ok
// SIG undefined FUN_145a1fc8a(void)

void FUN_145a1fc8a(longlong *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_968 [40];
  undefined1 local_940 [2320];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_968;
  uVar2 = FUN_140d27aa0();
  FUN_145a08c52(uVar2,0,0);
  thunk_FUN_145abfc80(param_1 + 0x5b8);
  FUN_145abfa6e(param_1 + 0x1b6);
  FUN_140457ffc(&DAT_14cb89d98);
  FUN_145abf6f2(param_1);
  (**(code **)(*param_1 + 0x1020))(param_1);
  memset(local_940,0,0x910);
  (**(code **)(param_1[0x1b5] + 0x58))(param_1 + 0x1b5,local_940);
  FUN_14023c33c(local_940);
  plVar3 = (longlong *)FUN_1403ca102(param_1);
  if (plVar3 != (longlong *)0x0) {
    bVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
    if (5 < bVar1) {
      FUN_145ac069c(param_1);
    }
  }
  if ((param_2 & param_3) == 1) {
    FUN_145a20136(param_1,1);
  }
  if ((local_30 ^ (ulonglong)auStack_968) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1fd94 thunk_FUN_145abfc80 body=5 status=ok
// SIG undefined thunk_FUN_145abfc80(void)

void thunk_FUN_145abfc80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141495bf6(param_1 + 0x1d0);
  FUN_141495bf6(param_1 + 0x1e0);
  FUN_141495bf6(param_1 + 0x1f0);
  FUN_141495bf6(param_1 + 0x200);
  FUN_141495bf6(param_1 + 0x210);
  if (0 < *(int *)(param_1 + 0x138)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      plVar1 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x130) + lVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x420))(plVar1,0);
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x138));
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_145abfd8e((longlong *)(param_1 + 0x130));
  }
  FUN_140585aac(param_1);
  FUN_145abfd4e(param_1 + 800);
  return;
}



// FUNCTION 145a1fda0 FUN_145a1fda0 body=230 status=ok
// SIG undefined FUN_145a1fda0(void)

void FUN_145a1fda0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0xab8) != (longlong *)0x0) {
    if (**(longlong **)(param_1 + 0xab8) != -1) {
      cVar5 = FUN_141107632(param_1);
      if (cVar5 != '\0') {
        FUN_14583b306(*(undefined8 *)(param_1 + 0xab8));
      }
      lVar4 = DAT_14cb259f8;
      if (DAT_14cb259f8 != 0) {
        local_28 = *(undefined8 *)(param_1 + 0xab8);
        local_20 = *(longlong *)(param_1 + 0xac0);
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        FUN_145a1fe88(lVar4,&local_28);
      }
    }
    *(undefined8 *)(param_1 + 0xab8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xac0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xac0) = 0;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1fe88 FUN_145a1fe88 body=159 status=ok
// SIG undefined FUN_145a1fe88(void)

void FUN_145a1fe88(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_28 = lVar3;
    FUN_145a1ff28(uVar4,&local_28);
    FUN_140072006(*(undefined8 *)(param_1 + 0x40));
    FUN_1456c1d4e(*(undefined8 *)(param_1 + 0x70));
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1ff28 FUN_145a1ff28 body=187 status=ok
// SIG undefined FUN_145a1ff28(void)

void FUN_145a1ff28(longlong param_1,longlong *param_2)

{
  int *piVar1;
  __uint64 _Var2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((__uint64 *)*param_2 != (__uint64 *)0x0) &&
     (_Var2 = *(__uint64 *)*param_2, _Var2 != 0xffffffffffffffff)) {
    AK::SoundEngine::UnregisterGameObj(_Var2);
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if (*(int *)((longlong)puVar3 + 0x1c) != 0) {
      FUN_14033a760(puVar3 + 2,0);
    }
    local_20 = param_2;
    FUN_145a1fff4(param_1 + 0x10);
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a1fff4 FUN_145a1fff4 body=246 status=ok
// SIG undefined FUN_145a1fff4(void)

void FUN_145a1fff4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      lVar10 = (longlong)iVar6;
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar7 = iVar6;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar8 = iVar4;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar7 = iVar7 + 1;
        plVar9 = plVar9 + 2;
        iVar8 = iVar7;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar8 - iVar6;
      if (bVar5 == false) {
        if (iVar12 != iVar6) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar4 << 4);
        }
        iVar12 = iVar12 + iVar4;
      }
      else {
        FUN_145a200ea(plVar2 + lVar10 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar6 = iVar8;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 145a200ea FUN_145a200ea body=75 status=ok
// SIG undefined FUN_145a200ea(void)

void FUN_145a200ea(longlong param_1,int param_2)

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



// FUNCTION 145a20136 FUN_145a20136 body=164 status=ok
// SIG undefined FUN_145a20136(void)

void FUN_145a20136(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbcfb28) {
      FUN_144b3d300(&DAT_14cbcfb28);
      if (DAT_14cbcfb28 == -1) {
        FUN_1446ddc76(&DAT_14cbcfb20,"SeamlessTravelStasis",1);
        _Init_thread_footer(&DAT_14cbcfb28);
      }
    }
    if ((*(longlong *)(param_1 + 0xf48) != 0) &&
       (*(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0xf48)) != 0)) {
      FUN_141459c0e(*(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 0xf48)),param_2,
                    DAT_14cbcfb20);
      return;
    }
  }
  return;
}



// FUNCTION 145a201f0 FUN_145a201f0 body=256 status=ok
// SIG undefined FUN_145a201f0(void)

void FUN_145a201f0(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar1 != 0) {
    local_28 = *(double *)(lVar1 + 0x128);
    dStack_20 = *(double *)(lVar1 + 0x130);
    local_18 = *(double *)(lVar1 + 0x138);
    dVar2 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
    if ((dVar2 != 1.0) || (NAN(dVar2))) {
      if (dVar2 < 9.99999993922529e-09) {
        local_18 = DAT_14c8464f0;
        local_28 = DAT_14c8464e0;
        dStack_20 = DAT_14c8464e8;
      }
      else {
        dVar2 = 1.0 / SQRT(dVar2);
        local_18 = local_18 * dVar2;
        dStack_20 = dStack_20 * dVar2;
        local_28 = local_28 * dVar2;
      }
    }
    else {
      local_18 = *(double *)(lVar1 + 0x138);
      local_28 = *(double *)(lVar1 + 0x128);
      dStack_20 = *(double *)(lVar1 + 0x130);
    }
    FUN_145a202f2(param_1 + 0x9410,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a202f2 FUN_145a202f2 body=72 status=ok
// SIG undefined FUN_145a202f2(void)

void FUN_145a202f2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_14136bb9a();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_145a2033a(uVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145a2033a FUN_145a2033a body=843 status=ok
// SIG undefined FUN_145a2033a(void)

void FUN_145a2033a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x1c8);
    pdVar8 = (double *)(lVar4 + 0x260);
    if (lVar4 == 0) {
      pdVar8 = (double *)&DAT_14c8464e0;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1c8);
    pdVar7 = (double *)(lVar4 + 0x260);
    if (lVar4 == 0) {
      pdVar7 = (double *)&DAT_14c8464e0;
    }
    dVar10 = *pdVar8 - *pdVar7;
    dVar11 = pdVar8[1] - pdVar7[1];
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar13 = dVar1 * dVar1 + dVar2 * dVar2;
    dVar14 = 0.0;
    if (dVar13 <= 9.99999993922529e-09) {
      dVar13 = 0.0;
    }
    else {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar1 = dVar1 * dVar13;
      dVar2 = dVar2 * dVar13;
      dVar13 = dVar13 * 0.0;
    }
    dVar15 = dVar10 * dVar10 + dVar11 * dVar11;
    if (9.99999993922529e-09 < dVar15) {
      dVar14 = 1.0 / SQRT(dVar15);
      dVar10 = dVar10 * dVar14;
      dVar11 = dVar11 * dVar14;
      dVar14 = dVar14 * 0.0;
    }
    lVar4 = FUN_1403ca227();
    local_a8[0] = 0;
    local_80 = 0;
    FUN_1456bb102(local_a8,*(undefined8 *)(param_1 + 0x78));
    FUN_1448729ea(lVar4 + 0x150,local_78,local_a8);
    fVar9 = (float)FUN_144a7b41a(local_78,0);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar6 = local_78;
      if (0x18 < local_60) {
        ppppuVar6 = (undefined8 ****)local_78[0];
      }
      (*pcVar3)(ppppuVar6);
    }
    fVar16 = (float)(dVar2 * dVar11 + dVar1 * dVar10 + dVar13 * dVar14);
    if (0x18 < local_60) {
      FUN_1400020a8(local_78[0]);
    }
    FUN_144a5ac3a(local_a8);
    fVar12 = fVar16;
    if (1.0 <= fVar16) {
      fVar12 = 1.0;
    }
    asinf((float)(~-(uint)(fVar16 < -1.0) & (uint)fVar12 | -(uint)(fVar16 < -1.0) & 0xbf800000));
    fVar9 = sinf(fVar9 * 0.5 * 0.017453292);
    uVar5 = 1;
    if (fVar9 < ABS(fVar16)) {
      local_a8[0] = 0;
      local_80 = 0;
      FUN_1456bb102(local_a8,*(undefined8 *)(param_1 + 0x78));
      FUN_1448729ea(lVar4 + 0x1a0,local_78,local_a8);
      fVar9 = (float)FUN_144a7b41a(local_78,0);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar6 = local_78;
        if (0x18 < local_60) {
          ppppuVar6 = (undefined8 ****)local_78[0];
        }
        (*pcVar3)(ppppuVar6);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
      FUN_144a5ac3a(local_a8);
      lVar4 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x48));
      uVar5 = 2;
      if (*(double *)(lVar4 + 0x6d0) - (double)*(float *)(param_1 + 0x5c) <= (double)fVar9)
      goto LAB_145a20553;
    }
    FUN_145a20686(param_1,uVar5);
  }
LAB_145a20553:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a20686 FUN_145a20686 body=128 status=ok
// SIG undefined FUN_145a20686(void)

void FUN_145a20686(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_140cf8432();
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xf9;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(char *)(param_1 + 0x80) = (char)param_2;
  FUN_145a20706(param_1 + 0x10,param_2);
  FUN_140f4014b(param_1,*(undefined1 *)(param_1 + 0x80));
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    uVar2 = FUN_1412dd104();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_145a207a8(uVar2,*(undefined1 *)(param_1 + 0x80));
      return;
    }
  }
  return;
}



// FUNCTION 145a20706 FUN_145a20706 body=162 status=ok
// SIG undefined FUN_145a20706(void)

void FUN_145a20706(longlong *param_1,undefined4 param_2)

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
        goto LAB_145a20793;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a20793:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145a207a8 FUN_145a207a8 body=176 status=ok
// SIG undefined FUN_145a207a8(void)

void FUN_145a207a8(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe;
  *(undefined1 *)(param_1 + 0x50) = param_2;
  FUN_1458b913c();
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
      lVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(param_1 + 0x48);
        if (*(longlong *)(lVar4 + 0x1f0) == 0) {
          puVar5 = (undefined8 *)(lVar4 + 0x458);
        }
        else {
          puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar5;
        lVar4 = FUN_144a61814(uVar2,puVar1);
        if (lVar4 != 0) {
          FUN_1405a424c(uVar2,*puVar1);
        }
        *puVar1 = 0;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))(*(longlong **)(param_1 + 0x30),0);
  }
  FUN_140f4014b(param_1 + 0x10,*(undefined1 *)(param_1 + 0x50));
  return;
}



// FUNCTION 145a20858 FUN_145a20858 body=320 status=ok
// SIG undefined FUN_145a20858(void)

undefined4 * FUN_145a20858(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145a20a9c(param_1,local_40);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_38 = *puVar1;
  local_38[1] = uVar3;
  local_38[2] = uVar4;
  local_38[3] = uVar5;
  *(undefined8 *)(local_38 + 4) = *puVar2;
  lVar11 = puVar2[1];
  *(longlong *)(local_38 + 6) = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_38[8] = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = FUN_1448eb174(local_38,0x10,0);
  cVar6 = FUN_145a2099a(param_1,uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar8 < 4) {
      iVar10 = 1;
    }
    else {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_38[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_38[8] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_141459c64(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2099a FUN_145a2099a body=145 status=ok
// SIG undefined FUN_145a2099a(void)

undefined8 FUN_145a2099a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar12 = FUN_145a20a2c(), iVar12 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
    plVar4 = *(longlong **)(puVar3 + 6);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar3[4] = param_3[4];
    puVar3[5] = uVar9;
    puVar3[6] = uVar10;
    puVar3[7] = uVar11;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_14707398e(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 145a20a2c FUN_145a20a2c body=112 status=ok
// SIG undefined FUN_145a20a2c(void)

int FUN_145a20a2c(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 145a20a9c FUN_145a20a9c body=243 status=ok
// SIG undefined FUN_145a20a9c(void)

int * FUN_145a20a9c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145a20b90 FUN_145a20b90 body=1688 status=ok
// SIG undefined FUN_145a20b90(void)

void FUN_145a20b90(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 local_98;
  longlong *plStack_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  (**(code **)(*param_1 + 0x90))();
  uVar4 = DAT_14cb94c80;
  uVar2 = FUN_141115664();
  lVar3 = FUN_140c48046(param_1 + 0x10,uVar2,uVar4,0);
  if (lVar3 != 0) {
    local_98 = 0;
    uVar4 = FUN_1411157a2();
    lVar5 = FUN_140c47e50(lVar3,uVar4,&local_98);
    if (lVar5 != 0) {
      FUN_14054d68c(lVar5 + 0x80,param_1 + 0x62);
      *(longlong *)(lVar5 + 0x2f0) = param_1[2];
      *(undefined1 *)(lVar5 + 0x331) = 1;
    }
    local_98 = 0;
    uVar4 = FUN_145a2122a();
    lVar6 = FUN_140c47e50(lVar3,uVar4,&local_98);
    if (lVar6 != 0) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = (longlong *)0x0;
      if (lVar5 == 0) {
        uStack_b0 = 0;
        local_a8 = (longlong *)0x0;
        plVar8 = local_a8;
      }
      else {
        FUN_14111569e(lVar5,&local_98);
        uStack_b0 = local_98;
        plVar8 = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar7 = *local_a8;
            local_a8 = plVar8;
            (**(code **)(lVar7 + 0x10))();
            plVar8 = local_a8;
          }
          local_a8 = plVar8;
          plVar8 = local_a8;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_90 + 0x10))();
              plVar8 = local_a8;
            }
          }
        }
      }
      local_a8 = plVar8;
      FUN_141115702(&local_98,&local_b8);
      FUN_1403719a4(lVar6 + 0x80,&local_98);
      FUN_144a2da94(&local_98);
    }
    uVar4 = FUN_140a48832();
    lVar6 = FUN_140c483dc(lVar3,uVar4,&DAT_14cb94c90,0);
    if (lVar6 != 0) {
      local_98 = 0;
      uVar4 = FUN_140c48226();
      lVar7 = FUN_140c47e50(lVar6,uVar4,&local_98);
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x7b) = 0;
        *(undefined4 *)(lVar7 + 0x19c) = 2;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = (longlong *)0x0;
        if (lVar5 == 0) {
          uStack_d0 = 0;
          local_c8 = (longlong *)0x0;
        }
        else {
          FUN_14111569e(lVar5,&local_98);
          uStack_d0 = local_98;
          local_c8 = plStack_90;
        }
        FUN_141115702(&local_98,&local_d8);
        FUN_1403719a4(lVar7 + 0x1e8,&local_98);
        FUN_144a2da94(&local_98);
        *(undefined2 *)(lVar7 + 0x78) = 1;
        *(undefined1 *)(lVar7 + 0x1a3) = 1;
      }
      local_98 = 0;
      uVar4 = FUN_145a21264();
      lVar7 = FUN_140c47e50(lVar6,uVar4,&local_98);
      if (lVar7 != 0) {
        FUN_144983130(lVar7 + 0xb8,param_1 + 0x57);
        local_f0 = 0;
        if (lVar5 == 0) {
          local_e0 = (longlong *)0x0;
          local_e8 = 0;
        }
        else {
          FUN_14111569e(lVar5,&local_98);
          local_e0 = plStack_90;
          local_e8 = local_98;
        }
        FUN_141115702(&local_98);
        FUN_1403719a4(lVar7 + 0x80,&local_98);
        FUN_144a2da94(&local_98);
        FUN_141459e2c(lVar7 + 0xf0,param_1 + 0x33);
      }
      local_98 = 0;
      uVar4 = FUN_140c4800c();
      lVar7 = FUN_140c47e50(lVar6,uVar4,&local_98);
      if (lVar7 != 0) {
        FUN_144983130(lVar7 + 0x80,param_1 + 0x57);
        if (*(char *)(lVar7 + 0xb8) != '\x03') {
          *(undefined1 *)(lVar7 + 0xb8) = 3;
          FUN_1403a3fe6(lVar7);
        }
      }
      local_98 = 0;
      uVar4 = FUN_140ffa79a();
      lVar6 = FUN_140c47e50(lVar6,uVar4,&local_98);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x548) = *(undefined4 *)((longlong)param_1 + 0x2b4);
        *(undefined8 *)(lVar6 + 0x540) = *(undefined8 *)((longlong)param_1 + 0x2ac);
        *(undefined2 *)(lVar6 + 0x71) = 0x101;
        *(undefined1 *)(lVar6 + 0x79) = 0;
        *(undefined2 *)(lVar6 + 0x7b) = 0;
        *(undefined1 *)(lVar6 + 0x78) = *(undefined1 *)((longlong)param_1 + 0x2a9);
      }
    }
    uVar4 = FUN_140a48832();
    lVar6 = FUN_140c483dc(lVar3,uVar4,&DAT_14cb94c88,0);
    if (lVar6 != 0) {
      local_98 = 0;
      local_110 = lVar3;
      uVar4 = FUN_1408d77ac();
      plVar8 = (longlong *)FUN_140c47e50(lVar6,uVar4,&local_98);
      if (plVar8 != (longlong *)0x0) {
        *(undefined1 *)(plVar8 + 0x20) = 1;
        *(undefined1 *)(plVar8 + 0x1f) = 1;
        FUN_140440628(&local_98,&DAT_14cb94c78,0);
        FUN_1403719a4(plVar8 + 0x10,&local_98);
        FUN_144a2da94(&local_98);
        *(undefined1 *)(plVar8 + 0x42) = 1;
        FUN_140440628(&local_98,&DAT_14cb94c78,0);
        FUN_1403719a4(plVar8 + 0x32,&local_98);
        FUN_144a2da94(&local_98);
        (**(code **)(*plVar8 + 0x90))(plVar8);
      }
      local_98 = 0;
      uVar4 = FUN_140ffacf0();
      lVar3 = FUN_140c47e50(local_110,uVar4,&local_98);
      if (lVar3 != 0) {
        FUN_140e7790a(lVar3 + 0x90,param_1 + 0x5e);
      }
      local_98 = 0;
      uVar4 = FUN_140c48226();
      lVar3 = FUN_140c47e50(lVar6,uVar4,&local_98);
      if (lVar3 != 0) {
        local_108 = 0;
        if (lVar5 == 0) {
          local_f8 = (longlong *)0x0;
          local_100 = 0;
        }
        else {
          FUN_14111569e(lVar5,&local_98);
          local_f8 = plStack_90;
          local_100 = local_98;
        }
        FUN_141115702(&local_98);
        FUN_1403719a4(lVar3 + 0x1e8,&local_98);
        FUN_144a2da94(&local_98);
      }
      local_98 = 0;
      uVar4 = FUN_140c4800c();
      lVar3 = FUN_140c47e50(lVar6,uVar4,&local_98);
      if (lVar3 != 0) {
        FUN_144983130(lVar3 + 0x80,param_1 + 0x57);
        if (*(char *)(lVar3 + 0xb8) != (char)param_1[0x61]) {
          *(char *)(lVar3 + 0xb8) = (char)param_1[0x61];
          FUN_1403a3fe6(lVar3);
        }
      }
      local_98 = 0;
      uVar4 = FUN_140ffa79a();
      lVar3 = FUN_140c47e50(lVar6,uVar4,&local_98);
      if (lVar3 != 0) {
        *(char *)(lVar3 + 0x1c) = (char)param_1[0x55];
        *(undefined8 *)(lVar3 + 0x540) = *(undefined8 *)((longlong)param_1 + 0x2ac);
        *(undefined4 *)(lVar3 + 0x548) = *(undefined4 *)((longlong)param_1 + 0x2b4);
        *(undefined1 *)(lVar3 + 0x78) = *(undefined1 *)((longlong)param_1 + 0x2a9);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a2122a FUN_145a2122a body=57 status=ok
// SIG undefined FUN_145a2122a(void)

void FUN_145a2122a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21228 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21228 = FUN_140002ddd(FUN_1464325ec,uVar1,L"GbxBrainAspectSettings_ClaimCover");
  }
  return;
}


