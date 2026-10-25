// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e2bbf4 FUN_147e2bbf4 body=309 status=ok
// SIG undefined FUN_147e2bbf4(void)

void FUN_147e2bbf4(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  FUN_144aa17a4();
  lVar3 = FUN_146419df4();
  if (lVar3 != 0) {
    FUN_14485c47a(param_1 + 8,lVar3);
    uVar5 = -*(int *)(lVar3 + 0x5c) & (*(int *)(lVar3 + 0x58) + *(int *)(lVar3 + 0x5c)) - 1U;
    puVar4 = (undefined8 *)FUN_14001cc68((longlong)(int)(uVar5 + (uVar5 == 0)),0);
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    lVar3 = *param_2;
    FUN_1479ed704(puVar4,lVar3);
    *puVar4 = &PTR_FUN_14ab63bf0;
    *(undefined1 *)(puVar4 + 0x3a) = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    *(undefined4 *)(puVar4 + 0x3e) = 0;
    *(undefined4 *)((longlong)puVar4 + 500) = 0;
    *(undefined4 *)(puVar4 + 0x3f) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1fc) = 0x3ff00000;
    puVar4[0x40] = 0;
    puVar4[0x41] = 0;
    puVar4[0x42] = 0;
    puVar4[0x43] = 0;
    puVar4[0x44] = 0x3ff0000000000000;
    puVar4[0x45] = 0x3ff0000000000000;
    puVar4[0x46] = 0x3ff0000000000000;
    puVar4[0x47] = 0;
    uVar1 = DAT_14c8464e8;
    puVar4[0x48] = DAT_14c8464e0;
    puVar4[0x49] = uVar1;
    puVar4[0x4a] = DAT_14c8464f0;
    *(bool *)(puVar4 + 0x3a) = *(int *)(lVar3 + 0x6fc) != 0;
    puVar7 = (undefined8 *)(lVar3 + 0x710);
    puVar8 = puVar4 + 0x3c;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar1 = *(undefined8 *)(lVar3 + 0x198);
    uVar2 = *(undefined8 *)(lVar3 + 0x1a0);
    puVar4[0x4a] = *(undefined8 *)(lVar3 + 0x1a8);
    puVar4[0x48] = uVar1;
    puVar4[0x49] = uVar2;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 147e2bd2a FUN_147e2bd2a body=303 status=ok
// SIG undefined FUN_147e2bd2a(void)

void FUN_147e2bd2a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 147e2be5a FUN_147e2be5a body=132 status=ok
// SIG undefined FUN_147e2be5a(void)

void FUN_147e2be5a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1cc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1cc) = iVar6;
    FUN_147e2787a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e2bee0 FUN_147e2bee0 body=90 status=ok
// SIG undefined FUN_147e2bee0(void)

void FUN_147e2bee0(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1cc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
    if (*(void **)((longlong)param_1 + 0x1c0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x1c0),
              (longlong)*(int *)((longlong)param_1 + 0x1c8) * 0x38);
      FUN_1446efa72((longlong)param_1 + 0x1c0,0,0,0x38);
      return;
    }
  }
  return;
}



// FUNCTION 147e2bf3a FUN_147e2bf3a body=96 status=ok
// SIG undefined FUN_147e2bf3a(void)

void FUN_147e2bf3a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 147e2c00a FUN_147e2c00a body=442 status=ok
// SIG undefined FUN_147e2c00a(void)

undefined8 FUN_147e2c00a(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_188 [32];
  undefined1 local_168 [128];
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  char local_d0;
  undefined7 uStack_cf;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_3 == -1) {
    if ((longlong)(int)param_1[6] == 0) {
      param_3 = -1;
    }
    else {
      param_3 = *(int *)(param_1[5] + -4 + (longlong)(int)param_1[6] * 4);
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (param_2 < iVar1) goto LAB_147e2c04e;
  (**(code **)(*param_1 + 0x28))(param_1,&local_d0,param_3);
  if (local_d0 == '\0') goto LAB_147e2c04e;
  plVar2 = TlsGetValue(*(DWORD *)((longlong)param_1 + 0x7c));
  if (plVar2 == (longlong *)0x0) {
    FUN_1437ef332(param_1,param_2,param_3,param_4);
    goto LAB_147e2c04e;
  }
  FUN_144bdf360(&local_d0);
  if ((int)plVar2[1] == 0) {
    _Str = L"";
LAB_147e2c0db:
    local_e8 = 0;
    sVar3 = wcslen(_Str);
    FUN_1449b853c(local_168,_Str,sVar3 & 0xffffffff,1);
  }
  else {
    _Str = (wchar_t *)*plVar2;
    local_e8 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_147e2c0db;
    local_e0 = 0;
    local_d8 = 0;
  }
  FUN_144bdff50(&local_d0,&DAT_14ab676e8,param_4,local_e0);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1437ef332(param_1,param_2,param_3,CONCAT71(uStack_cf,local_d0));
  FUN_144bdf2f0(&local_d0);
LAB_147e2c04e:
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2c1c6 FUN_147e2c1c6 body=90 status=ok
// SIG undefined FUN_147e2c1c6(void)

void FUN_147e2c1c6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  do {
    if (param_1 == 0) {
      return;
    }
    lVar2 = 0;
    do {
      iVar1 = FUN_144bfb930(*(undefined8 *)(param_1 + 0x58),
                            *(undefined8 *)((longlong)&PTR_s_common_visualize_vdb_14ab677c0 + lVar2)
                           );
      if (iVar1 == 0) goto LAB_147e2c20c;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x10);
    FUN_144bdc030(param_1,DAT_14cb1b428,*(undefined1 *)(DAT_14cb1b428 + 0x20));
LAB_147e2c20c:
    param_1 = *(longlong *)(param_1 + 0xf0);
  } while( true );
}



// FUNCTION 147e2c220 FUN_147e2c220 body=46 status=ok
// SIG undefined FUN_147e2c220(void)

void FUN_147e2c220(longlong param_1)

{
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0xf0)) {
    FUN_144bdc1a0(param_1,DAT_14cb1b428);
  }
  return;
}



// FUNCTION 147e2c24e FUN_147e2c24e body=22 status=ok
// SIG undefined FUN_147e2c24e(void)

undefined8 FUN_147e2c24e(undefined8 param_1,undefined8 param_2)

{
  FUN_1437ef1fe(param_2);
  return 1;
}



// FUNCTION 147e2c264 FUN_147e2c264 body=193 status=ok
// SIG undefined FUN_147e2c264(void)

