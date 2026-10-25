// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140731e0c FUN_140731e0c body=353 status=ok
// SIG undefined FUN_140731e0c(void)

void FUN_140731e0c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140731e91;
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
LAB_140731e91:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140731f6e FUN_140731f6e body=215 status=ok
// SIG undefined FUN_140731f6e(void)

void FUN_140731f6e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar8 = 0;
  lVar7 = lVar3 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    lVar7 = lVar8;
  }
  lVar4 = lVar3 + (ulonglong)puVar1[6];
  if ((ulonglong)puVar1[6] == 0xffffffff) {
    lVar4 = lVar8;
  }
  lVar10 = lVar3 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    lVar10 = lVar8;
  }
  lVar11 = lVar3 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    lVar11 = lVar8;
  }
  lVar9 = lVar3 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    lVar9 = lVar8;
  }
  lVar6 = lVar3 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar6 = lVar8;
  }
  lVar5 = lVar3 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar5 = lVar8;
  }
  lVar3 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar8;
  }
  FUN_144a278f6(param_3 + 8,lVar3,lVar5,lVar6,lVar9,lVar11,lVar10,lVar4,lVar7,
                *(undefined2 *)(lVar2 + 0xe));
  return;
}



// FUNCTION 140732046 FUN_140732046 body=12 status=ok
// SIG undefined FUN_140732046(void)

void FUN_140732046(longlong param_1)

{
  FUN_140732052(param_1 + 0xb0);
  return;
}



// FUNCTION 140732052 FUN_140732052 body=380 status=ok
// SIG undefined FUN_140732052(void)

longlong FUN_140732052(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1407321ce();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1407321ce FUN_1407321ce body=228 status=ok
// SIG undefined FUN_1407321ce(void)

longlong FUN_1407321ce(void)

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
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbcdf0 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_148c9bde5;
    local_40 = FUN_14660cb9c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVehicleBodyData",&DAT_14cbbcdf0,&DAT_148c9bde4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbcdf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407322b4 FUN_1407322b4 body=80 status=ok
// SIG undefined FUN_1407322b4(void)

void FUN_1407322b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_140732306(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140732306 FUN_140732306 body=53 status=ok
// SIG undefined FUN_140732306(void)

undefined8 FUN_140732306(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cb71140,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 14073233c FUN_14073233c body=107 status=ok
// SIG undefined FUN_14073233c(void)

undefined8 FUN_14073233c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140732381:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140732381;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 1407323a8 FUN_1407323a8 body=77 status=ok
// SIG undefined FUN_1407323a8(void)

float * FUN_1407323a8(undefined8 param_1,float *param_2)

{
  undefined1 auStack_48 [32];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140732446(param_1,local_28);
  *param_2 = (float)local_28[0];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407323f6 FUN_1407323f6 body=78 status=ok
// SIG undefined FUN_1407323f6(void)

float * FUN_1407323f6(undefined8 param_1,float *param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140732446(param_1,local_28);
  *param_2 = (float)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140732446 FUN_140732446 body=320 status=ok
// SIG undefined FUN_140732446(void)

double * FUN_140732446(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_88 [40];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar9 = *(longlong **)(param_1 + 0x58);
  bVar5 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar9[1];
    uVar8 = 0;
    do {
      if (iVar7 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_14073249c;
      }
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    bVar5 = false;
  }
LAB_14073249c:
  FUN_140c2d2b0(uVar8,&local_60);
  if (!bVar5) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  dVar3 = (double)(local_54 - local_5c);
  dVar4 = (double)(local_58 - local_60);
  if (((*(int *)(param_1 + 0x38) < 1) || (*(int *)(param_1 + 0xd0) < 1)) ||
     (*(longlong **)(param_1 + 0x40) == (longlong *)0x0)) {
    *param_2 = dVar4;
  }
  else {
    fVar11 = (float)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
    dVar12 = (double)fVar11;
    if (dVar4 / dVar3 <= dVar12) {
      *param_2 = dVar4;
      param_2[1] = dVar4 / dVar12;
      goto LAB_140732513;
    }
    *param_2 = dVar12 * dVar3;
  }
  param_2[1] = dVar3;
LAB_140732513:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140732592 FUN_140732592 body=228 status=ok
// SIG undefined FUN_140732592(void)

longlong FUN_140732592(void)

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
  if (DAT_14caaade0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1462ac436;
    local_38 = &LAB_1474db68f;
    local_40 = FUN_1417986eb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x450;
    FUN_14081cfa3(L"/Script/AnimGraphRuntime",L"AnimSequencerInstance",&DAT_14caaade0,&DAT_1474db68e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caaade0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140732678 FUN_140732678 body=228 status=ok
// SIG undefined FUN_140732678(void)

longlong FUN_140732678(void)

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
  if (DAT_14caabb60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14750772d;
    local_40 = FUN_146335e39;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AnimGraphRuntime",L"SequencerAnimationSupport",&DAT_14caabb60,
                  &DAT_14750772c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caabb60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073275e FUN_14073275e body=64 status=ok
// SIG undefined FUN_14073275e(void)

longlong FUN_14073275e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xae8);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_140732678();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014073278f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 14073279e FUN_14073279e body=184 status=ok
// SIG undefined FUN_14073279e(void)

void FUN_14073279e(longlong param_1,undefined2 param_2,byte param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) == 0 & (param_3 ^ 1)) == 0) {
    uVar1 = FUN_140732858();
    FUN_1407328ba(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140732858 FUN_140732858 body=98 status=ok
// SIG undefined FUN_140732858(void)

void FUN_140732858(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = param_1;
    *puVar1 = &PTR_FUN_14a47ceb0;
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



// FUNCTION 1407328ba FUN_1407328ba body=281 status=ok
// SIG undefined FUN_1407328ba(void)

longlong FUN_1407328ba(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    local_40 = CONCAT44(iVar2,uVar1);
  }
  FUN_140732f84(param_1,&local_44,&local_40);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407329d4 FUN_1407329d4 body=207 status=ok
// SIG undefined FUN_1407329d4(void)

void FUN_1407329d4(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_140732c36(param_3,0);
  }
  if (param_2 != '\0') {
    FUN_140732aa4(param_1,param_3);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x140);
  if (-1 < iVar4) {
    if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
      FUN_140732c36(param_3);
      iVar4 = *(int *)(param_1 + 0x140);
    }
    if (iVar4 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x138);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if (lVar3 != 0) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_140612240(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar4 * 8 != lVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 140732aa4 FUN_140732aa4 body=214 status=ok
// SIG undefined FUN_140732aa4(void)

void FUN_140732aa4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x140);
  iVar4 = (int)param_2[1] + iVar3;
  if (-1 < iVar4) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      FUN_140732c36(param_2);
      iVar3 = *(int *)(param_1 + 0x140);
    }
    if (iVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x138);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar5);
        if (lVar2 != 0) {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_140612240(param_2,iVar4);
          }
          *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar2;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar3 * 8 != lVar5);
      iVar3 = *(int *)(param_1 + 0x140);
      if ((longlong)iVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x138);
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + lVar5);
          if (lVar2 != 0) {
            FUN_140732aa4(lVar2,param_2);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar3 * 8 != lVar5);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 140732b7a FUN_140732b7a body=187 status=ok
// SIG undefined FUN_140732b7a(void)

undefined8 FUN_140732b7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140732c36 FUN_140732c36 body=315 status=ok
// SIG undefined FUN_140732c36(void)

void FUN_140732c36(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140732ca0;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140732ca0:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140732d72 FUN_140732d72 body=529 status=ok
// SIG undefined FUN_140732d72(void)

ulonglong FUN_140732d72(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  undefined7 uVar6;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = *(longlong **)(param_1 + 0x658);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_140732f70;
    if (plVar7 != (longlong *)0x0) goto LAB_140732db4;
LAB_140732ecb:
    bVar8 = false;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_140732f70:
      FUN_1456cec3c(plVar7);
    }
LAB_140732db4:
    if (DAT_14cb06da8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464003b0;
      local_68 = &LAB_147d17bdf;
      local_70 = &LAB_1417edf22;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
        DAT_14cb06da8 + 0x30)) goto LAB_140732ecb;
    lVar2 = (**(code **)(*plVar7 + 0x3f0))(plVar7);
    bVar8 = lVar2 != 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xae8);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if ((lVar2 == 0) || (*(char *)(param_1 + 0xc5f) != '\0')) goto LAB_140732e11;
  lVar1 = *(longlong *)(lVar2 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0xae0);
  if (lVar4 == 0) {
LAB_140732f7d:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_1402e44f4();
    if (((lVar3 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_140732f7d;
    lVar4 = *(longlong *)(param_1 + 0xae0);
  }
  if (bVar8 && lVar1 == lVar4) {
    uVar5 = CONCAT71(uVar6,*(longlong *)(lVar2 + 0x28) == 0);
  }
LAB_140732e11:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140732f84 FUN_140732f84 body=939 status=ok
// SIG undefined FUN_140732f84(void)

int * FUN_140732f84(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = param_3[1];
    uVar10 = uVar4 >> 0xd ^ *param_3 - uVar4;
    uVar14 = uVar10 << 8 ^ (-0x61c88647 - uVar4) - uVar10;
    uVar15 = uVar14 >> 0xd ^ (uVar4 - uVar10) - uVar14;
    uVar17 = uVar15 >> 0xc ^ (uVar10 - uVar14) - uVar15;
    uVar10 = uVar17 << 0x10 ^ (uVar14 - uVar15) - uVar17;
    uVar14 = uVar10 >> 5 ^ (uVar15 - uVar17) - uVar10;
    uVar15 = uVar14 >> 3 ^ (uVar17 - uVar10) - uVar14;
    uVar10 = uVar15 << 10 ^ (uVar10 - uVar14) - uVar15;
    lVar12 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x58);
    }
    iVar18 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               (uVar10 >> 0xf ^ uVar14 - (uVar15 + uVar10))) * 4);
    if (iVar18 != -1) {
      lVar12 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar12 + (longlong)iVar18 * 0x14);
        if ((*piVar1 == *param_3) && (*(uint *)(lVar12 + 4 + (longlong)iVar18 * 0x14) == uVar4)) {
          if ((piVar1 != (int *)0x0) && (iVar18 = piVar1[2], *param_2 = iVar18, iVar18 != -1))
          goto LAB_1407330a1;
          break;
        }
        iVar18 = piVar1[3];
      } while (iVar18 != -1);
    }
  }
  uVar16 = *(undefined8 *)param_3;
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar18 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar18 + 1;
    if (*(int *)(param_1 + 0x74) == iVar18) {
      FUN_140044672(param_1 + 0x68,iVar18);
    }
    iVar8 = *(int *)(param_1 + 0x90);
    if (iVar8 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    lVar12 = param_1 + 0x78;
    iVar9 = iVar8 + 1;
    iVar13 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar13 = iVar8;
    }
    if (iVar13 >> 5 == iVar11) {
      *(int *)(param_1 + 0x90) = iVar9;
    }
    else {
      if (*(int *)(param_1 + 0x94) <= iVar8) {
        uVar4 = iVar8 + 0x20;
        local_70 = (ulonglong)uVar4;
        local_68 = uVar16;
        if (uVar4 < 0xa0) {
          iVar9 = 0x80;
          iVar11 = iVar8;
        }
        else {
          uVar4 = uVar4 >> 5;
          local_70 = (ulonglong)uVar4;
          if (*(int *)(param_1 + 0x94) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar4) {
              uVar10 = uVar4;
            }
          }
          else {
            uVar10 = (uVar4 * 3 >> 3) + uVar4 + 0x10;
          }
          uVar6 = FUN_144a3809e(uVar10 << 2,0);
          iVar11 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)local_70 <= iVar11) {
            iVar9 = iVar11 << 5;
          }
          iVar11 = *(int *)(param_1 + 0x90);
        }
        *(int *)(param_1 + 0x94) = iVar9;
        FUN_1446efbd8(lVar12,iVar11);
        iVar9 = *(int *)(param_1 + 0x90) + 1;
        uVar16 = local_68;
      }
      iVar11 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar11 = iVar9;
      }
      *(int *)(param_1 + 0x90) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar5 = lVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar5 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)(lVar5 + (longlong)(iVar11 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar18;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x88);
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar2 = (uint *)(lVar12 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar18 = *(int *)(param_1 + 0x98);
    lVar5 = (longlong)iVar18;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar5 * 0x30);
    *(int *)(param_1 + 0x98) = iVar8;
    iVar11 = *(int *)(param_1 + 0x9c) + -1;
    *(int *)(param_1 + 0x9c) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  lVar12 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x88);
  }
  iVar8 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar8 = iVar18;
  }
  puVar2 = (uint *)(lVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
  lVar12 = *(longlong *)(param_1 + 0x68);
  lVar5 = lVar5 * 0x30;
  *(undefined8 *)(lVar12 + lVar5) = uVar16;
  puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar5);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar12 + 0x19 + lVar5);
  *puVar3 = 0;
  puVar3[1] = 0;
  *param_2 = iVar18;
  local_60 = param_3;
  local_58 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_60,0);
LAB_1407330a1:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140733330 FUN_140733330 body=960 status=ok
// SIG undefined FUN_140733330(void)

void FUN_140733330(longlong param_1,char *param_2,longlong param_3)

{
  uint *puVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong unaff_RBP;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_98 [36];
  undefined1 local_74 [8];
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (**(int **)(param_1 + 0xb0) == 0) {
    if (param_3 == 0) {
      uVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar14 = *(uint *)(param_3 + 0xc);
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar13 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar4 = DAT_14c964868 + 1;
        unaff_RBP = (ulonglong)uVar4;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        unaff_RBP);
        }
        LOCK();
        uVar13 = *(uint *)(lVar12 + 0x10);
        bVar15 = uVar13 == 0;
        if (bVar15) {
          *(uint *)(lVar12 + 0x10) = uVar4;
          uVar13 = 0;
        }
        UNLOCK();
        if (bVar15) {
          uVar13 = uVar4;
        }
      }
    }
    FUN_1407336f2(param_1 + 200,local_60,param_3);
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      uVar4 = uVar13 >> 0xd ^ uVar14 - uVar13;
      uVar6 = uVar4 << 8 ^ (-0x61c88647 - uVar13) - uVar4;
      uVar8 = uVar6 >> 0xd ^ (uVar13 - uVar4) - uVar6;
      uVar11 = uVar8 >> 0xc ^ (uVar4 - uVar6) - uVar8;
      uVar4 = uVar11 << 0x10 ^ (uVar6 - uVar8) - uVar11;
      uVar6 = uVar4 >> 5 ^ (uVar8 - uVar11) - uVar4;
      uVar8 = uVar6 >> 3 ^ (uVar11 - uVar4) - uVar6;
      uVar4 = uVar8 << 10 ^ (uVar4 - uVar6) - uVar8;
      lVar12 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x58);
      }
      uVar4 = *(uint *)(lVar12 + (ulonglong)
                                 (*(int *)(param_1 + 0x60) - 1U &
                                 (uVar4 >> 0xf ^ uVar6 - (uVar8 + uVar4))) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar4 * 0x14);
          if ((*puVar1 == uVar14) &&
             (*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)(int)uVar4 * 0x14) == uVar13))
          {
            if (puVar1 != (uint *)0x0) {
              local_58 = puVar1[2];
              local_5c = *(undefined4 *)(param_1 + 0xc0);
              if ((local_58 != 0xffffffff) &&
                 (lVar12 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_60), lVar12 != 0))
              goto LAB_1407334c5;
            }
            break;
          }
          uVar4 = puVar1[3];
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  else {
LAB_1407334c5:
    FUN_1407328ba(param_1,local_74,param_3);
    piVar7 = *(int **)(param_1 + 0xb0);
    if (*piVar7 != 0) {
      FUN_140adeba6(piVar7,local_74);
      piVar7 = *(int **)(param_1 + 0xb0);
    }
    lVar12 = FUN_1400e4054(piVar7);
    if (lVar12 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (undefined4)CONCAT71((int7)(unaff_RBP >> 8),'\x02' - (*(short *)(lVar12 + 0xe) == 0))
      ;
    }
    cVar3 = FUN_1407338de(param_1,local_6c,uVar10);
    if (cVar3 == '\0') {
      local_68 = 0;
      if (param_3 != 0) {
        uVar13 = *(uint *)(param_3 + 0xc);
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar5 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar5 = *(int *)(lVar12 + 0x10);
          bVar15 = iVar5 == 0;
          if (bVar15) {
            *(int *)(lVar12 + 0x10) = iVar9;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar15) {
            iVar5 = iVar9;
          }
        }
        local_68 = CONCAT44(iVar5,uVar13);
      }
      FUN_140739a14(local_60,&local_68);
      FUN_140739902(param_1,local_6c,uVar10,local_60);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if ((CONCAT44(uStack_54,local_58) != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
    }
    if (*param_2 == '\x01') {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x28 + (longlong)local_6c * 0x30);
      *pbVar2 = *pbVar2 | 2;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407336f2 FUN_1407336f2 body=232 status=ok
// SIG undefined FUN_1407336f2(void)

undefined8 FUN_1407336f2(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_1;
  local_38 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
    local_38 = CONCAT44(iVar3,uVar1);
  }
  FUN_1407337dc(uVar2,param_2,&local_38);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407337dc FUN_1407337dc body=257 status=ok
// SIG undefined FUN_1407337dc(void)

void FUN_1407337dc(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar2 = param_3[1];
    uVar5 = uVar2 >> 0xd ^ *param_3 - uVar2;
    uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar2) - uVar5;
    uVar4 = uVar8 >> 0xd ^ (uVar2 - uVar5) - uVar8;
    uVar5 = uVar4 >> 0xc ^ (uVar5 - uVar8) - uVar4;
    uVar8 = uVar5 << 0x10 ^ (uVar8 - uVar4) - uVar5;
    uVar9 = uVar8 >> 5 ^ (uVar4 - uVar5) - uVar8;
    uVar4 = uVar9 >> 3 ^ (uVar5 - uVar8) - uVar9;
    uVar5 = uVar4 << 10 ^ (uVar8 - uVar9) - uVar4;
    lVar7 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x58);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (uVar5 >> 0xf ^ uVar9 - (uVar4 + uVar5))) * 4);
    if (iVar6 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar6 * 0x14) == uVar2)) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar6 = piVar1[3];
      } while (iVar6 != -1);
    }
  }
  *param_2 = iVar3;
  return;
}



// FUNCTION 1407338de FUN_1407338de body=160 status=ok
// SIG undefined FUN_1407338de(void)

ulonglong FUN_1407338de(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x28);
    if (((bVar2 & 2) != 0) || ((bVar2 & 1) == 0)) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar9 = 0;
        uVar8 = uVar3;
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x28;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x28));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14073397e FUN_14073397e body=461 status=ok
// SIG undefined FUN_14073397e(void)

void FUN_14073397e(longlong *param_1,uint param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x18e) & 0x20) == 0) {
    if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0xc5f);
  if (bVar1 != param_2) {
    *(char *)((longlong)param_1 + 0xc5f) = (char)param_2;
    (**(code **)(*param_1 + 0xcb0))(param_1);
  }
  lVar4 = param_1[0xcb];
  if (lVar4 == 0) {
    lVar4 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_140733b59;
    if (lVar4 == 0) goto LAB_140733a68;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140733b59:
    FUN_1456cec3c(lVar4);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  iVar2 = *(int *)(DAT_14cb06da8 + 0x38);
  if ((((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        DAT_14cb06da8 + 0x30)) &&
      ((bVar1 != param_2 || (param_3 == '\x01' && *(char *)((longlong)param_1 + 0xc5f) == '\0'))))
     && (cVar3 = FUN_14348cf12(param_1,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0), cVar3 != '\0')
     ) {
    FUN_1447cd2ec(param_1 + 0x1e4,0);
  }
LAB_140733a68:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140733b66 FUN_140733b66 body=3078 status=ok
// SIG undefined FUN_140733b66(void)

void FUN_140733b66(longlong param_1,ulonglong param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  byte bVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  int iVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_6a8 [32];
  undefined8 *local_688;
  longlong *local_680;
  undefined8 local_678;
  byte local_670;
  longlong *local_668;
  undefined2 local_652;
  ulonglong local_650;
  longlong local_648;
  undefined4 local_63c;
  ulonglong *local_638;
  undefined2 local_630;
  undefined4 local_62e;
  ulonglong local_628;
  ulonglong local_620;
  ulonglong local_618;
  float local_610;
  float local_60c;
  float local_608;
  undefined1 local_604;
  byte local_603;
  undefined1 local_602;
  byte local_601;
  ulonglong local_600;
  longlong local_5f8;
  longlong local_5f0 [2];
  undefined4 local_5dc;
  undefined8 local_5d8 [12];
  char local_578;
  undefined1 local_568 [16];
  undefined8 local_558 [12];
  char local_4f8;
  undefined1 local_488;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined4 local_448;
  longlong local_440;
  undefined **local_438 [4];
  char local_418;
  char local_408;
  longlong local_3f8 [5];
  longlong local_3d0;
  undefined1 local_3b8 [32];
  undefined1 local_398;
  longlong local_380;
  undefined4 local_378;
  int local_374;
  undefined1 local_370 [16];
  longlong local_360;
  undefined4 local_358;
  uint local_354;
  undefined8 local_350;
  longlong local_340;
  undefined4 local_338;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  longlong local_310;
  undefined1 local_308;
  longlong local_2f8 [12];
  undefined8 local_298;
  undefined8 local_290;
  undefined8 *local_288;
  float local_280;
  float local_27c;
  float local_278;
  undefined1 local_274;
  undefined1 local_273;
  longlong local_268 [12];
  char local_208;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined4 local_1e0;
  char local_188;
  undefined8 local_178;
  undefined8 local_168 [12];
  longlong local_108 [12];
  undefined1 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  if ((longlong)(int)param_3[1] != 0) {
    puVar27 = (ulonglong *)*param_3;
    local_638 = puVar27 + (longlong)(int)param_3[1] * 0x16;
    local_650 = param_2;
    local_648 = param_1;
    do {
      lVar18 = local_648;
      uVar4 = *puVar27;
      local_4f8 = '\0';
      local_488 = 0;
      FUN_140734938(uVar4,(uint)(0.5 < *(float *)((longlong)puVar27 + 0x8c) ||
                                *(float *)((longlong)puVar27 + 0x8c) == 0.5) + (int)puVar27[0x11],
                    local_568);
      cVar10 = *(char *)(uVar4 + 0x24a);
      if (cVar10 != '\x02') {
        puVar13 = &DAT_14c846480;
        if (local_4f8 != '\0') {
          puVar13 = local_558;
        }
        puVar22 = &local_178;
        for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar22 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar22 = puVar22 + 1;
        }
        FUN_1407347d2(lVar18,&local_478,cVar10,param_2);
        plVar23 = *(longlong **)(lVar18 + 8);
        param_2 = local_650;
        if ((int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)) {
          uVar14 = ((uint)(local_650 >> 0x14) & 0xffff ^ (uint)(local_650 >> 4)) * -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          plVar19 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar19 = (longlong *)plVar23[8];
          }
          iVar12 = *(int *)((longlong)plVar19 +
                           (ulonglong)((int)plVar23[9] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
          if (iVar12 != -1) {
            do {
              lVar18 = *plVar23 + (longlong)iVar12 * 0x3f0;
              if (*(ulonglong *)(*plVar23 + (longlong)iVar12 * 0x3f0) == local_650) {
                if ((lVar18 + 0x10U & 0xffffffffffffffef) != 0) {
                  local_578 = local_418;
                  if (local_418 == '\x01') {
                    puVar13 = &local_478;
                    puVar22 = local_5d8;
                    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
                      *puVar22 = *puVar13;
                      puVar13 = puVar13 + 1;
                      puVar22 = puVar22 + 1;
                    }
                  }
                  local_688 = local_5d8;
                  FUN_14769d546(lVar18 + 0x2f0,local_650,*(undefined1 *)(uVar4 + 0x24a),&local_178);
                  param_2 = local_650;
                }
                break;
              }
              iVar12 = *(int *)(lVar18 + 0x3e0);
            } while (iVar12 != -1);
          }
        }
      }
      fVar1 = *(float *)(puVar27 + 0x14);
      fVar2 = *(float *)((longlong)puVar27 + 0xa4);
      if ((*(byte *)(uVar4 + 0x120) & 1) == 0) {
        uVar9 = 1;
        if (fVar2 <= fVar1) {
LAB_140733c54:
          uVar9 = 0;
        }
      }
      else {
        if (fVar1 <= fVar2) goto LAB_140733c54;
        uVar9 = 1;
      }
      local_652 = (undefined2)puVar27[0x12];
      local_63c = *(undefined4 *)((longlong)puVar27 + 0x92);
      uVar5 = puVar27[0x11];
      puVar20 = puVar27 + 2;
      if ((int)puVar27[5] == 0) {
        puVar20 = (ulonglong *)((longlong)puVar27 + 4);
      }
      uVar6 = puVar20[1];
      fVar29 = (float)(double)puVar27[0x13];
      bVar3 = *(byte *)((longlong)puVar27 + 0xac);
      uVar15 = CONCAT71((int7)((ulonglong)((longlong)puVar27 + 4) >> 8),bVar3);
      uVar26 = CONCAT71((int7)((uVar15 & 0xffffffff) >> 8),(byte)(uVar15 & 0xffffffff) >> 3) &
               0xffffffffffffff01;
      local_604 = (undefined1)uVar26;
      bVar21 = (byte)((uVar15 & 0xffffffff) >> 1) & 1;
      if ((bVar3 & 1) == 0) {
        uVar9 = 0;
      }
      else if (*(char *)(uVar4 + 0x248) != '\0') {
        uVar9 = 0;
      }
      local_601 = (byte)((uVar15 & 0xffffffff) >> 2) & 1;
      local_630 = local_652;
      local_62e = local_63c;
      local_628 = uVar4;
      local_620 = param_2;
      local_618 = uVar5;
      local_610 = fVar1;
      local_60c = fVar2;
      local_608 = fVar29;
      local_603 = bVar21;
      local_602 = uVar9;
      local_600 = uVar6;
      if ((bVar3 & 0x10) == 0) {
        cVar10 = FUN_140735300(param_2,*(undefined8 *)(uVar4 + 0x100));
        if (cVar10 != '\0') {
          FUN_140734f76(local_5f0,param_2);
          if ((*(char *)(uVar4 + 0x249) != '\0') ||
             ((local_5f0[0] != 0 && (cVar10 = FUN_1474bffbc(), cVar10 != '\0')))) {
            FUN_14073397e(param_2,2,1);
          }
          puVar13 = (undefined8 *)FUN_14073476d(param_2);
          lVar18 = local_648;
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)FUN_14073275e(local_650);
            param_2 = local_650;
            if (puVar13 != (undefined8 *)0x0) {
              uVar14 = *(uint *)(uVar4 + 0x120);
              if ((int)uVar5 < (int)uVar6) {
                if ((uVar14 & 1) != 0) goto LAB_140733fbd;
LAB_140734328:
                bVar28 = false;
              }
              else {
                if (((float)(uVar5 >> 0x20) < (float)(uVar6 >> 0x20) && (int)uVar6 == (int)uVar5) !=
                    (bool)((byte)uVar14 & 1)) goto LAB_140734328;
LAB_140733fbd:
                bVar28 = fVar2 < fVar1;
              }
              local_2f8[0] = *(longlong *)(uVar4 + 0x130);
              if ((local_2f8[0] != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c();
              }
              local_668 = local_2f8;
              local_678 = CONCAT71(local_678._1_7_,bVar28);
              local_680 = (longlong *)CONCAT44(local_680._4_4_,fVar29);
              local_688 = (undefined8 *)CONCAT44(local_688._4_4_,fVar2);
              local_670 = bVar21;
              FUN_140735fce(*(undefined8 *)(uVar4 + 0x124),local_650,*(undefined8 *)(uVar4 + 0x100),
                            fVar1);
              lVar18 = local_648;
              uVar7 = *(undefined8 *)(local_648 + 0x20);
              local_5f8 = *(longlong *)(uVar4 + 0x100);
              uVar8 = *(undefined8 *)(uVar4 + 0x124);
              if ((DAT_14c950c29 == 1) && (local_5f8 != 0)) {
                FUN_1456cec3c();
              }
              local_680 = &local_5f8;
              local_688 = puVar13;
              local_678 = uVar8;
              FUN_140736106(uVar7,local_652,uVar26,local_63c);
              lVar18 = *(longlong *)(lVar18 + 0x20);
              local_470 = *(longlong *)(uVar4 + 0x100);
              local_478 = puVar13;
              if ((DAT_14c950c29 == 1) && (local_470 != 0)) {
                FUN_1456cec3c();
              }
              local_460 = *(undefined4 *)(uVar4 + 0x110);
              local_468 = *(undefined8 *)(uVar4 + 0x108);
              local_458 = *(undefined8 *)(uVar4 + 0x118);
              local_448 = *(undefined4 *)(uVar4 + 0x128);
              local_450 = *(undefined8 *)(uVar4 + 0x120);
              local_440 = *(longlong *)(uVar4 + 0x130);
              if (((DAT_14c950c29 & 1) != 0) && (local_440 != 0)) {
                FUN_1456cec3c();
              }
              FUN_140737604(local_438,uVar4 + 0x138);
              local_328 = *(undefined8 *)(uVar4 + 0x248);
              local_320 = *(undefined4 *)(uVar4 + 0x250);
              local_318 = *(undefined8 *)(uVar4 + 600);
              local_310 = *(longlong *)(uVar4 + 0x260);
              if ((DAT_14c950c29 == 1) && (local_310 != 0)) {
                FUN_1456cec3c();
              }
              local_308 = *(undefined1 *)(uVar4 + 0x268);
              uVar14 = *(uint *)((longlong)puVar13 + 0xc);
              if ((int)uVar14 < DAT_14c9647dc) {
                lVar17 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
              }
              else {
                lVar17 = 0;
              }
              iVar12 = *(int *)(lVar17 + 0x10);
              if (*(int *)(lVar17 + 0x10) == 0) {
                LOCK();
                iVar12 = DAT_14c964868 + 1;
                UNLOCK();
                iVar24 = DAT_14c964868 + 1;
                bVar28 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar12;
                if (bVar28) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar24);
                }
                LOCK();
                iVar12 = *(int *)(lVar17 + 0x10);
                bVar28 = iVar12 == 0;
                if (bVar28) {
                  *(int *)(lVar17 + 0x10) = iVar24;
                  iVar12 = 0;
                }
                UNLOCK();
                if (bVar28) {
                  iVar12 = iVar24;
                }
              }
              local_298 = CONCAT44(iVar12,uVar14);
              lVar17 = *(longlong *)(uVar4 + 0x100);
              if ((DAT_14c950c29 == 1) && (lVar17 != 0)) {
                FUN_1456cec3c(lVar17);
                local_290 = local_290 & 0xffffffff;
LAB_1407341ec:
                uVar14 = *(uint *)(lVar17 + 0xc);
                if ((int)uVar14 < DAT_14c9647dc) {
                  lVar17 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
                }
                else {
                  lVar17 = 0;
                }
                iVar12 = *(int *)(lVar17 + 0x10);
                if (*(int *)(lVar17 + 0x10) == 0) {
                  LOCK();
                  iVar12 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar24 = DAT_14c964868 + 1;
                  bVar28 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar12;
                  if (bVar28) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar24);
                  }
                  LOCK();
                  iVar12 = *(int *)(lVar17 + 0x10);
                  bVar28 = iVar12 == 0;
                  if (bVar28) {
                    *(int *)(lVar17 + 0x10) = iVar24;
                    iVar12 = 0;
                  }
                  UNLOCK();
                  if (bVar28) {
                    iVar12 = iVar24;
                  }
                }
                local_290 = CONCAT44(iVar12,uVar14);
              }
              else {
                local_290 = 0;
                if (lVar17 != 0) goto LAB_1407341ec;
              }
              local_288 = *(undefined8 **)(uVar4 + 0x124);
              cVar10 = FUN_140735e86(lVar18,&local_298);
              if (cVar10 != '\0') {
                FUN_14574087a(lVar18,&local_5dc,&local_298);
                local_1e8._0_4_ = 0xffffffff;
                local_1e8._4_4_ = *(undefined4 *)(lVar18 + 0xc0);
                local_1e0 = local_5dc;
                piVar16 = *(int **)(lVar18 + 0xb0);
                if (*piVar16 != 0) {
                  FUN_140adeba6(piVar16,&local_1e8);
                  piVar16 = *(int **)(lVar18 + 0xb0);
                }
                cVar10 = FUN_14115d04a(piVar16);
                cVar11 = FUN_145740952(lVar18,local_1e0,cVar10 + '\x01');
                if (cVar11 == '\0') {
                  FUN_145740a78(&local_478,&local_178);
                  FUN_145740d2a(lVar18,local_5dc,cVar10 + '\x01',&local_178);
                }
              }
              local_438[0] = &PTR_FUN_14a46ea60;
              local_338 = 0;
              if (local_340 != 0) {
                FUN_1400020a8();
              }
              local_378 = 0;
              if (local_374 != 0) {
                FUN_14472eb64(&local_380,0);
              }
              local_350 = 0xffffffff;
              local_358 = 0;
              if (0x80 < local_354) {
                local_354 = 0x80;
                FUN_1446efbd8(local_370,0);
              }
              if (local_360 != 0) {
                FUN_1400020a8();
              }
              if (local_380 != 0) {
                FUN_1400020a8();
              }
              FUN_1404dba90(local_3b8);
              if (local_3d0 != 0) {
                FUN_1400020a8();
              }
              if (local_3f8[3] != 0) {
                FUN_1400020a8();
              }
              FUN_1404dbac8(local_438);
              param_2 = local_650;
            }
          }
          else {
            local_688 = puVar13;
            (**(code **)(*(longlong *)(*(longlong *)(local_648 + 0x30) + 0xd8) + 8))
                      (*(longlong *)(local_648 + 0x30) + 0xd8,local_652,uVar26,local_63c);
            local_478 = (undefined8 *)((ulonglong)local_478 & 0xffffffffffffff00);
            FUN_1407355a4(*(undefined8 *)(lVar18 + 0x30),&local_478,puVar13);
            local_a8 = 0;
            local_408 = '\0';
            local_398 = 0;
            FUN_140734938(uVar4,uVar5,&local_478);
            if (local_408 == '\x01') {
              local_a8 = 1;
              puVar22 = &local_468;
              puVar25 = local_168;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *puVar25 = *puVar22;
                puVar22 = puVar22 + 1;
                puVar25 = puVar25 + 1;
              }
              local_178._0_1_ = (undefined1)local_478;
              local_178._4_4_ = local_478._4_4_;
              plVar23 = local_3f8;
              plVar19 = local_108;
              for (lVar17 = 0xc; lVar18 = local_648, lVar17 != 0; lVar17 = lVar17 + -1) {
                *plVar19 = *plVar23;
                plVar23 = plVar23 + 1;
                plVar19 = plVar19 + 1;
              }
            }
            FUN_1407347d2(lVar18,&local_1e8,*(undefined1 *)(uVar4 + 0x24a),local_650);
            local_208 = local_188;
            uVar7 = *(undefined8 *)(uVar4 + 0x130);
            if (local_188 == '\x01') {
              plVar23 = &local_1e8;
              plVar19 = local_2f8;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *plVar19 = *plVar23;
                plVar23 = plVar23 + 1;
                plVar19 = plVar19 + 1;
              }
            }
            uVar14 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
            local_298 = *(undefined8 *)(uVar4 + 0x100);
            local_290 = CONCAT44(local_290._4_4_,uVar14 >> 0x10 ^ uVar14);
            local_288 = &local_178;
            local_280 = fVar1;
            local_27c = fVar2;
            local_278 = fVar29;
            local_274 = uVar9;
            local_273 = *(undefined1 *)(uVar4 + 0x24a);
            if (local_208 != '\0') {
              plVar23 = local_2f8;
              plVar19 = local_268;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *plVar19 = *plVar23;
                plVar23 = plVar23 + 1;
                plVar19 = plVar19 + 1;
              }
            }
            local_1f8 = uVar7;
            FUN_140734cf0(puVar13,&local_298);
            param_2 = local_650;
          }
        }
      }
      else {
        FUN_1476af3b6(local_648,&local_630);
      }
      puVar27 = puVar27 + 0x16;
    } while (puVar27 != local_638);
  }
  if ((local_90 ^ (ulonglong)auStack_6a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073476d FUN_14073476d body=100 status=ok
// SIG undefined FUN_14073476d(void)

longlong FUN_14073476d(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xae8);
  if (lVar3 != 0) {
    uVar1 = FUN_140732678();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar3 != 0))
    {
      lVar4 = FUN_140732592();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1407347d2 FUN_1407347d2 body=170 status=ok
// SIG undefined FUN_1407347d2(void)

undefined8 * FUN_1407347d2(undefined8 param_1,undefined8 *param_2,char param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_2 + 0xc) = 0;
  if (param_3 == '\x01') {
    if ((*(longlong *)(param_4 + 0xa8) == 0) ||
       (param_4 = *(longlong *)(*(longlong *)(param_4 + 0xa8) + 0x1c8), param_4 == 0))
    goto LAB_140734806;
  }
  else if (param_3 != '\0') goto LAB_140734806;
  cVar1 = FUN_1476af83e(param_1,param_4);
  if (cVar1 != '\0') {
    FUN_14480333a(param_4,local_88);
    if (local_88 != param_2) {
      puVar3 = local_88;
      puVar4 = param_2;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
  }
LAB_140734806:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073487e FUN_14073487e body=184 status=ok
// SIG undefined FUN_14073487e(void)

void FUN_14073487e(longlong param_1,undefined2 param_2,byte param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) == 0 & (param_3 ^ 1)) == 0) {
    uVar1 = FUN_140732858();
    FUN_1407359d4(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140734938 FUN_140734938 body=721 status=ok
// SIG undefined FUN_140734938(void)

void FUN_140734938(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8 [12];
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = FUN_140734c0a();
  if (DAT_14c951858 == 0) {
    local_c0 = local_a8;
    local_a8[0] = FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_14081d0ea;
    local_c8 = &LAB_1468c5283;
    local_d0 = FUN_142809da0;
    local_d8 = L"Engine";
    local_e0 = 0x400000000;
    local_e8 = 0x10000000;
    local_f0 = 8;
    local_f8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_140734a8c;
  do {
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (lVar5 = lVar4,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       != lVar3 + 0x30)) {
      lVar5 = 0;
    }
  } while ((lVar5 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
  if (lVar5 == 0) goto LAB_140734a8c;
  lVar3 = FUN_140734c0a();
  if (DAT_14c951858 == 0) {
    local_c0 = local_a8;
    local_a8[0] = FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_14081d0ea;
    local_c8 = &LAB_1468c5283;
    local_d0 = FUN_142809da0;
    local_d8 = L"Engine";
    local_e0 = 0x400000000;
    local_e8 = 0x10000000;
    local_f0 = 8;
    local_f8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_140734a8c;
  do {
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (lVar5 = lVar4,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       != lVar3 + 0x30)) {
      lVar5 = 0;
    }
  } while ((lVar5 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
  if (lVar5 == 0) goto LAB_140734a8c;
  FUN_1407363ac(lVar5,local_a8,param_2);
  if (local_a8 != (code **)(param_3 + 0x10)) {
    if ((local_48 & 1) == 0) {
      if (param_3[0x70] != '\x01') goto LAB_140734a48;
      uVar1 = 0;
    }
    else {
      ppcVar7 = local_a8;
      ppcVar9 = (code **)(param_3 + 0x10);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *ppcVar9 = *ppcVar7;
        ppcVar7 = ppcVar7 + 1;
        ppcVar9 = ppcVar9 + 1;
      }
      uVar1 = 1;
    }
    param_3[0x70] = uVar1;
  }
LAB_140734a48:
  uVar2 = 0xffffffff;
  if (*(char *)(param_1 + 0x374) == '\x01') {
    uVar2 = *(undefined4 *)(param_1 + 0x370);
  }
  *(undefined4 *)(param_3 + 4) = uVar2;
  *param_3 = *(undefined1 *)(lVar5 + 400);
  if ((undefined8 *)(param_1 + 0x310) != (undefined8 *)(param_3 + 0x80)) {
    puVar6 = (undefined8 *)(param_1 + 0x310);
    puVar8 = (undefined8 *)(param_3 + 0x80);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    param_3[0xe0] = 1;
  }
LAB_140734a8c:
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140734c0a FUN_140734c0a body=228 status=ok
// SIG undefined FUN_140734c0a(void)

longlong FUN_140734c0a(void)

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
  if (DAT_14cab66f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_1476c1455;
    local_40 = &LAB_140e15f5e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationTrack",&DAT_14cab66f8,
                  FUN_14634d7a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab66f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140734cf0 FUN_140734cf0 body=404 status=ok
// SIG undefined FUN_140734cf0(void)

void FUN_140734cf0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  FUN_140734e9c(lVar2,param_2);
  param_1[0x88] = DAT_14c872be0;
  if (param_1[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140734e9c FUN_140734e9c body=216 status=ok
// SIG undefined FUN_140734e9c(void)

void FUN_140734e9c(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0xc40) = *(undefined1 *)((longlong)param_2 + 0x25);
  if (param_2 + 6 != (undefined8 *)(param_1 + 0xc50)) {
    if (*(char *)(param_2 + 0x12) == '\x01') {
      puVar3 = param_2 + 6;
      puVar4 = (undefined8 *)(param_1 + 0xc50);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xcb0) != '\x01') goto LAB_140734ee7;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0xcb0) = uVar1;
  }
LAB_140734ee7:
  local_28 = param_2[0x14];
  local_30 = *(undefined1 *)((longlong)param_2 + 0x24);
  local_38 = *(undefined4 *)(param_2 + 4);
  local_20 = *(undefined4 *)(param_2 + 3);
  local_40 = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_48 = &local_20;
  local_1c = 1;
  FUN_140738264(param_1,*param_2,*(undefined4 *)(param_2 + 1),param_2[2]);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140734f76 FUN_140734f76 body=603 status=ok
// SIG undefined FUN_140734f76(void)

longlong * FUN_140734f76(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_1407351d2(param_2);
  if ((plVar2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (plVar2 == (longlong *)0x0) goto LAB_140734fb5;
  }
  else {
    FUN_1456cec3c(plVar2);
  }
  lVar3 = FUN_1402e44f4();
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= (int)plVar2[7])) &&
     (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
    lVar3 = FUN_1402e44f4();
    if ((lVar3 == 0) || ((int)plVar2[7] < *(int *)(lVar3 + 0x38))) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30) {
        plVar6 = plVar2;
      }
    }
    lVar3 = plVar6[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar3 = plVar6[0x22];
      if (lVar3 == 0) goto LAB_140734fb5;
    }
    lVar8 = *(longlong *)(lVar3 + 0x10);
    if (((lVar8 != 0) && (lVar4 = FUN_14073521a(), lVar4 != 0)) &&
       ((*(byte *)(lVar4 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468b50ee;
        local_60 = FUN_1427f23a3;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if (DAT_14c950d78 != lVar4) {
        do {
          if (0 < (longlong)*(int *)(lVar8 + 0x1e0)) {
            lVar7 = 0;
            do {
              lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x1d8) + lVar7);
              if (((lVar1 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30)) {
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(lVar3);
                }
                *param_1 = lVar3;
                uVar5 = FUN_14073521a();
                lVar3 = FUN_144718840(lVar3,uVar5);
                param_1[1] = lVar3;
                goto LAB_140734fbb;
              }
              lVar7 = lVar7 + 0x10;
            } while ((longlong)*(int *)(lVar8 + 0x1e0) * 0x10 != lVar7);
          }
          lVar8 = *(longlong *)(lVar8 + 0x40);
        } while (lVar8 != 0);
      }
    }
  }
LAB_140734fb5:
  *param_1 = 0;
  param_1[1] = 0;
LAB_140734fbb:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407351d2 FUN_1407351d2 body=72 status=ok
// SIG undefined FUN_1407351d2(void)

undefined8 FUN_1407351d2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xae0);
  if ((((lVar1 != 0) && (lVar2 = FUN_1402e44f4(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0xae0);
  }
  return 0;
}



// FUNCTION 14073521a FUN_14073521a body=228 status=ok
// SIG undefined FUN_14073521a(void)

longlong FUN_14073521a(void)

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
  if (DAT_14caa9ef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1474c0116;
    local_40 = FUN_14632fc82;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AnimGraphRuntime",L"SequencerAnimationOverride",&DAT_14caa9ef0,
                  FUN_14632fc60);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa9ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140735300 FUN_140735300 body=675 status=ok
// SIG undefined FUN_140735300(void)

bool FUN_140735300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar1 != 0) != 0) goto LAB_1407354e1;
    if (lVar1 != 0) goto LAB_14073533c;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1407354e1:
      FUN_1456cec3c(lVar1);
    }
LAB_14073533c:
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464003b0;
      local_48 = &LAB_147d17bdf;
      local_50 = &LAB_1417edf22;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
      plVar2 = *(longlong **)(param_1 + 0x658);
      if (plVar2 == (longlong *)0x0) {
        plVar2 = *(longlong **)(param_1 + 0x660);
        if ((DAT_14c950c29 & plVar2 != (longlong *)0x0) != 0) goto LAB_1407354ee;
        if (plVar2 != (longlong *)0x0) goto LAB_14073538c;
LAB_14073543c:
        plVar2 = (longlong *)0x0;
      }
      else {
        if (DAT_14c950c29 != 0) {
LAB_1407354ee:
          FUN_1456cec3c(plVar2);
          if (DAT_14cb06da8 == 0) {
            local_40 = &local_28;
            local_28 = FUN_1449e2820;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_1464003b0;
            local_48 = &LAB_147d17bdf;
            local_50 = &LAB_1417edf22;
            local_58 = L"Engine";
            local_60 = 0;
            local_68 = 0x10000000;
            local_70 = 8;
            local_78 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
        }
LAB_14073538c:
        if ((*(int *)(plVar2[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
            DAT_14cb06da8 + 0x30)) goto LAB_14073543c;
      }
      lVar1 = (**(code **)(*plVar2 + 0x3f8))(plVar2);
      bVar3 = false;
      if ((param_2 != 0) && (lVar1 != 0)) {
        bVar3 = *(longlong *)(param_2 + 0x40) != 0;
      }
      goto LAB_1407353d2;
    }
  }
  bVar3 = false;
LAB_1407353d2:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407355a4 FUN_1407355a4 body=1071 status=ok
// SIG undefined FUN_1407355a4(void)

ulonglong FUN_1407355a4(longlong param_1,char *param_2,longlong param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  uint local_54;
  undefined1 local_4d;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (**(int **)(param_1 + 0xb0) == 0) {
    if (param_3 == 0) {
      uVar15 = 0;
      uVar13 = 0;
    }
    else {
      uVar15 = *(uint *)(param_3 + 0xc);
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar13 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar13 = *(uint *)(lVar12 + 0x10);
        bVar16 = uVar13 == 0;
        if (bVar16) {
          *(uint *)(lVar12 + 0x10) = uVar6;
          uVar13 = 0;
        }
        UNLOCK();
        if (bVar16) {
          uVar13 = uVar6;
        }
      }
    }
    FUN_1407336f2(param_1 + 200,local_5c,param_3);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x20) != *(uint *)(param_1 + 0x4c)) {
      uVar6 = uVar13 >> 0xd ^ uVar15 - uVar13;
      uVar8 = uVar6 << 8 ^ (-0x61c88647 - uVar13) - uVar6;
      uVar10 = uVar8 >> 0xd ^ (uVar13 - uVar6) - uVar8;
      uVar11 = uVar10 >> 0xc ^ (uVar6 - uVar8) - uVar10;
      uVar6 = uVar11 << 0x10 ^ (uVar8 - uVar10) - uVar11;
      uVar8 = uVar6 >> 5 ^ (uVar10 - uVar11) - uVar6;
      uVar10 = uVar8 >> 3 ^ (uVar11 - uVar6) - uVar8;
      uVar6 = uVar10 << 10 ^ (uVar6 - uVar8) - uVar10;
      uVar7 = param_1 + 0x50;
      if (*(ulonglong *)(param_1 + 0x58) != 0) {
        uVar7 = *(ulonglong *)(param_1 + 0x58);
      }
      uVar6 = *(uint *)(uVar7 + (ulonglong)
                                (*(int *)(param_1 + 0x60) - 1U &
                                (uVar6 >> 0xf ^ uVar8 - (uVar10 + uVar6))) * 4);
      if (uVar6 != 0xffffffff) {
        uVar7 = *(ulonglong *)(param_1 + 0x18);
        do {
          puVar1 = (uint *)(uVar7 + (longlong)(int)uVar6 * 0x14);
          if ((*puVar1 == uVar15) && (*(uint *)(uVar7 + 4 + (longlong)(int)uVar6 * 0x14) == uVar13))
          {
            if (puVar1 != (uint *)0x0) {
              local_54 = puVar1[2];
              uVar7 = (ulonglong)local_54;
              local_58 = *(undefined4 *)(param_1 + 0xc0);
              if (local_54 != 0xffffffff) {
                lVar12 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_5c);
                uVar7 = 0;
                if (lVar12 != 0) goto LAB_14073573b;
              }
            }
            break;
          }
          uVar6 = puVar1[3];
        } while (uVar6 != 0xffffffff);
      }
    }
    goto LAB_14073579d;
  }
LAB_14073573b:
  FUN_1407359d4(param_1,local_5c,param_3);
  piVar9 = *(int **)(param_1 + 0xb0);
  if (*piVar9 != 0) {
    FUN_140adeba6(piVar9,local_5c);
    piVar9 = *(int **)(param_1 + 0xb0);
  }
  uVar13 = local_54;
  lVar14 = (longlong)(int)local_54;
  lVar12 = FUN_1400e4054(piVar9);
  if (lVar12 == 0) {
    uVar7 = 0;
  }
  else {
    sVar4 = *(short *)(lVar12 + 0xe);
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 9 + lVar14 * 0xc);
    uVar7 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x68) >> 8),bVar3);
    if (sVar4 == 0) {
      if ((bVar3 & 1) == 0) {
LAB_1407357ec:
        if (param_3 != 0) {
          uVar15 = *(uint *)(param_3 + 0xc);
          if ((int)uVar15 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          uVar7 = (ulonglong)*(uint *)(lVar12 + 0x10);
          if (*(uint *)(lVar12 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            local_60 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,local_60);
            }
            uVar7 = 0;
            LOCK();
            uVar15 = *(uint *)(lVar12 + 0x10);
            if (uVar15 == 0) {
              *(uint *)(lVar12 + 0x10) = local_60;
            }
            else {
              uVar7 = (ulonglong)uVar15;
            }
            UNLOCK();
          }
        }
        local_4d = 1;
        local_4c = uVar13;
        lVar12 = lVar14 * 0xc + *(longlong *)(param_1 + 0x68);
        if (sVar4 == 0) {
          *(undefined1 *)(lVar12 + 8) = 1;
          *(byte *)(lVar12 + 9) = *(byte *)(lVar12 + 9) | 3;
        }
        else if ((*(byte *)(lVar12 + 9) & 1) == 0) {
          *(undefined1 *)(lVar12 + 8) = 1;
          uVar7 = CONCAT71((int7)(uVar7 >> 8),*(byte *)(lVar12 + 9)) | 1;
          *(char *)(lVar12 + 9) = (char)uVar7;
          local_4c = uVar13;
        }
        else {
          uVar7 = FUN_147674228(param_1 + 0xa0,&local_4c,&local_4d);
        }
      }
    }
    else if (((bVar3 & 2) != 0) || ((bVar3 & 1) == 0)) {
      uVar15 = *(uint *)(param_1 + 0xa8);
      uVar7 = *(ulonglong *)(param_1 + 0xa0);
      uVar6 = 0;
      if (0 < (int)uVar15) {
        uVar6 = 0;
        uVar8 = uVar15;
        do {
          uVar10 = (uVar8 >> 1) + uVar6;
          if (*(int *)(uVar7 + (ulonglong)uVar10 * 8) < (int)uVar13) {
            uVar6 = uVar10 + (uVar8 & 1);
          }
          bVar16 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar16);
      }
      if ((((int)uVar15 <= (int)uVar6) || ((int)uVar13 < *(int *)(uVar7 + (ulonglong)uVar6 * 8))) ||
         (uVar7 = uVar7 + (ulonglong)uVar6 * 8, uVar7 == 0xfffffffffffffffc)) goto LAB_1407357ec;
    }
  }
  if (*param_2 == '\x01') {
    uVar7 = *(ulonglong *)(param_1 + 0x68);
    pbVar2 = (byte *)(uVar7 + 9 + lVar14 * 0xc);
    *pbVar2 = *pbVar2 | 2;
  }
LAB_14073579d:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1407359d4 FUN_1407359d4 body=281 status=ok
// SIG undefined FUN_1407359d4(void)

longlong FUN_1407359d4(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    local_40 = CONCAT44(iVar2,uVar1);
  }
  FUN_140735aee(param_1,&local_44,&local_40);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140735aee FUN_140735aee body=919 status=ok
// SIG undefined FUN_140735aee(void)

int * FUN_140735aee(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar3 = param_3[1];
    uVar10 = uVar3 >> 0xd ^ *param_3 - uVar3;
    uVar13 = uVar10 << 8 ^ (-0x61c88647 - uVar3) - uVar10;
    uVar14 = uVar13 >> 0xd ^ (uVar3 - uVar10) - uVar13;
    uVar16 = uVar14 >> 0xc ^ (uVar10 - uVar13) - uVar14;
    uVar10 = uVar16 << 0x10 ^ (uVar13 - uVar14) - uVar16;
    uVar13 = uVar10 >> 5 ^ (uVar14 - uVar16) - uVar10;
    uVar14 = uVar13 >> 3 ^ (uVar16 - uVar10) - uVar13;
    uVar10 = uVar14 << 10 ^ (uVar10 - uVar13) - uVar14;
    lVar11 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x58);
    }
    iVar17 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               (uVar10 >> 0xf ^ uVar13 - (uVar14 + uVar10))) * 4);
    if (iVar17 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar11 + (longlong)iVar17 * 0x14);
        if ((*piVar1 == *param_3) && (*(uint *)(lVar11 + 4 + (longlong)iVar17 * 0x14) == uVar3)) {
          if ((piVar1 != (int *)0x0) && (iVar17 = piVar1[2], *param_2 = iVar17, iVar17 != -1))
          goto LAB_140735c0b;
          break;
        }
        iVar17 = piVar1[3];
      } while (iVar17 != -1);
    }
  }
  uVar15 = *(undefined8 *)param_3;
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar17 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar17 + 1;
    if (*(int *)(param_1 + 0x74) == iVar17) {
      FUN_1447cc1b4(param_1 + 0x68,iVar17);
    }
    iVar8 = *(int *)(param_1 + 0x90);
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
    lVar11 = param_1 + 0x78;
    iVar9 = iVar8 + 1;
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    if (iVar12 >> 5 == iVar7) {
      *(int *)(param_1 + 0x90) = iVar9;
    }
    else {
      if (*(int *)(param_1 + 0x94) <= iVar8) {
        uVar3 = iVar8 + 0x20;
        local_70 = (ulonglong)uVar3;
        local_68 = uVar15;
        if (uVar3 < 0xa0) {
          iVar9 = 0x80;
          iVar7 = iVar8;
        }
        else {
          uVar3 = uVar3 >> 5;
          local_70 = (ulonglong)uVar3;
          if (*(int *)(param_1 + 0x94) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar3) {
              uVar10 = uVar3;
            }
          }
          else {
            uVar10 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar10 << 2,0);
          iVar7 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)local_70 <= iVar7) {
            iVar9 = iVar7 << 5;
          }
          iVar7 = *(int *)(param_1 + 0x90);
        }
        *(int *)(param_1 + 0x94) = iVar9;
        FUN_1446efbd8(lVar11,iVar7);
        iVar9 = *(int *)(param_1 + 0x90) + 1;
        uVar15 = local_68;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 0x90) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar4 = lVar11;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar17;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x88);
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar2 = (uint *)(lVar11 + (longlong)(iVar12 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x98);
    lVar4 = (longlong)iVar17;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar4 * 0xc);
    *(int *)(param_1 + 0x98) = iVar8;
    iVar7 = *(int *)(param_1 + 0x9c) + -1;
    *(int *)(param_1 + 0x9c) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar8 * 0xc) = 0xffffffff;
    }
  }
  lVar11 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x88);
  }
  iVar8 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar8 = iVar17;
  }
  puVar2 = (uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar17 & 0x1f);
  lVar11 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(lVar11 + lVar4 * 0xc) = uVar15;
  *(undefined1 *)(lVar11 + 9 + lVar4 * 0xc) = 0;
  *param_2 = iVar17;
  local_60 = param_3;
  local_58 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_60,0);
LAB_140735c0b:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140735e86 FUN_140735e86 body=201 status=ok
// SIG undefined FUN_140735e86(void)

undefined8 FUN_140735e86(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar7;
  undefined7 uVar8;
  longlong *plVar9;
  byte bVar10;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  undefined8 uVar6;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar2 = *(int **)(param_1 + 0xb0);
  if (*piVar2 != 0) {
    uVar6 = CONCAT71((int7)(local_28 >> 8),1);
    goto LAB_140735ee7;
  }
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_14073624c(&local_48);
  plVar9 = plVar1;
  iVar5 = FUN_140735f50(plVar1,uVar4,&local_48);
  bVar10 = (byte)plVar9;
  if ((iVar5 == -1) || (lVar7 = (longlong)iVar5 * 0x24 + *plVar1, lVar7 == 0)) {
LAB_140735ee3:
    bVar3 = 0;
    uVar8 = 0;
  }
  else {
    local_4c = *(int *)(lVar7 + 0x18);
    local_54 = 0xffffffff;
    local_50 = *(undefined4 *)(param_1 + 0xc0);
    bVar10 = (byte)local_50;
    if (local_4c == -1) goto LAB_140735ee3;
    lVar7 = FUN_1400e4054(piVar2,&local_54);
    bVar10 = lVar7 != 0;
    uVar8 = (undefined7)((ulonglong)lVar7 >> 8);
    bVar3 = 1;
  }
  uVar6 = CONCAT71(uVar8,bVar3 & bVar10);
LAB_140735ee7:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140735f50 FUN_140735f50 body=126 status=ok
// SIG undefined FUN_140735f50(void)

int FUN_140735f50(longlong *param_1,uint param_2,int *param_3)

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
        lVar5 = (longlong)iVar2;
        if ((((*(int *)(lVar3 + lVar5 * 0x24) == *param_3) &&
             (*(int *)(lVar3 + 4 + lVar5 * 0x24) == param_3[1])) &&
            (lVar1 = lVar3 + lVar5 * 0x24, *(int *)(lVar1 + 8) == param_3[2])) &&
           ((*(int *)(lVar1 + 0xc) == param_3[3] &&
            (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_3 + 4))))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x1c + lVar5 * 0x24);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 140735fce FUN_140735fce body=311 status=ok
// SIG undefined FUN_140735fce(void)

void FUN_140735fce(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,byte param_8,
                  longlong *param_9)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_2 + 0xae8);
  local_48 = param_1;
  if (lVar3 != 0) {
    if ((longlong)*(int *)(lVar3 + 0x428) != 0) {
      plVar2 = *(longlong **)(lVar3 + 0x420);
      lVar1 = (longlong)*(int *)(lVar3 + 0x428) * 0x30;
      do {
        if ((*plVar2 == param_1) && (plVar2[1] == param_3)) {
          if (plVar2 != (longlong *)0x0) goto LAB_14073607e;
          break;
        }
        plVar2 = plVar2 + 6;
        lVar1 = lVar1 + -0x30;
      } while (lVar1 != 0);
    }
    local_50 = *param_9;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    plVar2 = (longlong *)FUN_1410b0eba(lVar3,&local_48,param_3,&local_50);
    if (plVar2 != (longlong *)0x0) {
LAB_14073607e:
      *(undefined4 *)(plVar2 + 2) = param_6;
      *(undefined4 *)(plVar2 + 3) = param_4;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = param_5;
      *(undefined1 *)(plVar2 + 4) = param_7;
      *(byte *)((longlong)plVar2 + 0x14) = param_8 ^ 1;
      lVar3 = *param_9;
      if (DAT_14c950c29 == 1) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *param_9;
        }
      }
      plVar2[5] = lVar3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140736106 FUN_140736106 body=325 status=ok
// SIG undefined FUN_140736106(void)

void FUN_140736106(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined2 *local_d8;
  undefined8 local_d0;
  char local_c8;
  undefined2 local_be;
  undefined2 local_bc;
  undefined6 uStack_ba;
  undefined4 local_b4;
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar2 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((**(int **)(param_1 + 0xb0) != 0) || (param_3 != '\0')) {
    local_90 = 0x10000000000;
    local_68 = 0x10000000000;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    lVar1 = FUN_14009d2a0();
    local_bc = *(undefined2 *)(lVar1 + 0x11a);
    local_d0 = &uStack_ba;
    local_d8 = &local_bc;
    FUN_1447c44f6(local_b0,&local_d8);
    local_e8 = &stack0x00000038;
    FUN_145740c3a(param_1,&local_bc,&param_5,uVar2);
    uVar2 = FUN_140732858(*(undefined8 *)(param_1 + 0xb0));
    local_d8 = (undefined2 *)CONCAT62(uStack_ba,local_bc);
    local_d0 = (undefined6 *)CONCAT44(param_4,local_b4);
    local_c8 = param_3;
    local_be = param_2;
    FUN_1449da5a2(uVar2,&local_be,&local_d8);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073624c FUN_14073624c body=352 status=ok
// SIG undefined FUN_14073624c(void)

uint FUN_14073624c(int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1[1];
  uVar2 = uVar3 >> 0xd ^ *param_1 - uVar3;
  uVar4 = uVar2 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
  uVar6 = uVar4 >> 0xd ^ (uVar3 - uVar2) - uVar4;
  uVar3 = uVar6 >> 0xc ^ (uVar2 - uVar4) - uVar6;
  uVar2 = uVar3 << 0x10 ^ (uVar4 - uVar6) - uVar3;
  uVar4 = uVar2 >> 5 ^ (uVar6 - uVar3) - uVar2;
  uVar5 = uVar4 >> 3 ^ (uVar3 - uVar2) - uVar4;
  uVar6 = uVar5 << 10 ^ (uVar2 - uVar4) - uVar5;
  uVar3 = param_1[3];
  uVar2 = uVar3 >> 0xd ^ param_1[2] - uVar3;
  uVar7 = uVar2 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
  uVar3 = uVar7 >> 0xd ^ (uVar3 - uVar2) - uVar7;
  uVar2 = uVar3 >> 0xc ^ (uVar2 - uVar7) - uVar3;
  uVar7 = uVar2 << 0x10 ^ (uVar7 - uVar3) - uVar2;
  uVar8 = uVar7 >> 5 ^ (uVar3 - uVar2) - uVar7;
  uVar2 = uVar8 >> 3 ^ (uVar2 - uVar7) - uVar8;
  uVar7 = uVar2 << 10 ^ (uVar7 - uVar8) - uVar2;
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  return ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4) ^ uVar6 >> 0xf ^ uVar4 - (uVar5 + uVar6) ^
         uVar7 >> 0xf ^ uVar8 - (uVar2 + uVar7);
}



// FUNCTION 1407363ac FUN_1407363ac body=4464 status=ok
// SIG undefined FUN_1407363ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1407363ac(longlong param_1,double *param_2,ulonglong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  longlong *plVar12;
  double *pdVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar30;
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar40;
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_7d8 [32];
  undefined4 local_7b8;
  undefined4 local_7b0;
  undefined4 local_7a8;
  undefined8 local_7a0;
  wchar_t *local_798;
  code *local_790;
  undefined1 *local_788;
  code **local_780;
  code *local_778;
  code *local_770;
  longlong *local_760;
  undefined1 local_758 [16];
  undefined1 local_748 [16];
  undefined1 local_730 [24];
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8;
  undefined8 local_6c0;
  double local_6b8;
  ulonglong uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 *local_690;
  undefined8 local_688;
  longlong local_680;
  char local_678;
  undefined8 local_670;
  double local_668 [2];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  longlong local_608;
  undefined8 uStack_600;
  longlong local_5f8;
  undefined8 uStack_5f0;
  longlong local_5e8;
  undefined8 uStack_5e0;
  longlong local_5d8;
  undefined8 uStack_5d0;
  ulonglong local_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  code *local_598;
  undefined1 *puStack_590;
  undefined1 local_588 [16];
  double local_578 [4];
  undefined1 local_558 [16];
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined1 local_3e0 [360];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  *(undefined1 *)(param_2 + 0xc) = 0;
  local_5c0 = param_3;
  lVar8 = FUN_14073751e();
  if (DAT_14c951858 == 0) {
    local_780 = &local_598;
    local_598 = FUN_1449e2820;
    local_770 = FUN_14081d0ea;
    local_778 = FUN_14081d0ea;
    local_788 = &LAB_1468c5283;
    local_790 = FUN_142809da0;
    local_798 = L"Engine";
    local_7a0 = 0x400000000;
    local_7a8 = 0x10000000;
    local_7b0 = 8;
    local_7b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar9 = *(longlong *)(param_1 + 0x20);
  if (lVar9 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (lVar10 = lVar9,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
         != lVar8 + 0x30)) {
        lVar10 = 0;
      }
    } while ((lVar10 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
    if (lVar10 != 0) {
      dVar1 = *(double *)(lVar10 + 0x118);
      if (*(char *)(param_1 + 0x128) == '\x01') {
        FUN_14073a9be(param_1);
      }
      if (*(char *)(param_1 + 0x129) != '\0') {
        FUN_14073bf5e(param_1);
        local_5d8 = 0;
        uStack_5d0 = 0;
        local_5e8 = 0;
        uStack_5e0 = 0;
        local_5f8 = 0;
        uStack_5f0 = 0;
        local_608 = 0;
        uStack_600 = 0;
        pdVar11 = (double *)&DAT_14c846480;
        pdVar13 = local_668;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *pdVar13 = *pdVar11;
          pdVar11 = pdVar11 + 1;
          pdVar13 = pdVar13 + 1;
        }
        if ((longlong)*(int *)(param_1 + 0x100) != 0) {
          plVar14 = *(longlong **)(param_1 + 0xf8);
          local_760 = plVar14 + *(int *)(param_1 + 0x100);
          do {
            lVar8 = *plVar14;
            if (lVar8 != 0) {
              lVar9 = FUN_140f157e0();
              if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                 (*(longlong *)(lVar8 + 0x100) != 0)) {
                local_598 = *(code **)(lVar8 + 0x98);
                puStack_590 = *(undefined1 **)(lVar8 + 0xa0);
                cVar4 = FUN_1400a246c(&local_598,&local_5c0);
                if (cVar4 != '\0') {
                  lVar9 = *(longlong *)(lVar8 + 0x100);
                  puStack_590 = local_3e0;
                  local_598 = FUN_140036a08;
                  lVar10 = FUN_144a773aa(&local_598,&DAT_14c7585d0);
                  local_690 = (undefined8 *)(lVar10 + 0x10);
                  local_688 = *(undefined8 *)(lVar10 + 0x10);
                  local_680 = *(longlong *)(lVar10 + 0x20);
                  local_678 = '\0';
                  local_670 = *(undefined8 *)(lVar10 + 0x28);
                  *(undefined8 ***)(lVar10 + 0x28) = &local_690;
                  *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
                  local_6a8 = 0;
                  uStack_6a0 = 0;
                  local_698 = 0;
                  local_6b8 = 0.0;
                  uVar6 = *(uint *)(*(longlong *)(lVar9 + 0x40) + 0x78);
                  uStack_6b0 = (ulonglong)uVar6;
                  iVar7 = 0;
                  if (uVar6 != 0) {
                    FUN_14488eebe(&local_6b8,0);
                    iVar7 = (int)uStack_6b0;
                    if (0 < (int)uStack_6b0) {
                      lVar10 = 0;
                      do {
                        *(short *)((longlong)local_6b8 + lVar10 * 2) = (short)lVar10;
                        lVar10 = lVar10 + 1;
                      } while (lVar10 < (int)uStack_6b0);
                    }
                  }
                  local_598 = (code *)0x0;
                  puStack_590 = (undefined1 *)(((ulonglong)puStack_590 >> 8 & 0xffffff) << 8);
                  local_178 = local_6b8;
                  local_170 = (double)CONCAT44(local_170._4_4_,iVar7);
                  FUN_143417438(local_3e0,&local_178,&local_598,*(undefined8 *)(lVar9 + 0x40));
                  FUN_1448859f0(&local_6a8,local_3e0);
                  local_6c0 = 0;
                  local_6d8 = 0;
                  uStack_6d0 = 0;
                  local_6c8 = 0;
                  FUN_1478e2e96(&local_6d8,local_3e0);
                  local_6e8 = 0;
                  uStack_6e0 = 0;
                  local_6f8 = 0;
                  uStack_6f0 = 0;
                  local_708 = 0;
                  uStack_700 = 0;
                  local_718 = 0;
                  uStack_710 = 0;
                  FUN_1447166a4(local_730,&local_6a8,&local_6d8,&local_718);
                  local_578[0] = 0.0;
                  local_578[1] = 0.0;
                  local_578[2] = 0.0;
                  local_578[3] = 1.0;
                  local_548 = 0.0;
                  dStack_540 = 0.0;
                  local_558 = ZEXT816(0);
                  local_538 = 1.0;
                  dStack_530 = 1.0;
                  local_528 = 1.0;
                  dStack_520 = 0.0;
                  local_518 = 0;
                  uStack_510 = 0;
                  local_508 = 0;
                  uStack_504 = 0;
                  uStack_500 = 0;
                  uStack_4fc = 0x3ff00000;
                  local_4e8 = 0;
                  uStack_4e0 = 0;
                  local_4f8 = 0;
                  uStack_4f0 = 0;
                  local_4d8 = 0x3ff0000000000000;
                  uStack_4d0 = 0x3ff0000000000000;
                  local_4c8 = 0x3ff0000000000000;
                  uStack_4c0 = 0;
                  local_4b8 = 0;
                  uStack_4b0 = 0;
                  local_4a8 = 0;
                  uStack_4a4 = 0;
                  uStack_4a0 = 0;
                  uStack_49c = 0x3ff00000;
                  local_488 = 0;
                  uStack_480 = 0;
                  local_498 = 0;
                  uStack_490 = 0;
                  local_478 = 0x3ff0000000000000;
                  uStack_470 = 0x3ff0000000000000;
                  local_468 = 0x3ff0000000000000;
                  uStack_460 = 0;
                  local_458 = 0;
                  uStack_450 = 0;
                  local_448 = 0;
                  uStack_444 = 0;
                  uStack_440 = 0;
                  uStack_43c = 0x3ff00000;
                  local_428 = 0;
                  uStack_420 = 0;
                  local_438 = 0;
                  uStack_430 = 0;
                  local_418 = 0x3ff0000000000000;
                  uStack_410 = 0x3ff0000000000000;
                  local_408 = 0x3ff0000000000000;
                  uStack_400 = 0;
                  local_598 = (code *)(local_5c0 & 0xffffffff);
                  lVar9 = lVar8;
                  puStack_590 = (undefined1 *)dVar1;
                  uVar5 = FUN_1475cfc5c(lVar8,local_730,&local_598);
                  dVar2 = dStack_520;
                  dVar23 = local_528;
                  dVar22 = dStack_530;
                  dVar19 = local_538;
                  uVar15 = uStack_5f0;
                  auVar32 = _DAT_149934d80;
                  if ((char)uVar5 != '\0') {
                    if (local_588[0] == '\0') {
                      auVar29 = *(undefined1 (*) [16])(lVar8 + 0x350);
                      dVar26 = auVar29._0_8_;
                      dVar31 = auVar29._8_8_;
                      auVar17 = *(undefined1 (*) [16])(lVar8 + 0x360);
                      dVar27 = auVar17._0_8_;
                      local_758._8_8_ = dStack_530;
                      local_758._0_8_ = local_538;
                      local_748._8_8_ = dStack_520;
                      local_748._0_8_ = local_528;
                      auVar29 = minpd(local_758,auVar29);
                      auVar24 = minpd(local_748,auVar17);
                      auVar20._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
                      auVar20._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
                      iVar7 = movmskpd(uVar5,auVar20);
                      auVar29._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
                      auVar29._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
                      uVar6 = movmskpd((int)lVar9,auVar29);
                      if ((uVar6 & 0x3fffffff) == 0 && iVar7 == 0) {
                        dVar36 = *(double *)(lVar8 + 0x310);
                        dVar40 = *(double *)(lVar8 + 0x318);
                        dVar35 = *(double *)(lVar8 + 800);
                        dVar3 = *(double *)(lVar8 + 0x328);
                        dVar38 = *(double *)(lVar8 + 0x328);
                        dVar41 = *(double *)(lVar8 + 0x328);
                        dVar43 = *(double *)(lVar8 + 0x310);
                        dVar44 = *(double *)(lVar8 + 0x310);
                        dVar34 = *(double *)(lVar8 + 0x318);
                        dVar37 = *(double *)(lVar8 + 0x318);
                        dVar18 = *(double *)(lVar8 + 800);
                        dVar30 = *(double *)(lVar8 + 800);
                        local_668[0] = local_578[1] * dVar18 * -1.0 +
                                       local_578[2] * dVar34 +
                                       local_578[3] * dVar43 * 1.0 + local_578[0] * dVar38;
                        local_668[1] = local_578[0] * dVar30 * 1.0 +
                                       local_578[3] * dVar37 +
                                       local_578[2] * dVar44 * -1.0 + local_578[1] * dVar41;
                        local_658._0_8_ =
                             local_578[3] * dVar18 * 1.0 +
                             ((dVar43 * local_578[1] * 1.0 + local_578[2] * dVar38) -
                             local_578[0] * dVar34);
                        local_658._8_8_ =
                             local_578[2] * dVar30 * -1.0 +
                             ((dVar44 * local_578[0] * -1.0 + local_578[3] * dVar41) -
                             local_578[1] * dVar37);
                        dVar18 = (double)local_558._0_8_ * dVar26;
                        dVar45 = (double)local_558._8_8_ * dVar31;
                        dVar43 = local_548 * dVar27;
                        dVar44 = dStack_540 * auVar17._8_8_;
                        dVar34 = dVar45 * dVar36 - dVar40 * dVar18;
                        dVar37 = dVar43 * dVar40 - dVar35 * dVar45;
                        dVar30 = dVar18 * dVar35 - dVar36 * dVar43;
                        dVar42 = dVar44 * dVar3 - dVar3 * dVar44;
                        dVar37 = dVar37 + dVar37;
                        dVar30 = dVar30 + dVar30;
                        dVar34 = dVar34 + dVar34;
                        dVar42 = dVar42 + dVar42;
                        dVar18 = (dVar34 * dVar40 - dVar35 * dVar30) + dVar38 * dVar37 + dVar18 +
                                 *(double *)(lVar8 + 0x330);
                        dVar35 = (dVar37 * dVar35 - dVar34 * dVar36) + dVar41 * dVar30 + dVar45 +
                                 *(double *)(lVar8 + 0x338);
                        dVar38 = (dVar30 * dVar36 - dVar40 * dVar37) + dVar38 * dVar34 + dVar43 +
                                 *(double *)(lVar8 + 0x340);
                        dVar41 = (dVar42 * dVar3 - dVar42 * dVar3) + dVar41 * dVar42 + dVar44 +
                                 *(double *)(lVar8 + 0x348);
                      }
                      else {
                        dVar34 = *(double *)(lVar8 + 0x310);
                        dVar37 = *(double *)(lVar8 + 0x318);
                        dVar41 = *(double *)(lVar8 + 800);
                        dVar30 = dVar37 + dVar37;
                        dVar35 = dVar41 + dVar41;
                        dVar18 = dVar34 * (dVar34 + dVar34);
                        local_1a8 = (1.0 - (dVar18 + dVar37 * dVar30)) * dVar27;
                        dVar43 = *(double *)(lVar8 + 0x310) * dVar35;
                        dVar38 = *(double *)(lVar8 + 0x328);
                        dVar36 = dVar35 * dVar38;
                        dVar40 = (dVar34 + dVar34) * *(double *)(lVar8 + 0x328);
                        dVar38 = dVar30 * dVar38;
                        local_1b8 = (dVar38 + dVar43) * dVar27;
                        dVar44 = dVar27 * local_528;
                        local_1f8 = ((double)DAT_149934d80 - (dVar41 * dVar35 + dVar37 * dVar30)) *
                                    dVar26;
                        dVar41 = (DAT_149934d80._8_8_ - (dVar41 * dVar35 + dVar18)) * dVar31;
                        dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar26;
                        local_1c8 = (dVar35 * dVar37 + dVar40) * dVar31;
                        dStack_1b0 = (dVar35 * dVar37 - dVar40) * dVar27;
                        local_1e8 = (dVar43 - dVar38) * dVar26;
                        uStack_1e0 = 0;
                        local_1d8._8_4_ = SUB84(dVar41,0);
                        local_1d8._0_8_ = (dVar30 * dVar34 - dVar36) * dVar31;
                        local_1d8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                        uStack_1c0 = 0;
                        uStack_1a0 = 0;
                        local_198 = *(undefined8 *)(lVar8 + 0x330);
                        uStack_190 = *(undefined8 *)(lVar8 + 0x338);
                        local_188 = *(undefined8 *)(lVar8 + 0x340);
                        uStack_180 = 0x3ff0000000000000;
                        dVar34 = local_578[1] + local_578[1];
                        dVar37 = local_578[2] + local_578[2];
                        dVar38 = local_578[0] * (local_578[0] + local_578[0]);
                        local_228 = (1.0 - (dVar38 + local_578[1] * dVar34)) * local_528;
                        dVar18 = (local_578[0] + local_578[0]) * local_578[3];
                        local_238 = (dVar34 * local_578[3] + local_578[0] * dVar37) * local_528;
                        dStack_230 = (dVar37 * local_578[1] - dVar18) * local_528;
                        dVar41 = dVar26 * local_538;
                        dVar43 = dVar31 * dStack_530;
                        local_278 = ((double)DAT_149934d80 -
                                    (local_578[2] * dVar37 + local_578[1] * dVar34)) * local_538;
                        dVar38 = (DAT_149934d80._8_8_ - (local_578[2] * dVar37 + dVar38)) *
                                 dStack_530;
                        dStack_270 = (dVar34 * local_578[0] + dVar37 * local_578[3]) * local_538;
                        local_248 = (dVar37 * local_578[1] + dVar18) * dStack_530;
                        local_268 = (local_578[0] * dVar37 - dVar34 * local_578[3]) * local_538;
                        uStack_260 = 0;
                        local_258._8_4_ = SUB84(dVar38,0);
                        local_258._0_8_ =
                             (dVar34 * local_578[0] - dVar37 * local_578[3]) * dStack_530;
                        local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                        uStack_240 = 0;
                        uStack_220 = 0;
                        local_218 = (double)local_558._0_8_;
                        dStack_210 = (double)local_558._8_8_;
                        local_208 = local_548;
                        uStack_200 = 0x3ff0000000000000;
                        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                        FUN_144a1c686(&local_178,0x3e45798ee0000000);
                        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar43);
                        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar41);
                        auVar29 = blendvpd(_DAT_149936790,auVar32,auVar24);
                        uVar15 = -(ulonglong)(0.0 <= dVar44);
                        dVar38 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000
                                         );
                        dVar41 = auVar29._0_8_;
                        local_168 = local_168 * dVar41;
                        local_170 = local_170 * dVar41;
                        local_178 = local_178 * dVar41;
                        dVar41 = auVar29._8_8_;
                        local_148 = local_148 * dVar41;
                        local_150 = local_150 * dVar41;
                        local_158 = dVar41 * local_158;
                        local_128 = local_128 * dVar38;
                        local_130 = local_130 * dVar38;
                        local_138 = dVar38 * local_138;
                        FUN_14481fd10(&local_5b8,&local_178);
                        dVar38 = local_5a8 * local_5a8 + local_5b8 * local_5b8;
                        dVar41 = dStack_5a0 * dStack_5a0 + dStack_5b0 * dStack_5b0;
                        auVar25._0_8_ = dVar38 + dVar41;
                        auVar25._8_8_ = dVar38 + dVar41;
                        auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
                        auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
                        auVar29 = sqrtpd(auVar25,auVar25);
                        auVar32 = divpd(auVar32,auVar29);
                        auVar39._0_8_ = auVar32._0_8_ * local_5a8;
                        auVar39._8_8_ = auVar32._8_8_ * dStack_5a0;
                        local_668[0] = (double)((ulonglong)(local_5b8 * auVar32._0_8_) &
                                               -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
                        local_668[1] = (double)((ulonglong)(dStack_5b0 * auVar32._8_8_) &
                                               -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
                        local_658 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar16);
                        dVar41 = 0.0;
                        dVar18 = local_118;
                        dVar35 = dStack_110;
                        dVar38 = local_108;
                      }
                      uVar15 = uStack_5d0;
                      dVar2 = auVar17._8_8_ * dVar2;
                      local_648._8_4_ = SUB84(dVar35,0);
                      local_648._0_8_ = dVar18;
                      local_648._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                      local_638._8_4_ = SUB84(dVar41,0);
                      local_638._0_8_ = dVar38;
                      local_638._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                      local_628._8_4_ = SUB84(dVar31 * dVar22,0);
                      local_628._0_8_ = dVar26 * dVar19;
                      local_628._12_4_ = (int)((ulonglong)(dVar31 * dVar22) >> 0x20);
                      local_618._8_4_ = SUB84(dVar2,0);
                      local_618._0_8_ = dVar27 * dVar23;
                      local_618._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
                      lVar8 = (longlong)(int)uStack_5d0;
                      uVar6 = (int)uStack_5d0 + 1;
                      uStack_5d0 = CONCAT44(uStack_5d0._4_4_,uVar6);
                      if (uStack_5d0._4_4_ < uVar6) {
                        FUN_144a2c682(&local_5d8,uVar15 & 0xffffffff);
                      }
                      pdVar11 = local_668;
                      pdVar13 = (double *)(lVar8 * 0x60 + local_5d8);
                      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                        *pdVar13 = *pdVar11;
                        pdVar11 = pdVar11 + 1;
                        pdVar13 = pdVar13 + 1;
                      }
                      iVar7 = (int)uStack_5e0;
                      uVar6 = (int)uStack_5e0 + 1;
                      uStack_5e0 = CONCAT44(uStack_5e0._4_4_,uVar6);
                      if (uStack_5e0._4_4_ < uVar6) {
                        plVar12 = &local_5e8;
                        goto LAB_140736a09;
                      }
                      plVar12 = &local_5e8;
                    }
                    else {
                      lVar8 = (longlong)(int)uStack_5f0;
                      uVar6 = (int)uStack_5f0 + 1;
                      uStack_5f0 = CONCAT44(uStack_5f0._4_4_,uVar6);
                      if (uStack_5f0._4_4_ < uVar6) {
                        FUN_144a2c682(&local_5f8,uVar15 & 0xffffffff);
                      }
                      pdVar11 = local_578;
                      pdVar13 = (double *)(lVar8 * 0x60 + local_5f8);
                      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                        *pdVar13 = *pdVar11;
                        pdVar11 = pdVar11 + 1;
                        pdVar13 = pdVar13 + 1;
                      }
                      iVar7 = (int)uStack_600;
                      uVar6 = (int)uStack_600 + 1;
                      uStack_600 = CONCAT44(uStack_600._4_4_,uVar6);
                      if (uStack_600._4_4_ < uVar6) {
                        plVar12 = &local_608;
LAB_140736a09:
                        FUN_14475e4ac(plVar12,iVar7);
                      }
                      else {
                        plVar12 = &local_608;
                      }
                    }
                    *(undefined4 *)(*plVar12 + (longlong)iVar7 * 4) = local_3f8;
                  }
                  FUN_1447166b4(&local_718);
                  FUN_1406cb64a(local_3e0);
                  if (local_6b8 != 0.0) {
                    FUN_1400020a8();
                  }
                  if (local_678 == '\0') {
                    local_678 = '\x01';
                    *(int *)(local_690 + 4) = *(int *)(local_690 + 4) + -1;
                    if (local_680 != local_690[2]) {
                      FUN_14004673c();
                    }
                    *local_690 = local_688;
                    local_690[3] = local_670;
                  }
                }
              }
            }
            plVar14 = plVar14 + 1;
          } while (plVar14 != local_760);
        }
        FUN_14332cd70(local_668,&local_5d8,&local_5e8);
        auVar32 = _DAT_149934d80;
        if (0 < (int)uStack_600) {
          local_598 = (code *)0x0;
          puStack_590 = (undefined1 *)0x0;
          local_578[0] = 0.0;
          local_578[1] = 0.0;
          local_578[2] = 0.0;
          local_578[3] = 0.0;
          dVar1 = (double)DAT_149934d80;
          dVar2 = DAT_149934d80._8_8_;
          local_558 = _DAT_149934d80;
          local_548 = 1.0;
          dStack_540 = 0.0;
          local_588 = ZEXT816(0x3ff0000000000000) << 0x40;
          FUN_14332cd70(&local_598,&local_5f8,&local_608);
          dVar19 = (double)local_598 + 0.0;
          dVar22 = (double)puStack_590 + 0.0;
          dVar23 = (double)local_588._0_8_ + 0.0;
          dVar26 = (double)(-(ulonglong)((double)local_588._8_8_ < 0.0) & 0x8000000000000000) +
                   (double)local_588._8_8_;
          dVar27 = dVar23 * dVar23 + dVar19 * dVar19;
          dVar31 = dVar26 * dVar26 + dVar22 * dVar22;
          auVar28._0_8_ = dVar27 + dVar31;
          auVar28._8_8_ = dVar27 + dVar31;
          auVar17._8_8_ = -(ulonglong)(1e-08 <= auVar28._8_8_);
          auVar17._0_8_ = -(ulonglong)(1e-08 <= auVar28._0_8_);
          auVar29 = sqrtpd(auVar28,auVar28);
          auVar32 = divpd(auVar32,auVar29);
          auVar33._0_8_ = auVar32._0_8_ * dVar23;
          auVar33._8_8_ = auVar32._8_8_ * dVar26;
          auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar17);
          dVar44 = auVar29._8_8_;
          dVar23 = (double)((ulonglong)(dVar19 * auVar32._0_8_) &
                           -(ulonglong)(1e-08 <= auVar28._0_8_));
          dVar26 = (double)((ulonglong)(dVar22 * auVar32._8_8_) &
                           -(ulonglong)(1e-08 <= auVar28._8_8_));
          auVar21._8_4_ = SUB84(dVar26,0);
          auVar21._12_4_ = (undefined4)((ulonglong)dVar26 >> 0x20);
          auVar32._8_4_ = SUB84(dVar23,0);
          auVar32._0_8_ = dVar23;
          auVar32._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          dVar19 = dVar23 * local_668[1];
          dVar22 = auVar32._8_8_ * local_668[0];
          auVar21._0_8_ = dVar26;
          dVar38 = local_668[0] * dVar26;
          dVar41 = local_668[1] * auVar21._8_8_;
          dVar43 = auVar29._0_8_;
          dVar27 = local_668[0] * dVar43;
          dVar31 = (double)local_658._8_8_ * dVar43;
          local_668[0] = local_668[1] * dVar43 * -1.0 +
                         (double)local_658._0_8_ * dVar26 +
                         (double)local_658._8_8_ * dVar23 * 1.0 + local_668[0] * dVar44;
          local_668[1] = dVar27 * 1.0 +
                         (double)local_658._8_8_ * auVar21._8_8_ +
                         (double)local_658._0_8_ * auVar32._8_8_ * -1.0 + local_668[1] * dVar44;
          local_658._8_8_ =
               (double)local_658._0_8_ * dVar43 * -1.0 +
               ((dVar22 * -1.0 + dVar44 * (double)local_658._8_8_) - dVar41);
          local_658._0_8_ =
               dVar31 * 1.0 + ((dVar19 * 1.0 + dVar44 * (double)local_658._0_8_) - dVar38);
          local_648._8_8_ = local_578[1] + 0.0 + (double)local_648._8_8_;
          local_648._0_8_ = local_578[0] + 0.0 + (double)local_648._0_8_;
          local_638._8_8_ = local_578[3] + 0.0 + (double)local_638._8_8_;
          local_638._0_8_ = local_578[2] + 0.0 + (double)local_638._0_8_;
          dVar19 = (dStack_540 + 0.0 + 0.0) * (double)local_618._8_8_;
          local_628._8_8_ = ((double)local_558._8_8_ + 0.0 + dVar2) * (double)local_628._8_8_;
          local_628._0_8_ = ((double)local_558._0_8_ + 0.0 + dVar1) * (double)local_628._0_8_;
          local_618._8_4_ = SUB84(dVar19,0);
          local_618._0_8_ = (local_548 + 0.0 + 1.0) * (double)local_618._0_8_;
          local_618._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        }
        pdVar11 = local_668;
        pdVar13 = param_2;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *pdVar13 = *pdVar11;
          pdVar11 = pdVar11 + 1;
          pdVar13 = pdVar13 + 1;
        }
        *(undefined1 *)(param_2 + 0xc) = 1;
        if (local_608 != 0) {
          FUN_1400020a8();
        }
        if (local_5f8 != 0) {
          FUN_1400020a8();
        }
        if (local_5e8 != 0) {
          FUN_1400020a8();
        }
        if (local_5d8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_7d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14073751e FUN_14073751e body=228 status=ok
// SIG undefined FUN_14073751e(void)

longlong FUN_14073751e(void)

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
  if (DAT_14cab33a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633909e;
    local_38 = &LAB_14756d475;
    local_40 = &LAB_140d11bfb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x178;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieScene",&DAT_14cab33a8,&DAT_14756d474);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab33a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140737604 FUN_140737604 body=463 status=ok
// SIG undefined FUN_140737604(void)

undefined8 * FUN_140737604(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_14a464410;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  if (param_2 == param_1) {
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 2;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    param_1[9] = 2;
  }
  else {
    FUN_1407377d4(param_1 + 1,param_2 + 1);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 2;
    FUN_1407377d4(param_1 + 4,param_2 + 4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 2;
    FUN_140737960(param_1 + 7,param_2 + 7);
  }
  *param_1 = &PTR_FUN_14a46ea60;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_14753bf48(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 0x1c);
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = param_2[0x21];
  return param_1;
}



// FUNCTION 1407377d4 FUN_1407377d4 body=395 status=ok
// SIG undefined FUN_1407377d4(void)

void FUN_1407377d4(longlong *param_1,longlong *param_2)

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
        FUN_1449db362(&local_68);
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140737960 FUN_140737960 body=395 status=ok
// SIG undefined FUN_140737960(void)

void FUN_140737960(longlong *param_1,longlong *param_2)

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
        FUN_1449db362(&local_68);
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140737aec FUN_140737aec body=1910 status=ok
// SIG undefined FUN_140737aec(void)

void FUN_140737aec(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140107fd2();
  *(byte *)((longlong)param_1 + 0x33) = *(byte *)((longlong)param_1 + 0x33) & 0xfd;
  lVar2 = param_1[4];
  lVar5 = *(longlong *)(lVar2 + 0x658);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar2 + 0x660);
    if ((DAT_14c950c29 & lVar5 != 0) != 0) goto LAB_1407381a0;
    if (lVar5 != 0) goto LAB_140737b39;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1407381a0:
      FUN_1456cec3c(lVar5);
    }
LAB_140737b39:
    if (DAT_14cb06da8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1464003b0;
      local_68 = &LAB_147d17bdf;
      local_70 = (code *)&LAB_1417edf22;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
      plVar3 = *(longlong **)(lVar2 + 0x658);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = *(longlong **)(lVar2 + 0x660);
        if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_1407381ad;
        if (plVar3 != (longlong *)0x0) goto LAB_140737b89;
LAB_140737e71:
        plVar3 = (longlong *)0x0;
      }
      else {
        if (DAT_14c950c29 != 0) {
LAB_1407381ad:
          FUN_1456cec3c(plVar3);
          if (DAT_14cb06da8 == 0) {
            local_60 = &local_40;
            local_40 = FUN_1449e2820;
            local_50 = FUN_14081d0ea;
            local_58 = (code *)&LAB_1464003b0;
            local_68 = &LAB_147d17bdf;
            local_70 = (code *)&LAB_1417edf22;
            local_78 = L"Engine";
            local_80 = 0;
            local_88 = 0x10000000;
            local_90 = 8;
            local_98 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
        }
LAB_140737b89:
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
            DAT_14cb06da8 + 0x30)) goto LAB_140737e71;
      }
      lVar2 = (**(code **)(*plVar3 + 0x3f8))(plVar3);
      if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      param_1[5] = lVar2;
      goto LAB_140737bd1;
    }
  }
  param_1[5] = 0;
LAB_140737bd1:
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    if (DAT_14cacb1f8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_1478defb1;
      local_70 = FUN_1463a1b02;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    FUN_144718840(lVar2,DAT_14cacb1f8);
  }
  FUN_14072a850();
  if (param_1 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_60 = &local_40;
        local_40 = FUN_144a7958c;
        local_50 = FUN_14081d0ea;
        local_58 = (code *)&LAB_146395584;
        local_68 = &LAB_147a0ba80;
        local_70 = (code *)&LAB_14575ccce;
        local_78 = L"Engine";
        local_80 = 0x40000000000;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    plVar3 = (longlong *)param_1[0x7c];
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = (longlong)plVar3;
    }
  }
  (**(code **)(*plVar3 + 8))(plVar3,param_1);
  (**(code **)(*param_1 + 0x308))(param_1);
  uVar4 = FUN_14477b072(param_1,DAT_14cacb528);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,0);
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
    FUN_140c49e14(0,param_2);
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_60 = &local_40;
        local_40 = FUN_144a7958c;
        local_50 = FUN_14081d0ea;
        local_58 = (code *)&LAB_146395584;
        local_68 = &LAB_147a0ba80;
        local_70 = (code *)&LAB_14575ccce;
        local_78 = L"Engine";
        local_80 = 0x40000000000;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
    FUN_140c49e14(lVar2,param_2);
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_60 = &local_40;
        local_40 = FUN_144a7958c;
        local_50 = FUN_14081d0ea;
        local_58 = (code *)&LAB_146395584;
        local_68 = &LAB_147a0ba80;
        local_70 = (code *)&LAB_14575ccce;
        local_78 = L"Engine";
        local_80 = 0x40000000000;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  FUN_1433d8b8a(lVar2);
  if ((*(byte *)(param_1[4] + 0x9c) & 1) != 0) {
    local_38 = &local_29;
    local_40 = FUN_1433d778a;
    local_48 = 0;
    FUN_140f48eb4(param_1,&local_48,&local_40,param_2);
  }
  uVar4 = FUN_14477b072(param_1,DAT_14cacb538);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,0);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140738264 FUN_140738264 body=3860 status=ok
// SIG undefined FUN_140738264(void)

void FUN_140738264(longlong param_1,longlong *param_2,uint param_3,void *param_4,undefined4 *param_5
                  ,undefined4 param_6,undefined4 param_7,byte param_8,longlong param_9)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  int iVar25;
  float fVar26;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80 [2];
  undefined1 local_70;
  undefined8 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = FUN_14073917a(param_1,param_3);
  if (lVar9 == 0) {
    if (param_2 != (longlong *)0x0) {
      puVar11 = (undefined8 *)FUN_14073917a(param_1,param_3);
      if (puVar11 == (undefined8 *)0x0) {
        cVar5 = (**(code **)(*param_2 + 0x2c0))(param_2);
        local_b8 = CONCAT71(local_b8._1_7_,cVar5);
        lVar9 = param_1 + 0x978;
        if (cVar5 != '\0') {
          (**(code **)(*param_2 + 0x3c0))(param_2);
          lVar9 = param_1 + 0x9d0;
        }
        iVar19 = *(int *)(lVar9 + 0x20);
        *(uint *)(lVar9 + 0x20) = iVar19 + 1U;
        if (*(uint *)(lVar9 + 0x24) < iVar19 + 1U) {
          FUN_140554e38((longlong *)(lVar9 + 0x18),iVar19);
        }
        local_88 = (longlong *)(lVar9 + 0x18);
        FUN_140554e1c((longlong)iVar19 * 0x10 + *(longlong *)(lVar9 + 0x18),1);
        iVar19 = *(int *)(lVar9 + 0x30);
        *(uint *)(lVar9 + 0x30) = iVar19 + 1U;
        if (*(uint *)(lVar9 + 0x34) < iVar19 + 1U) {
          FUN_14475e4ac(lVar9 + 0x28,iVar19);
        }
        *(undefined4 *)(*(longlong *)(lVar9 + 0x28) + (longlong)iVar19 * 4) = 0;
        FUN_140739bbe(lVar9);
        lVar9 = (longlong)*(int *)(lVar9 + 0x20) + -1;
        puVar11 = (undefined8 *)FUN_14001cc68(0x170);
        local_98 = puVar11;
        memset(puVar11,0,0x170);
        *puVar11 = &PTR_FUN_14a43e440;
        *(undefined4 *)(puVar11 + 0x21) = 0xfffffffe;
        *(undefined4 *)(puVar11 + 0x22) = 0xfffffffe;
        puVar11[0x23] = 0;
        puVar11[0x24] = 0;
        *(undefined1 *)(puVar11 + 0x25) = 0;
        puVar11[0x1e] = &PTR_FUN_14a42da70;
        *(undefined4 *)((longlong)puVar11 + 0x13f) = 0;
        puVar11[0x27] = 0;
        *(undefined2 *)((longlong)puVar11 + 0x15c) = 0x101;
        *(undefined1 *)((longlong)puVar11 + 0x15e) = 2;
        *(int *)(puVar11 + 1) = (int)lVar9;
        *(undefined1 *)((longlong)puVar11 + 0xc) = (undefined1)local_b8;
        plVar24 = (longlong *)(param_1 + 0xac0);
        local_90 = lVar9;
        if (*(int *)(param_1 + 0xaf4) == 0) {
          uVar22 = *(uint *)(param_1 + 0xac8);
          uVar17 = (ulonglong)uVar22;
          *(uint *)(param_1 + 0xac8) = uVar22 + 1;
          if (*(uint *)(param_1 + 0xacc) == uVar22) {
            FUN_14482b872(plVar24,uVar22);
          }
          iVar19 = *(int *)(param_1 + 0xae8);
          if (iVar19 == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar7 = iVar19 + -1;
            }
            iVar7 = iVar7 >> 5;
          }
          lVar10 = param_1 + 0xad0;
          iVar15 = iVar19 + 1;
          iVar25 = iVar19 + 0x1f;
          if (-1 < iVar19) {
            iVar25 = iVar19;
          }
          if (iVar25 >> 5 == iVar7) {
            *(int *)(param_1 + 0xae8) = iVar15;
          }
          else {
            if (*(int *)(param_1 + 0xaec) <= iVar19) {
              uVar22 = iVar19 + 0x20;
              local_b8 = (ulonglong)uVar22;
              iVar7 = iVar19;
              local_b0 = lVar10;
              local_a8 = plVar24;
              local_a0 = uVar17;
              if (uVar22 < 0xa0) {
                iVar15 = 0x80;
              }
              else {
                uVar22 = uVar22 >> 5;
                local_b8 = (ulonglong)uVar22;
                if (*(int *)(param_1 + 0xaec) + 0x1fU < 0xa0) {
                  uVar18 = 4;
                  if (4 < uVar22) {
                    uVar18 = uVar22;
                  }
                }
                else {
                  uVar18 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
                }
                uVar17 = (ulonglong)(uVar18 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar22 = (uint)(uVar17 + 0xf);
                    if (uVar18 < 0x1ffd) {
                      uVar17 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
                    }
                    else {
                      uVar16 = uVar17 + 0xf & 0xfffffffffffffff0;
                      if (uVar16 < 0x7ff1) {
                        bVar14 = (&DAT_14c841e00)[uVar22 >> 4];
                        uVar21 = 0x32;
                        if (0x32 < bVar14) {
                          uVar21 = (ulonglong)bVar14;
                        }
                        uVar23 = 0x32 - (ulonglong)bVar14;
                        do {
                          uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0)
                          goto LAB_140738d41;
                          lVar9 = uVar21 + 1 + uVar23;
                          uVar23 = uVar23 - 1;
                        } while (lVar9 != 0x33);
                      }
                      uVar17 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar17 = (ulonglong)DAT_14c841df8;
                      }
                      uVar17 = -uVar17 & (uVar16 + uVar17) - 1;
                    }
                  }
                  else {
                    uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                    iVar7 = *(int *)(param_1 + 0xae8);
                  }
                }
LAB_140738d41:
                iVar8 = (int)(uVar17 >> 2);
                iVar15 = -0x20;
                if ((int)local_b8 <= iVar8) {
                  iVar15 = iVar8 << 5;
                }
              }
              *(int *)(param_1 + 0xaec) = iVar15;
              FUN_1446efbd8(local_b0,iVar7);
              iVar15 = *(int *)(param_1 + 0xae8) + 1;
              lVar10 = local_b0;
              uVar17 = local_a0;
              plVar24 = local_a8;
            }
            iVar7 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar7 = iVar15;
            }
            *(int *)(param_1 + 0xae8) = iVar15;
            if (iVar15 % 0x20 != 0) {
              lVar9 = *(longlong *)(param_1 + 0xae0);
              if (*(longlong *)(param_1 + 0xae0) == 0) {
                lVar9 = lVar10;
              }
              bVar14 = -(char)(iVar15 % 0x20);
              *(uint *)(lVar9 + (longlong)(iVar7 >> 5) * 4) =
                   (uint)(*(int *)(lVar9 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
                   (bVar14 & 0x1f);
            }
          }
          lVar9 = (longlong)(int)uVar17;
          if (*(longlong *)(param_1 + 0xae0) != 0) {
            lVar10 = *(longlong *)(param_1 + 0xae0);
          }
          bVar14 = (byte)iVar19 & 0x1f;
          puVar1 = (uint *)(lVar10 + (longlong)(iVar25 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
        }
        else {
          uVar17 = (ulonglong)*(uint *)(param_1 + 0xaf0);
          lVar9 = (longlong)(int)*(uint *)(param_1 + 0xaf0);
          iVar19 = *(int *)(*(longlong *)(param_1 + 0xac0) + 4 + lVar9 * 0x18);
          *(int *)(param_1 + 0xaf0) = iVar19;
          iVar7 = *(int *)(param_1 + 0xaf4) + -1;
          *(int *)(param_1 + 0xaf4) = iVar7;
          if (iVar7 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xac0) + (longlong)iVar19 * 0x18) = 0xffffffff;
          }
        }
        iVar7 = (int)uVar17;
        iVar19 = 1;
        lVar10 = param_1 + 0xad0;
        if (*(longlong *)(param_1 + 0xae0) != 0) {
          lVar10 = *(longlong *)(param_1 + 0xae0);
        }
        iVar15 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar15 = iVar7;
        }
        puVar1 = (uint *)(lVar10 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xac0) + lVar9 * 0x18);
        *puVar1 = param_3;
        *(undefined8 **)(puVar1 + 2) = local_98;
        puVar1[4] = 0xffffffff;
        uVar22 = *(int *)(param_1 + 0xac8) - *(int *)(param_1 + 0xaf4);
        if (1 < uVar22) {
          lVar9 = param_1 + 0xaf8;
          if (*(longlong *)(param_1 + 0xb00) != 0) {
            lVar9 = *(longlong *)(param_1 + 0xb00);
          }
          uVar18 = *(uint *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xb08) - 1U & param_3) * 4);
          if (uVar18 != 0xffffffff) {
            do {
              puVar2 = (uint *)(*plVar24 + (longlong)(int)uVar18 * 0x18);
              if (*puVar2 == param_3) {
                uVar22 = puVar1[1];
                uVar18 = puVar1[2];
                uVar3 = puVar1[3];
                *puVar2 = *puVar1;
                puVar2[1] = uVar22;
                puVar2[2] = uVar18;
                puVar2[3] = uVar3;
                FUN_1474fdfd6(plVar24,uVar17 & 0xffffffff);
                goto LAB_140738811;
              }
              uVar18 = puVar2[4];
            } while (uVar18 != 0xffffffff);
          }
        }
        if (3 < uVar22) {
          uVar17 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar19 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar22 < 1) || (iVar19 <= *(int *)(param_1 + 0xb08))) {
          uVar22 = *(int *)(param_1 + 0xb08) - 1U & param_3;
          puVar1[5] = uVar22;
          lVar9 = *(longlong *)(param_1 + 0xb00);
          if (*(longlong *)(param_1 + 0xb00) == 0) {
            lVar9 = param_1 + 0xaf8;
          }
          puVar1[4] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0xb08) - 1U &
                                        (longlong)(int)uVar22) * 4);
          lVar9 = *(longlong *)(param_1 + 0xb00);
          if (*(longlong *)(param_1 + 0xb00) == 0) {
            lVar9 = param_1 + 0xaf8;
          }
          *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0xb08) - 1U & (longlong)(int)uVar22) * 4) =
               iVar7;
        }
        else {
          *(int *)(param_1 + 0xb08) = iVar19;
          FUN_14073a4c2(plVar24);
        }
LAB_140738811:
        puVar13 = (undefined8 *)FUN_14001cc68(0x68,0x10);
        puVar13[1] = 0;
        *(byte *)(puVar13 + 2) = *(byte *)(puVar13 + 2) & 0xfc;
        *(undefined1 *)((longlong)puVar13 + 0x11) = 0;
        puVar13[3] = 0;
        *(undefined4 *)(puVar13 + 4) = 0xffffffff;
        *(undefined2 *)(puVar13 + 5) = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        *puVar13 = &PTR_FUN_14a4225a0;
        puVar13[0xb] = 0;
        puVar13[0xc] = 0x101010000000000;
        *(undefined1 *)(puVar13 + 10) = 0;
        FUN_140739296(puVar13,puVar11 + 0x1e);
        plVar24 = (longlong *)(param_1 + 0xb10);
        if (*(int *)(param_1 + 0xb44) == 0) {
          uVar22 = *(uint *)(param_1 + 0xb18);
          uVar17 = (ulonglong)uVar22;
          *(uint *)(param_1 + 0xb18) = uVar22 + 1;
          if (*(uint *)(param_1 + 0xb1c) == uVar22) {
            FUN_14482b872(plVar24,uVar22);
          }
          iVar19 = *(int *)(param_1 + 0xb38);
          if (iVar19 == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar7 = iVar19 + -1;
            }
            iVar7 = iVar7 >> 5;
          }
          lVar10 = param_1 + 0xb20;
          iVar15 = iVar19 + 1;
          iVar25 = iVar19 + 0x1f;
          if (-1 < iVar19) {
            iVar25 = iVar19;
          }
          if (iVar25 >> 5 == iVar7) {
            *(int *)(param_1 + 0xb38) = iVar15;
          }
          else {
            if (*(int *)(param_1 + 0xb3c) <= iVar19) {
              uVar22 = iVar19 + 0x20;
              local_b8 = (ulonglong)uVar22;
              iVar7 = iVar19;
              local_b0 = lVar10;
              local_a8 = plVar24;
              local_a0 = uVar17;
              if (uVar22 < 0xa0) {
                iVar15 = 0x80;
              }
              else {
                uVar22 = uVar22 >> 5;
                local_b8 = (ulonglong)uVar22;
                if (*(int *)(param_1 + 0xb3c) + 0x1fU < 0xa0) {
                  uVar18 = 4;
                  if (4 < uVar22) {
                    uVar18 = uVar22;
                  }
                }
                else {
                  uVar18 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
                }
                uVar17 = (ulonglong)(uVar18 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar22 = (uint)(uVar17 + 0xf);
                    if (uVar18 < 0x1ffd) {
                      uVar17 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
                    }
                    else {
                      uVar16 = uVar17 + 0xf & 0xfffffffffffffff0;
                      if (uVar16 < 0x7ff1) {
                        bVar14 = (&DAT_14c841e00)[uVar22 >> 4];
                        uVar21 = 0x32;
                        if (0x32 < bVar14) {
                          uVar21 = (ulonglong)bVar14;
                        }
                        uVar23 = 0x32 - (ulonglong)bVar14;
                        do {
                          uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0)
                          goto LAB_140738e2e;
                          lVar9 = uVar21 + 1 + uVar23;
                          uVar23 = uVar23 - 1;
                        } while (lVar9 != 0x33);
                      }
                      uVar17 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar17 = (ulonglong)DAT_14c841df8;
                      }
                      uVar17 = -uVar17 & (uVar16 + uVar17) - 1;
                    }
                  }
                  else {
                    uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                    iVar7 = *(int *)(param_1 + 0xb38);
                  }
                }
LAB_140738e2e:
                iVar8 = (int)(uVar17 >> 2);
                iVar15 = -0x20;
                if ((int)local_b8 <= iVar8) {
                  iVar15 = iVar8 << 5;
                }
              }
              *(int *)(param_1 + 0xb3c) = iVar15;
              FUN_1446efbd8(local_b0,iVar7);
              iVar15 = *(int *)(param_1 + 0xb38) + 1;
              lVar10 = local_b0;
              uVar17 = local_a0;
              plVar24 = local_a8;
            }
            iVar7 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar7 = iVar15;
            }
            *(int *)(param_1 + 0xb38) = iVar15;
            if (iVar15 % 0x20 != 0) {
              lVar9 = *(longlong *)(param_1 + 0xb30);
              if (*(longlong *)(param_1 + 0xb30) == 0) {
                lVar9 = lVar10;
              }
              bVar14 = -(char)(iVar15 % 0x20);
              *(uint *)(lVar9 + (longlong)(iVar7 >> 5) * 4) =
                   (uint)(*(int *)(lVar9 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
                   (bVar14 & 0x1f);
            }
          }
          lVar9 = (longlong)(int)uVar17;
          if (*(longlong *)(param_1 + 0xb30) != 0) {
            lVar10 = *(longlong *)(param_1 + 0xb30);
          }
          bVar14 = (byte)iVar19 & 0x1f;
          puVar1 = (uint *)(lVar10 + (longlong)(iVar25 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
        }
        else {
          uVar17 = (ulonglong)*(uint *)(param_1 + 0xb40);
          lVar9 = (longlong)(int)*(uint *)(param_1 + 0xb40);
          iVar19 = *(int *)(*(longlong *)(param_1 + 0xb10) + 4 + lVar9 * 0x18);
          *(int *)(param_1 + 0xb40) = iVar19;
          iVar7 = *(int *)(param_1 + 0xb44) + -1;
          *(int *)(param_1 + 0xb44) = iVar7;
          if (iVar7 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xb10) + (longlong)iVar19 * 0x18) = 0xffffffff;
          }
        }
        plVar4 = local_88;
        puVar11 = local_98;
        iVar7 = (int)uVar17;
        iVar19 = 1;
        lVar10 = param_1 + 0xb20;
        if (*(longlong *)(param_1 + 0xb30) != 0) {
          lVar10 = *(longlong *)(param_1 + 0xb30);
        }
        iVar15 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar15 = iVar7;
        }
        puVar1 = (uint *)(lVar10 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xb10) + lVar9 * 0x18);
        *puVar1 = param_3;
        *(undefined8 **)(puVar1 + 2) = puVar13;
        puVar1[4] = 0xffffffff;
        uVar22 = *(int *)(param_1 + 0xb18) - *(int *)(param_1 + 0xb44);
        if (1 < uVar22) {
          lVar9 = param_1 + 0xb48;
          if (*(longlong *)(param_1 + 0xb50) != 0) {
            lVar9 = *(longlong *)(param_1 + 0xb50);
          }
          uVar18 = *(uint *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xb58) - 1U & param_3) * 4);
          if (uVar18 != 0xffffffff) {
            do {
              puVar2 = (uint *)(*plVar24 + (longlong)(int)uVar18 * 0x18);
              if (*puVar2 == param_3) {
                uVar22 = puVar1[1];
                uVar18 = puVar1[2];
                uVar3 = puVar1[3];
                *puVar2 = *puVar1;
                puVar2[1] = uVar22;
                puVar2[2] = uVar18;
                puVar2[3] = uVar3;
                FUN_1474fe048(plVar24,uVar17 & 0xffffffff);
                goto LAB_1407389ef;
              }
              uVar18 = puVar2[4];
            } while (uVar18 != 0xffffffff);
          }
        }
        if (3 < uVar22) {
          uVar17 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar19 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar22 < 1) || (iVar19 <= *(int *)(param_1 + 0xb58))) {
          uVar22 = *(int *)(param_1 + 0xb58) - 1U & param_3;
          puVar1[5] = uVar22;
          lVar9 = *(longlong *)(param_1 + 0xb50);
          if (*(longlong *)(param_1 + 0xb50) == 0) {
            lVar9 = param_1 + 0xb48;
          }
          puVar1[4] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0xb58) - 1U &
                                        (longlong)(int)uVar22) * 4);
          lVar9 = *(longlong *)(param_1 + 0xb50);
          if (*(longlong *)(param_1 + 0xb50) == 0) {
            lVar9 = param_1 + 0xb48;
          }
          *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0xb58) - 1U & (longlong)(int)uVar22) * 4) =
               iVar7;
        }
        else {
          *(int *)(param_1 + 0xb58) = iVar19;
          FUN_14073a740(plVar24);
        }
LAB_1407389ef:
        *(undefined1 *)((longlong)puVar11 + 0x15d) = 0;
        *(undefined8 **)(*plVar4 + local_90 * 0x10) = puVar13;
      }
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      puVar11[0x29] = param_2;
      *(undefined4 *)(puVar11 + 0x2a) = 0;
      local_80[1] = 0;
      local_70 = 1;
      local_6c = 0xffffffffffffffff;
      *(byte *)(puVar11 + 0x20) = *(byte *)(puVar11 + 0x20) & 0xfe;
      *(undefined4 *)(puVar11 + 0x21) = 0xfffffffe;
      *(undefined4 *)(puVar11 + 0x22) = 0xfffffffe;
      *(undefined1 *)((longlong)puVar11 + 300) = 0;
      local_80[0] = param_1;
      uVar12 = FUN_14477dc2a(puVar11 + 0x1e);
      FUN_14477dadc(uVar12,local_80);
      *(undefined1 *)(puVar11 + 0x26) = 1;
      if (*(int *)(param_1 + 0xb18) != *(int *)(param_1 + 0xb44)) {
        lVar9 = param_1 + 0xb48;
        if (*(longlong *)(param_1 + 0xb50) != 0) {
          lVar9 = *(longlong *)(param_1 + 0xb50);
        }
        uVar22 = *(uint *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xb58) - 1U & param_3) * 4);
        if (uVar22 != 0xffffffff) {
          do {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0xb10) + (longlong)(int)uVar22 * 0x18);
            if (*puVar1 == param_3) {
              if ((puVar1 != (uint *)0x0) &&
                 (plVar24 = *(longlong **)(puVar1 + 2), plVar24 != (longlong *)0x0)) {
                local_80[1] = 0;
                local_70 = 1;
                local_6c = 0xffffffffffffffff;
                local_80[0] = param_1;
                (**(code **)(*plVar24 + 0x10))(plVar24,local_80);
                local_80[1] = 0;
                local_70 = 1;
                local_6c = 0xffffffffffffffff;
                local_80[0] = param_1;
                (**(code **)(*plVar24 + 0x18))(plVar24,local_80);
              }
              break;
            }
            uVar22 = puVar1[4];
          } while (uVar22 != 0xffffffff);
        }
      }
    }
  }
  else if (*(longlong **)(lVar9 + 0x148) != param_2) {
    if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong **)(lVar9 + 0x148) = param_2;
  }
  lVar9 = FUN_14073917a(param_1,param_3);
  *(undefined4 *)(lVar9 + 0x150) = param_6;
  if (*(char *)(param_5 + 1) == '\x01') {
    *(undefined4 *)(lVar9 + 0x11c) = *param_5;
    *(undefined1 *)(lVar9 + 0x15e) = 0;
  }
  if (*(int *)(param_1 + 0xb18) != *(int *)(param_1 + 0xb44)) {
    lVar10 = param_1 + 0xb48;
    if (*(longlong *)(param_1 + 0xb50) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xb50);
    }
    uVar22 = *(uint *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0xb58) - 1U & param_3) * 4);
    if (uVar22 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xb10) + (longlong)(int)uVar22 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 != (uint *)0x0) &&
             (plVar24 = *(longlong **)(puVar1 + 2), plVar24 != (longlong *)0x0)) {
            (**(code **)(*plVar24 + 0x130))(plVar24,param_9 != 0);
            lVar10 = (**(code **)(*plVar24 + 0xf0))(plVar24);
            (**(code **)(*plVar24 + 0xf8))(plVar24,param_9);
            if ((param_9 != 0) && (lVar10 != param_9)) {
              local_80[1] = 0;
              local_70 = 1;
              local_6c = 0xffffffffffffffff;
              local_80[0] = param_1;
              (**(code **)(*plVar24 + 0x18))(plVar24);
            }
          }
          break;
        }
        uVar22 = puVar1[4];
      } while (uVar22 != 0xffffffff);
    }
  }
  *(byte *)(lVar9 + 0x15d) = param_8 ^ 1;
  lVar10 = 0x978;
  if (*(char *)(lVar9 + 0xc) != '\0') {
    lVar10 = 0x9d0;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28 + lVar10) + (longlong)*(int *)(lVar9 + 8) * 4) =
       param_7;
  if (*(char *)(lVar9 + 0xc) == '\x01') {
    lVar9 = (longlong)*(int *)(param_1 + 0x30 + lVar10);
    if (lVar9 == 0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = 0.0;
      lVar20 = 0;
      do {
        fVar26 = fVar26 + *(float *)(*(longlong *)(param_1 + 0x28 + lVar10) + lVar20);
        lVar20 = lVar20 + 4;
      } while (lVar9 * 4 != lVar20);
    }
    *(float *)(param_1 + 0x8e0) = fVar26;
  }
  if ((void *)(param_1 + 0xb60) != param_4) {
    if (*(char *)((longlong)param_4 + 0xd0) == '\x01') {
      memcpy((void *)(param_1 + 0xb60),param_4,0xd0);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xc30) != '\x01') goto LAB_140738412;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0xc30) = uVar6;
  }
LAB_140738412:
  if (*(char *)(param_5 + 1) == '\x01') {
    *(undefined1 *)(param_5 + 1) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073917a FUN_14073917a body=147 status=ok
// SIG undefined FUN_14073917a(void)

longlong * FUN_14073917a(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xac8) != *(int *)(param_1 + 0xaf4)) {
    lVar5 = param_1 + 0xaf8;
    if (*(longlong *)(param_1 + 0xb00) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb00);
    }
    uVar2 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xb08) - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xac0) + (longlong)(int)uVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 == (uint *)0x0) {
            return (longlong *)0x0;
          }
          plVar3 = *(longlong **)(puVar1 + 2);
          if (plVar3 == (longlong *)0x0) {
            return (longlong *)0x0;
          }
          FUN_14073922e();
          cVar4 = (**(code **)(*plVar3 + 8))(plVar3,&DAT_14caab740);
          if (cVar4 == '\0') {
            return (longlong *)0x0;
          }
          return plVar3;
        }
        uVar2 = puVar1[4];
      } while (uVar2 != 0xffffffff);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14073920e FUN_14073920e body=32 status=ok
// SIG undefined FUN_14073920e(void)

bool FUN_14073920e(undefined8 param_1,longlong *param_2)

{
  FUN_14073922e();
  return DAT_14caab740 == *param_2;
}



// FUNCTION 14073922e FUN_14073922e body=104 status=ok
// SIG undefined FUN_14073922e(void)

void FUN_14073922e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caab748) {
    FUN_144b3d300(&DAT_14caab748);
    if (DAT_14caab748 == -1) {
      FUN_1446f470e(&DAT_14caab740,L"FSequencerPlayerAnimSequence",1);
      _Init_thread_footer(&DAT_14caab748);
      return;
    }
  }
  return;
}



// FUNCTION 140739296 FUN_140739296 body=5 status=ok
// SIG undefined FUN_140739296(void)

void FUN_140739296(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 14073929c FUN_14073929c body=438 status=ok
// SIG undefined FUN_14073929c(void)

undefined4 *
FUN_14073929c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407394fc(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
  uVar4 = uVar6 >> 0xd ^ (int)uVar2 - uVar6;
  uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - uVar6;
  uVar8 = uVar7 >> 0xd ^ (uVar6 - uVar4) - uVar7;
  uVar6 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
  uVar4 = uVar6 << 0x10 ^ (uVar7 - uVar8) - uVar6;
  uVar7 = uVar4 >> 5 ^ (uVar8 - uVar6) - uVar4;
  uVar6 = uVar7 >> 3 ^ (uVar6 - uVar4) - uVar7;
  uVar4 = uVar6 << 10 ^ (uVar4 - uVar7) - uVar6;
  uVar4 = uVar4 >> 0xf ^ uVar7 - (uVar6 + uVar4);
  local_68 = param_4;
  cVar3 = FUN_140739454(param_1,uVar4,local_48);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar9 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_48 + 2) = uVar4;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_140739d44(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140739454 FUN_140739454 body=167 status=ok
// SIG undefined FUN_140739454(void)

void FUN_140739454(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_140d0e2d4(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          break;
        }
        iVar5 = piVar1[3];
        uVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_1407394c5;
    }
  }
  uVar3 = 0;
LAB_1407394c5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1407394fc FUN_1407394fc body=482 status=ok
// SIG undefined FUN_1407394fc(void)

int * FUN_1407394fc(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1407396de FUN_1407396de body=521 status=ok
// SIG undefined FUN_1407396de(void)

void FUN_1407396de(longlong *param_1,float param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x18e) & 0x20) == 0) goto LAB_14073982d;
  cVar1 = (**(code **)(*param_1 + 0xcf8))();
  if (cVar1 != '\0') goto LAB_14073982d;
  if ((*(byte *)((longlong)param_1 + 0xc71) & 0x20) == 0) {
    FUN_14072916a(param_1,*(undefined4 *)((longlong)param_1 + 0x854));
  }
  else {
    cVar1 = FUN_14489aeae(param_1);
    if (cVar1 == '\0') {
      FUN_147a0bc9e(param_1);
    }
  }
  lVar2 = param_1[0xcb];
  if (lVar2 == 0) {
    lVar2 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar2 != 0) != 0) goto LAB_1407398f5;
    if (lVar2 == 0) goto LAB_14073982d;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1407398f5:
    FUN_1456cec3c(lVar2);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
    *(byte *)((longlong)param_1 + 0xc72) = *(byte *)((longlong)param_1 + 0xc72) | 0x20;
    FUN_14490ec86(param_1,param_2,param_3);
    if (((*(char *)((longlong)param_1 + 0x89c) == '\x02') ||
        (*(char *)((longlong)param_1 + 0x89c) == '\x03')) &&
       ((0.0 < param_2 && ((*(byte *)((longlong)param_1 + 0x89f) & 0x40) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14073982d:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140739902 FUN_140739902 body=273 status=ok
// SIG undefined FUN_140739902(void)

void FUN_140739902(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x68);
  local_1c = param_2;
  if (param_3 == '\x02') {
    bVar1 = *(byte *)(lVar2 + 0x28);
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(lVar2 + 8) = *param_4;
      if ((undefined4 *)(lVar2 + 8) != param_4) {
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
          *(undefined8 *)(lVar2 + 0x10) = 0;
        }
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_4 + 2);
        *(undefined8 *)(param_4 + 2) = 0;
        if (*(longlong *)(lVar2 + 0x18) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_4 + 4);
        *(undefined8 *)(param_4 + 4) = 0;
        *(undefined4 *)(lVar2 + 0x20) = param_4[6];
        *(undefined4 *)(lVar2 + 0x24) = param_4[7];
        *(undefined8 *)(param_4 + 6) = 0;
        bVar1 = *(byte *)(lVar2 + 0x28);
      }
      *(byte *)(lVar2 + 0x28) = bVar1 | 1;
    }
    else {
      FUN_1476aef9e(param_1 + 0xa0,&local_1c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    FUN_1476aef20(lVar2 + 8,param_4);
    *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140739a14 FUN_140739a14 body=424 status=ok
// SIG undefined FUN_140739a14(void)

uint * FUN_140739a14(uint *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (((((param_2[1] != 0) && (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((plVar4 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == param_2[1])))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
    if (DAT_14cad2858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146395584;
      local_58 = &LAB_147a0ba80;
      local_60 = &LAB_14575ccce;
      local_68 = L"Engine";
      local_70 = 0x40000000000;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      *param_1 = (uint)*(byte *)(lVar2 + 0xc5f);
      lVar3 = *(longlong *)(lVar2 + 0xae8);
      if (lVar3 != 0) {
        FUN_1401924dc(lVar3);
        *(longlong *)(param_1 + 2) = lVar3;
      }
      FUN_14073a052(param_1 + 4,lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140739bbe FUN_140739bbe body=388 status=ok
// SIG undefined FUN_140739bbe(void)

void FUN_140739bbe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x30);
  fVar4 = 0.0;
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      fVar4 = fVar4 + *(float *)(*(longlong *)(param_1 + 0x28) + lVar2);
      lVar2 = lVar2 + 4;
    } while ((longlong)iVar1 * 4 - lVar2 != 0);
    if (0 < iVar1) {
      if (iVar1 == *(int *)(param_1 + 0x40)) {
        memset(*(void **)(param_1 + 0x38),0,(longlong)*(int *)(param_1 + 0x44) << 2);
      }
      else {
        local_24 = 0;
        FUN_1448158c6(param_1 + 0x38);
      }
      goto LAB_140739c37;
    }
  }
  if (*(int *)(param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_14482f6fa(param_1 + 0x38,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_140739c37:
  fVar3 = *(float *)(param_1 + 0x48) * fVar4 + *(float *)(param_1 + 0x4c);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1e-05 < fVar3) {
    if (*(char *)(param_1 + 0x51) == '\0') {
      if (0 < *(int *)(param_1 + 0x30)) {
        lVar2 = 0;
        do {
          fVar4 = *(float *)(*(longlong *)(param_1 + 0x28) + lVar2 * 4) * *(float *)(param_1 + 0x48)
                  + *(float *)(param_1 + 0x4c);
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          *(float *)(*(longlong *)(param_1 + 0x38) + lVar2 * 4) = fVar4;
          lVar2 = lVar2 + 1;
        } while (lVar2 < *(int *)(param_1 + 0x30));
      }
    }
    else if (0 < *(int *)(param_1 + 0x30)) {
      lVar2 = 0;
      do {
        fVar3 = (*(float *)(*(longlong *)(param_1 + 0x28) + lVar2 * 4) / fVar4) *
                *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x4c);
        if (1.0 <= fVar3) {
          fVar3 = 1.0;
        }
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        *(float *)(*(longlong *)(param_1 + 0x38) + lVar2 * 4) = fVar3;
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x30));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140739d44 FUN_140739d44 body=781 status=ok
// SIG undefined FUN_140739d44(void)

void FUN_140739d44(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140739daa;
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
  } while (uVar9 != uVar2);
LAB_140739daa:
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar7 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar7 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar7 = iVar16 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar17 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar7) {
      iVar7 = iVar16;
    }
  }
  if (iVar7 < iVar16) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar7;
      uVar2 = *(uint *)(lVar8 + 4 + lVar14 * 0x14);
      uVar15 = uVar2 >> 0xd ^ *(int *)(lVar8 + lVar14 * 0x14) - uVar2;
      uVar6 = uVar15 << 8 ^ (-0x61c88647 - uVar2) - uVar15;
      uVar2 = uVar6 >> 0xd ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 0xc ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 0x10 ^ (uVar6 - uVar2) - uVar15;
      uVar2 = uVar6 >> 5 ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 3 ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 10 ^ (uVar6 - uVar2) - uVar15;
      uVar17 = (longlong)(int)(uVar6 >> 0xf ^ uVar2 - (uVar15 + uVar6)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar17;
      *(int *)(lVar8 + 0x10 + lVar14 * 0x14) = iVar16;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0xc + lVar14 * 0x14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar16 = (int)param_1[5];
      iVar7 = (int)uVar3;
      lVar8 = (longlong)iVar7;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar10 = iVar16 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar10 <= iVar7) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar14 + 1];
          if (uVar2 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar7 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar17 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar16);
  }
  return;
}



// FUNCTION 14073a052 FUN_14073a052 body=748 status=ok
// SIG undefined FUN_14073a052(void)

void FUN_14073a052(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 unaff_EBP;
  int iVar4;
  undefined1 unaff_R12B;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = 0;
  FUN_14073a340(param_1,0,1);
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar4;
      }
    }
    unaff_R12B = *(undefined1 *)(param_2 + 0x89c);
    *(undefined1 *)(param_2 + 0x89c) = 0;
    unaff_EBP = *(undefined4 *)(param_2 + 0x854);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14073a3b4(param_1,iVar4);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar4 * 0x10;
  *(uint *)(lVar6 + lVar7) = uVar8;
  *(int *)(lVar6 + 4 + lVar7) = iVar3;
  *(undefined1 *)(lVar6 + 8 + lVar7) = unaff_R12B;
  *(undefined2 *)(lVar6 + 9 + lVar7) = local_43;
  *(undefined1 *)(lVar6 + 0xb + lVar7) = local_41;
  *(undefined4 *)(lVar6 + 0xc + lVar7) = unaff_EBP;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1407329d4(param_2,1,&local_58);
  lVar6 = local_58;
  lVar7 = (longlong)(int)uStack_50;
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + lVar5);
      if (lVar2 != 0) {
        if (DAT_14cad2858 == 0) {
          local_80 = &local_68;
          local_68 = FUN_144a7958c;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_146395584;
          local_88 = &LAB_147a0ba80;
          local_90 = &LAB_14575ccce;
          local_98 = L"Engine";
          local_a0 = 0x40000000000;
          local_a8 = 0x10000004;
          local_b0 = 0x10;
          local_b8 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
          local_68 = (code *)0x0;
          FUN_14485c47a(&local_68,lVar2);
          uStack_60 = CONCAT31(uStack_60._1_3_,*(undefined1 *)(lVar2 + 0x89c));
          *(undefined1 *)(lVar2 + 0x89c) = 0;
          uStack_5c = *(undefined4 *)(lVar2 + 0x854);
          iVar3 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
            FUN_14073a3b4(param_1,iVar3);
          }
          puVar1 = (undefined4 *)(*param_1 + (longlong)iVar3 * 0x10);
          *puVar1 = (undefined4)local_68;
          puVar1[1] = local_68._4_4_;
          puVar1[2] = uStack_60;
          puVar1[3] = uStack_5c;
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar7 * 8 != lVar5);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073a340 FUN_14073a340 body=115 status=ok
// SIG undefined FUN_14073a340(void)

void FUN_14073a340(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14073a3b4(param_1,iVar1);
    }
    FUN_1476aee6a((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1476aee7e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14073a3b4 FUN_14073a3b4 body=269 status=ok
// SIG undefined FUN_14073a3b4(void)

void FUN_14073a3b4(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14073a4c2 FUN_14073a4c2 body=637 status=ok
// SIG undefined FUN_14073a4c2(void)

void FUN_14073a4c2(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
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
    if ((int)uVar7 < 1) goto LAB_14073a525;
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
LAB_14073a525:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 14073a740 FUN_14073a740 body=637 status=ok
// SIG undefined FUN_14073a740(void)

void FUN_14073a740(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
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
    if ((int)uVar7 < 1) goto LAB_14073a7a3;
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
LAB_14073a7a3:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 14073a9be FUN_14073a9be body=4695 status=ok
// SIG undefined FUN_14073a9be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14073a9be(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  code **ppcVar21;
  double *pdVar22;
  undefined8 *puVar23;
  double *pdVar24;
  longlong lVar25;
  longlong *plVar26;
  ulonglong uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  undefined8 in_XMM3_Qb;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  double dVar62;
  undefined1 auVar60 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar72;
  undefined1 auVar71 [16];
  double dVar73;
  double dVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined1 auStack_7a8 [32];
  undefined4 local_788;
  undefined4 local_780;
  undefined4 local_778;
  undefined8 local_770;
  wchar_t *local_768;
  code *local_760;
  undefined1 *local_758;
  code **local_750;
  code *local_748;
  code *local_740;
  ulonglong local_738;
  int local_72c;
  undefined1 local_728 [16];
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  undefined1 local_6f8 [16];
  double local_6e8;
  double dStack_6e0;
  undefined1 local_6d8 [24];
  longlong *local_6c0;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined1 local_6a8 [16];
  double local_698;
  double dStack_690;
  undefined8 local_680 [3];
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined1 local_618;
  undefined8 local_610;
  double local_608;
  ulonglong uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 *local_5e0;
  undefined8 local_5d8;
  longlong local_5d0;
  char local_5c8;
  undefined8 local_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  code *local_598 [4];
  undefined1 local_578 [16];
  undefined8 local_568;
  undefined8 uStack_560;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408 [16];
  undefined1 local_3e0 [360];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  lVar13 = FUN_14073751e();
  if (DAT_14c951858 == 0) {
    local_750 = local_598;
    local_598[0] = FUN_1449e2820;
    local_740 = FUN_14081d0ea;
    local_748 = FUN_14081d0ea;
    local_758 = &LAB_1468c5283;
    local_760 = FUN_142809da0;
    local_768 = L"Engine";
    local_770 = 0x400000000;
    local_778 = 0x10000000;
    local_780 = 8;
    local_788 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar14 = *(longlong *)(param_1 + 0x20);
  if (lVar14 == 0) goto LAB_14073afaa;
  do {
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
       (lVar25 = lVar14,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
       != lVar13 + 0x30)) {
      lVar25 = 0;
    }
  } while ((lVar25 == 0) && (lVar14 = *(longlong *)(lVar14 + 0x20), lVar14 != 0));
  if (lVar25 == 0) goto LAB_14073afaa;
  *(undefined2 *)(param_1 + 0x128) = 0;
  dVar53 = (double)(int)*(undefined8 *)(lVar25 + 0x120);
  dVar47 = (double)(int)((ulonglong)*(undefined8 *)(lVar25 + 0x120) >> 0x20);
  dVar28 = dVar53 / dVar47;
  dVar56 = (double)(int)*(undefined8 *)(lVar25 + 0x118) /
           (double)(int)((ulonglong)*(undefined8 *)(lVar25 + 0x118) >> 0x20);
  auVar65._8_8_ = 0;
  auVar65._0_8_ = dVar56;
  auVar66 = roundpd(auVar65,auVar65,1);
  auVar30._0_8_ = dVar56 - auVar66._0_8_;
  auVar30._8_8_ = in_XMM3_Qb;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = (double)(int)auVar30._0_8_ + dVar56;
  auVar66 = roundpd(auVar30,auVar66,1);
  dVar56 = auVar66._0_8_;
  if (2147483647.0 <= dVar56) {
    dVar56 = 2147483647.0;
  }
  if (dVar56 <= -2147483648.0) {
    dVar56 = -2147483648.0;
  }
  uVar27 = -(ulonglong)(dVar28 < 60.0);
  if (dVar28 < 60.0) {
    dVar47 = 1.0;
  }
  dVar47 = (double)(~uVar27 & (ulonglong)dVar53 | uVar27 & 0x404e000000000000) / dVar47;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = dVar47;
  auVar66 = roundpd(auVar49,auVar49,1);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = (double)(int)(dVar47 - auVar66._0_8_) + dVar47;
  auVar66 = roundpd(auVar29,auVar29,1);
  dVar28 = auVar66._0_8_;
  if (2147483647.0 <= dVar28) {
    dVar28 = 2147483647.0;
  }
  if (dVar28 <= -2147483648.0) {
    dVar28 = -2147483648.0;
  }
  iVar11 = (int)dVar56 / (int)dVar28;
  local_72c = 1;
  if (1 < iVar11) {
    local_72c = iVar11;
  }
  if (*(int *)(param_1 + 0x100) == 0) goto LAB_14073afaa;
  FUN_14073bf5e(param_1,(longlong)(int)dVar56 % (longlong)(int)dVar28 & 0xffffffff);
  auVar66 = _DAT_1499387d0;
  if ((longlong)*(int *)(param_1 + 0x100) == 0) {
LAB_14073af9d:
    if (*(char *)(param_1 + 0x191) == '\x02') goto LAB_14073afaa;
  }
  else {
    plVar26 = *(longlong **)(param_1 + 0xf8);
    plVar19 = plVar26 + *(int *)(param_1 + 0x100);
    local_718 = DAT_14c8464b0;
    dStack_710 = DAT_14c8464b8;
    local_708 = DAT_14c8464a0;
    dStack_700 = DAT_14c8464a8;
    lVar13 = 0;
    dVar28 = (double)DAT_1499387d0;
    dVar47 = DAT_1499387d0._8_8_;
    local_738 = 0;
    uVar75 = (undefined4)DAT_14c846490;
    uVar76 = DAT_14c846490._4_4_;
    uVar77 = (undefined4)DAT_14c846498;
    uVar78 = DAT_14c846498._4_4_;
    uVar79 = (undefined4)DAT_14c846480;
    uVar80 = DAT_14c846480._4_4_;
    uVar81 = (undefined4)DAT_14c846488;
    uVar82 = DAT_14c846488._4_4_;
    uVar83 = (undefined4)DAT_14c8464c0;
    uVar84 = DAT_14c8464c0._4_4_;
    uVar85 = (undefined4)DAT_14c8464c8;
    uVar86 = DAT_14c8464c8._4_4_;
    uVar87 = (undefined4)DAT_14c8464d0;
    uVar88 = DAT_14c8464d0._4_4_;
    uVar89 = uRam000000014c8464d8;
    uVar90 = uRam000000014c8464dc;
    do {
      lVar14 = *plVar26;
      if (lVar14 != 0) {
        lVar15 = FUN_140f157e0();
        if (*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) {
          lVar16 = lVar15 + 0x30;
          lVar18 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30);
          if (*(longlong *)(lVar18 + (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar16) {
            if (((9.999999747378752e-05 < ABS(*(double *)(lVar14 + 0x298))) ||
                (9.999999747378752e-05 < ABS(*(double *)(lVar14 + 0x2a0)))) ||
               (9.999999747378752e-05 < ABS(*(double *)(lVar14 + 0x2a8)))) {
LAB_14073b0c9:
              local_738 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
            }
            else {
              auVar65 = *(undefined1 (*) [16])(lVar14 + 0x2b0);
              auVar30 = divpd(auVar65,auVar66);
              auVar50._8_8_ = 0;
              auVar50._0_8_ = *(double *)(lVar14 + 0x2c0);
              auVar29 = divpd(auVar50,auVar66);
              auVar30 = roundpd(auVar30,auVar30,3);
              auVar29 = roundpd(auVar29,auVar29,3);
              auVar67._0_8_ = auVar65._0_8_ - auVar30._0_8_ * dVar28;
              auVar67._8_8_ = auVar65._8_8_ - auVar30._8_8_ * dVar47;
              dVar53 = *(double *)(lVar14 + 0x2c0) - auVar29._0_8_ * dVar28;
              dVar56 = 0.0 - auVar29._8_8_ * dVar47;
              auVar58._0_8_ = auVar67._0_8_ + dVar28;
              auVar58._8_8_ = auVar67._8_8_ + dVar47;
              auVar54._0_8_ = dVar53 + dVar28;
              auVar54._8_8_ = dVar56 + dVar47;
              auVar31._8_8_ = -(ulonglong)(0.0 <= auVar67._8_8_);
              auVar31._0_8_ = -(ulonglong)(0.0 <= auVar67._0_8_);
              auVar30 = blendvpd(auVar58,auVar67,auVar31);
              auVar32._8_8_ = -(ulonglong)(0.0 <= dVar56);
              auVar32._0_8_ = -(ulonglong)(0.0 <= dVar53);
              auVar2._8_8_ = dVar56;
              auVar2._0_8_ = dVar53;
              auVar65 = blendvpd(auVar54,auVar2,auVar32);
              auVar68._0_8_ = auVar30._0_8_ + -360.0;
              auVar68._8_8_ = auVar30._8_8_ + -360.0;
              auVar33._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
              auVar33._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
              auVar30 = blendvpd(auVar30,auVar68,auVar33);
              auVar34._8_8_ = -(ulonglong)(180.0 < auVar65._8_8_);
              auVar34._0_8_ = -(ulonglong)(180.0 < auVar65._0_8_);
              auVar3._8_8_ = auVar65._8_8_ + -360.0;
              auVar3._0_8_ = auVar65._0_8_ + -360.0;
              auVar65 = blendvpd(auVar65,auVar3,auVar34);
              auVar35._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._8_8_));
              auVar35._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._0_8_));
              uVar12 = (undefined4)((ulonglong)lVar16 >> 0x20);
              iVar11 = movmskpd((int)lVar16,auVar35);
              lVar16 = CONCAT44(uVar12,iVar11);
              auVar36._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar65._8_8_));
              auVar36._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar65._0_8_));
              uVar17 = movmskpd((int)lVar18,auVar36);
              if ((((uVar17 & 0x3fffffff) != 0 || iVar11 != 0) ||
                  (9.999999747378752e-05 < ABS(*(double *)(lVar14 + 0x2d0)))) ||
                 ((9.999999747378752e-05 < ABS(*(double *)(lVar14 + 0x2d8)) ||
                  (9.999999747378752e-05 < ABS(*(double *)(lVar14 + 0x2e0)))))) goto LAB_14073b0c9;
              auVar65 = *(undefined1 (*) [16])(lVar14 + 0x2e8);
              auVar30 = divpd(auVar65,auVar66);
              auVar51._8_8_ = 0;
              auVar51._0_8_ = *(double *)(lVar14 + 0x2f8);
              auVar29 = divpd(auVar51,auVar66);
              auVar30 = roundpd(auVar30,auVar30,3);
              auVar29 = roundpd(auVar29,auVar29,3);
              auVar69._0_8_ = auVar65._0_8_ - auVar30._0_8_ * dVar28;
              auVar69._8_8_ = auVar65._8_8_ - auVar30._8_8_ * dVar47;
              dVar53 = *(double *)(lVar14 + 0x2f8) - auVar29._0_8_ * dVar28;
              dVar56 = 0.0 - auVar29._8_8_ * dVar47;
              auVar59._0_8_ = auVar69._0_8_ + dVar28;
              auVar59._8_8_ = auVar69._8_8_ + dVar47;
              auVar55._0_8_ = dVar53 + dVar28;
              auVar55._8_8_ = dVar56 + dVar47;
              auVar37._8_8_ = -(ulonglong)(0.0 <= auVar69._8_8_);
              auVar37._0_8_ = -(ulonglong)(0.0 <= auVar69._0_8_);
              auVar30 = blendvpd(auVar59,auVar69,auVar37);
              auVar38._8_8_ = -(ulonglong)(0.0 <= dVar56);
              auVar38._0_8_ = -(ulonglong)(0.0 <= dVar53);
              auVar4._8_8_ = dVar56;
              auVar4._0_8_ = dVar53;
              auVar65 = blendvpd(auVar55,auVar4,auVar38);
              auVar70._0_8_ = auVar30._0_8_ + -360.0;
              auVar70._8_8_ = auVar30._8_8_ + -360.0;
              auVar39._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
              auVar39._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
              auVar30 = blendvpd(auVar30,auVar70,auVar39);
              auVar40._8_8_ = -(ulonglong)(180.0 < auVar65._8_8_);
              auVar40._0_8_ = -(ulonglong)(180.0 < auVar65._0_8_);
              auVar5._8_8_ = auVar65._8_8_ + -360.0;
              auVar5._0_8_ = auVar65._0_8_ + -360.0;
              auVar65 = blendvpd(auVar65,auVar5,auVar40);
              auVar41._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._8_8_));
              auVar41._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._0_8_));
              iVar11 = movmskpd(iVar11,auVar41);
              lVar16 = CONCAT44(uVar12,iVar11);
              auVar42._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar65._8_8_));
              auVar42._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar65._0_8_));
              uVar17 = movmskpd(0,auVar42);
              if ((uVar17 & 0x3fffffff) != 0 || iVar11 != 0) goto LAB_14073b0c9;
            }
            if (lVar13 == 0) {
              puVar23 = &DAT_14c846480;
              puVar20 = (undefined8 *)(lVar14 + 0x310);
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar20 = *puVar23;
                puVar23 = puVar23 + 1;
                puVar20 = puVar20 + 1;
              }
            }
            else {
              lVar15 = *(longlong *)(lVar13 + 0x100);
              local_6c0 = plVar19;
              if (lVar15 == 0) {
                puVar23 = (undefined8 *)(lVar14 + 0x310);
                puVar20 = &DAT_14c846480;
                lVar13 = 0xc;
LAB_14073af3c:
                for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *puVar23 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar23 = puVar23 + 1;
                }
              }
              else {
                if ((local_738 & 1) == 0) {
                  lVar13 = 0xc;
                  puVar20 = &DAT_14c846480;
                  puVar23 = (undefined8 *)(lVar14 + 0x310);
                  goto LAB_14073af3c;
                }
                FUN_1475cfb9c(lVar14,local_598);
                ppcVar21 = local_598;
                puVar23 = (undefined8 *)(param_1 + 0x130);
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *puVar23 = *ppcVar21;
                  ppcVar21 = ppcVar21 + 1;
                  puVar23 = puVar23 + 1;
                }
                local_598[1] = (code *)local_3e0;
                local_598[0] = FUN_140036a08;
                lVar18 = FUN_144a773aa(local_598,&DAT_14c7585d0);
                local_5e0 = (undefined8 *)(lVar18 + 0x10);
                local_5d8 = *(undefined8 *)(lVar18 + 0x10);
                local_5d0 = *(longlong *)(lVar18 + 0x20);
                local_5c8 = '\0';
                local_5c0 = *(undefined8 *)(lVar18 + 0x28);
                *(undefined8 ***)(lVar18 + 0x28) = &local_5e0;
                *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
                local_5f8 = 0;
                uStack_5f0 = 0;
                local_5e8 = 0;
                local_608 = 0.0;
                uVar17 = *(uint *)(*(longlong *)(lVar15 + 0x40) + 0x78);
                uStack_600 = (ulonglong)uVar17;
                iVar11 = 0;
                if (uVar17 != 0) {
                  FUN_14488eebe(&local_608,0);
                  iVar11 = (int)uStack_600;
                  if (0 < (int)uStack_600) {
                    lVar18 = 0;
                    do {
                      *(short *)((longlong)local_608 + lVar18 * 2) = (short)lVar18;
                      lVar18 = lVar18 + 1;
                    } while (lVar18 < (int)uStack_600);
                  }
                }
                local_598[0] = (code *)0x0;
                local_598[1] = (code *)(((ulonglong)local_598[1] >> 8 & 0xffffff) << 8);
                local_178 = local_608;
                local_170 = (double)CONCAT44(local_170._4_4_,iVar11);
                FUN_143417438(local_3e0,&local_178,local_598,*(undefined8 *)(lVar15 + 0x40));
                FUN_1448859f0(&local_5f8,local_3e0);
                local_610 = 0;
                local_628 = 0;
                uStack_620 = 0;
                local_618 = 0;
                FUN_1478e2e96(&local_628,local_3e0);
                local_638 = 0;
                uStack_630 = 0;
                local_648 = 0;
                uStack_640 = 0;
                local_658 = 0;
                uStack_650 = 0;
                local_668 = 0;
                uStack_660 = 0;
                FUN_1447166a4(local_680,&local_5f8,&local_628);
                local_578 = ZEXT816(0);
                local_568 = 0;
                uStack_560 = 0x3ff0000000000000;
                local_528 = ZEXT816(0x3ff0000000000000);
                local_538 = 0x3ff0000000000000;
                uStack_530 = 0x3ff0000000000000;
                local_508 = 0;
                uStack_500 = 0x3ff0000000000000;
                local_4d8 = 0x3ff0000000000000;
                uStack_4d0 = 0x3ff0000000000000;
                local_4a8 = 0;
                uStack_4a0 = 0x3ff0000000000000;
                local_478 = 0x3ff0000000000000;
                uStack_470 = 0x3ff0000000000000;
                local_448 = 0;
                uStack_440 = 0x3ff0000000000000;
                local_418 = 0x3ff0000000000000;
                uStack_410 = 0x3ff0000000000000;
                local_598[1] = *(code **)(lVar25 + 0x118);
                local_598[0] = (code *)(ulonglong)*(uint *)(lVar14 + 0x9c);
                local_558 = local_578;
                local_548 = local_578;
                local_518 = local_578;
                local_4f8 = local_578;
                local_4e8 = local_578;
                local_4c8 = local_528;
                local_4b8 = local_578;
                local_498 = local_578;
                local_488 = local_578;
                local_468 = local_528;
                local_458 = local_578;
                local_438 = local_578;
                local_428 = local_578;
                local_408 = local_528;
                cVar10 = FUN_1475cfc5c(lVar13,local_680,local_598);
                if (cVar10 == '\0') {
                  puVar23 = &DAT_14c846480;
                  puVar20 = (undefined8 *)(lVar14 + 0x310);
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *puVar20 = *puVar23;
                    puVar23 = puVar23 + 1;
                    puVar20 = puVar20 + 1;
                  }
                }
                else {
                  uVar12 = FUN_144a2c3ca(local_4b8,&local_178,local_578);
                  pdVar22 = &local_178;
                  pdVar24 = (double *)(lVar14 + 0x310);
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *pdVar24 = *pdVar22;
                    pdVar22 = pdVar22 + 1;
                    pdVar24 = pdVar24 + 1;
                  }
                  local_6a8 = *(undefined1 (*) [16])(lVar14 + 0x350);
                  local_6d8._0_16_ = *(undefined1 (*) [16])(lVar14 + 0x360);
                  auVar6._4_4_ = uVar84;
                  auVar6._0_4_ = uVar83;
                  auVar6._8_4_ = uVar85;
                  auVar6._12_4_ = uVar86;
                  auVar65 = minpd(local_6a8,auVar6);
                  auVar8._4_4_ = uVar88;
                  auVar8._0_4_ = uVar87;
                  auVar8._8_4_ = uVar89;
                  auVar8._12_4_ = uVar90;
                  auVar30 = minpd(local_6d8._0_16_,auVar8);
                  auVar43._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
                  auVar43._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
                  iVar11 = movmskpd(uVar12,auVar43);
                  auVar52._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
                  auVar52._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
                  uVar17 = movmskpd(0,auVar52);
                  local_6b8 = uVar83;
                  uStack_6b4 = uVar84;
                  uStack_6b0 = uVar85;
                  uStack_6ac = uVar86;
                  if ((uVar17 & 0x3fffffff) == 0 && iVar11 == 0) {
                    dVar53 = *(double *)(lVar14 + 0x310);
                    dVar56 = *(double *)(lVar14 + 0x318);
                    dVar46 = *(double *)(lVar14 + 800);
                    dVar48 = *(double *)(lVar14 + 0x328);
                    local_698 = (double)CONCAT44(uVar78,uVar77);
                    dStack_690 = (double)CONCAT44(uVar78,uVar77);
                    dVar73 = dVar56 * (double)CONCAT44(uVar76,uVar75) * -1.0 +
                             dVar46 * (double)CONCAT44(uVar82,uVar81) +
                             (double)CONCAT44(uVar80,uVar79) * dVar48 * 1.0 + local_698 * dVar53;
                    dVar57 = dVar53 * (double)CONCAT44(uVar76,uVar75) * 1.0 +
                             dVar48 * (double)CONCAT44(uVar82,uVar81) +
                             (double)CONCAT44(uVar80,uVar79) * dVar46 * -1.0 + dStack_690 * dVar56;
                    local_6f8._8_8_ =
                         dVar46 * (double)CONCAT44(uVar76,uVar75) * -1.0 +
                         (((double)CONCAT44(uVar80,uVar79) * dVar53 * -1.0 + dStack_690 * dVar48) -
                         (double)CONCAT44(uVar82,uVar81) * dVar56);
                    local_6f8._0_8_ =
                         dVar48 * (double)CONCAT44(uVar76,uVar75) * 1.0 +
                         (((double)CONCAT44(uVar80,uVar79) * dVar56 * 1.0 + local_698 * dVar46) -
                         (double)CONCAT44(uVar82,uVar81) * dVar53);
                    dVar46 = *(double *)(lVar14 + 0x330) * (double)CONCAT44(uVar84,uVar83);
                    dVar48 = *(double *)(lVar14 + 0x338) * (double)CONCAT44(uVar86,uVar85);
                    dVar61 = *(double *)(lVar14 + 0x340) * (double)CONCAT44(uVar88,uVar87);
                    dVar74 = *(double *)(lVar14 + 0x348) * (double)CONCAT44(uVar90,uVar89);
                    local_728._8_8_ = CONCAT44(uVar78,uVar77);
                    local_728._0_8_ = CONCAT44(uVar80,uVar79);
                    local_6e8 = (double)CONCAT44(uVar82,uVar81);
                    dStack_6e0 = (double)CONCAT44(uVar76,uVar75);
                    dVar53 = dVar48 * (double)CONCAT44(uVar80,uVar79) - local_6e8 * dVar46;
                    dVar62 = dVar61 * (double)CONCAT44(uVar82,uVar81) - dStack_6e0 * dVar48;
                    dVar63 = dVar46 * (double)CONCAT44(uVar76,uVar75) -
                             (double)local_728._0_8_ * dVar61;
                    dVar56 = dVar74 * (double)CONCAT44(uVar78,uVar77) -
                             (double)local_728._8_8_ * dVar74;
                    dVar62 = dVar62 + dVar62;
                    dVar63 = dVar63 + dVar63;
                    dVar53 = dVar53 + dVar53;
                    dVar56 = dVar56 + dVar56;
                    local_708 = local_708 +
                                (dVar53 * (double)CONCAT44(uVar82,uVar81) - dStack_6e0 * dVar63) +
                                local_698 * dVar62 + dVar46;
                    dStack_700 = dStack_700 +
                                 (dVar62 * (double)CONCAT44(uVar76,uVar75) -
                                 dVar53 * (double)local_728._0_8_) + dStack_690 * dVar63 + dVar48;
                    local_718 = local_718 +
                                (dVar63 * (double)CONCAT44(uVar80,uVar79) - local_6e8 * dVar62) +
                                local_698 * dVar53 + dVar61;
                    dStack_710 = dStack_710 +
                                 (dVar56 * (double)CONCAT44(uVar78,uVar77) -
                                 dVar56 * (double)local_728._8_8_) + dStack_690 * dVar56 + dVar74;
                    dVar53 = (double)local_6a8._0_8_ * (double)CONCAT44(uVar84,uVar83);
                    dVar56 = (double)local_6a8._8_8_ * (double)CONCAT44(uVar86,uVar85);
                    dVar46 = (double)local_6d8._0_8_ * (double)CONCAT44(uVar88,uVar87);
                    dVar48 = (double)local_6d8._8_8_ * (double)CONCAT44(uVar90,uVar89);
                  }
                  else {
                    dVar73 = (double)CONCAT44(uVar80,uVar79) + (double)CONCAT44(uVar80,uVar79);
                    dVar74 = (double)CONCAT44(uVar82,uVar81) + (double)CONCAT44(uVar82,uVar81);
                    dVar48 = (double)CONCAT44(uVar76,uVar75) + (double)CONCAT44(uVar76,uVar75);
                    dVar56 = (double)CONCAT44(uVar80,uVar79) * dVar73;
                    dVar46 = (double)CONCAT44(uVar82,uVar81) * dVar74;
                    dVar53 = (double)CONCAT44(uVar76,uVar75) * dVar48;
                    local_1f8 = (1.0 - (dVar53 + dVar46)) * (double)CONCAT44(uVar84,uVar83);
                    dStack_1d0 = (1.0 - (dVar53 + dVar56)) * (double)CONCAT44(uVar86,uVar85);
                    dVar57 = dVar74 * (double)CONCAT44(uVar80,uVar79);
                    dVar61 = dVar48 * (double)CONCAT44(uVar82,uVar81);
                    dVar53 = (double)CONCAT44(uVar80,uVar79) * dVar48;
                    dVar48 = dVar48 * (double)CONCAT44(uVar78,uVar77);
                    dVar73 = dVar73 * (double)CONCAT44(uVar78,uVar77);
                    dVar74 = dVar74 * (double)CONCAT44(uVar78,uVar77);
                    local_1d8 = (dVar57 - dVar48) * (double)CONCAT44(uVar86,uVar85);
                    dStack_1b0 = (dVar61 - dVar73) * (double)CONCAT44(uVar88,uVar87);
                    local_1b8 = (dVar74 + dVar53) * (double)CONCAT44(uVar88,uVar87);
                    local_1a8 = (1.0 - (dVar56 + dVar46)) * (double)CONCAT44(uVar88,uVar87);
                    dVar56 = (double)CONCAT44(uVar90,uVar89) * (double)local_6d8._8_8_;
                    local_728._8_4_ = SUB84(dVar56,0);
                    local_728._0_8_ = (double)CONCAT44(uVar88,uVar87) * (double)local_6d8._0_8_;
                    local_728._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                    dStack_1f0 = (dVar57 + dVar48) * (double)CONCAT44(uVar84,uVar83);
                    local_1c8 = (dVar61 + dVar73) * (double)CONCAT44(uVar86,uVar85);
                    local_1e8 = (dVar53 - dVar74) * (double)CONCAT44(uVar84,uVar83);
                    uStack_1e0 = 0;
                    uStack_1c0 = 0;
                    uStack_1a0 = 0;
                    local_198 = local_708;
                    dStack_190 = dStack_700;
                    local_188 = local_718;
                    uStack_180 = 0x3ff0000000000000;
                    dVar73 = *(double *)(lVar14 + 0x310);
                    dVar57 = *(double *)(lVar14 + 0x318);
                    dVar48 = *(double *)(lVar14 + 800);
                    dVar62 = dVar57 + dVar57;
                    dVar63 = dVar48 + dVar48;
                    dVar61 = dVar73 * (dVar73 + dVar73);
                    local_228 = (1.0 - (dVar61 + dVar57 * dVar62)) * (double)local_6d8._0_8_;
                    dVar74 = *(double *)(lVar14 + 0x310) * dVar63;
                    dVar46 = *(double *)(lVar14 + 0x328);
                    dVar64 = dVar63 * dVar46;
                    dVar72 = (dVar73 + dVar73) * *(double *)(lVar14 + 0x328);
                    dVar46 = dVar62 * dVar46;
                    local_238 = (dVar46 + dVar74) * (double)local_6d8._0_8_;
                    dStack_230 = (dVar63 * dVar57 - dVar72) * (double)local_6d8._0_8_;
                    dVar53 = (double)CONCAT44(uVar84,uVar83) * (double)local_6a8._0_8_;
                    dVar56 = (double)CONCAT44(uVar86,uVar85) * (double)local_6a8._8_8_;
                    local_278 = (1.0 - (dVar48 * dVar63 + dVar57 * dVar62)) *
                                (double)local_6a8._0_8_;
                    dVar48 = (1.0 - (dVar48 * dVar63 + dVar61)) * (double)local_6a8._8_8_;
                    dStack_270 = (dVar62 * dVar73 + dVar64) * (double)local_6a8._0_8_;
                    local_248 = (dVar63 * dVar57 + dVar72) * (double)local_6a8._8_8_;
                    local_268 = (dVar74 - dVar46) * (double)local_6a8._0_8_;
                    uStack_260 = 0;
                    local_258._8_4_ = SUB84(dVar48,0);
                    local_258._0_8_ = (dVar62 * dVar73 - dVar64) * (double)local_6a8._8_8_;
                    local_258._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                    uStack_240 = 0;
                    uStack_220 = 0;
                    local_218 = *(undefined8 *)(lVar14 + 0x330);
                    uStack_210 = *(undefined8 *)(lVar14 + 0x338);
                    local_208 = *(undefined8 *)(lVar14 + 0x340);
                    uStack_200 = 0x3ff0000000000000;
                    FUN_1447fea8d(&local_178);
                    FUN_144a1c686(&local_178,0x3e45798ee0000000);
                    auVar65 = _DAT_149934d80;
                    auVar44._8_8_ = -(ulonglong)(0.0 <= dVar56);
                    auVar44._0_8_ = -(ulonglong)(0.0 <= dVar53);
                    auVar30 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar44);
                    dVar46 = (double)local_728._0_8_;
                    dVar48 = (double)local_728._8_8_;
                    dVar73 = (double)(~-(ulonglong)(0.0 <= (double)local_728._0_8_) &
                                      0xbff0000000000000 |
                                     -(ulonglong)(0.0 <= (double)local_728._0_8_) &
                                     0x3ff0000000000000);
                    dVar57 = auVar30._0_8_;
                    local_168 = local_168 * dVar57;
                    local_170 = local_170 * dVar57;
                    local_178 = local_178 * dVar57;
                    dVar57 = auVar30._8_8_;
                    local_148 = local_148 * dVar57;
                    local_150 = local_150 * dVar57;
                    local_158 = dVar57 * local_158;
                    local_128 = local_128 * dVar73;
                    local_130 = local_130 * dVar73;
                    local_138 = dVar73 * local_138;
                    FUN_14481fd10(&local_5b8,&local_178);
                    dVar73 = local_5a8 * local_5a8 + local_5b8 * local_5b8;
                    dVar57 = dStack_5a0 * dStack_5a0 + dStack_5b0 * dStack_5b0;
                    auVar60._0_8_ = dVar73 + dVar57;
                    auVar60._8_8_ = dVar73 + dVar57;
                    auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
                    auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
                    auVar30 = sqrtpd(auVar60,auVar60);
                    auVar65 = divpd(auVar65,auVar30);
                    auVar71._0_8_ = auVar65._0_8_ * local_5a8;
                    auVar71._8_8_ = auVar65._8_8_ * dStack_5a0;
                    dVar73 = (double)((ulonglong)(local_5b8 * auVar65._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_));
                    dVar57 = (double)((ulonglong)(dStack_5b0 * auVar65._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_));
                    local_6f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar45);
                    local_708 = local_118;
                    dStack_700 = dStack_110;
                    local_718 = local_108;
                    dStack_710 = 0.0;
                  }
                  *(double *)(lVar14 + 0x310) = dVar73;
                  *(double *)(lVar14 + 0x318) = dVar57;
                  *(undefined8 *)(lVar14 + 800) = local_6f8._0_8_;
                  *(undefined8 *)(lVar14 + 0x328) = local_6f8._8_8_;
                  *(double *)(lVar14 + 0x330) = local_708;
                  *(double *)(lVar14 + 0x338) = dStack_700;
                  *(double *)(lVar14 + 0x340) = local_718;
                  *(double *)(lVar14 + 0x348) = dStack_710;
                  auVar9._8_4_ = SUB84(dVar56,0);
                  auVar9._0_8_ = dVar53;
                  auVar9._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                  *(undefined1 (*) [16])(lVar14 + 0x350) = auVar9;
                  auVar7._8_4_ = SUB84(dVar48,0);
                  auVar7._0_8_ = dVar46;
                  auVar7._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                  *(undefined1 (*) [16])(lVar14 + 0x360) = auVar7;
                }
                FUN_1447166b4(&local_668);
                FUN_1406cb64a(local_3e0);
                if (local_608 != 0.0) {
                  FUN_1400020a8();
                }
                if (local_5c8 == '\0') {
                  local_5c8 = '\x01';
                  *(int *)(local_5e0 + 4) = *(int *)(local_5e0 + 4) + -1;
                  if (local_5d0 != local_5e0[2]) {
                    FUN_14004673c();
                  }
                  *local_5e0 = local_5d8;
                  local_5e0[3] = local_5c0;
                }
              }
              uVar79 = *(undefined4 *)(lVar14 + 0x310);
              uVar80 = *(undefined4 *)(lVar14 + 0x314);
              uVar81 = *(undefined4 *)(lVar14 + 0x318);
              uVar82 = *(undefined4 *)(lVar14 + 0x31c);
              uVar75 = *(undefined4 *)(lVar14 + 800);
              uVar76 = *(undefined4 *)(lVar14 + 0x324);
              uVar77 = *(undefined4 *)(lVar14 + 0x328);
              uVar78 = *(undefined4 *)(lVar14 + 0x32c);
              local_708 = *(double *)(lVar14 + 0x330);
              dStack_700 = *(double *)(lVar14 + 0x338);
              local_718 = *(double *)(lVar14 + 0x340);
              dStack_710 = *(double *)(lVar14 + 0x348);
              uVar83 = *(undefined4 *)(lVar14 + 0x350);
              uVar84 = *(undefined4 *)(lVar14 + 0x354);
              uVar85 = *(undefined4 *)(lVar14 + 0x358);
              uVar86 = *(undefined4 *)(lVar14 + 0x35c);
              uVar87 = *(undefined4 *)(lVar14 + 0x360);
              uVar88 = *(undefined4 *)(lVar14 + 0x364);
              uVar89 = *(undefined4 *)(lVar14 + 0x368);
              uVar90 = *(undefined4 *)(lVar14 + 0x36c);
              plVar19 = local_6c0;
            }
            FUN_14073bc16(lVar14,*(undefined1 *)(param_1 + 400));
            lVar13 = lVar14;
          }
        }
      }
      plVar26 = plVar26 + 1;
    } while (plVar26 != plVar19);
    if ((local_738 & 1) == 0) goto LAB_14073af9d;
  }
  *(undefined1 *)(param_1 + 0x129) = 1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_1 + 0xf8) + 0x98);
  *(uint *)(param_1 + 0x118) = (uint)((char)uVar1 != '\x01') + (int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  uVar1 = *(undefined8 *)
           ((*(longlong **)(param_1 + 0xf8))[(longlong)*(int *)(param_1 + 0x100) + -1] + 0xa0);
  *(uint *)(param_1 + 0x120) = (int)((ulonglong)uVar1 >> 0x20) + -1 + (uint)((char)uVar1 == '\x01');
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(int *)(param_1 + 0x110) = local_72c;
  *(undefined4 *)(param_1 + 0x114) = 0;
LAB_14073afaa:
  if ((local_f0 ^ (ulonglong)auStack_7a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073bc16 FUN_14073bc16 body=839 status=ok
// SIG undefined FUN_14073bc16(void)

undefined4 FUN_14073bc16(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == '\0') {
    uVar12 = 0;
    if (*(char *)(param_1 + 0x374) == '\x01') {
      *(undefined1 *)(param_1 + 0x374) = 0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar14 = FUN_1402576f0();
      plVar2 = *(longlong **)(param_1 + 0x100);
      if (((((plVar2 != (longlong *)0x0) && (lVar14 != 0)) && (lVar19 = plVar2[2], lVar19 != 0)) &&
          ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar19 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
            lVar14 + 0x30)))) &&
         (((*(char *)(param_1 + 0x374) != '\x01' || (*(int *)(param_1 + 0x370) == -1)) &&
          (lVar14 = plVar2[0x1a], 0 < (longlong)(int)lVar14)))) {
        iVar18 = -1;
        lVar19 = 0;
        do {
          uVar1 = *(uint *)(plVar2[0x19] + lVar19 * 4);
          iVar11 = iVar18;
          if ((((ulonglong)uVar1 != 0xffffffff) && (iVar11 = (int)lVar19, -1 < (int)uVar1)) &&
             (((int)uVar1 < *(int *)(plVar2[8] + 0x78) &&
              ((iVar13 = *(int *)(*(longlong *)(plVar2[8] + 0x70) + 8 + (ulonglong)uVar1 * 0xc),
               iVar13 != -1 && (iVar11 = iVar18, iVar13 == iVar18)))))) {
            iVar11 = (**(code **)(*plVar2 + 0x310))(plVar2);
            if (0 < iVar11) {
              do {
                (**(code **)(*plVar2 + 0x2b0))(plVar2);
                plVar17 = plVar2;
                uVar12 = (**(code **)(*plVar2 + 0x318))(plVar2,local_b8);
                auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - DAT_14c8464a8));
                auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - DAT_14c8464a0));
                iVar13 = movmskpd(uVar12,auVar6);
                auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - DAT_14c8464b8));
                auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - DAT_14c8464b0));
                uVar15 = movmskpd((int)plVar17,auVar3);
                if ((uVar15 & 0x3fffffff) != 0 || iVar13 != 0) {
LAB_14073bf40:
                  *(uint *)(param_1 + 0x370) = uVar1;
                  *(undefined1 *)(param_1 + 0x374) = 1;
                  break;
                }
                auVar10._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - DAT_14c846488));
                auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - DAT_14c846480));
                uVar15 = movmskpd(iVar13,auVar10);
                auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(1.0 - DAT_14c846498));
                auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - DAT_14c846490));
                iVar13 = movmskpd(0,auVar7);
                uVar16 = iVar13 << 2 | uVar15;
                if (uVar16 != 0) {
                  auVar8._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(DAT_14c846488 + 0.0));
                  auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(DAT_14c846480 + 0.0));
                  uVar15 = movmskpd(uVar15,auVar8);
                  auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(DAT_14c846498 + 1.0));
                  auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(DAT_14c846490 + 0.0));
                  uVar16 = movmskpd(uVar16,auVar5);
                  if ((uVar16 & 0x3fffffff) != 0 || uVar15 != 0) goto LAB_14073bf40;
                }
                auVar9._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(1.0 - DAT_14c8464c8));
                auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(1.0 - DAT_14c8464c0));
                iVar13 = movmskpd(uVar15,auVar9);
                auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - dRam000000014c8464d8))
                ;
                auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(1.0 - DAT_14c8464d0));
                uVar15 = movmskpd(0,auVar4);
                if ((uVar15 & 0x3fffffff) != 0 || iVar13 != 0) goto LAB_14073bf40;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            iVar11 = iVar18;
            if (*(char *)(param_1 + 0x374) != '\0') break;
          }
          iVar18 = iVar11;
          lVar19 = lVar19 + 1;
        } while (lVar19 != (int)lVar14);
      }
    }
    uVar12 = 0;
    if (*(char *)(param_1 + 0x374) == '\x01') {
      uVar12 = *(undefined4 *)(param_1 + 0x370);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14073bf5e FUN_14073bf5e body=1300 status=ok
// SIG undefined FUN_14073bf5e(void)

void FUN_14073bf5e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_3b8 [40];
  undefined8 *local_390;
  longlong *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined1 local_368 [4];
  int local_364;
  undefined1 local_358 [4];
  int iStack_354;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  iVar11 = *(int *)(param_1 + 0x100);
  if (1 < (longlong)iVar11) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    memset(local_338,0,0x2f0);
    local_340 = lVar1 + (longlong)iVar11 * 8 + -8;
    local_348 = lVar1;
    fVar19 = logf((float)iVar11);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar4 = &local_348;
    do {
      local_388 = plVar4;
      puVar12 = (undefined8 *)*local_388;
      puVar15 = (undefined8 *)local_388[1];
      iVar11 = (int)local_388[2];
      iVar5 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar12) >> 3);
      uVar9 = iVar5 + 1;
      puVar16 = puVar12;
      puVar17 = puVar15;
      if (iVar11 != 0) {
LAB_14073c007:
        if (8 < (int)uVar9) {
          uVar2 = puVar16[uVar9 >> 1];
          puVar16[uVar9 >> 1] = *puVar16;
          *puVar16 = uVar2;
          local_380 = puVar17 + 1;
          local_390 = puVar16;
          do {
            puVar7 = local_390 + 1;
            puVar8 = puVar7;
            do {
              local_390 = puVar8;
              local_370 = puVar7;
              if (puVar17 < puVar8) break;
              uVar2 = *puVar16;
              FUN_14073c474(*puVar8,local_358);
              iVar5 = iStack_354;
              FUN_14073c474(uVar2,local_368);
              puVar8 = puVar8 + 1;
              puVar7 = local_370 + 1;
            } while (iVar5 <= local_364);
            puVar7 = local_380 + -2;
            puVar8 = local_380;
            do {
              puVar8 = puVar8 + -1;
              local_380 = puVar8;
              local_378 = puVar7;
              if (puVar8 <= puVar16) break;
              uVar2 = *puVar8;
              FUN_14073c474(*puVar16,local_358);
              iVar5 = iStack_354;
              FUN_14073c474(uVar2,local_368);
              puVar7 = local_378 + -1;
            } while (iVar5 <= local_364);
            if (local_380 < local_390) goto LAB_14073c3a3;
            uVar2 = *local_390;
            *local_390 = *local_380;
            *local_380 = uVar2;
          } while( true );
        }
        for (; puVar15 = puVar16, puVar12 = puVar16, puVar16 < puVar17; puVar17 = puVar17 + -1) {
          while (puVar12 = puVar12 + 1, puVar12 <= puVar17) {
            uVar2 = *puVar15;
            FUN_14073c474(*puVar12,local_358);
            iVar11 = iStack_354;
            FUN_14073c474(uVar2,local_368);
            if (local_364 < iVar11) {
              puVar15 = puVar12;
            }
          }
          uVar2 = *puVar15;
          *puVar15 = *puVar17;
          *puVar17 = uVar2;
        }
        goto LAB_14073c07f;
      }
LAB_14073c0bf:
      local_390 = puVar16;
      if (uVar9 != 0) {
        iVar11 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        iVar5 = iVar11;
joined_r0x00014073c0ea:
        do {
          iVar6 = iVar11 * 2 + 1;
          if (iVar6 < (int)uVar9) {
            iVar10 = iVar11 * 2 + 2;
            if (iVar10 < (int)uVar9) {
              uVar2 = local_390[iVar10];
              FUN_14073c474(local_390[iVar6],local_358);
              iVar3 = iStack_354;
              FUN_14073c474(uVar2,local_368);
              if (iVar3 <= local_364) {
                iVar6 = iVar10;
              }
            }
            uVar2 = local_390[iVar11];
            FUN_14073c474(local_390[iVar6],local_358);
            iVar10 = iStack_354;
            FUN_14073c474(uVar2,local_368);
            if (local_364 < iVar10) {
              uVar2 = local_390[iVar11];
              local_390[iVar11] = local_390[iVar6];
              local_390[iVar6] = uVar2;
              iVar11 = iVar6;
              goto joined_r0x00014073c0ea;
            }
          }
          bVar18 = iVar5 != 0;
          iVar11 = iVar5 + -1;
          iVar5 = iVar11;
        } while (bVar18);
        if (1 < (int)uVar9) {
          uVar13 = (ulonglong)uVar9;
          uVar2 = *local_390;
          *local_390 = local_390[uVar13 - 1];
          local_390[uVar13 - 1] = uVar2;
          if (uVar9 != 2) {
            do {
              uVar14 = uVar13 - 1;
              iVar11 = 0;
              iVar6 = 1;
              iVar5 = 0;
              do {
                iVar11 = iVar11 + 2;
                iVar10 = iVar6;
                if ((longlong)iVar11 < (longlong)uVar14) {
                  uVar2 = local_390[iVar11];
                  FUN_14073c474(local_390[iVar6],local_358);
                  iVar6 = iStack_354;
                  FUN_14073c474(uVar2,local_368);
                  if (iVar6 <= local_364) {
                    iVar10 = iVar11;
                  }
                }
                uVar2 = local_390[iVar5];
                FUN_14073c474(local_390[iVar10],local_358);
                iVar11 = iStack_354;
                FUN_14073c474(uVar2,local_368);
                if (iVar11 <= local_364) break;
                uVar2 = local_390[iVar5];
                local_390[iVar5] = local_390[iVar10];
                local_390[iVar10] = uVar2;
                iVar11 = iVar10 * 2;
                iVar6 = iVar10 * 2 + 1;
                iVar5 = iVar10;
              } while ((longlong)iVar6 < (longlong)uVar14);
              uVar2 = *local_390;
              *local_390 = local_390[uVar13 - 2];
              local_390[uVar13 - 2] = uVar2;
              uVar13 = uVar14;
            } while (2 < uVar14);
          }
        }
      }
LAB_14073c07f:
      plVar4 = local_388 + -3;
    } while (&local_348 <= local_388 + -3);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14073c3a3:
  uVar2 = *puVar16;
  *puVar16 = *local_380;
  *local_380 = uVar2;
  iVar11 = iVar11 + -1;
  puVar8 = local_380 + -1;
  if ((longlong)local_378 - (longlong)puVar12 < (longlong)puVar15 - (longlong)local_370) {
    if (local_390 < puVar17) {
      *local_388 = (longlong)local_390;
      local_388[1] = (longlong)puVar17;
      *(int *)(local_388 + 2) = iVar11;
      local_388 = local_388 + 3;
    }
    puVar17 = local_378;
    puVar12 = puVar16;
    if (local_380 <= puVar16 + 1) goto LAB_14073c07f;
  }
  else {
    if (puVar16 + 1 < local_380) {
      *local_388 = (longlong)puVar16;
      local_388[1] = (longlong)puVar8;
      *(int *)(local_388 + 2) = iVar11;
      local_388 = local_388 + 3;
    }
    puVar8 = puVar17;
    puVar16 = local_390;
    puVar12 = local_370;
    if (puVar17 <= local_390) goto LAB_14073c07f;
  }
  local_370 = puVar12;
  local_378 = puVar17;
  local_390 = puVar16;
  iVar5 = (int)((ulonglong)((longlong)local_378 - (longlong)local_370) >> 3);
  uVar9 = iVar5 + 1;
  puVar12 = local_370;
  puVar15 = local_378;
  puVar16 = local_390;
  puVar17 = puVar8;
  if (iVar11 == 0) goto LAB_14073c0bf;
  goto LAB_14073c007;
}



// FUNCTION 14073c474 FUN_14073c474 body=125 status=ok
// SIG undefined FUN_14073c474(void)

void FUN_14073c474(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  puVar2 = *(undefined1 **)(param_1 + 0x98);
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  puVar5 = puVar2;
  puVar6 = puVar2;
  if ((char)puVar2 == '\0') {
    puVar2 = &DAT_100000001 + ((ulonglong)puVar2 & 0xffffffff00000000);
    puVar5 = (undefined1 *)0x1;
    puVar6 = (undefined1 *)0x0;
  }
  bVar7 = (char)uVar1 != '\x01';
  uVar3 = uVar1 + 0x100000000;
  if (bVar7) {
    uVar3 = uVar1;
  }
  uVar4 = 0;
  if (bVar7) {
    uVar4 = uVar1 & 0xffffffff;
  }
  *param_2 = (ulonglong)puVar5 & 0xff | (ulonglong)puVar2 & 0xffffffff00000000 |
             (ulonglong)((uint)puVar6 & 0xffffff00);
  param_2[1] = uVar3 & 0xffffffff00000000 | uVar4;
  return;
}



// FUNCTION 14073c4f2 FUN_14073c4f2 body=230 status=ok
// SIG undefined FUN_14073c4f2(void)

void FUN_14073c4f2(longlong param_1,longlong param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_358 [32];
  undefined1 local_338 [768];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_358;
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  memcpy(local_338,param_3,0x300);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  plVar3 = *(longlong **)(param_2 + 0x20);
  local_38 = uVar1;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x20) = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_14073c5d9((undefined8 *)(param_2 + 0x20),uVar2,local_338);
  *(uint *)(param_2 + 0x38) = (uint)(*(longlong *)(param_2 + 0x20) == 0) * 2;
  if (*(char *)(param_1 + 0x109) == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
    FUN_1473873bc(param_1,param_3,param_2);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  }
  if ((local_30 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073c5d9 FUN_14073c5d9 body=648 status=ok
// SIG undefined FUN_14073c5d9(void)

void FUN_14073c5d9(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_3 + 0x2d8);
  if (plVar2 == (longlong *)0x0) {
    if ((((*(longlong *)(param_3 + 0x2e0) == 0) && (*(longlong *)(param_3 + 0x2e8) == 0)) &&
        (*(longlong *)(param_3 + 0x2f8) == 0)) && (*(longlong *)(param_3 + 0x2f0) == 0)) {
      if ((DAT_14c707940 ^ (ulonglong)auStack_88 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      FUN_143186581(param_1,param_2,param_3);
      return;
    }
    local_48 = (undefined1 *)0x0;
    local_40 = 0x200000000;
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x200000000;
    if ((longlong)(int)plVar2[1] != 0) {
      lVar5 = *plVar2;
      lVar4 = (longlong)(int)plVar2[1] * 0xc;
      do {
        FUN_147389778(local_60,lVar5);
        lVar5 = lVar5 + 0xc;
        lVar4 = lVar4 + -0xc;
      } while (lVar4 != 0);
    }
  }
  plVar2 = *(longlong **)(param_3 + 0x2e0);
  if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
    lVar5 = *plVar2;
    lVar4 = (longlong)(int)plVar2[1] * 0xc;
    do {
      FUN_147389778(local_60,lVar5);
      lVar5 = lVar5 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  plVar2 = *(longlong **)(param_3 + 0x2e8);
  if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
    lVar5 = *plVar2;
    lVar4 = (longlong)(int)plVar2[1] * 0xc;
    do {
      FUN_147389778(local_60,lVar5);
      lVar5 = lVar5 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  plVar2 = *(longlong **)(param_3 + 0x2f8);
  if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
    lVar5 = *plVar2;
    lVar4 = (longlong)(int)plVar2[1] * 0xc;
    do {
      FUN_147389778(local_60,lVar5);
      lVar5 = lVar5 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  plVar2 = *(longlong **)(param_3 + 0x2f0);
  if ((plVar2 != (longlong *)0x0) && ((longlong)(int)plVar2[1] != 0)) {
    lVar5 = *plVar2;
    lVar4 = (longlong)(int)plVar2[1] * 0xc;
    do {
      FUN_147389778(local_60,lVar5);
      lVar5 = lVar5 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  puVar3 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar3 = local_60;
  }
  if ((longlong)(int)local_40 != 0) {
    lVar5 = 0;
    do {
      iVar1 = *(int *)(puVar3 + lVar5);
      if (iVar1 == 0x10de) {
        if (puVar3[lVar5 + 10] == '\x04') {
          FUN_1425006f0(*(undefined8 *)(param_2 + 8),*(undefined2 *)(puVar3 + lVar5 + 6),0);
          FUN_143186581(param_1,param_2,param_3);
          FUN_1425006f0(*(undefined8 *)(param_2 + 8),0xffffffff,0);
          break;
        }
      }
      else if ((iVar1 == 0x1002) || (iVar1 == 0x8086)) {
        FUN_143186581(param_1,param_2,param_3);
        break;
      }
      lVar5 = lVar5 + 0xc;
    } while ((longlong)(int)local_40 * 0xc != lVar5);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 14073c87a FUN_14073c87a body=937 status=ok
// SIG undefined FUN_14073c87a(void)

void FUN_14073c87a(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*(byte *)(param_1 + 0x8c8) & 1) != 0) && (*(longlong *)(param_1 + 0x8d0) == 0)) &&
     ((lVar3 = *(longlong *)(param_1 + 0xb0), lVar3 != 0 ||
      (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar4 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_b0[2] = lVar5;
    *local_b0 = &PTR_FUN_14adbbe00;
    local_b0[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_b0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar6 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
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
        iVar6 = *(int *)(lVar3 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar3 + 0x10) = iVar8;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar6;
    puVar4[4] = param_1;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x8d0,&local_98,0x40000000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    if (local_a8 != 0) {
      if (local_b0 == (undefined8 *)0x0) goto LAB_14073ca69;
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14073ca69:
  uVar1 = *(uint *)(param_1 + 0x7cc);
  if (param_2 == '\0') {
    FUN_140388f74(param_1);
    *(byte *)(param_1 + 0x7cd) = *(byte *)(param_1 + 0x7cd) & 0xfd;
    FUN_1402442c2(param_1,0,0);
  }
  else {
    *(uint *)(param_1 + 0x7cc) = uVar1 | 0x80;
    if ((*(byte *)(*(longlong *)(param_1 + 0x668) + 0x4f8) & 0x20) == 0) {
      FUN_1439f6d90(param_1,0);
    }
  }
  if (((*(byte *)(param_1 + 0x9e) & 0x10) == 0) || (*(longlong *)(param_1 + 0x760) == 0)) {
    FUN_1402b6186(param_1);
    if (-1 < (char)*(uint *)(param_1 + 0x7cc) && (char)uVar1 < '\0' ||
        (*(uint *)(param_1 + 0x7cc) & 2) != 0) {
      uVar7 = 0;
      FUN_140557bc8(param_1,0);
      goto LAB_14073cb61;
    }
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30);
    if ((*(byte *)(lVar3 + 0x790) & 4) == 0) {
      FUN_1402b6186(param_1);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30);
    }
    *(undefined1 *)(lVar3 + 10) = 3;
    if ((*(int *)(lVar3 + 0x868) != 1) && (*(int *)(lVar3 + 0x868) != 4)) {
      *(undefined4 *)(lVar3 + 0x868) = 1;
    }
    if (*(longlong *)(param_1 + 0x760) != 0) {
      uVar7 = CONCAT31((int3)(uVar1 >> 8),
                       *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30) + 0x86c) - 5U <
                       0xfffffffe);
      goto LAB_14073cb61;
    }
  }
  uVar7 = 0;
LAB_14073cb61:
  FUN_1402a37f2(param_1,uVar7);
  FUN_143a09e98(param_1 + 0x650,param_1);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073cc24 FUN_14073cc24 body=3408 status=ok
// SIG undefined FUN_14073cc24(void)

void FUN_14073cc24(longlong *param_1)

{
  void *_Dst;
  longlong *plVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  longlong *plVar16;
  double *pdVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_3c8 [32];
  char *local_3a8;
  double *local_398;
  int local_390;
  undefined4 local_38c;
  undefined8 local_388;
  longlong *plStack_380;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  undefined1 local_338 [16];
  double local_328;
  char local_320;
  undefined7 uStack_31f;
  double local_318;
  double local_310;
  double *local_308;
  undefined8 uStack_300;
  longlong *plStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  float local_2cc;
  uint local_2c0;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_238;
  double local_230;
  longlong local_170;
  undefined1 local_100 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar10 = FUN_1447210f0();
  if ((lVar10 == 0) || (param_1[0x7c] == 0)) goto LAB_14073cde3;
  lVar10 = FUN_1447210f0(param_1);
  *(float *)((longlong)param_1 + 0x3bc) =
       (float)(*(double *)(lVar10 + 0x6d0) - (double)*(float *)(param_1 + 0x77));
  plVar1 = (longlong *)param_1[0x72];
  if ((plVar1 != (longlong *)0x0) &&
     (((0 < (int)param_1[0x7f] && (param_1[0x7d] != 0)) &&
      (*(longlong *)(param_1[0x7d] + 0x2e0) != 0)))) {
    (**(code **)(*plVar1 + 0x718))(plVar1,&local_320,&local_388);
    uVar14 = FUN_14375bb6e();
    uVar12 = FUN_140e82300();
    local_3a8 = "";
    FUN_140114bb6(&local_308,&DAT_14c8463f0,uVar12,uVar14);
    if (0 < (int)param_1[0x7f]) {
      plVar1 = param_1 + 0x7e;
      iVar19 = 0;
      do {
        lVar10 = *plVar1;
        lVar20 = (longlong)iVar19 * 0x80;
        _Dst = (void *)(lVar10 + lVar20);
        if (*(longlong *)(lVar10 + lVar20) == 0) {
          FUN_145894e19(_Dst,1);
          iVar8 = (int)param_1[0x7f];
          iVar15 = iVar8 - (iVar19 + 1);
          if (iVar15 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x80),(longlong)iVar15 << 7);
            iVar8 = (int)param_1[0x7f];
          }
          iVar19 = iVar19 + -1;
          *(int *)(param_1 + 0x7f) = iVar8 + -1;
          FUN_147af40d8(plVar1);
        }
        else {
          lVar13 = *(longlong *)((longlong)_Dst + 0x70);
          if (lVar13 == 0) {
            lVar13 = FUN_14375bb6e();
            lVar10 = *plVar1;
          }
          fVar23 = *(float *)(lVar10 + 0x4c + lVar20);
          plVar16 = (longlong *)(lVar10 + lVar20);
          fVar22 = 0.0;
          if (1e-08 < ABS(fVar23)) {
            fVar22 = 1.0 - *(float *)(plVar16 + 9) / fVar23;
          }
          uVar9 = *(uint *)((longlong)plVar16 + 0x54);
          dVar3 = (double)plVar16[3];
          auVar26._8_8_ = 0;
          auVar26._0_8_ = dVar3;
          dVar25 = (double)fVar22;
          dVar3 = ((double)plVar16[6] - dVar3) * dVar25 + dVar3;
          dVar4 = ((double)plVar16[5] - (double)plVar16[2]) * dVar25 + (double)plVar16[2];
          dVar25 = ((double)plVar16[4] - (double)plVar16[1]) * dVar25 + (double)plVar16[1];
          if ((uVar9 & 1) == 0) {
            if ((uVar9 & 2) == 0) {
              dVar3 = dVar3 + (double)plVar16[0xd];
              dVar4 = dVar4 + (double)plVar16[0xc];
              dVar25 = dVar25 + (double)plVar16[0xb];
            }
            else {
              lVar10 = *(longlong *)(*plVar16 + 0x1c8);
              if (lVar10 == 0) {
                pdVar17 = (double *)&DAT_14c8464e0;
                dVar5 = DAT_14c8464f0;
              }
              else {
                pdVar17 = (double *)(lVar10 + 0x260);
                dVar5 = *(double *)(lVar10 + 0x270);
              }
              dVar3 = dVar3 + dVar5;
              dVar4 = dVar4 + pdVar17[1];
              dVar25 = dVar25 + *pdVar17;
            }
          }
          if (((uVar9 & 4) == 0) && ((*(byte *)(param_1 + 0x74) & 4) == 0)) {
            local_270 = DAT_14c8463f0;
            uStack_268 = DAT_14c8463f8;
            local_2c0 = local_2c0 & 0xfffffffd;
          }
          else {
            local_270 = 0x3ff0000000000000;
            uStack_268 = 0x3ff0000000000000;
            local_280 = 0;
            uStack_278 = 0x3f80000000000000;
            local_2c0 = local_2c0 | 2;
          }
          dVar28 = dVar3 - local_310;
          dVar29 = dVar4 - local_318;
          dVar5 = (double)CONCAT71(uStack_31f,local_320);
          local_170 = lVar13;
          FUN_144a76660(&local_388,local_338);
          if (0.0 < dVar28 * local_328 +
                    (dVar25 - dVar5) * (double)local_338._0_8_ + dVar29 * (double)local_338._8_8_) {
            lVar10 = param_1[0x7c];
            if (lVar10 == 0) {
              local_368 = dVar25;
              local_360 = dVar4;
              local_358 = dVar3;
              FUN_147d8ea00(param_1[0x7d],local_338,&local_368,1);
              dVar3 = (double)local_338._8_8_;
              dVar25 = (double)local_338._0_8_;
            }
            else {
              iVar8 = *(int *)(*(longlong *)(lVar10 + 0x2e8) + 0x4dc);
              iVar15 = *(int *)(*(longlong *)(lVar10 + 0x2e8) + 0x4d8);
              local_350 = dVar25;
              local_348 = dVar4;
              local_340 = dVar3;
              FUN_147d8ea00(lVar10,local_338,&local_350,1);
              fVar23 = 1.0;
              if (*(char *)(*(longlong *)(param_1[0x7c] + 0x2e0) + 0xa0) == '\0') {
                fVar23 = *(float *)(*(longlong *)(param_1[0x7c] + 0x2e0) + 0xb0);
              }
              auVar30 = blendps(ZEXT416((uint)(float)iVar8),ZEXT816(0),0xe);
              auVar26 = roundps(auVar26,auVar30,3);
              auVar30 = blendps(ZEXT416((uint)(float)iVar15),ZEXT816(0),0xe);
              auVar30 = roundps(auVar26,auVar30,3);
              fVar22 = 1.0;
              if (*(char *)(*(longlong *)(param_1[0x7d] + 0x2e0) + 0xa0) == '\0') {
                fVar22 = *(float *)(*(longlong *)(param_1[0x7d] + 0x2e0) + 0xb0);
              }
              dVar3 = ((double)auVar26._0_4_ + (double)local_338._8_8_) * (double)fVar23 *
                      (1.0 / (double)fVar22);
              dVar25 = (1.0 / (double)fVar22) *
                       ((double)auVar30._0_4_ + (double)local_338._0_8_) * (double)fVar23;
            }
            lVar10 = *plVar1 + lVar20;
            local_2d8 = (&DAT_14c758c60)[*(byte *)(lVar10 + 0x52)];
            local_2d4 = (&DAT_14c758c60)[*(byte *)(lVar10 + 0x51)];
            local_2d0 = (&DAT_14c758c60)[*(byte *)(lVar10 + 0x50)];
            local_2cc = (float)*(byte *)(lVar10 + 0x53) * 0.003921569;
            FUN_140009b9a(local_338);
            FUN_140008f88(local_100,local_338);
            if ((longlong *)local_338._0_8_ != (longlong *)0x0) {
              (**(code **)(*(longlong *)local_338._0_8_ + 0x10))();
            }
            local_238 = (double)*(float *)(param_1[0x7e] + 0x78 + lVar20);
            auVar30._8_8_ = 0;
            auVar30._0_8_ = dVar3;
            auVar26 = roundpd(auVar30,auVar30,2);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = dVar25;
            auVar30 = roundpd(auVar27,auVar27,2);
            local_338._0_8_ = auVar30._0_8_;
            local_338._8_8_ = auVar26._0_8_;
            local_230 = local_238;
            FUN_1417f77e6(param_1[0x7d],&local_308,local_338);
          }
          fVar23 = *(float *)(*plVar1 + 0x48 + lVar20);
          if ((fVar23 != -1.0) || (NAN(fVar23))) {
            *(float *)(*plVar1 + lVar20 + 0x48) = fVar23 - *(float *)((longlong)param_1 + 0x3bc);
          }
        }
        iVar19 = iVar19 + 1;
        uVar9 = *(uint *)(param_1 + 0x7f);
      } while (iVar19 < (int)uVar9);
      if (0 < (int)uVar9) {
        iVar19 = -uVar9;
        lVar10 = (ulonglong)uVar9 << 7;
        uVar11 = (ulonglong)uVar9;
        do {
          lVar10 = lVar10 + -0x80;
          lVar20 = *plVar1;
          fVar23 = *(float *)(lVar20 + 0x48 + lVar10);
          if (((fVar23 != -1.0) || (NAN(fVar23))) && (fVar23 <= 0.0)) {
            FUN_145894e19((void *)(lVar10 + lVar20),1);
            uVar9 = *(uint *)(param_1 + 0x7f);
            if (uVar11 != uVar9) {
              memmove((void *)(lVar10 + lVar20),(void *)(lVar10 + lVar20 + 0x80),
                      (longlong)(int)(uVar9 + iVar19) << 7);
              uVar9 = *(uint *)(param_1 + 0x7f);
            }
            *(uint *)(param_1 + 0x7f) = uVar9 - 1;
            FUN_147af40d8(plVar1);
          }
          iVar19 = iVar19 + 1;
          bVar18 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar18);
      }
    }
    FUN_140b2399e(&local_308);
  }
  if ((*(byte *)(param_1 + 0x73) & 4) == 0) {
    if ((*(byte *)(param_1 + 0x73) & 2) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
      }
      bVar6 = DAT_14c8442b8;
      if (DAT_14c872bf0 == '\x01') {
        if (DAT_14c872bf1 != '\x01') goto LAB_14073cd83;
        bVar6 = DAT_14c8442b8 & 1;
      }
      if (bVar6 == 0) {
        (**(code **)(*param_1 + 0x6c8))(param_1);
        if ((int)param_1[0x83] < 1) {
          if (*(int *)((longlong)param_1 + 0x464) < (int)param_1[0x87]) {
            pdVar17 = (double *)(param_1 + 0x86);
            plVar1 = param_1 + 0x88;
            local_388 = 2.12199579096527e-314;
            local_378 = 0xffffffff;
            uStack_370 = 0;
            plStack_380 = plVar1;
            if ((int)param_1[0x8b] == 0) {
              iVar19 = 0;
            }
            else {
              FUN_1449c0562(&local_388);
              iVar19 = (int)param_1[0x8b];
            }
            uStack_2e8 = CONCAT44(uStack_36c,uStack_370);
            local_2f0 = local_378;
            uVar14 = local_2f0;
            uStack_300 = local_388;
            plStack_2f8 = plStack_380;
            local_2f0._4_4_ = (int)((ulonglong)local_378 >> 0x20);
            iVar8 = local_2f0._4_4_;
            local_308 = pdVar17;
            if ((local_2f0._4_4_ != iVar19) || (local_2f0 = uVar14, plStack_380 != plVar1)) {
              do {
                local_2f0 = uVar14;
                (**(code **)(*param_1 + 0x660))
                          (param_1,*(undefined8 *)((longlong)*local_308 + (longlong)iVar8 * 0x10));
                local_2f0 = CONCAT44(local_2f0._4_4_,(uint)local_2f0 & ~uStack_300._4_4_);
                FUN_1449c0562(&uStack_300);
                iVar8 = local_2f0._4_4_;
                uVar14 = local_2f0;
              } while (local_308 != pdVar17 || (plStack_2f8 != plVar1 || local_2f0._4_4_ != iVar19))
              ;
            }
            FUN_1449ad616(pdVar17);
          }
        }
        else {
          lVar10 = param_1[0x72];
          if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x430) != 0)) {
            uVar14 = FUN_1449db7f2();
            bVar6 = FUN_144a7ca96((longlong *)(lVar10 + 0x430),uVar14);
            lVar10 = *(longlong *)(lVar10 + 0x430);
            if (((lVar10 != 0 & bVar6) == 1) && (*(longlong *)(lVar10 + 0x78) != 0)) {
              local_308 = (double *)0x0;
              uStack_300 = 0.0;
              cVar7 = FUN_1414dd3b0(DAT_14c98e618);
              if ((cVar7 == '\0') &&
                 (cVar7 = (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x338))
                                    (*(longlong **)(lVar10 + 0x78),&local_388),
                 uVar11 = (ulonglong)uStack_300, cVar7 != '\0')) {
                lVar10 = (longlong)(int)uStack_300;
                uVar9 = (int)uStack_300 + 1;
                uStack_300 = (double)CONCAT44(uStack_300._4_4_,uVar9);
                if (uStack_300._4_4_ < uVar9) {
                  FUN_14489624a(&local_308,uVar11 & 0xffffffff);
                }
                local_308[lVar10 * 2] = local_388;
                (local_308 + lVar10 * 2)[1] = (double)plStack_380;
              }
              iVar19 = 0;
              do {
                local_320 = '\0';
                local_3a8 = &local_320;
                FUN_14364c922(param_1[0x72],iVar19,&local_388,(longlong)&local_388 + 4);
                uVar11 = (ulonglong)uStack_300;
                if (local_320 == '\x01') {
                  dVar3 = (double)local_388._4_4_;
                  dVar25 = (double)(float)local_388;
                  lVar10 = (longlong)(int)uStack_300;
                  uVar9 = (int)uStack_300 + 1;
                  uStack_300 = (double)CONCAT44(uStack_300._4_4_,uVar9);
                  if (uStack_300._4_4_ < uVar9) {
                    FUN_14489624a(&local_308,uVar11 & 0xffffffff);
                  }
                  local_308[lVar10 * 2] = dVar25;
                  local_308[lVar10 * 2 + 1] = dVar3;
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 != 0xb);
              FUN_147aee884(param_1,&local_388);
              local_390 = (int)uStack_300;
              if ((((local_388 != 0.0) || (NAN(local_388))) || ((double)plStack_380 != 0.0)) ||
                 (NAN((double)plStack_380))) {
                if ((int)uStack_300 == 0) {
                  local_390 = 0;
                }
                else {
                  pdVar17 = local_308;
                  do {
                    *pdVar17 = *pdVar17 + local_388;
                    pdVar17[1] = pdVar17[1] + (double)plStack_380;
                    pdVar17 = pdVar17 + 2;
                  } while (pdVar17 != local_308 + (longlong)(int)uStack_300 * 2);
                }
              }
              local_398 = local_308;
              local_38c = uStack_300._4_4_;
              local_308 = (double *)0x0;
              uStack_300 = 0.0;
              FUN_147aee9f8(param_1);
              if (local_308 != (double *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar10 = param_1[0x7d];
    if (lVar10 != 0) {
      lVar13 = FUN_14375bb62();
      lVar20 = param_1[0x7d];
      if ((lVar13 != 0) && (*(longlong *)(lVar10 + 0x240) != lVar13)) {
        *(longlong *)(lVar10 + 0x240) = lVar13;
        uVar24 = FUN_140324d4e(lVar13);
        *(undefined4 *)(lVar10 + 0x2cc) = uVar24;
      }
      *(longlong *)(lVar10 + 0x2d8) = lVar20;
      *(undefined8 *)(lVar10 + 0x2d0) = 0x4248000040800000;
      *(undefined8 *)(lVar10 + 0x2c0) = 0x4248000040800000;
      *(undefined4 *)(lVar10 + 0x2c8) = 0;
      (**(code **)(*param_1 + 0x698))(param_1,param_1[0x7d] + 0x2cc,param_1[0x7d] + 0x2c4);
    }
  }
LAB_14073cd83:
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    FUN_147aeee88(param_1,*(undefined8 *)(param_1[0x7c] + 0x2e0));
  }
  (**(code **)(*param_1 + 0x670))(param_1);
  lVar10 = param_1[0x7d];
  uVar11 = (ulonglong)DAT_14cae45d0;
  if (0 < (longlong)uVar11) {
    bVar18 = false;
    DAT_14cae45dc = DAT_14cae45dc + 1;
    do {
      lVar20 = uVar11 * 0x10 + -8;
      uVar21 = uVar11;
      while (((*(int *)(DAT_14cae45c8 + lVar20) != 0 &&
              (plVar1 = *(longlong **)(DAT_14cae45c8 + -8 + lVar20), plVar1 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,lVar10), cVar7 != '\0'))) {
        lVar20 = lVar20 + -0x10;
        bVar2 = uVar21 < 2;
        uVar21 = uVar21 - 1;
        if (bVar2) {
          DAT_14cae45dc = DAT_14cae45dc + -1;
          if (bVar18) goto LAB_14073d8f9;
          goto LAB_14073cdc8;
        }
      }
      uVar11 = uVar21 - 1;
      bVar18 = true;
    } while (1 < uVar21);
    DAT_14cae45dc = DAT_14cae45dc + -1;
LAB_14073d8f9:
    FUN_14474d06a(&DAT_14cae45c8,0);
  }
LAB_14073cdc8:
  lVar10 = FUN_1447210f0(param_1);
  *(float *)(param_1 + 0x77) = (float)*(double *)(lVar10 + 0x6d0);
LAB_14073cde3:
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073d978 FUN_14073d978 body=831 status=ok
// SIG undefined FUN_14073d978(void)

void FUN_14073d978(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined8 local_160;
  undefined8 local_158;
  code *local_150;
  undefined1 local_140 [128];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_90;
  undefined8 local_88;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c0 = 0;
  local_b8 = 0x40000000000;
  local_90 = 0;
  local_88 = 0x400000000;
  local_60 = 0;
  local_58 = 0x400000000;
  local_40 = 0;
  local_38 = 0x400000000;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_158 = FUN_1446ddbd2();
      local_150 = FUN_1403a682c;
      local_160 = 0;
      local_168 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_140);
            goto LAB_14073dabe;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_140) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_140,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_140,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_160 = CONCAT44(local_160._4_4_,(int)plVar1[6]);
        local_168 = local_168 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_140,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_140,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_140);
  }
LAB_14073dabe:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14073dcb8(*(undefined8 *)(param_1 + 0x430),local_140);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073dcb8 FUN_14073dcb8 body=226 status=ok
// SIG undefined FUN_14073dcb8(void)

void FUN_14073dcb8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if (((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) &&
     (*(int *)(param_2 + 0x88) <= DAT_14c76139c)) {
    lVar4 = *(longlong *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x80) == 0) {
      lVar4 = param_2;
    }
    FUN_14170c290(param_1 + 0x150,lVar4);
    uVar3 = (**(code **)(*(longlong *)param_1[0x3e] + 0x498))();
    lVar4 = FUN_14343b5c9(uVar3,param_2);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_2 + 0x110);
      param_1[0x166] = lVar4;
      if (lVar4 == 0) {
        return;
      }
    }
    else {
      param_1[0x166] = lVar4;
    }
    plVar1 = (longlong *)param_1[0x136];
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_1 + 0x150,lVar4);
    if ((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0xaa9) & 2) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014073dd8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xad0))(param_1,plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14073dd9a FUN_14073dd9a body=666 status=ok
// SIG undefined FUN_14073dd9a(void)

void FUN_14073dd9a(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Str;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_198 [40];
  longlong *local_170;
  undefined8 local_168;
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*param_1 == 0) || ((*(byte *)(*param_1 + 0xd7) & 0x20) == 0)) {
    uVar5 = *(uint *)(param_2 + 7);
    if ((uVar5 & 0xf) != 0) {
      lVar6 = param_2[3];
      uVar13 = 0;
      do {
        (**(code **)(lVar6 + uVar13))();
        uVar13 = uVar13 + 8;
      } while ((uVar5 & 0xf) << 3 != uVar13);
    }
    lVar6 = (*(code *)*param_2)();
    *param_1 = lVar6;
    if ((*(byte *)(lVar6 + 0xd7) & 0x20) == 0) {
      FUN_140aa7318(lVar6,1);
      uVar5 = *(uint *)(lVar6 + 0xd4);
      if (*(longlong *)(lVar6 + 0x40) != 0) {
        uVar5 = uVar5 | *(uint *)(*(longlong *)(lVar6 + 0x40) + 0xd4) & 0x4aa3865e;
        *(uint *)(lVar6 + 0xd4) = uVar5;
      }
      uVar5 = uVar5 | *(uint *)((longlong)param_2 + 0x3c);
      *(uint *)(lVar6 + 0xd4) = uVar5 | 0x20000000;
      if ((uVar5 >> 0x1c & 1) == 0) {
        FUN_141717508(lVar6 + 0x1e8);
      }
      FUN_14073e036(lVar6,param_2[4],*(uint *)(param_2 + 7) >> 4 & 0x7ff);
      FUN_1400102c4(lVar6,param_2[5],*(uint *)(param_2 + 7) >> 0xf & 0x7ff);
      _Str = (char *)param_2[1];
      if (_Str != (char *)0x0) {
        local_60 = 0;
        sVar7 = strlen(_Str);
        FUN_1446e6fe8(local_160,_Str,sVar7 & 0xffffffff,1);
        FUN_1446f470e(&local_168,local_58,1);
        *(undefined8 *)(lVar6 + 0xe8) = local_168;
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      if (0x3ffffff < *(uint *)(param_2 + 7)) {
        uVar5 = *(uint *)(param_2 + 7) >> 0x1a;
        if (*(int *)(lVar6 + 0x1e4) < (int)uVar5) {
          FUN_14073ebd8((longlong *)(lVar6 + 0x1d8),uVar5);
        }
        puVar11 = (undefined8 *)param_2[6];
        puVar9 = (undefined8 *)((ulonglong)(uVar5 << 4) + (longlong)puVar11);
        local_170 = (longlong *)(lVar6 + 0x1d8);
        do {
          plVar4 = local_170;
          if ((code *)*puVar11 == (code *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = (*(code *)*puVar11)();
          }
          iVar2 = *(int *)(lVar6 + 0x1e0);
          *(uint *)(lVar6 + 0x1e0) = iVar2 + 1U;
          if (*(uint *)(lVar6 + 0x1e4) < iVar2 + 1U) {
            FUN_146898870(plVar4,iVar2);
          }
          lVar12 = *plVar4;
          uVar1 = *(undefined1 *)((longlong)puVar11 + 0xc);
          uVar3 = *(undefined4 *)(puVar11 + 1);
          *(longlong *)(lVar12 + (longlong)iVar2 * 0x10) = lVar8;
          if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar8);
          }
          lVar12 = lVar12 + (longlong)iVar2 * 0x10;
          *(undefined4 *)(lVar12 + 8) = uVar3;
          *(undefined1 *)(lVar12 + 0xc) = uVar1;
          puVar11 = puVar11 + 2;
        } while (puVar11 != puVar9);
      }
      uVar10 = 0;
      FUN_140010366(lVar6,0);
      if (*(longlong *)(lVar6 + 0x40) != 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar6 + 0x40) + 0x120);
      }
      FUN_14073e7a8(lVar6,uVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073e036 FUN_14073e036 body=311 status=ok
// SIG undefined FUN_14073e036(void)

void FUN_14073e036(longlong param_1,longlong param_2,int param_3)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      _Str = (char *)*puVar3;
      lVar1 = (*(code *)puVar3[-1])();
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x48);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x48) = lVar1;
      local_58 = 0;
      if (_Str == (char *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar2 = strlen(_Str);
        FUN_1446e6fe8(local_158,_Str,sVar2 & 0xffffffff,1);
      }
      FUN_1446f470e(&local_160,local_50,1);
      FUN_14073e16e(param_1,lVar1,local_160);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073e16e FUN_14073e16e body=214 status=ok
// SIG undefined FUN_14073e16e(void)

void FUN_14073e16e(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_3;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x178));
  local_50 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_14073e2e6(param_1 + 0x128,local_2c,&local_40,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x178));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1d0));
  FUN_14073e246(param_1 + 0x180,local_48);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1d0));
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073e246 FUN_14073e246 body=160 status=ok
// SIG undefined FUN_14073e246(void)

undefined8 FUN_14073e246(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1468967a2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14073e2e6 FUN_14073e2e6 body=501 status=ok
// SIG undefined FUN_14073e2e6(void)

int * FUN_14073e2e6(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14073e4dc(param_1,local_50);
  plVar7 = (longlong *)param_3[1];
  lVar5 = *(longlong *)*param_3;
  *local_48 = lVar5;
  lVar1 = *plVar7;
  local_48[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    lVar5 = *local_48;
  }
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  uVar10 = (uint)((ulonglong)lVar5 >> 0x10);
  uVar4 = (uint)lVar5 & 0xffff;
  uVar10 = ((uint)lVar5 << 0x10 | uVar4) + (int)((ulonglong)lVar5 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar4 >> 4);
  cVar6 = '\0';
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar10) * 4);
    if (iVar9 == -1) {
      cVar6 = '\0';
    }
    else {
      do {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar7 == lVar5) {
          uVar2 = *(undefined4 *)((longlong)local_48 + 4);
          lVar5 = local_48[1];
          uVar3 = *(undefined4 *)((longlong)local_48 + 0xc);
          *(int *)plVar7 = (int)*local_48;
          *(undefined4 *)((longlong)plVar7 + 4) = uVar2;
          *(int *)(plVar7 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
          FUN_146896730(param_1,local_50[0]);
          cVar6 = '\x01';
          local_50[0] = iVar9;
          break;
        }
        iVar9 = (int)plVar7[2];
        cVar6 = '\0';
      } while (iVar9 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar6;
  }
  if (cVar6 == '\0') {
    uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar4 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar9 <= (int)param_1[9])) {
      uVar10 = (int)param_1[9] - 1U & uVar10;
      *(uint *)((longlong)local_48 + 0x14) = uVar10;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar9;
      FUN_14073e928(param_1);
    }
  }
  *param_2 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073e4dc FUN_14073e4dc body=715 status=ok
// SIG undefined FUN_14073e4dc(void)

int * FUN_14073e4dc(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
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
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
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
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14073e69e;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14073e69e:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14073e7a8 FUN_14073e7a8 body=383 status=ok
// SIG undefined FUN_14073e7a8(void)

void FUN_14073e7a8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x120) != param_2) {
    if (*(longlong *)(param_1 + 0x120) != 0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140aa7b7e(param_1,&local_58,1);
      lVar3 = local_58;
      lVar5 = (longlong)(int)uStack_50;
      if (lVar5 != 0) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(lVar3 + lVar4);
          plVar2 = *(longlong **)(lVar1 + 0x120);
          if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x120) == plVar2[8])) {
            if (*(longlong *)(lVar1 + 0x118) != 0) {
              (**(code **)(*plVar2 + 0x2f0))(plVar2,*(longlong *)(lVar1 + 0x118),1);
              FUN_1400020a8(*(undefined8 *)(lVar1 + 0x118));
              *(undefined8 *)(lVar1 + 0x118) = 0;
            }
            (**(code **)(*plVar2 + 0x310))(plVar2,param_2);
          }
          lVar4 = lVar4 + 8;
        } while (lVar5 * 8 != lVar4);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x120) + 0x2f0))
                (*(longlong **)(param_1 + 0x120),*(longlong *)(param_1 + 0x118),1);
      FUN_1400020a8(*(undefined8 *)(param_1 + 0x118));
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x120) = param_2;
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073e928 FUN_14073e928 body=688 status=ok
// SIG undefined FUN_14073e928(void)

void FUN_14073e928(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_14073e98e;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_14073e98e:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 14073ebd8 FUN_14073ebd8 body=226 status=ok
// SIG undefined FUN_14073ebd8(void)

void FUN_14073ebd8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14073ecba FUN_14073ecba body=346 status=ok
// SIG undefined FUN_14073ecba(void)

undefined8
FUN_14073ecba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14073ee0d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14073ee0d;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_14073ee0d:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14073edb6;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_48 = param_7;
      local_50 = param_6;
      local_58 = param_5;
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_14073edb6;
    }
  }
  uVar6 = 0;
LAB_14073edb6:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073ee16 FUN_14073ee16 body=822 status=ok
// SIG undefined FUN_14073ee16(void)

void FUN_14073ee16(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (DAT_14cb10130 == 0) {
      local_60 = &local_40;
      local_40 = FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14073ee8b;
  }
  lVar5 = 0;
LAB_14073ee8b:
  if (lVar5 == param_2) {
    FUN_140488f06(param_1);
    if (param_7 != '\x03' && param_4 != 0) {
      if (DAT_14cb10130 == 0) {
        local_60 = &local_40;
        local_40 = FUN_140754f84;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_147da9a76;
        local_70 = FUN_1409f3105;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      lVar5 = DAT_14cb10130;
      if (DAT_14c951858 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1468c5283;
        local_70 = FUN_142809da0;
        local_78 = L"Engine";
        local_80 = 0x400000000;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(param_4 + 0x20);
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        iVar1 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
             (lVar4 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
             != lVar5 + 0x30)) {
            lVar4 = 0;
          }
        } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      }
      if ((*(longlong *)(lVar4 + 0x30) != 0) &&
         (((lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar5 != 0 &&
           (lVar5 = *(longlong *)(lVar5 + 0x3f0), lVar5 != 0)) && (*(int *)(lVar5 + 0x48) == 2)))) {
        cVar2 = FUN_140183ea4(lVar5);
        if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073f16e FUN_14073f16e body=1200 status=ok
// SIG undefined FUN_14073f16e(void)

void FUN_14073f16e(longlong *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  longlong local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = (**(code **)(*param_1 + 0x390))();
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    goto LAB_14073f2be;
  }
  lVar7 = FUN_14073f764(param_1);
  if (lVar7 != 0) {
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xfc);
    FUN_14073f620(local_68,param_1[0x19]);
    FUN_14073f884(lVar7,local_68,uVar2);
    if (local_68[3] != 0) {
      FUN_1400020a8();
    }
  }
  iVar6 = *(int *)((longlong)param_1 + 0xfc);
  lVar7 = param_1[0x19];
  if (lVar7 == 0) {
    if ((param_1[0x1b] == 0) || (*(int *)((longlong)param_1 + 0xd4) == 0)) goto LAB_14073f2c5;
    puVar1 = (uint *)(param_1 + 0x1a);
    uVar3 = *puVar1;
    if ((((int)uVar3 < 0) ||
        ((((DAT_14c9647dc <= (int)uVar3 ||
           (lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 == 0)) ||
          (*(int *)(lVar7 + 0x10) != *(int *)((longlong)param_1 + 0xd4))) ||
         ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) ||
       ((*(char *)((longlong)param_1 + 0xe4) == '\x01' && (iVar6 <= (int)param_1[0x1c]))))
    goto LAB_14073f2c5;
    *(int *)(param_1 + 0x1c) = iVar6;
    *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
    lVar7 = FUN_14073f764(param_1);
    if (lVar7 == 0) goto LAB_14073f2c5;
    if ((char)param_1[0x1f] == '\x01') {
      FUN_14073fe76(local_68,puVar1);
      iVar6 = FUN_14073f930(lVar7,local_68);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      lVar10 = param_1[0x1c];
      if (iVar6 < (int)lVar10) {
        FUN_14073fe76(local_68,puVar1);
        FUN_140740096(lVar7,local_68,(int)lVar10);
        local_68[3] = local_68[0];
        goto LAB_14073f453;
      }
      *(int *)(param_1 + 0x1c) = iVar6;
    }
    else {
      local_68[0] = 0;
      local_68[1] = 0;
      local_68[2] = 0;
      FUN_14073fe76(local_68 + 3,puVar1);
      iVar6 = FUN_1406ba864(lVar7,local_68,0);
      if (local_68[3] != 0) {
        FUN_1400020a8();
      }
      iVar12 = (int)param_1[0x1c];
      if (iVar6 < iVar12) {
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        FUN_14073fe76(local_68 + 3,puVar1);
        goto LAB_14073f476;
      }
      *(int *)(param_1 + 0x1c) = iVar6;
    }
  }
  else {
    lVar10 = *(longlong *)(lVar7 + 0x38);
    if (lVar10 == 0) {
      uVar8 = FUN_14050c9fe();
      lVar10 = FUN_14477b664(uVar8);
      *(longlong *)(lVar7 + 0x38) = lVar10;
    }
    if (*(longlong *)(lVar7 + 0x40) == 0) {
      if ((lVar10 != 0) && (*(longlong *)(lVar7 + 0x30) != 0)) {
        plVar4 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          *(undefined8 *)(lVar7 + 0x40) = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x30));
          *(longlong *)(lVar7 + 0x40) = lVar10;
          if (lVar10 != 0) goto LAB_14073f210;
        }
      }
    }
    else {
LAB_14073f210:
      lVar7 = param_1[0x19];
      lVar10 = *(longlong *)(lVar7 + 0x38);
      if (lVar10 == 0) {
        uVar8 = FUN_14050c9fe();
        lVar10 = FUN_14477b664(uVar8);
        *(longlong *)(lVar7 + 0x38) = lVar10;
      }
      lVar11 = *(longlong *)(lVar7 + 0x40);
      if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*(longlong *)(lVar7 + 0x30) != 0)) {
        plVar4 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          lVar11 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar11 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x30));
        }
        *(longlong *)(lVar7 + 0x40) = lVar11;
      }
      if ((*(char *)(lVar11 + 0x96) == '\x01') &&
         (cVar5 = (**(code **)(*param_1 + 0x388))(param_1,param_1[0x19]), cVar5 != '\0')) {
        uVar8 = FUN_14073fae1();
        uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
        cVar5 = FUN_14073fcba(uVar8,param_1[0x19],uVar9);
        if (cVar5 != '\0') {
          iVar6 = 2;
        }
      }
    }
    if ((*(char *)((longlong)param_1 + 0xe4) == '\x01') && (iVar6 <= (int)param_1[0x1c]))
    goto LAB_14073f2c5;
    *(int *)(param_1 + 0x1c) = iVar6;
    *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
    lVar7 = FUN_14073f764(param_1);
    if (lVar7 == 0) goto LAB_14073f2c5;
    FUN_14073f620(local_68,param_1[0x19]);
    iVar6 = FUN_1406ba864(lVar7,local_68,0);
    if (local_68[3] != 0) {
      FUN_1400020a8();
    }
    if ((*(longlong *)(param_1[0x19] + 0x228) == 0) && (iVar12 = (int)param_1[0x1c], iVar6 < iVar12)
       ) {
      FUN_14073f620(local_68);
LAB_14073f476:
      FUN_14027a97e(lVar7,local_68,iVar12);
LAB_14073f453:
      if (local_68[3] != 0) {
        FUN_1400020a8();
      }
      goto LAB_14073f2c5;
    }
    *(int *)(param_1 + 0x1c) = iVar6;
  }
LAB_14073f2be:
  *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
LAB_14073f2c5:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14073f620 FUN_14073f620 body=265 status=ok
// SIG undefined FUN_14073f620(void)

longlong * FUN_14073f620(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_14073f72a();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  lVar2 = FUN_14073f72a();
  uVar1 = FUN_14073f72a();
  FUN_1402d1bfa(&local_30,uVar1,param_2);
  if (*param_1 != local_30) {
    param_1[2] = 0;
  }
  *param_1 = local_30;
  lVar3 = FUN_14073f72a();
  if (lVar2 != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_14073f6c0;
    }
    if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_14073f6c0;
  }
  lVar3 = lVar2;
LAB_14073f6c0:
  if (param_1[1] != lVar3) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664(lVar3);
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  if ((lVar2 != 0) && (*param_1 != 0)) {
    param_1[2] = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073f72a FUN_14073f72a body=57 status=ok
// SIG undefined FUN_14073f72a(void)

void FUN_14073f72a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d0c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d0c8 = FUN_140002ddd(FUN_1464d9e6a,uVar1,L"GbxDiscoveryLocationMetaData");
  }
  return;
}



// FUNCTION 14073f764 FUN_14073f764 body=288 status=ok
// SIG undefined FUN_14073f764(void)

undefined8 FUN_14073f764(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x28);
    if ((int)uVar3 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar3) {
      return 0;
    }
    plVar8 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == *(int *)(param_1 + 0x2c))) &&
       ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar8;
      }
      else {
        lVar6 = 0;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (((lVar6 != 0) && (*(longlong **)(lVar6 + 0x138) != (longlong *)0x0)) &&
         (*(int *)(lVar6 + 0x134) != 0)) {
        uVar3 = *(uint *)(lVar6 + 0x130);
        if ((int)uVar3 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar3) {
          return 0;
        }
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(lVar6 + 0x134))) &&
           ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
          puVar5 = (undefined8 *)(**(code **)(**(longlong **)(lVar6 + 0x138) + 0x28))();
          uVar4 = *puVar5;
          plVar8 = (longlong *)puVar5[1];
          if (plVar8 == (longlong *)0x0) {
            return uVar4;
          }
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return uVar4;
          }
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return uVar4;
          }
          (**(code **)(*plVar8 + 0x10))(plVar8);
          return uVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14073f884 FUN_14073f884 body=170 status=ok
// SIG undefined FUN_14073f884(void)

void FUN_14073f884(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c7638d8 == '\x01') {
    cVar1 = FUN_1402799c0();
    if (cVar1 == '\0') {
      lVar3 = FUN_140279ac4(param_2);
      if (lVar3 != 0) {
        lVar3 = FUN_140279ac4(param_2);
        if ((0 < param_3) && (*(longlong *)(lVar3 + 0x228) == 0)) {
          local_2c = 0;
          uVar2 = FUN_14027a0c2(param_2);
          piVar4 = (int *)FUN_14129878c(param_1 + 0x220,uVar2,param_2,&local_2c);
          iVar5 = *piVar4;
          if (*piVar4 < param_3) {
            iVar5 = param_3;
          }
          *piVar4 = iVar5;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14073f930 FUN_14073f930 body=104 status=ok
// SIG undefined FUN_14073f930(void)

undefined4 FUN_14073f930(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + 0x2c0);
  uVar1 = FUN_14073f998(param_2);
  iVar2 = FUN_14073fa1e(plVar4,uVar1,param_2);
  uVar1 = 0;
  if (iVar2 != -1) {
    uVar1 = FUN_14073f998(param_2);
    iVar2 = FUN_14073fa1e(plVar4,uVar1,param_2);
    if (iVar2 == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)iVar2 * 0x28 + *plVar4;
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x18);
  }
  return uVar1;
}



// FUNCTION 14073f998 FUN_14073f998 body=134 status=ok
// SIG undefined FUN_14073f998(void)

void FUN_14073f998(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}



// FUNCTION 14073fa1e FUN_14073fa1e body=195 status=ok
// SIG undefined FUN_14073fa1e(void)

int FUN_14073fa1e(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14073fa60:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14073fad9;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14073fad9;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14073fac3;
    }
  }
  return -1;
LAB_14073fad9:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14073fac3:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14073fa60;
}



// FUNCTION 14073fae1 FUN_14073fae1 body=471 status=ok
// SIG undefined FUN_14073fae1(void)

longlong * FUN_14073fae1(void)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb78298 == (longlong *)0x0) {
    memset(&DAT_14cb782a0,0,0x230);
    FUN_145dcc8d0(&DAT_14cb782a0);
    DAT_14cb78298 = (longlong *)&DAT_14cb782a0;
  }
  plVar3 = DAT_14cb78298;
  plVar2 = DAT_14cb78298 + 1;
  cVar4 = (char)DAT_14cb78298[2];
  plVar6 = plVar2;
  if (cVar4 == '\0') {
LAB_14073fb15:
    if (*plVar6 == 0) goto LAB_14073fbf2;
    plVar6 = plVar2;
    if (cVar4 == '\0') {
LAB_14073fb26:
      if (*plVar6 == 0) goto LAB_14073fb8f;
      if ((((int)DAT_14cb78298[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar2 == 0)) goto LAB_14073fb3a;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar2 == (longlong *)0x0)) goto LAB_14073fb3a;
      cVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,DAT_14cb78298);
    }
    else {
      if (cVar4 == '\x02') {
        plVar6 = (longlong *)(*plVar2 + 0x30);
        goto LAB_14073fb26;
      }
LAB_14073fb8f:
      if ((DAT_14c9a1ab0 == 0) || (*plVar2 == 0)) goto LAB_14073fb3a;
      uVar1 = *(ushort *)(*plVar2 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar2 == (longlong *)0x0)))) goto LAB_14073fb3a;
      cVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2,DAT_14cb78298);
    }
    if (cVar4 == '\0') goto LAB_14073fb3a;
  }
  else {
    if (cVar4 == '\x02') {
      plVar6 = (longlong *)(*plVar2 + 0x30);
      goto LAB_14073fb15;
    }
LAB_14073fbf2:
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_14073fb3a;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_gbx_discovery",0);
    FUN_140024ada(&local_48,plVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_14073fb3a:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14073fcba FUN_14073fcba body=443 status=ok
// SIG undefined FUN_14073fcba(void)

undefined8 FUN_14073fcba(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x240);
    if (lVar3 == 0) {
      local_40 = (uint)*(undefined8 *)(param_2 + 0x230);
      uStack_3c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x230) >> 0x20);
      lVar3 = FUN_14050aea0();
      *(longlong *)(param_2 + 0x240) = lVar3;
      if (lVar3 != 0) goto LAB_14073fd15;
    }
    else {
LAB_14073fd15:
      uVar4 = 1;
      if (*(char *)(lVar3 + 0x1a8) != '\0') goto LAB_14073fe49;
    }
    lVar3 = *(longlong *)(param_2 + 0x38);
    if (lVar3 == 0) {
      uVar4 = FUN_14050c9fe();
      lVar3 = FUN_14477b664(uVar4);
      *(longlong *)(param_2 + 0x38) = lVar3;
    }
    lVar6 = *(longlong *)(param_2 + 0x40);
    if (lVar6 == 0) {
      uVar4 = 0;
      if ((lVar3 == 0) || (*(longlong *)(param_2 + 0x30) == 0)) goto LAB_14073fe49;
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_2 + 0x40) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(param_2 + 0x30));
        *(longlong *)(param_2 + 0x40) = lVar6;
        if (lVar6 != 0) goto LAB_14073fd4e;
      }
    }
    else {
LAB_14073fd4e:
      if ((*(char *)(lVar6 + 0x96) == '\x01') && ((longlong)*(int *)(param_1 + 0x228) != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x220);
        lVar6 = (longlong)*(int *)(param_1 + 0x228) * 0x68;
        do {
          cVar2 = FUN_143d15720(param_2 + 0x80,lVar3);
          if (cVar2 != '\0') {
            local_40 = local_40 & 0xffffff00;
            uStack_3c = 0;
            uStack_38 = 0;
            local_34 = 0;
            lVar5 = FUN_140149a73(param_3,0);
            if (lVar5 != 0) {
              FUN_14039fc7b(lVar3 + 0x30,&local_40,lVar5,0);
            }
            if ((char)local_40 != '\0') {
              if ((char)local_40 == '\x01') {
                if (local_34 != 0) {
LAB_14073fdf2:
                  uVar4 = 1;
                  goto LAB_14073fe49;
                }
              }
              else {
                cVar2 = FUN_140321d1a(&local_40);
                if (cVar2 != '\0') goto LAB_14073fdf2;
              }
            }
          }
          lVar3 = lVar3 + 0x68;
          lVar6 = lVar6 + -0x68;
        } while (lVar6 != 0);
      }
    }
  }
  uVar4 = 0;
LAB_14073fe49:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14073fe76 FUN_14073fe76 body=542 status=ok
// SIG undefined FUN_14073fe76(void)

longlong * FUN_14073fe76(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((((*(longlong **)(param_2 + 2) == (longlong *)0x0) || (param_2[1] == 0)) ||
      (uVar1 = *param_2, (int)uVar1 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar1 ||
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0)) ||
      ((*(uint *)(lVar5 + 0x10) != param_2[1] ||
       (((*(uint *)(lVar5 + 8) & 0x10200000) != 0 ||
        (lVar5 = (**(code **)(**(longlong **)(param_2 + 2) + 0x18))(), lVar5 == 0)))))))) {
    param_1[2] = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(param_1 + 2) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (iVar2 == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
      *(int *)((longlong)param_1 + 0x14) = iVar2;
      if (iVar2 == 0) goto LAB_140740018;
    }
    else {
      *(int *)((longlong)param_1 + 0x14) = iVar2;
    }
    uVar1 = *(uint *)(param_1 + 2);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar3 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar3 != (longlong *)0x0)) &&
       (((int)plVar3[2] == iVar2 && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar3;
      }
      else {
        lVar5 = 0;
      }
      local_28 = *(undefined8 *)(lVar5 + 0x18);
      FUN_1400021e4(&local_28,&local_38);
      goto LAB_14073ffbe;
    }
  }
LAB_140740018:
  local_38 = 0;
  uStack_30 = 0;
LAB_14073ffbe:
  if (&local_38 == param_1) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_38;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140740096 FUN_140740096 body=143 status=ok
// SIG undefined FUN_140740096(void)

void FUN_140740096(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14073f998(param_2);
  piVar2 = (int *)FUN_14074018c(param_1 + 0x2c0,uVar1,param_2);
  if (*piVar2 != param_3) {
    *piVar2 = param_3;
    FUN_140740126(local_58,param_2);
    FUN_14074021e(param_1,local_58,param_3);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140740126 FUN_140740126 body=102 status=ok
// SIG undefined FUN_140740126(void)

undefined8 * FUN_140740126(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[2];
  return param_1;
}



// FUNCTION 14074018c FUN_14074018c body=144 status=ok
// SIG undefined FUN_14074018c(void)

longlong FUN_14074018c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14073fa1e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_1407401e2;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_1407404be(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1407401e2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x18;
}



// FUNCTION 14074021e FUN_14074021e body=670 status=ok
// SIG undefined FUN_14074021e(void)

/* WARNING: Removing unreachable block (ram,0x000140740423) */

void FUN_14074021e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint uStack_4c;
  int iStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) && (*(int *)(param_1 + 0x134) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x130);
    lVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1407402a4;
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x134))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
      goto LAB_1407402a4;
    }
  }
  lVar6 = 0;
LAB_1407402a4:
  local_80 = *param_2;
  uVar3 = FUN_14477b664(param_2[1]);
  local_78 = FUN_14477b664(uVar3);
  local_70 = param_2[2];
  local_68 = (void *)0x0;
  uVar1 = *(uint *)(param_2 + 4);
  _Src = (void *)param_2[3];
  local_60 = CONCAT44(local_60._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_60 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_68,uVar1,0);
    memcpy(local_68,_Src,(longlong)(int)uVar1 * 2);
  }
  local_58 = param_2[5];
  uStack_4c = 0;
  iStack_48 = 0;
  local_50 = param_3;
  if (lVar6 == 0) {
    iVar2 = 0;
  }
  else {
    uStack_4c = *(uint *)(lVar6 + 0xc);
    if ((int)uStack_4c < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uStack_4c & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_4c >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar4;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
  iStack_48 = iVar2;
  if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
    FUN_14654b4d4((longlong *)(param_1 + 0x1a8),iVar4);
  }
  lVar6 = *(longlong *)(param_1 + 0x1a8);
  lVar5 = (longlong)iVar4 * 0x40;
  *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar6 + lVar5) = 0;
  ((undefined8 *)(lVar6 + lVar5))[1] = 0;
  *(undefined8 *)(lVar6 + lVar5) = local_80;
  uVar3 = FUN_14477b664(local_78);
  uVar3 = FUN_14477b664(uVar3);
  *(undefined8 *)(lVar6 + 8 + lVar5) = uVar3;
  *(undefined8 *)(lVar6 + 0x10 + lVar5) = local_70;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(void **)(lVar6 + 0x18 + lVar5) = local_68;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_60._4_4_;
  *(undefined8 *)(lVar6 + 0x28 + lVar5) = local_58;
  *(int *)(lVar6 + 0x38 + lVar5) = iStack_48;
  *(ulonglong *)(lVar6 + 0x30 + lVar5) = CONCAT44(uStack_4c,local_50);
  local_60 = 0;
  local_68 = (void *)0x0;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407404be FUN_1407404be body=853 status=ok
// SIG undefined FUN_1407404be(void)

int * FUN_1407404be(longlong *param_1,int *param_2,uint param_3,longlong *param_4,char *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_140549c28(param_1,iVar22);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar16 = iVar12 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar19 = param_1 + 2;
    iVar17 = iVar12 + 1;
    iVar23 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar23 = iVar12;
    }
    if (iVar23 >> 5 == iVar16) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar16 = iVar12;
        }
        else {
          uVar13 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar13) {
              uVar18 = uVar13;
            }
          }
          else {
            uVar18 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar20 = FUN_144a3809e(uVar18 << 2,0);
          iVar16 = (int)(uVar20 >> 2);
          iVar17 = -0x20;
          if ((int)uVar13 <= iVar16) {
            iVar17 = iVar16 << 5;
          }
          iVar16 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar19,iVar16);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar16 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar16 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar19;
        }
        bVar15 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar16 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar19 + (longlong)(iVar23 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar14 = (longlong)iVar22;
    iVar12 = *(int *)(*param_1 + 4 + lVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar12;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  plVar19 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar19 = (longlong *)param_1[4];
  }
  iVar12 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar12 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar19 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  puVar2 = (undefined8 *)(*param_1 + lVar14 * 0x28);
  puVar3 = (undefined8 *)*param_4;
  *puVar2 = 0;
  iVar12 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)(puVar2 + 1) = iVar12;
  if ((longlong)iVar12 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar12,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar12 * 2);
  }
  puVar2[2] = puVar3[2];
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = FUN_14073fa1e(param_1,param_3,puVar2);
    if (iVar12 != -1) {
      plVar19 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
      if (*plVar19 != 0) {
        FUN_1400020a8();
      }
      uVar4 = *(undefined4 *)puVar2;
      uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar6 = *(undefined4 *)(puVar2 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar8 = *(undefined4 *)((longlong)puVar2 + 0x14);
      uVar9 = *(undefined4 *)(puVar2 + 3);
      uVar10 = *(undefined4 *)((longlong)puVar2 + 0x1c);
      *(undefined4 *)(plVar19 + 2) = *(undefined4 *)(puVar2 + 2);
      *(undefined4 *)((longlong)plVar19 + 0x14) = uVar8;
      *(undefined4 *)(plVar19 + 3) = uVar9;
      *(undefined4 *)((longlong)plVar19 + 0x1c) = uVar10;
      *(undefined4 *)plVar19 = uVar4;
      *(undefined4 *)((longlong)plVar19 + 4) = uVar5;
      *(undefined4 *)(plVar19 + 1) = uVar6;
      *(undefined4 *)((longlong)plVar19 + 0xc) = uVar7;
      FUN_140826838(param_1,iVar22,1);
      cVar11 = '\x01';
      goto LAB_1407405c6;
    }
  }
  cVar11 = '\0';
LAB_1407405c6:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar11;
  }
  if (cVar11 == '\0') {
    uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar13 < 4) {
      iVar12 = 1;
    }
    else {
      uVar20 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar12 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)puVar2 + 0x24) = param_3;
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = param_1 + 7;
      }
      *(undefined4 *)(puVar2 + 4) =
           *(undefined4 *)
            ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = param_1 + 7;
      }
      *(int *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar22;
    }
    else {
      *(int *)(param_1 + 9) = iVar12;
      FUN_140740814(param_1);
    }
  }
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 140740814 FUN_140740814 body=585 status=ok
// SIG undefined FUN_140740814(void)

void FUN_140740814(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar4 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar12 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    iVar14 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar11 = *param_1 + (longlong)iVar7 * 0x28;
        local_6c = iVar5;
        iVar5 = FUN_14073f998(lVar11);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar11 + 0x24) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar12 = ~(uint)uVar13 & uVar12;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar2 = (int)plVar9[3];
        lVar11 = (longlong)iVar14;
        uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
        iVar5 = local_6c;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar14) {
            iVar3 = iVar14;
          }
          if (iVar7 <= iVar14) break;
          lVar10 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar4 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar3 - lVar11 == lVar10) goto LAB_140740a20;
          }
          iVar14 = iVar14 + (int)lVar10 + 1;
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_140740a20:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140740a5e FUN_140740a5e body=370 status=ok
// SIG undefined FUN_140740a5e(void)

undefined8 * FUN_140740a5e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140740c14 FUN_140740c14 body=2502 status=ok
// SIG undefined FUN_140740c14(void)

void FUN_140740c14(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined1 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(longlong **)(param_1[0x3e] + 0x428) == (longlong *)0x0) ||
     (cVar18 = (**(code **)(**(longlong **)(param_1[0x3e] + 0x428) + 0xbb0))(), cVar18 == '\0')) {
    if ((int)param_1[0x1b3] < 1) {
      bVar19 = *(byte *)((longlong)param_1 + 0x5b7);
      lVar26 = param_1[0x3e];
      if ((int)param_1[0x1b5] < 1) {
        if ((bVar19 & 1) != 0) {
          FUN_140cbb1e0(*(undefined8 *)(lVar26 + 0x670),*(undefined4 *)(lVar26 + 0x678));
          *(undefined4 *)(lVar26 + 0x678) = 0;
          if (*(int *)(lVar26 + 0x67c) != 0) {
            FUN_1479af084(lVar26 + 0x670,0);
          }
          (**(code **)(*(longlong *)param_1[0x3e] + 0x428))();
          (**(code **)(*(longlong *)param_1[0x3e] + 0x7b8))();
          (**(code **)(*(longlong *)param_1[0x3e] + 0x7d8))((longlong *)param_1[0x3e],&local_b8);
          (**(code **)(*param_1 + 0x790))(param_1,&local_b8);
          (**(code **)(*param_1 + 0x5f0))(param_1,*(undefined1 *)(param_1[0x3e] + 0x552));
          lVar26 = param_1[0x3e];
        }
        if (((*(byte *)(lVar26 + 0x60) & 0x10) != 0) && (lVar24 = param_1[0x22], lVar24 != 0)) {
          lVar26 = *(longlong *)(lVar26 + 0x428);
          if (lVar26 == 0) {
            local_108 = DAT_14c8464f0;
            uVar27 = (undefined4)DAT_14c8464e0;
            uVar28 = DAT_14c8464e0._4_4_;
            uVar29 = (undefined4)DAT_14c8464e8;
            uVar30 = DAT_14c8464e8._4_4_;
          }
          else {
            local_108 = *(undefined8 *)(lVar26 + 0x1a8);
            uVar27 = *(undefined4 *)(lVar26 + 0x198);
            uVar28 = *(undefined4 *)(lVar26 + 0x19c);
            uVar29 = *(undefined4 *)(lVar26 + 0x1a0);
            uVar30 = *(undefined4 *)(lVar26 + 0x1a4);
          }
          local_118 = CONCAT44(uVar28,uVar27);
          uStack_110 = CONCAT44(uVar30,uVar29);
          dVar10 = *(double *)(lVar24 + 0x240);
          dVar11 = *(double *)(lVar24 + 0x248);
          dVar12 = *(double *)(lVar24 + 0x250);
          dVar13 = *(double *)(lVar24 + 600);
          bVar19 = *(byte *)((longlong)param_1 + 0x34a);
          lVar24 = 0;
          if ((bVar19 & 2) == 0) {
            lVar24 = lVar26;
          }
          FUN_140835e9a(&local_f8,lVar24);
          plVar1 = *(longlong **)(param_1[0x3e] + 0x428);
          lVar24 = 0x9d8;
          if (plVar1 == (longlong *)0x0) goto LAB_1407413a2;
          lVar23 = *plVar1;
          if (*(code **)(lVar23 + 0xba8) == FUN_144b222b6) {
            if (*(code **)(lVar23 + 3000) != (code *)&LAB_147a0c89e) {
              cVar18 = (**(code **)(lVar23 + 3000))(plVar1);
              if (cVar18 == '\0') {
                lVar23 = *plVar1;
                goto LAB_1407412ef;
              }
              goto LAB_140741339;
            }
            if ((plVar1[0x15d] != 0) && (*(char *)(plVar1[0x15d] + 0x30) == '\x02'))
            goto LAB_140741339;
LAB_1407412ef:
            if (*(code **)(lVar23 + 0xbb0) != (code *)&LAB_1400ba9be) {
              cVar18 = (**(code **)(lVar23 + 0xbb0))(plVar1);
              goto LAB_1407415bc;
            }
            lVar23 = plVar1[0x15d];
            if ((lVar23 != 0) && (*(char *)(lVar23 + 0x30) == '\x03')) {
              if (*(longlong *)(lVar23 + 0x358) == 0) {
                if (0 < *(int *)(lVar23 + 0x368)) goto LAB_140741339;
              }
              else if (*(int *)(*(longlong *)(lVar23 + 0x358) + 0x1b4) < 1) goto LAB_140741339;
            }
          }
          else {
            cVar18 = (**(code **)(lVar23 + 0xba8))(plVar1);
LAB_1407415bc:
            if (cVar18 == '\0') goto LAB_1407413a2;
LAB_140741339:
            if ((*(byte *)((longlong)param_1 + 0x5b5) & 1) != 0) {
              (**(code **)(*(longlong *)param_1[0x3e] + 0x7d8))((longlong *)param_1[0x3e],&local_b8)
              ;
              (**(code **)(*param_1 + 0x790))(param_1,&local_b8);
              *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xfe;
            }
            lVar24 = 0x9c8;
            if (*(char *)((longlong)param_1 + 0x5b4) < '\0') {
              (**(code **)(*param_1 + 0x5f0))(param_1,*(undefined1 *)(param_1[0x3e] + 0x552));
              *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0x7f;
            }
          }
LAB_1407413a2:
          (**(code **)(*param_1 + lVar24))(param_1,param_2);
          FUN_1408360e2(&local_f8);
          if (((((bVar19 & 2) == 0) && (*(char *)((longlong)param_1 + 0x293) == '\x01')) &&
              (lVar24 = param_1[0x22], lVar24 != 0)) &&
             (lVar26 == *(longlong *)(param_1[0x3e] + 0x428))) {
            dVar16 = *(double *)(lVar24 + 0x240);
            dVar17 = *(double *)(lVar24 + 0x248);
            dVar14 = *(double *)(lVar24 + 0x250);
            dVar15 = *(double *)(lVar24 + 600);
            lVar23 = -(ulonglong)(9.999999974752427e-07 < ABS(dVar17 - dVar11));
            auVar9._8_4_ = (int)lVar23;
            auVar9._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar16 - dVar10));
            auVar9._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
            uVar20 = movmskpd((int)lVar24,auVar9);
            auVar7._8_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar15 - dVar13));
            auVar7._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar14 - dVar12));
            iVar21 = movmskpd((int)param_1[0x3e],auVar7);
            uVar22 = iVar21 << 2 | uVar20;
            if (uVar22 != 0) {
              lVar24 = -(ulonglong)(9.999999974752427e-07 < ABS(dVar11 + dVar17));
              auVar5._8_4_ = (int)lVar24;
              auVar5._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar10 + dVar16));
              auVar5._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
              iVar21 = movmskpd(uVar20,auVar5);
              auVar3._8_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar13 + dVar15));
              auVar3._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar12 + dVar14));
              uVar20 = movmskpd(uVar22,auVar3);
              if (((uVar20 & 0x3fffffff) != 0 || iVar21 != 0) &&
                 (lVar24 = param_1[0x102], lVar24 != 0)) {
                *(double *)(lVar24 + 0xe0) = dVar16;
                *(double *)(lVar24 + 0xe8) = dVar17;
                *(double *)(lVar24 + 0xf0) = dVar14;
                *(double *)(lVar24 + 0xf8) = dVar15;
                (**(code **)(*(longlong *)param_1[0x3e] + 2000))
                          ((longlong *)param_1[0x3e],&local_b8);
                local_148 = local_108;
                local_158 = (undefined4)local_118;
                uStack_154 = local_118._4_4_;
                uStack_150 = (undefined4)uStack_110;
                uStack_14c = uStack_110._4_4_;
                local_160 = 0;
                local_168 = (undefined8 *)0x0;
                FUN_144927ad4(lVar26,&local_158,&local_b8,0);
              }
            }
          }
        }
        if ((*(byte *)((longlong)param_1 + 0x5b7) & 1) != 0) {
          *(byte *)((longlong)param_1 + 0x5b7) = *(byte *)((longlong)param_1 + 0x5b7) & 0xfe;
        }
        goto LAB_1407413fe;
      }
    }
    else {
      bVar19 = *(byte *)((longlong)param_1 + 0x5b7);
      lVar26 = param_1[0x3e];
    }
    *(byte *)((longlong)param_1 + 0x5b7) = bVar19 | 1;
    lVar24 = param_1[0x22];
    local_f8 = *(undefined8 *)(lVar24 + 0x260);
    uStack_f0 = *(undefined8 *)(lVar24 + 0x268);
    local_e8 = *(undefined8 *)(lVar24 + 0x270);
    local_b8 = *(undefined8 *)(lVar24 + 0x240);
    uStack_b0 = *(undefined8 *)(lVar24 + 0x248);
    local_a8 = *(undefined4 *)(lVar24 + 0x250);
    uStack_a4 = *(undefined4 *)(lVar24 + 0x254);
    uStack_a0 = *(undefined4 *)(lVar24 + 600);
    uStack_9c = *(undefined4 *)(lVar24 + 0x25c);
    if ((longlong)*(int *)(lVar26 + 0x678) < 1) {
      cVar18 = '\0';
    }
    else {
      lVar25 = *(longlong *)(lVar26 + 0x670);
      lVar23 = (longlong)*(int *)(lVar26 + 0x678) * 0xd0;
      lVar24 = lVar25 + lVar23;
      cVar18 = FUN_1434208f6(lVar26,(undefined4 *)(lVar24 + -0xd0));
      uVar27 = *(undefined4 *)(lVar24 + -0x2c);
      uVar28 = *(undefined4 *)(lVar24 + -0x28);
      uVar29 = *(undefined4 *)(lVar24 + -0x24);
      *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(lVar24 + -0x30);
      *(undefined4 *)((longlong)param_1 + 0x38c) = uVar27;
      *(undefined4 *)(param_1 + 0x72) = uVar28;
      *(undefined4 *)((longlong)param_1 + 0x394) = uVar29;
      param_1[0x73] = *(longlong *)(lVar24 + -0x20);
      lVar26 = lVar25 + lVar23;
      (**(code **)(*(longlong *)param_1[0x3e] + 0x438))
                ((longlong *)param_1[0x3e],(undefined4 *)(lVar26 + -0x18));
      param_1[0x7d] = *(longlong *)(lVar26 + -8);
      uVar27 = *(undefined4 *)(lVar26 + -0x14);
      uVar28 = *(undefined4 *)(lVar26 + -0x10);
      uVar29 = *(undefined4 *)(lVar26 + -0xc);
      *(undefined4 *)(param_1 + 0x7b) = *(undefined4 *)(lVar26 + -0x18);
      *(undefined4 *)((longlong)param_1 + 0x3dc) = uVar27;
      *(undefined4 *)(param_1 + 0x7c) = uVar28;
      *(undefined4 *)((longlong)param_1 + 0x3e4) = uVar29;
      lVar23 = lVar25 + -0x78 + lVar23;
      FUN_143432022(param_1,param_1 + 0x1b1,lVar23,*(undefined4 *)(lVar24 + -0xd0));
      FUN_1434e8f86(lVar23);
      FUN_1434e8486(param_1 + 0x1b1,lVar23,1);
      lVar26 = param_1[0x3e];
      iVar21 = *(int *)(lVar26 + 0x67c);
      FUN_140cbb1e0(*(undefined8 *)(lVar26 + 0x670));
      *(undefined4 *)(lVar26 + 0x678) = 0;
      if ((iVar21 < 0) && (*(int *)(lVar26 + 0x67c) != 0)) {
        FUN_1479af084(lVar26 + 0x670);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x5b5) & 1) != 0) {
      (**(code **)(*(longlong *)param_1[0x3e] + 0x7d8))((longlong *)param_1[0x3e],&local_118);
      (**(code **)(*param_1 + 0x790))(param_1);
      *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xfe;
    }
    if (*(char *)((longlong)param_1 + 0x5b4) < '\0') {
      (**(code **)(*param_1 + 0x5f0))(param_1);
      *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0x7f;
    }
    (**(code **)(*param_1 + 0x9c8))(param_1,param_2);
    if (cVar18 == '\0') {
      if ((longlong)(int)param_1[0x1b3] != 0) {
        lVar26 = 0;
        do {
          if ((*(longlong *)(param_1[0x1b2] + lVar26) != 0) &&
             (*(char *)(*(longlong *)(param_1[0x1b2] + lVar26) + 0x29) != '\0')) goto LAB_14074117b;
          lVar26 = lVar26 + 0x10;
        } while ((longlong)(int)param_1[0x1b3] * 0x10 != lVar26);
      }
    }
    else {
LAB_14074117b:
      lVar26 = param_1[0x22];
      local_118 = *(undefined8 *)(lVar26 + 0x240);
      uStack_110 = *(undefined8 *)(lVar26 + 0x248);
      local_168 = &local_118;
      local_108 = *(undefined8 *)(lVar26 + 0x250);
      uStack_100 = *(undefined8 *)(lVar26 + 600);
      local_138 = *(undefined8 *)(lVar26 + 0x260);
      uStack_130 = *(undefined8 *)(lVar26 + 0x268);
      local_128 = *(undefined8 *)(lVar26 + 0x270);
      (**(code **)(param_1[0x3d] + 0x20))(param_1 + 0x3d,&local_f8,&local_b8);
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x5b7) = *(byte *)((longlong)param_1 + 0x5b7) | 1;
    lVar26 = param_1[0x3e];
    if (lVar26 == 0) {
      lVar26 = 0;
    }
    else if (*(longlong *)(lVar26 + 0x428) != 0) {
      (**(code **)(*param_1 + 0xa68))(param_1,param_2);
      cVar18 = (**(code **)(*param_1 + 0x600))(param_1);
      if (cVar18 == '\0') goto LAB_140741417;
      lVar26 = param_1[0x3e];
    }
    lVar24 = param_1[0x22];
    lVar23 = *(longlong *)(lVar26 + 0x428);
    if (lVar23 == 0) {
      local_108 = DAT_14c8464f0;
      uVar27 = (undefined4)DAT_14c8464e0;
      uVar28 = DAT_14c8464e0._4_4_;
      uVar29 = (undefined4)DAT_14c8464e8;
      uVar30 = DAT_14c8464e8._4_4_;
    }
    else {
      local_108 = *(undefined8 *)(lVar23 + 0x1a8);
      uVar27 = *(undefined4 *)(lVar23 + 0x198);
      uVar28 = *(undefined4 *)(lVar23 + 0x19c);
      uVar29 = *(undefined4 *)(lVar23 + 0x1a0);
      uVar30 = *(undefined4 *)(lVar23 + 0x1a4);
    }
    local_118 = CONCAT44(uVar28,uVar27);
    uStack_110 = CONCAT44(uVar30,uVar29);
    dVar10 = *(double *)(lVar24 + 0x240);
    dVar11 = *(double *)(lVar24 + 0x248);
    dVar12 = *(double *)(lVar24 + 0x250);
    dVar13 = *(double *)(lVar24 + 600);
    if ((char)param_1[0x1f0] == '\x01') {
      FUN_1479c2c82(param_1,param_2,param_1 + 0x1f2);
      lVar26 = param_1[0x3e];
    }
    if ((lVar26 != 0) && (0 < *(int *)(lVar26 + 0x678))) {
      FUN_1434201ee(lVar26,param_2);
    }
    if ((((*(byte *)((longlong)param_1 + 0x34a) & 2) == 0) &&
        (*(char *)((longlong)param_1 + 0x293) == '\x01')) &&
       (lVar23 == *(longlong *)(param_1[0x3e] + 0x428))) {
      lVar24 = param_1[0x22];
      dVar16 = *(double *)(lVar24 + 0x240);
      dVar17 = *(double *)(lVar24 + 0x248);
      dVar14 = *(double *)(lVar24 + 0x250);
      dVar15 = *(double *)(lVar24 + 600);
      lVar25 = -(ulonglong)(9.999999974752427e-07 < ABS(dVar17 - dVar11));
      auVar8._8_4_ = (int)lVar25;
      auVar8._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar16 - dVar10));
      auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      uVar20 = movmskpd((int)lVar24,auVar8);
      auVar6._8_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar15 - dVar13));
      auVar6._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar14 - dVar12));
      iVar21 = movmskpd((int)lVar26,auVar6);
      uVar22 = iVar21 << 2 | uVar20;
      if (uVar22 != 0) {
        lVar26 = -(ulonglong)(9.999999974752427e-07 < ABS(dVar11 + dVar17));
        auVar4._8_4_ = (int)lVar26;
        auVar4._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar10 + dVar16));
        auVar4._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        iVar21 = movmskpd(uVar20,auVar4);
        auVar2._8_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar13 + dVar15));
        auVar2._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar12 + dVar14));
        uVar20 = movmskpd(uVar22,auVar2);
        if (((uVar20 & 0x3fffffff) != 0 || iVar21 != 0) && (lVar26 = param_1[0x102], lVar26 != 0)) {
          *(double *)(lVar26 + 0xe0) = dVar16;
          *(double *)(lVar26 + 0xe8) = dVar17;
          *(double *)(lVar26 + 0xf0) = dVar14;
          *(double *)(lVar26 + 0xf8) = dVar15;
          (**(code **)(*(longlong *)param_1[0x3e] + 2000))((longlong *)param_1[0x3e],&local_b8);
          local_c8 = local_108;
          local_d8 = (undefined4)local_118;
          uStack_d4 = local_118._4_4_;
          uStack_d0 = (undefined4)uStack_110;
          uStack_cc = uStack_110._4_4_;
          local_160 = 0;
          local_168 = (undefined8 *)0x0;
          FUN_144927ad4(lVar23,&local_d8,&local_b8,0);
        }
      }
    }
  }
LAB_1407413fe:
  if ((*(byte *)((longlong)param_1 + 0x34a) & 2) == 0) {
    (**(code **)(*param_1 + 0xa00))(param_1,param_2);
  }
LAB_140741417:
  if ((local_90 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407415dc FUN_1407415dc body=1502 status=ok
// SIG undefined FUN_1407415dc(void)

undefined4 FUN_1407415dc(longlong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  uint *puVar7;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  uint *local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_6c = CONCAT31(local_6c._1_3_,param_2);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar7 = (uint *)(param_1 + 0x51);
  iVar2 = (int)param_1[0x54];
  if (iVar2 == 0) {
    uVar18 = 1;
    uVar15 = 0;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0x53];
    if ((uint *)param_1[0x53] == (uint *)0x0) {
      puVar5 = puVar7;
    }
    uVar16 = *puVar5;
    if (uVar16 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar18 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar18 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar18 == uVar15) goto LAB_140741ac6;
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar18 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar18 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar16 = 0xffffffff;
    local_68 = (uint *)0x0;
    do {
      lVar13 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar4 * 0x20);
      if (lVar13 != 0) {
        cVar3 = FUN_1447bff1e(lVar13,(undefined1)local_6c);
        if (cVar3 != '\0') {
          iVar4 = DAT_14c9a1758 + 1;
          *(int *)(lVar13 + 0x44) = DAT_14c9a1758;
          DAT_14c9a1758 = iVar4;
          uVar6 = FUN_140220358(lVar13);
          *(byte *)(lVar13 + 0x2c) = *(byte *)(lVar13 + 0x2c) & 0xf7;
          local_68 = (uint *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        }
      }
      uVar16 = uVar16 & ~(uint)uVar18;
      puVar5 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar5 = puVar7;
      }
      iVar17 = (int)param_1[0x54];
      iVar4 = (int)uVar15;
      lVar13 = (longlong)iVar4;
      uVar11 = puVar5[lVar13] & uVar16;
      if (uVar11 == 0) {
        iVar9 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar9 = iVar17 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar4) {
          iVar10 = iVar4;
        }
        if (iVar4 < iVar9) {
          lVar14 = 0;
          do {
            uVar11 = puVar5[lVar13 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar4 + (int)lVar14 + 1);
              uVar16 = 0xffffffff;
              goto LAB_14074175a;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar10 - lVar13 != lVar14);
          uVar16 = 0xffffffff;
          iVar4 = iVar10;
        }
        uVar15 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar17;
      }
      else {
LAB_14074175a:
        uVar18 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar18 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar4) {
          iVar4 = iVar17;
        }
      }
    } while (iVar4 != iVar2);
    if (((ulonglong)local_68 & 1) != 0) {
      local_68 = puVar7;
      uVar6 = (**(code **)(*param_1 + 0x300))(param_1);
      uVar8 = (undefined7)((ulonglong)uVar6 >> 8);
      if ((char)uVar6 == '\0') {
        iVar2 = (int)param_1[0x54];
        local_6c = (undefined4)CONCAT71(uVar8,1);
        if (iVar2 == 0) {
          uVar18 = 1;
          uVar15 = 0;
          iVar4 = 0;
          iVar12 = 0;
        }
        else {
          puVar7 = (uint *)param_1[0x53];
          if ((uint *)param_1[0x53] == (uint *)0x0) {
            puVar7 = local_68;
          }
          uVar16 = *puVar7;
          if (uVar16 == 0) {
            iVar4 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar4 = iVar2 + -1;
            }
            uVar15 = 0;
            uVar18 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar18 = uVar15;
            }
            iVar12 = 0;
            do {
              if (uVar18 == uVar15) goto LAB_140741917;
              iVar12 = iVar12 + 0x20;
              uVar16 = puVar7[uVar15 + 1];
              uVar15 = uVar15 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar15 = 0;
            iVar12 = 0;
          }
          uVar18 = (ulonglong)(-uVar16 & uVar16);
          uVar1 = uVar18 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar4) {
            iVar4 = iVar2;
          }
        }
        if (iVar4 != iVar2) {
          uVar16 = 0xffffffff;
          iVar17 = iVar2;
          do {
            lVar13 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar4 * 0x20);
            if (((lVar13 != 0) && (cVar3 = FUN_140741bbc(param_1,lVar13,0), cVar3 != '\0')) &&
               (*(int *)(lVar13 + 0x40) == *(int *)(lVar13 + 0x44))) {
              iVar4 = DAT_14c9a1758 + 1;
              *(int *)(lVar13 + 0x44) = DAT_14c9a1758;
              DAT_14c9a1758 = iVar4;
              FUN_140220358(lVar13);
              *(byte *)(lVar13 + 0x2c) = *(byte *)(lVar13 + 0x2c) | 8;
              iVar17 = (int)param_1[0x54];
            }
            uVar16 = uVar16 & ~(uint)uVar18;
            puVar7 = (uint *)param_1[0x53];
            if ((uint *)param_1[0x53] == (uint *)0x0) {
              puVar7 = local_68;
            }
            iVar4 = (int)uVar15;
            lVar13 = (longlong)iVar4;
            uVar11 = puVar7[lVar13] & uVar16;
            if (uVar11 == 0) {
              iVar9 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar9 = iVar17 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar4) {
                iVar10 = iVar4;
              }
              if (iVar4 < iVar9) {
                lVar14 = 0;
                do {
                  uVar11 = puVar7[lVar13 + lVar14 + 1];
                  if (uVar11 != 0) {
                    uVar15 = (ulonglong)(iVar4 + (int)lVar14 + 1);
                    uVar16 = 0xffffffff;
                    goto LAB_1407418e8;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar10 - lVar13 != lVar14);
                uVar16 = 0xffffffff;
                iVar4 = iVar10;
              }
              uVar15 = (ulonglong)(iVar4 + 1);
              iVar4 = iVar17;
            }
            else {
LAB_1407418e8:
              uVar18 = (ulonglong)(-uVar11 & uVar11);
              uVar1 = uVar18 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar17 <= iVar4) {
                iVar4 = iVar17;
              }
            }
          } while (iVar4 != iVar2);
        }
LAB_140741917:
        FUN_140741ce4(local_60,5);
        iVar2 = (int)param_1[0x54];
        if (iVar2 == 0) {
          uVar15 = 1;
          uVar18 = 0;
          iVar4 = 0;
          iVar12 = 0;
        }
        else {
          puVar7 = (uint *)param_1[0x53];
          if ((uint *)param_1[0x53] == (uint *)0x0) {
            puVar7 = local_68;
          }
          uVar16 = *puVar7;
          if (uVar16 == 0) {
            iVar4 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar4 = iVar2 + -1;
            }
            uVar18 = 0;
            uVar15 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar15 = uVar18;
            }
            iVar12 = 0;
            do {
              if (uVar15 == uVar18) goto LAB_140741a7c;
              iVar12 = iVar12 + 0x20;
              uVar16 = puVar7[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar18 = 0;
            iVar12 = 0;
          }
          uVar15 = (ulonglong)(-uVar16 & uVar16);
          uVar1 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar4) {
            iVar4 = iVar2;
          }
        }
        if (iVar4 != iVar2) {
          uVar16 = 0xffffffff;
          puVar7 = local_68;
          iVar17 = iVar2;
          do {
            lVar13 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar4 * 0x20);
            if ((lVar13 != 0) && (*(int *)(lVar13 + 0x40) != *(int *)(lVar13 + 0x44))) {
              FUN_14012a344(param_1,lVar13,0);
              iVar17 = (int)param_1[0x54];
            }
            uVar16 = uVar16 & ~(uint)uVar15;
            puVar5 = (uint *)param_1[0x53];
            if ((uint *)param_1[0x53] == (uint *)0x0) {
              puVar5 = puVar7;
            }
            iVar4 = (int)uVar18;
            lVar13 = (longlong)iVar4;
            uVar11 = puVar5[lVar13] & uVar16;
            if (uVar11 == 0) {
              iVar9 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar9 = iVar17 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar4) {
                iVar10 = iVar4;
              }
              if (iVar4 < iVar9) {
                lVar14 = 0;
                do {
                  uVar11 = puVar5[lVar13 + lVar14 + 1];
                  if (uVar11 != 0) {
                    uVar18 = (ulonglong)(iVar4 + (int)lVar14 + 1);
                    uVar16 = 0xffffffff;
                    goto LAB_140741a50;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar10 - lVar13 != lVar14);
                uVar16 = 0xffffffff;
                iVar4 = iVar10;
              }
              uVar18 = (ulonglong)(iVar4 + 1);
              puVar7 = local_68;
              iVar4 = iVar17;
            }
            else {
LAB_140741a50:
              uVar15 = (ulonglong)(-uVar11 & uVar11);
              uVar1 = uVar15 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar17 <= iVar4) {
                iVar4 = iVar17;
              }
            }
          } while (iVar4 != iVar2);
        }
      }
      else {
        local_6c = (undefined4)CONCAT71(uVar8,1);
      }
      goto LAB_140741a7c;
    }
  }
LAB_140741ac6:
  local_6c = 0;
LAB_140741a7c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_6c;
}



// FUNCTION 140741bbc FUN_140741bbc body=296 status=ok
// SIG undefined FUN_140741bbc(void)

undefined8 FUN_140741bbc(longlong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_3 < 0x33) {
    if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364)) {
      uVar2 = *(ulonglong *)(param_2 + 0x30);
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      lVar8 = param_1 + 0x368;
      if (*(longlong *)(param_1 + 0x370) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x370);
      }
      iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x378) - 1U & (uVar6 >> 0x10 ^ uVar6))
                               * 4);
      if (iVar7 != -1) {
        while (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar7 * 0x28),
              *puVar1 != uVar2) {
          iVar7 = (int)puVar1[4];
          if (iVar7 == -1) {
            return 0;
          }
        }
        if ((((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) &&
           (uVar2 = puVar1[2], (longlong)(int)uVar2 != 0)) {
          uVar3 = puVar1[1];
          lVar8 = 0;
          while ((lVar4 = *(longlong *)(uVar3 + lVar8), lVar4 == param_2 || lVar4 == 0 ||
                 (cVar5 = FUN_140741bbc(param_1,lVar4,param_3 + 1), cVar5 == '\0'))) {
            lVar8 = lVar8 + 8;
            if ((longlong)(int)uVar2 * 8 == lVar8) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140741ce4 FUN_140741ce4 body=105 status=ok
// SIG undefined FUN_140741ce4(void)

undefined8 * FUN_140741ce4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  bool bVar4;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  bVar4 = true;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        bVar4 = DVar2 == DVar3;
      }
      else {
        bVar4 = false;
      }
    }
  }
  *(bool *)(param_1 + 2) = bVar4;
  return param_1;
}



// FUNCTION 140741d4e FUN_140741d4e body=140 status=ok
// SIG undefined FUN_140741d4e(void)

void FUN_140741d4e(undefined8 param_1,longlong param_2)

{
  FUN_140741dda(*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x58));
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x28) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x48));
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140741e11(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140741dda FUN_140741dda body=55 status=ok
// SIG undefined FUN_140741dda(void)

void FUN_140741dda(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x40);
    do {
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*pbVar1])(pbVar1 + -0x38);
      pbVar1 = pbVar1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140741e11 FUN_140741e11 body=69 status=ok
// SIG undefined FUN_140741e11(void)

void FUN_140741e11(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x48);
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        FUN_144a2da94(lVar1);
        thunk_FUN_1400020a8(lVar1,0x38);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140741e56 FUN_140741e56 body=7011 status=ok
// SIG undefined FUN_140741e56(void)

ulonglong FUN_140741e56(byte *param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ushort *puVar13;
  char *pcVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  byte bVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined4 *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  int *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_4;
  if (param_2 == 0) {
    uVar20 = 0;
    goto LAB_1407422a0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_178 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_178 = *(longlong **)(param_1 + 0x10);
  }
  puVar21 = *(undefined8 **)(param_1 + 0x18);
  bVar18 = *param_1;
  puVar17 = (undefined8 *)&DAT_14c75f678;
  if ((bVar18 == 1) && (puVar21 != (undefined8 *)0x0)) {
    puVar17 = (undefined8 *)(*(longlong *)*puVar21 + 0x18);
  }
  puVar19 = puVar17;
  if (0xf < (ulonglong)puVar17[3]) {
    puVar19 = (undefined8 *)*puVar17;
  }
  lVar9 = FUN_1407439ba(puVar19,puVar17[2],"!editor",7);
  lVar12 = CONCAT44(uStack_130._4_4_,(int)uStack_130);
  uVar20 = 0;
  uStack_130 = lVar12;
  if (((lVar9 == -1) && (bVar18 != 0)) && (puVar21 != (undefined8 *)0x0)) {
    pcVar14 = *(char **)*puVar21;
    uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130);
    if (*pcVar14 == '\x01') {
      iVar7 = *(int *)(pcVar14 + 0x10);
      if (iVar7 == 2) {
        if (*(char *)(param_2 + 0x68) == '\0') {
          if (*(ulonglong *)(pcVar14 + 0x58) < 0x10) {
            pcVar16 = pcVar14 + 0x40;
          }
          else {
            pcVar16 = *(char **)(pcVar14 + 0x40);
          }
          FUN_14709c44c(param_2,pcVar16,*(undefined4 *)(pcVar14 + 0x50));
          uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130);
          goto LAB_1407434cc;
        }
        uVar10 = 0;
        FUN_14009b010(param_3,1,0);
        lVar12 = *param_3;
        if (*(longlong *)(param_2 + 0x48) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(param_2 + 0x48) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          uVar10 = *(undefined8 *)(param_2 + 0x48);
        }
        *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(param_2 + 0x40);
        plVar11 = *(longlong **)(lVar12 + 0x18);
        *(undefined8 *)(lVar12 + 0x18) = uVar10;
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
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        puVar15 = &DAT_14c75f678;
        if ((*param_1 == 1) && (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0)) {
          puVar15 = (undefined *)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 0x40);
        }
        uVar10 = FUN_140743f9e(param_2,puVar15);
        *(undefined8 *)(*param_3 + 8) = uVar10;
        puVar21 = puVar17;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar21 = (undefined8 *)*puVar17;
        }
        plVar11 = (longlong *)FUN_1407439ba(puVar21,puVar17[2],&DAT_14a177612,4);
        if (plVar11 != (longlong *)0xffffffffffffffff) {
          *(byte *)(*param_3 + 1) = *(byte *)(*param_3 + 1) | 8;
        }
        *(undefined2 *)(*param_3 + 0x20) = 0xffff;
        *(byte *)(*param_3 + 1) = *(byte *)(*param_3 + 1) & 0xfe;
        *(undefined8 *)(*param_3 + 0x28) = 0;
        lVar12 = DAT_14c9a1ab0;
        if (DAT_14c9a1ab0 == 0) {
LAB_1407420f0:
          uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130);
          if (((plVar11 == (longlong *)0xffffffffffffffff) &&
              (lVar12 = *param_3, uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130),
              -1 < *(short *)(lVar12 + 0x20))) &&
             (uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130),
             *(longlong *)(lVar12 + 8) != 0)) {
            FUN_144aa7b48(lVar12 + 4);
            *(undefined4 *)(*param_3 + 0x24) = *(undefined4 *)(*param_3 + 4);
          }
        }
        else {
          uVar10 = puVar17[2];
          if ((ulonglong)puVar17[3] < 0x10) {
            lVar9 = FUN_1407439ba(puVar17,uVar10,"!uobject",8);
            if ((lVar9 == -1) && (lVar9 = FUN_1407439ba(puVar17,uVar10,"!asset",6), lVar9 == -1)) {
              lVar9 = FUN_1407439ba(puVar17,uVar10,"!ref_uobject",0xc);
              puVar21 = puVar17;
LAB_14074207a:
              if ((lVar9 == -1) &&
                 (lVar9 = FUN_1407439ba(puVar21,uVar10,"!ref_script_struct",0x12), lVar9 == -1)) {
                local_c8._0_4_ = 0;
                local_c8._4_4_ = 0;
                uStack_c0 = 0;
                uStack_bc = 0;
                local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
                plStack_b0 = (longlong *)0x0;
                uStack_a8 = 0;
                cVar5 = FUN_1407441ef(puVar17,"!ref_",5);
                if (cVar5 != '\0') {
                  FUN_144a62e5c(&local_138,&local_c8,*(undefined4 *)(lVar12 + 0x138),
                                *(undefined4 *)(lVar12 + 0x13c));
                  if ((int)uStack_130 != 0) {
                    FUN_144a78877(local_138,(int)uStack_130);
                  }
                  iVar7 = FUN_144b0841a((longlong *)(lVar12 + 0xe8));
                  if ((iVar7 != -1) &&
                     (lVar9 = *(longlong *)(lVar12 + 0xe8) + (longlong)iVar7 * 0x18,
                     puVar13 = (ushort *)(lVar9 + 0xc), puVar13 != (ushort *)0x0 && lVar9 != 0)) {
                    lVar9 = *param_3;
                    uVar3 = *puVar13;
                    *(ushort *)(lVar9 + 0x20) = uVar3;
                    if ((short)uVar3 == 0x7fff) {
                      pcVar14 = "Asset";
                    }
                    else if ((((short)uVar3 < 0) || (*(int *)(lVar12 + 0xd0) <= (int)(short)uVar3))
                            || (lVar12 = *(longlong *)
                                          (*(longlong *)(lVar12 + 200) + (ulonglong)uVar3 * 8),
                               lVar12 == 0)) {
                      pcVar14 = (char *)0x0;
                    }
                    else {
                      pcVar14 = *(char **)(lVar12 + 0xb8);
                    }
                    *(char **)(lVar9 + 0x28) = pcVar14;
                    puVar21 = puVar17;
                    if (0xf < (ulonglong)puVar17[3]) {
                      puVar21 = (undefined8 *)*puVar17;
                    }
                    lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!skipnexusaccum",0xf);
                    *(byte *)(*param_3 + 3) = *(byte *)(*param_3 + 3) & 0xfe | lVar12 != -1;
                  }
                }
                if (plStack_b0 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_1407420f0;
              }
            }
          }
          else {
            puVar21 = (undefined8 *)*puVar17;
            lVar9 = FUN_1407439ba(puVar21,uVar10,"!uobject",8);
            if ((lVar9 == -1) && (lVar9 = FUN_1407439ba(puVar21,uVar10,"!asset",6), lVar9 == -1)) {
              lVar9 = FUN_1407439ba(puVar21,uVar10,"!ref_uobject",0xc);
              goto LAB_14074207a;
            }
          }
          *(byte *)(*param_3 + 1) = *(byte *)(*param_3 + 1) | 1;
          lVar12 = *param_3;
          *(undefined2 *)(lVar12 + 0x20) = 0x7fff;
          *(char **)(lVar12 + 0x28) = "Asset";
          puVar21 = puVar17;
          if (0xf < (ulonglong)puVar17[3]) {
            puVar21 = (undefined8 *)*puVar17;
          }
          lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!skipnexusaccum",0xf);
          *(byte *)(*param_3 + 3) = *(byte *)(*param_3 + 3) & 0xfe | lVar12 != -1;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9a1394) && (FUN_144b3d300(&DAT_14c9a1394), DAT_14c9a1394 == -1)) {
            uVar10 = FUN_14118da1c();
            DAT_14c9a1390 = FUN_14054d46e(uVar10,L"LogYamlRefsToMissingAssets");
            _Init_thread_footer(&DAT_14c9a1394);
          }
          if (DAT_14c9a1390 == '\x01') {
            if ((*(byte *)*param_3 & 3) == 1) {
              uVar10 = *(undefined8 *)((byte *)*param_3 + 8);
            }
            else {
              uVar10 = 0;
            }
            plVar11 = &local_c8;
            FUN_1400b22c2(plVar11,uVar10);
            FUN_142b2082e(plVar11);
            if (CONCAT44(local_c8._4_4_,(int)local_c8) != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      else if (iVar7 == 4) {
        if (*(char *)(param_2 + 0x68) == '\x01') {
          FUN_14009b010(param_3,3,0);
          if ((*(byte *)*param_3 & 2) == 0) {
            puVar21 = &DAT_14c9a1288;
          }
          else {
            puVar21 = (undefined8 *)(*(longlong *)((byte *)*param_3 + 8) + 0x18);
          }
          if ((*param_1 == 1) && (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0)) {
            uVar6 = FUN_14074406e(*(undefined8 *)**(undefined8 **)(param_1 + 0x18));
          }
          else {
            uVar6 = 0;
          }
          if ((uint)(*(int *)(puVar21 + 2) - *(int *)((longlong)puVar21 + 0x3c)) < uVar6) {
            if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)uVar6);
            }
            FUN_144846f0c(puVar21,uVar6);
            iVar7 = 1;
            if (3 < uVar6) {
              uVar6 = (uVar6 | 1) + 0xe;
              iVar7 = 0x1f;
              if (uVar6 != 0) {
                for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
                }
              }
              iVar7 = 1 << ((byte)iVar7 & 0x1f);
            }
            if ((*(int *)(puVar21 + 10) == 0) || (*(int *)(puVar21 + 10) < iVar7)) {
              *(int *)(puVar21 + 10) = iVar7;
              FUN_1446eb800(puVar21);
            }
          }
        }
        if ((*param_1 == 1) &&
           (puVar21 = *(undefined8 **)(param_1 + 0x18), puVar21 != (undefined8 *)0x0)) {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            uStack_f0 = 0;
          }
          else {
            LOCK();
            piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            uStack_f0 = *(undefined8 *)(param_1 + 0x10);
            puVar21 = *(undefined8 **)(param_1 + 0x18);
          }
          local_f8 = *(longlong *)(param_1 + 8);
          FUN_14074415c(*(undefined8 *)*puVar21,&local_138);
          FUN_140743a50(&local_c8,&local_138,&local_f8);
          plVar11 = local_a0;
          local_138 = (int)local_c8;
          uStack_134 = local_c8._4_4_;
          uStack_130._0_4_ = uStack_c0;
          uStack_130._4_4_ = uStack_bc;
          local_128 = local_b8;
          plStack_120 = plStack_b0;
          if (local_a0 == (longlong *)0x0) goto LAB_14074347b;
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          local_118 = uStack_a8;
          plStack_110 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_a0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
        }
        else {
          local_c8._0_4_ = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          local_b8 = (longlong *)0x0;
          plStack_b0 = (longlong *)0x0;
          uStack_a8 = 0;
          local_a0 = (longlong *)0x0;
LAB_14074347b:
          plStack_110 = (longlong *)0x0;
          local_138 = (int)local_c8;
          uStack_134 = local_c8._4_4_;
          uStack_130._0_4_ = uStack_c0;
          uStack_130._4_4_ = uStack_bc;
          local_128 = local_b8;
          plStack_120 = plStack_b0;
          local_118 = uStack_a8;
        }
LAB_14074245b:
        if ((*param_1 == 0) ||
           (puVar21 = *(undefined8 **)(param_1 + 0x18), puVar21 == (undefined8 *)0x0)) {
          local_c8._0_4_ = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          local_b8 = (longlong *)0x0;
          plStack_b0 = (longlong *)0x0;
          uStack_a8 = 0;
          local_a0 = (longlong *)0x0;
        }
        else {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            puStack_d0 = (undefined8 *)0x0;
          }
          else {
            LOCK();
            piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            puStack_d0 = *(undefined8 **)(param_1 + 0x10);
            puVar21 = *(undefined8 **)(param_1 + 0x18);
          }
          local_d8 = *(int **)(param_1 + 8);
          pcVar14 = *(char **)*puVar21;
          if (*pcVar14 == '\0') {
LAB_140742f01:
            local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
            uStack_f0 = 0;
            plStack_e0 = (longlong *)0x0;
          }
          else if (*(int *)(pcVar14 + 0x10) == 4) {
            plStack_e0 = *(longlong **)(pcVar14 + 0x88);
            local_f8 = CONCAT44(local_f8._4_4_,2);
            uStack_f0 = 0;
          }
          else {
            if (*(int *)(pcVar14 + 0x10) != 3) goto LAB_140742f01;
            uStack_f0 = *(undefined8 *)(pcVar14 + 0x68);
            local_f8 = CONCAT44(local_f8._4_4_,1);
            plStack_e0 = (longlong *)0x0;
          }
          local_e8 = plStack_e0;
          FUN_140743a50(&local_c8,&local_f8,&local_d8);
        }
        plVar11 = local_a0;
        if (local_138 == (int)local_c8) {
          if ((int)local_c8 == 2) {
            bVar22 = local_128 == local_b8;
          }
          else {
            bVar22 = true;
            if ((int)local_c8 == 1) {
              bVar22 = uStack_130 == CONCAT44(uStack_bc,uStack_c0);
            }
          }
        }
        else {
          bVar22 = false;
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        plVar11 = plStack_110;
        if (!bVar22) {
          FUN_140743ab8(&local_138,&local_c8);
          plVar11 = local_78;
          puVar21 = (undefined8 *)&DAT_14c75f678;
          if (((char)uStack_a8 == '\x01') &&
             (puVar21 = (undefined8 *)&DAT_14c75f678, local_90 != (undefined8 *)0x0)) {
            puVar21 = (undefined8 *)(*(longlong *)*local_90 + 0x40);
          }
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_78 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          plVar11 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_98 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          plVar11 = local_b8;
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_b8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_b8)(local_b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          if (puVar21[2] != 0) {
            FUN_140743ab8(&local_138,&local_c8);
            plVar11 = local_78;
            if (local_78 == (longlong *)0x0) {
LAB_140742ff9:
              local_f8 = CONCAT71(local_f8._1_7_,local_88);
              uStack_f0 = local_80;
              plStack_e0 = local_70;
              local_e8 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(local_78 + 1) = (int)local_78[1] + 1;
              UNLOCK();
              local_f8 = CONCAT71(local_f8._1_7_,local_88);
              if (local_78 == (longlong *)0x0) goto LAB_140742ff9;
              LOCK();
              *(int *)(local_78 + 1) = (int)local_78[1] + 1;
              UNLOCK();
              uStack_f0 = local_80;
              local_e8 = local_78;
              plStack_e0 = local_70;
              LOCK();
              plVar2 = local_78 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
            plVar11 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_78 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
            plVar11 = local_98;
            if (local_98 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_98 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_98)(local_98);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
            plVar11 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_b8 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
            local_158 = 0;
            plStack_150 = (longlong *)0x0;
            local_168 = *local_170;
            uStack_164 = local_170[1];
            uStack_160 = local_170[2];
            uStack_15c = local_170[3];
            cVar5 = FUN_140741e56(&local_f8,param_2,&local_158,&local_168);
            if (cVar5 != '\0') {
              FUN_140743ab8(&local_138,&local_c8);
              plVar11 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_78 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_78)(local_78);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar11 + 8))(plVar11);
                  }
                }
              }
              plVar11 = local_98;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_98 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_98)(local_98);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar11 + 8))(plVar11);
                  }
                }
              }
              plVar11 = local_b8;
              if (local_b8 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_b8 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_b8)(local_b8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar11 + 8))(plVar11);
                  }
                }
              }
              puVar19 = &DAT_14c9a1288;
              if ((*(byte *)*param_3 & 2) != 0) {
                puVar19 = (undefined8 *)(*(longlong *)((byte *)*param_3 + 8) + 0x18);
              }
              if (0xf < (ulonglong)puVar21[3]) {
                puVar21 = (undefined8 *)*puVar21;
              }
              local_c8._0_4_ = 0;
              local_c8._4_4_ = 0;
              uStack_c0 = 0;
              uStack_bc = 0;
              local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
              plStack_b0 = (longlong *)0x0;
              uStack_a8 = 0;
              FUN_1446ddda2(&local_c8,puVar21,0);
              puStack_d0 = &local_158;
              local_d8 = (int *)&local_c8;
              FUN_140744482(puVar19,local_fc,&local_d8,0);
              if (plStack_b0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            plVar11 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_150 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            plVar11 = local_e8;
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_e8 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_e8)(local_e8);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
          }
          if (local_138 == 2) {
            plVar11 = local_128 + 2;
            local_128 = plVar11;
            while ((plVar11 != plStack_120 &&
                   ((*(char *)**(undefined8 **)*plVar11 != '\x01' ||
                    (local_128 = plVar11, *(char *)**(undefined8 **)plVar11[1] == '\0'))))) {
              plVar11 = plVar11 + 2;
              local_128 = plStack_120;
            }
          }
          else if (local_138 == 1) {
            uStack_130 = uStack_130 + 8;
          }
          goto LAB_14074245b;
        }
        if (plStack_110 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_110 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_110)(plStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        if (*(char *)(param_2 + 0x68) == '\0') goto LAB_1407434cc;
        pbVar4 = (byte *)*param_3;
        if ((pbVar4[3] & 0x10) == 0) {
          if ((*pbVar4 & 2) == 0) {
            plVar11 = &DAT_14c9a1288;
          }
          else {
            plVar11 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
          }
          FUN_14074432e(plVar11);
          FUN_140743c6a(plVar11,(int)plVar11[2] - *(int *)((longlong)plVar11 + 0x3c));
        }
      }
      else {
        uStack_130 = lVar12;
        if (iVar7 != 3) goto LAB_1407434cc;
        if (*(char *)(param_2 + 0x68) == '\x01') {
          iVar7 = 0;
          FUN_14009b010(param_3,2,0);
          if ((*(byte *)*param_3 & 2) == 0) {
            puVar21 = &DAT_14c9a1270;
          }
          else {
            puVar21 = *(undefined8 **)((byte *)*param_3 + 8);
          }
          if (((*param_1 == 1) && (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0)) &&
             (iVar7 = FUN_14074406e(*(undefined8 *)**(undefined8 **)(param_1 + 0x18)), iVar7 < 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar7);
          }
          if (*(int *)((longlong)puVar21 + 0x14) < iVar7) {
            FUN_14009b4be(puVar21,iVar7);
          }
          bVar18 = *param_1;
          if (((bVar18 == 1) && (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0)) &&
             (*(int *)(*(longlong *)**(undefined8 **)(param_1 + 0x18) + 0x38) == 2)) {
            *(byte *)(*param_3 + 2) = *(byte *)(*param_3 + 2) | 1;
            bVar18 = *param_1;
          }
        }
        if (((bVar18 & 1) == 0) ||
           (puVar21 = *(undefined8 **)(param_1 + 0x18), puVar21 == (undefined8 *)0x0)) {
          local_c8._0_4_ = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          local_b8 = (longlong *)0x0;
          plStack_b0 = (longlong *)0x0;
          uStack_a8 = 0;
          local_a0 = (longlong *)0x0;
LAB_140743844:
          plStack_110 = (longlong *)0x0;
          local_138 = (int)local_c8;
          uStack_134 = local_c8._4_4_;
          uStack_130._0_4_ = uStack_c0;
          uStack_130._4_4_ = uStack_bc;
          local_128 = local_b8;
          plStack_120 = plStack_b0;
          local_118 = uStack_a8;
        }
        else {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            uStack_f0 = 0;
          }
          else {
            LOCK();
            piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            uStack_f0 = *(undefined8 *)(param_1 + 0x10);
            puVar21 = *(undefined8 **)(param_1 + 0x18);
          }
          local_f8 = *(longlong *)(param_1 + 8);
          FUN_14074415c(*(undefined8 *)*puVar21,&local_138);
          FUN_140743a50(&local_c8,&local_138,&local_f8);
          plVar11 = local_a0;
          local_138 = (int)local_c8;
          uStack_134 = local_c8._4_4_;
          uStack_130._0_4_ = uStack_c0;
          uStack_130._4_4_ = uStack_bc;
          local_128 = local_b8;
          plStack_120 = plStack_b0;
          if (local_a0 == (longlong *)0x0) goto LAB_140743844;
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          local_118 = uStack_a8;
          plStack_110 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_a0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
        }
LAB_140742a25:
        if ((*param_1 == 0) ||
           (puVar21 = *(undefined8 **)(param_1 + 0x18), puVar21 == (undefined8 *)0x0)) {
          local_c8._0_4_ = 0;
          plStack_b0 = (longlong *)0x0;
          uStack_a8 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          local_b8 = (longlong *)0x0;
          local_a0 = (longlong *)0x0;
        }
        else {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            puStack_d0 = (undefined8 *)0x0;
          }
          else {
            LOCK();
            piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            puStack_d0 = *(undefined8 **)(param_1 + 0x10);
            puVar21 = *(undefined8 **)(param_1 + 0x18);
          }
          local_d8 = *(int **)(param_1 + 8);
          pcVar14 = *(char **)*puVar21;
          if (*pcVar14 == '\0') {
LAB_140743549:
            local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
            uStack_f0 = 0;
            plStack_e0 = (longlong *)0x0;
          }
          else if (*(int *)(pcVar14 + 0x10) == 4) {
            plStack_e0 = *(longlong **)(pcVar14 + 0x88);
            local_f8 = CONCAT44(local_f8._4_4_,2);
            uStack_f0 = 0;
          }
          else {
            if (*(int *)(pcVar14 + 0x10) != 3) goto LAB_140743549;
            uStack_f0 = *(undefined8 *)(pcVar14 + 0x68);
            local_f8 = CONCAT44(local_f8._4_4_,1);
            plStack_e0 = (longlong *)0x0;
          }
          local_e8 = plStack_e0;
          FUN_140743a50(&local_c8,&local_f8,&local_d8);
        }
        plVar11 = local_a0;
        if (local_138 == (int)local_c8) {
          if ((int)local_c8 == 1) {
            bVar22 = uStack_130 == CONCAT44(uStack_bc,uStack_c0);
          }
          else {
            bVar22 = true;
            if ((int)local_c8 == 2) {
              bVar22 = local_128 == local_b8;
            }
          }
        }
        else {
          bVar22 = false;
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        plVar11 = plStack_110;
        if (!bVar22) {
          FUN_140743cb0(&local_138,&local_c8);
          plVar11 = local_b8;
          if (local_b8 == (longlong *)0x0) {
LAB_1407435d5:
            uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
            local_f8 = CONCAT71(local_f8._1_7_,(undefined1)local_c8);
            plStack_e0 = plStack_b0;
            local_e8 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
            UNLOCK();
            uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
            local_f8 = CONCAT71(local_f8._1_7_,(undefined1)local_c8);
            if (local_b8 == (longlong *)0x0) goto LAB_1407435d5;
            LOCK();
            *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
            UNLOCK();
            local_e8 = local_b8;
            plStack_e0 = plStack_b0;
            LOCK();
            plVar2 = local_b8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_b8)(local_b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          plVar11 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_78 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          plVar11 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_98 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          plVar11 = local_b8;
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_b8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_b8)(local_b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          local_c8._0_4_ = 0;
          local_c8._4_4_ = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          local_148 = *local_170;
          uStack_144 = local_170[1];
          uStack_140 = local_170[2];
          uStack_13c = local_170[3];
          cVar5 = FUN_140741e56(&local_f8,param_2,&local_c8,&local_148);
          if (cVar5 == '\0') {
            cVar5 = (char)local_f8;
            if ((((char)local_f8 != '\x01') || (plStack_e0 == (longlong *)0x0)) ||
               ((**(char **)*plStack_e0 == '\x01' && (*(int *)(*(char **)*plStack_e0 + 0x10) == 1)))
               ) {
              if (*(char *)(param_2 + 0x68) != '\0') {
                FUN_14009b010(&local_c8,1,0);
                FUN_144b08394(CONCAT44(local_c8._4_4_,(int)local_c8) + 0x10,param_2 + 0x40);
                puVar15 = &DAT_14c75f678;
                if ((cVar5 != '\0') && (plStack_e0 != (longlong *)0x0)) {
                  puVar15 = (undefined *)(*(longlong *)*plStack_e0 + 0x40);
                }
                uVar10 = FUN_140743f9e(param_2,puVar15);
                lVar12 = CONCAT44(local_c8._4_4_,(int)local_c8);
                *(undefined8 *)(lVar12 + 8) = uVar10;
                *(undefined2 *)(lVar12 + 0x20) = 0xffff;
                *(byte *)(lVar12 + 1) = *(byte *)(lVar12 + 1) & 0xfe;
                lVar12 = CONCAT44(local_c8._4_4_,(int)local_c8);
                *(undefined8 *)(lVar12 + 0x28) = 0;
                if ((*(byte *)*param_3 & 2) == 0) {
                  plVar11 = &DAT_14c9a1270;
                }
                else {
                  plVar11 = *(longlong **)((byte *)*param_3 + 8);
                }
                iVar7 = (int)plVar11[2];
                *(uint *)(plVar11 + 2) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar11 + 0x14) < iVar7 + 1U) {
                  FUN_14000961e(plVar11,iVar7);
                  lVar12 = CONCAT44(local_c8._4_4_,(int)local_c8);
                }
                lVar9 = *plVar11;
                *(longlong *)(lVar9 + (longlong)iVar7 * 0x10) = lVar12;
                lVar12 = CONCAT44(uStack_bc,uStack_c0);
                *(longlong *)(lVar9 + 8 + (longlong)iVar7 * 0x10) = lVar12;
                goto LAB_140742c54;
              }
              FUN_14709c44c(param_2,&DAT_149e02088,0xffffffff);
            }
          }
          else {
            plVar11 = &DAT_14c9a1270;
            if ((*(byte *)*param_3 & 2) != 0) {
              plVar11 = *(longlong **)((byte *)*param_3 + 8);
            }
            iVar7 = (int)plVar11[2];
            *(uint *)(plVar11 + 2) = iVar7 + 1U;
            if (*(uint *)((longlong)plVar11 + 0x14) < iVar7 + 1U) {
              FUN_14000961e(plVar11,iVar7);
            }
            lVar9 = *plVar11;
            *(ulonglong *)(lVar9 + (longlong)iVar7 * 0x10) = CONCAT44(local_c8._4_4_,(int)local_c8);
            lVar12 = CONCAT44(uStack_bc,uStack_c0);
            *(longlong *)(lVar9 + 8 + (longlong)iVar7 * 0x10) = lVar12;
LAB_140742c54:
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
              UNLOCK();
            }
          }
          plVar11 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
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
          plVar11 = local_e8;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_e8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          if (local_138 == 1) {
            uStack_130 = uStack_130 + 8;
          }
          else if (local_138 == 2) {
            plVar11 = local_128 + 2;
            local_128 = plVar11;
            while ((plVar11 != plStack_120 &&
                   ((*(char *)**(undefined8 **)*plVar11 != '\x01' ||
                    (local_128 = plVar11, *(char *)**(undefined8 **)plVar11[1] == '\0'))))) {
              plVar11 = plVar11 + 2;
              local_128 = plStack_120;
            }
          }
          goto LAB_140742a25;
        }
        if (plStack_110 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_110 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_110)(plStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        if (*(char *)(param_2 + 0x68) == '\0') goto LAB_1407434cc;
        pbVar4 = (byte *)*param_3;
        if ((pbVar4[3] & 0x10) == 0) {
          if ((*pbVar4 & 2) == 0) {
            puVar21 = &DAT_14c9a1270;
          }
          else {
            puVar21 = *(undefined8 **)(pbVar4 + 8);
          }
          if (*(int *)((longlong)puVar21 + 0x14) != *(int *)(puVar21 + 2)) {
            FUN_14009b4be();
          }
        }
        puVar21 = puVar17;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar21 = (undefined8 *)*puVar17;
        }
        lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!tags",5);
        pbVar4 = (byte *)*param_3;
        if (lVar12 == -1) {
          local_c8._0_4_ = 0;
          local_c8._4_4_ = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
          plStack_b0 = (longlong *)0x0;
          uStack_a8 = 0;
          uVar6 = FUN_1407441ef(puVar17,"!objs_",6);
          plVar11 = (longlong *)(ulonglong)uVar6;
          if ((char)uVar6 != '\0') {
            uVar8 = FUN_14009aea0(&DAT_14c9a1320,&local_c8);
            *(undefined4 *)(pbVar4 + 0x24) = uVar8;
          }
          if (plStack_b0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if ((char)uVar6 != '\0') {
            pbVar4 = (byte *)*param_3;
            *pbVar4 = *pbVar4 & 0x7f | (*(int *)(pbVar4 + 0x24) != 0) << 7;
          }
        }
        else {
          *pbVar4 = *pbVar4 | 0x80;
          *(undefined4 *)(*param_3 + 0x24) = 0;
        }
      }
      if (*(char *)(param_2 + 0x68) != '\0') {
        *(byte *)(*param_3 + 1) = *(byte *)(*param_3 + 1) & 0xfb;
        *(byte *)(*param_3 + 1) =
             *(byte *)(*param_3 + 1) & 0xfd | *(char *)(param_2 + 0x69) * '\x02';
        puVar21 = puVar17;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar21 = (undefined8 *)*puVar17;
        }
        lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!remove",7);
        *(byte *)*param_3 = *(byte *)*param_3 & 0xdf | (lVar12 != -1) << 5;
        puVar21 = puVar17;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar21 = (undefined8 *)*puVar17;
        }
        lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!replace",8);
        *(byte *)*param_3 = *(byte *)*param_3 & 0xef | (lVar12 != -1) << 4;
        puVar21 = puVar17;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar21 = (undefined8 *)*puVar17;
        }
        lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!layer_remove",0xd);
        *(byte *)*param_3 = *(byte *)*param_3 & 0xf7 | (lVar12 != -1) << 3;
        puVar21 = puVar17;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar21 = (undefined8 *)*puVar17;
        }
        lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!layer_replace",0xe);
        *(byte *)*param_3 = *(byte *)*param_3 & 0xfb | (lVar12 != -1) << 2;
        puVar21 = puVar17;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar21 = (undefined8 *)*puVar17;
        }
        lVar12 = FUN_1407439ba(puVar21,puVar17[2],"!noinherit",10);
        *(byte *)(*param_3 + 3) = *(byte *)(*param_3 + 3) & 0xfd | (lVar12 != -1) * '\x02';
        puVar21 = puVar17 + 2;
        if (0xf < (ulonglong)puVar17[3]) {
          puVar17 = (undefined8 *)*puVar17;
        }
        lVar12 = FUN_1407439ba(puVar17,*puVar21,"!searchable_name",0x10);
        *(byte *)(*param_3 + 3) = *(byte *)(*param_3 + 3) & 0xfb | (lVar12 != -1) << 2;
        uVar20 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        goto LAB_14074228c;
      }
    }
LAB_1407434cc:
    uVar20 = 0;
  }
LAB_14074228c:
  plVar11 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_178 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_178 + 8))();
      }
    }
  }
LAB_1407422a0:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 1407439ba FUN_1407439ba body=150 status=ok
// SIG undefined FUN_1407439ba(void)

longlong FUN_1407439ba(void *param_1,ulonglong param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  void *_Buf1;
  longlong lVar3;
  
  lVar3 = -1;
  if (param_4 <= param_2) {
    if (param_4 == 0) {
      lVar3 = 0;
    }
    else {
      cVar1 = *param_3;
      _Buf1 = memchr(param_1,(int)cVar1,(param_2 - param_4) + 1);
      if (_Buf1 != (void *)0x0) {
        do {
          iVar2 = memcmp(_Buf1,param_3,param_4);
          if (iVar2 == 0) {
            return (longlong)_Buf1 - (longlong)param_1;
          }
          _Buf1 = memchr((void *)((longlong)_Buf1 + 1),(int)cVar1,
                         (longlong)param_1 + (((param_2 - param_4) + 1) - ((longlong)_Buf1 + 1)));
        } while (_Buf1 != (void *)0x0);
      }
    }
  }
  return lVar3;
}



// FUNCTION 140743a50 FUN_140743a50 body=104 status=ok
// SIG undefined FUN_140743a50(void)

undefined8 * FUN_140743a50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *param_1 = uVar7;
  param_1[1] = uVar8;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[4] = *param_3;
  plVar3 = (longlong *)param_3[1];
  param_1[5] = plVar3;
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
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140743ab8 FUN_140743ab8 body=433 status=ok
// SIG undefined FUN_140743ab8(void)

undefined1 * FUN_140743ab8(undefined8 param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140743cb0(param_1,local_78);
  *param_2 = local_78[0];
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (local_68 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    plVar2 = local_68;
  }
  *(undefined8 *)(param_2 + 8) = local_70;
  *(longlong **)(param_2 + 0x10) = plVar2;
  *(undefined8 *)(param_2 + 0x18) = local_60;
  param_2[0x20] = local_58;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (local_48 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    plVar2 = local_48;
  }
  *(undefined8 *)(param_2 + 0x28) = local_50;
  *(longlong **)(param_2 + 0x30) = plVar2;
  *(undefined8 *)(param_2 + 0x38) = local_40;
  param_2[0x40] = local_38;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x48) = local_30;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = local_20;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 0x48) = local_30;
    *(longlong **)(param_2 + 0x50) = local_28;
    *(undefined8 *)(param_2 + 0x58) = local_20;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 8))(local_28);
        }
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 8))(local_48);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 8))(local_68);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140743c6a FUN_140743c6a body=70 status=ok
// SIG undefined FUN_140743c6a(void)

void FUN_140743c6a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x50)) && (*(int *)(param_1 + 0x50) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x50) = iVar3;
  FUN_1446eb800(param_1);
  return;
}



// FUNCTION 140743cb0 FUN_140743cb0 body=750 status=ok
// SIG undefined FUN_140743cb0(void)

undefined1 * FUN_140743cb0(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*param_1 == 2) {
    lVar4 = **(longlong **)(param_1 + 4);
    if ((lVar4 == 0) || (lVar5 = (*(longlong **)(param_1 + 4))[1], lVar5 == 0)) {
LAB_140743e48:
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      param_2[0x20] = 1;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      param_2[0x40] = 1;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      return param_2;
    }
    if (*(longlong *)(param_1 + 10) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 8);
      bVar7 = true;
      plVar8 = (longlong *)0x0;
      uVar10 = uVar9;
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar9 = *(undefined8 *)(param_1 + 8);
      plVar8 = *(longlong **)(param_1 + 10);
      if (plVar8 == (longlong *)0x0) {
        bVar7 = true;
        plVar8 = (longlong *)0x0;
        uVar10 = uVar9;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar8)();
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        if (*(longlong *)(param_1 + 10) == 0) {
          uVar10 = *(undefined8 *)(param_1 + 8);
        }
        else {
          LOCK();
          piVar1 = (int *)(*(longlong *)(param_1 + 10) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          uVar10 = *(undefined8 *)(param_1 + 8);
          plVar6 = *(longlong **)(param_1 + 10);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            plVar2 = plVar6 + 1;
            LOCK();
            plVar3 = plVar6 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 8))(plVar6);
              }
            }
            *param_2 = 0;
            *(undefined8 *)(param_2 + 8) = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            param_2[0x20] = 1;
            *(undefined8 *)(param_2 + 0x28) = 0;
            *(undefined8 *)(param_2 + 0x30) = 0;
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            *(undefined8 *)(param_2 + 0x28) = uVar10;
            *(longlong **)(param_2 + 0x30) = plVar6;
            *(longlong *)(param_2 + 0x38) = lVar4;
            param_2[0x40] = 1;
            *(undefined8 *)(param_2 + 0x48) = 0;
            *(undefined8 *)(param_2 + 0x50) = 0;
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            *(undefined8 *)(param_2 + 0x48) = uVar9;
            *(longlong **)(param_2 + 0x50) = plVar8;
            *(longlong *)(param_2 + 0x58) = lVar5;
            LOCK();
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 8))(plVar6);
              }
            }
            goto LAB_140743d9e;
          }
        }
        bVar7 = false;
      }
    }
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_2[0x20] = 1;
    *(undefined8 *)(param_2 + 0x28) = uVar10;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(longlong *)(param_2 + 0x38) = lVar4;
    param_2[0x40] = 1;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    if (bVar7) {
      *(undefined8 *)(param_2 + 0x48) = uVar9;
      *(longlong **)(param_2 + 0x50) = plVar8;
      *(longlong *)(param_2 + 0x58) = lVar5;
      return param_2;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 0x48) = uVar9;
    *(longlong **)(param_2 + 0x50) = plVar8;
    *(longlong *)(param_2 + 0x58) = lVar5;
    goto LAB_140743d9e;
  }
  if ((*param_1 != 1) || (lVar4 = **(longlong **)(param_1 + 2), lVar4 == 0)) goto LAB_140743e48;
  if (*(longlong *)(param_1 + 10) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
LAB_140743f59:
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    bVar7 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar9 = *(undefined8 *)(param_1 + 8);
    plVar8 = *(longlong **)(param_1 + 10);
    if (plVar8 == (longlong *)0x0) goto LAB_140743f59;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  *(undefined8 *)(param_2 + 8) = uVar9;
  *(longlong **)(param_2 + 0x10) = plVar8;
  *(longlong *)(param_2 + 0x18) = lVar4;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x31) = 0;
  *(undefined8 *)(param_2 + 0x39) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  if (bVar7) {
    return param_2;
  }
LAB_140743d9e:
  LOCK();
  plVar6 = plVar8 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  return param_2;
}



// FUNCTION 140743f9e FUN_140743f9e body=193 status=ok
// SIG undefined FUN_140743f9e(void)

longlong FUN_140743f9e(longlong param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  lVar3 = 0x1505;
  cVar1 = *param_2;
  pcVar2 = param_2;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    lVar3 = (longlong)cVar1 + lVar3 * 0x21;
    cVar1 = *pcVar2;
  }
  local_30 = param_2;
  FUN_14709e5d2(param_1,local_28,&local_30,lVar3);
  if ((local_20 == 0) || (*(longlong *)(param_1 + 8) == local_20)) {
    lVar3 = 0;
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x40) + *(longlong *)(local_20 + 0x18);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14074406e FUN_14074406e body=126 status=ok
// SIG undefined FUN_14074406e(void)

ulonglong FUN_14074406e(char *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*param_1 == '\x01') {
    if (*(int *)(param_1 + 0x10) == 4) {
      FUN_1407440ec(param_1);
      return (*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 4) -
             *(longlong *)(param_1 + 0xa0);
    }
    if (*(int *)(param_1 + 0x10) == 3) {
      uVar2 = *(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3;
      uVar1 = *(ulonglong *)(param_1 + 0x78);
      if (uVar2 <= uVar1) {
        return uVar1;
      }
      do {
        if (**(char **)**(undefined8 **)(*(longlong *)(param_1 + 0x60) + uVar1 * 8) != '\x01') {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
        *(ulonglong *)(param_1 + 0x78) = uVar1;
      } while (uVar2 != uVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1407440ec FUN_1407440ec body=111 status=ok
// SIG undefined FUN_1407440ec(void)

void FUN_1407440ec(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x98);
  plVar3 = (longlong *)*plVar2;
  if ((longlong *)*plVar2 != plVar2) {
    do {
      plVar1 = (longlong *)*plVar3;
      if ((*(char *)**(undefined8 **)plVar3[2] == '\x01') &&
         (*(char *)**(undefined8 **)plVar3[3] == '\x01')) {
        *(longlong **)plVar3[1] = plVar1;
        *(longlong *)(*plVar3 + 8) = plVar3[1];
        *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + -1;
        FUN_1400020a8();
        plVar2 = *(longlong **)(param_1 + 0x98);
      }
      plVar3 = plVar1;
    } while (plVar1 != plVar2);
  }
  return;
}



// FUNCTION 14074415c FUN_14074415c body=147 status=ok
// SIG undefined FUN_14074415c(void)

void FUN_14074415c(char *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*param_1 != '\0') {
    if (*(int *)(param_1 + 0x10) == 4) {
      puVar4 = *(undefined8 **)(param_1 + 0x80);
      puVar1 = *(undefined8 **)(param_1 + 0x88);
      *param_2 = 2;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 **)(param_2 + 6) = puVar1;
      while ((puVar3 = puVar1, puVar4 != puVar1 &&
             ((*(char *)**(undefined8 **)*puVar4 != '\x01' ||
              (puVar3 = puVar4, *(char *)**(undefined8 **)puVar4[1] == '\0'))))) {
        puVar4 = puVar4 + 2;
      }
      *(undefined8 **)(param_2 + 4) = puVar3;
      return;
    }
    if (*(int *)(param_1 + 0x10) == 3) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      *param_2 = 1;
      *(undefined8 *)(param_2 + 2) = uVar2;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      return;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 1407441ef FUN_1407441ef body=318 status=ok
// SIG undefined FUN_1407441ef(void)

bool FUN_1407441ef(undefined8 *param_1,char *param_2,uint param_3,undefined8 param_4)

{
  ulonglong uVar1;
  size_t sVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 ***local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  sVar2 = strlen(param_2);
  uVar1 = param_1[2];
  puVar6 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
  }
  lVar3 = FUN_1407439ba(puVar6,uVar1,param_2,sVar2);
  if (lVar3 == -1) goto LAB_14074424e;
  uVar8 = (ulonglong)param_3 + lVar3;
  if (uVar1 < uVar8 || uVar1 - uVar8 == 0) {
LAB_1407442b1:
    uVar5 = uVar1;
  }
  else {
    pvVar4 = memchr((void *)((longlong)puVar6 + uVar8),0x21,uVar1 - uVar8);
    uVar5 = (longlong)pvVar4 - (longlong)puVar6;
    if (pvVar4 == (void *)0x0 || (longlong)pvVar4 - (longlong)puVar6 == 0xffffffffffffffff)
    goto LAB_1407442b1;
  }
  local_98 = &local_88;
  FUN_1408f7a26(local_60,param_1,uVar8,uVar5 - uVar8);
  ppppuVar7 = local_60;
  if (0xf < local_48) {
    ppppuVar7 = (undefined8 ****)local_60[0];
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,ppppuVar7,0);
  FUN_1404e49fa(param_4,&local_88);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1401d9a90(local_60);
LAB_14074424e:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar3 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14074432e FUN_14074432e body=340 status=ok
// SIG undefined FUN_14074432e(void)

void FUN_14074432e(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  
  iVar1 = (int)param_1[6];
  if (iVar1 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    plVar9 = (longlong *)param_1[5];
    if ((longlong *)param_1[5] == (longlong *)0x0) {
      plVar9 = param_1 + 3;
    }
    uVar11 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar10 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar6 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar12 = uVar11 == 0;
      uVar11 = uVar11 - 1;
      if (bVar12) goto LAB_14074439f;
      iVar10 = iVar10 + 0x20;
      uVar7 = uVar6 & *(uint *)((longlong)plVar9 + uVar11 * 4);
      uVar6 = 0xffffffff;
    } while (uVar7 == 0);
    uVar11 = (ulonglong)uVar7 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = -(((uint)lVar3 ^ 0x3f) + iVar10);
  }
LAB_14074439f:
  iVar1 = iVar5 + 1;
  iVar10 = (int)param_1[2];
  if (iVar1 < iVar10) {
    if ((0 < *(int *)((longlong)param_1 + 0x3c)) &&
       (uVar11 = (ulonglong)*(uint *)(param_1 + 7), *(uint *)(param_1 + 7) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        lVar8 = (longlong)(int)uVar11 * 0x40;
        if (iVar5 < (int)uVar11) {
          iVar10 = *(int *)(lVar3 + lVar8);
          iVar2 = *(int *)(lVar3 + 4 + lVar8);
          uVar11 = (ulonglong)iVar2;
          if (uVar11 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar11 * 0x40) = iVar10;
          }
          if (iVar10 == -1) {
            *(int *)(param_1 + 7) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar10 * 0x40) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + -1;
        }
        else {
          uVar11 = (ulonglong)*(uint *)(lVar3 + 4 + lVar8);
        }
      } while ((int)uVar11 != -1);
      iVar10 = (int)param_1[2];
    }
    if (iVar10 != iVar1) {
      *(int *)(param_1 + 2) = iVar1;
    }
    *(int *)(param_1 + 6) = iVar1;
    iVar5 = iVar5 + 0x20;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    iVar10 = iVar1;
    if (iVar1 % 0x20 != 0) {
      plVar9 = param_1 + 3;
      if ((longlong *)param_1[5] != (longlong *)0x0) {
        plVar9 = (longlong *)param_1[5];
      }
      bVar4 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
      iVar10 = (int)param_1[2];
    }
  }
  if (*(int *)((longlong)param_1 + 0x14) != iVar10) {
    FUN_1447b3e64(param_1);
    return;
  }
  return;
}



// FUNCTION 140744482 FUN_140744482 body=954 status=ok
// SIG undefined FUN_140744482(void)

uint * FUN_140744482(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  longlong *plVar29;
  uint uVar30;
  int iVar31;
  uint *puVar32;
  longlong lVar33;
  
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    uVar21 = *(uint *)(param_1 + 2);
    *(uint *)(param_1 + 2) = uVar21 + 1;
    if (*(uint *)((longlong)param_1 + 0x14) == uVar21) {
      FUN_1404a00f2(param_1,uVar21);
    }
    iVar28 = (int)param_1[6];
    if (iVar28 == 0) {
      iVar24 = -1;
    }
    else {
      iVar24 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar24 = iVar28 + -1;
      }
      iVar24 = iVar24 >> 5;
    }
    plVar22 = param_1 + 3;
    iVar26 = iVar28 + 1;
    iVar31 = iVar28 + 0x1f;
    if (-1 < iVar28) {
      iVar31 = iVar28;
    }
    if (iVar31 >> 5 == iVar24) {
      *(int *)(param_1 + 6) = iVar26;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x34) <= iVar28) {
        if (iVar28 + 0x20U < 0xa0) {
          iVar26 = 0x80;
          iVar24 = iVar28;
        }
        else {
          uVar25 = iVar28 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar30 = 4;
            if (4 < uVar25) {
              uVar30 = uVar25;
            }
          }
          else {
            uVar30 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
          }
          uVar27 = FUN_144a3809e(uVar30 << 2,0);
          iVar24 = (int)(uVar27 >> 2);
          iVar26 = -0x20;
          if ((int)uVar25 <= iVar24) {
            iVar26 = iVar24 << 5;
          }
          iVar24 = (int)param_1[6];
        }
        *(int *)((longlong)param_1 + 0x34) = iVar26;
        FUN_1446efbd8(plVar22,iVar24);
        iVar26 = (int)param_1[6] + 1;
      }
      iVar24 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar24 = iVar26;
      }
      *(int *)(param_1 + 6) = iVar26;
      if (iVar26 % 0x20 != 0) {
        plVar29 = (longlong *)param_1[5];
        if ((longlong *)param_1[5] == (longlong *)0x0) {
          plVar29 = plVar22;
        }
        bVar23 = -(char)(iVar26 % 0x20);
        *(uint *)((longlong)plVar29 + (longlong)(iVar24 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar29 + (longlong)(iVar24 >> 5) * 4) << (bVar23 & 0x1f)) >>
             (bVar23 & 0x1f);
      }
    }
    lVar33 = (longlong)(int)uVar21;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[5];
    }
    bVar23 = (byte)iVar28 & 0x1f;
    puVar32 = (uint *)((longlong)plVar22 + (longlong)(iVar31 >> 5) * 4);
    *puVar32 = *puVar32 & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
  }
  else {
    uVar21 = *(uint *)(param_1 + 7);
    lVar33 = (longlong)(int)uVar21;
    iVar28 = *(int *)(*param_1 + 4 + lVar33 * 0x40);
    *(int *)(param_1 + 7) = iVar28;
    iVar24 = *(int *)((longlong)param_1 + 0x3c) + -1;
    *(int *)((longlong)param_1 + 0x3c) = iVar24;
    if (iVar24 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar28 * 0x40) = 0xffffffff;
    }
  }
  plVar22 = param_1 + 3;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    plVar22 = (longlong *)param_1[5];
  }
  uVar25 = uVar21 + 0x1f;
  if (-1 < (int)uVar21) {
    uVar25 = uVar21;
  }
  puVar32 = (uint *)((longlong)plVar22 + (longlong)((int)uVar25 >> 5) * 4);
  *puVar32 = *puVar32 | 1 << ((byte)uVar21 & 0x1f);
  lVar4 = *param_1;
  lVar33 = lVar33 * 0x40;
  puVar32 = (uint *)(lVar4 + lVar33);
  uVar5 = *param_3;
  puVar6 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar4 + lVar33) = 0;
  ((undefined8 *)(lVar4 + lVar33))[1] = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar33) = 0;
  puVar3 = (undefined8 *)(lVar4 + 0x18 + lVar33);
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_1404e49fa(puVar32,uVar5);
  *(undefined8 *)(lVar4 + 0x28 + lVar33) = *puVar6;
  lVar7 = puVar6[1];
  *(longlong *)(lVar4 + 0x30 + lVar33) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  puVar32[0xe] = 0xffffffff;
  uVar25 = *puVar32;
  if (1 < (uint)((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c))) {
    plVar22 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[9];
    }
    uVar30 = *(uint *)((longlong)plVar22 + (ulonglong)((int)param_1[10] - 1U & uVar25) * 4);
    if (uVar30 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*param_1 + (longlong)(int)uVar30 * 0x40);
        if (*(uint *)(*param_1 + (longlong)(int)uVar30 * 0x40) == uVar25) {
          plVar22 = *(longlong **)(puVar2 + 0xc);
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            plVar29 = plVar22 + 1;
            *(int *)plVar29 = (int)*plVar29 + -1;
            UNLOCK();
            if ((int)*plVar29 == 0) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar22 + 0x10))();
              }
            }
          }
          if (*(longlong *)(puVar2 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar8 = *puVar32;
          uVar9 = puVar32[1];
          uVar10 = puVar32[2];
          uVar11 = puVar32[3];
          uVar12 = puVar32[4];
          uVar13 = puVar32[5];
          uVar14 = puVar32[6];
          uVar15 = puVar32[7];
          uVar16 = puVar32[8];
          uVar17 = puVar32[9];
          uVar18 = puVar32[10];
          uVar19 = puVar32[0xb];
          *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar32 + 0xc);
          puVar2[8] = uVar16;
          puVar2[9] = uVar17;
          puVar2[10] = uVar18;
          puVar2[0xb] = uVar19;
          puVar2[4] = uVar12;
          puVar2[5] = uVar13;
          puVar2[6] = uVar14;
          puVar2[7] = uVar15;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          FUN_140458984(param_1,uVar21,1);
          cVar20 = '\x01';
          goto LAB_1407445b8;
        }
        uVar30 = puVar2[0xe];
      } while (uVar30 != 0xffffffff);
    }
  }
  cVar20 = '\0';
  uVar30 = uVar21;
LAB_1407445b8:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar20;
  }
  if (cVar20 == '\0') {
    uVar21 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x3c);
    iVar28 = 1;
    if (3 < uVar21) {
      uVar27 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
      lVar33 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      iVar28 = 1 << ((byte)lVar33 & 0x1f);
    }
    if (((int)uVar21 < 1) || (iVar28 <= (int)param_1[10])) {
      uVar25 = (int)param_1[10] - 1U & uVar25;
      puVar32[0xf] = uVar25;
      plVar22 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar22 = param_1 + 8;
      }
      puVar32[0xe] = *(uint *)((longlong)plVar22 +
                              ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar25) * 4);
      plVar22 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar22 = param_1 + 8;
      }
      *(uint *)((longlong)plVar22 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar25) * 4) =
           uVar30;
    }
    else {
      *(int *)(param_1 + 10) = iVar28;
      FUN_1446eb800(param_1);
    }
  }
  *param_2 = uVar30;
  return param_2;
}



// FUNCTION 140744841 FUN_140744841 body=212 status=ok
// SIG undefined FUN_140744841(void)

byte FUN_140744841(ushort *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar3 = 1;
  if (DAT_14caa6c68 == 0) {
    bVar3 = ((byte)*(undefined4 *)(param_1 + 4) &
             2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] | DAT_14caa6c6c != 0) &
            DAT_14c760ea0 != 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x24);
  bVar4 = 0;
  FUN_1446f470e(local_48,L"FLandscapeFixedGridVertexFactory",0);
  FUN_14099931e(local_40,local_48);
  lVar2 = FUN_140187afe(local_40);
  if ((*(ulonglong *)(param_1 + 0x1c) & 0x100000002) != 0) {
    bVar4 = lVar1 == lVar2 & bVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140744916 FUN_140744916 body=41 status=ok
// SIG undefined FUN_140744916(void)

void FUN_140744916(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    FUN_140744940();
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
  return;
}



// FUNCTION 140744940 FUN_140744940 body=232 status=ok
// SIG undefined FUN_140744940(void)

void FUN_140744940(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  FUN_140744a28(param_1 + 0x1458,(ulonglong)uVar6 | uVar4 << 0x20);
  plVar1 = *(longlong **)(param_1 + 0x14a8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140744a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140744a28 FUN_140744a28 body=114 status=ok
// SIG undefined FUN_140744a28(void)

undefined8 FUN_140744a28(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_140744a9a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140744a9a FUN_140744a9a body=91 status=ok
// SIG undefined FUN_140744a9a(void)

void FUN_140744a9a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140744af6(param_1,param_2,1);
  return;
}



// FUNCTION 140744af6 FUN_140744af6 body=136 status=ok
// SIG undefined FUN_140744af6(void)

void FUN_140744af6(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 140744b8c FUN_140744b8c body=99 status=ok
// SIG undefined FUN_140744b8c(void)

undefined8 * FUN_140744b8c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b346160;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140744bf0 FUN_140744bf0 body=4818 status=ok
// SIG undefined FUN_140744bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140744bf0(longlong *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_3f8 [32];
  code **local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined1 local_3b8;
  undefined1 local_3b0;
  ulonglong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  longlong local_390;
  longlong local_388;
  code *local_380;
  longlong local_378;
  undefined1 local_370 [4];
  undefined1 local_36c;
  code *local_368;
  longlong local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined **local_348;
  code **local_340;
  longlong *local_338;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined4 local_204;
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined **local_198;
  longlong local_190;
  code *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined **local_158;
  code **local_150;
  longlong *local_148;
  code *local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined **local_118;
  longlong *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  plVar17 = param_1 + -6;
  if (0 < (int)param_1[9]) {
    lVar12 = (**(code **)(*param_1 + 0x48))();
    uVar24 = (ulonglong)*(uint *)(param_1 + 9);
    if (lVar12 != 0) {
      if ((int)*(uint *)(param_1 + 9) < 1) goto LAB_14074563e;
      fVar30 = (float)*(double *)(lVar12 + 0x6d0);
      uVar25 = 0;
      do {
        lVar12 = *(longlong *)(param_1[8] + uVar25 * 8);
        if (*(char *)(lVar12 + 6) == '\0') {
          fVar2 = *(float *)(lVar12 + 0xc);
          lVar26 = *(longlong *)(lVar12 + 0x48);
          if (((((lVar26 == 0) || ((*(byte *)(lVar26 + 0x278) & 8) != 0)) &&
               (*(int *)(lVar12 + 0x5c) != 0)) &&
              (((uVar11 = *(uint *)(lVar12 + 0x58), -1 < (int)uVar11 &&
                ((int)uVar11 < DAT_14c9647dc)) &&
               ((plVar19 = (longlong *)
                           ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                plVar19 != (longlong *)0x0 &&
                (((int)plVar19[2] == *(int *)(lVar12 + 0x5c) &&
                 ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))))))) && (*plVar19 != 0)) {
            *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(*plVar19 + 0x74);
          }
          fVar29 = *(float *)(lVar12 + 0x30);
          fVar31 = param_2 * fVar29;
          fVar28 = *(float *)(lVar12 + 0x18) + fVar31;
          *(float *)(lVar12 + 0x18) = fVar28;
          if (((*(char *)(lVar12 + 8) == '\x01') && (0.0 <= fVar28)) ||
             ((0.0 < *(float *)(lVar12 + 0x28) && (*(float *)(lVar12 + 0x28) <= fVar28)))) {
            *(float *)(lVar26 + 0x2c4) = fVar30 - fVar2;
            *(undefined1 *)(lVar26 + 0x2c8) = 1;
            if (*(char *)(lVar12 + 8) == '\x01') {
              plVar19 = *(longlong **)(*(longlong *)(lVar12 + 0x40) + 0x348);
              if ((plVar19 != (longlong *)0x0) &&
                 (cVar9 = (**(code **)(*plVar19 + 0x38))(plVar19,lVar12,fVar30), cVar9 != '\0')) {
                if ((*(int *)(lVar12 + 100) == 0) ||
                   (uVar11 = *(uint *)(lVar12 + 0x60), (int)uVar11 < 0)) {
LAB_140745d06:
                  lVar26 = 0;
                }
                else {
                  lVar26 = 0;
                  if ((int)uVar11 < DAT_14c9647dc) {
                    plVar19 = (longlong *)
                              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                    if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != *(int *)(lVar12 + 100))
                        ) || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_140745d06;
                    lVar26 = *plVar19;
                  }
                }
                if ((((*(int *)(lVar12 + 0x5c) == 0) ||
                     (uVar11 = *(uint *)(lVar12 + 0x58), (int)uVar11 < 0)) ||
                    ((DAT_14c9647dc <= (int)uVar11 ||
                     ((puVar14 = (ulonglong *)
                                 ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                      puVar14 == (ulonglong *)0x0 || ((int)puVar14[2] != *(int *)(lVar12 + 0x5c)))))
                    )) || ((puVar14[1] & 0x10200000) != 0)) {
                  local_368 = (code *)0x0;
                }
                else {
                  local_368 = (code *)*puVar14;
                  if (local_368 != (code *)0x0 && DAT_14c950c29 == 1) {
                    FUN_1456cec3c();
                  }
                }
                local_360 = lVar26;
                if ((lVar26 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                  FUN_1456cec3c(lVar26);
                }
                local_3b0 = *(undefined1 *)(lVar12 + 7);
                local_380 = *(code **)(lVar12 + 0x48);
                local_378 = *(longlong *)(lVar12 + 0x50);
                if (local_378 != 0) {
                  LOCK();
                  *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
                  UNLOCK();
                }
                local_3b8 = 1;
                local_3c0 = CONCAT71(local_3c0._1_7_,1);
                local_3d8 = &local_380;
                local_3d0 = (longlong *)((ulonglong)local_3d0 & 0xffffffffffffff00);
                local_3c8 = lVar12;
                FUN_140746eb6(plVar17,*(undefined8 *)(lVar12 + 0x40),&local_368);
              }
              *(undefined4 *)(lVar12 + 0x18) = 0;
              fVar28 = *(float *)(lVar12 + 0x1c) + fVar31;
              *(float *)(lVar12 + 0x1c) = fVar28;
              if (*(float *)(lVar12 + 0x28) <= fVar28) {
                *(float *)(lVar12 + 0x1c) = fVar28 - *(float *)(lVar12 + 0x28);
                if ((*(int *)(lVar12 + 100) == 0) ||
                   (uVar11 = *(uint *)(lVar12 + 0x60), (int)uVar11 < 0)) {
LAB_140745be7:
                  lVar26 = 0;
                }
                else {
                  lVar26 = 0;
                  if ((int)uVar11 < DAT_14c9647dc) {
                    plVar19 = (longlong *)
                              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                    if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != *(int *)(lVar12 + 100))
                        ) || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_140745be7;
                    lVar26 = *plVar19;
                  }
                }
                if ((((*(int *)(lVar12 + 0x5c) == 0) ||
                     (uVar11 = *(uint *)(lVar12 + 0x58), (int)uVar11 < 0)) ||
                    ((DAT_14c9647dc <= (int)uVar11 ||
                     ((plVar19 = (longlong *)
                                 ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                      plVar19 == (longlong *)0x0 || ((int)plVar19[2] != *(int *)(lVar12 + 0x5c))))))
                    ) || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) {
                  local_390 = 0;
                }
                else {
                  local_390 = *plVar19;
                  if (local_390 != 0 && DAT_14c950c29 == 1) {
                    FUN_1456cec3c();
                  }
                }
                local_388 = lVar26;
                if ((lVar26 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                  FUN_1456cec3c();
                }
                lVar26 = *(longlong *)(lVar12 + 0x48);
                plVar19 = *(longlong **)(lVar12 + 0x50);
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                  UNLOCK();
                }
                lVar21 = *(longlong *)(lVar12 + 0x40);
                if ((*(byte *)(lVar21 + 0x2d0) & 9) == 1) {
                  local_3a0 = (**(code **)(*param_1 + 0x48))(param_1);
                  local_3a8 = uVar24;
                  local_398 = plVar17;
                  if ((lVar26 == 0) || ((*(byte *)(lVar21 + 0x1a8) & 0x40) == 0)) {
                    local_3d8 = (code **)&local_390;
                    local_3d0 = (longlong *)lVar26;
                    FUN_14074c3a4(lVar21,&local_138,&local_1b8,&local_178);
                  }
                  else {
                    local_128 = *(undefined8 *)(lVar26 + 0x1f0);
                    local_138 = *(code **)(lVar26 + 0x1e0);
                    lStack_130 = *(longlong *)(lVar26 + 0x1e8);
                    local_1b8 = *(code **)(lVar26 + 0x200);
                    uStack_1b0 = *(undefined8 *)(lVar26 + 0x208);
                    local_1a8 = *(undefined8 *)(lVar26 + 0x210);
                    local_178 = *(code **)(lVar26 + 0x220);
                    uStack_170 = *(undefined4 *)(lVar26 + 0x228);
                    uStack_16c = *(undefined4 *)(lVar26 + 0x22c);
                    local_168 = *(undefined8 *)(lVar26 + 0x230);
                  }
                  uVar15 = local_3a0;
                  local_3d0 = &local_390;
                  local_368 = (code *)(((ulonglong)local_368 >> 8 & 0xffffff) << 8);
                  uStack_354 = 0;
                  uStack_350 = 0;
                  local_2e8 = 0;
                  uStack_2e0 = 0;
                  local_2d8 = 0;
                  uStack_2d4 = 0;
                  uStack_2d0 = 0;
                  uStack_2cc = 0x3ff00000;
                  local_2c8 = 0;
                  uStack_2c0 = 0;
                  local_2b8 = 0;
                  uStack_2b0 = 0;
                  local_2a8 = 0x3ff0000000000000;
                  uStack_2a0 = 0x3ff0000000000000;
                  local_298 = 0x3ff0000000000000;
                  uStack_290 = 0;
                  local_288 = 0;
                  uStack_280 = 0;
                  local_278 = 0;
                  uStack_274 = 0;
                  uStack_270 = 0;
                  uStack_26c = 0x3ff00000;
                  local_268 = 0;
                  uStack_260 = 0;
                  local_258 = 0;
                  uStack_250 = 0;
                  local_248 = 0x3ff0000000000000;
                  uStack_240 = 0x3ff0000000000000;
                  local_238 = 0x3ff0000000000000;
                  uStack_230 = 0;
                  local_228 = 0;
                  local_220 = 0;
                  local_204 = 0;
                  local_208 = 0;
                  local_218 = 0;
                  uStack_210 = 0;
                  local_3d8 = &local_1b8;
                  local_3c8 = lVar12;
                  local_3c0 = lVar26;
                  (**(code **)(**(longlong **)(lVar21 + 0x348) + 0x10))
                            (*(longlong **)(lVar21 + 0x348),&local_368,local_3a0,&local_138);
                  local_36c = 0;
                  local_3d0 = (longlong *)local_370;
                  local_3d8 = &local_368;
                  FUN_14074bd64(lVar21,uVar15,&local_390);
                  plVar17 = local_398;
                  uVar24 = local_3a8;
                  if (local_218 != 0) {
                    FUN_1400020a8();
                    plVar17 = local_398;
                    uVar24 = local_3a8;
                  }
                }
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = plVar19 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*plVar19)();
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar19 + 0x10))();
                    }
                  }
                }
              }
            }
            else {
              *(float *)(lVar12 + 0x18) = *(float *)(lVar12 + 0x18) - *(float *)(lVar12 + 0x28);
              if ((((0 < *(int *)(lVar12 + 0x38)) &&
                   (lVar26 = *(longlong *)(lVar12 + 0x40), *(longlong *)(lVar26 + 0x348) == 0)) &&
                  (lVar21 = *(longlong *)(lVar12 + 0x48), lVar21 != 0)) &&
                 ((*(char *)(lVar21 + 0xc) == '\x01' && ((longlong)(int)param_1[4] != 0)))) {
                lVar22 = 0;
                do {
                  lVar5 = *(longlong *)(param_1[3] + lVar22);
                  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x198) == lVar12)) &&
                     (*(int *)(lVar5 + 4) == 4)) {
                    if ((*(char *)(lVar5 + 0x39c) == '\0') &&
                       ((undefined4 *)(lVar21 + 8) != (undefined4 *)(lVar5 + 0x398))) {
                      *(undefined4 *)(lVar5 + 0x398) = *(undefined4 *)(lVar21 + 8);
                      *(undefined1 *)(lVar5 + 0x39c) = 1;
                      lVar26 = *(longlong *)(lVar12 + 0x40);
                      lVar21 = *(longlong *)(lVar12 + 0x48);
                    }
                    if ((*(byte *)(lVar26 + 0x1a9) & 2) == 0) {
                      fVar28 = *(float *)(lVar21 + 8);
                    }
                    else {
                      if ((*(int *)(lVar12 + 0x5c) == 0) ||
                         (uVar11 = *(uint *)(lVar12 + 0x58), (int)uVar11 < 0)) {
LAB_140745d93:
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = 0;
                        if ((int)uVar11 < DAT_14c9647dc) {
                          puVar16 = (undefined8 *)
                                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                          if (((puVar16 == (undefined8 *)0x0) ||
                              (*(int *)(puVar16 + 2) != *(int *)(lVar12 + 0x5c))) ||
                             ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) goto LAB_140745d93;
                          uVar15 = *puVar16;
                        }
                      }
                      fVar28 = (float)FUN_14074d5ce(lVar26,uVar15);
                    }
                    *(float *)(lVar5 + 0x398) = fVar28 + *(float *)(lVar5 + 0x398);
                    *(undefined1 *)(lVar5 + 0x39c) = 1;
                    *(int *)(lVar5 + 0x1a0) = *(int *)(lVar5 + 0x1a0) + 1;
                    goto LAB_1407452cd;
                  }
                  lVar22 = lVar22 + 8;
                } while ((longlong)(int)param_1[4] * 8 != lVar22);
              }
              if ((*(int *)(lVar12 + 100) == 0) ||
                 (uVar11 = *(uint *)(lVar12 + 0x60), (int)uVar11 < 0)) {
LAB_140745b4f:
                lVar26 = 0;
              }
              else {
                lVar26 = 0;
                if ((int)uVar11 < DAT_14c9647dc) {
                  plVar19 = (longlong *)
                            ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                  if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != *(int *)(lVar12 + 100)))
                     || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) goto LAB_140745b4f;
                  lVar26 = *plVar19;
                }
              }
              if (((((*(int *)(lVar12 + 0x5c) == 0) ||
                    (uVar11 = *(uint *)(lVar12 + 0x58), (int)uVar11 < 0)) ||
                   (DAT_14c9647dc <= (int)uVar11)) ||
                  ((puVar14 = (ulonglong *)
                              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                   puVar14 == (ulonglong *)0x0 || ((int)puVar14[2] != *(int *)(lVar12 + 0x5c))))) ||
                 ((puVar14[1] & 0x10200000) != 0)) {
                local_368 = (code *)0x0;
              }
              else {
                local_368 = (code *)*puVar14;
                if (local_368 != (code *)0x0 && DAT_14c950c29 == 1) {
                  FUN_1456cec3c();
                }
              }
              local_360 = lVar26;
              if ((lVar26 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                FUN_1456cec3c(lVar26);
              }
              local_3b0 = *(undefined1 *)(lVar12 + 7);
              local_138 = *(code **)(lVar12 + 0x48);
              lStack_130 = *(longlong *)(lVar12 + 0x50);
              if (lStack_130 != 0) {
                LOCK();
                *(int *)(lStack_130 + 8) = *(int *)(lStack_130 + 8) + 1;
                UNLOCK();
              }
              local_3b8 = 0;
              local_3d0 = (longlong *)((ulonglong)local_3d0 & 0xffffffffffffff00);
              local_3c0 = CONCAT71(local_3c0._1_7_,1);
              local_3d8 = &local_138;
              local_3c8 = lVar12;
              FUN_140746eb6(plVar17,*(undefined8 *)(lVar12 + 0x40),&local_368);
            }
LAB_1407452cd:
            *(float *)(lVar12 + 0x14) = fVar30;
          }
          fVar28 = *(float *)(lVar12 + 0x2c);
          if (0.0 < fVar28) {
            fVar31 = fVar31 + *(float *)(lVar12 + 0x20);
            *(float *)(lVar12 + 0x20) = fVar31;
            if (fVar28 <= fVar31) {
              *(float *)(lVar12 + 0x20) = fVar31 - fVar28;
              FUN_1457413fa(*(undefined8 *)(lVar12 + 0x40),lVar12,(fVar30 - fVar2) * fVar29);
            }
          }
          if (((*(char *)(lVar12 + 6) == '\0') &&
              (fVar29 = *(float *)(lVar12 + 0x24) / fVar29, 0.0 < fVar29)) &&
             (fVar29 < fVar30 - fVar2)) {
            FUN_14074668c(plVar17,lVar12);
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar24);
      uVar24 = (ulonglong)*(uint *)(param_1 + 9);
    }
    if (0 < (int)uVar24) {
      iVar23 = -(int)uVar24;
      do {
        plVar19 = *(longlong **)(param_1[8] + -8 + uVar24 * 8);
        bVar8 = *(byte *)((longlong)plVar19 + 6);
        if (bVar8 == 0) {
          if (*(int *)((longlong)plVar19 + 0x5c) == 0) {
LAB_14074563a:
            bVar27 = false;
          }
          else {
            uVar11 = *(uint *)(plVar19 + 0xb);
            bVar27 = false;
            if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
              lVar12 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != *(int *)((longlong)plVar19 + 0x5c)))
              goto LAB_14074563a;
              bVar27 = (*(uint *)(lVar12 + 8) & 0x10200000) == 0;
            }
          }
          uVar11 = *(uint *)(plVar19 + 0xe);
          iVar10 = *(int *)((longlong)plVar19 + 0x74);
          if (uVar11 == 0) {
            if (iVar10 != 0) {
LAB_140745b70:
              if ((((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) ||
                 ((lVar12 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8),
                  lVar12 == 0 || (*(int *)(lVar12 + 0x10) != iVar10)))) goto LAB_140745bb6;
              bVar27 = (bool)(bVar27 & (*(uint *)(lVar12 + 8) & 0x10200000) == 0);
            }
            if (bVar27) goto LAB_14074561d;
          }
          else if (iVar10 != 0) goto LAB_140745b70;
LAB_140745bb6:
          FUN_14074668c(plVar17,plVar19);
          bVar8 = *(byte *)((longlong)plVar19 + 6);
        }
LAB_14074561d:
        if (((bVar8 & 1) != 0) && ((int)plVar19[7] == 0)) {
          uVar11 = *(uint *)(param_1 + 9);
          if (uVar24 != uVar11) {
            memmove((void *)(param_1[8] + uVar24 * 8 + -8),(void *)(param_1[8] + uVar24 * 8),
                    (longlong)(int)(uVar11 + iVar23) << 3);
            uVar11 = *(uint *)(param_1 + 9);
          }
          *(uint *)(param_1 + 9) = uVar11 - 1;
          *(undefined4 *)(plVar19 + 0x1c) = 0;
          if (plVar19[0x1b] != 0) {
            FUN_1400020a8();
          }
          FUN_14074956a(plVar19 + 0x13);
          if (plVar19[0x11] != 0) {
            FUN_1400020a8();
          }
          if (plVar19[0xf] != 0) {
            FUN_1400020a8();
          }
          plVar7 = (longlong *)plVar19[10];
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar7 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar7)();
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))();
              }
            }
          }
          _DAT_14cb7674c = _DAT_14cb7674c + -1;
          *plVar19 = (longlong)DAT_14cb76740;
          DAT_14cb76740 = plVar19;
        }
        iVar23 = iVar23 + 1;
        bVar27 = 1 < uVar24;
        uVar24 = uVar24 - 1;
      } while (bVar27);
    }
  }
LAB_14074563e:
  lVar12 = (**(code **)(*param_1 + 0x48))(param_1);
  dVar3 = *(double *)(lVar12 + 0x6d0);
  local_380 = (code *)((ulonglong)local_380 & 0xffffffff00000000);
  plVar19 = param_1 + 0xc;
  uVar11 = *(uint *)(param_1 + 0xb);
  uVar13 = 0;
  if (uVar11 != 0) {
    iVar23 = (int)param_1[0xd];
    *(uint *)(param_1 + 0xd) = iVar23 + uVar11;
    if ((uint)(*(int *)((longlong)param_1 + 0x6c) - iVar23) < uVar11) {
      FUN_140746806(plVar19,iVar23);
    }
    FUN_140746919((longlong)iVar23 * 0x3a0 + param_1[0xc],param_1[10],uVar11);
    uVar13 = (undefined4)param_1[0xb];
  }
  FUN_14074662d(param_1[10],uVar13);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_140746180(param_1 + 10);
  }
  plVar7 = param_1 + 3;
  iVar23 = (int)param_1[4];
  if (iVar23 != 0) {
    if (0 < (int)param_1[0xd]) {
      lVar12 = *(longlong *)*plVar7;
      iVar23 = 1;
      do {
        lVar26 = *plVar19;
        if (*(float *)(lVar12 + 0x10) < *(float *)(lVar26 + 0x390) ||
            *(float *)(lVar12 + 0x10) == *(float *)(lVar26 + 0x390)) break;
        if (iVar23 != 1) {
          cVar9 = FUN_140071712(&DAT_14c9a8020,1);
          if (cVar9 != '\0') break;
          lVar26 = *plVar19;
        }
        cVar9 = FUN_140745f74(lVar26);
        if (cVar9 == '\0') break;
        local_380 = (code *)CONCAT44(local_380._4_4_,iVar23);
        FUN_140745ec4(plVar19,0,1);
        iVar23 = iVar23 + 1;
      } while (0 < (int)param_1[0xd]);
      iVar23 = (int)param_1[4];
    }
    if (0 < iVar23) {
      iVar23 = 0;
      do {
        lVar12 = (longlong)iVar23;
        plVar6 = *(longlong **)(*plVar7 + lVar12 * 8);
        if (*(char *)((longlong)plVar6 + 10) == '\0') {
          uVar11 = *(uint *)((longlong)plVar6 + 4);
          if (uVar11 != 6) {
            if ((((int)uVar11 < 2) &&
                (*(float *)(plVar6 + 2) + *(float *)(plVar6[4] + 0xac) < (float)dVar3)) ||
               ((plVar6[0x33] != 0 &&
                ((((((*(int *)((longlong)plVar6 + 0x74) == 0 ||
                     (uVar4 = *(uint *)(plVar6 + 0xe), (int)uVar4 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar4)) ||
                   ((plVar20 = (longlong *)
                               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                    plVar20 == (longlong *)0x0 ||
                    ((int)plVar20[2] != *(int *)((longlong)plVar6 + 0x74))))) ||
                  ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) ||
                 (((lVar26 = *plVar20, lVar26 == 0 || ((*(uint *)(lVar26 + 8) >> 0x1e & 1) != 0)) ||
                  (((*(byte *)(lVar26 + 0x65) & 2) != 0 ||
                   (((*(uint *)(lVar26 + 8) >> 0x1e & 1) != 0 ||
                    ((*(byte *)(lVar26 + 0x348) & 2) != 0)))))))))))) {
              if (((int)local_380 == 0) || (cVar9 = FUN_140071712(&DAT_14c9a8020,1), cVar9 == '\0'))
              {
                local_168 = 0;
                local_158 = &PTR_LAB_14b3f61b0;
                local_150 = &local_380;
                local_178 = FUN_143cfde98;
                local_148 = plVar17;
                FUN_14074961e(plVar6,0,&local_178);
              }
            }
            else {
              if ((uVar11 < 7) && ((0x74U >> (uVar11 & 0x1f) & 1) != 0)) {
                if (((int)local_380 == 0) || (cVar9 = FUN_140071712(&DAT_14c9a8020), cVar9 == '\0'))
                {
                  local_358 = 0;
                  uStack_354 = 0;
                  local_348 = &PTR_LAB_14b3f61b0;
                  local_340 = &local_380;
                  local_368 = FUN_143cfde98;
                  local_338 = plVar17;
                  FUN_14074961e(plVar6,1,&local_368);
                }
                uVar11 = *(uint *)((longlong)plVar6 + 4);
              }
              if (((6 < uVar11) || ((0x74U >> (uVar11 & 0x1f) & 1) == 0)) &&
                 ((int)param_1[2] < DAT_14c7638c4)) {
                *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                *(undefined1 *)((longlong)plVar6 + 10) = 1;
                local_128 = 0;
                local_118 = &PTR_LAB_14b3f61d0;
                local_138 = FUN_143cfdf0c;
                local_110 = plVar6;
                FUN_1407461b0(0x4ff);
              }
            }
            if (*(int *)((longlong)plVar6 + 4) != 6) goto LAB_140745720;
          }
          if (plVar6[0x33] != 0) {
            piVar1 = (int *)(plVar6[0x33] + 0x38);
            *piVar1 = *piVar1 + -1;
            (**(code **)(*plVar17 + 0x28))(plVar17,plVar6[0x33],plVar6 + 0x39);
          }
          iVar10 = (int)param_1[4];
          iVar18 = iVar10 - (iVar23 + 1);
          if (iVar18 != 0) {
            memmove((void *)(param_1[3] + lVar12 * 8),(void *)(param_1[3] + lVar12 * 8 + 8),
                    (longlong)iVar18 << 3);
            iVar10 = (int)param_1[4];
          }
          *(int *)(param_1 + 4) = iVar10 + -1;
          FUN_1407460ba(plVar6);
          _DAT_14cb76794 = _DAT_14cb76794 + -1;
          *plVar6 = (longlong)DAT_14cb76788;
          iVar23 = iVar23 + -1;
          DAT_14cb76788 = plVar6;
        }
LAB_140745720:
        iVar23 = iVar23 + 1;
      } while (iVar23 < (int)param_1[4]);
    }
  }
  iVar23 = (int)param_1[0xd];
  while (((0 < iVar23 &&
          (((int)local_380 == 0 || (cVar9 = FUN_140071712(&DAT_14c9a8020,1), cVar9 == '\0')))) &&
         (cVar9 = FUN_140745f74(*plVar19), cVar9 != '\0'))) {
    local_380 = (code *)CONCAT44(local_380._4_4_,(int)local_380 + 1);
    FUN_140745ec4(plVar19,0,1);
    iVar23 = (int)param_1[0xd];
  }
  if ((int)param_1[2] < DAT_14c7638c4) {
    do {
      lVar12 = *(longlong *)param_1[7];
      if (lVar12 == 0) break;
      lVar26 = *(longlong *)(lVar12 + 8);
      lVar21 = param_1[7];
      param_1[7] = lVar12;
      *(undefined8 *)(lVar12 + 8) = 0;
      if (lVar21 != 0) {
        FUN_1400020a8();
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      iVar23 = (int)param_1[4];
      *(uint *)(param_1 + 4) = iVar23 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar23 + 1U) {
        FUN_145741374(plVar7,iVar23);
      }
      *(longlong *)(param_1[3] + (longlong)iVar23 * 8) = lVar26;
      *(undefined1 *)(lVar26 + 10) = 1;
      local_1a8 = 0;
      local_198 = &PTR_LAB_14b3f61f0;
      local_1b8 = FUN_143cfdf88;
      local_190 = lVar26;
      FUN_1407461b0(0x4ff,&local_1b8);
    } while ((int)param_1[2] < DAT_14c7638c4);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140745ec4 FUN_140745ec4 body=175 status=ok
// SIG undefined FUN_140745ec4(void)

void FUN_140745ec4(longlong *param_1,uint param_2,char param_3)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x3a0);
  if (*(longlong *)(*param_1 + 0x350 + (longlong)(int)param_2 * 0x3a0) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x370);
    if (*(longlong **)((longlong)_Dst + 0x360) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x360);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)((longlong)_Dst + 0x330) != 0) {
    FUN_1400020a8();
  }
  FUN_1403dfdc4(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x3a0),(longlong)(int)(~param_2 + iVar1) * 0x3a0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 == '\x01') {
    FUN_14074676a(param_1);
    return;
  }
  return;
}



// FUNCTION 140745f74 FUN_140745f74 body=325 status=ok
// SIG undefined FUN_140745f74(void)

ulonglong FUN_140745f74(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*param_1 != 0) && ((*(uint *)(*param_1 + 8) >> 0x1e & 1) == 0)) {
    plVar2 = (longlong *)FUN_1405473b6();
    if (plVar2 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x128))(plVar2,param_1);
      if ((char)param_1[0x69] == '\x01') {
        (**(code **)(*plVar2 + 0x138))(plVar2,(char)param_1[0x68],param_1 + 0x62);
        if (param_1[1] == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)param_1[2];
        }
        (**(code **)(*plVar4 + 0x88))
                  (plVar4,*(undefined4 *)((longlong)param_1 + 0x344),plVar2,param_1 + 0x62);
      }
      else {
        if (param_1[1] == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)param_1[2];
        }
        (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined4 *)((longlong)param_1 + 0x344),plVar2);
      }
      pcVar1 = (code *)param_1[0x6a];
      if (pcVar1 != (code *)0x0) {
        plVar4 = param_1 + 0x6e;
        if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
          plVar4 = (longlong *)param_1[0x6c];
        }
        local_38 = param_1;
        uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
        (*pcVar1)(uVar3,plVar2,&local_38);
      }
      FUN_14025a2c6(plVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407460ba FUN_1407460ba body=198 status=ok
// SIG undefined FUN_1407460ba(void)

void FUN_1407460ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x39c) == '\x01') {
    *(undefined1 *)(param_1 + 0x39c) = 0;
  }
  if (*(char *)(param_1 + 0x394) == '\x01') {
    *(undefined1 *)(param_1 + 0x394) = 0;
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  FUN_14121cbdb(*(undefined8 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1d0));
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_14069cf61(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 400);
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
                    /* WARNING: Could not recover jumptable at 0x000140746175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140746180 FUN_140746180 body=48 status=ok
// SIG undefined FUN_140746180(void)

void FUN_140746180(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x3a0,0x10);
  }
  return;
}



// FUNCTION 1407461b0 FUN_1407461b0 body=1148 status=ok
// SIG undefined FUN_1407461b0(void)

void FUN_1407461b0(undefined4 param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_68 [40];
  char *local_40;
  code *local_38;
  char **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar16 = (uint *)*puVar3;
  if (puVar16 != (uint *)0x0) goto LAB_14074626d;
  do {
    uVar4 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar4 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar4 | 1;
      __tlregdtor(&LAB_142733bf0);
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar15 = *(undefined4 **)(lVar5 + 0x310);
    *(undefined8 *)(lVar5 + 0x310) = 0;
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar15 = 0xffffffff;
    *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
    puVar15[0x12] = 0;
    *puVar3 = puVar15;
    FUN_140217a48(puVar3);
    puVar16 = (uint *)*puVar3;
LAB_14074626d:
    uVar20 = *(longlong *)(puVar16 + 0x10) + 0xf;
    while( true ) {
      puVar21 = (undefined8 *)(uVar20 & 0xfffffffffffffff0);
      if (puVar21 + 0x20 <= puVar16 + 0x4000) {
        *(undefined8 **)(puVar16 + 0x10) = puVar21 + 0x20;
        puVar16[0x12] = puVar16[0x12] + 1;
        puVar21[1] = &DAT_100000001;
        puVar21[2] = 0;
        *(undefined4 *)(puVar21 + 3) = 0;
        *(undefined4 *)(puVar21 + 4) = 0xffffffff;
        puVar21[6] = 0;
        puVar21[7] = 0x100000000;
        *(undefined1 *)(puVar21 + 8) = 1;
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        puVar21[0xf] = 0;
        puVar21[0x10] = 0xe800000000000020;
        puVar21[0x12] = 0;
        puVar21[0x13] = 0x100000000;
        *(undefined2 *)(puVar21 + 0x14) = 0;
        *puVar21 = FBaseGraphTask::vftable;
        LOCK();
        bVar22 = *(char *)(puVar21 + 8) == '\x01';
        if (bVar22) {
          *(char *)(puVar21 + 8) = '\0';
        }
        UNLOCK();
        if (bVar22) goto LAB_140746353;
        pcVar2 = (char *)(puVar21 + 8);
        cVar13 = *pcVar2;
        goto LAB_1407465db;
      }
      *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
      LOCK();
      uVar4 = *puVar16;
      *puVar16 = *puVar16 + puVar16[0x12] + 1;
      UNLOCK();
      if ((uVar4 ^ puVar16[0x12]) != 0xffffffff) break;
      puVar16 = (uint *)*puVar3;
      *puVar16 = 0xffffffff;
      *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
      puVar16[0x12] = 0;
      *puVar3 = puVar16;
      uVar20 = (longlong)puVar16 + 0x67;
    }
  } while( true );
  while( true ) {
    LOCK();
    cVar13 = *pcVar2;
    bVar22 = cVar13 == '\x01';
    if (bVar22) {
      *pcVar2 = '\0';
      cVar13 = '\x01';
    }
    UNLOCK();
    if (bVar22) break;
LAB_1407465db:
    if (cVar13 != '\x01') {
      local_30 = &local_40;
      local_38 = FUN_1400e502e;
      local_40 = pcVar2;
      FUN_14008cf08();
      break;
    }
  }
LAB_140746353:
  *puVar21 = &PTR_FUN_149dfff00;
  *(undefined4 *)(puVar21 + 0x16) = param_1;
  puVar21[0x18] = *param_2;
  puVar21[0x1a] = param_2[2];
  param_2[2] = 0;
  lVar5 = param_2[4];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar10 = param_2[5];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar11 = param_2[7];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar21 + 0x1e) = (int)param_2[6];
  *(undefined4 *)((longlong)puVar21 + 0xf4) = uVar8;
  *(int *)(puVar21 + 0x1f) = (int)lVar11;
  *(undefined4 *)((longlong)puVar21 + 0xfc) = uVar9;
  *(int *)(puVar21 + 0x1c) = (int)lVar5;
  *(undefined4 *)((longlong)puVar21 + 0xe4) = uVar6;
  *(int *)(puVar21 + 0x1d) = (int)lVar10;
  *(undefined4 *)((longlong)puVar21 + 0xec) = uVar7;
  if (puVar21[0x18] != 0) {
    *param_2 = 0;
  }
  uVar4 = *(uint *)(puVar21 + 0x16);
  if (((ulonglong)uVar4 & 0xff) == 0xff) {
    uVar14 = uVar4 >> 10 & 3;
    iVar18 = 0;
    if ((uVar4 >> 9 & 1) == 0 || uVar14 < 2) {
      uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
      iVar18 = 0;
    }
    else {
      uVar20 = 2;
    }
  }
  else {
    iVar18 = (uVar4 >> 7 & 2 | uVar4 >> 9 & 1) +
             *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar4 & 0xff) * 4);
    uVar20 = 5;
  }
  if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
  }
  puVar21[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar21[9] = puVar21;
  puVar21[10] = puVar21;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar12 = 1;
    if ((char)uVar20 != '\x06') {
      uVar12 = uVar20;
    }
    uVar20 = uVar12;
    uVar17 = 0;
  }
  else {
    if ((char)uVar20 == '\x06') {
      uVar20 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    uVar17 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar21[0xf] = uVar17;
  puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
  *(int *)((longlong)puVar21 + 0x1c) = iVar18;
  if (puVar21 == (undefined8 *)0x0) {
    local_38 = (code *)CONCAT71(local_38._1_7_,1);
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
    UNLOCK();
    local_38 = (code *)CONCAT71(local_38._1_7_,1);
    FUN_1447439e4(puVar21);
    LOCK();
    piVar1 = (int *)(puVar21 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar21)(puVar21,1);
    }
  }
  if (*param_2 != 0) {
    plVar19 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar19 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14074662d FUN_14074662d body=94 status=ok
// SIG undefined FUN_14074662d(void)

void FUN_14074662d(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x370);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-8] != 0) {
        FUN_1400020a8();
      }
      FUN_1403dfdc4(plVar2 + -0x6e);
      plVar2 = plVar2 + 0x74;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14074668c FUN_14074668c body=221 status=ok
// SIG undefined FUN_14074668c(void)

void FUN_14074668c(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_2 + 6) == '\0') {
    *(undefined1 *)((longlong)param_2 + 6) = 1;
    if (*(char *)((longlong)param_2 + 5) == '\x01') {
      FUN_14654a5f6(&local_30,2);
      if (local_30 != 0) {
        *(int *)(local_30 + 0x10) = *param_2 << 0x10;
        local_40 = local_30;
        local_38 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        uVar3 = (**(code **)(param_1[6] + 0x48))(param_1 + 6);
        FUN_140586e9a(uVar3,&local_40);
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
    }
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14074676a FUN_14074676a body=156 status=ok
// SIG undefined FUN_14074676a(void)

void FUN_14074676a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x3a0)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x3a0,0x10);
      uVar3 = uVar3 / 0x3a0;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x3a0,0x10);
    }
  }
  return;
}



// FUNCTION 140746806 FUN_140746806 body=274 status=ok
// SIG undefined FUN_140746806(void)

void FUN_140746806(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x3a0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x3a0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140746919 FUN_140746919 body=322 status=ok
// SIG undefined FUN_140746919(void)

void FUN_140746919(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  lVar10 = 0;
  do {
    FUN_140749074(param_1 + lVar10,param_2 + lVar10);
    puVar11 = (undefined8 *)(param_2 + 0x310 + lVar10);
    uVar5 = puVar11[1];
    puVar1 = (undefined8 *)(param_1 + 0x310 + lVar10);
    *puVar1 = *puVar11;
    puVar1[1] = uVar5;
    puVar2 = (undefined4 *)(param_2 + 0x31e + lVar10);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + 0x31e + lVar10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    *(undefined8 *)(param_1 + 0x330 + lVar10) = 0;
    iVar4 = *(int *)(param_2 + 0x338 + lVar10);
    uVar5 = *(undefined8 *)(param_2 + 0x330 + lVar10);
    *(int *)(param_1 + 0x338 + lVar10) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x33c + lVar10) = 0;
    }
    else {
      puVar11 = (undefined8 *)(param_1 + lVar10 + 0x330);
      FUN_144723f1e(puVar11,iVar4,0);
      FUN_144723ff3(*puVar11,uVar5);
    }
    *(undefined1 *)(param_1 + 0x348 + lVar10) = *(undefined1 *)(param_2 + 0x348 + lVar10);
    *(undefined8 *)(param_1 + 0x340 + lVar10) = *(undefined8 *)(param_2 + 0x340 + lVar10);
    lVar6 = *(longlong *)(param_2 + 0x350 + lVar10);
    *(longlong *)(param_1 + 0x350 + lVar10) = lVar6;
    *(undefined8 *)(param_1 + 0x360 + lVar10) = 0;
    if (lVar6 != 0) {
      puVar11 = *(undefined8 **)(param_2 + lVar10 + 0x360);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)(param_2 + lVar10 + 0x370);
      }
      (**(code **)*puVar11)(puVar11,param_1 + lVar10 + 0x360);
    }
    *(undefined8 *)(param_1 + 0x390 + lVar10) = *(undefined8 *)(param_2 + 0x390 + lVar10);
    lVar10 = lVar10 + 0x3a0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140746a5c FUN_140746a5c body=789 status=ok
// SIG undefined FUN_140746a5c(void)

void FUN_140746a5c(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [24];
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined **local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  cVar1 = FUN_140746d72(uVar2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    if (plVar3 == (longlong *)0x0) {
      lVar4 = (**(code **)(*param_1 + 0xa8))(param_1);
      if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 8))) {
        local_1a0 = 0;
        local_19c = 0;
        local_198 = 0;
        local_190 = 0x3002;
        local_188 = 0;
        local_150 = 0;
        local_148 = 0x200000000;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_118 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_110 = DAT_14c8464f0;
        local_f8 = DAT_14c8464f0;
        local_e0 = DAT_14c8464f0;
        local_d8 = 0;
        local_d0 = 0x3006;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_98 = DAT_14c8464f0;
        local_a8 = (undefined4)DAT_14c8464e0;
        uStack_a4 = DAT_14c8464e0._4_4_;
        uStack_a0 = (undefined4)DAT_14c8464e8;
        uStack_9c = DAT_14c8464e8._4_4_;
        local_90 = 0;
        local_8c = 0;
        local_108 = local_120;
        uStack_100 = uStack_118;
        local_f0 = local_120;
        uStack_e8 = uStack_118;
        FUN_1405c5fa2();
        local_80 = &DAT_14cb769e8;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = &PTR_FUN_14b0394b0;
        local_68 = 0x3f800000;
        FUN_14095f42a(&local_1a0,param_2,param_3);
        uVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
        FUN_14095e105(lVar4,uVar2,&local_1a0);
        FUN_141846ab8(&local_1a0);
      }
    }
    else {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
    }
  }
  lVar4 = (**(code **)(*param_3 + 0xf8))(param_3);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar4 == 0) goto LAB_140746b33;
  }
  else {
    FUN_1456cec3c(lVar4);
  }
  uVar2 = FUN_140746dd0();
  plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
  if (plVar3 != (longlong *)0x0 && lVar4 != 0) {
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (lVar4 != 0) {
      uVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
      lVar5 = FUN_1447210f0(uVar2);
      local_1c0 = DAT_14c9abc00;
      if (lVar5 == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = *(undefined4 *)(lVar5 + 0x6f4);
      }
      lVar5 = (**(code **)(*param_3 + 0xa8))(param_3);
      uVar2 = *(undefined8 *)(lVar5 + 0xf0);
      (**(code **)(*param_3 + 0xb0))(param_3,&local_1a0);
      (**(code **)(*param_3 + 200))(param_3,local_1b8);
      local_1c8 = uVar6;
      FUN_1458bf390(lVar4,local_1b8,&local_1a0,uVar2);
    }
  }
LAB_140746b33:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140746d72 FUN_140746d72 body=37 status=ok
// SIG undefined FUN_140746d72(void)

bool FUN_140746d72(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_140746d98();
  if (lVar2 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = FUN_14490d72a(lVar2);
    bVar3 = iVar1 == 3;
  }
  return bVar3;
}



// FUNCTION 140746d98 FUN_140746d98 body=55 status=ok
// SIG undefined FUN_140746d98(void)

undefined8 FUN_140746d98(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 == 0) && (lVar2 = FUN_14485cccc(param_1 + 0x2c), lVar2 == 0)) {
    return 0;
  }
  uVar1 = FUN_1447210f0(lVar2);
  return uVar1;
}



// FUNCTION 140746dd0 FUN_140746dd0 body=228 status=ok
// SIG undefined FUN_140746dd0(void)

longlong FUN_140746dd0(void)

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
  if (DAT_14c9ab770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470f8dcb;
    local_40 = FUN_1462b386f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"ForwardDynamicsInterface",&DAT_14c9ab770,&DAT_1470f8dca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140746eb6 FUN_140746eb6 body=8636 status=ok
// SIG undefined FUN_140746eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140746eb6(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,char param_6,int *param_7,undefined1 param_8,char param_9,
                  char param_10)

{
  code *****pppppcVar1;
  code ******ppppppcVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *****pppppcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 ******ppppppuVar9;
  code ******ppppppcVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  uint uVar28;
  undefined4 *puVar29;
  undefined8 *******pppppppuVar30;
  undefined8 uVar31;
  code *******pppppppcVar32;
  uint *puVar33;
  code *****pppppcVar34;
  byte bVar35;
  longlong lVar36;
  int iVar37;
  bool bVar38;
  undefined4 uVar39;
  int iVar40;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  undefined8 ******local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  wchar_t *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code ******local_2c0;
  code *local_2b8;
  code *local_2b0;
  longlong *local_2a0;
  longlong local_298;
  uint *local_290;
  longlong *local_288;
  uint *local_280;
  code *****local_278;
  code *****local_270;
  code ****local_268;
  code ****local_260;
  undefined8 local_258;
  undefined8 local_248;
  code *local_218;
  undefined8 local_208;
  undefined **local_1f8;
  int *local_1f0;
  undefined8 ******local_1d0;
  longlong local_1c8;
  ushort local_1b8;
  byte local_1b0;
  code ******local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  ushort uStack_190;
  undefined6 uStack_18e;
  byte local_188;
  undefined4 local_180 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  longlong *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 local_cc;
  code ******local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2a0 = param_2;
  local_290 = (uint *)(**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
  if ((local_290 == (uint *)0x0) || (*param_3 == 0)) goto LAB_140748706;
  piVar23 = DAT_14cb76788;
  local_298 = param_1;
  if (DAT_14cb76788 == (int *)0x0) {
    piVar23 = (int *)FUN_140595974(0x7400);
    lVar36 = 0x1f;
    piVar25 = piVar23;
    do {
      piVar24 = piVar25 + 0xe8;
      *(int **)piVar25 = piVar24;
      lVar36 = lVar36 + -1;
      piVar25 = piVar24;
    } while (lVar36 != 0);
    *(int **)piVar24 = DAT_14cb76788;
    _DAT_14cb76790 = _DAT_14cb76790 + 0x20;
  }
  DAT_14cb76788 = *(int **)piVar23;
  _DAT_14cb76794 = _DAT_14cb76794 + 1;
  piVar23[4] = 0;
  piVar23[6] = 0;
  piVar23[7] = 0;
  piVar23[0] = 0;
  piVar23[1] = 0;
  *(undefined8 *)((longlong)piVar23 + 5) = 0;
  *(longlong **)(piVar23 + 8) = local_2a0;
  local_280 = (uint *)(piVar23 + 0x1c);
  memset(local_280,0,0x118);
  piVar23[0x56] = -1;
  piVar23[0x23] = 0x3f800000;
  piVar23[0x4b] = -1;
  piVar23[0x62] = 0;
  piVar23[99] = 0;
  piVar23[100] = 0;
  piVar23[0x65] = 0;
  piVar23[0x65] = 0;
  piVar23[0x66] = 0;
  piVar23[0x67] = 0;
  piVar23[0x68] = 0;
  piVar23[0x6a] = 0;
  piVar23[0x6b] = 0;
  piVar23[0x6c] = 0;
  piVar23[0x6d] = 0;
  piVar23[0x6e] = 0;
  piVar23[0x6f] = 0;
  piVar23[0x70] = 0;
  piVar23[0x71] = 0;
  piVar23[0x72] = 0;
  piVar23[0x73] = 0;
  piVar23[0x74] = 0;
  piVar23[0x75] = 0;
  piVar23[0x76] = 0;
  piVar23[0x77] = -1;
  *(undefined1 *)(piVar23 + 0x78) = 0;
  piVar23[0x79] = 0;
  piVar23[0x7d] = 0;
  piVar23[0x7e] = 0;
  piVar23[0x98] = 0;
  piVar23[0x99] = 0;
  piVar23[0x9a] = 0;
  piVar23[0x9b] = 0;
  piVar23[0x9c] = 0;
  piVar23[0x9d] = 0;
  piVar23[0x9e] = 0;
  piVar23[0x9f] = 0x3ff00000;
  piVar23[0xa0] = 0;
  piVar23[0xa1] = 0;
  piVar23[0xa2] = 0;
  piVar23[0xa3] = 0;
  piVar23[0xa4] = 0;
  piVar23[0xa5] = 0;
  piVar23[0xa6] = 0;
  piVar23[0xa7] = 0;
  piVar23[0xa8] = 0;
  piVar23[0xa9] = 0x3ff00000;
  piVar23[0xaa] = 0;
  piVar23[0xab] = 0x3ff00000;
  piVar23[0xac] = 0;
  piVar23[0xad] = 0x3ff00000;
  piVar23[0xae] = 0;
  piVar23[0xaf] = 0;
  piVar23[0xb0] = 0;
  piVar23[0xb1] = 0;
  piVar23[0xb2] = 0;
  piVar23[0xb3] = 0;
  piVar23[0xb4] = 0;
  piVar23[0xb5] = 0;
  piVar23[0xb6] = 0;
  piVar23[0xb7] = 0x3ff00000;
  piVar23[0xbc] = 0;
  piVar23[0xbd] = 0;
  piVar23[0xbe] = 0;
  piVar23[0xbf] = 0;
  piVar23[0xb8] = 0;
  piVar23[0xb9] = 0;
  piVar23[0xba] = 0;
  piVar23[0xbb] = 0;
  piVar23[0xc0] = 0;
  piVar23[0xc1] = 0x3ff00000;
  piVar23[0xc2] = 0;
  piVar23[0xc3] = 0x3ff00000;
  piVar23[0xc4] = 0;
  piVar23[0xc5] = 0x3ff00000;
  piVar23[0xc6] = 0;
  piVar23[199] = 0;
  piVar23[200] = 0;
  piVar23[0xc9] = 0;
  piVar23[0xca] = 0;
  piVar23[0xd1] = 0;
  *(undefined1 *)(piVar23 + 0xe5) = 0;
  *(undefined1 *)(piVar23 + 0xe7) = 0;
  piVar23[0xcc] = 0;
  piVar23[0xcd] = 0;
  piVar23[0xce] = 0;
  piVar23[0xcf] = 0;
  *(undefined1 *)(piVar23 + 0xd0) = 0;
  DAT_14c7638c8 = DAT_14c7638c8 + 1;
  *piVar23 = DAT_14c7638c8;
  *(undefined1 *)(piVar23 + 2) = param_8;
  *(char *)((longlong)piVar23 + 9) = param_10;
  piVar23[4] = (int)(float)*(double *)(local_290 + 0x1b4);
  *(uint **)(piVar23 + 6) = local_290;
  *(int **)(piVar23 + 0x66) = param_7;
  if (param_7 == (int *)0x0) {
    bVar35 = 1;
  }
  else {
    bVar35 = *(byte *)(param_7 + 1);
    *(byte *)((longlong)piVar23 + 0xb) = bVar35;
    param_7[0xe] = param_7[0xe] + 1;
  }
  lVar36 = *param_5;
  lVar18 = param_5[1];
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  plVar27 = *(longlong **)(piVar23 + 100);
  *(longlong *)(piVar23 + 0x62) = lVar36;
  *(longlong *)(piVar23 + 100) = lVar18;
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar27 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar27)(plVar27);
      LOCK();
      piVar25 = (int *)((longlong)plVar27 + 0xc);
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (*piVar25 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  plVar27 = (longlong *)(piVar23 + 0x62);
  if ((char)piVar23[0xe7] == '\x01') {
    *(undefined1 *)(piVar23 + 0xe7) = 0;
  }
  if (*plVar27 == 0) {
    FUN_1405fab15(&local_178);
    pppppcVar1 = uStack_170;
    if (plVar27 != &local_178) {
      *(undefined ***)(piVar23 + 0x62) = local_178;
      local_178 = (undefined **)0x0;
      pppppcVar34 = *(code ******)(piVar23 + 100);
      if (uStack_170 != pppppcVar34) {
        uStack_170 = (code *****)0x0;
        *(code ******)(piVar23 + 100) = pppppcVar1;
        if (pppppcVar34 != (code *****)0x0) {
          LOCK();
          pppppcVar1 = pppppcVar34 + 1;
          *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
          UNLOCK();
          if (*(int *)pppppcVar1 == 0) {
            (*(code *)**pppppcVar34)(pppppcVar34);
            LOCK();
            piVar25 = (int *)((longlong)pppppcVar34 + 0xc);
            *piVar25 = *piVar25 + -1;
            UNLOCK();
            if (*piVar25 == 0) {
              (*(code *)(*pppppcVar34)[2])(pppppcVar34);
            }
          }
        }
      }
    }
    pppppcVar1 = uStack_170;
    if (uStack_170 != (code *****)0x0) {
      LOCK();
      pppppcVar34 = uStack_170 + 1;
      *(int *)pppppcVar34 = *(int *)pppppcVar34 + -1;
      UNLOCK();
      if (*(int *)pppppcVar34 == 0) {
        (*(code *)**uStack_170)(uStack_170);
        LOCK();
        piVar25 = (int *)((longlong)pppppcVar1 + 0xc);
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (*piVar25 == 0) {
          (*(code *)(*pppppcVar1)[2])(pppppcVar1);
        }
      }
    }
  }
  FUN_143d08626(local_280,param_3);
  puVar33 = (uint *)(piVar23 + 0x20);
  if (param_4 == 0) {
    piVar23[0x20] = 0;
    piVar23[0x21] = 0;
  }
  else {
    uVar13 = *(uint *)(param_4 + 0xc);
    *puVar33 = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar36 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar36 = 0;
    }
    iVar40 = *(int *)(lVar36 + 0x10);
    if (*(int *)(lVar36 + 0x10) == 0) {
      LOCK();
      iVar40 = DAT_14c964868 + 1;
      UNLOCK();
      iVar37 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar40;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar37);
      }
      LOCK();
      iVar40 = *(int *)(lVar36 + 0x10);
      bVar38 = iVar40 == 0;
      if (bVar38) {
        *(int *)(lVar36 + 0x10) = iVar37;
        iVar40 = 0;
      }
      UNLOCK();
      if (bVar38) {
        iVar40 = iVar37;
      }
    }
    piVar23[0x21] = iVar40;
    if ((*param_5 == 0) || (lVar36 = FUN_14485cccc(*param_5 + 0x158), lVar36 == 0)) {
      FUN_140871de8(piVar23 + 0x50,param_4);
    }
    else {
      memcpy(piVar23 + 0x22,(void *)(*param_5 + 0xa0),0x100);
    }
  }
  plVar19 = local_2a0;
  if (param_3[1] == 0) {
    lVar36 = *param_3;
    if (lVar36 == 0) {
LAB_140747304:
      if (*(longlong *)(*param_3 + 0x1b0) != 0) {
        uVar13 = *(uint *)(*(longlong *)(*param_3 + 0x1b0) + 0xc);
        goto LAB_14074731b;
      }
      piVar23[0x1e] = 0;
      iVar40 = 0;
    }
    else {
      if (DAT_14caf64b8 == 0) {
        local_2c0 = (code ******)&local_178;
        local_178 = (undefined **)FUN_141030f22;
        local_2b0 = FUN_14081d0ea;
        local_2b8 = FUN_142b4754c;
        local_2c8 = &LAB_147c45ce0;
        local_2d0 = (code *)&LAB_1463f1ff4;
        local_2d8 = L"Game";
        local_2e0 = 0x4000000000;
        local_2e8 = CONCAT44(local_2e8._4_4_,0x10000004);
        local_2f0 = (undefined8 ******)CONCAT44(local_2f0._4_4_,8);
        local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,0x428);
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(*(longlong *)(lVar36 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar36 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30))
      goto LAB_140747304;
      uVar13 = *(uint *)(lVar36 + 0xc);
LAB_14074731b:
      piVar23[0x1e] = uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar36 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar36 = 0;
      }
      iVar40 = *(int *)(lVar36 + 0x10);
      if (*(int *)(lVar36 + 0x10) == 0) {
        LOCK();
        iVar40 = DAT_14c964868 + 1;
        UNLOCK();
        iVar37 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar40;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar37);
        }
        LOCK();
        iVar40 = *(int *)(lVar36 + 0x10);
        bVar38 = iVar40 == 0;
        if (bVar38) {
          *(int *)(lVar36 + 0x10) = iVar37;
          iVar40 = 0;
        }
        UNLOCK();
        if (bVar38) {
          iVar40 = iVar37;
        }
      }
    }
    piVar23[0x1f] = iVar40;
  }
  pppppppuVar30 = (undefined8 *******)*param_5;
  if ((pppppppuVar30 == (undefined8 *******)0x0) ||
     ((param_10 == '\0' && ((param_7 == (int *)0x0 || ((*(byte *)(plVar19 + 0x35) & 0x40) == 0))))))
  {
    local_2f8 = param_3;
    local_2f0 = pppppppuVar30;
    FUN_14074c3a4(plVar19,piVar23 + 10,piVar23 + 0x10,piVar23 + 0x16);
  }
  else {
    *(undefined8 *******)(piVar23 + 0xe) = pppppppuVar30[0x3e];
    ppppppuVar9 = pppppppuVar30[0x3d];
    *(undefined8 *******)(piVar23 + 10) = pppppppuVar30[0x3c];
    *(undefined8 *******)(piVar23 + 0xc) = ppppppuVar9;
    lVar36 = *param_5;
    *(undefined8 *)(piVar23 + 0x14) = *(undefined8 *)(lVar36 + 0x210);
    uVar15 = *(undefined8 *)(lVar36 + 0x208);
    *(undefined8 *)(piVar23 + 0x10) = *(undefined8 *)(lVar36 + 0x200);
    *(undefined8 *)(piVar23 + 0x12) = uVar15;
    lVar36 = *param_5;
    *(undefined8 *)(piVar23 + 0x1a) = *(undefined8 *)(lVar36 + 0x230);
    iVar40 = *(int *)(lVar36 + 0x224);
    iVar37 = *(int *)(lVar36 + 0x228);
    iVar8 = *(int *)(lVar36 + 0x22c);
    piVar23[0x16] = *(int *)(lVar36 + 0x220);
    piVar23[0x17] = iVar40;
    piVar23[0x18] = iVar37;
    piVar23[0x19] = iVar8;
  }
  if (((param_9 == '\0') && ((*(byte *)(plVar19 + 0x5a) & 1) != 0)) &&
     ((byte)(~bVar35 & (*(byte *)(plVar19 + 0x5a) & 8) >> 3) == 0)) {
    *(undefined1 *)(piVar23 + 3) = 1;
  }
  if ((*(char *)((longlong)plVar19 + 0xa9) == '\0') &&
     ((*(char *)(*plVar27 + 0xc) != '\x01' || ((*(byte *)((longlong)plVar19 + 0x1a9) & 2) != 0)))) {
    uVar39 = FUN_14074d5ce(plVar19,*param_3,*param_5);
    lVar36 = *plVar27;
    *(undefined4 *)(lVar36 + 8) = uVar39;
    *(undefined1 *)(lVar36 + 0xc) = 1;
  }
  uVar39 = FUN_14187bb14(plVar19,*param_3,*param_5);
  lVar36 = *plVar27;
  *(undefined4 *)(lVar36 + 0x1c8) = uVar39;
  *(undefined1 *)(lVar36 + 0x1cc) = 1;
  uVar39 = FUN_14187bbf0(plVar19,*param_3,*param_5);
  lVar36 = *plVar27;
  *(undefined4 *)(lVar36 + 0x1d0) = uVar39;
  *(undefined1 *)(lVar36 + 0x1d4) = 1;
  if (bVar35 != 0) {
    local_1a8 = (code ******)((ulonglong)local_1a8 & 0xffffffffffffff00);
    local_180[0] = 0;
    FUN_140cd71f8(&local_178,*plVar27 + 0x2d8,&DAT_14cb76738,&local_1a8);
    FUN_140cd739a(plVar19 + 0x53,&local_178);
    local_178 = &PTR_LAB_14b3f62b0;
    FUN_1448173f8(&local_148);
    if ((char)uStack_170 != '\0') {
      if ((char)uStack_170 == '\x01') {
        local_168 = (longlong *)0x0;
      }
      else if (((char)uStack_170 == '\x03') && (local_160 != (longlong *)0x0)) {
        LOCK();
        piVar25 = (int *)((longlong)local_160 + 0xc);
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (*piVar25 == 0) {
          (**(code **)(*local_160 + 0x10))();
        }
      }
      uStack_170 = (code *****)((ulonglong)uStack_170 & 0xffffffffffffff00);
    }
    FUN_1448173f8(local_180);
    if (((char)local_1a8 == '\x03') && (local_198 != (longlong *)0x0)) {
      LOCK();
      piVar25 = (int *)((longlong)local_198 + 0xc);
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (*piVar25 == 0) {
        (**(code **)(*local_198 + 0x10))();
      }
    }
    plVar19 = local_2a0;
    plVar16 = (longlong *)*param_3;
    if (plVar16 != (longlong *)0x0) {
      uVar15 = FUN_1409d2e5a();
      plVar16 = (longlong *)(**(code **)(*plVar16 + 0x288))(plVar16,uVar15);
      if (plVar16 != (longlong *)0x0) {
        uVar15 = FUN_1409d2e5a();
        plVar17 = (longlong *)FUN_144718840(plVar16,uVar15);
        if (plVar17 != (longlong *)0x0 && plVar16 != plVar17) {
          lVar18 = (**(code **)(*plVar17 + 8))(plVar17);
          lVar36 = *plVar27;
          if (lVar18 == 0) {
            *(undefined4 *)(lVar36 + 0x2d0) = 0;
            iVar40 = 0;
          }
          else {
            uVar13 = *(uint *)(lVar18 + 0xc);
            *(uint *)(lVar36 + 0x2d0) = uVar13;
            if ((int)uVar13 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            iVar40 = *(int *)(lVar18 + 0x10);
            if (*(int *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar40 = DAT_14c964868 + 1;
              UNLOCK();
              iVar37 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar40;
              if (bVar38) {
                local_288 = (longlong *)CONCAT44(local_288._4_4_,iVar37);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar37);
                iVar37 = (int)local_288;
              }
              LOCK();
              iVar40 = *(int *)(lVar18 + 0x10);
              bVar38 = iVar40 == 0;
              if (bVar38) {
                *(int *)(lVar18 + 0x10) = iVar37;
                iVar40 = 0;
              }
              UNLOCK();
              if (bVar38) {
                iVar40 = iVar37;
              }
            }
          }
          *(int *)(lVar36 + 0x2d4) = iVar40;
          plVar19 = (longlong *)(**(code **)(*plVar17 + 0x10))(plVar17);
          local_1a8 = (code ******)((ulonglong)local_1a8 & 0xffffffffffffff00);
          local_180[0] = 0;
          FUN_140cd71f8(&local_178,*plVar27 + 0x2d8,&DAT_14cb76730,&local_1a8);
          (**(code **)(*plVar19 + 8))(plVar19,&local_178,2);
          local_178 = &PTR_LAB_14b3f62b0;
          FUN_1448173f8(&local_148);
          plVar19 = local_2a0;
          if ((char)uStack_170 != '\0') {
            if ((char)uStack_170 == '\x01') {
              local_168 = (longlong *)0x0;
            }
            else if (((char)uStack_170 == '\x03') && (local_160 != (longlong *)0x0)) {
              LOCK();
              piVar25 = (int *)((longlong)local_160 + 0xc);
              *piVar25 = *piVar25 + -1;
              UNLOCK();
              if (*piVar25 == 0) {
                (**(code **)(*local_160 + 0x10))();
              }
            }
            uStack_170 = (code *****)((ulonglong)uStack_170 & 0xffffffffffffff00);
          }
          FUN_1448173f8(local_180);
          if (((char)local_1a8 == '\x03') && (local_198 != (longlong *)0x0)) {
            LOCK();
            piVar25 = (int *)((longlong)local_198 + 0xc);
            *piVar25 = *piVar25 + -1;
            UNLOCK();
            if (*piVar25 == 0) {
              (**(code **)(*local_198 + 0x10))();
            }
          }
        }
      }
      plVar16 = (longlong *)*param_3;
      if (plVar16 != (longlong *)0x0) {
        uVar15 = FUN_141419b90();
        plVar16 = (longlong *)(**(code **)(*plVar16 + 0x288))(plVar16,uVar15);
        if (plVar16 != (longlong *)0x0) {
          uVar15 = FUN_141419b90();
          plVar17 = (longlong *)FUN_144718840(plVar16,uVar15);
          if (plVar17 != (longlong *)0x0 && plVar16 != plVar17) {
            local_178 = (undefined **)0x0;
            uStack_170 = (code *****)0x0;
            plVar16 = (longlong *)(**(code **)(*plVar17 + 0x10))(plVar17);
            (**(code **)(*plVar16 + 0x28))(plVar16,&local_178);
            if (0 < (int)uStack_170) {
              FUN_1408da3b0(*plVar27 + 0x280,&local_178);
            }
            FUN_1403e0ff1(local_178,(int)uStack_170);
            if ((code ******)local_178 != (code ******)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  local_288 = plVar27;
  if ((char)piVar23[3] == '\x01') {
    if (*(char *)(*param_5 + 0x274) == '\0') {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
      lVar36 = (ulonglong)((uint)*(ushort *)((longlong)plVar19 + 0x314) * 0x50) + DAT_14c9a6588;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
      local_178 = (undefined **)((ulonglong)local_178 & 0xffffffffffffff00);
      local_150 = (longlong *)((ulonglong)local_150._4_4_ << 0x20);
      FUN_1456bb102(&local_178,*param_3);
      FUN_1448729ea(lVar36,&local_1d0,&local_178);
      if (local_1b0 == 3) {
        local_1b0 = 3;
        uVar39 = local_1d0._0_4_;
      }
      else {
        FUN_1400b56fe(&local_1a8,&local_1d0,3);
        if (local_188 == 0) {
          uVar39 = 0x40a00000;
        }
        else {
          uVar39 = local_1a8._0_4_;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_188 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppppppcVar32 = &local_1a8;
          if (0x18 < uStack_190) {
            pppppppcVar32 = (code *******)local_1a8;
          }
          (*pcVar6)(pppppppcVar32);
          plVar27 = local_288;
        }
        if (0x18 < uStack_190) {
          FUN_1400020a8(local_1a8);
        }
      }
      plVar19 = local_2a0;
      lVar36 = *plVar27;
      *(undefined4 *)(lVar36 + 0x270) = uVar39;
      *(undefined1 *)(lVar36 + 0x274) = 1;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1b0 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppppppuVar30 = &local_1d0;
        if (0x18 < local_1b8) {
          pppppppuVar30 = (undefined8 *******)local_1d0;
        }
        (*pcVar6)(pppppppuVar30);
      }
      if (0x18 < local_1b8) {
        FUN_1400020a8(local_1d0);
      }
      FUN_1448173f8(&local_150);
      if (((char)local_178 == '\x03') && (local_168 != (longlong *)0x0)) {
        LOCK();
        piVar25 = (int *)((longlong)local_168 + 0xc);
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (*piVar25 == 0) {
          (**(code **)(*local_168 + 0x10))();
        }
      }
    }
    iVar40 = FUN_14074e060(plVar19,*param_3,*(undefined8 *)(piVar23 + 0x62));
    piVar23[0xe4] = iVar40;
    *(undefined1 *)(piVar23 + 0xe5) = 1;
  }
  lVar36 = *param_5;
  bVar11 = *(byte *)(plVar19 + 0x15) & 1;
  if ((lVar36 != 0) && (*(char *)(lVar36 + 0x27a) == '\x01')) {
    bVar11 = *(byte *)(lVar36 + 0x279);
  }
  if (((bVar11 == 0 && param_10 == '\0') && ((plVar19[0x69] != 0 & bVar35) == 1)) &&
     (iVar40 = FUN_14490d72a(local_290), iVar40 - 1U < 2)) {
    FUN_140b4b994(&local_178,1);
    pppppcVar1 = uStack_170;
    ppppppcVar10 = (code ******)local_178;
    if (uStack_170 != (code *****)0x0) {
      LOCK();
      *(int *)(uStack_170 + 1) = *(int *)(uStack_170 + 1) + 1;
      UNLOCK();
      if (uStack_170 != (code *****)0x0) {
        LOCK();
        pppppcVar34 = uStack_170 + 1;
        *(int *)pppppcVar34 = *(int *)pppppcVar34 + -1;
        UNLOCK();
        if (*(int *)pppppcVar34 == 0) {
          (*(code *)**uStack_170)(uStack_170);
          LOCK();
          piVar25 = (int *)((longlong)pppppcVar1 + 0xc);
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (*piVar25 == 0) {
            (*(code *)(*pppppcVar1)[2])(pppppcVar1);
          }
        }
      }
    }
    if (ppppppcVar10 != (code ******)0x0) {
      if (param_7 != (int *)0x0) {
        *(int *)(ppppppcVar10 + 2) = *param_7 << 0x10;
        *(undefined1 *)((longlong)ppppppcVar10 + 9) = 1;
        *(undefined1 *)((longlong)param_7 + 5) = 1;
      }
      lVar36 = *param_3;
      if ((lVar36 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar36);
LAB_1407478fb:
        uVar13 = *(uint *)(lVar36 + 0xc);
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar36 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar36 = 0;
        }
        uVar14 = *(uint *)(lVar36 + 0x10);
        if (*(uint *)(lVar36 + 0x10) == 0) {
          LOCK();
          iVar40 = DAT_14c964868 + 1;
          UNLOCK();
          uVar28 = DAT_14c964868 + 1;
          bVar38 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar40;
          if (bVar38) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar28);
          }
          LOCK();
          uVar14 = *(uint *)(lVar36 + 0x10);
          bVar38 = uVar14 == 0;
          if (bVar38) {
            *(uint *)(lVar36 + 0x10) = uVar28;
            uVar14 = 0;
          }
          UNLOCK();
          if (bVar38) {
            uVar14 = uVar28;
          }
        }
        uVar20 = (ulonglong)uVar14;
        plVar19 = local_2a0;
      }
      else {
        if (lVar36 != 0) goto LAB_1407478fb;
        uVar13 = 0;
        uVar20 = 0;
      }
      ppppppcVar10[6] = (code *****)((ulonglong)uVar13 | uVar20 << 0x20);
      lVar36 = param_3[1];
      if ((lVar36 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar36);
LAB_140747967:
        uVar13 = *(uint *)(lVar36 + 0xc);
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar36 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar36 = 0;
        }
        uVar14 = *(uint *)(lVar36 + 0x10);
        if (*(uint *)(lVar36 + 0x10) == 0) {
          LOCK();
          iVar40 = DAT_14c964868 + 1;
          UNLOCK();
          uVar28 = DAT_14c964868 + 1;
          bVar38 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar40;
          if (bVar38) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar28);
          }
          LOCK();
          uVar14 = *(uint *)(lVar36 + 0x10);
          bVar38 = uVar14 == 0;
          if (bVar38) {
            *(uint *)(lVar36 + 0x10) = uVar28;
            uVar14 = 0;
          }
          UNLOCK();
          if (bVar38) {
            uVar14 = uVar28;
          }
        }
        uVar20 = (ulonglong)uVar14;
        plVar19 = local_2a0;
      }
      else {
        if (lVar36 != 0) goto LAB_140747967;
        uVar13 = 0;
        uVar20 = 0;
      }
      ppppppcVar10[7] = (code *****)((ulonglong)uVar13 | uVar20 << 0x20);
      puVar29 = &DAT_14c9485f0;
      if ((undefined4 *)plVar19[1] != (undefined4 *)0x0) {
        puVar29 = (undefined4 *)plVar19[1];
      }
      if (DAT_14c947fe0 == 0) {
        lVar36 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar36);
        DAT_14c947fe0 = lVar36;
      }
      FUN_140045924(DAT_14c947fe0,&local_260,puVar29,1);
      if (ppppppcVar10[3] != (code *****)local_260) {
        ppppppcVar10[5] = (code *****)0x0;
      }
      ppppppcVar10[3] = (code *****)local_260;
      lVar36 = *param_5;
      FUN_1405fab15(&local_178);
      if (lVar36 != 0) {
        (*(code *)*(code *****)((longlong)*local_178 + 8))(local_178,lVar36);
      }
      pppppcVar34 = uStack_170;
      ppppppcVar2 = ppppppcVar10 + 8;
      if (ppppppcVar2 != (code ******)&local_178) {
        ppppppcVar10[8] = (code *****)local_178;
        local_178 = (undefined **)0x0;
        pppppcVar5 = ppppppcVar10[9];
        if (uStack_170 != pppppcVar5) {
          uStack_170 = (code *****)0x0;
          ppppppcVar10[9] = pppppcVar34;
          if (pppppcVar5 != (code *****)0x0) {
            LOCK();
            pppppcVar34 = pppppcVar5 + 1;
            *(int *)pppppcVar34 = *(int *)pppppcVar34 + -1;
            UNLOCK();
            if (*(int *)pppppcVar34 == 0) {
              (*(code *)**pppppcVar5)(pppppcVar5);
              LOCK();
              piVar25 = (int *)((longlong)pppppcVar5 + 0xc);
              *piVar25 = *piVar25 + -1;
              UNLOCK();
              if (*piVar25 == 0) {
                (*(code *)(*pppppcVar5)[2])(pppppcVar5);
              }
            }
          }
        }
      }
      pppppcVar34 = uStack_170;
      if (uStack_170 != (code *****)0x0) {
        LOCK();
        pppppcVar5 = uStack_170 + 1;
        *(int *)pppppcVar5 = *(int *)pppppcVar5 + -1;
        UNLOCK();
        if (*(int *)pppppcVar5 == 0) {
          (*(code *)**uStack_170)(uStack_170);
          LOCK();
          piVar25 = (int *)((longlong)pppppcVar34 + 0xc);
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (*piVar25 == 0) {
            (*(code *)(*pppppcVar34)[2])(pppppcVar34);
          }
        }
      }
      pppppcVar34 = *ppppppcVar2;
      if ((code *****)(piVar23 + 10) != pppppcVar34 + 0x3c) {
        pppppcVar34[0x3e] = *(code *****)(piVar23 + 0xe);
        iVar40 = piVar23[0xb];
        iVar37 = piVar23[0xc];
        iVar8 = piVar23[0xd];
        *(int *)(pppppcVar34 + 0x3c) = piVar23[10];
        *(int *)((longlong)pppppcVar34 + 0x1e4) = iVar40;
        *(int *)(pppppcVar34 + 0x3d) = iVar37;
        *(int *)((longlong)pppppcVar34 + 0x1ec) = iVar8;
        *(undefined1 *)(pppppcVar34 + 0x3f) = 1;
        pppppcVar34 = *ppppppcVar2;
      }
      if ((code *****)(piVar23 + 0x10) != pppppcVar34 + 0x40) {
        pppppcVar34[0x42] = *(code *****)(piVar23 + 0x14);
        iVar40 = piVar23[0x11];
        iVar37 = piVar23[0x12];
        iVar8 = piVar23[0x13];
        *(int *)(pppppcVar34 + 0x40) = piVar23[0x10];
        *(int *)((longlong)pppppcVar34 + 0x204) = iVar40;
        *(int *)(pppppcVar34 + 0x41) = iVar37;
        *(int *)((longlong)pppppcVar34 + 0x20c) = iVar8;
        *(undefined1 *)(pppppcVar34 + 0x43) = 1;
        pppppcVar34 = *ppppppcVar2;
      }
      if ((code *****)(piVar23 + 0x16) != pppppcVar34 + 0x44) {
        pppppcVar34[0x46] = *(code *****)(piVar23 + 0x1a);
        iVar40 = piVar23[0x17];
        iVar37 = piVar23[0x18];
        iVar8 = piVar23[0x19];
        *(int *)(pppppcVar34 + 0x44) = piVar23[0x16];
        *(int *)((longlong)pppppcVar34 + 0x224) = iVar40;
        *(int *)(pppppcVar34 + 0x45) = iVar37;
        *(int *)((longlong)pppppcVar34 + 0x22c) = iVar8;
        *(undefined1 *)(pppppcVar34 + 0x47) = 1;
        pppppcVar34 = *ppppppcVar2;
      }
      if ((*(char *)((longlong)pppppcVar34 + 0x7c) == '\0') &&
         (*(char *)(pppppcVar34 + 0x13) == '\0')) {
        (**(code **)(*(longlong *)local_2a0[0x69] + 0x20))
                  ((longlong *)local_2a0[0x69],*param_3,pppppcVar34 + 0xf,pppppcVar34 + 0x10);
        pppppcVar34 = *ppppppcVar2;
      }
      local_270 = (code *****)ppppppcVar10;
      if (*(char *)((longlong)pppppcVar34 + 0x1c4) == '\0') {
        local_278 = (code *****)ppppppcVar10;
        plVar27 = local_2a0 + 0x26;
        local_178 = (undefined **)((ulonglong)local_178 & 0xffffffffffffff00);
        local_150 = (longlong *)((ulonglong)local_150 & 0xffffffff00000000);
        FUN_1456bb102(&local_178,*param_3);
        uVar39 = FUN_140a8b8c6(plVar27,&local_178);
        pppppcVar34 = *ppppppcVar2;
        *(undefined4 *)(pppppcVar34 + 0x38) = uVar39;
        *(undefined1 *)((longlong)pppppcVar34 + 0x1c4) = 1;
        FUN_1448173f8(&local_150);
        local_270 = local_278;
        if (((char)local_178 == '\x03') && (local_168 != (longlong *)0x0)) {
          LOCK();
          piVar25 = (int *)((longlong)local_168 + 0xc);
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (*piVar25 == 0) {
            (**(code **)(*local_168 + 0x10))();
            local_270 = local_278;
          }
        }
      }
      local_268 = (code ****)pppppcVar1;
      if (pppppcVar1 != (code *****)0x0) {
        LOCK();
        *(int *)(pppppcVar1 + 1) = *(int *)(pppppcVar1 + 1) + 1;
        UNLOCK();
      }
      FUN_140586e9a(local_290,&local_270);
    }
    if (pppppcVar1 != (code *****)0x0) {
      LOCK();
      pppppcVar34 = pppppcVar1 + 1;
      *(int *)pppppcVar34 = *(int *)pppppcVar34 + -1;
      UNLOCK();
      if (*(int *)pppppcVar34 == 0) {
        (*(code *)**pppppcVar1)(pppppcVar1);
        LOCK();
        piVar25 = (int *)((longlong)pppppcVar1 + 0xc);
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (*piVar25 == 0) {
          (*(code *)(*pppppcVar1)[2])(pppppcVar1);
        }
      }
    }
  }
  if (piVar23[0x1d] == 0) {
LAB_140748560:
    pppppppuVar30 = (undefined8 *******)0x0;
  }
  else {
    uVar13 = *local_280;
    pppppppuVar30 = (undefined8 *******)0x0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      puVar26 = (undefined8 *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((puVar26 == (undefined8 *)0x0) ||
         ((*(int *)(puVar26 + 2) != piVar23[0x1d] || ((*(uint *)(puVar26 + 1) >> 0x1c & 1) != 0))))
      goto LAB_140748560;
      pppppppuVar30 = (undefined8 *******)*puVar26;
    }
  }
  if (piVar23[0x1f] == 0) {
LAB_140748674:
    lVar36 = 0;
  }
  else {
    uVar13 = piVar23[0x1e];
    lVar36 = 0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      plVar27 = (longlong *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((plVar27 == (longlong *)0x0) ||
         (((int)plVar27[2] != piVar23[0x1f] || ((*(uint *)(plVar27 + 1) & 0x10200000) != 0))))
      goto LAB_140748674;
      lVar36 = *plVar27;
    }
  }
  local_1d0 = pppppppuVar30;
  if (pppppppuVar30 != (undefined8 *******)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(pppppppuVar30);
  }
  local_1c8 = lVar36;
  if ((lVar36 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar36);
  }
  local_2a0 = (longlong *)(piVar23 + 0x78);
  if (*(longlong *)(*(longlong *)(piVar23 + 8) + 0x348) == 0) {
    *(undefined8 *)(piVar23 + 0x90) = *(undefined8 *)(piVar23 + 0xe);
    piVar23[0x8c] = piVar23[10];
    piVar23[0x8d] = piVar23[0xb];
    piVar23[0x8e] = piVar23[0xc];
    piVar23[0x8f] = piVar23[0xd];
  }
  else {
    piVar23[200] = *(int *)((longlong)pppppppuVar30 + 0xc);
    local_290 = puVar33;
    if (lVar36 != 0) {
      piVar23[0xca] = *(int *)(lVar36 + 0xc);
      iVar40 = *(int *)(lVar36 + 0x1c0);
      if (iVar40 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar40);
      }
      plVar27 = (longlong *)(piVar23 + 0xcc);
      if (piVar23[0xcf] < iVar40) {
        FUN_14480809c(plVar27);
        iVar40 = *(int *)(lVar36 + 0x1c0);
      }
      if (iVar40 != 0) {
        lVar36 = *(longlong *)(lVar36 + 0x1b8);
        lVar18 = 0;
        do {
          lVar22 = *(longlong *)(lVar36 + lVar18);
          if (lVar22 != 0) {
            uVar39 = *(undefined4 *)(lVar22 + 0xc);
            iVar37 = piVar23[0xce];
            piVar23[0xce] = iVar37 + 1U;
            if ((uint)piVar23[0xcf] < iVar37 + 1U) {
              FUN_1447808da(plVar27,iVar37);
            }
            *(undefined4 *)(*plVar27 + (longlong)iVar37 * 4) = uVar39;
          }
          lVar18 = lVar18 + 8;
        } while ((longlong)iVar40 * 8 != lVar18);
      }
    }
    plVar27 = local_288;
    puVar33 = local_290;
    lVar36 = *local_288;
    if (*(int *)(lVar36 + 0x1dc) != 0) {
      uVar13 = *(uint *)(lVar36 + 0x1d8);
      if ((((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) &&
          (lVar18 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8), lVar18 != 0)) &&
         ((*(int *)(lVar18 + 0x10) == *(int *)(lVar36 + 0x1dc) &&
          ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)))) {
        cVar12 = FUN_14069eaf4((uint *)(lVar36 + 0x1d8),pppppppuVar30);
        lVar36 = *plVar27;
        if (cVar12 == '\0') {
          cVar12 = FUN_140383372(lVar36 + 0x1d8);
          lVar36 = *plVar27;
          if (cVar12 == '\0') {
            if (*(int *)(lVar36 + 0x1dc) == 0) {
LAB_140748795:
              lVar18 = 0;
            }
            else {
              uVar13 = *(uint *)(lVar36 + 0x1d8);
              lVar18 = 0;
              if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
                plVar27 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
                if ((plVar27 == (longlong *)0x0) ||
                   (((int)plVar27[2] != *(int *)(lVar36 + 0x1dc) ||
                    ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)))) goto LAB_140748795;
                lVar18 = *plVar27;
              }
            }
            piVar23[0xc9] = *(int *)(lVar18 + 0xc);
          }
        }
      }
    }
    local_2e8 = *(undefined8 *)(piVar23 + 0x66);
    local_2f8 = (longlong *)(piVar23 + 0x10);
    local_2f0 = &local_1d0;
    local_2e0 = lVar36;
    (**(code **)(**(longlong **)(*(longlong *)(piVar23 + 8) + 0x348) + 0x10))
              (*(longlong **)(*(longlong *)(piVar23 + 8) + 0x348),local_2a0,
               *(undefined8 *)(piVar23 + 6),piVar23 + 10);
    if (*(longlong *)(piVar23 + 0x66) != 0) {
      *(float *)(*(longlong *)(piVar23 + 0x66) + 0x10) =
           (float)*(double *)(*(longlong *)(piVar23 + 6) + 0x6d0);
    }
  }
  lVar36 = *(longlong *)(piVar23 + 0x62);
  if (piVar23[0x21] == 0) {
LAB_14074867b:
    lVar18 = 0;
  }
  else {
    uVar13 = *puVar33;
    lVar18 = 0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      plVar27 = (longlong *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((plVar27 == (longlong *)0x0) ||
         (((int)plVar27[2] != piVar23[0x21] || ((*(uint *)(plVar27 + 1) & 0x10200000) != 0))))
      goto LAB_14074867b;
      lVar18 = *plVar27;
    }
  }
  plVar27 = (longlong *)(piVar23 + 0x72);
  if (*(longlong *)(*(longlong *)(piVar23 + 8) + 0x348) == 0) {
    memset((void *)((longlong)&local_178 + 4),0,0x104);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
    uStack_170 = (code *****)CONCAT44(0x3f800000,(int)uStack_170);
    local_cc = 0xffffffff;
    local_178 = (undefined **)((ulonglong)local_178 & 0xffffffffffffff00);
    local_70 = 0;
    uStack_68 = 0;
    if (lVar36 != 0) {
      memcpy(&uStack_170,(void *)(lVar36 + 0xa0),0x100);
    }
    lVar22 = FUN_14485cccc(&local_b8);
    if ((lVar18 != 0) && (lVar22 == 0)) {
      FUN_140871de8(&local_1a8,lVar18);
      uStack_a0 = CONCAT62(uStack_18e,uStack_190);
      local_b8 = local_1a8;
      uStack_b0 = uStack_1a0;
      local_a8 = local_198;
      if ((lVar36 == 0) || (*(char *)(lVar36 + 0x1b8) == '\0')) {
        lVar18 = *(longlong *)(lVar18 + 0x1c8);
        if (lVar18 != 0) {
          local_138 = *(longlong **)(lVar18 + 0x270);
          local_148 = *(undefined4 *)(lVar18 + 0x260);
          uStack_144 = *(undefined4 *)(lVar18 + 0x264);
          local_160 = *(longlong **)(lVar18 + 0x260);
          uStack_140 = *(undefined4 *)(lVar18 + 0x268);
          uStack_13c = *(undefined4 *)(lVar18 + 0x26c);
          uStack_158 = *(undefined8 *)(lVar18 + 0x268);
          goto LAB_1407481fe;
        }
        local_160 = (longlong *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_158 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_150 = DAT_14c8464f0;
        local_148 = (undefined4)DAT_14c8464e0;
        uStack_144 = DAT_14c8464e0._4_4_;
        uStack_140 = (undefined4)DAT_14c8464e8;
        uStack_13c = DAT_14c8464e8._4_4_;
        local_138 = DAT_14c8464f0;
      }
      else {
        local_150 = *(longlong **)(lVar36 + 0x1b0);
        lVar18 = *(longlong *)(lVar18 + 0x1c8);
        local_148 = *(undefined4 *)(lVar36 + 0x1a0);
        uStack_144 = *(undefined4 *)(lVar36 + 0x1a4);
        local_160 = *(longlong **)(lVar36 + 0x1a0);
        uStack_140 = *(undefined4 *)(lVar36 + 0x1a8);
        uStack_13c = *(undefined4 *)(lVar36 + 0x1ac);
        uStack_158 = *(undefined8 *)(lVar36 + 0x1a8);
        local_138 = local_150;
        if (lVar18 != 0) {
LAB_1407481fe:
          local_150 = local_138;
          if (DAT_14cac6e60 == 0) {
            local_1a8 = (code ******)FUN_144a7958c;
            local_2b0 = FUN_14081d0ea;
            local_2b8 = FUN_142b47bc4;
            local_2c8 = &LAB_1478989f1;
            local_2d0 = (code *)&LAB_146391124;
            local_2d8 = L"Engine";
            local_2e0 = 0x10000000000;
            local_2e8 = CONCAT44(local_2e8._4_4_,0x10000005);
            local_2f0 = (undefined8 ******)CONCAT44(local_2f0._4_4_,0x10);
            local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,0x620);
            local_2c0 = (code ******)&local_1a8;
            FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          }
          if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
            local_98 = *(uint *)(lVar18 + 0xc);
            if ((int)local_98 < DAT_14c9647dc) {
              lVar36 = (ulonglong)((local_98 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_98 >> 0x10) * 8);
            }
            else {
              lVar36 = 0;
            }
            iStack_94 = *(int *)(lVar36 + 0x10);
            if (*(int *)(lVar36 + 0x10) == 0) {
              LOCK();
              iVar40 = DAT_14c964868 + 1;
              UNLOCK();
              iVar37 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar40;
              if (bVar38) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar37);
              }
              LOCK();
              iStack_94 = *(int *)(lVar36 + 0x10);
              bVar38 = iStack_94 == 0;
              if (bVar38) {
                *(int *)(lVar36 + 0x10) = iVar37;
                iStack_94 = 0;
              }
              UNLOCK();
              if (bVar38) {
                iStack_94 = iVar37;
              }
            }
            goto LAB_140748271;
          }
        }
      }
      local_98 = 0;
      iStack_94 = 0;
    }
LAB_140748271:
    lVar36 = FUN_14485cccc(&local_b8);
    if (lVar36 != 0) {
      iVar40 = piVar23[0x74];
      piVar23[0x74] = iVar40 + 1U;
      if ((uint)piVar23[0x75] < iVar40 + 1U) {
        FUN_140bfb34a(plVar27,iVar40);
      }
      lVar36 = *plVar27;
      lVar22 = (longlong)iVar40 * 0x118;
      puVar26 = (undefined8 *)(lVar36 + lVar22);
      *puVar26 = local_178;
      memcpy(puVar26 + 1,&uStack_170,0xb8);
      uVar20 = uStack_68;
      lVar18 = local_70;
      puVar26[0x18] = 0;
      puVar26[0x19] = 0;
      puVar26[0x1a] = 0;
      *(undefined4 *)(puVar26 + 0x1b) = 0xffffffff;
      *(undefined1 *)((longlong)puVar26 + 0xdc) = 0;
      puVar26[0x18] = local_b8;
      puVar26[0x19] = uStack_b0;
      puVar26[0x1a] = local_a8;
      *(undefined4 *)(puVar26 + 0x1b) = (undefined4)uStack_a0;
      *(undefined1 *)((longlong)puVar26 + 0xdc) = uStack_a0._4_1_;
      puVar26[0x20] = local_78;
      *(undefined4 *)(puVar26 + 0x1e) = local_88;
      *(undefined4 *)((longlong)puVar26 + 0xf4) = uStack_84;
      *(undefined4 *)(puVar26 + 0x1f) = uStack_80;
      *(undefined4 *)((longlong)puVar26 + 0xfc) = uStack_7c;
      *(uint *)(puVar26 + 0x1c) = local_98;
      *(int *)((longlong)puVar26 + 0xe4) = iStack_94;
      *(undefined4 *)(puVar26 + 0x1d) = uStack_90;
      *(undefined4 *)((longlong)puVar26 + 0xec) = uStack_8c;
      puVar26[0x21] = 0;
      *(int *)(puVar26 + 0x22) = (int)uStack_68;
      if ((int)uStack_68 == 0) {
        *(undefined4 *)(lVar36 + lVar22 + 0x114) = 0;
      }
      else {
        puVar26 = (undefined8 *)(lVar36 + lVar22 + 0x108);
        FUN_1403e149c(puVar26,uStack_68 & 0xffffffff,0);
        FUN_1403e129b(*puVar26,lVar18,uVar20 & 0xffffffff);
      }
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else if (((lVar18 != 0) && (lVar36 != 0)) &&
          ((*(byte *)(*(longlong *)(*(longlong *)(piVar23 + 8) + 0x348) + 0x10) & 1) != 0)) {
    uVar15 = *(undefined8 *)(lVar36 + 400);
    if (*(int *)(lVar36 + 0x17c) == 0) {
LAB_140748e61:
      uVar31 = 0;
    }
    else {
      uVar13 = *(uint *)(lVar36 + 0x178);
      uVar31 = 0;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
        puVar26 = (undefined8 *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
        if ((puVar26 == (undefined8 *)0x0) ||
           ((*(int *)(puVar26 + 2) != *(int *)(lVar36 + 0x17c) ||
            ((*(uint *)(puVar26 + 1) & 0x10200000) != 0)))) goto LAB_140748e61;
        uVar31 = *puVar26;
      }
    }
    if (DAT_14cb56270 == 0) {
      local_2c0 = (code ******)&local_178;
      local_178 = (undefined **)FUN_1449e2820;
      local_2b0 = FUN_14081d0ea;
      local_2b8 = FUN_1427b09ee;
      local_2c8 = &LAB_148630fef;
      local_2d0 = FUN_1464b6a91;
      local_2d8 = L"Engine";
      local_2e0 = 0;
      local_2e8 = CONCAT44(local_2e8._4_4_,0x10004001);
      local_2f0 = (undefined8 ******)CONCAT44(local_2f0._4_4_,8);
      local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    uVar21 = FUN_144718840(lVar18,DAT_14cb56270);
    lVar22 = FUN_14082d677(uVar21,uVar31,uVar15);
    if ((lVar22 == 0) || ((*(byte *)(lVar22 + 0x18) & 0x40) != 0)) {
      iVar40 = piVar23[0x74];
      uVar13 = iVar40 + 1;
      piVar23[0x74] = uVar13;
      if ((uint)piVar23[0x75] < uVar13) {
        FUN_140bfb34a(plVar27);
      }
      lVar22 = (longlong)iVar40 * 0x118;
      pbVar3 = (byte *)(*plVar27 + lVar22);
      pbVar4 = (byte *)(*plVar27 + lVar22);
      memset(pbVar4 + 4,0,0x104);
      pbVar4[0xd8] = 0xff;
      pbVar4[0xd9] = 0xff;
      pbVar4[0xda] = 0xff;
      pbVar4[0xdb] = 0xff;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0x80;
      pbVar4[0xf] = 0x3f;
      pbVar4[0xac] = 0xff;
      pbVar4[0xad] = 0xff;
      pbVar4[0xae] = 0xff;
      pbVar4[0xaf] = 0xff;
      pbVar4[0x108] = 0;
      pbVar4[0x109] = 0;
      pbVar4[0x10a] = 0;
      pbVar4[0x10b] = 0;
      pbVar4[0x10c] = 0;
      pbVar4[0x10d] = 0;
      pbVar4[0x10e] = 0;
      pbVar4[0x10f] = 0;
      pbVar4[0x110] = 0;
      pbVar4[0x111] = 0;
      pbVar4[0x112] = 0;
      pbVar4[0x113] = 0;
      pbVar4[0x114] = 0;
      pbVar4[0x115] = 0;
      pbVar4[0x116] = 0;
      pbVar4[0x117] = 0;
      *pbVar4 = *pbVar4 & 0xf0;
      lVar22 = FUN_14485cccc(lVar36 + 0x158);
      if (lVar22 == 0) {
        lVar36 = *(longlong *)(lVar18 + 0x1c8);
        if (lVar36 == 0) {
          local_168 = DAT_14c8464f0;
          local_178 = (undefined **)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_170 = (code *****)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_178 = *(undefined ***)(lVar36 + 0x260);
          uStack_170 = *(code ******)(lVar36 + 0x268);
          local_168 = *(longlong **)(lVar36 + 0x270);
        }
        FUN_1418779d8(pbVar3,lVar18,&local_178,0);
      }
      else {
        FUN_140bfb4c0(pbVar3,lVar36 + 0xa0);
      }
      *pbVar3 = *pbVar3 | 5;
    }
  }
  if (*(longlong *)(*(longlong *)(piVar23 + 8) + 0x348) == 0) {
    iVar40 = 4;
LAB_140748410:
    piVar23[1] = iVar40;
  }
  else {
    piVar23[1] = 1;
    plVar19 = *(longlong **)(*(longlong *)(piVar23 + 8) + 0x348);
    if ((char)plVar19[8] == '\x01') {
      local_2e8 = *(undefined8 *)(piVar23 + 0x62);
      local_2f0 = *(undefined8 *******)(piVar23 + 0x66);
      local_2f8 = local_2a0;
      (**(code **)(*plVar19 + 0x40))(plVar19,plVar27,piVar23 + 0x6a,*(undefined8 *)(piVar23 + 6));
      iVar40 = 2;
      goto LAB_140748410;
    }
  }
  if (param_7 != (int *)0x0) {
    *(undefined1 *)(param_7 + 1) = 0;
  }
  if ((((((param_6 == '\0') && (DAT_14c7638c1 == '\x01')) &&
        ((*(byte *)(*(longlong *)(piVar23 + 8) + 0xa8) & 2) != 0)) &&
       (((piVar23[0x1d] != 0 && (uVar13 = *local_280, -1 < (int)uVar13)) &&
        (((int)uVar13 < DAT_14c9647dc &&
         ((plVar27 = (longlong *)
                     ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
          plVar27 != (longlong *)0x0 && ((int)plVar27[2] == piVar23[0x1d])))))))) &&
      ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)) &&
     ((((lVar36 = *plVar27, lVar36 != 0 && ((*(byte *)(lVar36 + 0x65) & 2) == 0)) &&
       ((*(uint *)(lVar36 + 8) >> 0x1e & 1) == 0)) && ((*(byte *)(lVar36 + 0x348) & 2) == 0)))) {
    lVar36 = *(longlong *)(piVar23 + 6);
    if ((((*(longlong *)(lVar36 + 0x30) != 0) &&
         (lVar18 = *(longlong *)(*(longlong *)(lVar36 + 0x30) + 0x2b0), lVar18 != 0)) &&
        ((*(longlong *)(lVar18 + 0x588) != 0 &&
         (*(double *)(lVar36 + 0x708) <= *(double *)(lVar36 + 0x6d0))))) ||
       (((*(byte *)(lVar36 + 0x154) & 0x40) != 0 && (iVar40 = FUN_14490d72a(lVar36), iVar40 == 3))))
    goto LAB_1407486c0;
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar18 = 0;
      do {
        lVar22 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar18);
        if (*(longlong *)(lVar22 + 0x360) == lVar36) {
          if ((lVar22 != 0) && ((*(byte *)(lVar22 + 0x278) & 1) != 0)) goto LAB_1407486c0;
          break;
        }
        lVar18 = lVar18 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar18);
    }
    cVar12 = FUN_144a80e00(lVar36);
    if ((cVar12 != '\0') && (*(char *)(lVar36 + 0x155) < '\0')) goto LAB_1407486c0;
    if ((6 < (uint)piVar23[1]) || ((0x74U >> (piVar23[1] & 0x1fU) & 1) == 0)) {
      if ((*(int *)(local_298 + 0x40) < DAT_14c7638c4) && (**(longlong **)(local_298 + 0x68) == 0))
      {
        *(int *)(local_298 + 0x40) = *(int *)(local_298 + 0x40) + 1;
        plVar27 = (longlong *)(local_298 + 0x48);
        iVar40 = *(int *)(local_298 + 0x50);
        *(uint *)(local_298 + 0x50) = iVar40 + 1U;
        if (*(uint *)(local_298 + 0x54) < iVar40 + 1U) {
          FUN_145741374(plVar27,iVar40);
        }
        *(int **)(*plVar27 + (longlong)iVar40 * 8) = piVar23;
        *(undefined1 *)((longlong)piVar23 + 10) = 1;
        local_208 = 0;
        local_1f8 = &PTR_LAB_14b3f6210;
        local_218 = FUN_143cfe004;
        local_1f0 = piVar23;
        FUN_1407461b0(0x4ff);
      }
      else {
        puVar26 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar26 = 0;
        puVar26[1] = piVar23;
        if (puVar26 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)(local_298 + 0x60);
          *(undefined8 **)(local_298 + 0x60) = puVar26;
          *puVar7 = puVar26;
        }
      }
      goto LAB_140748706;
    }
  }
  else {
LAB_1407486c0:
    local_258 = 0;
    local_248 = 0;
    FUN_14074961e(piVar23,0);
  }
  plVar27 = (longlong *)(local_298 + 0x48);
  iVar40 = *(int *)(local_298 + 0x50);
  *(uint *)(local_298 + 0x50) = iVar40 + 1U;
  if (*(uint *)(local_298 + 0x54) < iVar40 + 1U) {
    FUN_145741374(plVar27,iVar40);
  }
  *(int **)(*plVar27 + (longlong)iVar40 * 8) = piVar23;
LAB_140748706:
  plVar27 = (longlong *)param_5[1];
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar27 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar27)(plVar27);
      LOCK();
      piVar23 = (int *)((longlong)plVar27 + 0xc);
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (*piVar23 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140749074 FUN_140749074 body=1269 status=ok
// SIG undefined FUN_140749074(void)

longlong * FUN_140749074(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  lVar10 = *param_2;
  *param_1 = lVar10;
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar9 = DAT_14c950c29;
  lVar10 = param_2[1];
  param_1[1] = lVar10;
  if ((lVar10 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
    bVar9 = DAT_14c950c29;
  }
  param_1[2] = param_2[2];
  lVar10 = param_2[3];
  param_1[3] = lVar10;
  if ((lVar10 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
    bVar9 = DAT_14c950c29;
  }
  lVar10 = param_2[4];
  param_1[4] = lVar10;
  if ((lVar10 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
    bVar9 = DAT_14c950c29;
  }
  lVar10 = param_2[5];
  param_1[5] = lVar10;
  if ((lVar10 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
    bVar9 = DAT_14c950c29;
  }
  lVar10 = param_2[6];
  param_1[6] = lVar10;
  if ((lVar10 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
    bVar9 = DAT_14c950c29;
  }
  lVar10 = param_2[7];
  param_1[7] = lVar10;
  if ((lVar10 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
  }
  param_1[8] = param_2[8];
  param_1[0xf] = 0;
  plVar11 = param_2 + 9;
  if ((longlong *)param_2[0xf] != (longlong *)0x0) {
    plVar11 = (longlong *)param_2[0xf];
  }
  FUN_1400709d4(param_1 + 9,plVar11,(int)param_2[0x10],0);
  param_1[0x11] = (longlong)&DAT_14a171d50;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = param_2[0x12];
  FUN_1406022fe(param_1 + 0x13,param_2 + 0x13);
  param_1[0x11] = (longlong)&PTR_FUN_14b0394b0;
  memcpy(param_1 + 0x15,param_2 + 0x15,0xb8);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x2c] = param_2[0x2c];
  lVar10 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = lVar10;
  *(int *)(param_1 + 0x2f) = (int)param_2[0x2f];
  *(undefined1 *)((longlong)param_1 + 0x17c) = *(undefined1 *)((longlong)param_2 + 0x17c);
  param_1[0x34] = param_2[0x34];
  lVar10 = param_2[0x30];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x184);
  lVar7 = param_2[0x31];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x18c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x194);
  lVar8 = param_2[0x33];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x19c);
  *(int *)(param_1 + 0x32) = (int)param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0x194) = uVar5;
  *(int *)(param_1 + 0x33) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar6;
  *(int *)(param_1 + 0x30) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar3;
  *(int *)(param_1 + 0x31) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar4;
  param_1[0x35] = param_2[0x35];
  *(int *)(param_1 + 0x36) = (int)param_2[0x36];
  param_1[0x37] = 0;
  *(short *)(param_1 + 0x38) = (short)param_2[0x38];
  lVar10 = param_2[0x39];
  *(char *)(param_1 + 0x39) = (char)lVar10;
  if ((char)lVar10 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  }
  plVar11 = param_2 + 0x3a;
  plVar12 = param_1 + 0x3a;
  for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar12 = *plVar11;
    plVar11 = plVar11 + 1;
    plVar12 = plVar12 + 1;
  }
  *(char *)(param_1 + 0x49) = (char)param_2[0x49];
  lVar10 = param_2[0x4f];
  *(char *)(param_1 + 0x4f) = (char)lVar10;
  if ((char)lVar10 == '\x01') {
    *(char *)(param_1 + 0x4a) = (char)param_2[0x4a];
    param_1[0x4b] = (longlong)&DAT_14a171d50;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4c] = param_2[0x4c];
    FUN_1406022fe(param_1 + 0x4d,param_2 + 0x4d);
    param_1[0x4b] = (longlong)&PTR_FUN_14b0394b0;
  }
  cVar1 = *(char *)((longlong)param_2 + 0x281);
  *(char *)((longlong)param_1 + 0x281) = cVar1;
  if (cVar1 == '\x01') {
    *(char *)(param_1 + 0x50) = (char)param_2[0x50];
  }
  lVar10 = param_2[0x52];
  param_1[0x52] = lVar10;
  param_1[0x54] = 0;
  if (lVar10 != 0) {
    plVar11 = param_2 + 0x56;
    if ((longlong *)param_2[0x54] != (longlong *)0x0) {
      plVar11 = (longlong *)param_2[0x54];
    }
    (**(code **)*plVar11)(plVar11,param_1 + 0x54);
  }
  param_1[0x5a] = 0;
  iVar2 = (int)param_2[0x5b];
  lVar10 = param_2[0x5a];
  *(int *)(param_1 + 0x5b) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  }
  else {
    FUN_1403e11c4(param_1 + 0x5a,iVar2,0);
    FUN_1403e103e(param_1[0x5a],lVar10,iVar2);
  }
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5d] = 0;
  iVar2 = (int)param_2[0x5e];
  lVar10 = param_2[0x5d];
  *(int *)(param_1 + 0x5e) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  }
  else {
    FUN_1403e10ec(param_1 + 0x5d,iVar2,0);
    FUN_1403e107f(param_1[0x5d],lVar10,iVar2);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x2fc);
  *(char *)((longlong)param_1 + 0x2fc) = cVar1;
  if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x5f) = (int)param_2[0x5f];
  }
  param_1[0x60] = 0;
  iVar2 = (int)param_2[0x61];
  lVar10 = param_2[0x60];
  *(int *)(param_1 + 0x61) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  }
  else {
    FUN_1403e149c(param_1 + 0x60,iVar2,0);
    FUN_1403e129b(param_1[0x60],lVar10,iVar2);
  }
  return param_1;
}



// FUNCTION 14074956a FUN_14074956a body=55 status=ok
// SIG undefined FUN_14074956a(void)

void FUN_14074956a(longlong *param_1)

{
  FUN_1407495a2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407495a2 FUN_1407495a2 body=123 status=ok
// SIG undefined FUN_1407495a2(void)

void FUN_1407495a2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 14074961e FUN_14074961e body=9604 status=ok
// SIG undefined FUN_14074961e(void)

void FUN_14074961e(longlong param_1,byte param_2,longlong *param_3)

{
  int *piVar1;
  code **ppcVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  code **ppcVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  code *pcVar14;
  code **ppcVar15;
  undefined8 uVar16;
  code *pcVar17;
  double *pdVar18;
  double *pdVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  double *pdVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  code *pcVar28;
  int iVar29;
  undefined1 uVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  code *pcVar34;
  ulonglong uVar35;
  bool bVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined1 auStack_578 [32];
  longlong *local_558;
  undefined8 *local_550;
  longlong *local_548;
  longlong local_540;
  wchar_t *local_538;
  code *local_530;
  undefined1 *local_528;
  undefined8 *local_520;
  code *local_518;
  code *local_510;
  longlong *local_500;
  code *local_4f8;
  longlong local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  code *local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong *local_4c0;
  code **local_4b8;
  undefined8 uStack_4b0;
  code *local_4a8;
  longlong local_4a0;
  longlong *local_498;
  undefined8 *local_490;
  int *local_488;
  double *local_480;
  undefined8 *local_478;
  undefined8 *local_470;
  longlong *local_468;
  undefined8 *local_460;
  undefined8 local_458;
  longlong *plStack_450;
  longlong local_448;
  code *local_438;
  code *local_430;
  code *local_428;
  code *pcStack_420;
  code *local_418;
  longlong local_408 [2];
  undefined8 local_3f8 [6];
  code *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  longlong *local_3b8;
  longlong lStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  longlong *plStack_380;
  code *local_378;
  code *pcStack_370;
  code *local_368;
  code *pcStack_360;
  code *pcStack_358;
  code *pcStack_350;
  code *local_348;
  longlong *plStack_340;
  longlong local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  longlong *plStack_328;
  longlong local_320;
  longlong local_318 [4];
  longlong local_2f8;
  longlong *local_2e8;
  undefined4 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 *puStack_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined1 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  float local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 local_27c;
  code *local_278;
  undefined8 uStack_270;
  longlong *local_268;
  longlong lStack_260;
  longlong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  code *local_238;
  undefined8 uStack_230;
  longlong *local_228;
  longlong lStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  code *pcStack_1f0;
  code *local_1e8;
  code **ppcStack_1e0;
  code **local_1d8;
  undefined8 uStack_1d0;
  code **ppcStack_1c8;
  code **ppcStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double local_190;
  undefined4 local_154;
  byte local_14b;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong lStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_578;
  plVar23 = (longlong *)(param_1 + 0x1e0);
  lVar31 = param_1 + 0x1b8;
  local_4c0 = (longlong *)(param_1 + 0x1a8);
  plVar22 = (longlong *)(param_1 + 0x1c8);
  iVar29 = *(int *)(param_1 + 4);
  local_470 = (undefined8 *)(param_1 + 0x88);
  local_478 = &local_140;
  local_480 = (double *)(param_1 + 0x230);
  local_460 = &local_2d0;
  local_488 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  local_490 = (undefined8 *)&local_2b8;
  local_498 = &local_2d8;
  local_468 = (longlong *)(param_1 + 0x28);
  local_4e0 = plVar22;
  local_4c8 = lVar31;
LAB_1407497b0:
LAB_1407497ca:
  bVar7 = param_2;
  switch(iVar29) {
  case 1:
    goto switchD_1407497d1_caseD_1;
  case 2:
    local_4f8 = (code *)CONCAT71(local_4f8._1_7_,param_2);
    lVar31 = *(longlong *)(param_1 + 0x188);
    if (lVar31 != 0) {
      uVar35 = (ulonglong)*(int *)(param_1 + 0x1b0);
      if (0 < (longlong)uVar35) {
        iVar29 = -*(int *)(param_1 + 0x1b0);
        lVar26 = uVar35 * 0x48;
        do {
          lVar26 = lVar26 + -0x48;
          lVar13 = FUN_14485cccc(*local_4c0 + lVar26);
          if (lVar13 != 0) {
            if (DAT_14cb56270 == 0) {
              local_388 = FUN_1449e2820;
              local_510 = FUN_14081d0ea;
              local_518 = FUN_1427b09ee;
              local_520 = &local_388;
              local_528 = &LAB_148630fef;
              local_530 = FUN_1464b6a91;
              local_538 = L"Engine";
              local_540 = 0;
              local_548 = (longlong *)CONCAT44(local_548._4_4_,0x10004001);
              local_550 = (undefined8 *)CONCAT44(local_550._4_4_,8);
              local_558 = (longlong *)CONCAT44(local_558._4_4_,0x28);
              FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee)
              ;
            }
            plVar22 = (longlong *)FUN_144718840(lVar13,DAT_14cb56270);
            if ((plVar22 != (longlong *)0x0) &&
               (cVar11 = (**(code **)(*plVar22 + 0xb0))(plVar22,lVar31), cVar11 != '\0')) {
              uVar12 = *(uint *)(param_1 + 0x1b0);
              if (uVar35 != uVar12) {
                iVar33 = uVar12 + iVar29;
                if (0 < (int)(uVar12 + iVar29)) {
                  iVar33 = 1;
                }
                memmove((void *)(*(longlong *)(param_1 + 0x1a8) + lVar26),
                        (void *)(*(longlong *)(param_1 + 0x1a8) +
                                (longlong)(int)(uVar12 - iVar33) * 0x48),(longlong)iVar33 * 0x48);
                uVar12 = *(uint *)(param_1 + 0x1b0);
              }
              *(uint *)(param_1 + 0x1b0) = uVar12 - 1;
            }
          }
          iVar29 = iVar29 + 1;
          bVar36 = 1 < uVar35;
          uVar35 = uVar35 - 1;
        } while (bVar36);
      }
    }
    lVar31 = local_4c8;
    plVar22 = local_4e0;
    if ((*(int *)(param_1 + 0x7c) == 0) || (uVar12 = *(uint *)(param_1 + 0x78), (int)uVar12 < 0)) {
LAB_140749ebb:
      lVar26 = 0;
    }
    else {
      lVar26 = 0;
      if ((int)uVar12 < DAT_14c9647dc) {
        plVar21 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
        if (((plVar21 == (longlong *)0x0) || ((int)plVar21[2] != *(int *)(param_1 + 0x7c))) ||
           ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) goto LAB_140749ebb;
        lVar26 = *plVar21;
      }
    }
    if (((((*(int *)(param_1 + 0x74) != 0) && (uVar12 = *(uint *)(param_1 + 0x70), -1 < (int)uVar12)
          ) && (((int)uVar12 < DAT_14c9647dc &&
                ((plVar21 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                 plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(param_1 + 0x74))))))) &&
        ((*(uint *)(plVar21 + 1) >> 0x1c & 1) == 0)) && (*plVar21 != 0 && DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    param_2 = (byte)local_4f8;
    if ((lVar26 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar26);
    }
    FUN_14069df1a(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x348),lVar31,local_4c0);
    bVar36 = 0 < *(int *)(param_1 + 0x1c0);
    iVar29 = 4 - (uint)bVar36;
    *(int *)(param_1 + 4) = iVar29;
    bVar7 = bVar36 & param_2;
    goto joined_r0x000140749dbe;
  case 3:
    FUN_14069cfaa(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x348),lVar31,
                  *(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 4) = 4;
    iVar29 = 4;
    goto joined_r0x000140749dbe;
  case 4:
    goto switchD_1407497d1_caseD_4;
  case 5:
    if (*(int *)(param_1 + 0x7c) == 0) {
LAB_14074bb9c:
      plVar21 = (longlong *)0x0;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x78);
      plVar21 = (longlong *)0x0;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
        puVar25 = (undefined8 *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
        if ((puVar25 == (undefined8 *)0x0) ||
           ((*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x7c) ||
            ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)))) goto LAB_14074bb9c;
        plVar21 = (longlong *)*puVar25;
      }
    }
    if (((((*(int *)(param_1 + 0x74) == 0) || (uVar12 = *(uint *)(param_1 + 0x70), (int)uVar12 < 0))
         || (DAT_14c9647dc <= (int)uVar12)) ||
        ((puVar25 = (undefined8 *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
         puVar25 == (undefined8 *)0x0 || (*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x74))))) ||
       ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) {
      local_388 = (code *)0x0;
    }
    else {
      local_388 = (code *)*puVar25;
      if (local_388 != (code *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c();
      }
    }
    plStack_380 = plVar21;
    if ((plVar21 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(plVar21);
    }
    plVar21 = *(longlong **)(param_1 + 0x20);
    local_408[0] = *param_3;
    local_3f8[0] = 0;
    if (local_408[0] != 0) {
      plVar20 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar20 = (longlong *)param_3[2];
      }
      (**(code **)*plVar20)(plVar20,local_3f8);
    }
    local_538 = (wchar_t *)(param_1 + 0x398);
    local_540 = param_1 + 0x1d8;
    local_550 = *(undefined8 **)(param_1 + 0x188);
    local_558 = (longlong *)(param_1 + 0x58);
    local_530 = (code *)local_408;
    local_548 = plVar23;
    (**(code **)(*plVar21 + 0x18))(plVar21,plVar22,*(undefined8 *)(param_1 + 0x18),&local_388);
    if ((*(int *)(param_1 + 0x1d8) < 0) || (*(int *)(param_1 + 0x1d0) <= *(int *)(param_1 + 0x1d8)))
    goto LAB_14074babf;
    goto LAB_14074bac6;
  default:
    break;
  }
  if (iVar29 == 6 || param_2 != 0) goto LAB_14074bac6;
  goto LAB_1407497ca;
switchD_1407497d1_caseD_4:
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x348) != 0) {
    if ((*(int *)(param_1 + 0x7c) == 0) || (uVar12 = *(uint *)(param_1 + 0x78), (int)uVar12 < 0)) {
LAB_140749ec2:
      lVar26 = 0;
    }
    else {
      lVar26 = 0;
      if ((int)uVar12 < DAT_14c9647dc) {
        plVar21 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
        if (((plVar21 == (longlong *)0x0) || ((int)plVar21[2] != *(int *)(param_1 + 0x7c))) ||
           ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) goto LAB_140749ec2;
        lVar26 = *plVar21;
      }
    }
    if (((((*(int *)(param_1 + 0x74) != 0) && (uVar12 = *(uint *)(param_1 + 0x70), -1 < (int)uVar12)
          ) && (((int)uVar12 < DAT_14c9647dc &&
                ((plVar21 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                 plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(param_1 + 0x74))))))) &&
        ((*(uint *)(plVar21 + 1) >> 0x1c & 1) == 0)) && (*plVar21 != 0 && DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    if ((lVar26 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar26);
    }
    local_540 = *(longlong *)(param_1 + 0x198);
    local_550 = local_470;
    local_558 = plVar23;
    FUN_14069fde2(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x348),plVar22,lVar31);
  }
  lVar31 = *(longlong *)(param_1 + 0x198);
  if (lVar31 != 0) {
    uVar12 = *(uint *)(param_1 + 0x1d0);
    if ((((ulonglong)uVar12 != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x1a8) & 0x20) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x348) != 0)) {
      local_4f8 = (code *)CONCAT71(local_4f8._1_7_,param_2);
      iVar29 = *(int *)(lVar31 + 0x38);
      local_500 = plVar23;
      local_4e8 = param_3;
      if (0 < (int)uVar12) {
        lVar31 = (ulonglong)(1 < iVar29) * 0x10 + lVar31;
        uVar35 = (ulonglong)uVar12;
        plVar23 = local_4e0;
        do {
          uVar27 = uVar35 - 1;
          lVar26 = *plVar23;
          lVar13 = FUN_14485cccc(lVar26 + uVar27 * 0x118 + 0xc0);
          plVar22 = local_4e0;
          if (lVar13 != 0) {
            lVar4 = *(longlong *)(param_1 + 0x198);
            iVar33 = *(int *)(lVar13 + 0xc);
            if ((longlong)*(int *)(lVar4 + 0x90) != 0) {
              lVar32 = 0;
              do {
                if (*(int *)(*(longlong *)(lVar4 + 0x88) + lVar32) == iVar33) {
                  FUN_1458452d2(local_4e0,uVar27 & 0xffffffff);
                  plVar23 = plVar22;
                  goto LAB_140749a86;
                }
                lVar32 = lVar32 + 4;
              } while ((longlong)*(int *)(lVar4 + 0x90) * 4 != lVar32);
            }
            if ((*(byte *)(lVar26 + uVar27 * 0x118) & 8) != 0) {
              *(int *)(lVar4 + 0x3c) = *(int *)(lVar4 + 0x3c) + 1;
              iVar33 = *(int *)(lVar13 + 0xc);
            }
            iVar3 = *(int *)(lVar31 + 0x80);
            *(uint *)(lVar31 + 0x80) = iVar3 + 1U;
            if (*(uint *)(lVar31 + 0x84) < iVar3 + 1U) {
              FUN_1447808da((longlong *)(lVar31 + 0x78),iVar3);
            }
            *(int *)(*(longlong *)(lVar31 + 0x78) + (longlong)iVar3 * 4) = iVar33;
            plVar23 = local_4e0;
          }
LAB_140749a86:
          bVar36 = 1 < (longlong)uVar35;
          uVar35 = uVar27;
        } while (bVar36);
      }
      param_3 = local_4e8;
      plVar23 = local_500;
      param_2 = (byte)local_4f8;
      if (iVar29 < 2) {
        lVar31 = *(longlong *)(param_1 + 0x198);
        uVar12 = *(uint *)(lVar31 + 0x90);
        if (0 < (longlong)(int)uVar12) {
          iVar29 = *(int *)(lVar31 + 0x80);
          *(uint *)(lVar31 + 0x80) = iVar29 + uVar12;
          if ((uint)(*(int *)(lVar31 + 0x84) - iVar29) < uVar12) {
            FUN_1447808da(lVar31 + 0x78,iVar29);
          }
          memcpy((void *)((longlong)iVar29 * 4 + *(longlong *)(lVar31 + 0x78)),
                 *(void **)(lVar31 + 0x88),(longlong)(int)uVar12 << 2);
          lVar31 = *(longlong *)(param_1 + 0x198);
          if (*(int *)(lVar31 + 0x94) < 0) {
            *(undefined4 *)(lVar31 + 0x90) = 0;
            FUN_14480809c(lVar31 + 0x88,0);
          }
          else {
            *(undefined4 *)(lVar31 + 0x90) = 0;
          }
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x7c) == 0) || (uVar12 = *(uint *)(param_1 + 0x78), (int)uVar12 < 0)) {
LAB_14074a1fc:
    pcVar28 = (code *)0x0;
  }
  else {
    pcVar28 = (code *)0x0;
    if ((int)uVar12 < DAT_14c9647dc) {
      puVar25 = (undefined8 *)
                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
      if (((puVar25 == (undefined8 *)0x0) || (*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x7c))) ||
         ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) goto LAB_14074a1fc;
      pcVar28 = (code *)*puVar25;
    }
  }
  if (((((*(int *)(param_1 + 0x74) == 0) || (uVar12 = *(uint *)(param_1 + 0x70), (int)uVar12 < 0))
       || (DAT_14c9647dc <= (int)uVar12)) ||
      ((plVar22 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(param_1 + 0x74))))) ||
     ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) {
    local_438 = (code *)0x0;
    bVar36 = false;
    pcVar17 = (code *)0x0;
  }
  else {
    pcVar17 = (code *)*plVar22;
    bVar36 = pcVar17 != (code *)0x0;
    local_438 = pcVar17;
    if ((bVar36 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(pcVar17);
      bVar36 = true;
    }
  }
  local_430 = pcVar28;
  if ((pcVar28 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(pcVar28);
  }
  if (*(char *)(param_1 + 8) != '\0') goto LAB_14074a7e5;
  plVar22 = *(longlong **)(param_1 + 0x18);
  lVar31 = *(longlong *)(param_1 + 0x20);
  lVar26 = *(longlong *)(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x198) == 0) {
    if (((lVar26 == 0) || (pcVar34 = *(code **)(lVar26 + 0x290), pcVar34 == (code *)0x0)) ||
       (0xfffffffd < *(int *)(lVar26 + 0x298) - 1U)) {
      lVar13 = lVar31 + 0x1d0;
      pcVar34 = *(code **)(lVar31 + 0x1d0);
    }
    else {
      lVar13 = lVar26 + 0x290;
    }
    iVar29 = *(int *)(lVar13 + 8);
    local_3b8 = (longlong *)0x0;
    local_500 = plVar23;
    local_4f8 = pcVar17;
    local_4e8 = param_3;
    local_3c8 = pcVar34;
    iStack_3c0 = iVar29;
    if ((pcVar34 != (code *)0x0) && (iVar29 - 1U < 0xfffffffe)) {
      local_428 = (code *)0x0;
      pcStack_420 = (code *)CONCAT44(pcStack_420._4_4_,0x4fc71eb4);
      local_418 = (code *)0x0;
      local_4f0 = lVar31;
      fVar37 = (float)FUN_140acfedc(lVar31,&local_438,lVar26);
      if (iVar29 == 0x3d418293) {
        local_388 = local_4f8;
        if ((lVar26 == 0) || (pcVar17 = *(code **)(lVar26 + 0x10), pcVar17 == (code *)0x0)) {
          pcVar17 = (code *)FUN_1405faa04(local_4f0 + 0x18);
        }
        plStack_380 = (longlong *)CONCAT44(plStack_380._4_4_,fVar37);
        local_378 = pcVar17;
        FUN_141125464(&local_3c8,&local_1f8,&local_388);
        pcVar14 = local_1f8;
        if ((local_1f8 != (code *)0x0) || (iVar29 = 0x4fc71eb4, (int)pcStack_1f0 != 0x4fc71eb4)) {
          local_428 = local_1f8;
          pcStack_420 = (code *)CONCAT44(pcStack_420._4_4_,(int)pcStack_1f0);
          local_418 = (code *)0x0;
          iVar29 = (int)pcStack_1f0;
        }
      }
      else {
        local_418 = (code *)0x0;
        pcVar14 = (code *)0x1;
        iVar29 = 0x4fc71eb4;
        local_428 = pcVar34;
      }
      pcVar17 = local_4f8;
      plVar23 = local_500;
      param_3 = local_4e8;
      if ((pcVar14 != (code *)0x0) && (iVar29 - 1U < 0xfffffffe)) {
        pcVar34 = *(code **)(param_1 + 0x230);
        ppcVar15 = *(code ***)(param_1 + 0x238);
        ppcVar6 = *(code ***)(param_1 + 0x230);
        uVar38 = *(undefined4 *)(param_1 + 0x238);
        ppcVar2 = *(code ***)(param_1 + 0x240);
        if ((((double)pcVar34 != 0.0) ||
            (((NAN((double)pcVar34) || ((double)ppcVar15 != 0.0)) || (NAN((double)ppcVar15))))) ||
           (((double)ppcVar2 != 0.0 || (NAN((double)ppcVar2))))) {
          uStack_4b0 = 0;
          local_4b8 = ppcVar2;
          if ((*(int *)(param_1 + 0x1f8) == 0) ||
             (((uVar12 = *(uint *)(param_1 + 500), (int)uVar12 < 0 || (DAT_14c9647dc <= (int)uVar12)
               ) || ((plVar23 = (longlong *)
                                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
                     plVar23 == (longlong *)0x0 ||
                     ((((int)plVar23[2] != *(int *)(param_1 + 0x1f8) ||
                       ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) ||
                      (pcVar14 = (code *)*plVar23, (code *)*plVar23 == (code *)0x0)))))))) {
            if (pcVar28 == (code *)0x0) {
              pcVar14 = pcVar17;
              if ((bVar36 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              else if (local_4f8 == (code *)0x0) {
                if (plVar22[6] == 0) {
                  pcVar14 = (code *)0x0;
                }
                else {
                  pcVar14 = *(code **)(plVar22[6] + 0x2b0);
                }
              }
            }
            else {
              pcVar14 = pcVar28;
              if (DAT_14c950c29 != 0) {
                FUN_1456cec3c();
              }
            }
          }
          pcStack_358 = (code *)0x0;
          pcStack_350 = (code *)0x0;
          local_368 = (code *)0x0;
          pcStack_360 = (code *)0x0;
          local_378 = (code *)0x0;
          pcStack_370 = (code *)0x0;
          local_388 = (code *)0x0;
          plStack_380 = (longlong *)0x0;
          local_348 = (code *)CONCAT44(local_348._4_4_,0xc0);
          local_338 = 0;
          plStack_328 = (longlong *)0x0;
          local_2f8 = 0;
          local_2e8 = (longlong *)0x0;
          local_490[2] = 0;
          *local_490 = 0;
          local_490[1] = 0;
          local_2a0 = 0x3ff0000000000000;
          local_298 = 0x3ff0000000000000;
          local_290 = 0x3ff0000000000000;
          local_280 = 0;
          local_288 = fVar37;
          if (lVar26 == 0) {
            local_284 = 0x3f800000;
LAB_14074a64f:
            if (fVar37 <= 0.0) goto LAB_14074a3f6;
LAB_14074a659:
            if (plVar22[0x3e] == 0) {
              plVar23 = plVar22 + 0x8c;
            }
            else {
              plVar23 = *(longlong **)(plVar22[0x3e] + 0xf8);
            }
            uVar16 = FUN_14001cc68(0x170,0x10);
            if (lVar26 == 0) {
              uVar30 = 0;
            }
            else if (*(char *)(lVar26 + 0x2cd) == '\x01') {
              uVar30 = *(undefined1 *)(lVar26 + 0x2cc);
            }
            else {
              uVar30 = 0;
            }
            local_1f8 = (code *)0x0;
            pcStack_1f0 = (code *)0x0;
            local_1e8 = (code *)0x0;
            ppcStack_1e0 = (code **)&DAT_3ff0000000000000;
            uStack_1d0 = (code *)CONCAT44((int)((ulonglong)ppcVar15 >> 0x20),uVar38);
            ppcStack_1c8 = local_4b8;
            ppcStack_1c0 = (code **)0x0;
            local_1b8 = 1.0;
            uStack_1b0 = 1.0;
            local_1a8 = 1.0;
            uStack_1a0 = 0;
            local_530 = (code *)CONCAT71(local_530._1_7_,uVar30);
            local_538 = (wchar_t *)CONCAT71(local_538._1_7_,*(undefined1 *)(local_4f0 + 0x1ed));
            local_540 = CONCAT71(local_540._1_7_,*(undefined1 *)(local_4f0 + 0x1ec));
            local_548 = (longlong *)CONCAT44(local_548._4_4_,*(undefined4 *)(local_4f0 + 0x1e8));
            local_550 = &local_388;
            local_558 = &local_1f8;
            local_528 = (undefined1 *)CONCAT44(local_528._4_4_,4);
            local_1d8 = ppcVar6;
            FUN_140da069c(uVar16,plVar22,&local_428,pcVar14);
            FUN_140b1330e(plVar23,plVar22,0x2db22e3);
          }
          else {
            local_284 = *(undefined4 *)(lVar26 + 0x2c0);
            if ((*(byte *)(lVar26 + 0x278) & 0x20) != 0) {
              local_348 = (code *)CONCAT44(local_348._4_4_,0x1c0);
            }
            if ((((*(double *)(lVar26 + 200) == 0.0) && (!NAN(*(double *)(lVar26 + 200)))) &&
                ((*(double *)(lVar26 + 0xd0) == 0.0 &&
                 ((!NAN(*(double *)(lVar26 + 0xd0)) && (*(double *)(lVar26 + 0xd8) == 0.0)))))) &&
               (!NAN(*(double *)(lVar26 + 0xd8)))) goto LAB_14074a64f;
            lVar31 = FUN_14485cccc(lVar26 + 0x158);
            if (lVar31 == 0) goto LAB_14074a64f;
            lVar31 = FUN_14485cccc(lVar26 + 0x158);
            if ((0.0 < fVar37) && ((*(byte *)(lVar31 + 0x62) & 4) != 0)) goto LAB_14074a659;
LAB_14074a3f6:
            FUN_1407f7f84(&local_1f8);
            if (pcStack_1f0 != (code *)0x0) {
              iVar29 = *(int *)(pcStack_1f0 + 8);
              do {
                if (iVar29 == 0) {
                  pcVar28 = (code *)0x0;
                  break;
                }
                LOCK();
                iVar33 = *(int *)(pcStack_1f0 + 8);
                bVar36 = iVar29 == iVar33;
                if (bVar36) {
                  *(int *)(pcStack_1f0 + 8) = iVar29 + 1;
                  iVar33 = iVar29;
                }
                iVar29 = iVar33;
                UNLOCK();
                pcVar28 = pcStack_1f0;
              } while (!bVar36);
              LOCK();
              pcVar17 = pcStack_1f0 + 0xc;
              *(int *)pcVar17 = *(int *)pcVar17 + -1;
              UNLOCK();
              if (*(int *)pcVar17 == 0) {
                (**(code **)(*(longlong *)pcStack_1f0 + 0x10))();
              }
              pcVar17 = local_1f8;
              if (pcVar28 != (code *)0x0) {
                if (local_1f8 != (code *)0x0) {
                  if (lVar26 == 0) {
                    memset(&local_1f8,0,0x100);
                    local_1f8 = (code *)CONCAT44(0x3f800000,(undefined4)local_1f8);
                    local_154 = 0xffffffff;
                    local_128 = 0xffffffff;
                  }
                  else {
                    memcpy(&local_1f8,(void *)(lVar26 + 0xa0),0xb8);
                    local_140 = *(undefined8 *)(lVar26 + 0x158);
                    local_138 = *(undefined8 *)(lVar26 + 0x160);
                    uStack_130 = *(undefined8 *)(lVar26 + 0x168);
                    local_128 = *(undefined4 *)(lVar26 + 0x170);
                    local_124 = *(undefined1 *)(lVar26 + 0x174);
                    local_100 = *(undefined8 *)(lVar26 + 0x198);
                    local_110 = *(undefined8 *)(lVar26 + 0x188);
                    lStack_108 = *(longlong *)(lVar26 + 400);
                    local_120 = *(undefined8 *)(lVar26 + 0x178);
                    uStack_118 = *(undefined8 *)(lVar26 + 0x180);
                  }
                  if ((*(char *)(local_4f0 + 0x1ed) != '\x01') || ((local_14b & 1) == 0)) {
                    local_1e8 = pcVar34;
                    ppcStack_1e0 = ppcVar15;
                    local_1d8 = local_4b8;
                  }
                  if (1e-08 < ABS(*(float *)(local_4f0 + 0x1e8))) {
                    if (*(char *)(local_4f0 + 0x1ec) == '\x01') {
                      pdVar24 = &local_1a8;
                      pdVar19 = (double *)&uStack_1b0;
                      pdVar18 = (double *)&local_1b8;
                      if ((local_14b & 1) == 0) goto LAB_14074b301;
                    }
                    else {
LAB_14074b301:
                      pdVar24 = &DAT_14c8462d0;
                      pdVar19 = (double *)&DAT_14c8462c8;
                      pdVar18 = (double *)&DAT_14c8462c0;
                    }
                    dVar5 = (double)*(float *)(local_4f0 + 0x1e8);
                    local_1e8 = (code *)(dVar5 * *pdVar18 + (double)local_1e8);
                    ppcStack_1e0 = (code **)(*pdVar19 * dVar5 + (double)ppcStack_1e0);
                    local_1d8 = (code **)(*pdVar24 * dVar5 + (double)local_1d8);
                  }
                  if (lVar26 == 0) {
                    ppcStack_1c0 = local_1d8;
                    uStack_1d0 = local_1e8;
                    ppcStack_1c8 = ppcStack_1e0;
LAB_14074a566:
                    uVar30 = 0;
                  }
                  else {
                    if ((*(byte *)(lVar26 + 0x14d) & 3) != 1) {
                      ppcStack_1c0 = local_1d8;
                      uStack_1d0 = local_1e8;
                      ppcStack_1c8 = ppcStack_1e0;
                    }
                    if (*(char *)(lVar26 + 0x2cd) != '\x01') goto LAB_14074a566;
                    uVar30 = *(undefined1 *)(lVar26 + 0x2cc);
                  }
                  local_458 = local_428;
                  FUN_1446dcdd4(&local_238,&local_458);
                  if (((DAT_14cb78ff0 != 0) &&
                      (lVar31 = FUN_144837462(DAT_14cb78ff0,&local_238), pcVar14 != (code *)0x0)) &&
                     (lVar31 != 0)) {
                    local_550 = &local_388;
                    local_558 = (longlong *)CONCAT71(local_558._1_7_,uVar30);
                    local_548 = (longlong *)((ulonglong)local_548 & 0xffffffff00000000);
                    FUN_1408f2522(pcVar17,lVar31,pcVar14);
                  }
                  if (lStack_220 != 0) {
                    FUN_1400020a8();
                  }
                }
                LOCK();
                pcVar17 = pcVar28 + 8;
                *(int *)pcVar17 = *(int *)pcVar17 + -1;
                UNLOCK();
                if (*(int *)pcVar17 == 0) {
                  (*(code *)**(undefined8 **)pcVar28)(pcVar28);
                  LOCK();
                  pcVar17 = pcVar28 + 0xc;
                  *(int *)pcVar17 = *(int *)pcVar17 + -1;
                  UNLOCK();
                  if (*(int *)pcVar17 == 0) {
                    (**(code **)(*(longlong *)pcVar28 + 0x10))(pcVar28);
                  }
                }
              }
            }
          }
          if (local_2f8 != 0) {
            plVar23 = local_2e8;
            if (local_2e8 == (longlong *)0x0) {
              plVar23 = local_498;
            }
            (**(code **)(*plVar23 + 0x10))();
          }
          if (local_338 != 0) {
            plVar23 = plStack_328;
            if (plStack_328 == (longlong *)0x0) {
              plVar23 = local_318;
            }
            (**(code **)(*plVar23 + 0x10))();
          }
          if (pcStack_358 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_368 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_378 != (code *)0x0) {
            FUN_1400020a8();
          }
          plVar23 = local_500;
          pcVar17 = local_4f8;
          param_3 = local_4e8;
          if (local_388 != (code *)0x0) {
            FUN_1400020a8();
            plVar23 = local_500;
            pcVar17 = local_4f8;
            param_3 = local_4e8;
          }
        }
      }
    }
  }
  else if (pcVar17 != (code *)0x0) {
    if (((lVar26 == 0) || (pcVar28 = *(code **)(lVar26 + 0x290), pcVar28 == (code *)0x0)) ||
       (0xfffffffd < *(int *)(lVar26 + 0x298) - 1U)) {
      lVar13 = lVar31 + 0x1d0;
      pcVar28 = *(code **)(lVar31 + 0x1d0);
    }
    else {
      lVar13 = lVar26 + 0x290;
    }
    iVar29 = *(int *)(lVar13 + 8);
    local_3b8 = (longlong *)0x0;
    local_3c8 = pcVar28;
    iStack_3c0 = iVar29;
    if ((pcVar28 != (code *)0x0) && (iVar29 - 1U < 0xfffffffe)) {
      local_4f8 = (code *)CONCAT71(local_4f8._1_7_,param_2);
      local_500 = plVar22;
      local_4f0 = lVar31;
      local_4e8 = param_3;
      local_4a0 = *(longlong *)(param_1 + 0x198);
      uVar38 = FUN_140acfedc(lVar31,&local_438,lVar26);
      local_4b8 = (code **)CONCAT44(local_4b8._4_4_,uVar38);
      bVar36 = true;
      if (iVar29 == 0x3d418293) {
        local_388 = pcVar17;
        if ((lVar26 == 0) || (pcVar28 = *(code **)(lVar26 + 0x10), pcVar28 == (code *)0x0)) {
          pcVar28 = (code *)FUN_1405faa04(local_4f0 + 0x18);
        }
        plStack_380 = (longlong *)CONCAT44(plStack_380._4_4_,local_4b8._0_4_);
        local_378 = pcVar28;
        FUN_141125464(&local_3c8,&local_1f8,&local_388);
        pcVar28 = (code *)0x0;
        if ((int)pcStack_1f0 != 0x4fc71eb4) {
          pcVar28 = local_1f8;
        }
        if (local_1f8 != (code *)0x0) {
          pcVar28 = local_1f8;
        }
        bVar36 = (int)pcStack_1f0 - 1U < 0xfffffffe;
      }
      param_3 = local_4e8;
      param_2 = (byte)local_4f8;
      if ((pcVar28 != (code *)0x0) && (bVar36)) {
        FUN_1407f7f84(&local_388);
        local_500 = plStack_380;
        if (plStack_380 != (longlong *)0x0) {
          iVar29 = (int)plStack_380[1];
          do {
            if (iVar29 == 0) {
              local_500 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar33 = (int)plStack_380[1];
            bVar36 = iVar29 == iVar33;
            if (bVar36) {
              *(int *)(plStack_380 + 1) = iVar29 + 1;
              iVar33 = iVar29;
            }
            iVar29 = iVar33;
            UNLOCK();
          } while (!bVar36);
          LOCK();
          piVar1 = (int *)((longlong)plStack_380 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_380 + 0x10))();
          }
          if (local_500 != (longlong *)0x0) {
            local_4a8 = local_388;
            if (local_388 != (code *)0x0) {
              memset(&local_1f8,0,0x100);
              local_128 = 0xffffffff;
              local_1f8 = (code *)CONCAT44(0x3f800000,(undefined4)local_1f8);
              local_154 = 0xffffffff;
              local_4d8 = local_438;
              FUN_140871de8(local_478);
              ppcStack_1c0 = (code **)local_480[2];
              uStack_1d0 = (code *)*local_480;
              ppcStack_1c8 = (code **)local_480[1];
              local_1d8 = (code **)local_480[2];
              local_1e8 = (code *)*local_480;
              ppcStack_1e0 = (code **)local_480[1];
              local_190 = DAT_14c8462d0;
              uStack_1a0 = CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
              uStack_198 = CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
              local_1b8 = (double)CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
              uStack_1b0 = (double)CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
              local_1a8 = DAT_14c8462d0;
              if (((lVar26 == 0) || (lStack_108 = *(longlong *)(lVar26 + 0x240), lStack_108 == 0))
                 && (local_4d0 = *(longlong *)(local_4f0 + 0xb0), lStack_108 = local_4d0,
                    local_4d0 == 0)) {
LAB_14074b3ba:
                if (*(code **)(*(longlong *)local_4d8 + 0x3a8) == (code *)&LAB_144a8179a) {
                  plVar22 = *(longlong **)(local_4d8 + 0x1c8);
                }
                else {
                  plVar22 = (longlong *)(**(code **)(*(longlong *)local_4d8 + 0x3a8))();
                }
                if (plVar22 != (longlong *)0x0) goto LAB_14074b403;
LAB_14074b432:
                local_120 = 0;
                iVar29 = 0;
              }
              else {
                puStack_2c8 = (undefined8 *)0x0;
                local_2c0 = 0x1800000000;
                local_4d0 = lStack_108;
                if (local_4d8 == (code *)0x0) goto LAB_14074b3ba;
                FUN_140a44582(local_4d8,&local_388,0);
                lVar31 = (longlong)(int)local_2c0;
                puVar25 = puStack_2c8;
                if (puStack_2c8 == (undefined8 *)0x0) {
                  puVar25 = &local_388;
                }
                if (lVar31 == 0) {
LAB_14074b241:
                  if (puStack_2c8 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  goto LAB_14074b3ba;
                }
                lVar26 = 0;
                while ((plVar22 = *(longlong **)((longlong)puVar25 + lVar26),
                       plVar22 == (longlong *)0x0 ||
                       (cVar11 = (**(code **)(*plVar22 + 0x4c8))(plVar22,local_4d0), cVar11 == '\0')
                       )) {
                  lVar26 = lVar26 + 8;
                  if (lVar31 * 8 == lVar26) goto LAB_14074b241;
                }
                if (puStack_2c8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
LAB_14074b403:
                if (DAT_14cac6e60 == 0) {
                  local_388 = FUN_144a7958c;
                  local_510 = FUN_14081d0ea;
                  local_518 = FUN_142b47bc4;
                  local_520 = &local_388;
                  local_528 = &LAB_1478989f1;
                  local_530 = (code *)&LAB_146391124;
                  local_538 = L"Engine";
                  local_540 = 0x10000000000;
                  local_548 = (longlong *)CONCAT44(local_548._4_4_,0x10000005);
                  local_550 = (undefined8 *)CONCAT44(local_550._4_4_,0x10);
                  local_558 = (longlong *)CONCAT44(local_558._4_4_,0x620);
                  FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60);
                }
                if ((*(int *)(plVar22[2] + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar22[2] + 0x30) +
                     (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30))
                goto LAB_14074b432;
                uVar12 = *(uint *)((longlong)plVar22 + 0xc);
                local_120 = CONCAT44(local_120._4_4_,uVar12);
                if ((int)uVar12 < DAT_14c9647dc) {
                  lVar31 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                }
                else {
                  lVar31 = 0;
                }
                iVar29 = *(int *)(lVar31 + 0x10);
                if (*(int *)(lVar31 + 0x10) == 0) {
                  LOCK();
                  iVar29 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar33 = DAT_14c964868 + 1;
                  bVar36 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar29;
                  if (bVar36) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  iVar29 = *(int *)(lVar31 + 0x10);
                  bVar36 = iVar29 == 0;
                  if (bVar36) {
                    *(int *)(lVar31 + 0x10) = iVar33;
                    iVar29 = 0;
                  }
                  UNLOCK();
                  if (bVar36) {
                    iVar29 = iVar33;
                  }
                }
              }
              local_120 = CONCAT44(iVar29,(undefined4)local_120);
              if ((*(int *)(param_1 + 0x1f8) == 0) ||
                 (uVar12 = *(uint *)(param_1 + 500), (int)uVar12 < 0)) {
LAB_14074b7f1:
                pcVar34 = (code *)0x0;
              }
              else {
                pcVar34 = (code *)0x0;
                if ((int)uVar12 < DAT_14c9647dc) {
                  puVar25 = (undefined8 *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                  if (((puVar25 == (undefined8 *)0x0) ||
                      (*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x1f8))) ||
                     ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)) goto LAB_14074b7f1;
                  pcVar34 = (code *)*puVar25;
                }
              }
              if (pcVar34 == (code *)0x0) {
                pcVar34 = local_438;
              }
              pcStack_358 = (code *)0x0;
              pcStack_350 = (code *)0x0;
              local_368 = (code *)0x0;
              pcStack_360 = (code *)0x0;
              local_378 = (code *)0x0;
              pcStack_370 = (code *)0x0;
              local_388 = (code *)0x0;
              plStack_380 = (longlong *)0x0;
              local_348 = (code *)CONCAT44(local_348._4_4_,0xc0);
              local_338 = 0;
              plStack_328 = (longlong *)0x0;
              local_2f8 = 0;
              local_2e8 = (longlong *)0x0;
              local_490[2] = 0;
              *local_490 = 0;
              local_490[1] = 0;
              local_2a0 = 0x3ff0000000000000;
              local_298 = 0x3ff0000000000000;
              local_290 = 0x3ff0000000000000;
              local_280 = 0;
              local_288 = local_4b8._0_4_;
              local_284 = *(undefined4 *)(local_4a0 + 0x30);
              local_428 = pcVar28;
              if ((*(byte *)(local_4f0 + 0x1a9) & 1) == 0) {
                FUN_1446dcdd4(&local_238,&local_428);
                if (((DAT_14cb78ff0 != 0) &&
                    (lVar31 = FUN_144837462(DAT_14cb78ff0,&local_238), pcVar34 != (code *)0x0)) &&
                   (lVar31 != 0)) {
                  local_550 = &local_388;
                  local_548 = (longlong *)((ulonglong)local_548 & 0xffffffff00000000);
                  local_558 = (longlong *)((ulonglong)local_558 & 0xffffffffffffff00);
                  FUN_1408f2522(local_4a8,lVar31,pcVar34);
                }
              }
              else {
                FUN_1446dcdd4(&local_238,&local_428);
                if (DAT_14cb78ff0 == 0) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = FUN_144837462(DAT_14cb78ff0,&local_238);
                }
                local_550 = &local_388;
                local_548 = (longlong *)((ulonglong)local_548 & 0xffffffff00000000);
                local_558 = (longlong *)((ulonglong)local_558 & 0xffffffffffffff00);
                uVar38 = FUN_14883101a(local_4a8,uVar16,pcVar34);
                *(undefined4 *)(local_4a0 + 0xe8) = uVar38;
              }
              if (lStack_220 != 0) {
                FUN_1400020a8();
              }
              if (local_2f8 != 0) {
                plVar22 = local_2e8;
                if (local_2e8 == (longlong *)0x0) {
                  plVar22 = local_498;
                }
                (**(code **)(*plVar22 + 0x10))();
              }
              if (local_338 != 0) {
                plVar22 = plStack_328;
                if (plStack_328 == (longlong *)0x0) {
                  plVar22 = local_318;
                }
                (**(code **)(*plVar22 + 0x10))();
              }
              if (pcStack_358 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_368 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_378 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_388 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            param_3 = local_4e8;
            plVar21 = local_500;
            LOCK();
            plVar22 = local_500 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            param_2 = (byte)local_4f8;
            if ((int)*plVar22 == 0) {
              (**(code **)*local_500)(local_500);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_500 + 0x10))();
              }
            }
            goto LAB_14074a7e5;
          }
        }
        param_3 = local_4e8;
        param_2 = (byte)local_4f8;
      }
    }
  }
LAB_14074a7e5:
  if (*(char *)(param_1 + 0xc) == '\x01') {
    bVar36 = *(char *)(param_1 + 0x394) == '\x01';
    if (bVar36) {
      local_388 = (code *)CONCAT44(local_388._4_4_,*(undefined4 *)(param_1 + 0x390));
    }
    local_388._0_5_ = CONCAT14(bVar36,(undefined4)local_388);
    local_550 = &local_388;
    local_558 = plVar23;
    FUN_14074bd64(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),&local_438);
  }
  lVar31 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar22 = (longlong *)FUN_145a7712c();
    lVar31 = plVar22[0x22];
    if (plVar22[0x22] == 0) {
      (**(code **)(*plVar22 + 1000))(plVar22);
      lVar31 = plVar22[0x22];
    }
  }
  DAT_14cb24ad0 = lVar31;
  local_418 = (code *)local_468[2];
  local_428 = (code *)*local_468;
  pcStack_420 = (code *)local_468[1];
  fVar37 = (float)FUN_140acfedc(*(undefined8 *)(param_1 + 0x20),&local_438,
                                *(undefined8 *)(param_1 + 0x188));
  uVar38 = FUN_14187bb14(*(undefined8 *)(param_1 + 0x20),pcVar17,*(undefined8 *)(param_1 + 0x188));
  uVar39 = FUN_14187bbf0(*(undefined8 *)(param_1 + 0x20),pcVar17,*(undefined8 *)(param_1 + 0x188));
  local_448 = DAT_14c8464f0;
  local_458 = DAT_14c8464e0;
  plStack_450 = DAT_14c8464e8;
  lVar31 = *(longlong *)(param_1 + 0x188);
  if (lVar31 != 0) {
    ppcVar15 = (code **)(lVar31 + 0x1e0);
    if (*(char *)(lVar31 + 0x1f8) == '\0') {
      ppcVar15 = &local_428;
    }
    local_418 = ppcVar15[2];
    local_428 = *ppcVar15;
    pcStack_420 = ppcVar15[1];
    if (*(char *)(lVar31 + 0x7c) == '\x01') {
      fVar37 = *(float *)(lVar31 + 0x78);
    }
    plVar22 = (longlong *)(lVar31 + 0x220);
    if (*(char *)(lVar31 + 0x238) == '\0') {
      plVar22 = &local_458;
    }
    local_448 = plVar22[2];
    local_458 = (code *)*plVar22;
    plStack_450 = (longlong *)plVar22[1];
  }
  memset(&local_388,0,0x100);
  local_368 = local_418;
  local_378 = local_428;
  pcStack_370 = pcStack_420;
  pcStack_350 = local_418;
  pcStack_360 = local_428;
  pcStack_358 = pcStack_420;
  local_338 = local_448;
  local_348 = local_458;
  plStack_340 = plStack_450;
  local_320 = local_448;
  local_330 = (undefined4)local_458;
  uStack_32c = local_458._4_4_;
  plStack_328 = plStack_450;
  if (((DAT_14cad83b0 == '\x01') && (DAT_14c86a9f8 == '\x01')) && (*local_488 == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    lVar31 = *(longlong *)(param_1 + 0x188);
  }
  *local_460 = 0;
  local_460[1] = 0;
  local_460[2] = 0;
  local_2b8 = 0xffffffff;
  uStack_2b4 = 1;
  uStack_2b0 = 0;
  local_278 = (code *)0x0;
  local_268 = (longlong *)0x0;
  local_2e0 = 0xffffffff;
  local_27c = 2;
  local_1f8 = *(code **)(lVar31 + 0x10);
  ppcStack_1c0 = (code **)0x0;
  lVar26 = lVar31 + 0x18;
  if (*(longlong *)(lVar31 + 0x48) != 0) {
    lVar26 = *(longlong *)(lVar31 + 0x48);
  }
  local_288 = fVar37;
  local_284 = uVar38;
  local_280 = uVar39;
  FUN_1400709d4(&pcStack_1f0,lVar26,*(undefined4 *)(lVar31 + 0x50));
  local_3c8 = (code *)0x0;
  plVar22 = (longlong *)FUN_14001cc68(0x50,8);
  *plVar22 = (longlong)&PTR_FUN_14b3f6190;
  plVar22[1] = (longlong)local_1f8;
  plVar22[8] = 0;
  ppcVar15 = ppcStack_1c0;
  if (ppcStack_1c0 == (code **)0x0) {
    ppcVar15 = &pcStack_1f0;
  }
  local_3b8 = plVar22;
  FUN_1400709d4(plVar22 + 2,ppcVar15,(ulonglong)local_1b8 & 0xffffffff);
  uVar10 = uStack_240;
  uVar9 = local_248;
  uVar8 = uStack_250;
  lVar26 = local_258;
  lVar31 = lStack_260;
  plVar21 = local_268;
  uVar16 = uStack_270;
  pcVar28 = local_278;
  if (plVar22 != (longlong *)&DAT_fffffffffffffff8) {
    local_3c8 = FUN_143cfdd48;
  }
  local_208 = local_248;
  uStack_200 = uStack_240;
  local_218 = local_258;
  uStack_210 = uStack_250;
  local_228 = local_268;
  lStack_220 = lStack_260;
  local_238 = local_278;
  uStack_230 = uStack_270;
  local_248 = CONCAT44(uStack_394,local_398);
  uStack_240 = CONCAT44(uStack_38c,uStack_390);
  local_258 = CONCAT44(uStack_3a4,local_3a8);
  uStack_250 = CONCAT44(uStack_39c,uStack_3a0);
  local_268 = local_3b8;
  lStack_260 = lStack_3b0;
  local_278 = local_3c8;
  uStack_270 = CONCAT44(uStack_3bc,iStack_3c0);
  uStack_230._0_4_ = (int)uVar16;
  uStack_230._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_218._0_4_ = (undefined4)lVar26;
  local_218._4_4_ = (undefined4)((ulonglong)lVar26 >> 0x20);
  uStack_210._0_4_ = (undefined4)uVar8;
  uStack_210._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_208._0_4_ = (undefined4)uVar9;
  local_208._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_200._0_4_ = (undefined4)uVar10;
  uStack_200._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_398 = (undefined4)local_208;
  uStack_394 = local_208._4_4_;
  uStack_390 = (undefined4)uStack_200;
  uStack_38c = uStack_200._4_4_;
  local_3a8 = (undefined4)local_218;
  uStack_3a4 = local_218._4_4_;
  uStack_3a0 = (undefined4)uStack_210;
  uStack_39c = uStack_210._4_4_;
  local_3b8 = plVar21;
  lStack_3b0 = lVar31;
  local_3c8 = pcVar28;
  iStack_3c0 = (int)uStack_230;
  uStack_3bc = uStack_230._4_4_;
  uStack_230 = uVar16;
  local_218 = lVar26;
  uStack_210 = uVar8;
  local_208 = uVar9;
  uStack_200 = uVar10;
  if (pcVar28 != (code *)0x0) {
    if (plVar21 == (longlong *)0x0) {
      plVar21 = (longlong *)&local_3a8;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (ppcStack_1c0 != (code **)0x0) {
    FUN_1400020a8();
  }
  iVar29 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar29 != 0) {
    lVar31 = *(longlong *)(param_1 + 0x1a8);
    lVar26 = 0;
    do {
      iVar33 = *(int *)(lVar31 + 0x24 + lVar26);
      if (((((iVar33 != 0) && (uVar12 = *(uint *)(lVar31 + 0x20 + lVar26), -1 < (int)uVar12)) &&
           ((int)uVar12 < DAT_14c9647dc)) &&
          ((plVar22 = (longlong *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
           plVar22 != (longlong *)0x0 && ((int)plVar22[2] == iVar33)))) &&
         (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 && (lVar13 = *plVar22, lVar13 != 0)))) {
        uVar16 = FUN_14079f750();
        plVar22 = (longlong *)FUN_144718840(lVar13,uVar16);
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x18))(plVar22,&local_388);
        }
      }
      lVar26 = lVar26 + 0x48;
    } while ((longlong)iVar29 * 0x48 != lVar26);
  }
  lVar31 = local_4c8;
  plVar22 = local_4e0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    uVar16 = FUN_140ccfc10();
    fVar40 = (float)FUN_140ccfb96(uVar16);
    if (1e-08 < ABS(fVar40)) {
      local_1e8 = local_418;
      local_1f8 = local_428;
      pcStack_1f0 = pcStack_420;
      FUN_140ccfdcb(*(undefined8 *)(param_1 + 0x18),&local_1f8,fVar37,fVar40);
    }
  }
  if (local_278 != (code *)0x0) {
    plVar21 = local_268;
    if (local_268 == (longlong *)0x0) {
      plVar21 = &local_258;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (*(int *)(param_1 + 0x1d0) == 0) {
LAB_14074babf:
    *(undefined4 *)(param_1 + 4) = 6;
    goto LAB_14074bac6;
  }
  *(undefined4 *)(param_1 + 4) = 5;
  iVar29 = 5;
  goto LAB_1407497b0;
switchD_1407497d1_caseD_1:
  plVar21 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x348);
  local_548 = *(longlong **)(param_1 + 0x188);
  local_550 = *(undefined8 **)(param_1 + 0x198);
  local_558 = plVar23;
  (**(code **)(*plVar21 + 0x40))(plVar21,plVar22,local_4c0);
  *(undefined4 *)(param_1 + 4) = 2;
  iVar29 = 2;
joined_r0x000140749dbe:
  if (bVar7 != 0) {
LAB_14074bac6:
    *(undefined1 *)(param_1 + 10) = 0;
    if (*param_3 != 0) {
      plVar23 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar23 = (longlong *)param_3[2];
      }
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    if ((local_f0 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_1407497b0;
}



// FUNCTION 14074bba4 FUN_14074bba4 body=446 status=ok
// SIG undefined FUN_14074bba4(void)

void FUN_14074bba4(longlong *param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  cVar1 = FUN_140746d72(uVar2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3,param_4);
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
    }
  }
  lVar3 = (**(code **)(*param_3 + 0xf8))(param_3);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar3 == 0) goto LAB_14074bc40;
  }
  else {
    FUN_1456cec3c(lVar3);
  }
  uVar2 = FUN_140746dd0();
  plVar4 = (longlong *)FUN_144718840(lVar3,uVar2);
  if (plVar4 != (longlong *)0x0 && lVar3 != 0) {
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (lVar3 != 0) {
      uVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
      lVar5 = FUN_1447210f0(uVar2);
      local_90 = DAT_14c9abc00;
      if (lVar5 == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = *(undefined4 *)(lVar5 + 0x6f4);
      }
      lVar5 = (**(code **)(*param_3 + 0xa8))(param_3);
      uVar2 = *(undefined8 *)(lVar5 + 0xf0);
      (**(code **)(*param_3 + 0xb0))(param_3,local_68);
      (**(code **)(*param_3 + 200))(param_3,local_80);
      local_98 = uVar6;
      FUN_1458bf390(lVar3,local_80,local_68,uVar2);
    }
  }
LAB_14074bc40:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14074bd64 FUN_14074bd64 body=1599 status=ok
// SIG undefined FUN_14074bd64(void)

void FUN_14074bd64(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined4 *param_6)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 ****ppppuVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  byte local_1f0;
  byte local_1e8;
  float local_1e0;
  float local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 ***local_140;
  int local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 ***local_e8;
  int local_e0;
  undefined8 local_d8;
  ushort local_d0;
  byte local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((*(byte *)(param_1 + 0x2d0) & 1) == 0) goto LAB_14074c059;
  if ((param_4 == 0) || (*(char *)(param_4 + 0x274) != '\x01')) {
    uVar7 = FUN_1406f3fb0(param_1 + 0x314);
    local_128 = (double)((ulonglong)local_128 & 0xffffffffffffff00);
    uStack_100 = uStack_100 & 0xffffffff00000000;
    FUN_1456bb102(&local_128,*param_3);
    FUN_1448729ea(uVar7,&local_e8,&local_128);
    fVar10 = (float)FUN_144a7b41a(&local_e8,&DAT_40a00000);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar9 = &local_e8;
      if (0x18 < local_d0) {
        ppppuVar9 = (undefined8 ****)local_e8;
      }
      (*pcVar4)(ppppuVar9);
    }
    if (0x18 < local_d0) {
      FUN_1400020a8(local_e8);
    }
    FUN_144a5ac3a(&local_128);
  }
  else {
    fVar10 = *(float *)(param_4 + 0x270);
  }
  if (fVar10 <= 0.0) goto LAB_14074c059;
  local_e8 = *(undefined8 ****)(param_1 + 0x2d8);
  local_e0 = *(int *)(param_1 + 0x2e0);
  local_d8 = 0;
  if (((0xfffffffd < local_e0 - 1U || (undefined8 ****)local_e8 == (undefined8 ****)0x0) ||
      (*(char *)(param_1 + 0x2d0) < '\0')) &&
     ((((param_4 != 0 && (lVar6 = *(longlong *)(param_4 + 0x10), lVar6 != 0)) ||
       (lVar6 = FUN_1405faa04(param_1 + 0x18), lVar6 != 0)) &&
      (((ppppuVar9 = *(undefined8 *****)(lVar6 + 0xc0), ppppuVar9 != (undefined8 ****)0x0 &&
        (iVar3 = *(int *)(lVar6 + 200), iVar3 - 1U < 0xfffffffe)) &&
       (((undefined8 ****)local_e8 != ppppuVar9 || (local_e0 != iVar3)))))))) {
    local_d8 = 0;
    local_e8 = ppppuVar9;
    local_e0 = iVar3;
  }
  lVar6 = FUN_14074d544(&local_e8);
  if (lVar6 == 0) goto LAB_14074c059;
  fVar12 = *(float *)(param_1 + 0x30c);
  if ((*(byte *)(param_1 + 0x2d0) & 4) == 0) {
    if ((*(byte *)(param_1 + 0x2d0) & 2) == 0) {
      iVar3 = *(int *)(param_5 + 4);
      if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 1)) {
        fVar12 = *(float *)(param_5 + 8);
      }
      else {
        fVar12 = (float)DAT_14c8464e0;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_5 + 4);
    if (((iVar3 == 3) || (iVar3 == 2)) || (dVar13 = DAT_14c8464e0, iVar3 == 1)) {
      dVar13 = (double)*(float *)(param_5 + 8);
    }
    fVar12 = (float)((double)fVar12 * dVar13);
  }
  if ((param_4 == 0) || ((*(byte *)(param_4 + 0x14d) & 3) != 1)) {
LAB_14074beaf:
    dVar5 = *(double *)(param_5 + 0x50);
    dVar11 = *(double *)(param_5 + 0x58);
    dVar13 = *(double *)(param_5 + 0x60);
    uVar8 = 1;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0x3ff00000;
  }
  else {
    lVar6 = FUN_14485cccc(param_4 + 0x158);
    if ((lVar6 == 0) || (lVar6 = FUN_14485cccc(param_4 + 0x158), (*(byte *)(lVar6 + 0x62) & 4) != 0)
       ) goto LAB_14074beaf;
    dVar13 = *(double *)(param_4 + 0x108) * 5.0 + *(double *)(param_4 + 0xd8);
    dVar11 = *(double *)(param_4 + 0x100) * 5.0 + *(double *)(param_4 + 0xd0);
    dVar5 = *(double *)(param_4 + 0xf8) * 5.0 + *(double *)(param_4 + 200);
    FUN_144a9d448(&local_128,&DAT_14c8462c0,param_4 + 0xf8);
    uVar8 = 0;
    uVar14 = (undefined4)local_128;
    uVar15 = local_128._4_4_;
    uVar16 = (undefined4)uStack_120;
    uVar17 = uStack_120._4_4_;
    uVar18 = (undefined4)local_118;
    uVar19 = local_118._4_4_;
    uVar20 = (undefined4)uStack_110;
    uVar21 = uStack_110._4_4_;
  }
  if (((((*(double *)(param_1 + 0x2f0) != 0.0) || (NAN(*(double *)(param_1 + 0x2f0)))) ||
       (*(double *)(param_1 + 0x2f8) != 0.0)) ||
      ((NAN(*(double *)(param_1 + 0x2f8)) || (*(double *)(param_1 + 0x300) != 0.0)))) ||
     (NAN(*(double *)(param_1 + 0x300)))) {
    FUN_1401c9a0e(param_5 + 0x38,&local_128,param_1 + 0x2f0);
    dVar5 = dVar5 + local_128;
    dVar11 = dVar11 + uStack_120;
    dVar13 = dVar13 + local_118;
  }
  if (*(char *)(param_6 + 1) == '\x01') {
    local_1c8 = *param_6;
  }
  else {
    local_1c8 = FUN_14074e060(param_1,*param_3,param_4);
  }
  uVar1 = *(undefined1 *)(param_1 + 0xaa);
  bVar2 = *(byte *)(param_1 + 0x2d0);
  if ((bVar2 & 0x40) == 0 || param_4 == 0) {
    local_f8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0.0;
    uStack_110 = 0;
    local_128 = 0.0;
    uStack_120 = 0.0;
    uStack_f0 = 0x200000000;
  }
  else {
    local_f8 = 0;
    lVar6 = param_4 + 0x18;
    if (*(longlong *)(param_4 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_4 + 0x48);
    }
    FUN_1400709d4(&local_128,lVar6,*(undefined4 *)(param_4 + 0x50),0);
  }
  local_1f0 = (bVar2 & 0x10) >> 4;
  local_1e8 = (bVar2 & 0x20) >> 5;
  local_140 = local_e8;
  local_138 = local_e0;
  local_130 = 0;
  local_188._8_4_ = SUB84(dVar11,0);
  local_188._0_8_ = dVar5;
  local_188._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  uStack_170 = 0;
  local_168 = 0x3ff0000000000000;
  uStack_160 = 0x3ff0000000000000;
  local_158 = 0x3ff0000000000000;
  uStack_150 = 0;
  local_1f8 = &local_128;
  local_1b8 = 0x42c80000;
  local_1e0 = fVar12;
  local_1d8 = fVar10;
  local_1d0 = uVar8;
  local_1c0 = uVar1;
  local_1a8 = uVar14;
  uStack_1a4 = uVar15;
  uStack_1a0 = uVar16;
  uStack_19c = uVar17;
  local_198 = uVar18;
  uStack_194 = uVar19;
  uStack_190 = uVar20;
  uStack_18c = uVar21;
  local_178 = dVar13;
  FUN_14074d1e6(param_2,param_3[1]);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
LAB_14074c059:
  if ((local_c0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14074c3a4 FUN_14074c3a4 body=3648 status=ok
// SIG undefined FUN_14074c3a4(void)

void FUN_14074c3a4(longlong param_1,double *param_2,double *param_3,double *param_4,
                  undefined8 *param_5,longlong param_6)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  code *pcVar14;
  char cVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  double *pdVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined2 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 *local_200;
  code *local_1f8;
  code *local_1f0;
  double *local_1e0;
  double *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double *local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double *local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 *local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  pdVar17 = DAT_14c8462e8;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  param_4[2] = (double)DAT_14c8462e8;
  uVar30 = DAT_14c8462e0._4_4_;
  uVar29 = (undefined4)DAT_14c8462e0;
  uVar22 = DAT_14c8462d8._4_4_;
  *(undefined4 *)param_4 = (undefined4)DAT_14c8462d8;
  *(undefined4 *)((longlong)param_4 + 4) = uVar22;
  *(undefined4 *)(param_4 + 1) = uVar29;
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar30;
  if (param_6 == 0) {
    pdVar27 = (double *)*param_5;
    if (pdVar27 != (double *)0x0) {
LAB_14074c4c2:
      lVar20 = *(longlong *)(param_1 + 0xb0);
      if (lVar20 != 0) goto LAB_14074cb1c;
LAB_14074c4d2:
      if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
        if (DAT_14caf64b8 == 0) {
          local_200 = &local_198;
          local_198 = FUN_141030f22;
          local_1f0 = FUN_14081d0ea;
          local_1f8 = FUN_142b4754c;
          local_208 = &LAB_147c45ce0;
          local_210 = &LAB_1463f1ff4;
          local_218 = &DAT_149e063b2;
          local_220 = 0x4000000000;
          local_228 = 0x10000004;
          local_230 = 8;
          local_238 = 0x428;
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        pdVar17 = (double *)pdVar27[2];
        if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(pdVar17 + 7)) &&
           (pdVar17 = (double *)pdVar17[6],
           pdVar17[*(int *)(DAT_14caf64b8 + 0x38)] == (double)(DAT_14caf64b8 + 0x30))) {
          (**(code **)((longlong)*pdVar27 + 0x588))(pdVar27,param_2,param_3);
          goto LAB_14074c611;
        }
      }
      uVar22 = SUB84(pdVar17,0);
      dVar33 = pdVar27[0x39];
      if (dVar33 == 0.0) {
        pdVar17 = &DAT_14c8464e0;
        uVar29 = SUB84(DAT_14c8464f0,0);
        uVar30 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar29 = (undefined4)*(undefined8 *)((longlong)dVar33 + 0x270);
        uVar30 = (undefined4)((ulonglong)*(undefined8 *)((longlong)dVar33 + 0x270) >> 0x20);
        pdVar17 = (double *)((longlong)dVar33 + 0x260);
      }
      dVar33 = pdVar17[1];
      *param_2 = *pdVar17;
      param_2[1] = dVar33;
      param_2[2] = (double)CONCAT44(uVar30,uVar29);
      dVar33 = pdVar27[0x39];
      if (dVar33 == 0.0) {
        local_1a8 = DAT_14c846508;
        local_1b8 = (undefined4)DAT_14c8464f8;
        uStack_1b4 = DAT_14c8464f8._4_4_;
        uStack_1b0 = (undefined4)DAT_14c846500;
        uStack_1ac = DAT_14c846500._4_4_;
      }
      else {
        pcVar14 = *(code **)((longlong)dVar33 + 0x240);
        dVar32 = *(double *)((longlong)dVar33 + 0x248);
        pdVar19 = *(double **)((longlong)dVar33 + 0x250);
        dVar1 = *(double *)((longlong)dVar33 + 600);
        pdVar18 = *(double **)((longlong)dVar33 + 0x228);
        local_198 = pcVar14;
        uStack_190 = dVar32;
        local_188 = pdVar19;
        dStack_180 = dVar1;
        if (pdVar18 == (double *)0x0) {
          uVar22 = 0x40;
          pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
          dVar34 = DAT_14c8463d8;
          *pdVar18 = DAT_14c8463d0;
          pdVar18[1] = dVar34;
          dVar34 = DAT_14c8463e8;
          pdVar18[2] = DAT_14c8463e0;
          pdVar18[3] = dVar34;
          dVar34 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar18[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar18[5] = dVar34;
          pdVar17 = DAT_14c846508;
          pdVar18[6] = (double)DAT_14c846508;
          *(double **)((longlong)dVar33 + 0x228) = pdVar18;
        }
        auVar7._8_4_ = (int)-(ulonglong)(dVar32 != pdVar18[1]);
        auVar7._0_8_ = -(ulonglong)((double)pcVar14 != *pdVar18);
        auVar7._12_4_ = (int)(-(ulonglong)(dVar32 != pdVar18[1]) >> 0x20);
        iVar16 = movmskpd((int)pdVar17,auVar7);
        auVar10._8_4_ = (int)-(ulonglong)(dVar1 != pdVar18[3]);
        auVar10._0_8_ = -(ulonglong)((double)pdVar19 != pdVar18[2]);
        auVar10._12_4_ = (int)(-(ulonglong)(dVar1 != pdVar18[3]) >> 0x20);
        uVar23 = movmskpd(uVar22,auVar10);
        if ((uVar23 & 0x3fffffff) != 0 || iVar16 != 0) {
          pdVar18[2] = (double)local_188;
          pdVar18[3] = dStack_180;
          *(undefined4 *)pdVar18 = (undefined4)local_198;
          *(undefined4 *)((longlong)pdVar18 + 4) = local_198._4_4_;
          *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_190;
          *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_190._4_4_;
          FUN_1448052ee(&local_198,&local_1b8);
          pdVar18[6] = (double)local_1a8;
          pdVar18[4] = (double)CONCAT44(uStack_1b4,local_1b8);
          pdVar18[5] = (double)CONCAT44(uStack_1ac,uStack_1b0);
        }
        local_1a8 = (double *)pdVar18[6];
        local_1b8 = *(undefined4 *)(pdVar18 + 4);
        uStack_1b4 = *(undefined4 *)((longlong)pdVar18 + 0x24);
        uStack_1b0 = *(undefined4 *)(pdVar18 + 5);
        uStack_1ac = *(undefined4 *)((longlong)pdVar18 + 0x2c);
      }
      param_3[2] = (double)local_1a8;
      *(undefined4 *)param_3 = local_1b8;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_1b4;
      *(undefined4 *)(param_3 + 1) = uStack_1b0;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1ac;
      goto LAB_14074c611;
    }
  }
  else {
    uVar23 = *(uint *)(param_6 + 0x1dc);
    pdVar17 = (double *)(ulonglong)uVar23;
    if (((((uVar23 == 0) || (uVar3 = *(uint *)(param_6 + 0x1d8), (int)uVar3 < 0)) ||
         (DAT_14c9647dc <= (int)uVar3)) ||
        ((puVar25 = (undefined8 *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         puVar25 == (undefined8 *)0x0 || (*(uint *)(puVar25 + 2) != uVar23)))) ||
       (pdVar17 = (double *)(ulonglong)*(uint *)(puVar25 + 1),
       (*(uint *)(puVar25 + 1) & 0x10200000) != 0)) {
      pdVar27 = (double *)*param_5;
    }
    else {
      if ((*(uint *)(puVar25 + 1) & 0x10200000) != 0) goto LAB_14074cfe0;
      pdVar27 = (double *)*puVar25;
    }
    if (pdVar27 != (double *)0x0) {
      lVar20 = *(longlong *)(param_6 + 0x240);
      if (lVar20 == 0) goto LAB_14074c4c2;
LAB_14074cb1c:
      local_d8 = (undefined8 *)0x0;
      local_d0 = 0x1800000000;
      local_1e0 = pdVar27;
      local_1d8 = param_4;
      FUN_140a44582(pdVar27,&local_198,0);
      lVar28 = (longlong)(int)local_d0;
      puVar25 = &local_198;
      if (local_d8 != (undefined8 *)0x0) {
        puVar25 = local_d8;
      }
      if (lVar28 != 0) {
        lVar26 = 0;
        do {
          plVar21 = *(longlong **)((longlong)puVar25 + lVar26);
          if ((plVar21 != (longlong *)0x0) &&
             (cVar15 = (**(code **)(*plVar21 + 0x4c8))(plVar21,lVar20), pdVar27 = local_1e0,
             cVar15 != '\0')) {
            if (local_d8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_14074cc09;
          }
          lVar26 = lVar26 + 8;
        } while (lVar28 * 8 != lVar26);
      }
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      pdVar27 = local_1e0;
      pdVar17 = (double *)&LAB_144a8179a;
      if (*(code **)((longlong)*local_1e0 + 0x3a8) == (code *)&LAB_144a8179a) {
        plVar21 = (longlong *)local_1e0[0x39];
      }
      else {
        pdVar17 = local_1e0;
        plVar21 = (longlong *)(**(code **)((longlong)*local_1e0 + 0x3a8))();
      }
      param_4 = local_1d8;
      if (plVar21 == (longlong *)0x0) goto LAB_14074c4d2;
LAB_14074cc09:
      (**(code **)(*plVar21 + 0x4a8))(plVar21,&local_198,lVar20,0);
      *param_2 = local_178;
      param_2[1] = dStack_170;
      param_2[2] = local_168;
      puVar24 = &local_1b8;
      local_1b8 = (undefined4)local_198;
      uStack_1b4 = local_198._4_4_;
      uStack_1b0 = (undefined4)uStack_190;
      uStack_1ac = uStack_190._4_4_;
      local_1a8 = local_188;
      dStack_1a0 = dStack_180;
      FUN_1448052ee(puVar24,&local_1d0);
      param_4 = local_1d8;
      uVar22 = SUB84(puVar24,0);
      param_3[2] = local_1c0;
      *(undefined4 *)param_3 = local_1d0;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_1cc;
      *(undefined4 *)(param_3 + 1) = uStack_1c8;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1c4;
      if (*(char *)(param_1 + 0xb8) == '\x01') {
        dVar33 = pdVar27[0x39];
        if (dVar33 == 0.0) {
          local_1a8 = DAT_14c846508;
          local_1b8 = (undefined4)DAT_14c8464f8;
          uStack_1b4 = DAT_14c8464f8._4_4_;
          uStack_1b0 = (undefined4)DAT_14c846500;
          uStack_1ac = DAT_14c846500._4_4_;
        }
        else {
          pcVar14 = *(code **)((longlong)dVar33 + 0x240);
          dVar32 = *(double *)((longlong)dVar33 + 0x248);
          pdVar18 = *(double **)((longlong)dVar33 + 0x250);
          dVar1 = *(double *)((longlong)dVar33 + 600);
          pdVar17 = *(double **)((longlong)dVar33 + 0x228);
          pdVar19 = (double *)&DAT_00000001;
          local_198 = pcVar14;
          uStack_190 = dVar32;
          local_188 = pdVar18;
          dStack_180 = dVar1;
          if (pdVar17 == (double *)0x0) {
            uVar22 = 0x40;
            pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
            dVar34 = DAT_14c8463d8;
            *pdVar17 = DAT_14c8463d0;
            pdVar17[1] = dVar34;
            dVar34 = DAT_14c8463e8;
            pdVar17[2] = DAT_14c8463e0;
            pdVar17[3] = dVar34;
            dVar34 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar17[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar17[5] = dVar34;
            pdVar19 = DAT_14c846508;
            pdVar17[6] = (double)DAT_14c846508;
            *(double **)((longlong)dVar33 + 0x228) = pdVar17;
          }
          auVar9._8_4_ = (int)-(ulonglong)(dVar32 != pdVar17[1]);
          auVar9._0_8_ = -(ulonglong)((double)pcVar14 != *pdVar17);
          auVar9._12_4_ = (int)(-(ulonglong)(dVar32 != pdVar17[1]) >> 0x20);
          iVar16 = movmskpd((int)pdVar19,auVar9);
          auVar12._8_4_ = (int)-(ulonglong)(dVar1 != pdVar17[3]);
          auVar12._0_8_ = -(ulonglong)((double)pdVar18 != pdVar17[2]);
          auVar12._12_4_ = (int)(-(ulonglong)(dVar1 != pdVar17[3]) >> 0x20);
          uVar23 = movmskpd(uVar22,auVar12);
          if ((uVar23 & 0x3fffffff) != 0 || iVar16 != 0) {
            pdVar17[2] = (double)local_188;
            pdVar17[3] = dStack_180;
            *(undefined4 *)pdVar17 = (undefined4)local_198;
            *(undefined4 *)((longlong)pdVar17 + 4) = local_198._4_4_;
            *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_190;
            *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_190._4_4_;
            FUN_1448052ee(&local_198,&local_1b8);
            pdVar17[6] = (double)local_1a8;
            pdVar17[4] = (double)CONCAT44(uStack_1b4,local_1b8);
            pdVar17[5] = (double)CONCAT44(uStack_1ac,uStack_1b0);
          }
          local_1a8 = (double *)pdVar17[6];
          local_1b8 = *(undefined4 *)(pdVar17 + 4);
          uStack_1b4 = *(undefined4 *)((longlong)pdVar17 + 0x24);
          uStack_1b0 = *(undefined4 *)(pdVar17 + 5);
          uStack_1ac = *(undefined4 *)((longlong)pdVar17 + 0x2c);
        }
        param_3[2] = (double)local_1a8;
        *(undefined4 *)param_3 = local_1b8;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_1b4;
        *(undefined4 *)(param_3 + 1) = uStack_1b0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1ac;
      }
      else if (*(char *)(param_1 + 0xb8) == '\x02') {
        lVar20 = FUN_144a7cbb2();
        pdVar17 = local_1e0;
        dVar33 = pdVar27[2];
        if ((*(int *)((longlong)dVar33 + 0x38) < *(int *)(lVar20 + 0x38)) ||
           (dVar33 = *(double *)((longlong)dVar33 + 0x30),
           *(longlong *)((longlong)dVar33 + (longlong)*(int *)(lVar20 + 0x38) * 8) != lVar20 + 0x30)
           ) {
          uVar22 = SUB84(dVar33,0);
          dVar33 = local_1e0[0x39];
          if (dVar33 == 0.0) {
            local_1a8 = DAT_14c846508;
            local_1b8 = (undefined4)DAT_14c8464f8;
            uStack_1b4 = DAT_14c8464f8._4_4_;
            uStack_1b0 = (undefined4)DAT_14c846500;
            uStack_1ac = DAT_14c846500._4_4_;
          }
          else {
            pcVar14 = *(code **)((longlong)dVar33 + 0x240);
            dVar32 = *(double *)((longlong)dVar33 + 0x248);
            pdVar27 = *(double **)((longlong)dVar33 + 0x250);
            dVar1 = *(double *)((longlong)dVar33 + 600);
            pdVar17 = *(double **)((longlong)dVar33 + 0x228);
            pdVar18 = local_1e0;
            local_198 = pcVar14;
            uStack_190 = dVar32;
            local_188 = pdVar27;
            dStack_180 = dVar1;
            if (pdVar17 == (double *)0x0) {
              uVar22 = 0x40;
              pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
              dVar34 = DAT_14c8463d8;
              *pdVar17 = DAT_14c8463d0;
              pdVar17[1] = dVar34;
              dVar34 = DAT_14c8463e8;
              pdVar17[2] = DAT_14c8463e0;
              pdVar17[3] = dVar34;
              dVar34 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
              pdVar17[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
              pdVar17[5] = dVar34;
              pdVar18 = DAT_14c846508;
              pdVar17[6] = (double)DAT_14c846508;
              *(double **)((longlong)dVar33 + 0x228) = pdVar17;
            }
            auVar8._8_4_ = (int)-(ulonglong)(dVar32 != pdVar17[1]);
            auVar8._0_8_ = -(ulonglong)((double)pcVar14 != *pdVar17);
            auVar8._12_4_ = (int)(-(ulonglong)(dVar32 != pdVar17[1]) >> 0x20);
            iVar16 = movmskpd((int)pdVar18,auVar8);
            auVar11._8_4_ = (int)-(ulonglong)(dVar1 != pdVar17[3]);
            auVar11._0_8_ = -(ulonglong)((double)pdVar27 != pdVar17[2]);
            auVar11._12_4_ = (int)(-(ulonglong)(dVar1 != pdVar17[3]) >> 0x20);
            uVar23 = movmskpd(uVar22,auVar11);
            if ((uVar23 & 0x3fffffff) != 0 || iVar16 != 0) {
              pdVar17[2] = (double)local_188;
              pdVar17[3] = dStack_180;
              *(undefined4 *)pdVar17 = (undefined4)local_198;
              *(undefined4 *)((longlong)pdVar17 + 4) = local_198._4_4_;
              *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_190;
              *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_190._4_4_;
              FUN_1448052ee(&local_198,&local_1b8);
              pdVar17[6] = (double)local_1a8;
              pdVar17[4] = (double)CONCAT44(uStack_1b4,local_1b8);
              pdVar17[5] = (double)CONCAT44(uStack_1ac,uStack_1b0);
            }
            local_1a8 = (double *)pdVar17[6];
            local_1b8 = *(undefined4 *)(pdVar17 + 4);
            uStack_1b4 = *(undefined4 *)((longlong)pdVar17 + 0x24);
            uStack_1b0 = *(undefined4 *)(pdVar17 + 5);
            uStack_1ac = *(undefined4 *)((longlong)pdVar17 + 0x2c);
          }
          param_3[2] = (double)local_1a8;
          *(undefined4 *)param_3 = local_1b8;
          *(undefined4 *)((longlong)param_3 + 4) = uStack_1b4;
          *(undefined4 *)(param_3 + 1) = uStack_1b0;
          *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1ac;
          param_4 = local_1d8;
          pdVar27 = local_1e0;
        }
        else {
          (**(code **)((longlong)*local_1e0 + 0x720))(local_1e0,&local_198);
          param_3[2] = (double)local_188;
          *(undefined4 *)param_3 = (undefined4)local_198;
          *(undefined4 *)((longlong)param_3 + 4) = local_198._4_4_;
          *(undefined4 *)(param_3 + 1) = (undefined4)uStack_190;
          *(undefined4 *)((longlong)param_3 + 0xc) = uStack_190._4_4_;
          param_4 = local_1d8;
          pdVar27 = pdVar17;
        }
      }
      if (*(char *)(param_1 + 0xf1) == '\x03') {
        FUN_144a76660(param_3,&local_198);
        param_4[2] = (double)local_188;
        *(undefined4 *)param_4 = (undefined4)local_198;
        *(undefined4 *)((longlong)param_4 + 4) = local_198._4_4_;
        *(undefined4 *)(param_4 + 1) = (undefined4)uStack_190;
        *(undefined4 *)((longlong)param_4 + 0xc) = uStack_190._4_4_;
      }
LAB_14074c611:
      if (*(char *)(param_1 + 0xf1) == '\x01') {
        dVar33 = pdVar27[0x39];
        if (dVar33 == 0.0) {
          dVar32 = (double)CONCAT44(DAT_14c8462d8._4_4_,(undefined4)DAT_14c8462d8);
          dVar33 = (double)CONCAT44(DAT_14c8462e0._4_4_,(undefined4)DAT_14c8462e0);
          pdVar17 = DAT_14c8462e8;
        }
        else {
          dVar4 = *(double *)((longlong)dVar33 + 0x240);
          dVar5 = *(double *)((longlong)dVar33 + 0x248);
          dVar6 = *(double *)((longlong)dVar33 + 0x250);
          dVar1 = *(double *)((longlong)dVar33 + 600);
          dVar34 = dVar4 * 0.0 - dVar5 * 1.0;
          dVar35 = dVar5 * 0.0 - dVar6 * 0.0;
          dVar36 = dVar6 * 1.0 - dVar4 * 0.0;
          dVar35 = dVar35 + dVar35;
          dVar36 = dVar36 + dVar36;
          dVar34 = dVar34 + dVar34;
          dVar32 = (dVar34 * dVar5 - dVar36 * dVar6) + dVar1 * dVar35 + 1.0;
          dVar33 = (dVar6 * dVar35 - dVar4 * dVar34) +
                   *(double *)((longlong)dVar33 + 600) * dVar36 + 0.0;
          pdVar17 = (double *)(dVar34 * dVar1 + 0.0 + (dVar36 * dVar4 - dVar35 * dVar5));
        }
        *param_4 = dVar32;
        param_4[1] = dVar33;
        param_4[2] = (double)pdVar17;
      }
      else if (*(char *)(param_1 + 0xf1) == '\x02') {
        lVar20 = FUN_144a7cbb2();
        if ((*(int *)(lVar20 + 0x38) <= *(int *)((longlong)pdVar27[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)((longlong)pdVar27[2] + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) ==
            lVar20 + 0x30)) {
          (**(code **)((longlong)*pdVar27 + 0x720))(pdVar27,&local_1b8);
          FUN_144a76660(&local_1b8,&local_198);
          param_4[2] = (double)local_188;
          *param_4 = (double)local_198;
          param_4[1] = uStack_190;
        }
      }
      goto LAB_14074c62a;
    }
  }
LAB_14074cfe0:
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_3[2] = 0.0;
  *param_3 = 0.0;
  param_3[1] = 0.0;
LAB_14074c62a:
  if (param_6 != 0) {
    if (*(char *)(param_6 + 0x1f8) == '\x01') {
      param_2[2] = *(double *)(param_6 + 0x1f0);
      dVar33 = *(double *)(param_6 + 0x1e8);
      *param_2 = *(double *)(param_6 + 0x1e0);
      param_2[1] = dVar33;
    }
    if (*(char *)(param_6 + 0x218) == '\x01') {
      param_3[2] = *(double *)(param_6 + 0x210);
      dVar33 = *(double *)(param_6 + 0x208);
      *param_3 = *(double *)(param_6 + 0x200);
      param_3[1] = dVar33;
    }
  }
  if ((~*(byte *)(param_1 + 0xf0) & 0xc) == 0) {
    *param_3 = 0.0;
  }
  dVar1 = *param_3;
  dVar33 = param_3[1];
  dVar32 = param_3[2];
  dVar34 = sin(dVar1 * 0.01745329238474369);
  dVar36 = sin(dVar33 * 0.01745329238474369);
  dVar4 = sin(dVar32 * 0.01745329238474369);
  sin(0.0);
  dVar5 = cos(dVar1 * 0.01745329238474369);
  dVar6 = cos(dVar33 * 0.01745329238474369);
  dVar35 = cos(dVar32 * 0.01745329238474369);
  cos(0.0);
  dVar33 = *(double *)(param_1 + 0xd0);
  dVar32 = *(double *)(param_1 + 0xc0);
  dVar1 = *(double *)(param_1 + 200);
  dVar31 = DAT_14c8464e8 * 0.0;
  dVar13 = DAT_14c8464f0 * 0.0;
  *param_2 = *param_2 +
             DAT_14c8464e0 * 0.0 +
             dVar33 * -(dVar34 * dVar35 * dVar6 + dVar36 * dVar4) +
             dVar1 * (dVar34 * dVar4 * dVar6 - dVar36 * dVar35) + dVar32 * dVar5 * dVar6;
  param_2[1] = dVar31 + dVar33 * (dVar6 * dVar4 - dVar36 * dVar34 * dVar35) +
                        dVar1 * (dVar34 * dVar4 * dVar36 + dVar6 * dVar35) + dVar32 * dVar36 * dVar5
               + param_2[1];
  param_2[2] = (dVar34 * dVar32 - dVar5 * dVar4 * dVar1) + dVar5 * dVar35 * dVar33 + dVar13 +
               param_2[2];
  if ((param_6 == 0) || (*(char *)(param_6 + 0x218) == '\0')) {
    *param_3 = *(double *)(param_1 + 0xd8) + *param_3;
    param_3[1] = *(double *)(param_1 + 0xe0) + param_3[1];
    param_3[2] = *(double *)(param_1 + 0xe8) + param_3[2];
  }
  bVar2 = *(byte *)(param_1 + 0xf0);
  if ((bVar2 & 0xc) == 4) {
    *param_3 = 0.0;
    bVar2 = *(byte *)(param_1 + 0xf0);
  }
  if ((bVar2 & 2) != 0) {
    param_3[2] = 0.0;
  }
  if ((param_6 == 0) || (*(char *)(param_6 + 0x238) != '\x01')) {
    if ((*(char *)(param_1 + 0xf1) == '\0') || (*(char *)(param_1 + 0xf1) == '\x04')) {
      dVar32 = (double)FUN_144719204(SUB84(*param_3,0),0x4076800000000000);
      dVar34 = (double)FUN_144719204(SUB84(param_3[1],0),0x4076800000000000);
      dVar33 = sin(dVar32 * 0.017453292519943295);
      dVar32 = cos(dVar32 * 0.017453292519943295);
      dVar1 = sin(dVar34 * 0.017453292519943295);
      dVar34 = cos(dVar34 * 0.017453292519943295);
      *param_4 = dVar34 * dVar32;
      param_4[1] = dVar1 * dVar32;
      param_4[2] = dVar33;
    }
  }
  else {
    param_4[2] = *(double *)(param_6 + 0x230);
    uVar22 = *(undefined4 *)(param_6 + 0x224);
    uVar29 = *(undefined4 *)(param_6 + 0x228);
    uVar30 = *(undefined4 *)(param_6 + 0x22c);
    *(undefined4 *)param_4 = *(undefined4 *)(param_6 + 0x220);
    *(undefined4 *)((longlong)param_4 + 4) = uVar22;
    *(undefined4 *)(param_4 + 1) = uVar29;
    *(undefined4 *)((longlong)param_4 + 0xc) = uVar30;
  }
  if ((local_c0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14074d1e6 FUN_14074d1e6 body=861 status=ok
// SIG undefined FUN_14074d1e6(void)

int FUN_14074d1e6(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 param_6,undefined1 param_7,float param_8,
                 undefined4 param_9,char param_10,int param_11,undefined1 param_12,
                 undefined4 param_13)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  int local_1a0;
  int local_198;
  undefined1 local_190;
  undefined4 local_188;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158 [13];
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    iVar5 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_14074d544(param_4);
      fVar7 = DAT_14c763970;
      if (lVar3 != 0) {
        if (param_8 < 0.0) {
          param_8 = *(float *)(lVar3 + 0x6c);
        }
        FUN_140154c96(&local_a8,param_2);
        iVar5 = DAT_14c763974;
        uVar4 = 0;
        iVar1 = 0;
        if (0 < DAT_14c763974) {
          iVar1 = DAT_14c763974;
        }
        if (param_2 != 0) {
          uVar4 = *(undefined8 *)(param_2 + 0x1b0);
        }
        if (param_8 <= fVar7) {
          fVar7 = param_8;
        }
        if ((param_10 == '\0') && (*(char *)(lVar3 + 0x58) != '\0')) {
          local_f0 = local_a8;
          local_e8 = local_a0;
          local_e0 = local_98;
          puVar6 = local_158;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *param_3;
            param_3 = param_3 + 1;
            puVar6 = puVar6 + 1;
          }
          local_198 = CONCAT31(local_198._1_3_,param_12);
          local_1a0 = DAT_14c763974;
          local_1a8 = param_11;
          local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,fVar7);
          local_1d0 = param_9;
          local_1d8 = param_7;
          local_1e0 = (undefined8 *)CONCAT71(local_1e0._1_7_,param_6);
          local_1e8 = param_5;
          local_1c0 = (undefined8 *)((ulonglong)local_1c0 & 0xffffffff00000000);
          DAT_14c763974 = iVar1 + 1;
          local_1b8 = param_2;
          local_1b0 = uVar4;
          FUN_141048a26(lVar2,param_4);
        }
        else {
          if (*(longlong *)(lVar2 + 0x1f0) == 0) {
            local_178 = lVar2 + 0x460;
          }
          else {
            local_178 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf8);
          }
          DAT_14c763974 = iVar1 + 1;
          local_170 = lVar2;
          local_168 = uVar4;
          local_160 = param_2;
          uVar4 = FUN_14001cc68(0x130,0x10);
          lVar2 = local_170;
          local_c0 = *param_4;
          local_1c8 = &local_c0;
          local_b8 = *(undefined4 *)(param_4 + 1);
          local_b0 = 0;
          local_1e0 = &local_d8;
          local_d8 = local_a8;
          local_d0 = local_a0;
          local_c8 = local_98;
          local_188 = param_13;
          local_190 = param_12;
          local_198 = iVar5;
          local_1a0 = param_11;
          local_1a8 = CONCAT31(local_1a8._1_3_,param_10);
          local_1b0 = CONCAT44(local_1b0._4_4_,param_9);
          local_1b8 = CONCAT44(local_1b8._4_4_,fVar7);
          local_1c0 = param_5;
          local_1d0 = CONCAT31(local_1d0._1_3_,param_7);
          local_1d8 = param_6;
          local_1e8 = param_3;
          FUN_14074d936(uVar4,local_170,local_160,local_168);
          FUN_140b1330e(local_178,lVar2,0x75bcd15,uVar4);
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14074d544 FUN_14074d544 body=136 status=ok
// SIG undefined FUN_14074d544(void)

longlong FUN_14074d544(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb81888 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb81888,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14074d5ce FUN_14074d5ce body=871 status=ok
// SIG undefined FUN_14074d5ce(void)

float FUN_14074d5ce(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [40];
  char local_d0 [16];
  longlong *local_c0;
  undefined4 local_a8 [2];
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_3 == 0) || (*(char *)(param_3 + 0xc) != '\x01')) ||
     ((*(byte *)(param_1 + 0x1a9) & 2) != 0)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar6 = (ulonglong)((uint)*(ushort *)(param_1 + 0x30) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,param_2);
    pfVar4 = &local_a0;
    FUN_1448729ea(lVar6,pfVar4,local_d0);
    if (local_80 == 3) {
      uVar3 = 3;
      fVar7 = local_a0;
    }
    else {
      pfVar5 = &local_78;
      FUN_1400b56fe(pfVar5,&local_a0,3);
      fVar7 = 0.0;
      if (local_58 != 0) {
        fVar7 = local_78;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar5 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(pfVar5);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      uVar3 = (uint)local_80;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar4 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar2)(pfVar4);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar6 = (ulonglong)((uint)*(ushort *)(param_1 + 0x32) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,param_2);
    pfVar4 = &local_a0;
    FUN_1448729ea(lVar6,pfVar4,local_d0);
    if (local_80 == 3) {
      uVar3 = 3;
      fVar8 = local_a0;
    }
    else {
      pfVar5 = &local_78;
      FUN_1400b56fe(pfVar5,&local_a0,3);
      fVar8 = local_78;
      if (local_58 == 0) {
        fVar8 = 1.0;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar5 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(pfVar5);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      uVar3 = (uint)local_80;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar4 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar2)(pfVar4);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    fVar7 = fVar7 * fVar8;
  }
  else {
    fVar7 = *(float *)(param_3 + 8);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar7;
}



// FUNCTION 14074d936 FUN_14074d936 body=1462 status=ok
// SIG undefined FUN_14074d936(void)

undefined8 *
FUN_14074d936(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8,
             longlong *param_9,undefined8 *param_10,undefined4 param_11,undefined4 param_12,
             char param_13,undefined4 param_14,undefined4 param_15,undefined1 param_16,
             undefined4 param_17)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = &PTR_FUN_14b40fae0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = *param_6;
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_6 + 1);
  param_1[0x12] = param_6[2];
  *(undefined1 *)(param_1 + 0x13) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x99) = param_8;
  *(undefined1 *)((longlong)param_1 + 0x9a) = param_16;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x9bf48485;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x200000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (param_2 == 0) {
    *(uint *)(param_1 + 1) = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 1) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 2) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar3;
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar3;
  puVar7 = param_1 + 4;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = *param_5;
    param_5 = param_5 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((param_1[0x14] != *param_9) || (*(int *)(param_1 + 0x15) != (int)param_9[1])) {
    param_1[0x14] = *param_9;
    *(int *)(param_1 + 0x15) = (int)param_9[1];
    param_1[0x16] = 0;
  }
  if (param_1 + 0x17 != param_10) {
    puVar7 = (undefined8 *)param_10[6];
    if ((undefined8 *)param_10[6] == (undefined8 *)0x0) {
      puVar7 = param_10;
    }
    FUN_1400709d4(param_1 + 0x17,puVar7,*(undefined4 *)(param_10 + 7),
                  *(undefined4 *)((longlong)param_1 + 0xf4));
  }
  *(undefined4 *)(param_1 + 0x1f) = param_11;
  *(undefined4 *)((longlong)param_1 + 0xfc) = param_12;
  *(undefined4 *)(param_1 + 0x20) = param_14;
  *(undefined4 *)((longlong)param_1 + 0x104) = param_15;
  if (param_13 == '\0') {
    FUN_1410482d4(param_1);
    return param_1;
  }
  plVar4 = (longlong *)FUN_14001cc68(400,0x10);
  FUN_14074deec(plVar4,param_2,param_1 + 4,param_11,6,param_17);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3fbab0;
  plVar5[2] = (longlong)plVar4;
  if ((plVar4 != (longlong *)0x0) &&
     (((*plVar4 == 0 || (plVar4[1] == 0)) || (*(int *)(plVar4[1] + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *plVar4 = (longlong)plVar4;
      plVar6 = (longlong *)plVar4[1];
      if (plVar6 != (longlong *)0x0) {
LAB_14074dde4:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        plVar4[1] = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_14074dc82;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *plVar4 = (longlong)plVar4;
      if ((longlong *)plVar4[1] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar4[1];
        if (plVar6 != (longlong *)0x0) goto LAB_14074dde4;
        plVar4[1] = (longlong)plVar5;
      }
LAB_14074dc82:
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
    }
  }
  param_1[0x21] = plVar4;
  plVar4 = (longlong *)param_1[0x22];
  if (plVar5 == plVar4) {
    if (plVar5 == (longlong *)0x0) goto LAB_14074dcba;
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14074dcba;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    param_1[0x22] = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_14074dcba;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14074dcba;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14074dcba:
  FUN_140da0c4c(param_1[0x21],1);
  return param_1;
}



// FUNCTION 14074deec FUN_14074deec body=371 status=ok
// SIG undefined FUN_14074deec(void)

undefined8 *
FUN_14074deec(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  memset(param_1 + 0x12,0,0x100);
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar5;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar2;
  puVar3 = param_1 + 4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_5;
  *(undefined4 *)(param_1 + 0x11) = param_6;
  return param_1;
}



// FUNCTION 14074e060 FUN_14074e060 body=1075 status=ok
// SIG undefined FUN_14074e060(void)

undefined8 FUN_14074e060(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_138 [40];
  float local_110;
  undefined4 uStack_10c;
  ushort local_f8;
  byte local_f0;
  undefined4 local_e8;
  undefined8 ***local_e0 [3];
  ushort local_c8;
  byte local_c0;
  char local_b8 [16];
  longlong *local_a8;
  undefined4 local_90 [2];
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x308) == '\x01') {
    if ((param_3 == 0) || (*(char *)(param_3 + 0xc) != '\x01')) {
      uVar4 = FUN_1406f3fb0(param_1 + 0x30);
      local_b8[0] = '\0';
      local_90[0] = 0;
      FUN_1456bb102(local_b8,param_2);
      pfVar5 = &local_88;
      FUN_1448729ea(uVar4,pfVar5,local_b8);
      uVar9 = FUN_144a7b41a(pfVar5,0);
      uVar4 = FUN_1406f3fb0(param_1 + 0x32);
      local_110 = (float)((uint)local_110 & 0xffffff00);
      local_e8 = 0;
      FUN_1456bb102(&local_110,param_2);
      FUN_1448729ea(uVar4,local_e0,&local_110);
      fVar11 = (float)FUN_144a7b41a(local_e0,0x3f800000);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar8 = local_e0;
        if (0x18 < local_c8) {
          ppppuVar8 = (undefined8 ****)local_e0[0];
        }
        (*pcVar2)(ppppuVar8);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(local_e0[0]);
      }
      FUN_144a5ac3a(&local_110);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_70) {
          pfVar5 = (float *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar2)(pfVar5);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
      uVar10 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),(float)uVar9 * fVar11);
      goto LAB_14074e392;
    }
    uVar10 = (ulonglong)*(uint *)(param_3 + 8);
  }
  else {
    if (*(char *)(param_1 + 0x308) == '\0') {
      fVar11 = -1.0;
      uVar12 = 0;
      goto LAB_14074e188;
    }
    uVar4 = FUN_1406f3fb0(param_1 + 0x310);
    local_b8[0] = '\0';
    local_90[0] = 0;
    FUN_1456bb102(local_b8,param_2);
    pfVar5 = &local_110;
    FUN_1448729ea(uVar4,pfVar5,local_b8);
    uVar10 = FUN_144a7b41a(pfVar5,0);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_f8) {
        pfVar5 = (float *)CONCAT44(uStack_10c,local_110);
      }
      (*pcVar2)(pfVar5);
    }
    if (0x18 < local_f8) {
      FUN_1400020a8(CONCAT44(uStack_10c,local_110));
    }
LAB_14074e392:
    FUN_144a5ac3a(local_b8);
  }
  uVar12 = (undefined4)(uVar10 >> 0x20);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar6 = (ulonglong)((uint)*(ushort *)(param_1 + 0x312) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_b8[0] = '\0';
  local_90[0] = 0;
  FUN_1456bb102(local_b8,param_2);
  pfVar5 = &local_88;
  FUN_1448729ea(lVar6,pfVar5,local_b8);
  if (local_68 == 3) {
    uVar3 = 3;
    fVar11 = local_88;
  }
  else {
    pfVar7 = &local_110;
    FUN_1400b56fe(pfVar7,&local_88,3);
    fVar11 = local_110;
    if (local_f0 == 0) {
      fVar11 = 1.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_f8) {
        pfVar7 = (float *)CONCAT44(uStack_10c,local_110);
      }
      (*pcVar2)(pfVar7);
    }
    if (0x18 < local_f8) {
      FUN_1400020a8(CONCAT44(uStack_10c,local_110));
    }
    uVar3 = (uint)local_68;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_70) {
      pfVar5 = (float *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar2)(pfVar5);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  fVar11 = (float)uVar10 * fVar11;
LAB_14074e188:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar12,fVar11);
}



// FUNCTION 14074e494 FUN_14074e494 body=119 status=ok
// SIG undefined FUN_14074e494(void)

undefined8 * FUN_14074e494(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x240);
  }
  else {
    if ((param_4 == 1) && (*(longlong *)(param_1 + 0xa8) != 0)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
      puVar2 = &DAT_14c846480;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x240);
      }
      FUN_1449437a2(param_1 + 0x240,param_2,puVar2);
      return param_2;
    }
    puVar2 = &DAT_14c846480;
  }
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 14074e50c FUN_14074e50c body=293 status=ok
// SIG undefined FUN_14074e50c(void)

undefined8 * FUN_14074e50c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145741460(param_1,iVar1,0);
    FUN_1457414c2(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1474d487e(param_1 + 2,iVar1,0);
    FUN_1474d48e0(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_145741538(param_1 + 4,iVar1,0);
    FUN_14574159a(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  _Src = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1474d4b9c(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14074e632 FUN_14074e632 body=1292 status=ok
// SIG undefined FUN_14074e632(void)

void FUN_14074e632(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1c8;
  int local_1bc;
  longlong *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0 [152];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [64];
  undefined1 *local_90;
  ulonglong local_88;
  uint local_80 [2];
  uint *local_78;
  int local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1b0 = param_2;
  local_1a8 = param_3;
  if ((longlong)(int)param_1[1] != 0) {
    local_90 = (undefined1 *)0x0;
    local_88 = 0x400000000;
    local_78 = (uint *)0x0;
    local_70 = 0;
    uStack_6c = 0x20;
    uStack_68 = 0xffffffff;
    local_58 = 0;
    local_50 = 0;
    lVar16 = *param_1;
    lVar14 = (longlong)(int)param_1[1] * 0x40 + lVar16;
    local_1b8 = param_1;
    do {
      lVar20 = *(longlong *)(lVar16 + 0x30);
      iVar2 = *(int *)(lVar16 + 0x38);
      uVar13 = ((longlong)(int)local_88 - (longlong)uStack_68._4_4_) + (longlong)iVar2;
      uVar19 = (uint)uVar13;
      if ((uint)((longlong)(int)local_88 - (longlong)uStack_68._4_4_) < uVar19) {
        local_1c8 = param_4;
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar13);
        }
        FUN_147943e6a(local_d0,uVar13 & 0xffffffff);
        param_4 = local_1c8;
        uVar13 = (ulonglong)
                 ((((uint)(uVar13 >> 1) & 0x7fffffff) - 1) + (uint)((uVar13 >> 1 & 0x7fffffff) == 0)
                 ) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar12 & 0x1f);
        if (lVar12 == 0) {
          iVar5 = 2;
        }
        if (uVar19 < 4) {
          iVar5 = 2;
        }
        if (local_50 < iVar5) {
          local_50 = iVar5;
          FUN_14794402e(local_d0);
        }
      }
      if (iVar2 != 0) {
        lVar12 = (longlong)iVar2 << 3;
        do {
          FUN_14794426e(local_d0,local_1a0,lVar20,0);
          lVar20 = lVar20 + 8;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      iVar2 = local_70;
      lVar16 = lVar16 + 0x40;
    } while (lVar16 != lVar14);
    if (local_70 == 0) {
      uVar13 = 1;
      uVar17 = 0;
      iVar5 = 0;
      iVar18 = 0;
    }
    else {
      puVar6 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar6 = local_80;
      }
      uVar19 = *puVar6;
      if (uVar19 == 0) {
        iVar5 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar5 = local_70 + -1;
        }
        uVar17 = 0;
        uVar13 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar13 = uVar17;
        }
        iVar18 = 0;
        do {
          if (uVar13 == uVar17) goto LAB_14074e843;
          iVar18 = iVar18 + 0x20;
          uVar19 = puVar6[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar17 = 0;
        iVar18 = 0;
      }
      uVar13 = (ulonglong)(-uVar19 & uVar19);
      uVar1 = uVar13 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar5 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar5) {
        iVar5 = local_70;
      }
    }
    if (iVar5 != local_70) {
      uVar19 = 0xffffffff;
      local_1c8 = param_4;
      do {
        puVar15 = local_90;
        if (local_90 == (undefined1 *)0x0) {
          puVar15 = local_d0;
        }
        local_1bc = iVar18;
        plVar7 = (longlong *)FUN_1478b0794();
        uVar4 = local_1c8;
        if ((*(int *)(puVar15 + (longlong)iVar5 * 0x10 + 4) == 0) ||
           (uVar11 = *(uint *)(puVar15 + (longlong)iVar5 * 0x10), (int)uVar11 < 0)) {
          local_1d8 = 0;
        }
        else {
          local_1d8 = 0;
          if ((int)uVar11 < DAT_14c9647dc) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
            if (((puVar10 == (undefined8 *)0x0) ||
                (*(int *)(puVar10 + 2) != *(int *)(puVar15 + (longlong)iVar5 * 0x10 + 4))) ||
               ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) {
              local_1d8 = 0;
            }
            else {
              local_1d8 = *puVar10;
            }
          }
        }
        local_e8 = *local_1a8;
        uStack_e0 = local_1a8[1];
        local_f8 = *local_1b0;
        uStack_f0 = local_1b0[1];
        local_108 = (undefined4)*local_1b8;
        uStack_104 = *(undefined4 *)((longlong)local_1b8 + 4);
        uStack_100 = (undefined4)local_1b8[1];
        uStack_fc = *(undefined4 *)((longlong)local_1b8 + 0xc);
        FUN_14792f9dc(local_1a0,&local_108,&local_f8,&local_e8);
        (**(code **)(*plVar7 + 8))(plVar7,local_1a0,uVar4);
        FUN_147937dd2(local_1a0);
        uVar19 = uVar19 & ~(uint)uVar13;
        puVar6 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar6 = local_80;
        }
        iVar5 = (int)uVar17;
        lVar16 = (longlong)iVar5;
        uVar11 = puVar6[lVar16] & uVar19;
        iVar18 = local_1bc;
        if (uVar11 == 0) {
          iVar8 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar8 = local_70 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar18 = local_1bc + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          iVar3 = iVar5;
          if (iVar5 < iVar8) {
            lVar14 = 0;
            do {
              uVar11 = puVar6[lVar16 + lVar14 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                uVar19 = 0xffffffff;
                goto LAB_14074ea60;
              }
              iVar18 = iVar18 + 0x20;
              lVar14 = lVar14 + 1;
              uVar19 = 0xffffffff;
              iVar3 = iVar9;
            } while (iVar9 - lVar16 != lVar14);
          }
          uVar17 = (ulonglong)(iVar3 + 1);
          iVar5 = local_70;
        }
        else {
LAB_14074ea60:
          uVar13 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar13 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar5 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar5) {
            iVar5 = local_70;
          }
        }
      } while (iVar5 != iVar2);
    }
LAB_14074e843:
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar13 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar13 != 0) {
      FUN_144b20932(local_d0,0);
    }
    uStack_68 = 0xffffffff;
    local_70 = 0;
    if (0x20 < uStack_6c) {
      uStack_6c = 0x20;
      FUN_14008f53c(local_80,0);
    }
    if (local_78 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14074eb3f FUN_14074eb3f body=1094 status=ok
// SIG undefined FUN_14074eb3f(void)

undefined8 FUN_14074eb3f(char param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [32];
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c7627a8 == 0) {
    uVar8 = 0;
    goto switchD_14074eb87_caseD_5;
  }
  uVar8 = 0;
  switch(param_1) {
  case '\x04':
    puVar4 = *(undefined1 **)(*param_2 + 0x10);
    *(undefined1 **)(*param_2 + 0x10) = puVar4 + 1;
    uVar8 = 1;
    switch(*puVar4) {
    case 0:
      local_38 = (code *)&LAB_144b2ff34;
      FUN_144a29c16(param_2);
      puVar5 = *(undefined2 **)(*param_2 + 0x10);
      uVar2 = *puVar5;
      *(undefined2 **)(*param_2 + 0x10) = puVar5 + 1;
      plVar6 = (longlong *)param_2[1];
      iVar3 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar3 + 2;
      if ((uint)(*(int *)((longlong)plVar6 + 0xc) - iVar3) < 2) {
        FUN_1447403be(plVar6,iVar3);
      }
      *(undefined2 *)(*plVar6 + (longlong)iVar3) = uVar2;
      break;
    case 1:
      local_38 = FUN_1438f25e0;
      FUN_144a29c16(param_2);
      FUN_14074ef86(param_2);
      break;
    case 2:
      local_38 = FUN_144b2ffb2;
      goto LAB_14074ece3;
    case 3:
      FUN_145741608(param_2);
    default:
      goto switchD_14074eb87_caseD_5;
    }
    goto LAB_14074ec07;
  case '\x05':
  case '\x06':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
    break;
  case '\a':
    pcVar7 = *(char **)(*param_2 + 0x10);
    *(char **)(*param_2 + 0x10) = pcVar7 + 1;
    cVar1 = *pcVar7;
    uVar8 = 1;
    if (cVar1 == '\0') {
      local_38 = (code *)&LAB_144b3084a;
      FUN_144a29c16(param_2);
      puVar5 = *(undefined2 **)(*param_2 + 0x10);
      uVar2 = *puVar5;
      *(undefined2 **)(*param_2 + 0x10) = puVar5 + 1;
      plVar6 = (longlong *)param_2[1];
      iVar3 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar3 + 2;
      if ((uint)(*(int *)((longlong)plVar6 + 0xc) - iVar3) < 2) {
        FUN_1447403be(plVar6,iVar3);
      }
      *(undefined2 *)(*plVar6 + (longlong)iVar3) = uVar2;
    }
    else {
      if (cVar1 != '\x01') break;
      local_38 = (code *)&LAB_144b308bc;
      FUN_144a29c16(param_2);
      FUN_14074ef86(param_2);
    }
    puVar5 = *(undefined2 **)(*param_2 + 0x10);
    uVar2 = *puVar5;
    *(undefined2 **)(*param_2 + 0x10) = puVar5 + 1;
    plVar6 = (longlong *)param_2[1];
    iVar3 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar3 + 2;
    if ((uint)(*(int *)((longlong)plVar6 + 0xc) - iVar3) < 2) {
      FUN_1447403be(plVar6,iVar3);
    }
    *(undefined2 *)(*plVar6 + (longlong)iVar3) = uVar2;
    break;
  case '\b':
    pcVar7 = *(char **)(*param_2 + 0x10);
    *(char **)(*param_2 + 0x10) = pcVar7 + 1;
    cVar1 = *pcVar7;
    uVar8 = 1;
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') break;
      local_38 = (code *)&LAB_148036582;
LAB_14074ef16:
      uVar8 = 1;
      FUN_144a29c16(param_2);
      FUN_14074ef86(param_2);
      FUN_1457655f4(param_2);
      break;
    }
    local_38 = (code *)&LAB_144b30952;
    goto LAB_14074ecc7;
  case '\t':
    pcVar7 = *(char **)(*param_2 + 0x10);
    *(char **)(*param_2 + 0x10) = pcVar7 + 1;
    cVar1 = *pcVar7;
    uVar8 = 1;
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') break;
      local_38 = (code *)&LAB_14803660a;
      goto LAB_14074ef16;
    }
    local_38 = (code *)&LAB_144b309bc;
LAB_14074ecc7:
    FUN_144a29c16(param_2);
LAB_14074ec07:
    puVar5 = *(undefined2 **)(*param_2 + 0x10);
    uVar2 = *puVar5;
    *(undefined2 **)(*param_2 + 0x10) = puVar5 + 1;
    plVar6 = (longlong *)param_2[1];
    iVar3 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar3 + 2;
    if ((uint)(*(int *)((longlong)plVar6 + 0xc) - iVar3) < 2) {
      FUN_1447403be(plVar6,iVar3);
    }
    *(undefined2 *)(*plVar6 + (longlong)iVar3) = uVar2;
LAB_14074ec3f:
    uVar8 = 1;
    puVar5 = *(undefined2 **)(*param_2 + 0x10);
    uVar2 = *puVar5;
    *(undefined2 **)(*param_2 + 0x10) = puVar5 + 1;
    plVar6 = (longlong *)param_2[1];
    iVar3 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar3 + 2;
    if ((uint)(*(int *)((longlong)plVar6 + 0xc) - iVar3) < 2) {
      FUN_1447403be(plVar6,iVar3);
    }
    *(undefined2 *)(*plVar6 + (longlong)iVar3) = uVar2;
    break;
  case '\x0e':
    FUN_1480309b2(param_2);
    uVar8 = 1;
    break;
  default:
    if (param_1 != '\x1f') break;
    pcVar7 = *(char **)(*param_2 + 0x10);
    *(char **)(*param_2 + 0x10) = pcVar7 + 1;
    cVar1 = *pcVar7;
    uVar8 = 1;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        FUN_1480400a0(param_2);
      }
      else if (cVar1 == '\x01') {
        FUN_148040040(param_2);
      }
      else if (cVar1 == '\0') {
        FUN_14803ffe0(param_2);
      }
      break;
    }
    local_38 = FUN_14063c8cc;
LAB_14074ece3:
    FUN_144a29c16(param_2);
    puVar5 = *(undefined2 **)(*param_2 + 0x10);
    uVar2 = *puVar5;
    *(undefined2 **)(*param_2 + 0x10) = puVar5 + 1;
    plVar6 = (longlong *)param_2[1];
    iVar3 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar3 + 2;
    if ((uint)(*(int *)((longlong)plVar6 + 0xc) - iVar3) < 2) {
      FUN_1447403be(plVar6,iVar3);
    }
    *(undefined2 *)(*plVar6 + (longlong)iVar3) = uVar2;
    FUN_14074ef86(param_2);
    goto LAB_14074ec3f;
  }
switchD_14074eb87_caseD_5:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14074ef86 FUN_14074ef86 body=76 status=ok
// SIG undefined FUN_14074ef86(void)

void FUN_14074ef86(longlong *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  return;
}



// FUNCTION 14074efd2 FUN_14074efd2 body=40 status=ok
// SIG undefined FUN_14074efd2(void)

undefined8 FUN_14074efd2(undefined8 param_1,int param_2)

{
  FUN_14074effa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14074effa FUN_14074effa body=185 status=ok
// SIG undefined FUN_14074effa(void)

void FUN_14074effa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1c4540;
  param_1[0x19] = &PTR_FUN_14a1c4a18;
  param_1[0x1a] = &PTR_FUN_14a1c4a30;
  param_1[0x1b] = &PTR_FUN_14a1c4a70;
  param_1[0x1c] = &PTR_FUN_14a1c4ab0;
  param_1[0xb1] = &PTR_FUN_14a1c4ad0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (param_1[0xbf] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d38(param_1 + 0xb7);
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f0b4(param_1);
  return;
}



// FUNCTION 14074f0b4 FUN_14074f0b4 body=1036 status=ok
// SIG undefined FUN_14074f0b4(void)

void FUN_14074f0b4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14aa88280;
  param_1[0x19] = &PTR_FUN_14aa88758;
  param_1[0x1a] = &PTR_FUN_14aa88770;
  param_1[0x1b] = &PTR_FUN_14aa887b0;
  param_1[0x1c] = &PTR_FUN_14aa887f0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0xa7);
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f529(param_1[0x98],*(undefined4 *)(param_1 + 0x99));
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f4c0(param_1[0x96],*(undefined4 *)(param_1 + 0x97));
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f4e6(param_1[0x94],*(undefined4 *)(param_1 + 0x95));
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x8d) = 0;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x84);
  FUN_14074f6ec(param_1 + 0x61);
  puVar2 = (undefined8 *)param_1[0x60];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (*(int *)((longlong)param_1 + 0x26c) != 0) {
    FUN_14472eb64(param_1 + 0x4c,0);
  }
  param_1[0x52] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x28c)) {
    *(undefined4 *)((longlong)param_1 + 0x28c) = 0x80;
    FUN_1446efbd8(param_1 + 0x4e,0);
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)((longlong)param_1 + 0x204) != 0) {
    FUN_14074f60a(param_1 + 0x3f,0);
  }
  param_1[0x45] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x224)) {
    *(undefined4 *)((longlong)param_1 + 0x224) = 0x80;
    FUN_1446efbd8(param_1 + 0x41,0);
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f57f(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x1d];
  if (lVar3 != 0) {
    FUN_14074f7be(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_1402161e2(param_1);
  return;
}



// FUNCTION 14074f4c0 FUN_14074f4c0 body=38 status=ok
// SIG undefined FUN_14074f4c0(void)

void FUN_14074f4c0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140296a6e(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 14074f4e6 FUN_14074f4e6 body=67 status=ok
// SIG undefined FUN_14074f4e6(void)

void FUN_14074f4e6(longlong param_1,int param_2)

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



// FUNCTION 14074f529 FUN_14074f529 body=86 status=ok
// SIG undefined FUN_14074f529(void)

void FUN_14074f529(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      FUN_140296a6e(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x30) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14074f57f FUN_14074f57f body=138 status=ok
// SIG undefined FUN_14074f57f(void)

void FUN_14074f57f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xd8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-9] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xb] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x1a] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14074f60a FUN_14074f60a body=225 status=ok
// SIG undefined FUN_14074f60a(void)

void FUN_14074f60a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,0x10);
  }
  return;
}



// FUNCTION 14074f6ec FUN_14074f6ec body=210 status=ok
// SIG undefined FUN_14074f6ec(void)

void FUN_14074f6ec(longlong *param_1)

{
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14074f7be FUN_14074f7be body=135 status=ok
// SIG undefined FUN_14074f7be(void)

void FUN_14074f7be(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (0 < (int)param_1[1]) {
    lVar2 = *param_1;
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4 * 8);
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((puVar3 != (undefined8 *)0x0) && (*piVar1 == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[1]);
  }
  FUN_14074f846(param_1,0);
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
  }
  FUN_14074f846(param_1,0);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14074f846 FUN_14074f846 body=116 status=ok
// SIG undefined FUN_14074f846(void)

void FUN_14074f846(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1447ab16c(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14074f8bc FUN_14074f8bc body=271 status=ok
// SIG undefined FUN_14074f8bc(void)

undefined8 * FUN_14074f8bc(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa981e8;
  FUN_140137a98(param_1 + 0xaa);
  FUN_1400ea36e(param_1 + 0xa3,param_1 + 0xa3);
  FUN_140137a98(param_1 + 0x8d);
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_140750162(param_1 + 0x7a);
  FUN_14074ff72(param_1 + 0x70);
  FUN_14074fab8(param_1 + 0x53);
  FUN_14074fe80(param_1 + 0x41);
  FUN_14074fdb2(param_1 + 0x38);
  FUN_14074f9cc(param_1 + 0x27);
  FUN_140296b76(param_1 + 0x1f);
  FUN_140296ab8(param_1 + 0x17);
  FUN_140296d44(param_1 + 6);
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14074fa24(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14074f9cc FUN_14074f9cc body=88 status=ok
// SIG undefined FUN_14074f9cc(void)

void FUN_14074f9cc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_14074fc36(param_1 + 0x48);
  FUN_14074fcf4(param_1);
  return;
}



// FUNCTION 14074fa24 FUN_14074fa24 body=103 status=ok
// SIG undefined FUN_14074fa24(void)

void FUN_14074fa24(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x68;
    do {
      FUN_1407502a2(param_1);
      if (*(longlong *)(param_1 + -0x30) != 0) {
        FUN_1400020a8();
      }
      FUN_14074fa8b(*(undefined8 *)(param_1 + -0x40),*(undefined4 *)(param_1 + -0x38));
      if (*(longlong *)(param_1 + -0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x50) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0xf8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14074fa8b FUN_14074fa8b body=45 status=ok
// SIG undefined FUN_14074fa8b(void)

void FUN_14074fa8b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14074fab8 FUN_14074fab8 body=145 status=ok
// SIG undefined FUN_14074fab8(void)

void FUN_14074fab8(longlong param_1)

{
  longlong lVar1;
  
  FUN_1407504d8();
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != 0) {
    FUN_14003821a(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14074fb4a(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14074fb82(param_1 + 0x10);
  return;
}



// FUNCTION 14074fb4a FUN_14074fb4a body=55 status=ok
// SIG undefined FUN_14074fb4a(void)

void FUN_14074fb4a(longlong *param_1)

{
  FUN_14056443c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14074fb82 FUN_14074fb82 body=55 status=ok
// SIG undefined FUN_14074fb82(void)

void FUN_14074fb82(longlong *param_1)

{
  FUN_14074fbba(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14074fbba FUN_14074fbba body=123 status=ok
// SIG undefined FUN_14074fbba(void)

void FUN_14074fbba(longlong param_1,int param_2)

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



// FUNCTION 14074fc36 FUN_14074fc36 body=190 status=ok
// SIG undefined FUN_14074fc36(void)

void FUN_14074fc36(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aa66da0;
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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



// FUNCTION 14074fcf4 FUN_14074fcf4 body=190 status=ok
// SIG undefined FUN_14074fcf4(void)

void FUN_14074fcf4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aa66e10;
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[6] = 0;
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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



// FUNCTION 14074fdb2 FUN_14074fdb2 body=206 status=ok
// SIG undefined FUN_14074fdb2(void)

void FUN_14074fdb2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aa66cc0;
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[6] = 0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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



// FUNCTION 14074fe80 FUN_14074fe80 body=241 status=ok
// SIG undefined FUN_14074fe80(void)

void FUN_14074fe80(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa61b00;
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
  if (param_1[5] != 0 && (param_1[5] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
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
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14074ff72 FUN_14074ff72 body=314 status=ok
// SIG undefined FUN_14074ff72(void)

void FUN_14074ff72(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
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
  iVar3 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
    iVar3 = (int)param_1[5];
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if ((iStack_34 != iVar3) || (local_40 != plVar1)) {
    do {
      puVar2 = *(undefined8 **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (((iStack_54 != iVar3) || (local_60 != plVar1)) || (local_70 != param_1));
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1407500ae(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407500ae FUN_1407500ae body=55 status=ok
// SIG undefined FUN_1407500ae(void)

void FUN_1407500ae(longlong *param_1)

{
  FUN_1407500e6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407500e6 FUN_1407500e6 body=123 status=ok
// SIG undefined FUN_1407500e6(void)

void FUN_1407500e6(longlong param_1,int param_2)

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



// FUNCTION 140750162 FUN_140750162 body=320 status=ok
// SIG undefined FUN_140750162(void)

void FUN_140750162(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa66c10;
  if (param_1[0xd] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xd] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xb] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xb] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[10] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[10] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[7] != 0 && (param_1[7] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0 && (param_1[3] & 1) == 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1407502a2 FUN_1407502a2 body=510 status=ok
// SIG undefined FUN_1407502a2(void)

void FUN_1407502a2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14aa8f770;
  if (param_1[0xd] != 0 && (param_1[0xd] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0 && (param_1[8] & 1) == 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = param_1[3];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
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
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1407504a0 FUN_1407504a0 body=56 status=ok
// SIG undefined FUN_1407504a0(void)

longlong FUN_1407504a0(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) != 0 && (*(ulonglong *)(param_1 + 0x10) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407504d8 FUN_1407504d8 body=2625 status=ok
// SIG undefined FUN_1407504d8(void)

void FUN_1407504d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *pvVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined ***pppuVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auStack_e8 [32];
  void ***local_c8;
  uint local_b4;
  longlong local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined8 uStack_90;
  void **local_88;
  void **local_80;
  undefined ***local_78;
  undefined **local_68;
  void *local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x10);
  local_98 = (void *)0x0;
  uStack_90 = 0;
  iVar13 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  if (iVar13 != 0) {
    FUN_14794de26(&local_98);
  }
  puVar8 = (uint *)(param_1 + 0x20);
  iVar13 = *(int *)(param_1 + 0x38);
  if (iVar13 == 0) {
    uVar25 = 1;
    iVar14 = 0;
    uVar19 = 0;
    iVar23 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar8;
    }
    uVar10 = *puVar12;
    if (uVar10 == 0) {
      iVar14 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar14 = iVar13 + -1;
      }
      uVar19 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar19) goto LAB_140750542;
        iVar14 = iVar14 + 0x20;
        uVar10 = puVar12[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar10 == 0);
    }
    else {
      iVar14 = 0;
      uVar19 = 0;
    }
    uVar25 = (ulonglong)(-uVar10 & uVar10);
    uVar15 = uVar25 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar23 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar23) {
      iVar23 = iVar13;
    }
  }
  if (iVar23 < iVar13) {
    local_b4 = 0xffffffff;
    do {
      uVar15 = uStack_90;
      local_b0 = *plVar1;
      lVar20 = (longlong)(int)uStack_90;
      uVar10 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
      if (uStack_90._4_4_ < uVar10) {
        FUN_14794de86(&local_98,uVar15 & 0xffffffff);
      }
      *(undefined8 *)((longlong)local_98 + lVar20 * 8) =
           *(undefined8 *)((longlong)iVar23 * 0x20 + local_b0 + 0x10);
      local_b4 = local_b4 & ~(uint)uVar25;
      puVar12 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar12 = puVar8;
      }
      iVar13 = *(int *)(param_1 + 0x38);
      iVar23 = (int)uVar19;
      lVar20 = (longlong)iVar23;
      uVar10 = puVar12[lVar20] & local_b4;
      if (uVar10 == 0) {
        iVar22 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar22 = iVar13 + -1;
        }
        iVar17 = iVar22 >> 5;
        if (iVar22 >> 5 < iVar23) {
          iVar17 = iVar23;
        }
        lVar26 = 0;
        do {
          if (iVar17 - lVar20 == lVar26) goto LAB_140750542;
          iVar14 = iVar14 + 0x20;
          uVar10 = puVar12[lVar20 + lVar26 + 1];
          lVar26 = lVar26 + 1;
        } while (uVar10 == 0);
        uVar19 = (ulonglong)(uint)(iVar23 + (int)lVar26);
        local_b4 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar10 & uVar10);
      uVar15 = uVar25 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar23 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar23 < iVar13);
  }
LAB_140750542:
  iVar14 = *(int *)(param_1 + 0x58);
  if (iVar14 < 2) {
    lVar20 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x50);
    }
    iVar23 = iVar14 + 3;
    if (-1 < iVar14) {
      iVar23 = iVar14;
    }
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44) < iVar23 >> 2) {
      if (iVar13 != 0) {
        puVar12 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar12 = puVar8;
        }
        uVar10 = *puVar12;
        if (uVar10 == 0) {
          iVar14 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar14 = iVar13 + -1;
          }
          uVar19 = 0;
          uVar15 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar15 = uVar19;
          }
          iVar14 = 0;
          do {
            if (uVar15 == uVar19) goto LAB_140750585;
            iVar14 = iVar14 + 0x20;
            uVar10 = puVar12[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar19 = 0;
          iVar14 = 0;
        }
        uVar25 = (ulonglong)(-uVar10 & uVar10);
        uVar15 = uVar25 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar23 = (iVar14 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar23 < iVar13) {
          uVar10 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar20 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x10) + 0x1c + (longlong)iVar23 * 0x20) * 4)
                 = 0xffffffff;
            uVar10 = ~(uint)uVar25 & uVar10;
            puVar12 = *(uint **)(param_1 + 0x30);
            if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
              puVar12 = puVar8;
            }
            iVar22 = *(int *)(param_1 + 0x38);
            iVar23 = (int)uVar19;
            lVar26 = (longlong)iVar23;
            uVar16 = puVar12[lVar26] & uVar10;
            if (uVar16 == 0) {
              iVar17 = iVar22 + 0x1e;
              if (-1 < iVar22 + -1) {
                iVar17 = iVar22 + -1;
              }
              iVar17 = iVar17 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar18 = iVar17;
              if (iVar17 < iVar23) {
                iVar18 = iVar23;
              }
              if (iVar23 < iVar17) {
                lVar24 = 0;
                do {
                  uVar16 = puVar12[lVar26 + lVar24 + 1];
                  if (uVar16 != 0) {
                    uVar19 = (ulonglong)(iVar23 + (int)lVar24 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_140750e20;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar18 - lVar26 != lVar24);
                uVar10 = 0xffffffff;
                lVar26 = (longlong)iVar18;
              }
              uVar19 = lVar26 + 1U & 0xffffffff;
              iVar23 = iVar22;
            }
            else {
LAB_140750e20:
              uVar25 = (ulonglong)(-uVar16 & uVar16);
              uVar15 = uVar25 * 2 + 1;
              lVar26 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                }
              }
              iVar23 = (iVar14 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
              if (iVar22 <= iVar23) {
                iVar23 = iVar22;
              }
            }
          } while (iVar23 != iVar13);
        }
      }
    }
    else if (iVar14 == 1) {
      lVar26 = 0;
      do {
        *(undefined4 *)(lVar20 + lVar26 * 4) = 0xffffffff;
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(param_1 + 0x58));
    }
LAB_140750585:
    FUN_14074fbba(plVar1,0);
  }
  else {
    FUN_14074fbba(plVar1,0);
    *(undefined4 *)(param_1 + 0x58) = 1;
    FUN_14794d8e4(plVar1);
  }
  if ((*(char *)(param_1 + 0xb0) == '\x01') && (*(char *)(param_1 + 0xb1) == '\0')) {
    local_88 = (void **)(param_1 + 8);
    FUN_1433f56c4(&local_98,&local_88);
    local_88 = (void **)(param_1 + 0xb4);
    local_80 = (void **)(param_1 + 8);
    FUN_14794d532(plVar1,&local_a8,&local_88);
  }
  local_88 = &local_a8;
  local_a8 = (void *)0x0;
  FUN_1433f56c4(&local_98,&local_88);
  FUN_1411a2ed6(param_1);
  pvVar4 = local_98;
  lVar20 = (longlong)(int)uStack_90;
  if (lVar20 == 0) goto LAB_1407505da;
  local_a8 = (void *)0x0;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_90);
  FUN_14794df0c(&local_a8,uStack_90 & 0xffffffff);
  memcpy(local_a8,pvVar4,lVar20 << 3);
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar20 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar13 == 2) goto LAB_140750676;
    if (iVar13 != 1) goto LAB_14075066d;
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    if (DVar5 == DVar6) goto LAB_140750676;
LAB_14075072d:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar20 + 0xc60), iVar13 == 2)) {
LAB_140750eac:
        pvVar4 = local_a8;
        lVar20 = (longlong)(int)uStack_a0;
        if (lVar20 != 0) {
          lVar26 = 0;
          do {
            lVar24 = *(longlong *)((longlong)pvVar4 + lVar26);
            FUN_144725486(lVar24 + 0x48);
            FUN_144725486(lVar24);
            if (lVar24 != 0) {
              FUN_14074f9cc(lVar24);
              FUN_1400020a8(lVar24);
            }
            lVar26 = lVar26 + 8;
          } while (lVar20 * 8 != lVar26);
        }
        goto LAB_1407507e9;
      }
      if (iVar13 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_140750eac;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar8 = (uint *)*puVar3;
      if (puVar8 != (uint *)0x0) goto LAB_14075089f;
      while( true ) {
        uVar10 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar10 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar10 | 1;
          __tlregdtor(&LAB_1433f550d);
        }
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar7 = *(undefined4 **)(lVar20 + 0x310);
        *(undefined8 *)(lVar20 + 0x310) = 0;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar7 = 0xffffffff;
        *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        *puVar3 = puVar7;
        FUN_140217a48(puVar3);
        puVar8 = (uint *)*puVar3;
LAB_14075089f:
        puVar21 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar12 = (uint *)(puVar21 + 0x17);
        uVar10 = puVar8[0x12];
        if (puVar12 <= puVar8 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
          LOCK();
          uVar16 = *puVar8;
          *puVar8 = *puVar8 + uVar10 + 1;
          UNLOCK();
          if ((uVar16 ^ uVar10) != 0xffffffff) break;
          puVar8 = (uint *)*puVar3;
          *puVar8 = 0xffffffff;
          *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar3 = puVar8;
          puVar21 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar21 + 0x17);
          uVar10 = 0;
          if (puVar12 <= puVar8 + 0x4000) {
            uVar10 = 1;
            goto LAB_14075091f;
          }
        }
      }
      uVar10 = uVar10 + 1;
LAB_14075091f:
      *(uint **)(puVar8 + 0x10) = puVar12;
      puVar8[0x12] = uVar10;
      iVar13 = 0;
      FUN_1447247dc(puVar21,0);
      *puVar21 = &PTR_FUN_14a7df9b0;
      puVar21[0x15] = local_a8;
      local_a8 = (void *)0x0;
      *(int *)(puVar21 + 0x16) = (int)uStack_a0;
      *(undefined4 *)((longlong)puVar21 + 0xb4) = uStack_a0._4_4_;
      uStack_a0 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar10 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar10 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
      }
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar21[9] = puVar21;
      puVar21[10] = puVar21;
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar20 == 0) {
        uVar15 = 1;
        if ((char)uVar19 != '\x06') {
          uVar15 = uVar19;
        }
        uVar19 = uVar15;
        uVar9 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
        }
        uVar9 = *(undefined8 *)(lVar20 + 0x30);
      }
      puVar21[0xf] = uVar9;
      puVar21[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar21 + 0x1c) = iVar13;
      if (puVar21 == (undefined8 *)0x0) {
        local_88 = (void **)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
        local_88 = (void **)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(puVar21);
        LOCK();
        piVar2 = (int *)(puVar21 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    else {
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a7df990;
      local_60 = local_a8;
      uStack_58 = uStack_a0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_88 = (void **)FUN_1433f5798;
      local_c8 = &local_88;
      FUN_14005a792(&DAT_14ca9a440,L"ReleaseSkinSkinWeightProfilesDataBufferCommand",&DAT_14cacd6ac)
      ;
      if (local_88 != (void **)0x0) {
        pppuVar11 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar11 = &local_68;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
  }
  else {
LAB_14075066d:
    if (iVar13 != 0x10) goto LAB_14075072d;
LAB_140750676:
    pvVar4 = local_a8;
    lVar20 = (longlong)(int)uStack_a0;
    if (lVar20 != 0) {
      lVar26 = 0;
      do {
        lVar24 = *(longlong *)((longlong)pvVar4 + lVar26);
        FUN_144725486(lVar24 + 0x48);
        FUN_144725486(lVar24);
        if (lVar24 != 0) {
          FUN_14074f9cc(lVar24);
          FUN_1400020a8(lVar24);
        }
        lVar26 = lVar26 + 8;
      } while (lVar20 * 8 != lVar26);
    }
  }
LAB_1407507e9:
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8(local_a8);
  }
LAB_1407505da:
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140750f1a FUN_140750f1a body=66 status=ok
// SIG undefined FUN_140750f1a(void)

undefined8 * FUN_140750f1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa692d0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140750f5c FUN_140750f5c body=498 status=ok
// SIG undefined FUN_140750f5c(void)

void FUN_140750f5c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [128];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xf7;
  *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) & 0xdf;
  if (((int)(uint)*(byte *)((longlong)param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
     ((((cVar1 = FUN_140041326(), cVar1 != '\0' ||
        ((*(byte *)((longlong)param_1 + 0x2dc) & 0x40) != 0)) ||
       ((*(byte *)((longlong)param_1 + 0x2d6) & 0x10) != 0)) ||
      ((*(byte *)((longlong)param_1 + 0x2df) & 2) != 0)))) {
    if (param_1[0xb5] == 0) {
      (**(code **)(*param_1 + 0x540))(param_1);
      lVar2 = param_1[0x16];
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      (**(code **)(**(longlong **)(lVar2 + 0x218) + 8))(*(longlong **)(lVar2 + 0x218),param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_148);
    }
    local_a8 = 2;
    uStack_a4 = 0x7f7fffff;
    uStack_a0 = 0x7f7fffff;
    uStack_9c = 0x7f7fffff;
    local_98 = &DAT_ff7fffffff7fffff;
    local_90 = 0xff7fffff;
    local_8c = 0;
    local_88 = DAT_14c84635c;
    local_80 = 0;
    local_78 = 0xffffffffffffffff;
    local_70 = 0;
    local_68 = 0;
    local_58 = (longlong *)0x0;
    (**(code **)(*param_1 + 0xbe8))
              (param_1,*(undefined4 *)(*(longlong *)(param_1[0xb5] + 0x210) + 8),local_128);
    cVar1 = FUN_140408498(param_1 + 0x118,local_128,0);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x540))(param_1);
      lVar2 = param_1[0x16];
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      (**(code **)(**(longlong **)(lVar2 + 0x218) + 0xa0))(*(longlong **)(lVar2 + 0x218),param_1);
    }
    if (local_68 != 0) {
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar3 = local_48;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140751162 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14075116e FUN_14075116e body=679 status=ok
// SIG undefined FUN_14075116e(void)

void FUN_14075116e(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  FUN_140751416();
  lVar4 = *(longlong *)(param_2 + 0x11e8);
  if (*(longlong *)(lVar4 + 0x3170) == 0) {
    if ((*(char *)(lVar4 + 0x34b0) == '\x01') && (lVar9 = lVar4 + 0x3210, lVar9 != 0))
    goto LAB_1407512ff;
    bVar5 = false;
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar4 + 0x3170) + 0xd8;
LAB_1407512ff:
    lVar10 = FUN_140153468(lVar9);
    bVar5 = true;
  }
  *(longlong *)(param_1 + 0x460) = lVar10;
  bVar11 = lVar10 != 0;
  bVar1 = *(byte *)(param_1 + 0x448);
  *(byte *)(param_1 + 0x448) = bVar1 & 0xfe | bVar11;
  bVar6 = (*(byte *)(lVar4 + 0x1f18) & 1) << 5;
  *(byte *)(param_1 + 0x448) = bVar1 & 0xde | bVar11 | bVar6;
  *(byte *)(param_1 + 0x448) = bVar1 & 0x5e | bVar11 | bVar6 | *(char *)(lVar4 + 0x2fc8) << 7;
  if (*(longlong *)(lVar4 + 0x1d10) == 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
    iVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x1d10) + 0xc);
    *(uint *)(param_1 + 0x450) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x454) = iVar7;
  bVar1 = *(byte *)(param_1 + 0x448);
  if (bVar5 && (bVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(lVar9 + 0x88);
  }
  if ((bVar1 & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(lVar4 + 0x1f48);
  }
  if ((char)bVar1 < '\0') {
    *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(lVar4 + 0x2fcc);
  }
  if ((bVar1 & 1) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x460);
    lVar10 = *(longlong *)(lVar9 + 0x240) + 0x30;
    if (*(longlong *)(lVar9 + 0x240) == 0) {
      lVar10 = lVar9 + 0x1c0;
    }
    if (*(int *)(lVar10 + 0x78) < 1) {
      lVar10 = *(longlong *)(lVar9 + 0x690) + 0x30;
      if (*(longlong *)(lVar9 + 0x690) == 0) {
        lVar10 = lVar9 + 0x610;
      }
      if (*(int *)(lVar10 + 0x78) < 1) goto LAB_14075127d;
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
LAB_14075127d:
  if (*(longlong *)(lVar4 + 0x41e0) != 0) {
    *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(*(longlong *)(lVar4 + 0x41e0) + 0xb8);
  }
  cVar2 = *(char *)(lVar4 + 0x2ca8);
  *(byte *)(param_1 + 0x449) = *(byte *)(param_1 + 0x449) & 0xf7 | cVar2 * '\b';
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(lVar4 + 0x2cac);
  }
  if (*(char *)(lVar4 + 0x411c) == '\x01') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  return;
}



// FUNCTION 140751416 FUN_140751416 body=1509 status=ok
// SIG undefined FUN_140751416(void)

void FUN_140751416(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  double *pdVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar23;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar24 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  if (lVar2 == 0) {
    puVar13 = &DAT_14c8464e0;
    uVar19 = (undefined4)DAT_14c8464f0;
    uVar23 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar19 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
    puVar13 = (undefined8 *)(lVar2 + 0x260);
  }
  uVar3 = puVar13[1];
  *(undefined8 *)(param_1 + 0x30) = *puVar13;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(uVar23,uVar19);
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  if (lVar2 == 0) {
    local_88 = DAT_14c846508;
    local_98 = (undefined4)DAT_14c8464f8;
    uStack_94 = DAT_14c8464f8._4_4_;
    uStack_90 = (undefined4)DAT_14c846500;
    uStack_8c = DAT_14c846500._4_4_;
  }
  else {
    dVar20 = *(double *)(lVar2 + 0x240);
    dVar21 = *(double *)(lVar2 + 0x248);
    puVar6 = *(undefined8 **)(lVar2 + 0x250);
    dVar22 = *(double *)(lVar2 + 600);
    pdVar14 = *(double **)(lVar2 + 0x228);
    lVar17 = param_1;
    local_b8 = dVar20;
    uStack_b0 = dVar21;
    local_a8 = puVar6;
    dStack_a0 = dVar22;
    if (pdVar14 == (double *)0x0) {
      lVar17 = 0x40;
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar10;
      dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar14[5] = dVar10;
      puVar13 = DAT_14c846508;
      pdVar14[6] = (double)DAT_14c846508;
      *(double **)(lVar2 + 0x228) = pdVar14;
    }
    auVar24._8_8_ = -(ulonglong)(dVar22 != pdVar14[3]);
    auVar24._0_8_ = -(ulonglong)((double)puVar6 != pdVar14[2]);
    auVar5._8_4_ = (int)-(ulonglong)(dVar21 != pdVar14[1]);
    auVar5._0_8_ = -(ulonglong)(dVar20 != *pdVar14);
    auVar5._12_4_ = (int)(-(ulonglong)(dVar21 != pdVar14[1]) >> 0x20);
    iVar12 = movmskpd((int)puVar13,auVar5);
    uVar15 = movmskpd((int)lVar17,auVar24);
    if ((uVar15 & 0x3fffffff) != 0 || iVar12 != 0) {
      pdVar14[2] = (double)local_a8;
      pdVar14[3] = dStack_a0;
      *(undefined4 *)pdVar14 = (undefined4)local_b8;
      *(undefined4 *)((longlong)pdVar14 + 4) = local_b8._4_4_;
      *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_b0._4_4_;
      FUN_1448052ee(&local_b8,&local_98);
      pdVar14[6] = (double)local_88;
      pdVar14[4] = (double)CONCAT44(uStack_94,local_98);
      pdVar14[5] = (double)CONCAT44(uStack_8c,uStack_90);
    }
    local_88 = (undefined8 *)pdVar14[6];
    local_98 = *(undefined4 *)(pdVar14 + 4);
    uStack_94 = *(undefined4 *)((longlong)pdVar14 + 0x24);
    uStack_90 = *(undefined4 *)(pdVar14 + 5);
    uStack_8c = *(undefined4 *)((longlong)pdVar14 + 0x2c);
  }
  *(undefined8 **)(param_1 + 0x198) = local_88;
  *(ulonglong *)(param_1 + 0x188) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 400) = CONCAT44(uStack_8c,uStack_90);
  lVar2 = *(longlong *)(param_2 + 0x430);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar2 + 0x138);
  uVar19 = *(undefined4 *)(lVar2 + 300);
  uVar23 = *(undefined4 *)(lVar2 + 0x130);
  uVar7 = *(undefined4 *)(lVar2 + 0x134);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar2 + 0x128);
  *(undefined4 *)(param_1 + 100) = uVar19;
  *(undefined4 *)(param_1 + 0x68) = uVar23;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  lVar2 = *(longlong *)(param_2 + 0x450);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    iVar12 = 0;
  }
  else {
    uVar15 = *(uint *)(lVar2 + 0xc);
    *(uint *)(param_1 + 0x1e8) = uVar15;
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar12 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar12 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar12 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar16;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar12 = iVar16;
      }
    }
  }
  *(int *)(param_1 + 0x1ec) = iVar12;
  dVar20 = DAT_14c8463d8;
  *(double *)(param_1 + 0x1c0) = DAT_14c8463d0;
  *(double *)(param_1 + 0x1c8) = dVar20;
  dVar20 = DAT_14c8463e8;
  *(double *)(param_1 + 0x1d0) = DAT_14c8463e0;
  *(double *)(param_1 + 0x1d8) = dVar20;
  memcpy((void *)(param_1 + 0x78),(void *)(*(longlong *)(param_2 + 0x430) + 0x498),0x110);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined8 *)(param_2 + 0x444);
  *(undefined8 *)(param_1 + 0x1f0) = uVar3;
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x570);
  *(undefined4 *)(param_1 + 0x1fc) = DAT_14cad1f98;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x1fb) == '\x02')) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x468);
    uVar19 = *(undefined4 *)(param_2 + 0x45c);
    uVar23 = *(undefined4 *)(param_2 + 0x460);
    uVar7 = *(undefined4 *)(param_2 + 0x464);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x458);
    *(undefined4 *)(param_1 + 0x4c) = uVar19;
    *(undefined4 *)(param_1 + 0x50) = uVar23;
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    FUN_1403d625c(lVar2,uVar3,&local_b8,param_1 + 0x1c0);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x430) + 0x110);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x120) == 0) {
      *(undefined4 *)(param_1 + 0x200) = 0;
      iVar12 = 0;
    }
    else {
      uVar15 = *(uint *)(*(longlong *)(lVar2 + 0x120) + 0xc);
      *(uint *)(param_1 + 0x200) = uVar15;
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar12 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar12 = *(int *)(lVar17 + 0x10);
        bVar18 = iVar12 == 0;
        if (bVar18) {
          *(int *)(lVar17 + 0x10) = iVar16;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar12 = iVar16;
        }
      }
    }
    *(int *)(param_1 + 0x204) = iVar12;
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(lVar2 + 0x128);
    uVar3 = *(undefined8 *)(lVar2 + 0x198);
    uVar9 = *(undefined8 *)(lVar2 + 0x1a0);
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(lVar2 + 0x1a8);
    *(undefined8 *)(param_1 + 0x210) = uVar3;
    *(undefined8 *)(param_1 + 0x218) = uVar9;
    uVar19 = *(undefined4 *)(lVar2 + 0x1b0);
    uVar23 = *(undefined4 *)(lVar2 + 0x1b4);
    uVar7 = *(undefined4 *)(lVar2 + 0x1b8);
    uVar8 = *(undefined4 *)(lVar2 + 0x1bc);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(lVar2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x228) = uVar19;
    *(undefined4 *)(param_1 + 0x22c) = uVar23;
    *(undefined4 *)(param_1 + 0x230) = uVar7;
    *(undefined4 *)(param_1 + 0x234) = uVar8;
  }
  plVar4 = *(longlong **)(param_2 + 0x3c0);
  if (plVar4 == (longlong *)0x0) {
    local_a8 = DAT_14c846508;
    local_b8 = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    uStack_b0 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  }
  else {
    (**(code **)(*plVar4 + 0x680))(plVar4,&local_b8);
  }
  dVar20 = (double)FUN_144719204((int)local_a8,0x4076800000000000);
  dVar21 = (double)FUN_144719204(SUB84(uStack_b0,0),0x4076800000000000);
  dVar22 = (double)FUN_144719204(SUB84(local_b8,0),0x4076800000000000);
  *(ulonglong *)(param_1 + 0x1a0) =
       ~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
       (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0);
  *(ulonglong *)(param_1 + 0x1a8) =
       ~-(ulonglong)(dVar21 < 0.0) & (ulonglong)dVar21 |
       (ulonglong)(dVar21 + 360.0) & -(ulonglong)(dVar21 < 0.0);
  *(ulonglong *)(param_1 + 0x1b0) =
       ~-(ulonglong)(dVar20 < 0.0) & (ulonglong)dVar20 |
       (ulonglong)(dVar20 + 360.0) & -(ulonglong)(dVar20 < 0.0);
  lVar2 = *(longlong *)(param_2 + 0x438);
  dVar20 = *(double *)(lVar2 + 0x280);
  uVar19 = SUB84(dVar20,0);
  uVar23 = (undefined4)((ulonglong)dVar20 >> 0x20);
  dVar21 = *(double *)(lVar2 + 0x288);
  if (dVar21 <= dVar20) {
    uVar19 = SUB84(dVar21,0);
    uVar23 = (undefined4)((ulonglong)dVar21 >> 0x20);
  }
  *(float *)(param_1 + 0x1e0) = (float)(double)CONCAT44(uVar23,uVar19) * *(float *)(lVar2 + 0x644);
  *(float *)(param_1 + 0x1e4) = (float)*(double *)(lVar2 + 0x290) * *(float *)(lVar2 + 0x640);
  bVar11 = *(byte *)(param_2 + 0x550) >> 3 & 1;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 & 0xfe | bVar11;
  *(byte *)(param_1 + 0x10) = bVar1 & 0xde | bVar11 | (*(byte *)(param_2 + 0x551) & 8) << 2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x554);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x564);
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407519fc FUN_1407519fc body=169 status=ok
// SIG undefined FUN_1407519fc(void)

undefined8 FUN_1407519fc(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[10];
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[0xb] - 1U) * 4)
    ;
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_140751aa6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140751aa6 FUN_140751aa6 body=105 status=ok
// SIG undefined FUN_140751aa6(void)

void FUN_140751aa6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar2 = param_1 + 8;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[10];
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = param_1 + 7;
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar4 = *(int *)((longlong)plVar2 + lVar5 * 4);
  if (iVar4 == param_2) {
    piVar3 = (int *)((longlong)plVar2 + lVar5 * 4);
  }
  else {
    do {
      piVar3 = (int *)((longlong)iVar4 * 0x10 + lVar1 + 8);
      iVar4 = *piVar3;
    } while (iVar4 != param_2);
  }
  *piVar3 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_140751b10(param_1,param_2,1);
  return;
}



// FUNCTION 140751b10 FUN_140751b10 body=138 status=ok
// SIG undefined FUN_140751b10(void)

void FUN_140751b10(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140751b9a FUN_140751b9a body=35 status=ok
// SIG undefined FUN_140751b9a(void)

void FUN_140751b9a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140751bbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab6a2e0;
  return;
}



// FUNCTION 140751bbe FUN_140751bbe body=98 status=ok
// SIG undefined FUN_140751bbe(void)

undefined8 * FUN_140751bbe(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a7c09d0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 140751c20 FUN_140751c20 body=71 status=ok
// SIG undefined FUN_140751c20(void)

void FUN_140751c20(longlong param_1)

{
  float fVar1;
  
  *(float *)(param_1 + 0xdcc) = *(float *)(param_1 + 0xdc0) * *(float *)(param_1 + 0xdc0);
  fVar1 = cosf(*(float *)(param_1 + 0xdc4) * 0.017453292);
  *(float *)(param_1 + 0xdc8) = fVar1;
  FUN_140751c68(param_1);
  return;
}



// FUNCTION 140751c68 FUN_140751c68 body=77 status=ok
// SIG undefined FUN_140751c68(void)

void FUN_140751c68(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    FUN_14072bb4a(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_1 + 0x658);
    }
  }
  *(longlong *)(param_1 + 0x660) = lVar1;
  return;
}



// FUNCTION 140751cb6 FUN_140751cb6 body=368 status=ok
// SIG undefined FUN_140751cb6(void)

ulonglong FUN_140751cb6(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong unaff_RBX;
  undefined1 auStack_58 [47];
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    if ((longlong)*(int *)(param_1 + 200) != 0) {
      plVar3 = *(longlong **)(param_1 + 0xc0);
      lVar4 = (longlong)*(int *)(param_1 + 200) * 0xc;
      do {
        if (*plVar3 == 0) {
          if (plVar3 != (longlong *)0x0) goto LAB_140751de8;
          break;
        }
        plVar3 = (longlong *)((longlong)plVar3 + 0xc);
        lVar4 = lVar4 + -0xc;
      } while (lVar4 != 0);
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_140751e3e(&DAT_14c846b20,L"-gbx.analytics.enabled=",&local_29);
    unaff_RBX = 1;
    if (cVar2 != '\0') {
      unaff_RBX = (ulonglong)local_29;
    }
    iVar1 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
      FUN_1462a5dd6((longlong *)(param_1 + 0xc0),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0xc0);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0xc) = 0;
    *(char *)(lVar4 + 8 + (longlong)iVar1 * 0xc) = (char)unaff_RBX;
  }
  else {
    unaff_RBX = 0;
    cVar2 = FUN_140751cb6(param_1,0);
    if (cVar2 != '\0') {
      if ((longlong)*(int *)(param_1 + 200) != 0) {
        plVar3 = *(longlong **)(param_1 + 0xc0);
        lVar4 = (longlong)*(int *)(param_1 + 200) * 0xc;
        do {
          if (*plVar3 == param_2) {
            if (plVar3 != (longlong *)0x0) goto LAB_140751de8;
            break;
          }
          plVar3 = (longlong *)((longlong)plVar3 + 0xc);
          lVar4 = lVar4 + -0xc;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_140751deb:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffff01;
LAB_140751de8:
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),(char)plVar3[1]);
  goto LAB_140751deb;
}



// FUNCTION 140751e3e FUN_140751e3e body=105 status=ok
// SIG undefined FUN_140751e3e(void)

undefined4 FUN_140751e3e(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_48 = 1;
  uVar2 = FUN_140751ea8(param_1,param_2,local_38,0x10);
  if ((char)uVar2 != '\0') {
    uVar1 = FUN_14052c20c(local_38);
    *param_3 = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140751ea8 FUN_140751ea8 body=464 status=ok
// SIG undefined FUN_140751ea8(void)

undefined8
FUN_140751ea8(undefined8 param_1,wchar_t *param_2,undefined2 *param_3,int param_4,char param_5,
             longlong *param_6)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t wVar7;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t wVar10;
  
  if (param_4 != 0) {
    sVar4 = wcslen(param_2);
    if (param_6 != (longlong *)0x0) {
      *param_6 = 0;
    }
    pwVar5 = (wchar_t *)FUN_144a29ec4(param_1,param_2,1);
    if (pwVar5 != (wchar_t *)0x0) {
      pwVar8 = pwVar5 + (int)sVar4;
      wVar1 = pwVar5[(int)sVar4];
      pwVar6 = pwVar8;
      wVar7 = wVar1;
      if (wVar1 == L'\"') {
        pwVar8 = pwVar8 + 1;
        pwVar6 = wcsstr(pwVar8,L"\"");
        if (pwVar6 == (wchar_t *)0x0) {
          sVar4 = wcslen(pwVar5);
          pwVar6 = pwVar5 + (int)sVar4;
        }
      }
      else {
        while (wVar7 != L'\0') {
          wVar10 = L' ';
          pwVar5 = L"\r\n\t";
          while (wVar7 != wVar10) {
            wVar10 = *pwVar5;
            pwVar5 = pwVar5 + 1;
            if (wVar10 == L'\0') goto LAB_140751fc9;
          }
          pwVar5 = pwVar6 + 1;
          pwVar6 = pwVar6 + 1;
          wVar7 = *pwVar5;
        }
LAB_140751fc9:
        pwVar5 = L" \r\n\t";
        if (param_5 != '\0') {
          pwVar5 = L",) \r\n\t";
        }
        pwVar8 = pwVar8 + (int)((ulonglong)((longlong)pwVar6 - (longlong)pwVar8) >> 1);
        wVar7 = *pwVar8;
        pwVar6 = pwVar8;
        if (wVar7 != L'\0') {
          wVar10 = *pwVar5;
          pwVar2 = pwVar5;
          do {
            while (wVar10 != L'\0') {
              if (wVar7 == wVar10) goto LAB_14075202d;
              wVar10 = pwVar2[1];
              pwVar2 = pwVar2 + 1;
            }
            wVar7 = pwVar6[1];
            pwVar6 = pwVar6 + 1;
            wVar10 = *pwVar5;
            pwVar2 = pwVar5;
          } while (wVar7 != L'\0');
        }
LAB_14075202d:
        pwVar6 = pwVar8 + (int)((ulonglong)((longlong)pwVar6 - (longlong)pwVar8) >> 1);
      }
      iVar3 = (int)((ulonglong)((longlong)pwVar6 - (longlong)pwVar8) >> 1);
      iVar9 = param_4 + -1;
      if (iVar3 <= param_4 + -1) {
        iVar9 = iVar3;
      }
      memcpy(param_3,pwVar8,(longlong)iVar9 * 2);
      param_3[iVar9] = 0;
      if (param_6 == (longlong *)0x0) {
        return 1;
      }
      if (wVar1 == L'\"') {
        pwVar6 = pwVar6 + (*pwVar6 == L'\"');
      }
      *param_6 = (longlong)pwVar6;
      return 1;
    }
    *param_3 = 0;
  }
  return 0;
}



// FUNCTION 140752078 FUN_140752078 body=136 status=ok
// SIG undefined FUN_140752078(void)

void FUN_140752078(longlong param_1)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x100) & 1) == 0) && (*(char *)(param_1 + 0xfe) == '\0')) {
    lVar1 = param_1 + 0x78;
    FUN_140752100(param_1,lVar1);
    FUN_140c093bf(param_1 + 0x10,param_1 + 0x50,param_1 + 0x60,lVar1);
    if (*(char *)(param_1 + 0xfc) == '\x01') {
      FUN_147c48bd6(param_1 + 0x20,lVar1);
    }
    if ((*(char *)(param_1 + 0xfd) == '\0') &&
       (*(undefined4 *)(param_1 + 0x58) = 0, *(int *)(param_1 + 0x5c) != 0)) {
      FUN_14481578e(param_1 + 0x50,0);
      return;
    }
  }
  return;
}



// FUNCTION 140752100 FUN_140752100 body=78 status=ok
// SIG undefined FUN_140752100(void)

void FUN_140752100(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_143626e8e(param_1,param_2 + 0x50,0);
  }
  if (*(char *)(param_2 + 0x81) != '\x01') {
    return;
  }
  FUN_143626e8e(param_1,param_2 + 0x60,1);
  return;
}



// FUNCTION 14075214e FUN_14075214e body=99 status=ok
// SIG undefined FUN_14075214e(void)

void FUN_14075214e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  FUN_1407521b2(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407521b2 FUN_1407521b2 body=430 status=ok
// SIG undefined FUN_1407521b2(void)

void FUN_1407521b2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14ad42464);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  uVar2 = FUN_1448332aa(plVar1,&DAT_14ad42464);
  iVar3 = FUN_1448332aa(plVar1,&DAT_149e3cc78);
  if ((*(byte *)(plVar1 + 5) & 1) != 0) {
    if ((int)uVar2 < 0x34) {
      *(undefined1 *)(param_1 + 0xe3) = 2;
    }
    if (iVar3 < 0x6d) {
      *(undefined2 *)(param_1 + 0xe1) = 0;
    }
    if ((int)uVar2 < 0x50) {
      *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xfe;
    }
    else if (0x56 < uVar2) goto LAB_140752238;
    FUN_140120ed2(&local_70,&DAT_14cb41c78);
    *(undefined4 *)(param_1 + 0x4b0) = local_68;
    *(undefined8 *)(param_1 + 0x4a8) = local_70;
    if ((undefined8 *)(param_1 + 0x4a8) != &local_70) {
      if (*(longlong *)(param_1 + 0x4b8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x4b8) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x4c0) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0x4c4) = local_58._4_4_;
      local_58 = 0;
    }
    *(undefined4 *)(param_1 + 0x4d8) = local_40;
    *(undefined4 *)(param_1 + 0x4c8) = local_50;
    *(undefined4 *)(param_1 + 0x4cc) = uStack_4c;
    *(undefined4 *)(param_1 + 0x4d0) = uStack_48;
    *(undefined4 *)(param_1 + 0x4d4) = uStack_44;
    *(undefined1 *)(param_1 + 0x4dc) = local_3c;
    *(undefined1 *)(param_1 + 0x4dd) = local_3b;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140752238:
  switchD_143c3d4dc::caseD_20(param_1,param_2);
  if (((plVar1[0xd] != 0) && (*(longlong *)(plVar1[0xd] + 0x10) != 0)) ||
     ((*(byte *)(plVar1 + 5) & 1) != 0)) {
    FUN_140752362(param_1 + 0x7b8,param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140752362 FUN_140752362 body=383 status=ok
// SIG undefined FUN_140752362(void)

void FUN_140752362(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = (int)param_1[1];
  plVar2 = *(longlong **)(*param_2 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_34,4);
    }
    else {
      FUN_14572512c(plVar2,&local_34);
    }
  }
  else {
    local_34 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
    FUN_1407524e2(param_1,local_34,1);
  }
  if (0 < local_34) {
    lVar7 = 4;
    lVar8 = 0;
    do {
      lVar4 = *param_1;
      puVar6 = (undefined4 *)(lVar4 + lVar7 + -4);
      plVar2 = *(longlong **)(*param_2 + 8);
      puVar5 = *(undefined4 **)plVar2[1];
      if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar5 + 1) {
        if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar2 + 0x170))(plVar2,puVar6,4);
        }
        else {
          FUN_14572512c();
        }
      }
      else {
        *puVar6 = *puVar5;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
      }
      puVar6 = (undefined4 *)(lVar4 + lVar7);
      plVar2 = *(longlong **)(*param_2 + 8);
      puVar5 = *(undefined4 **)plVar2[1];
      if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar5 + 1) {
        if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar2 + 0x170))(plVar2,puVar6,4);
        }
        else {
          FUN_14572512c(plVar2,puVar6);
        }
      }
      else {
        *puVar6 = *puVar5;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar8 < local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407524e2 FUN_1407524e2 body=115 status=ok
// SIG undefined FUN_1407524e2(void)

void FUN_1407524e2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140752556(param_1,iVar1);
    }
    FUN_140752555((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146bed202(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140752555 FUN_140752555 body=1 status=ok
// SIG undefined FUN_140752555(void)

void FUN_140752555(void)

{
  return;
}



// FUNCTION 140752556 FUN_140752556 body=353 status=ok
// SIG undefined FUN_140752556(void)

void FUN_140752556(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407525db;
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
LAB_1407525db:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1407526b8 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407526be FUN_1407526be body=204 status=ok
// SIG undefined FUN_1407526be(void)

void FUN_1407526be(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar2 = *(longlong **)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2);
  if ((plVar2 != (longlong *)0x0) && (lVar3 != 0)) {
    local_68 = (undefined4)local_58;
    uStack_64 = local_58._4_4_;
    uStack_60 = (undefined4)uStack_50;
    uStack_5c = uStack_50._4_4_;
    (**(code **)(*plVar2 + 0x1f0))(plVar2,&local_68,0,lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140752794 FUN_140752794 body=2429 status=ok
// SIG undefined FUN_140752794(void)

void FUN_140752794(undefined8 param_1,longlong param_2,void *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  code *local_170;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148 [2];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110 [2];
  longlong *local_100 [2];
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined8 *)(param_2 + 0x30) = 0;
  local_c0 = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar5 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar5])(param_1,param_2,&local_c0);
  lVar11 = *(longlong *)(param_2 + 0x20);
  if ((local_c0 != 0) && ((*(uint *)(local_c0 + 8) >> 0x1e & 1) == 0)) {
    *(longlong *)(param_2 + 0x20) = lVar11 + 0xd;
    (*(code *)(&DAT_14c962c70)[*(byte *)(lVar11 + 0xc)])(local_c0,param_2,param_3);
    if (*(char *)(param_2 + 0xa0) != '\x01') goto LAB_140752fe3;
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    *(undefined1 *)(param_2 + 0xa0) = 0;
    *(longlong *)(param_2 + 0x20) = lVar11;
  }
  plVar1 = (longlong *)(param_2 + 0x30);
  if (param_4 == '\0') {
    local_160 = param_1;
    if ((local_c0 == 0) || ((*(uint *)(local_c0 + 8) >> 0x1e & 1) == 0)) {
      if (*plVar1 != 0) {
        FUN_1400021e4(*plVar1 + 0x20,local_f0);
        FUN_140233b1a(local_148,local_f0);
        local_88 = L"AccessNoneContext";
        local_80._0_4_ = 0x11;
        FUN_1446e940c(local_130,&local_88);
        local_88 = L"ScriptCore";
        local_80._0_4_ = 10;
        FUN_1446e940c(local_134,&local_88);
        local_88 = L"Accessed None trying to read property {0}";
        local_80 = (longlong *)CONCAT44(local_80._4_4_,0x29);
        FUN_140208c1e(local_110,local_134,local_130,&local_88);
        FUN_14023409e(&local_158,local_110,1);
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
        FUN_14023423e(&local_78,local_148);
        local_a0 = (ulonglong *)local_68;
        local_a8 = &local_88;
        FUN_14010d304(&local_98);
        local_b8 = local_158;
        local_b0 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_d0,&local_b8,&local_98);
        FUN_14007f2db(local_98);
        if (local_98 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
        }
        uVar9 = local_160;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_150 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar2 = (int *)((longlong)local_150 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_150 + 0x10))(local_150);
            }
          }
        }
        if (local_148[0] != (longlong *)0x0) {
          (**(code **)(*local_148[0] + 0x10))();
        }
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,3);
        local_80 = local_d0;
        if (local_d0 == (longlong *)0x0) {
          local_78 = local_c8;
        }
        else {
          (**(code **)(*local_d0 + 8))(local_d0);
          local_78 = local_c8;
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
        if (local_110[0] != (longlong *)0x0) {
          (**(code **)(*local_110[0] + 0x10))();
        }
        goto LAB_140752e69;
      }
      local_88 = L"AccessNoneNoContext";
      local_80._0_4_ = 0x13;
      FUN_1446e940c(&local_a8,&local_88);
      local_88 = L"ScriptCore";
      local_80._0_4_ = 10;
      FUN_1446e940c(&local_b8,&local_88);
      local_88 = L"Accessed None";
      local_80 = (longlong *)CONCAT44(local_80._4_4_,0xd);
      FUN_140208c1e(&local_98,&local_b8,&local_a8,&local_88);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,3);
      local_80 = local_98;
      if (local_98 == (longlong *)0x0) {
        local_78 = local_90;
      }
      else {
        (**(code **)(*local_98 + 8))();
        local_78 = local_90;
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      uVar9 = local_160;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar3 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar3 != 2)) {
        if (iVar3 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          uVar9 = local_160;
          if (DVar7 == DVar8) goto LAB_1407530f1;
        }
        goto LAB_140752f18;
      }
LAB_1407530f1:
      FUN_14282d110(&DAT_14c963468,uVar9,param_2,&local_88);
      if ((int)local_88 == 7) {
        *(undefined1 *)(param_2 + 0xa1) = 1;
      }
    }
    else {
      if (*plVar1 == 0) {
        FUN_140056680(local_f0,&DAT_149e62e78);
      }
      else {
        FUN_1400021e4(*plVar1 + 0x20,local_f0);
      }
      FUN_140233b1a(local_e0,local_f0);
      if (local_c0 == 0) {
        FUN_140056680(local_110,&DAT_149e01fe8);
      }
      else {
        local_88 = *(wchar_t **)(local_c0 + 0x18);
        FUN_1400021e4(&local_88,local_110);
      }
      FUN_140233b1a(local_100,local_110);
      local_88 = L"AccessPendingKill";
      local_80._0_4_ = 0x11;
      FUN_1446e940c(local_134,&local_88);
      local_88 = L"ScriptCore";
      local_80._0_4_ = 10;
      FUN_1446e940c(local_138,&local_88);
      local_88 = 
      L"Attempted to access {0} via property {1}, but {0} is not valid (pending kill or garbage)";
      local_80 = (longlong *)CONCAT44(local_80._4_4_,0x58);
      FUN_140208c1e(local_130,local_138,local_134,&local_88);
      FUN_14023409e(&local_120,local_130,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(&local_78,local_100);
      local_68[0] = 4;
      FUN_14023423e(local_58,local_e0);
      local_a0 = &local_48;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_120;
      local_b0 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_d0,&local_b8,&local_98);
      FUN_14007f2db(local_98);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = local_160;
      lVar11 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_88 + lVar11) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_88 + lVar11) + 0x10))();
          *(undefined8 *)((longlong)&local_88 + lVar11) = 0;
          *(undefined4 *)((longlong)&local_80 + lVar11) = 0;
        }
        lVar11 = lVar11 + -0x20;
      } while (lVar11 != -0x10);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_118 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)local_118 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_118 + 0x10))(local_118);
          }
        }
      }
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      if (local_e0[0] != (longlong *)0x0) {
        (**(code **)(*local_e0[0] + 0x10))();
      }
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,3);
      local_80 = local_d0;
      if (local_d0 == (longlong *)0x0) {
        local_78 = local_c8;
      }
      else {
        (**(code **)(*local_d0 + 8))(local_d0);
        local_78 = local_c8;
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
      if (local_130[0] != (longlong *)0x0) {
        (**(code **)(*local_130[0] + 0x10))();
      }
      if (local_110[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
LAB_140752e69:
      if (local_f0[0] != 0) {
        FUN_1400020a8();
      }
      if ((DAT_14c86a9f8 != '\x01') ||
         (iVar3 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar3 == 2)) goto LAB_1407530f1;
      if (iVar3 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1407530f1;
      }
    }
LAB_140752f18:
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  puVar6 = *(uint **)(param_2 + 0x20);
  uVar4 = *puVar6;
  *(uint **)(param_2 + 0x20) = puVar6 + 1;
  plVar10 = *(longlong **)(puVar6 + 1);
  *(uint **)(param_2 + 0x20) = puVar6 + 3;
  *(longlong **)(param_2 + 0x30) = plVar10;
  if (plVar10 == (longlong *)0x0) {
LAB_140752f4f:
    plVar10 = (longlong *)0x0;
  }
  else {
    puVar12 = (undefined *)plVar10[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_178 = FUN_140342cba();
      local_170 = FUN_1468c7f1e;
      local_180 = 0;
      local_188 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    if (DAT_14c951a40 == 0) {
      bVar13 = puVar12 != (undefined *)0x0;
      if (puVar12 != &DAT_14c951a38 && bVar13) {
        do {
          puVar12 = *(undefined **)(puVar12 + 0x30);
          bVar13 = puVar12 != (undefined *)0x0;
          if (puVar12 == &DAT_14c951a38) break;
        } while (puVar12 != (undefined *)0x0);
      }
      if (!bVar13) goto LAB_140752f4f;
    }
    else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951a40) == 0) goto LAB_140752f4f;
  }
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + (ulonglong)uVar4;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if ((param_3 != (void *)0x0) && (plVar10 != (longlong *)0x0)) {
    if ((~plVar10[7] & 0x1000000200U) == 0) {
      memset(param_3,0,(longlong)*(int *)((longlong)plVar10 + 0x34));
    }
    else {
      (**(code **)(*plVar10 + 0x140))(plVar10,param_3);
    }
  }
LAB_140752fe3:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140753112 FUN_140753112 body=104 status=ok
// SIG undefined FUN_140753112(void)

undefined8 FUN_140753112(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14075317c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075317c FUN_14075317c body=42 status=ok
// SIG undefined FUN_14075317c(void)

undefined8 FUN_14075317c(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb7f728;
  if ((((DAT_14cb7f728 == (longlong *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) ||
     (*param_1 == DAT_14c948000)) {
    return 0;
  }
  if (*(code **)(*DAT_14cb7f728 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb7f728 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb7f728[0x3a] <= *(int *)((longlong)DAT_14cb7f728 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb7f728 + 0x300))(DAT_14cb7f728);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1407531a6 FUN_1407531a6 body=1073 status=ok
// SIG undefined FUN_1407531a6(void)

bool FUN_1407531a6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar13 = (longlong)param_2;
  uVar2 = *(uint *)(param_1[2] + lVar13 * 4);
  uVar18 = *(uint *)(param_1 + 0xe);
  uVar15 = uVar18 & uVar2;
  plVar1 = param_1 + 8;
  plVar7 = (longlong *)param_1[9];
  if ((longlong *)param_1[9] == (longlong *)0x0) {
    plVar7 = plVar1;
  }
  do {
    iVar3 = *(int *)((longlong)plVar7 + (longlong)(int)uVar15 * 4);
    if (iVar3 == param_2) {
      FUN_1447f872e(param_1 + 4,param_2);
      *(undefined4 *)(param_1[2] + lVar13 * 4) = 0x80000000;
      lVar5 = *param_1;
      lVar13 = lVar13 * 0x98;
      *(undefined4 *)(lVar5 + 0x68 + lVar13) = 0;
      if (*(longlong *)(lVar5 + 0x60 + lVar13) != 0) {
        FUN_1400020a8();
      }
      FUN_1407535d8(lVar5 + lVar13 + 0x20);
      plVar7 = param_1 + 0xb;
      plVar8 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar8 = plVar7;
      }
      *(undefined4 *)((longlong)plVar8 + (longlong)(int)uVar15 * 4) = 0x80000000;
      uVar2 = *(uint *)(param_1 + 0xe);
      if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 0x14) <
          (ulonglong)(uVar2 * 3)) {
        puVar9 = (undefined4 *)param_1[9];
        if (puVar9 == (undefined4 *)0x0) {
          local_60[0] = (undefined4)*plVar1;
        }
        param_1[9] = 0;
        local_50 = (undefined4)param_1[10];
        local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
        param_1[10] = 0x100000000;
        local_90 = (undefined4 *)param_1[0xc];
        if (local_90 == (undefined4 *)0x0) {
          local_78[0] = (undefined4)*plVar7;
        }
        param_1[0xc] = 0;
        local_68 = (undefined4)param_1[0xd];
        local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
        param_1[0xd] = 0x100000000;
        *(uint *)(param_1 + 0xe) = uVar2 >> 1;
        *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        local_70 = local_90;
        local_58 = puVar9;
        if ((int)((uVar2 >> 1) + 1) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(0x80000000);
        }
        if (uVar2 < 2) {
          iVar11 = 0;
          uVar18 = 1;
          iVar6 = 1;
        }
        else {
          FUN_14475fe8c(plVar1);
          iVar11 = (int)param_1[10];
          iVar6 = *(int *)((longlong)param_1 + 0x54);
          uVar18 = (int)param_1[0xe] + 1;
        }
        *(uint *)(param_1 + 10) = iVar11 + uVar18;
        if ((uint)(iVar6 - iVar11) < uVar18) {
          FUN_146f3c7b6(plVar1);
          uVar18 = (int)param_1[0xe] + 1;
        }
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar18);
        }
        iVar11 = *(int *)((longlong)param_1 + 0x6c);
        local_88 = puVar9;
        if (iVar11 < (int)uVar18) {
          FUN_14476002c(plVar7,uVar18);
          iVar11 = *(int *)((longlong)param_1 + 0x6c);
          uVar18 = (int)param_1[0xe] + 1;
        }
        iVar6 = (int)param_1[0xd];
        *(uint *)(param_1 + 0xd) = iVar6 + uVar18;
        if ((uint)(iVar11 - iVar6) < uVar18) {
          FUN_147138312(plVar7,iVar6);
        }
        plVar8 = (longlong *)param_1[0xc];
        if ((longlong *)param_1[0xc] == (longlong *)0x0) {
          plVar8 = plVar7;
        }
        FUN_14471858a((undefined4 *)((longlong)plVar8 + (longlong)iVar6 * 4),uVar18);
        puVar9 = local_78;
        if (local_90 != (undefined4 *)0x0) {
          puVar9 = local_90;
        }
        local_80 = local_60;
        if (local_88 != (undefined4 *)0x0) {
          local_80 = local_88;
        }
        iVar11 = 0;
        do {
          uVar18 = puVar9[iVar11];
          if (!SBORROW4(0,uVar18)) {
            local_a8 = local_80[iVar11];
            uVar15 = *(uint *)(param_1 + 0xe);
            uVar17 = uVar15 & uVar18;
            plVar8 = (longlong *)param_1[0xc];
            plVar10 = plVar8;
            if (plVar8 == (longlong *)0x0) {
              plVar10 = plVar7;
            }
            lVar13 = (longlong)(int)uVar17;
            uVar14 = *(uint *)((longlong)plVar10 + lVar13 * 4);
            if (!SBORROW4(0,uVar14)) {
              puVar19 = (uint *)((longlong)plVar10 + lVar13 * 4);
              uVar12 = uVar17 - uVar14 & uVar15;
              uVar16 = 0;
              do {
                if (uVar12 < uVar16) {
                  if (*(uint *)((longlong)param_1 + 0x74) < uVar16) {
                    *(uint *)((longlong)param_1 + 0x74) = uVar16;
                    uVar14 = *puVar19;
                  }
                  plVar8 = (longlong *)param_1[9];
                  if ((longlong *)param_1[9] == (longlong *)0x0) {
                    plVar8 = plVar1;
                  }
                  uVar4 = *(undefined4 *)((longlong)plVar8 + lVar13 * 4);
                  *(undefined4 *)((longlong)plVar8 + lVar13 * 4) = local_a8;
                  plVar8 = (longlong *)param_1[0xc];
                  if ((longlong *)param_1[0xc] == (longlong *)0x0) {
                    plVar8 = plVar7;
                  }
                  *(uint *)((longlong)plVar8 + lVar13 * 4) = uVar18;
                  uVar15 = *(uint *)(param_1 + 0xe);
                  plVar8 = (longlong *)param_1[0xc];
                  uVar16 = uVar12;
                  local_a8 = uVar4;
                  uVar18 = uVar14;
                }
                uVar16 = uVar16 + 1;
                uVar17 = uVar17 + 1 & uVar15;
                plVar10 = plVar8;
                if (plVar8 == (longlong *)0x0) {
                  plVar10 = plVar7;
                }
                lVar13 = (longlong)(int)uVar17;
                puVar19 = (uint *)((longlong)plVar10 + lVar13 * 4);
                uVar14 = *puVar19;
                uVar12 = uVar17 - uVar14 & uVar15;
              } while (!SBORROW4(0,uVar14));
              if (*(uint *)((longlong)param_1 + 0x74) < uVar16) {
                *(uint *)((longlong)param_1 + 0x74) = uVar16;
              }
            }
            plVar8 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar8 = plVar1;
            }
            *(undefined4 *)((longlong)plVar8 + lVar13 * 4) = local_a8;
            plVar8 = (longlong *)param_1[0xc];
            if ((longlong *)param_1[0xc] == (longlong *)0x0) {
              plVar8 = plVar7;
            }
            *(uint *)((longlong)plVar8 + lVar13 * 4) = uVar18;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != uVar2 + 1 + (uint)(uVar2 == 0xffffffff));
        local_a4 = param_2;
        local_a0 = plVar7;
        local_98 = plVar1;
        if (local_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
      break;
    }
    uVar15 = uVar15 + 1 & uVar18;
  } while (uVar15 != (*(int *)((longlong)param_1 + 0x74) + uVar2 + 1 & uVar18));
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3 == param_2;
}



// FUNCTION 1407535d8 FUN_1407535d8 body=563 status=ok
// SIG undefined FUN_1407535d8(void)

void FUN_1407535d8(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar4 = 0;
    uVar6 = 1;
    iVar5 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar9 = *puVar7;
    if (uVar9 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar4 = 0;
      uVar12 = iVar5 >> 5;
      if (iVar5 >> 5 < 1) {
        uVar12 = 0;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) goto LAB_140753604;
        iVar5 = iVar5 + 0x20;
        uVar9 = puVar7[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar6 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar6 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar13 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar13) {
      iVar13 = iVar3;
    }
  }
  if (iVar13 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar14 = *param_1 + (longlong)iVar13 * 0xb8;
      if (*(char *)(*param_1 + 0xa4 + (longlong)iVar13 * 0xb8) == '\x01') {
        *(undefined1 *)(lVar14 + 0xa4) = 0;
      }
      if (*(char *)(lVar14 + 0x98) == '\x01') {
        *(undefined1 *)(lVar14 + 0x98) = 0;
      }
      if (*(char *)(lVar14 + 0x8c) == '\x01') {
        *(undefined1 *)(lVar14 + 0x8c) = 0;
      }
      uVar9 = uVar9 & ~(uint)uVar6;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar13 = (int)uVar4;
      lVar14 = (longlong)iVar13;
      uVar12 = puVar7[lVar14] & uVar9;
      if (uVar12 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar13) {
          iVar11 = iVar13;
        }
        if (iVar10 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar12 = puVar7[lVar14 + lVar8 + 1];
          if (uVar12 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar11 - lVar14 == lVar8) goto LAB_140753604;
        }
        uVar4 = (ulonglong)(iVar13 + (int)lVar8 + 1);
        uVar9 = 0xffffffff;
      }
      uVar6 = (ulonglong)(-uVar12 & uVar12);
      uVar2 = uVar6 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar3);
  }
LAB_140753604:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14018c050(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14075380c FUN_14075380c body=96 status=ok
// SIG undefined FUN_14075380c(void)

void FUN_14075380c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  return;
}



// FUNCTION 14075386c FUN_14075386c body=55 status=ok
// SIG undefined FUN_14075386c(void)

void FUN_14075386c(longlong *param_1)

{
  FUN_140753bb6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407538a4 FUN_1407538a4 body=480 status=ok
// SIG undefined FUN_1407538a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407538a4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b0238d0;
  FUN_1405214e6(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_1405214e6(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  param_1[0x51] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x53) != '\0') &&
     (plVar1 = (longlong *)param_1[0x52], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  FUN_14063a91c(param_1 + 0x39);
  FUN_14028f404(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_140358fe5(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140753a84(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a2e0(param_1 + 0x1a);
  FUN_14063a2ad(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 140753a84 FUN_140753a84 body=49 status=ok
// SIG undefined FUN_140753a84(void)

void FUN_140753a84(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140753ab6 FUN_140753ab6 body=255 status=ok
// SIG undefined FUN_140753ab6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140753ab6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ab51200;
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
  plVar3 = (longlong *)param_1[6];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000140753b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140753bb6 FUN_140753bb6 body=421 status=ok
// SIG undefined FUN_140753bb6(void)

void FUN_140753bb6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140753d6a FUN_140753d6a body=31 status=ok
// SIG undefined FUN_140753d6a(void)

undefined8 FUN_140753d6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140753d8a FUN_140753d8a body=29 status=ok
// SIG undefined FUN_140753d8a(void)

undefined8 FUN_140753d8a(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xa90))(param_1,param_2,0);
  return param_2;
}



// FUNCTION 140753da8 FUN_140753da8 body=478 status=ok
// SIG undefined FUN_140753da8(void)

double * FUN_140753da8(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_142b4754c;
      local_78 = &LAB_1483e40eb;
      local_80 = &LAB_146486986;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      lVar2 = *(longlong *)(lVar2 + 0x398);
      goto LAB_140753e27;
    }
  }
  lVar2 = 0;
LAB_140753e27:
  fVar3 = (float)(**(code **)(*param_1 + 0xa88))(param_1,param_3);
  if (lVar2 == 0) {
    local_48 = DAT_14c8464f0;
    local_58 = DAT_14c8464e0;
    dStack_50 = DAT_14c8464e8;
  }
  else {
    FUN_1407541d8(lVar2,&local_58,param_3,1);
  }
  dVar1 = (double)fVar3;
  *param_2 = dVar1 * (double)local_58;
  param_2[1] = dStack_50 * dVar1;
  param_2[2] = local_48 * dVar1;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140753f88 FUN_140753f88 body=84 status=ok
// SIG undefined FUN_140753f88(void)

void FUN_140753f88(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x1038) == 0) {
    uVar1 = 0;
  }
  else {
    local_c = 0;
    uVar1 = FUN_140753fde(*(longlong *)(param_1 + 0x1038) + 0x40);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar1);
}



// FUNCTION 140753fde FUN_140753fde body=505 status=ok
// SIG undefined FUN_140753fde(void)

float FUN_140753fde(undefined8 *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  byte bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar10 = *(int *)(param_1 + 1) + -1;
  if ((*(int *)(param_1 + 1) == 0) || (iVar4 = _isnan((double)param_2), iVar4 != 0)) {
    return *param_3;
  }
  pfVar3 = (float *)*param_1;
  if (param_2 < *pfVar3) {
LAB_1407541cd:
    fVar13 = pfVar3[1];
  }
  else {
    iVar4 = *(int *)(param_1 + 1);
    uVar6 = (longlong)iVar4 - 1;
    if (pfVar3[uVar6 * 5] <= param_2) {
LAB_14075406c:
      iVar5 = (int)uVar6;
      if (iVar5 == -1) goto LAB_1407541cd;
    }
    else {
      uVar6 = 0;
      iVar5 = 0;
      uVar8 = (longlong)iVar4;
      if (1 < iVar4) {
        do {
          uVar9 = (ulonglong)((uint)((int)uVar6 + (int)uVar8) >> 1);
          if (pfVar3[uVar9 * 5] <= param_2) {
            uVar6 = uVar9;
            uVar9 = uVar8;
          }
          uVar8 = uVar9;
        } while (1 < (int)uVar9 - (int)uVar6);
        goto LAB_14075406c;
      }
    }
    bVar11 = *(byte *)(param_1 + 2);
    if (iVar5 == iVar10) {
      if ((bVar11 & 1) == 0) {
        return pfVar3[(longlong)iVar10 * 5 + 1];
      }
      bVar11 = 1;
      if (pfVar3[(longlong)iVar10 * 5] + *(float *)((longlong)param_1 + 0x14) <= param_2)
      goto LAB_1407541cd;
    }
    pfVar1 = pfVar3 + (longlong)iVar5 * 5;
    bVar12 = (iVar5 == iVar10 & bVar11) != 0;
    lVar7 = 0;
    if (!bVar12) {
      lVar7 = (longlong)(iVar5 + 1);
    }
    pfVar2 = pfVar3 + lVar7 * 5;
    if (bVar12) {
      fVar13 = *(float *)((longlong)param_1 + 0x14);
    }
    else {
      fVar13 = *pfVar2 - *pfVar1;
    }
    if ((fVar13 <= 0.0) || (*(char *)(pfVar1 + 4) == '\x02')) {
      fVar13 = pfVar3[(longlong)iVar5 * 5 + 1];
    }
    else {
      fVar16 = (param_2 - *pfVar1) / fVar13;
      if (*(char *)(pfVar1 + 4) == '\0') {
        fVar13 = fVar16 * (pfVar2[1] - pfVar1[1]) + pfVar1[1];
      }
      else {
        fVar15 = fVar16 * fVar16;
        fVar14 = fVar16 * fVar15;
        fVar13 = (fVar15 * 3.0 - (fVar14 + fVar14)) * pfVar2[1] +
                 (fVar14 - fVar15) * pfVar2[2] * fVar13 +
                 (((fVar14 + fVar14) - fVar15 * 3.0) + 1.0) * pfVar1[1] +
                 ((fVar14 - (fVar15 + fVar15)) + fVar16) * fVar13 * pfVar1[3];
      }
    }
  }
  return fVar13;
}



// FUNCTION 1407541d8 FUN_1407541d8 body=650 status=ok
// SIG undefined FUN_1407541d8(void)

double * FUN_1407541d8(longlong param_1,double *param_2,undefined8 param_3,int param_4)

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
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140754464(param_1 + 0x620,&local_88,param_3,&DAT_14c8464e0);
  dVar4 = local_78 * local_78 + local_88 * local_88 + dStack_80 * dStack_80;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      *param_2 = local_88 * dVar4;
      param_2[1] = dStack_80 * dVar4;
      param_2[2] = local_78 * dVar4;
      goto LAB_14075429b;
    }
    param_2[2] = DAT_14c8464f0;
    local_88 = DAT_14c8464e0;
    dStack_80 = DAT_14c8464e8;
  }
  else {
    param_2[2] = local_78;
  }
  *param_2 = local_88;
  param_2[1] = dStack_80;
LAB_14075429b:
  if (param_4 == 1) {
    dVar5 = *param_2 * *(double *)(param_1 + 0x280);
    dVar7 = param_2[1] * *(double *)(param_1 + 0x288);
    dVar3 = param_2[2] * *(double *)(param_1 + 0x290);
    dVar6 = *(double *)(param_1 + 0x240);
    dVar1 = *(double *)(param_1 + 0x248);
    dVar2 = *(double *)(param_1 + 0x250);
    dVar4 = *(double *)(param_1 + 600);
    dVar8 = dVar7 * dVar6 - dVar5 * dVar1;
    dVar9 = dVar3 * dVar1 - dVar7 * dVar2;
    dVar10 = dVar5 * dVar2 - dVar6 * dVar3;
    dVar9 = dVar9 + dVar9;
    dVar10 = dVar10 + dVar10;
    dVar8 = dVar8 + dVar8;
    dVar3 = dVar8 * dVar4 + dVar3 + (dVar10 * dVar6 - dVar9 * dVar1);
    dVar4 = (dVar8 * dVar1 - dVar10 * dVar2) + dVar4 * dVar9 + dVar5;
    dVar10 = (dVar2 * dVar9 - dVar6 * dVar8) + *(double *)(param_1 + 600) * dVar10 + dVar7;
    *param_2 = dVar4;
    param_2[1] = dVar10;
    param_2[2] = dVar3;
    dVar6 = dVar3 * dVar3 + dVar4 * dVar4 + dVar10 * dVar10;
    if (9.99999993922529e-09 < dVar6) {
      dVar6 = 1.0 / SQRT(dVar6);
      *param_2 = dVar4 * dVar6;
      param_2[1] = dVar10 * dVar6;
      param_2[2] = dVar3 * dVar6;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140754464 FUN_140754464 body=1150 status=ok
// SIG undefined FUN_140754464(void)

double * FUN_140754464(undefined8 *param_1,double *param_2,float param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  int iVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  
  iVar11 = *(int *)(param_1 + 1) + -1;
  if ((*(int *)(param_1 + 1) == 0) || (iVar3 = _isnan((double)param_3), iVar3 != 0)) {
    param_2[2] = *(double *)(param_4 + 4);
    fVar13 = *param_4;
    fVar23 = param_4[1];
    fVar14 = param_4[2];
    fVar15 = param_4[3];
    goto LAB_140754549;
  }
  pfVar6 = (float *)*param_1;
  if (param_3 < *pfVar6) {
LAB_1407545ed:
    param_2[2] = *(double *)(pfVar6 + 0x12);
    fVar13 = pfVar6[0xe];
    fVar23 = pfVar6[0xf];
    fVar14 = pfVar6[0x10];
    fVar15 = pfVar6[0x11];
  }
  else {
    iVar3 = *(int *)(param_1 + 1);
    uVar5 = (longlong)iVar3 - 1;
    if (param_3 < pfVar6[uVar5 * 0x16]) {
      uVar5 = 0;
      iVar4 = 0;
      uVar8 = (longlong)iVar3;
      if (1 < iVar3) {
        do {
          uVar9 = (ulonglong)((uint)((int)uVar5 + (int)uVar8) >> 1);
          if (pfVar6[uVar9 * 0x16] <= param_3) {
            uVar5 = uVar9;
            uVar9 = uVar8;
          }
          uVar8 = uVar9;
        } while (1 < (int)uVar9 - (int)uVar5);
        goto LAB_140754515;
      }
    }
    else {
LAB_140754515:
      iVar4 = (int)uVar5;
      if (iVar4 == -1) goto LAB_1407545ed;
    }
    bVar12 = *(byte *)(param_1 + 2);
    if (iVar4 != iVar11) {
LAB_140754618:
      pfVar10 = pfVar6 + (longlong)iVar4 * 0x16;
      lVar7 = 0;
      if ((iVar4 == iVar11 & bVar12) == 0) {
        lVar7 = (longlong)(iVar4 + 1);
      }
      pfVar6 = pfVar6 + lVar7 * 0x16;
      if ((iVar4 == iVar11 & bVar12) == 0) {
        fVar13 = *pfVar6 - *pfVar10;
      }
      else {
        fVar13 = *(float *)((longlong)param_1 + 0x14);
      }
      if ((0.0 < fVar13) && (*(char *)(pfVar10 + 0x14) != '\x02')) {
        if (*(char *)(pfVar10 + 0x14) == '\0') {
          dVar21 = 1.0 / (double)fVar13;
          dVar18 = (*(double *)(pfVar6 + 6) - *(double *)(pfVar10 + 6)) * dVar21;
          dVar19 = (*(double *)(pfVar6 + 4) - *(double *)(pfVar10 + 4)) * dVar21;
          *param_2 = dVar21 * (*(double *)(pfVar6 + 2) - *(double *)(pfVar10 + 2));
        }
        else {
          fVar23 = (param_3 - *pfVar10) / fVar13;
          dVar21 = (double)fVar13;
          dVar18 = *(double *)(pfVar6 + 0xc) * dVar21;
          dVar19 = *(double *)(pfVar6 + 10) * dVar21;
          dVar16 = *(double *)(pfVar10 + 0x12) * dVar21;
          dVar20 = *(double *)(pfVar10 + 0x10) * dVar21;
          dVar17 = *(double *)(pfVar10 + 0xe) * dVar21;
          dVar2 = *(double *)(pfVar6 + 8) * dVar21;
          dVar22 = (double)fVar23;
          dVar1 = (double)(fVar23 * fVar23);
          dVar21 = 1.0 / dVar21;
          dVar18 = ((((*(double *)(pfVar10 + 6) * -6.0 - dVar16 * 4.0) - (dVar18 + dVar18)) +
                    *(double *)(pfVar6 + 6) * 6.0) * dVar22 +
                    ((dVar18 * 3.0 + dVar16 * 3.0 + *(double *)(pfVar10 + 6) * 6.0) -
                    *(double *)(pfVar6 + 6) * 6.0) * dVar1 + dVar16) * dVar21;
          dVar19 = ((((*(double *)(pfVar10 + 4) * -6.0 - dVar20 * 4.0) - (dVar19 + dVar19)) +
                    *(double *)(pfVar6 + 4) * 6.0) * dVar22 +
                    ((dVar19 * 3.0 + dVar20 * 3.0 + *(double *)(pfVar10 + 4) * 6.0) -
                    *(double *)(pfVar6 + 4) * 6.0) * dVar1 + dVar20) * dVar21;
          *param_2 = dVar21 * ((((*(double *)(pfVar10 + 2) * -6.0 - dVar17 * 4.0) - (dVar2 + dVar2))
                               + *(double *)(pfVar6 + 2) * 6.0) * dVar22 +
                               ((dVar2 * 3.0 + dVar17 * 3.0 + *(double *)(pfVar10 + 2) * 6.0) -
                               *(double *)(pfVar6 + 2) * 6.0) * dVar1 + dVar17);
        }
        param_2[1] = dVar19;
        param_2[2] = dVar18;
        return param_2;
      }
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      return param_2;
    }
    lVar7 = (longlong)iVar11;
    if ((bVar12 & 1) == 0) {
      param_2[2] = *(double *)(pfVar6 + lVar7 * 0x16 + 0xc);
      pfVar6 = pfVar6 + lVar7 * 0x16 + 8;
      fVar13 = *pfVar6;
      fVar23 = pfVar6[1];
      fVar14 = pfVar6[2];
      fVar15 = pfVar6[3];
    }
    else {
      bVar12 = 1;
      if (param_3 < pfVar6[lVar7 * 0x16] + *(float *)((longlong)param_1 + 0x14)) goto LAB_140754618;
      param_2[2] = *(double *)(pfVar6 + 0xc);
      fVar13 = pfVar6[8];
      fVar23 = pfVar6[9];
      fVar14 = pfVar6[10];
      fVar15 = pfVar6[0xb];
    }
  }
LAB_140754549:
  *(float *)param_2 = fVar13;
  *(float *)((longlong)param_2 + 4) = fVar23;
  *(float *)(param_2 + 1) = fVar14;
  *(float *)((longlong)param_2 + 0xc) = fVar15;
  return param_2;
}



// FUNCTION 1407548e2 FUN_1407548e2 body=58 status=ok
// SIG undefined FUN_1407548e2(void)

undefined8 FUN_1407548e2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1448d221e(*(undefined2 *)(param_1 + 0x48));
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x38) & 0x2000000002) != 0)) {
    uVar2 = FUN_14075491c(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14075491c FUN_14075491c body=995 status=ok
// SIG undefined FUN_14075491c(void)

ulonglong FUN_14075491c(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae1560) && (FUN_144b3d300(&DAT_14cae1560), DAT_14cae1560 == -1)) {
    FUN_140056680(&DAT_14cae1548,L"r.GPUSkin.UnlimitedBoneInfluences");
    DAT_14cae1558 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_143519279);
    _Init_thread_footer(&DAT_14cae1560);
  }
  uVar1 = *(ushort *)(param_1 + 0x48);
  puVar5 = &DAT_14ca84468;
  if (uVar1 == 0x31) goto switchD_140754a97_caseD_33;
  switch(uVar1) {
  case 0x30:
switchD_140754a97_caseD_30:
    puVar5 = &DAT_14ca84470;
    break;
  case 0x31:
  case 0x32:
switchD_140754a97_caseD_31:
    if ((uVar1 & 0xfff0) == 0x20) {
      lVar7 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar7 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    }
    uVar9 = 0;
    goto LAB_140754964;
  case 0x33:
    break;
  case 0x34:
switchD_140754a97_caseD_34:
    puVar5 = &DAT_14ca84480;
    break;
  case 0x35:
switchD_140754a97_caseD_35:
    puVar5 = &DAT_14ca84478;
    break;
  default:
    switch((uint)uVar1) {
    case 0:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x14:
      break;
    default:
      goto switchD_140754a97_caseD_31;
    case 0xb:
    case 0xc:
      goto switchD_140754a97_caseD_35;
    case 0x10:
    case 0x16:
    case 0x1b:
      goto switchD_140754a97_caseD_34;
    case 0x15:
    case 0x18:
      goto switchD_140754a97_caseD_30;
    case 0x1e:
    case 0x1f:
      puVar5 = &DAT_14ca84488;
    }
  }
switchD_140754a97_caseD_33:
  uVar9 = *puVar5;
LAB_140754964:
  if (DAT_14cae1558 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar8 = DAT_14cae1548;
    if (DAT_14cae1550 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    DAT_14cae1558 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar8,1);
  }
  cVar2 = FUN_14002b5e0(uVar9,"Windows",7);
  if ((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) {
    bVar10 = true;
  }
  else {
    iVar4 = (**(code **)(*DAT_14cae1558 + 0xb0))();
    bVar10 = iVar4 == 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae1580) && (FUN_144b3d300(&DAT_14cae1580), DAT_14cae1580 == -1)) {
    FUN_140056680(&DAT_14cae1568,L"r.GPUSkin.AlwaysUseDeformerForUnlimitedBoneInfluences");
    DAT_14cae1578 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_14351928a);
    _Init_thread_footer(&DAT_14cae1580);
  }
  uVar1 = *(ushort *)(param_1 + 0x48);
  puVar5 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_140754ab4_caseD_30:
      puVar5 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_140754ab4_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar9 = 0;
        goto LAB_1407549eb;
      }
      lVar7 = FUN_14741392a();
      puVar5 = (undefined8 *)(lVar7 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_140754ab4_caseD_34:
      puVar5 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_140754ab4_caseD_35:
      puVar5 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_140754ab4_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_140754ab4_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_140754ab4_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_140754ab4_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar5 = &DAT_14ca84488;
      }
    }
  }
  uVar9 = *puVar5;
LAB_1407549eb:
  if (DAT_14cae1578 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar8 = DAT_14cae1568;
    if (DAT_14cae1570 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    DAT_14cae1578 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar8,1);
  }
  cVar2 = FUN_14002b5e0(uVar9,"Windows",7);
  if ((cVar2 == '\0') && (uVar1 != DAT_14ca85550)) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*DAT_14cae1578 + 0xa8))();
  }
  cVar2 = FUN_1448eb2da(*(undefined2 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + 0x38);
    if ((~(bVar10 | bVar3) & (uVar6 & 0x1800000000) != 0) == 0) {
      uVar6 = (ulonglong)(((uint)uVar6 & 2) >> 1);
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar6;
}



// FUNCTION 140754d00 FUN_140754d00 body=118 status=ok
// SIG undefined FUN_140754d00(void)

void FUN_140754d00(longlong param_1)

{
  FUN_140754d76(*(undefined8 *)(param_1 + 0x950),*(undefined4 *)(param_1 + 0x958));
  if (*(longlong *)(param_1 + 0x950) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x938),*(undefined4 *)(param_1 + 0x940));
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FUN_1400020a8();
  }
  FUN_140754d9e(param_1 + 0x10);
  return;
}



// FUNCTION 140754d76 FUN_140754d76 body=40 status=ok
// SIG undefined FUN_140754d76(void)

void FUN_140754d76(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144a2da94(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 140754d9e FUN_140754d9e body=61 status=ok
// SIG undefined FUN_140754d9e(void)

void FUN_140754d9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x900);
  if (*(longlong *)(param_1 + 0x900) == 0) {
    lVar1 = param_1;
  }
  FUN_140cfa737(lVar1,*(undefined4 *)(param_1 + 0x908));
  if (*(longlong *)(param_1 + 0x900) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