void FUN_147e2c264(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 *param_5,char param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_48 [32];
  undefined2 local_28 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_5;
  *(undefined1 *)(param_1 + 2) = param_4;
  uVar3 = 1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2,local_28);
    uVar3 = local_28[0];
  }
  *(undefined2 *)((longlong)param_1 + 0x1e) = uVar3;
  param_1[8] = 0;
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[9] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if ((param_6 != '\0') &&
     (*(undefined4 *)(param_1 + 7) = 0, *(int *)((longlong)param_1 + 0x3c) != 0)) {
    FUN_14117a55c(param_1 + 4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2c326 FUN_147e2c326 body=59 status=ok
// SIG undefined FUN_147e2c326(void)

void FUN_147e2c326(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3;
    do {
      uVar1 = FUN_147e2c362(param_1 + -0x18);
      *param_2 = uVar1;
      param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 147e2c362 FUN_147e2c362 body=209 status=ok
// SIG undefined FUN_147e2c362(void)

longlong FUN_147e2c362(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 < 1) {
    lVar2 = FUN_14001cc68(0x58,0x10);
    *(undefined8 *)(lVar2 + 0x14) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0x200000000;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    FUN_1446f470e(local_28,L"HavokTask",1);
    local_30 = 1;
    local_38 = local_28;
    FUN_147e2c264(lVar2,0,0,0x40);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + -8 + (longlong)iVar1 * 8);
    *(int *)(param_1 + 0x78) = iVar1 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2c434 FUN_147e2c434 body=59 status=ok
// SIG undefined FUN_147e2c434(void)

void FUN_147e2c434(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      FUN_14117a5a6(param_1 + -0x18,*param_2);
      param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 147e2c470 FUN_147e2c470 body=44 status=ok
// SIG undefined FUN_147e2c470(void)

void FUN_147e2c470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147e2c264(param_2,param_3,param_1,param_4,param_1 + 0x26c,0);
  return;
}



// FUNCTION 147e2c49c FUN_147e2c49c body=103 status=ok
// SIG undefined FUN_147e2c49c(void)

void FUN_147e2c49c(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_28 = param_2;
  FUN_147e2cd0a(param_3 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147e2c4f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2c504 FUN_147e2c504 body=1276 status=ok
// SIG undefined FUN_147e2c504(void)

void FUN_147e2c504(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,int param_5)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  longlong *plVar6;
  longlong *plVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_588 [36];
  uint local_564;
  LPCRITICAL_SECTION local_560;
  undefined1 local_558 [512];
  undefined1 *local_358;
  undefined8 local_350;
  undefined1 *local_348;
  undefined1 *local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_588;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  if (param_3 == 1) {
    lVar22 = *param_2;
    *(undefined1 *)(lVar22 + 0x50) = 1;
    if (*(longlong *)(lVar22 + 0x48) == 0) {
      FUN_1437ef528();
    }
    goto LAB_147e2c9b2;
  }
  local_358 = (undefined1 *)0x0;
  local_350 = 0x4000000000;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  if (param_3 < 0x41) {
    if (param_3 != 0) goto LAB_147e2c597;
  }
  else {
    FUN_147e2d3f2(local_558);
LAB_147e2c597:
    uVar18 = (ulonglong)param_3;
    local_564 = param_3;
    local_560 = lpCriticalSection;
    do {
      lVar22 = *param_2;
      *(undefined1 *)(lVar22 + 0x50) = 1;
      lVar21 = (longlong)(int)local_350;
      uVar2 = (int)local_350 + 1;
      local_350 = CONCAT44(local_350._4_4_,uVar2);
      if (local_350._4_4_ < uVar2) {
        FUN_147e2d4d6(local_558);
      }
      puVar4 = local_358;
      if (local_358 == (undefined1 *)0x0) {
        puVar4 = local_558;
      }
      *(longlong *)(puVar4 + lVar21 * 8) = lVar22;
      param_2 = (longlong *)((longlong)param_2 + (longlong)param_5);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    iVar13 = (int)local_350;
    lVar22 = (longlong)(int)local_350;
    if (1 < lVar22) {
      puVar4 = local_358;
      if (local_358 == (undefined1 *)0x0) {
        puVar4 = local_558;
      }
      memset(local_338,0,0x2f0);
      local_340 = puVar4 + lVar22 * 8 + -8;
      local_348 = puVar4;
      fVar24 = logf((float)iVar13);
      local_338[0] = (int)(longlong)(fVar24 + fVar24);
      ppuVar5 = &local_348;
      do {
        plVar7 = (longlong *)*ppuVar5;
        plVar3 = (longlong *)ppuVar5[1];
        iVar13 = *(int *)(ppuVar5 + 2);
        iVar8 = (int)((ulonglong)((longlong)plVar3 - (longlong)plVar7) >> 3);
        uVar18 = (ulonglong)(iVar8 + 1);
        plVar11 = plVar3;
        plVar16 = plVar7;
        if (iVar13 != 0) {
LAB_147e2c68d:
          if (8 < (int)(uint)uVar18) {
            uVar2 = (uint)uVar18 >> 1;
            lVar22 = plVar7[uVar2];
            plVar7[uVar2] = *plVar7;
            *plVar7 = lVar22;
            plVar17 = plVar11 + 1;
            plVar6 = plVar7;
            do {
              plVar1 = plVar6 + 1;
              plVar12 = plVar6 + 1;
              do {
                plVar6 = plVar12;
                plVar20 = plVar1;
                if (plVar11 < plVar6) break;
                plVar1 = plVar20 + 1;
                plVar12 = plVar6 + 1;
              } while (*(byte *)(*plVar7 + 0x10) <= *(byte *)(*plVar6 + 0x10));
              plVar1 = plVar17 + -2;
              do {
                plVar12 = plVar17;
                plVar19 = plVar1;
                plVar17 = plVar12 + -1;
                if (plVar17 <= plVar7) break;
                plVar1 = plVar19 + -1;
              } while (*(byte *)(*plVar17 + 0x10) <= *(byte *)(*plVar7 + 0x10));
              if (plVar17 < plVar6) goto LAB_147e2c71d;
              lVar22 = *plVar6;
              *plVar6 = *plVar17;
              *plVar17 = lVar22;
            } while( true );
          }
          if (plVar7 < plVar11) {
            do {
              plVar3 = plVar7;
              if (plVar7 + 1 <= plVar11) {
                plVar16 = plVar7 + 1;
                lVar22 = *plVar7;
                plVar17 = plVar7;
                do {
                  plVar3 = plVar16;
                  lVar21 = *plVar16;
                  if (*(byte *)(lVar22 + 0x10) <= *(byte *)(*plVar16 + 0x10)) {
                    plVar3 = plVar17;
                    lVar21 = lVar22;
                  }
                  plVar16 = plVar16 + 1;
                  lVar22 = lVar21;
                  plVar17 = plVar3;
                } while (plVar16 <= plVar11);
              }
              lVar22 = *plVar3;
              *plVar3 = *plVar11;
              *plVar11 = lVar22;
              plVar11 = plVar11 + -1;
            } while (plVar7 < plVar11);
          }
          goto LAB_147e2c94c;
        }
LAB_147e2c7b0:
        iVar13 = (int)uVar18;
        if (iVar13 != 0) {
          iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
          iVar15 = iVar8;
joined_r0x000147e2c7d5:
          do {
            iVar10 = iVar8 * 2 + 1;
            if (iVar10 < iVar13) {
              iVar14 = iVar8 * 2 + 2;
              if ((iVar14 < iVar13) &&
                 (*(byte *)(plVar7[iVar14] + 0x10) <= *(byte *)(plVar7[iVar10] + 0x10))) {
                iVar10 = iVar14;
              }
              lVar22 = plVar7[iVar8];
              if (*(byte *)(plVar7[iVar10] + 0x10) < *(byte *)(lVar22 + 0x10)) {
                plVar7[iVar8] = plVar7[iVar10];
                plVar7[iVar10] = lVar22;
                iVar8 = iVar10;
                goto joined_r0x000147e2c7d5;
              }
            }
            bVar23 = iVar15 != 0;
            iVar8 = iVar15 + -1;
            iVar15 = iVar8;
          } while (bVar23);
          if (1 < iVar13) {
            lVar22 = *plVar7;
            *plVar7 = plVar7[uVar18 - 1];
            plVar7[uVar18 - 1] = lVar22;
            if (iVar13 != 2) {
              do {
                uVar9 = uVar18 - 1;
                iVar13 = 0;
                iVar15 = 1;
                iVar8 = 0;
                do {
                  iVar13 = iVar13 + 2;
                  iVar10 = iVar15;
                  if (((longlong)iVar13 < (longlong)uVar9) &&
                     (*(byte *)(plVar7[iVar13] + 0x10) <= *(byte *)(plVar7[iVar15] + 0x10))) {
                    iVar10 = iVar13;
                  }
                  lVar22 = plVar7[iVar8];
                  if (*(byte *)(lVar22 + 0x10) <= *(byte *)(plVar7[iVar10] + 0x10)) break;
                  plVar7[iVar8] = plVar7[iVar10];
                  plVar7[iVar10] = lVar22;
                  iVar13 = iVar10 * 2;
                  iVar15 = iVar10 * 2 + 1;
                  iVar8 = iVar10;
                } while ((longlong)iVar15 < (longlong)uVar9);
                lVar22 = *plVar7;
                *plVar7 = plVar7[uVar18 - 2];
                plVar7[uVar18 - 2] = lVar22;
                uVar18 = uVar9;
              } while (2 < uVar9);
            }
          }
        }
LAB_147e2c94c:
        ppuVar5 = ppuVar5 + -3;
      } while (&local_348 <= ppuVar5);
    }
    lpCriticalSection = local_560;
    uVar18 = 1;
    if (1 < (int)local_564) {
      uVar18 = (ulonglong)local_564;
    }
    uVar9 = 0;
    do {
      puVar4 = local_358;
      if (local_358 == (undefined1 *)0x0) {
        puVar4 = local_558;
      }
      if (*(longlong *)(*(longlong *)(puVar4 + uVar9 * 8) + 0x48) == 0) {
        FUN_1437ef528();
      }
      uVar9 = uVar9 + 1;
    } while (uVar18 != uVar9);
  }
  if (local_358 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_147e2c9b2:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147e2c71d:
  lVar22 = *plVar7;
  *plVar7 = *plVar17;
  *plVar17 = lVar22;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar19 - (longlong)plVar16 < (longlong)plVar3 - (longlong)plVar20) {
    if (plVar6 < plVar11) {
      *ppuVar5 = (undefined1 *)plVar6;
      ppuVar5[1] = (undefined1 *)plVar11;
      *(int *)(ppuVar5 + 2) = iVar13;
      ppuVar5 = ppuVar5 + 3;
    }
    plVar20 = plVar7;
    plVar3 = plVar19;
    if (plVar17 <= plVar7 + 1) goto LAB_147e2c94c;
  }
  else {
    if (plVar7 + 1 < plVar17) {
      *ppuVar5 = (undefined1 *)plVar7;
      ppuVar5[1] = (undefined1 *)plVar12;
      *(int *)(ppuVar5 + 2) = iVar13;
      ppuVar5 = ppuVar5 + 3;
    }
    plVar7 = plVar6;
    plVar12 = plVar11;
    plVar3 = plVar11;
    if (plVar11 <= plVar6) goto LAB_147e2c94c;
  }
  iVar8 = (int)((ulonglong)((longlong)plVar3 - (longlong)plVar20) >> 3);
  uVar18 = (ulonglong)(iVar8 + 1);
  plVar11 = plVar12;
  plVar16 = plVar20;
  if (iVar13 == 0) goto LAB_147e2c7b0;
  goto LAB_147e2c68d;
}



// FUNCTION 147e2ca02 FUN_147e2ca02 body=212 status=ok
// SIG undefined FUN_147e2ca02(void)

void FUN_147e2ca02(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x400000000;
  if (0 < (int)param_3) {
    uVar6 = 0;
    do {
      uVar2 = local_40;
      lVar1 = *(longlong *)(param_2 + uVar6 * 8);
      lVar5 = (longlong)(int)local_40;
      uVar3 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,uVar3);
      if (local_40._4_4_ < uVar3) {
        FUN_14476a5c8(local_68,uVar2 & 0xffffffff);
      }
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_68;
      }
      lVar1 = *(longlong *)(lVar1 + 0x48);
      *(longlong *)(puVar4 + lVar5 * 8) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_68,0xff);
  FUN_14588b8d6(local_68);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2cad8 FUN_147e2cad8 body=1 status=ok
// SIG undefined FUN_147e2cad8(void)

void FUN_147e2cad8(void)

{
  return;
}



// FUNCTION 147e2cada FUN_147e2cada body=1 status=ok
// SIG undefined FUN_147e2cada(void)

void FUN_147e2cada(void)

{
  return;
}



// FUNCTION 147e2cadc FUN_147e2cadc body=44 status=ok
// SIG undefined FUN_147e2cadc(void)

undefined8 FUN_147e2cadc(undefined8 param_1,int param_2)

{
  FUN_144be5f30();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e2cb08 FUN_147e2cb08 body=26 status=ok
// SIG undefined FUN_147e2cb08(void)

undefined8 FUN_147e2cb08(longlong param_1,undefined8 param_2)

{
  FUN_144bf92a0(param_1 + -0x18);
  return param_2;
}



// FUNCTION 147e2cb22 FUN_147e2cb22 body=51 status=ok
// SIG undefined FUN_147e2cb22(void)

longlong FUN_147e2cb22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_1414352ec(param_1);
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e2cb68 FUN_147e2cb68 body=3 status=ok
// SIG undefined FUN_147e2cb68(void)

undefined8 FUN_147e2cb68(void)

{
  return 0;
}



// FUNCTION 147e2cb6c FUN_147e2cb6c body=51 status=ok
// SIG undefined FUN_147e2cb6c(void)

longlong FUN_147e2cb6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_1415c35ca(param_1);
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e2cbb0 FUN_147e2cbb0 body=45 status=ok
// SIG undefined FUN_147e2cbb0(void)

undefined8 * FUN_147e2cbb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e2cbde FUN_147e2cbde body=71 status=ok
// SIG undefined FUN_147e2cbde(void)

undefined8 * FUN_147e2cbde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab678f0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2cc26 FUN_147e2cc26 body=96 status=ok
// SIG undefined FUN_147e2cc26(void)

void FUN_147e2cc26(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 147e2cc86 FUN_147e2cc86 body=131 status=ok
// SIG undefined FUN_147e2cc86(void)

void FUN_147e2cc86(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147e2cd0a FUN_147e2cd0a body=126 status=ok
// SIG undefined FUN_147e2cd0a(void)

void FUN_147e2cd0a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147e2cd88(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + lVar5 * 8) = *param_2;
  return;
}



// FUNCTION 147e2cd88 FUN_147e2cd88 body=124 status=ok
// SIG undefined FUN_147e2cd88(void)

void FUN_147e2cd88(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147e2cc86(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e2ce06 FUN_147e2ce06 body=31 status=ok
// SIG undefined FUN_147e2ce06(void)

undefined8 FUN_147e2ce06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2ce42 FUN_147e2ce42 body=93 status=ok
// SIG undefined FUN_147e2ce42(void)

void FUN_147e2ce42(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab679f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e2cea0 FUN_147e2cea0 body=93 status=ok
// SIG undefined FUN_147e2cea0(void)

void FUN_147e2cea0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab679f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e2cefe FUN_147e2cefe body=126 status=ok
// SIG undefined FUN_147e2cefe(void)

void FUN_147e2cefe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab679f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e2cf6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e2cf88 FUN_147e2cf88 body=31 status=ok
// SIG undefined FUN_147e2cf88(void)

undefined8 FUN_147e2cf88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2cfc4 FUN_147e2cfc4 body=93 status=ok
// SIG undefined FUN_147e2cfc4(void)

void FUN_147e2cfc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab67ad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e2d022 FUN_147e2d022 body=126 status=ok
// SIG undefined FUN_147e2d022(void)

void FUN_147e2d022(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab67ad0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e2d091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e2d0a0 FUN_147e2d0a0 body=21 status=ok
// SIG undefined FUN_147e2d0a0(void)

undefined8 FUN_147e2d0a0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e2d0b6 FUN_147e2d0b6 body=307 status=ok
// SIG undefined FUN_147e2d0b6(void)

void FUN_147e2d0b6(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)(uVar2 * 2);
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar5 * 8,&local_48);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar5 * 8 + 8;
  uVar4 = uVar5;
  if (uVar1 <= local_48) {
    uVar4 = uVar5 + 1;
    local_48 = local_48 - 8;
    if (uVar1 <= local_48) {
      uVar4 = uVar4 + (local_48 + uVar5 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 3);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2d1ea FUN_147e2d1ea body=35 status=ok
// SIG undefined FUN_147e2d1ea(void)

undefined8 FUN_147e2d1ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e2d242 FUN_147e2d242 body=85 status=ok
// SIG undefined FUN_147e2d242(void)

void FUN_147e2d242(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_11;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(undefined8 *)(param_1 + 0x18);
  local_28 = 8;
  FUN_144b4abc0(param_2,&local_11,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2d2aa FUN_147e2d2aa body=95 status=ok
// SIG undefined FUN_147e2d2aa(void)

void FUN_147e2d2aa(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    puVar2 = param_1;
  }
  (**(code **)(param_1[0x15] + 0x10))(param_1 + 0x15);
  FUN_1437f0b16(param_1 + 0x15);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e2d2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147e2d30a FUN_147e2d30a body=29 status=ok
// SIG undefined FUN_147e2d30a(void)

undefined8 FUN_147e2d30a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2d332 FUN_147e2d332 body=155 status=ok
// SIG undefined FUN_147e2d332(void)

void FUN_147e2d332(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(param_1[0x15] + 0x10))(param_1 + 0x15);
  lVar2 = param_1[0x16];
  FUN_144a23f14(*(ulonglong *)(lVar2 + 0x80) >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)(lVar2 + 0x1c));
  local_19 = 1;
  FUN_1447439e4(lVar2);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2d3ce FUN_147e2d3ce body=29 status=ok
// SIG undefined FUN_147e2d3ce(void)

undefined8 FUN_147e2d3ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2d3f2 FUN_147e2d3f2 body=86 status=ok
// SIG undefined FUN_147e2d3f2(void)

void FUN_147e2d3f2(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 8,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if (param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar3;
  FUN_147e2d448(param_1,*(undefined4 *)(param_1 + 0x208));
  return;
}



// FUNCTION 147e2d448 FUN_147e2d448 body=141 status=ok
// SIG undefined FUN_147e2d448(void)

void FUN_147e2d448(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 147e2d4d6 FUN_147e2d4d6 body=119 status=ok
// SIG undefined FUN_147e2d4d6(void)

void FUN_147e2d4d6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_147e2d448(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e2d54e FUN_147e2d54e body=283 status=ok
// SIG undefined FUN_147e2d54e(void)

void FUN_147e2d54e(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_38 = uVar4 * 8;
  uVar2 = (*DAT_14c787670)(DAT_14c6e47a8,&local_38,DAT_14c6e47ac);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar4 * 8 + 8;
  uVar3 = uVar4;
  if (uVar1 <= local_38) {
    uVar3 = uVar4 + 1;
    local_38 = local_38 - 8;
    if (uVar1 <= local_38) {
      uVar3 = uVar3 + (local_38 + uVar4 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar3;
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2d6f8 FUN_147e2d6f8 body=180 status=ok
// SIG undefined FUN_147e2d6f8(void)

void FUN_147e2d6f8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e3e7d2(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2d7f6 FUN_147e2d7f6 body=75 status=ok
// SIG undefined FUN_147e2d7f6(void)

void FUN_147e2d7f6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14180456c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2d8a8 FUN_147e2d8a8 body=45 status=ok
// SIG undefined FUN_147e2d8a8(void)

longlong FUN_147e2d8a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b21cc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2d8d6 FUN_147e2d8d6 body=48 status=ok
// SIG undefined FUN_147e2d8d6(void)

longlong FUN_147e2d8d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140b21cc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2d906 FUN_147e2d906 body=48 status=ok
// SIG undefined FUN_147e2d906(void)

longlong FUN_147e2d906(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140b21cc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2d936 FUN_147e2d936 body=48 status=ok
// SIG undefined FUN_147e2d936(void)

longlong FUN_147e2d936(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140b21cc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2d966 FUN_147e2d966 body=99 status=ok
// SIG undefined FUN_147e2d966(void)

void FUN_147e2d966(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 == 1) {
    uVar5 = *(undefined8 *)(param_1 + -0x3c0);
    uVar6 = *(undefined8 *)(param_1 + -0x3b8);
    uVar2 = *(undefined8 *)(param_1 + -0x3b0);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1403e3958(param_2,iVar3);
    }
    lVar4 = *param_2;
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x18);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = uVar2;
  }
  return;
}



// FUNCTION 147e2d9de FUN_147e2d9de body=45 status=ok
// SIG undefined FUN_147e2d9de(void)

longlong FUN_147e2d9de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2da0c FUN_147e2da0c body=48 status=ok
// SIG undefined FUN_147e2da0c(void)

longlong FUN_147e2da0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2da3c FUN_147e2da3c body=48 status=ok
// SIG undefined FUN_147e2da3c(void)

longlong FUN_147e2da3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2da6c FUN_147e2da6c body=48 status=ok
// SIG undefined FUN_147e2da6c(void)

longlong FUN_147e2da6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2da9c FUN_147e2da9c body=45 status=ok
// SIG undefined FUN_147e2da9c(void)

longlong FUN_147e2da9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140ee3c32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2daca FUN_147e2daca body=48 status=ok
// SIG undefined FUN_147e2daca(void)

longlong FUN_147e2daca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140ee3c32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2dafa FUN_147e2dafa body=48 status=ok
// SIG undefined FUN_147e2dafa(void)

longlong FUN_147e2dafa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140ee3c32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2db2a FUN_147e2db2a body=48 status=ok
// SIG undefined FUN_147e2db2a(void)

longlong FUN_147e2db2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140ee3c32(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2db5a FUN_147e2db5a body=45 status=ok
// SIG undefined FUN_147e2db5a(void)

longlong FUN_147e2db5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140da2174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2db98 FUN_147e2db98 body=37 status=ok
// SIG undefined FUN_147e2db98(void)

void FUN_147e2db98(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x4e0);
  FUN_140ed3d16(param_2);
  return;
}



// FUNCTION 147e2dbea FUN_147e2dbea body=63 status=ok
// SIG undefined FUN_147e2dbea(void)

undefined1 FUN_147e2dbea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1411062a4(param_2,param_3);
    param_3 = param_3 + 0x4e0;
    param_2 = param_2 + 0x4e0;
  }
  return 1;
}



// FUNCTION 147e2dc52 FUN_147e2dc52 body=59 status=ok
// SIG undefined FUN_147e2dc52(void)

undefined8 FUN_147e2dc52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2dc9e FUN_147e2dc9e body=38 status=ok
// SIG undefined FUN_147e2dc9e(void)

void FUN_147e2dc9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4e0) == '\x01') {
    FUN_140cda378(param_2);
    *(undefined1 *)(param_2 + 0x4e0) = 0;
  }
  return;
}



// FUNCTION 147e2dd12 FUN_147e2dd12 body=38 status=ok
// SIG undefined FUN_147e2dd12(void)

undefined8 FUN_147e2dd12(undefined8 param_1,int param_2)

{
  FUN_140cda378();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2dd38 FUN_147e2dd38 body=55 status=ok
// SIG undefined FUN_147e2dd38(void)

void FUN_147e2dd38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b500 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b500 = FUN_140002ddd(FUN_14641b75d,uVar1,L"AnimNode_GbxNavAnimStateMachine");
  }
  return;
}



// FUNCTION 147e2ddb6 FUN_147e2ddb6 body=59 status=ok
// SIG undefined FUN_147e2ddb6(void)

undefined8 FUN_147e2ddb6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2de02 FUN_147e2de02 body=38 status=ok
// SIG undefined FUN_147e2de02(void)

void FUN_147e2de02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x620) == '\x01') {
    FUN_147e2df52(param_2);
    *(undefined1 *)(param_2 + 0x620) = 0;
  }
  return;
}



// FUNCTION 147e2de76 FUN_147e2de76 body=163 status=ok
// SIG undefined FUN_147e2de76(void)

undefined8 * FUN_147e2de76(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14ab702c0;
  param_1[3] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FUN_140ed3d16(param_1 + 0x24);
  param_1[0xc0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x606) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  return param_1;
}



// FUNCTION 147e2df1a FUN_147e2df1a body=55 status=ok
// SIG undefined FUN_147e2df1a(void)

void FUN_147e2df1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b518 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b518 = FUN_140002ddd(FUN_14641b7f3,uVar1,L"AnimNode_GbxNav");
  }
  return;
}



// FUNCTION 147e2df52 FUN_147e2df52 body=107 status=ok
// SIG undefined FUN_147e2df52(void)

void FUN_147e2df52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab702c0;
  FUN_140cda378(param_1 + 0x24);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 147e2e006 FUN_147e2e006 body=96 status=ok
// SIG undefined FUN_147e2e006(void)

undefined8 FUN_147e2e006(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      FUN_140c19bee(param_2 + -0x58,param_3 + -0x58);
      FUN_1412bb928(param_2 + -0x10,param_3 + -0x10);
      FUN_147e2e1b0(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e2e08e FUN_147e2e08e body=59 status=ok
// SIG undefined FUN_147e2e08e(void)

undefined8 FUN_147e2e08e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2e0d4 FUN_147e2e0d4 body=32 status=ok
// SIG undefined FUN_147e2e0d4(void)

void FUN_147e2e0d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_147e2e142(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147e2e142 FUN_147e2e142 body=109 status=ok
// SIG undefined FUN_147e2e142(void)

void FUN_147e2e142(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147e2e1b0 FUN_147e2e1b0 body=88 status=ok
// SIG undefined FUN_147e2e1b0(void)

undefined8 * FUN_147e2e1b0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_144801f7c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147e2e280 FUN_147e2e280 body=59 status=ok
// SIG undefined FUN_147e2e280(void)

undefined8 FUN_147e2e280(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2e2c6 FUN_147e2e2c6 body=32 status=ok
// SIG undefined FUN_147e2e2c6(void)

void FUN_147e2e2c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_147e2e386(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147e2e334 FUN_147e2e334 body=55 status=ok
// SIG undefined FUN_147e2e334(void)

void FUN_147e2e334(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b548 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b548 = FUN_140002ddd(FUN_14641b91f,uVar1,L"AnimNode_GbxStance");
  }
  return;
}



// FUNCTION 147e2e36c FUN_147e2e36c body=25 status=ok
// SIG undefined FUN_147e2e36c(void)

undefined8 FUN_147e2e36c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147e2e400(param_3);
  return param_2;
}



// FUNCTION 147e2e386 FUN_147e2e386 body=121 status=ok
// SIG undefined FUN_147e2e386(void)

void FUN_147e2e386(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab70670;
  FUN_1408f487b(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a428b40;
  FUN_1448d844e(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e2e400 FUN_147e2e400 body=256 status=ok
// SIG undefined FUN_147e2e400(void)

undefined8 FUN_147e2e400(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cb1b548 == 0) {
    uVar2 = FUN_140cea770();
    DAT_14cb1b548 = FUN_140002ddd(FUN_14641b91f,uVar2,L"AnimNode_GbxStance");
  }
  local_48 = *(undefined8 *)(DAT_14cb1b548 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e2e54a FUN_147e2e54a body=96 status=ok
// SIG undefined FUN_147e2e54a(void)

undefined8 FUN_147e2e54a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      FUN_140c19bee(param_2 + -0x58,param_3 + -0x58);
      FUN_1412bb928(param_2 + -0x10,param_3 + -0x10);
      FUN_147e2e1b0(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e2e5d2 FUN_147e2e5d2 body=59 status=ok
// SIG undefined FUN_147e2e5d2(void)

undefined8 FUN_147e2e5d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2e618 FUN_147e2e618 body=32 status=ok
// SIG undefined FUN_147e2e618(void)

void FUN_147e2e618(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_147e2e686(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147e2e686 FUN_147e2e686 body=111 status=ok
// SIG undefined FUN_147e2e686(void)

void FUN_147e2e686(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147e2e742 FUN_147e2e742 body=54 status=ok
// SIG undefined FUN_147e2e742(void)

undefined1 FUN_147e2e742(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e2e840(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147e2e7a0 FUN_147e2e7a0 body=59 status=ok
// SIG undefined FUN_147e2e7a0(void)

undefined8 FUN_147e2e7a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2e840 FUN_147e2e840 body=106 status=ok
// SIG undefined FUN_147e2e840(void)

undefined4 * FUN_147e2e840(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  lVar4 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar4;
  param_1[8] = param_2[8];
  FUN_140e78ece(param_1 + 10,param_2 + 10);
  FUN_140e78ece(param_1 + 0x12,param_2 + 0x12);
  return param_1;
}



// FUNCTION 147e2e8f2 FUN_147e2e8f2 body=59 status=ok
// SIG undefined FUN_147e2e8f2(void)

undefined8 FUN_147e2e8f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2e93e FUN_147e2e93e body=38 status=ok
// SIG undefined FUN_147e2e93e(void)

void FUN_147e2e93e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_147e2eb56(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 147e2eb1e FUN_147e2eb1e body=55 status=ok
// SIG undefined FUN_147e2eb1e(void)

void FUN_147e2eb1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b590 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b590 = FUN_140002ddd(FUN_14641bae1,uVar1,L"AnimNode_GbxStanceTransition");
  }
  return;
}



// FUNCTION 147e2eb56 FUN_147e2eb56 body=83 status=ok
// SIG undefined FUN_147e2eb56(void)

void FUN_147e2eb56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab70b90;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140cae301(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_141798144(param_1);
  return;
}



// FUNCTION 147e2ec2a FUN_147e2ec2a body=59 status=ok
// SIG undefined FUN_147e2ec2a(void)

undefined8 FUN_147e2ec2a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2ed2a FUN_147e2ed2a body=59 status=ok
// SIG undefined FUN_147e2ed2a(void)

undefined8 FUN_147e2ed2a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2edc8 FUN_147e2edc8 body=49 status=ok
// SIG undefined FUN_147e2edc8(void)

void FUN_147e2edc8(longlong param_1)

{
  FUN_140e14f84(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4add0(param_1);
  return;
}



// FUNCTION 147e2ee28 FUN_147e2ee28 body=54 status=ok
// SIG undefined FUN_147e2ee28(void)

undefined1 FUN_147e2ee28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e2ef3a(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147e2ee86 FUN_147e2ee86 body=59 status=ok
// SIG undefined FUN_147e2ee86(void)

undefined8 FUN_147e2ee86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2eecc FUN_147e2eecc body=32 status=ok
// SIG undefined FUN_147e2eecc(void)

void FUN_147e2eecc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_147e2edc8(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147e2ef3a FUN_147e2ef3a body=75 status=ok
// SIG undefined FUN_147e2ef3a(void)

longlong FUN_147e2ef3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_141801c0c();
  FUN_147e2ef86(param_1 + 0x18,param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return param_1;
}



// FUNCTION 147e2ef86 FUN_147e2ef86 body=93 status=ok
// SIG undefined FUN_147e2ef86(void)

undefined8 * FUN_147e2ef86(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e14f84(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e2efe4(param_1,iVar1);
      FUN_147e2f057(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e2efe4 FUN_147e2efe4 body=115 status=ok
// SIG undefined FUN_147e2efe4(void)

void FUN_147e2efe4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e2f057 FUN_147e2f057 body=95 status=ok
// SIG undefined FUN_147e2f057(void)

void FUN_147e2f057(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar2;
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
        lVar2 = *(longlong *)(param_1 + lVar3);
      }
      if (lVar2 != 0) {
        FUN_144b3d910();
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e2f0de FUN_147e2f0de body=46 status=ok
// SIG undefined FUN_147e2f0de(void)

void FUN_147e2f0de(undefined8 param_1,longlong param_2)

{
  FUN_141801bc8(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e2f122 FUN_147e2f122 body=78 status=ok
// SIG undefined FUN_147e2f122(void)

undefined8 FUN_147e2f122(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_147e2f234();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e2f198 FUN_147e2f198 body=59 status=ok
// SIG undefined FUN_147e2f198(void)

undefined8 FUN_147e2f198(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2f234 FUN_147e2f234 body=93 status=ok
// SIG undefined FUN_147e2f234(void)

undefined8 * FUN_147e2f234(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141801bc8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e2f292(param_1,iVar1);
      FUN_147e2f305(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e2f292 FUN_147e2f292 body=115 status=ok
// SIG undefined FUN_147e2f292(void)

void FUN_147e2f292(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e2f305 FUN_147e2f305 body=85 status=ok
// SIG undefined FUN_147e2f305(void)

void FUN_147e2f305(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147e2f35a(param_1,param_2);
    lVar1 = *(longlong *)(param_2 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 147e2f35a FUN_147e2f35a body=134 status=ok
// SIG undefined FUN_147e2f35a(void)

longlong * FUN_147e2f35a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FUN_144b3d910();
  }
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  lVar3 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_147e2efe4(param_1 + 3,iVar1,0);
    FUN_147e2f057(param_1[3],lVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 147e2f3e2 FUN_147e2f3e2 body=50 status=ok
// SIG undefined FUN_147e2f3e2(void)

void FUN_147e2f3e2(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_141801bc8(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147e2f448 FUN_147e2f448 body=63 status=ok
// SIG undefined FUN_147e2f448(void)

undefined1 FUN_147e2f448(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e2f5aa(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147e2f4b0 FUN_147e2f4b0 body=59 status=ok
// SIG undefined FUN_147e2f4b0(void)

undefined8 FUN_147e2f4b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2f4fc FUN_147e2f4fc body=60 status=ok
// SIG undefined FUN_147e2f4fc(void)

void FUN_147e2f4fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14ab72890;
    FUN_14052c750(param_2 + 0x13);
    FUN_140753ab6(param_2);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 147e2f5aa FUN_147e2f5aa body=119 status=ok
// SIG undefined FUN_147e2f5aa(void)

longlong FUN_147e2f5aa(longlong param_1,longlong param_2)

{
  FUN_147e1a790();
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  FUN_14035adc8(param_1 + 0x98,param_2 + 0x98);
  FUN_14035ad6a(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  FUN_147e2f622(param_1 + 0x108,param_2 + 0x108);
  return param_1;
}



// FUNCTION 147e2f622 FUN_147e2f622 body=84 status=ok
// SIG undefined FUN_147e2f622(void)

longlong * FUN_147e2f622(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 147e2f678 FUN_147e2f678 body=63 status=ok
// SIG undefined FUN_147e2f678(void)

undefined8 * FUN_147e2f678(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab72890;
  FUN_14052c750(param_1 + 0x13);
  FUN_140753ab6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e2f6b8 FUN_147e2f6b8 body=55 status=ok
// SIG undefined FUN_147e2f6b8(void)

void FUN_147e2f6b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b718 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b718 = FUN_140002ddd(FUN_14641c018,uVar1,L"GbxNavActorDef");
  }
  return;
}



// FUNCTION 147e2f764 FUN_147e2f764 body=59 status=ok
// SIG undefined FUN_147e2f764(void)

undefined8 FUN_147e2f764(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2f8a2 FUN_147e2f8a2 body=59 status=ok
// SIG undefined FUN_147e2f8a2(void)

undefined8 FUN_147e2f8a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2f960 FUN_147e2f960 body=105 status=ok
// SIG undefined FUN_147e2f960(void)

undefined1 FUN_147e2f960(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e2f9f2 FUN_147e2f9f2 body=59 status=ok
// SIG undefined FUN_147e2f9f2(void)

undefined8 FUN_147e2f9f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2fb0c FUN_147e2fb0c body=59 status=ok
// SIG undefined FUN_147e2fb0c(void)

undefined8 FUN_147e2fb0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2fbd6 FUN_147e2fbd6 body=54 status=ok
// SIG undefined FUN_147e2fbd6(void)

undefined1 FUN_147e2fbd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e2fcd4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147e2fc34 FUN_147e2fc34 body=59 status=ok
// SIG undefined FUN_147e2fc34(void)

undefined8 FUN_147e2fc34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2fcd4 FUN_147e2fcd4 body=91 status=ok
// SIG undefined FUN_147e2fcd4(void)

longlong * FUN_147e2fcd4(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 147e2fd80 FUN_147e2fd80 body=63 status=ok
// SIG undefined FUN_147e2fd80(void)

undefined1 FUN_147e2fd80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e2ff26(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 147e2fde8 FUN_147e2fde8 body=59 status=ok
// SIG undefined FUN_147e2fde8(void)

undefined8 FUN_147e2fde8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e2fe34 FUN_147e2fe34 body=38 status=ok
// SIG undefined FUN_147e2fe34(void)

void FUN_147e2fe34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_147e2fea8(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 147e2fea8 FUN_147e2fea8 body=125 status=ok
// SIG undefined FUN_147e2fea8(void)

void FUN_147e2fea8(longlong *param_1)

{
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e2ff26 FUN_147e2ff26 body=179 status=ok
// SIG undefined FUN_147e2ff26(void)

longlong FUN_147e2ff26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147e2ffda();
  FUN_147e2fcd4(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  FUN_147e3002a(param_1 + 0x30,param_2 + 0x30);
  FUN_147e2ffda(param_1 + 0x40,param_2 + 0x40);
  FUN_147e2ffda(param_1 + 0x50,param_2 + 0x50);
  FUN_147e2ffda(param_1 + 0x60,param_2 + 0x60);
  FUN_147e2ffda(param_1 + 0x70,param_2 + 0x70);
  FUN_147e2ffda(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 147e2ffda FUN_147e2ffda body=79 status=ok
// SIG undefined FUN_147e2ffda(void)

undefined8 * FUN_147e2ffda(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e3007a(param_1,iVar1);
      FUN_147e300dc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e3002a FUN_147e3002a body=79 status=ok
// SIG undefined FUN_147e3002a(void)

undefined8 * FUN_147e3002a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e3012e(param_1,iVar1);
      FUN_147e30190(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e3007a FUN_147e3007a body=98 status=ok
// SIG undefined FUN_147e3007a(void)

void FUN_147e3007a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e300dc FUN_147e300dc body=82 status=ok
// SIG undefined FUN_147e300dc(void)

void FUN_147e300dc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147e3012e FUN_147e3012e body=98 status=ok
// SIG undefined FUN_147e3012e(void)

void FUN_147e3012e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e30190 FUN_147e30190 body=96 status=ok
// SIG undefined FUN_147e30190(void)

void FUN_147e30190(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e3020c FUN_147e3020c body=46 status=ok
// SIG undefined FUN_147e3020c(void)

void FUN_147e3020c(undefined8 param_1,longlong param_2)

{
  FUN_140da2426(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e30250 FUN_147e30250 body=54 status=ok
// SIG undefined FUN_147e30250(void)

undefined1 FUN_147e30250(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e3034a(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147e302ae FUN_147e302ae body=59 status=ok
// SIG undefined FUN_147e302ae(void)

undefined8 FUN_147e302ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3034a FUN_147e3034a body=83 status=ok
// SIG undefined FUN_147e3034a(void)

longlong * FUN_147e3034a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_147e3039e(param_1 + 2,param_2 + 2);
  *(char *)(param_1 + 4) = (char)param_2[4];
  return param_1;
}



// FUNCTION 147e3039e FUN_147e3039e body=93 status=ok
// SIG undefined FUN_147e3039e(void)

undefined8 * FUN_147e3039e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140da2426(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e303fc(param_1,iVar1);
      FUN_147e3046e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e303fc FUN_147e303fc body=114 status=ok
// SIG undefined FUN_147e303fc(void)

void FUN_147e303fc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e3046e FUN_147e3046e body=60 status=ok
// SIG undefined FUN_147e3046e(void)

void FUN_147e3046e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147e304aa(param_1,param_2);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return;
}



// FUNCTION 147e304aa FUN_147e304aa body=593 status=ok
// SIG undefined FUN_147e304aa(void)

undefined8 * FUN_147e304aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147e3007a(param_1,iVar1,0);
    FUN_147e300dc(*param_1,uVar2,iVar1);
  }
  FUN_147e306fc(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  lVar3 = param_2[5];
  param_1[5] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_147e3012e(param_1 + 6,iVar1,0);
    FUN_147e30190(param_1[6],uVar2,iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar2 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_147e3007a(param_1 + 8,iVar1,0);
    FUN_147e300dc(param_1[8],uVar2,iVar1);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar2 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_147e3007a(param_1 + 10,iVar1,0);
    FUN_147e300dc(param_1[10],uVar2,iVar1);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  uVar2 = param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_147e3007a(param_1 + 0xc,iVar1,0);
    FUN_147e300dc(param_1[0xc],uVar2,iVar1);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  uVar2 = param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_147e3007a(param_1 + 0xe,iVar1,0);
    FUN_147e300dc(param_1[0xe],uVar2,iVar1);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  uVar2 = param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_147e3007a(param_1 + 0x10,iVar1,0);
    FUN_147e300dc(param_1[0x10],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 147e306fc FUN_147e306fc body=88 status=ok
// SIG undefined FUN_147e306fc(void)

longlong * FUN_147e306fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147e30756 FUN_147e30756 body=50 status=ok
// SIG undefined FUN_147e30756(void)

void FUN_147e30756(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140da2426(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147e307ec FUN_147e307ec body=75 status=ok
// SIG undefined FUN_147e307ec(void)

undefined1 FUN_147e307ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_140e78ece();
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e30860 FUN_147e30860 body=59 status=ok
// SIG undefined FUN_147e30860(void)

undefined8 FUN_147e30860(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e30942 FUN_147e30942 body=98 status=ok
// SIG undefined FUN_147e30942(void)

undefined8 FUN_147e30942(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_140e78ece(lVar2,puVar1 + 4);
      *(undefined2 *)(lVar2 + 0x20) = *(undefined2 *)(puVar1 + 0xc);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e309cc FUN_147e309cc body=59 status=ok
// SIG undefined FUN_147e309cc(void)

undefined8 FUN_147e309cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e30a9e FUN_147e30a9e body=111 status=ok
// SIG undefined FUN_147e30a9e(void)

undefined1 FUN_147e30a9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      *(undefined4 *)(plVar1 + 3) = *(undefined4 *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e30b36 FUN_147e30b36 body=59 status=ok
// SIG undefined FUN_147e30b36(void)

undefined8 FUN_147e30b36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e30c0c FUN_147e30c0c body=63 status=ok
// SIG undefined FUN_147e30c0c(void)

undefined1 FUN_147e30c0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14114fb72(param_2,param_3);
    param_3 = param_3 + 0xad0;
    param_2 = param_2 + 0xad0;
  }
  return 1;
}



// FUNCTION 147e30c74 FUN_147e30c74 body=59 status=ok
// SIG undefined FUN_147e30c74(void)

undefined8 FUN_147e30c74(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e30cc0 FUN_147e30cc0 body=60 status=ok
// SIG undefined FUN_147e30cc0(void)

void FUN_147e30cc0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x15a) == '\x01') {
    *param_2 = &PTR_FUN_14ab72a10;
    FUN_144a8db3c(param_2 + 0x136);
    FUN_1412b94b8(param_2);
    *(undefined1 *)(param_2 + 0x15a) = 0;
  }
  return;
}



// FUNCTION 147e30d74 FUN_147e30d74 body=100 status=ok
// SIG undefined FUN_147e30d74(void)

undefined1 FUN_147e30d74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e30e00 FUN_147e30e00 body=59 status=ok
// SIG undefined FUN_147e30e00(void)

undefined8 FUN_147e30e00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e30ea6 FUN_147e30ea6 body=585 status=ok
// SIG undefined FUN_147e30ea6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147e30ea6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  longlong local_60 [7];
  
  local_60[6] = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60 + 3);
  }
  plVar3 = local_60 + 3;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60 + 2);
  }
  plVar2 = local_60 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_60[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60 + 1);
  }
  plVar4 = local_60 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_60[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  plVar5 = local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e48b5c(plVar3,plVar2,plVar4,plVar5);
  if ((DAT_14c950c29 == 1) && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar4 != 0)) {
    FUN_1456cec3c();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_60[6] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3110c FUN_147e3110c body=577 status=ok
// SIG undefined FUN_147e3110c(void)

void FUN_147e3110c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e3134e(local_90,&local_78);
  local_a8 = local_50;
  uStack_a0 = uStack_48;
  local_98 = local_40;
  local_c8 = local_38;
  uStack_c4 = uStack_34;
  uStack_c0 = uStack_30;
  uStack_bc = uStack_2c;
  local_b8 = local_28;
  local_d8 = local_90;
  uVar1 = FUN_147e489e0(local_20,&local_c8,&local_a8,local_54);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3134e FUN_147e3134e body=122 status=ok
// SIG undefined FUN_147e3134e(void)

longlong * FUN_147e3134e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
    bVar2 = DAT_14c950c29;
  }
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147e313c8 FUN_147e313c8 body=221 status=ok
// SIG undefined FUN_147e313c8(void)

void FUN_147e313c8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e3eb92(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e314ac FUN_147e314ac body=324 status=ok
// SIG undefined FUN_147e314ac(void)

void FUN_147e314ac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407ca500(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e315f8 FUN_147e315f8 body=324 status=ok
// SIG undefined FUN_147e315f8(void)

void FUN_147e315f8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e48b72(local_48,local_20,local_28,local_30);
  FUN_147e3173e(param_3,local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3173e FUN_147e3173e body=127 status=ok
// SIG undefined FUN_147e3173e(void)

longlong * FUN_147e3173e(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 147e317c4 FUN_147e317c4 body=565 status=ok
// SIG undefined FUN_147e317c4(void)

void FUN_147e317c4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_28 = 0;
  FUN_1446f4b16();
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
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar2 = local_80;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e3134e(local_98,&local_68);
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_a8 = local_30;
  local_c8 = puVar2;
  uVar1 = FUN_147e4870a(local_28,&local_b8,local_44,local_98);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e319fa FUN_147e319fa body=316 status=ok
// SIG undefined FUN_147e319fa(void)

void FUN_147e319fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_148 [40];
  undefined1 local_120 [128];
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_48;
  char local_40;
  undefined2 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_a0 = 0;
  local_98 = 0x1000100;
  local_94 = 1;
  local_90 = DAT_14c8464e0;
  uStack_88 = DAT_14c8464e8;
  local_80 = DAT_14c8464f0;
  local_78 = 0;
  local_76 = 0;
  local_68 = (undefined4)DAT_14c8464f8;
  uStack_64 = DAT_14c8464f8._4_4_;
  uStack_60 = (undefined4)DAT_14c846500;
  uStack_5c = DAT_14c846500._4_4_;
  local_58 = DAT_14c846508;
  local_70 = 0;
  local_50 = 0x18;
  local_48 = 5;
  local_40 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_38 = 0x100;
  local_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141801c86(local_120,&local_a0);
  FUN_1437fe7b6(local_120);
  FUN_144a2da94(&local_70);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e31b3e FUN_147e31b3e body=577 status=ok
// SIG undefined FUN_147e31b3e(void)

void FUN_147e31b3e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e3134e(local_90,&local_78);
  local_a8 = local_50;
  uStack_a0 = uStack_48;
  local_98 = local_40;
  local_c8 = local_38;
  uStack_c4 = uStack_34;
  uStack_c0 = uStack_30;
  uStack_bc = uStack_2c;
  local_b8 = local_28;
  local_d8 = local_90;
  uVar1 = FUN_147e48860(local_20,&local_c8,&local_a8,local_54);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e31e0a FUN_147e31e0a body=37 status=ok
// SIG undefined FUN_147e31e0a(void)

void FUN_147e31e0a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e41f0e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e31e34 FUN_147e31e34 body=158 status=ok
// SIG undefined FUN_147e31e34(void)

void FUN_147e31e34(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e41f2c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e31ede FUN_147e31ede body=37 status=ok
// SIG undefined FUN_147e31ede(void)

void FUN_147e31ede(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e41f24();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e31f08 FUN_147e31f08 body=158 status=ok
// SIG undefined FUN_147e31f08(void)

void FUN_147e31f08(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e41f4c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e32014 FUN_147e32014 body=45 status=ok
// SIG undefined FUN_147e32014(void)

longlong FUN_147e32014(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140d79f6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e32048 FUN_147e32048 body=48 status=ok
// SIG undefined FUN_147e32048(void)

longlong FUN_147e32048(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  FUN_140d79f6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e32080 FUN_147e32080 body=48 status=ok
// SIG undefined FUN_147e32080(void)

longlong FUN_147e32080(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e0;
  FUN_140d79f6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e320b8 FUN_147e320b8 body=48 status=ok
// SIG undefined FUN_147e320b8(void)

longlong FUN_147e320b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e8;
  FUN_140d79f6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e320f0 FUN_147e320f0 body=45 status=ok
// SIG undefined FUN_147e320f0(void)

longlong FUN_147e320f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140a6993c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e3211e FUN_147e3211e body=48 status=ok
// SIG undefined FUN_147e3211e(void)

longlong FUN_147e3211e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140a6993c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e3214e FUN_147e3214e body=48 status=ok
// SIG undefined FUN_147e3214e(void)

longlong FUN_147e3214e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140a6993c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e3217e FUN_147e3217e body=48 status=ok
// SIG undefined FUN_147e3217e(void)

longlong FUN_147e3217e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140a6993c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e321ae FUN_147e321ae body=84 status=ok
// SIG undefined FUN_147e321ae(void)

longlong * FUN_147e321ae(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 147e32202 FUN_147e32202 body=30 status=ok
// SIG undefined FUN_147e32202(void)

void FUN_147e32202(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 147e32220 FUN_147e32220 body=30 status=ok
// SIG undefined FUN_147e32220(void)

void FUN_147e32220(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}



// FUNCTION 147e32256 FUN_147e32256 body=39 status=ok
// SIG undefined FUN_147e32256(void)

undefined8 FUN_147e32256(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e322a6 FUN_147e322a6 body=59 status=ok
// SIG undefined FUN_147e322a6(void)

undefined8 FUN_147e322a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e32392 FUN_147e32392 body=75 status=ok
// SIG undefined FUN_147e32392(void)

undefined1 FUN_147e32392(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1403700ac(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e32406 FUN_147e32406 body=59 status=ok
// SIG undefined FUN_147e32406(void)

undefined8 FUN_147e32406(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3244c FUN_147e3244c body=34 status=ok
// SIG undefined FUN_147e3244c(void)

void FUN_147e3244c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14593fd74(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147e324b4 FUN_147e324b4 body=57 status=ok
// SIG undefined FUN_147e324b4(void)

void FUN_147e324b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bb28 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bb28 = FUN_140002ddd(FUN_14641d58f,uVar1,L"GbxNavFilterOverrideDef");
  }
  return;
}



// FUNCTION 147e324ee FUN_147e324ee body=115 status=ok
// SIG undefined FUN_147e324ee(void)

void FUN_147e324ee(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e32561 FUN_147e32561 body=134 status=ok
// SIG undefined FUN_147e32561(void)

void FUN_147e32561(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e325e8 FUN_147e325e8 body=28 status=ok
// SIG undefined FUN_147e325e8(void)

undefined8 FUN_147e325e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147e32642 FUN_147e32642 body=110 status=ok
// SIG undefined FUN_147e32642(void)

undefined1 FUN_147e32642(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined1 *)(plVar1 + 2) = *(undefined1 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e326d8 FUN_147e326d8 body=70 status=ok
// SIG undefined FUN_147e326d8(void)

void FUN_147e326d8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14058ee28(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e327ae FUN_147e327ae body=104 status=ok
// SIG undefined FUN_147e327ae(void)

undefined1 FUN_147e327ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e3283e FUN_147e3283e body=70 status=ok
// SIG undefined FUN_147e3283e(void)

void FUN_147e3283e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147e3fd8c(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3293e FUN_147e3293e body=63 status=ok
// SIG undefined FUN_147e3293e(void)

undefined1 FUN_147e3293e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144955a78(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 147e329a6 FUN_147e329a6 body=59 status=ok
// SIG undefined FUN_147e329a6(void)

undefined8 FUN_147e329a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e329f2 FUN_147e329f2 body=39 status=ok
// SIG undefined FUN_147e329f2(void)

void FUN_147e329f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_144a2da94(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 147e32aae FUN_147e32aae body=104 status=ok
// SIG undefined FUN_147e32aae(void)

undefined8 FUN_147e32aae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 5);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e32b3e FUN_147e32b3e body=59 status=ok
// SIG undefined FUN_147e32b3e(void)

undefined8 FUN_147e32b3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e32b84 FUN_147e32b84 body=38 status=ok
// SIG undefined FUN_147e32b84(void)

void FUN_147e32b84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147e32c7c FUN_147e32c7c body=59 status=ok
// SIG undefined FUN_147e32c7c(void)

undefined8 FUN_147e32c7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e32d78 FUN_147e32d78 body=85 status=ok
// SIG undefined FUN_147e32d78(void)

undefined1 FUN_147e32d78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e32df6 FUN_147e32df6 body=59 status=ok
// SIG undefined FUN_147e32df6(void)

undefined8 FUN_147e32df6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e32e3c FUN_147e32e3c body=43 status=ok
// SIG undefined FUN_147e32e3c(void)

void FUN_147e32e3c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 147e32eba FUN_147e32eba body=52 status=ok
// SIG undefined FUN_147e32eba(void)

undefined8 * FUN_147e32eba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e32eee FUN_147e32eee body=55 status=ok
// SIG undefined FUN_147e32eee(void)

void FUN_147e32eee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bd00 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bd00 = FUN_140002ddd(FUN_14641dd0a,uVar1,L"GbxNavLinkDef");
  }
  return;
}



// FUNCTION 147e32fa4 FUN_147e32fa4 body=26 status=ok
// SIG undefined FUN_147e32fa4(void)

undefined8 * FUN_147e32fa4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 147e32fc0 FUN_147e32fc0 body=28 status=ok
// SIG undefined FUN_147e32fc0(void)

undefined8 FUN_147e32fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147e3303e FUN_147e3303e body=54 status=ok
// SIG undefined FUN_147e3303e(void)

undefined1 FUN_147e3303e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e3318a(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147e3309c FUN_147e3309c body=59 status=ok
// SIG undefined FUN_147e3309c(void)

undefined8 FUN_147e3309c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e330e2 FUN_147e330e2 body=32 status=ok
// SIG undefined FUN_147e330e2(void)

void FUN_147e330e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_147e3313c(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147e3313c FUN_147e3313c body=77 status=ok
// SIG undefined FUN_147e3313c(void)

void FUN_147e3313c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab7c850;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147e3318a FUN_147e3318a body=109 status=ok
// SIG undefined FUN_147e3318a(void)

longlong FUN_147e3318a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 147e33258 FUN_147e33258 body=99 status=ok
// SIG undefined FUN_147e33258(void)

undefined1 FUN_147e33258(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e332e4 FUN_147e332e4 body=59 status=ok
// SIG undefined FUN_147e332e4(void)

undefined8 FUN_147e332e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3332a FUN_147e3332a body=43 status=ok
// SIG undefined FUN_147e3332a(void)

void FUN_147e3332a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147e333a8 FUN_147e333a8 body=57 status=ok
// SIG undefined FUN_147e333a8(void)

void FUN_147e333a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bd48 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bd48 = FUN_140002ddd(FUN_14641de69,uVar1,L"GbxNavLinkDef_Interp");
  }
  return;
}



// FUNCTION 147e3346e FUN_147e3346e body=63 status=ok
// SIG undefined FUN_147e3346e(void)

undefined1 FUN_147e3346e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e335f6(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 147e334d6 FUN_147e334d6 body=59 status=ok
// SIG undefined FUN_147e334d6(void)

undefined8 FUN_147e334d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e33522 FUN_147e33522 body=38 status=ok
// SIG undefined FUN_147e33522(void)

void FUN_147e33522(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_147e33596(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147e33596 FUN_147e33596 body=96 status=ok
// SIG undefined FUN_147e33596(void)

void FUN_147e33596(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab7cc10;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147e335f6 FUN_147e335f6 body=158 status=ok
// SIG undefined FUN_147e335f6(void)

longlong FUN_147e335f6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 147e336d2 FUN_147e336d2 body=97 status=ok
// SIG undefined FUN_147e336d2(void)

undefined8 FUN_147e336d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_141289ada(param_2 + -0x30,param_3 + -0x30);
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e3375c FUN_147e3375c body=59 status=ok
// SIG undefined FUN_147e3375c(void)

undefined8 FUN_147e3375c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e337a2 FUN_147e337a2 body=32 status=ok
// SIG undefined FUN_147e337a2(void)

void FUN_147e337a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_147e33810(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147e33810 FUN_147e33810 body=61 status=ok
// SIG undefined FUN_147e33810(void)

void FUN_147e33810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab7cdf0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147e3388a FUN_147e3388a body=97 status=ok
// SIG undefined FUN_147e3388a(void)

undefined8 FUN_147e3388a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_141289ada(param_2 + -0x30,param_3 + -0x30);
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e33914 FUN_147e33914 body=59 status=ok
// SIG undefined FUN_147e33914(void)

undefined8 FUN_147e33914(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e3395a FUN_147e3395a body=32 status=ok
// SIG undefined FUN_147e3395a(void)

void FUN_147e3395a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_147e339c4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147e339c4 FUN_147e339c4 body=61 status=ok
// SIG undefined FUN_147e339c4(void)

void FUN_147e339c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab7cfd0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147e33a20 FUN_147e33a20 body=63 status=ok
// SIG undefined FUN_147e33a20(void)

undefined1 FUN_147e33a20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e33c96(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 147e33a88 FUN_147e33a88 body=59 status=ok
// SIG undefined FUN_147e33a88(void)

undefined8 FUN_147e33a88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e33ad4 FUN_147e33ad4 body=38 status=ok
// SIG undefined FUN_147e33ad4(void)

void FUN_147e33ad4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_147e33c1a(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 147e33b34 FUN_147e33b34 body=206 status=ok
// SIG undefined FUN_147e33b34(void)

void FUN_147e33b34(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14ab7d1c0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
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
  *(undefined4 *)(param_1 + 0x21) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0x404;
  param_1[0x14] = &PTR_FUN_14a89a2c0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x42dc0000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  return;
}



// FUNCTION 147e33c1a FUN_147e33c1a body=123 status=ok
// SIG undefined FUN_147e33c1a(void)

void FUN_147e33c1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab7d1c0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  param_1[0x14] = &PTR_FUN_14a89a2c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  param_1[0x14] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x15);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147e33c96 FUN_147e33c96 body=194 status=ok
// SIG undefined FUN_147e33c96(void)

longlong FUN_147e33c96(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  puVar5 = (undefined8 *)(param_2 + 0x20);
  puVar6 = (undefined8 *)(param_1 + 0x20);
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  FUN_147a4bba2(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  return param_1;
}



// FUNCTION 147e33d5a FUN_147e33d5a body=164 status=ok
// SIG undefined FUN_147e33d5a(void)

void FUN_147e33d5a(longlong *param_1,undefined8 param_2)

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
        goto LAB_147e33dda;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e33dda:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e33ea2 FUN_147e33ea2 body=154 status=ok
// SIG undefined FUN_147e33ea2(void)

void FUN_147e33ea2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x640) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e33f3e FUN_147e33f3e body=156 status=ok
// SIG undefined FUN_147e33f3e(void)

void FUN_147e33f3e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x648) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e33fdc FUN_147e33fdc body=156 status=ok
// SIG undefined FUN_147e33fdc(void)

void FUN_147e33fdc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x644) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e340a4 FUN_147e340a4 body=37 status=ok
// SIG undefined FUN_147e340a4(void)

void FUN_147e340a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e4786e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e340ce FUN_147e340ce body=158 status=ok
// SIG undefined FUN_147e340ce(void)

void FUN_147e340ce(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e4788c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e34170 FUN_147e34170 body=75 status=ok
// SIG undefined FUN_147e34170(void)

void FUN_147e34170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_141806ff0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


