// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140885ac4 FUN_140885ac4 body=88 status=ok
// SIG undefined FUN_140885ac4(void)

longlong FUN_140885ac4(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140885b1c(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140885b1c FUN_140885b1c body=55 status=ok
// SIG undefined FUN_140885b1c(void)

void FUN_140885b1c(longlong *param_1)

{
  FUN_140885b54(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140885b54 FUN_140885b54 body=121 status=ok
// SIG undefined FUN_140885b54(void)

void FUN_140885b54(longlong param_1,int param_2)

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



// FUNCTION 140885bdc FUN_140885bdc body=96 status=ok
// SIG undefined FUN_140885bdc(void)

undefined8 * FUN_140885bdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b4550;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 4);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140885c3c FUN_140885c3c body=226 status=ok
// SIG undefined FUN_140885c3c(void)

void FUN_140885c3c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x58;
        lVar1 = lVar2 + lVar7;
        if (*(longlong *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x54) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x54) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x58 + lVar2 + 0x50);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x50);
          lVar7 = *param_1 + lVar7;
          if (*(longlong *)(lVar7 + 0x38) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar7 + 0x28) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar7 + 0x10) != 0) {
            FUN_1400020a8();
          }
          FUN_140885d1e(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x50);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140885d1e FUN_140885d1e body=116 status=ok
// SIG undefined FUN_140885d1e(void)

void FUN_140885d1e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140885da0 FUN_140885da0 body=36 status=ok
// SIG undefined FUN_140885da0(void)

undefined8 FUN_140885da0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140885dd2 FUN_140885dd2 body=184 status=ok
// SIG undefined FUN_140885dd2(void)

undefined8 FUN_140885dd2(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140885e8c();
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    if (0.0 < (double)param_1[0x1d]) {
      QueryPerformanceCounter(&local_30);
      dVar2 = ((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0) - (double)param_1[0x1d];
      if (*(double *)(lVar1 + 0x70) <= dVar2 && dVar2 != *(double *)(lVar1 + 0x70)) {
        (**(code **)(*param_1 + 0xa8))(param_1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140885e8c FUN_140885e8c body=97 status=ok
// SIG undefined FUN_140885e8c(void)

longlong FUN_140885e8c(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140885eee();
  if (*(longlong *)(lVar2 + 0x110) != 0) {
    lVar3 = FUN_140885eee();
    lVar2 = *(longlong *)(lVar2 + 0x110);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140885eee FUN_140885eee body=228 status=ok
// SIG undefined FUN_140885eee(void)

longlong FUN_140885eee(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf46f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148f983c1;
    local_40 = FUN_14666b73f;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxElasticTelemetry",L"GbxElasticTelemetrySettings",&DAT_14cbf46f8,
                  &DAT_148f983c0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf46f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140885fd4 FUN_140885fd4 body=40 status=ok
// SIG undefined FUN_140885fd4(void)

undefined8 FUN_140885fd4(undefined8 param_1,int param_2)

{
  FUN_140885ffc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140885ffc FUN_140885ffc body=48 status=ok
// SIG undefined FUN_140885ffc(void)

void FUN_140885ffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}



// FUNCTION 14088602c FUN_14088602c body=139 status=ok
// SIG undefined FUN_14088602c(void)

undefined4 FUN_14088602c(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = (undefined4 *)0x0;
  local_20 = 1;
  FUN_140923498(&local_28,1,0);
  *local_28 = local_38;
  local_28[1] = uStack_34;
  local_28[2] = uStack_30;
  local_28[3] = uStack_2c;
  uVar1 = (**(code **)(*param_1 + 0x380))(param_1,&local_28);
  if (local_28 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408860b8 FUN_1408860b8 body=262 status=ok
// SIG undefined FUN_1408860b8(void)

int FUN_1408860b8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_2[1] == 0) {
    iVar4 = 0;
  }
  else {
    lVar3 = *param_2;
    lVar5 = (longlong)(int)param_2[1] << 4;
    iVar4 = 0;
    do {
      lVar2 = FUN_14088624c(param_1,lVar3,1);
      if (lVar2 == 0) {
        FUN_140056680(local_50,L"UnloadPrimaryAssets failed to find NameData");
        (**(code **)(*param_1 + 0x4d0))(param_1,lVar3,local_50);
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar1 = *(longlong *)(lVar2 + 0x48);
        if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x12) == '\0')) &&
            (*(char *)(lVar1 + 0x11) != '\x01')) ||
           (((lVar1 = *(longlong *)(lVar2 + 0x68), lVar1 != 0 && (*(char *)(lVar1 + 0x12) == '\0'))
            && (*(char *)(lVar1 + 0x11) == '\0')))) {
          iVar4 = iVar4 + 1;
          FUN_1408861c0(lVar2 + 0x48,1);
          FUN_1408861c0(lVar2 + 0x68,1);
        }
      }
      lVar3 = lVar3 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1408861c0 FUN_1408861c0 body=140 status=ok
// SIG undefined FUN_1408861c0(void)

void FUN_1408861c0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (((*(char *)(lVar3 + 0x12) == '\0') && (param_2 != '\0')) &&
       (*(char *)(lVar3 + 0x11) == '\0')) {
      FUN_140886972();
    }
    *param_1 = 0;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 != (longlong *)0x0) {
      param_1[1] = 0;
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
  }
  if (-1 < *(int *)((longlong)param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 3) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1402191ca(param_1 + 2,0);
  return;
}



// FUNCTION 14088624c FUN_14088624c body=449 status=ok
// SIG undefined FUN_14088624c(void)

longlong FUN_14088624c(longlong *param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[0x91] != *(int *)((longlong)param_1 + 0x4b4)) {
    lVar3 = *param_2;
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    plVar4 = param_1 + 0x97;
    if ((longlong *)param_1[0x98] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x98];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x99] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = param_1[0x90] + (longlong)iVar7 * 0x20;
        if (*(longlong *)(param_1[0x90] + (longlong)iVar7 * 0x20) == lVar3) {
          if ((lVar1 != 0) && ((longlong *)(lVar1 + 8) != (longlong *)0x0)) {
            lVar3 = *(longlong *)(lVar1 + 8);
            if (*(int *)(lVar3 + 0x180) == *(int *)(lVar3 + 0x1ac)) goto LAB_1408863a0;
            lVar1 = param_2[1];
            uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
            uVar6 = (uint)lVar1 & 0xffff;
            lVar5 = lVar3 + 0x1b0;
            if (*(longlong *)(lVar3 + 0x1b8) != 0) {
              lVar5 = *(longlong *)(lVar3 + 0x1b8);
            }
            iVar7 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(lVar3 + 0x1c0) - 1U &
                                     (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6)
                                     + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
            if (iVar7 == -1) goto LAB_1408863a0;
            goto LAB_14088637f;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  if (param_3 != 0) goto LAB_1408863d3;
  goto LAB_1408863f8;
  while (iVar7 = *(int *)(lVar5 + 0x90), iVar7 != -1) {
LAB_14088637f:
    lVar5 = *(longlong *)(lVar3 + 0x178) + (longlong)iVar7 * 0x98;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)iVar7 * 0x98) == lVar1)
    goto LAB_1408863a2;
  }
LAB_1408863a0:
  lVar5 = 0;
LAB_1408863a2:
  lVar3 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  if ((lVar5 == 0 & param_3) == 0) goto LAB_1408863b5;
LAB_1408863d3:
  (**(code **)(*param_1 + 0x440))(param_1,&local_28,param_2);
  if ((local_28 != 0) && (local_20 != 0)) {
    lVar3 = FUN_14088624c(param_1,&local_28,0);
    goto LAB_1408863b5;
  }
LAB_1408863f8:
  lVar3 = 0;
LAB_1408863b5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14088640e FUN_14088640e body=541 status=ok
// SIG undefined FUN_14088640e(void)

longlong * FUN_14088640e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14088662c(param_3);
  uVar5 = 0;
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    puVar6 = local_48;
    if (local_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar7 = ((uint)(0x19 < (ushort)puVar6[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar8]) -
              0x20;
      uVar9 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar7) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar2 != (int)lVar8);
  }
  iVar2 = FUN_1457511aa((longlong *)(param_1 + 0x3b8),uVar5,&local_48);
  if (iVar2 != -1) {
    lVar8 = *(longlong *)(param_1 + 0x3b8);
    if ((lVar8 + (longlong)iVar2 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar8 = lVar8 + (longlong)iVar2 * 0x28;
      iVar2 = *(int *)(lVar8 + 0x18);
      iVar4 = 0;
      if (iVar2 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = *(undefined2 **)(lVar8 + 0x10);
        iVar4 = iVar2 + -1;
      }
      FUN_1468c7b6a(param_2,puVar6,iVar4);
      goto LAB_1408864f6;
    }
  }
  if (*(int *)(param_1 + 0x370) != *(int *)(param_1 + 0x39c)) {
    lVar8 = *param_3;
    uVar7 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar9 = (uint)lVar8 & 0xffff;
    lVar3 = param_1 + 0x3a0;
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x3a8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x3b0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar9) +
                             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x368) + (longlong)iVar2 * 0x18);
        if (*plVar1 == lVar8) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            lVar8 = param_3[1];
            *param_2 = plVar1[1];
            param_2[1] = lVar8;
            goto LAB_1408864f6;
          }
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1408864f6:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088662c FUN_14088662c body=149 status=ok
// SIG undefined FUN_14088662c(void)

undefined8 FUN_14088662c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_1408866c2(param_1,&local_238);
  FUN_14006620a(param_2,local_238,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408866c2 FUN_1408866c2 body=101 status=ok
// SIG undefined FUN_1408866c2(void)

void FUN_1408866c2(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    FUN_14005eb5c();
    puVar1 = *(undefined2 **)(param_2 + 8);
    if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
      FUN_140213274(param_2,1);
      puVar1 = *(undefined2 **)(param_2 + 8);
    }
    *puVar1 = 0x3a;
    *(undefined2 **)(param_2 + 8) = puVar1 + 1;
    FUN_14005eb5c(param_1 + 1,param_2);
    return;
  }
  return;
}



// FUNCTION 140886728 FUN_140886728 body=585 status=ok
// SIG undefined FUN_140886728(void)

void FUN_140886728(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  longlong lVar8;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar9 = (uint)lVar1 & 0xffff;
    uVar4 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar4 >> 4);
    uVar9 = (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4);
    uVar5 = uVar9 >> 0xd ^ -uVar9;
    uVar3 = uVar5 << 8 ^ (-0x61c88647 - uVar9) - uVar5;
    uVar10 = uVar3 >> 0xd ^ (uVar9 - uVar5) - uVar3;
    uVar9 = uVar10 >> 0xc ^ (uVar5 - uVar3) - uVar10;
    uVar5 = uVar9 << 0x10 ^ (uVar3 - uVar10) - uVar9;
    uVar3 = uVar5 >> 5 ^ (uVar10 - uVar9) - uVar5;
    uVar9 = uVar3 >> 3 ^ (uVar9 - uVar5) - uVar3;
    uVar5 = uVar9 << 10 ^ (uVar5 - uVar3) - uVar9;
    uVar3 = uVar4 >> 0xd ^ (uVar5 >> 0xf ^ uVar3 - (uVar9 + uVar5)) - uVar4;
    uVar9 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
    uVar4 = uVar9 >> 0xd ^ (uVar4 - uVar3) - uVar9;
    uVar5 = uVar4 >> 0xc ^ (uVar3 - uVar9) - uVar4;
    uVar3 = uVar5 << 0x10 ^ (uVar9 - uVar4) - uVar5;
    uVar4 = uVar3 >> 5 ^ (uVar4 - uVar5) - uVar3;
    uVar5 = uVar4 >> 3 ^ (uVar5 - uVar3) - uVar4;
    uVar3 = uVar5 << 10 ^ (uVar3 - uVar4) - uVar5;
    lVar7 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x1b0) - 1U &
                             (uVar3 >> 0xf ^ uVar4 - (uVar5 + uVar3))) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x168);
      do {
        lVar8 = (longlong)iVar6;
        if ((*(longlong *)(lVar7 + lVar8 * 0x18) == lVar1) &&
           (*(longlong *)(lVar7 + 8 + lVar8 * 0x18) == lVar2)) goto LAB_14088694e;
        iVar6 = *(int *)(lVar7 + lVar8 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  FUN_140da9508((longlong *)(param_1 + 0x168),local_3c,param_2,0);
  FUN_1411df190(param_1);
LAB_14088694e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140886972 FUN_140886972 body=1931 status=ok
// SIG undefined FUN_140886972(void)

void FUN_140886972(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *****ppppplVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *****ppppplVar8;
  undefined8 *puVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong ******pppppplVar16;
  longlong ******pppppplVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *****local_90;
  longlong *local_88;
  longlong *****local_80;
  longlong *local_78;
  longlong *****local_70;
  longlong *local_68;
  longlong *****local_60;
  longlong *****local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)((longlong)param_1 + 0x12) != '\0') || (param_1[0x13] == 0)) goto LAB_140886b1a;
  plVar20 = (longlong *)param_1[1];
  bVar24 = true;
  if (plVar20 == (longlong *)0x0) {
    plVar20 = (longlong *)0x0;
    pppppplVar17 = (longlong ******)0x0;
  }
  else {
    iVar12 = (int)plVar20[1];
    pppppplVar17 = (longlong ******)0x0;
    do {
      if (iVar12 == 0) {
        plVar20 = (longlong *)0x0;
        goto LAB_1408869de;
      }
      LOCK();
      iVar6 = (int)plVar20[1];
      bVar23 = iVar12 == iVar6;
      if (bVar23) {
        *(int *)(plVar20 + 1) = iVar12 + 1;
        iVar6 = iVar12;
      }
      iVar12 = iVar6;
      UNLOCK();
    } while (!bVar23);
    pppppplVar17 = (longlong ******)*param_1;
    bVar24 = false;
  }
LAB_1408869de:
  lVar18 = DAT_14cb0a380;
  local_70 = (longlong *****)pppppplVar17;
  local_68 = plVar20;
  if ((*(char *)(param_1 + 2) == '\0') && (*(char *)((longlong)param_1 + 0x11) != '\x01')) {
    *(undefined1 *)((longlong)param_1 + 0x12) = 1;
    FUN_1408870fe(param_1);
    local_58 = (longlong *****)0x0;
    plStack_50 = (longlong *)0x0;
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
    }
    local_80 = (longlong *****)pppppplVar17;
    local_78 = plVar20;
    FUN_1402a1d54(param_1 + 5,&local_80,&local_58);
    if ((int)plStack_50 == 0) {
LAB_140886b9f:
      if (local_58 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (longlong *****)0x0) {
      (*(code *)**local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
      goto LAB_140886b9f;
    }
    FUN_1402a1ed4(param_1);
    if ((*(char *)((longlong)param_1 + 0x13) == '\0') && ((longlong)*(int *)(param_1 + 0xe) != 0)) {
      lVar18 = param_1[0xd];
      lVar21 = (longlong)*(int *)(param_1 + 0xe) << 5;
      do {
        uVar7 = param_1[0x13];
        local_90 = local_70;
        local_88 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        FUN_1448b035c(uVar7,lVar18,&local_90);
        lVar18 = lVar18 + 0x20;
        lVar21 = lVar21 + -0x20;
      } while (lVar21 != 0);
    }
    local_58 = (longlong *****)&local_70;
    FUN_1401a60d6(param_1[0x13] + 0xc0,&local_58);
    lVar18 = param_1[0xf];
    iVar12 = *(int *)(param_1 + 0x10);
    uVar15 = 0;
    if ((longlong)iVar12 != 0) {
      lVar21 = 0;
      do {
        lVar13 = *(longlong *)(lVar18 + lVar21);
        local_58 = local_70;
        plStack_50 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_68 + 0xc) = *(int *)((longlong)local_68 + 0xc) + 1;
          UNLOCK();
        }
        local_60 = (longlong *****)&local_58;
        FUN_147d61682(lVar13 + 0x88,&local_60);
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          piVar5 = (int *)((longlong)plStack_50 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*plStack_50 + 0x10))();
          }
        }
        lVar21 = lVar21 + 0x10;
      } while ((longlong)iVar12 * 0x10 != lVar21);
      uVar15 = *(undefined4 *)(param_1 + 0x10);
      lVar18 = param_1[0xf];
    }
    FUN_14068cddc(lVar18,uVar15);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)((longlong)param_1 + 0x84) != 0) {
      FUN_1461075e0(param_1 + 0xf,0);
    }
    uVar19 = 0;
    param_1[0xc] = 0;
    param_1[0x13] = 0;
    iVar12 = *(int *)(param_1 + 0x12);
    if (0 < iVar12) {
      local_58 = (longlong *****)0x0;
      uVar7 = param_1[0x11];
      plStack_50 = (longlong *)CONCAT44(plStack_50._4_4_,iVar12);
      FUN_147d6184c(&local_58,iVar12);
      FUN_147d618a2(local_58,uVar7,iVar12);
      if ((longlong)(int)plStack_50 != 0) {
        pppppplVar16 = (longlong ******)(local_58 + (longlong)(int)plStack_50 * 2);
        pppppplVar17 = (longlong ******)local_58;
        do {
          ppppplVar8 = pppppplVar17[1];
          if (ppppplVar8 != (longlong *****)0x0) {
            iVar12 = *(int *)(ppppplVar8 + 1);
            do {
              if (iVar12 == 0) goto LAB_140886d09;
              LOCK();
              iVar6 = *(int *)(ppppplVar8 + 1);
              bVar24 = iVar12 == iVar6;
              if (bVar24) {
                *(int *)(ppppplVar8 + 1) = iVar12 + 1;
                iVar6 = iVar12;
              }
              iVar12 = iVar6;
              UNLOCK();
            } while (!bVar24);
            if (*pppppplVar17 != (longlong *****)0x0) {
              FUN_147d5da30();
            }
            LOCK();
            ppppplVar4 = ppppplVar8 + 1;
            *(int *)ppppplVar4 = *(int *)ppppplVar4 + -1;
            UNLOCK();
            if (*(int *)ppppplVar4 == 0) {
              (*(code *)**ppppplVar8)(ppppplVar8);
              LOCK();
              piVar5 = (int *)((longlong)ppppplVar8 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (*(code *)(*ppppplVar8)[2])(ppppplVar8);
              }
            }
          }
LAB_140886d09:
          pppppplVar17 = pppppplVar17 + 2;
        } while (pppppplVar17 != pppppplVar16);
        uVar19 = (ulonglong)plStack_50 & 0xffffffff;
      }
      FUN_14068ce29(local_58,uVar19);
      if ((longlong ******)local_58 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    if (DAT_14cb0a380 != 0) {
      if (!bVar24) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar18 + 0x68);
      EnterCriticalSection(lpCriticalSection);
      plVar1 = (longlong *)(lVar18 + 0x18);
      local_58 = (longlong *****)pppppplVar17;
      plStack_50 = plVar20;
      if (plVar20 == (longlong *)0x0) {
        plStack_50 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar20 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar5 = (int *)((longlong)plVar20 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
      }
      uVar11 = ((uint)((ulonglong)pppppplVar17 >> 0x14) & 0xffff ^
               (uint)((ulonglong)pppppplVar17 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      iVar12 = FUN_14068c298(plVar1,uVar11 >> 0x10 ^ uVar11,&local_58);
      plVar2 = plStack_50;
      if (iVar12 == -1) {
        lVar21 = 0;
      }
      else {
        lVar21 = (longlong)iVar12 * 0x28 + *plVar1;
      }
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar5 = (int *)((longlong)plVar2 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar20 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar5 = (int *)((longlong)plVar20 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      if (lVar21 == 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        lVar13 = *(longlong *)(lVar21 + 0x10);
        if (lVar13 == 0) {
          lVar13 = 0;
LAB_140886db6:
          if (plVar20 == (longlong *)0x0) {
            plStack_50 = (longlong *)0x0;
            local_58 = (longlong *****)pppppplVar17;
            FUN_14068c454(plVar1);
          }
          else {
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            local_58 = (longlong *****)pppppplVar17;
            plStack_50 = plVar20;
            FUN_14068c454(plVar1);
            LOCK();
            plVar2 = plVar20 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar5 = (int *)((longlong)plVar20 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
          if (*(int *)(lVar18 + 0x20) == *(int *)(lVar18 + 0x4c)) {
            FUN_14068c710(plVar1);
          }
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar20 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar5 = (int *)((longlong)plVar20 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
        }
        else {
          local_98 = lVar18 + 8;
          lVar22 = 0;
          local_a0 = 0;
          do {
            local_b0 = *(longlong *)(lVar13 + 0x18);
            local_b8 = lVar22;
            if (*(int *)(lVar13 + 0x38) == 0) {
LAB_140886d72:
              FUN_14068c232(lVar13,local_98);
              lVar14 = lVar13;
              if (local_b8 != 0) {
                *(longlong *)(local_b8 + 8) = lVar13;
                lVar14 = local_a0;
              }
              *(undefined8 *)(lVar13 + 8) = 0;
              lVar22 = lVar13;
              local_a0 = lVar14;
            }
            else {
              local_a8 = (longlong *)(lVar13 + 0x30);
              if (((longlong *)*local_a8 == (longlong *)0x0) ||
                 (cVar10 = (**(code **)(*(longlong *)*local_a8 + 0x30))(), cVar10 == '\0'))
              goto LAB_140886d72;
              FUN_14009d848(lVar13 + 0x20,local_a8);
              lVar22 = local_b8;
              if ((*(int *)(lVar13 + 0x38) != 0) &&
                 (puVar9 = (undefined8 *)*local_a8, puVar9 != (undefined8 *)0x0)) {
                (**(code **)*puVar9)(puVar9,0);
                FUN_1446efa72(local_a8,0,0,0x10);
                *(undefined4 *)(lVar13 + 0x38) = 0;
                lVar22 = local_b8;
              }
            }
            lVar13 = local_b0;
          } while (local_b0 != 0);
          lVar13 = local_a0;
          if (*(longlong *)(lVar21 + 0x10) == 0) goto LAB_140886db6;
        }
        LeaveCriticalSection(lpCriticalSection);
        while (lVar13 != 0) {
          lVar18 = *(longlong *)(lVar13 + 8);
          FUN_14068c37a(lVar13);
          FUN_1400020a8(lVar13);
          lVar13 = lVar18;
        }
      }
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar5 = (int *)((longlong)plVar20 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x11) == '\0') {
      FUN_1401a5e92(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x12) = 1;
    FUN_1408870fe(param_1);
  }
  plVar20 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar5 = (int *)((longlong)plVar20 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
LAB_140886b1a:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408870fe FUN_1408870fe body=247 status=ok
// SIG undefined FUN_1408870fe(void)

void FUN_1408870fe(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = *(int *)(param_1 + 0x90);
  if (0 < iVar6) {
    local_30 = (longlong *)0x0;
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    local_28 = iVar6;
    FUN_147d6184c(&local_30,iVar6);
    FUN_147d618a2(local_30,uVar3,iVar6);
    if ((longlong)local_28 == 0) {
      iVar6 = 0;
    }
    else {
      plVar7 = local_30 + (longlong)local_28 * 2;
      plVar8 = local_30;
      do {
        plVar4 = (longlong *)plVar8[1];
        if (plVar4 != (longlong *)0x0) {
          iVar6 = (int)plVar4[1];
          do {
            if (iVar6 == 0) goto LAB_1408871c0;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar9 = iVar6 == iVar5;
            if (bVar9) {
              *(int *)(plVar4 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar9);
          if (*plVar8 != 0) {
            piVar1 = (int *)(*plVar8 + 100);
            *piVar1 = *piVar1 + 1;
          }
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
LAB_1408871c0:
        plVar8 = plVar8 + 2;
        iVar6 = local_28;
      } while (plVar8 != plVar7);
    }
    FUN_14068ce29(local_30,iVar6);
    if (local_30 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408871f6 FUN_1408871f6 body=1617 status=ok
// SIG undefined FUN_1408871f6(void)

void FUN_1408871f6(longlong param_1)

{
  uint *_Dst;
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_198 [40];
  undefined8 *local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158 [2];
  int local_148;
  undefined8 local_144;
  int local_13c;
  longlong local_138 [3];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  int local_60;
  int iStack_5c;
  int iStack_58;
  char cStack_54;
  undefined2 uStack_53;
  undefined1 uStack_51;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_14088787e(param_1 + -0x30);
  iVar4 = *(int *)(param_1 + 0x110);
  if (iVar4 == 0) {
    if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  iVar9 = *(int *)(param_1 + 0x11c);
  _Dst = (uint *)(*(longlong *)(param_1 + 0x108) + (longlong)(iVar9 % iVar4) * 8);
  if (((((_Dst[1] == 0) || (uVar13 = *_Dst, (int)uVar13 < 0)) || (DAT_14c9647dc <= (int)uVar13)) ||
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || (*(uint *)(plVar12 + 2) != _Dst[1])))) ||
     ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) {
    *(int *)(param_1 + 0x11c) = (iVar9 + 1) % iVar4;
LAB_140887362:
    iVar9 = ~(iVar9 % iVar4) + iVar4;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + 2,(longlong)iVar9 << 3);
      iVar4 = *(int *)(param_1 + 0x110);
    }
    *(int *)(param_1 + 0x110) = iVar4 + -1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_198);
  }
  lVar2 = *plVar12;
  *(int *)(param_1 + 0x11c) = (iVar9 + 1) % iVar4;
  if (lVar2 == 0) goto LAB_140887362;
  if (**(longlong **)(lVar2 + 0x2688) == 0) {
    if (**(longlong **)(lVar2 + 0x2678) == 0) {
      if (**(longlong **)(lVar2 + 0x2698) != 0) {
        FUN_14088f138(lVar2);
      }
    }
    else {
      FUN_14088e9a6(lVar2);
    }
    goto LAB_140887326;
  }
  local_144 = 0;
  local_13c = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  cVar3 = FUN_14088c596(lVar2 + 0x2680);
  if (((cVar3 != '\0') && (local_144._4_4_ != 0)) &&
     ((-1 < (int)(uint)local_144 && ((int)(uint)local_144 < DAT_14c9647dc)))) {
    plVar12 = (longlong *)
              ((ulonglong)(((uint)local_144 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_144 >> 0x10) * 8));
    if ((((plVar12 != (longlong *)0x0) && ((int)plVar12[2] == local_144._4_4_)) &&
        ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) && (*plVar12 != 0)) {
      if ((longlong)*(int *)(lVar2 + 0x2af0) != 0) {
        lVar10 = 0;
        lVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x2ae8) + lVar10) == *plVar12) {
            lVar11 = *(longlong *)(lVar2 + 0x2ae8) - lVar11;
            if (lVar11 != 0) {
              pcVar5 = (char *)(lVar11 + 0x34);
              goto LAB_140887491;
            }
            break;
          }
          lVar11 = lVar11 + -0x40;
          lVar10 = lVar10 + 0x40;
        } while (-lVar11 != (longlong)*(int *)(lVar2 + 0x2af0) * 0x40);
      }
      pcVar5 = (char *)(*(longlong *)(lVar2 + 10000) + 0x518);
LAB_140887491:
      cVar3 = *pcVar5;
      local_d8 = 0;
      local_d0 = 0x8000000000;
      uStack_c8 = 0xffffffff;
      local_138[0] = 0;
      local_138[1] = 0;
      local_138[2] = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0xf;
      local_78 = 1;
      local_50 = 0;
      local_74 = 0;
      uStack_6c = 0;
      iStack_58 = 0;
      cStack_54 = '\0';
      uStack_53 = 0;
      local_60 = 0;
      iStack_5c = 0;
      FUN_14088c870(local_138);
      if (local_138[0] != 0) {
        if ((longlong)(int)uStack_120 != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(local_138[2] + lVar11) == 0) goto LAB_1408876ff;
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)uStack_120 * 8 != lVar11);
        }
        local_60 = DAT_14c7640d0;
        cStack_54 = '\0';
        if ((**(longlong **)(lVar2 + 0x2688) == 0) &&
           (cStack_54 = '\0', *(char *)(*(longlong *)(lVar2 + 10000) + 0x518) != '\0')) {
          cStack_54 = cVar3;
        }
        iStack_58 = local_148;
        DAT_14c7640d0 = DAT_14c7640d0 + 1;
        iStack_5c = FUN_14088e1d6(lVar2,local_138,0);
        plVar12 = (longlong *)(lVar2 + 0x2968);
        uVar13 = (uint)((ulonglong)local_144 >> 0x20) ^ (uint)local_144;
        iVar4 = FUN_14088c73e(plVar12,uVar13,&local_144);
        if (iVar4 == -1) {
LAB_140887852:
          local_170 = &local_144;
          FUN_148f131d2(plVar12,&local_160,uVar13);
          lVar11 = *plVar12;
          lVar10 = (longlong)(int)local_160 << 5;
        }
        else {
          lVar11 = *plVar12;
          lVar10 = (longlong)iVar4 * 0x20;
          if (lVar11 + lVar10 == 0) goto LAB_140887852;
        }
        lVar11 = lVar11 + lVar10;
        iVar4 = *(int *)(lVar11 + 0x10);
        *(uint *)(lVar11 + 0x10) = iVar4 + 1U;
        if (*(uint *)(lVar11 + 0x14) < iVar4 + 1U) {
          FUN_14088cbea((longlong *)(lVar11 + 8),iVar4);
        }
        lVar11 = *(longlong *)(lVar11 + 8);
        lVar10 = (longlong)iVar4 * 0xf0;
        FUN_1406fd608(lVar11 + lVar10,local_138);
        piVar1 = (int *)(lVar11 + 0xd8 + lVar10);
        *piVar1 = local_60;
        piVar1[1] = iStack_5c;
        piVar1[2] = iStack_58;
        piVar1[3] = CONCAT13(uStack_51,CONCAT21(uStack_53,cStack_54));
        *(undefined8 *)(lVar11 + 0xe8 + lVar10) = local_50;
        lVar11 = FUN_1447210f0(lVar2);
        if (lVar11 != 0) {
          lVar11 = FUN_14088cdf8(lVar11);
          if (lVar11 != 0) {
            lVar10 = FUN_1402735c8();
            local_160 = *(undefined8 *)(lVar10 + 0x718);
            FUN_14088cfbe(lVar11,&local_170,local_138);
            if (local_168 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_168 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*local_168)(local_168);
                LOCK();
                piVar1 = (int *)((longlong)local_168 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_168 + 0x10))(local_168);
                }
              }
            }
            local_13c = local_60;
            if (cStack_54 == '\x01') {
              puVar6 = (undefined1 *)
                       FUN_145752732(lVar2 + 0x28c0,
                                     (uint)((ulonglong)local_144 >> 0x20) ^ (uint)local_144,
                                     &local_144);
              *puVar6 = 1;
              FUN_14088ff98(lVar2 + 0x2690,local_158);
            }
            if (**(longlong **)(lVar2 + 0x2688) == 0) {
              if (local_144._4_4_ == 0) {
LAB_140887847:
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                if ((-1 < (int)(uint)local_144) && ((int)(uint)local_144 < DAT_14c9647dc)) {
                  puVar8 = (undefined8 *)
                           ((ulonglong)(((uint)local_144 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_144 >> 0x10) * 8));
                  if ((puVar8 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar8 + 2) != local_144._4_4_ ||
                      ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140887847;
                  uVar7 = *puVar8;
                }
              }
              lVar11 = FUN_14089002a(uVar7);
              if (lVar11 == lVar2 + 0x1a98) {
                if (local_144._4_4_ == 0) {
LAB_14088784e:
                  uVar7 = 0;
                }
                else {
                  uVar7 = 0;
                  if ((-1 < (int)(uint)local_144) && ((int)(uint)local_144 < DAT_14c9647dc)) {
                    puVar8 = (undefined8 *)
                             ((ulonglong)(((uint)local_144 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_144 >> 0x10) * 8)
                             );
                    if ((puVar8 == (undefined8 *)0x0) ||
                       ((*(int *)(puVar8 + 2) != local_144._4_4_ ||
                        ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14088784e;
                    uVar7 = *puVar8;
                  }
                }
                FUN_145752a92(lVar2,uVar7);
              }
            }
          }
        }
      }
LAB_1408876ff:
      FUN_140368b56(local_138);
    }
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
LAB_140887326:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_198);
}



// FUNCTION 14088787e FUN_14088787e body=14758 status=ok
// SIG undefined FUN_14088787e(void)

void FUN_14088787e(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined *puVar18;
  uint *puVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  byte bVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  int iVar32;
  longlong *plVar33;
  uint uVar34;
  int iVar35;
  ulonglong uVar36;
  uint *puVar37;
  bool bVar38;
  bool bVar39;
  undefined1 auStack_4e8 [32];
  ulonglong local_4c8;
  uint local_4c0;
  uint local_4b8;
  ulonglong local_4b0;
  wchar_t *local_4a8;
  undefined1 *local_4a0;
  undefined1 *local_498;
  undefined8 *local_490;
  code *local_488;
  code *local_480;
  uint *local_478;
  longlong local_470;
  uint *local_468;
  longlong *local_460;
  longlong *local_458;
  ulonglong local_450;
  code *local_448;
  uint local_43c;
  ulonglong local_438;
  uint *local_430;
  longlong local_428;
  undefined8 uStack_420;
  longlong local_418;
  longlong *plStack_410;
  longlong local_408;
  void *local_400;
  ulonglong uStack_3f8;
  void *local_3f0;
  ulonglong uStack_3e8;
  undefined **local_3e0;
  undefined *local_3d8;
  longlong lStack_3d0;
  ulonglong local_3c8;
  void *local_3c0;
  ulonglong uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  longlong local_388;
  int local_380;
  undefined8 local_378;
  undefined4 local_370;
  longlong local_368;
  longlong local_358;
  longlong local_348;
  longlong *plStack_340;
  undefined8 local_338;
  longlong *local_330;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  int local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  longlong local_288;
  longlong local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258;
  ulonglong uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  ulonglong local_188 [2];
  longlong *local_178;
  int local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  uint *local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  ulonglong local_80;
  
  lVar30 = DAT_14c9647c8;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  iVar12 = (int)param_1[0x26];
  if (iVar12 == 0) goto LAB_140887e72;
  iVar24 = (int)param_1[0x29];
  lVar16 = param_1[0x25];
  lVar29 = (longlong)(iVar24 % iVar12);
  iVar32 = *(int *)(lVar16 + 4 + lVar29 * 8);
  if ((((iVar32 == 0) || (uVar34 = *(uint *)(lVar16 + lVar29 * 8), (int)uVar34 < 0)) ||
      (DAT_14c9647dc <= (int)uVar34)) ||
     (((plVar33 = (longlong *)
                  ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
       plVar33 == (longlong *)0x0 || ((int)plVar33[2] != iVar32)) ||
      ((*(uint *)(plVar33 + 1) & 0x10200000) != 0)))) {
    *(int *)(param_1 + 0x29) = (iVar24 + 1) % iVar12;
LAB_1408887bd:
    plVar33 = param_1 + 0x34;
    local_158 = *(code **)(lVar16 + lVar29 * 8);
    iVar32 = FUN_14088b25a(plVar33,(uint)((ulonglong)local_158 >> 0x20) ^ (uint)local_158);
    if (iVar32 != -1) {
      lVar30 = (longlong)iVar32 * 0x20 + *plVar33;
      if (lVar30 + 8 != 0 && lVar30 != 0) {
        FUN_14088c1ba(*(undefined8 *)(lVar30 + 8),*(undefined4 *)(lVar30 + 0x10));
        *(undefined4 *)(lVar30 + 0x10) = 0;
        if (*(int *)(lVar30 + 0x14) != 0) {
          FUN_1457512ae(lVar30 + 8);
        }
        FUN_14088c474(plVar33,0);
      }
    }
    iVar32 = (int)param_1[0x26];
    iVar12 = ~(iVar24 % iVar12) + iVar32;
    if (iVar12 != 0) {
      memmove((void *)(param_1[0x25] + lVar29 * 8),(void *)(param_1[0x25] + lVar29 * 8 + 8),
              (longlong)iVar12 << 3);
      iVar32 = (int)param_1[0x26];
    }
    *(int *)(param_1 + 0x26) = iVar32 + -1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_4e8);
  }
  lVar17 = *plVar33;
  *(int *)(param_1 + 0x29) = (iVar24 + 1) % iVar12;
  if (lVar17 == 0) goto LAB_1408887bd;
  local_460 = param_1;
  uVar15 = FUN_1447210f0();
  local_470 = lVar17;
  if (uVar15 != 0) {
    pcVar2 = (code *)(lVar17 + 0x2918);
    iVar12 = *(int *)(lVar17 + 0x2960);
    iVar24 = *(int *)(lVar17 + 0x2920) - *(int *)(lVar17 + 0x294c);
    local_438 = CONCAT44(local_438._4_4_,iVar24);
    local_448 = pcVar2;
    if (iVar12 < 2) {
      lVar29 = lVar17 + 0x2950;
      if (*(longlong *)(lVar17 + 0x2958) != 0) {
        lVar29 = *(longlong *)(lVar17 + 0x2958);
      }
      iVar32 = iVar12 + 3;
      if (-1 < iVar12) {
        iVar32 = iVar12;
      }
      if (iVar24 < iVar32 >> 2) {
        puVar37 = (uint *)(lVar17 + 0x2928);
        local_268 = (code *)&DAT_100000000;
        local_258 = 0xffffffff;
        uStack_250 = uStack_250 & 0xffffffff00000000;
        uStack_260 = puVar37;
        if (*(int *)(lVar17 + 0x2940) == 0) {
          iVar12 = 0;
        }
        else {
          FUN_1449c0562(&local_268);
          iVar12 = *(int *)(local_470 + 0x2940);
        }
        local_158 = local_448;
        uStack_150 = local_268;
        local_148 = uStack_260;
        uStack_140 = local_258;
        lVar16 = uStack_140;
        local_138 = uStack_250;
        uStack_140._4_4_ = (int)((ulonglong)local_258 >> 0x20);
        iVar24 = uStack_140._4_4_;
        if ((uStack_140._4_4_ != iVar12) || (uStack_140 = lVar16, uStack_260 != puVar37)) {
          do {
            uStack_140 = lVar16;
            *(undefined4 *)
             (lVar29 + (longlong)*(int *)(*(longlong *)local_158 + 0xc + (longlong)iVar24 * 0x10) *
                       4) = 0xffffffff;
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
            FUN_1449c0562(&uStack_150);
            iVar24 = uStack_140._4_4_;
            lVar16 = uStack_140;
          } while (local_158 != local_448 || (local_148 != puVar37 || uStack_140._4_4_ != iVar12));
        }
      }
      else if (iVar12 == 1) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lVar29 + lVar16 * 4) = 0xffffffff;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar17 + 0x2960));
      }
      lVar17 = local_470;
      FUN_1404362a0(local_448);
    }
    else {
      FUN_1404362a0(pcVar2);
      *(undefined4 *)(lVar17 + 0x2960) = 1;
      FUN_145752ade(pcVar2);
    }
    if ((((*(int *)(lVar17 + 0x26a4) == 0) || (uVar34 = *(uint *)(lVar17 + 0x26a0), (int)uVar34 < 0)
         ) || (DAT_14c9647dc <= (int)uVar34)) ||
       (((puVar21 = (undefined8 *)
                    ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
         puVar21 == (undefined8 *)0x0 || (*(int *)(puVar21 + 2) != *(int *)(lVar17 + 0x26a4))) ||
        ((*(uint *)(puVar21 + 1) & 0x10200000) != 0)))) {
      local_158 = (code *)0x0;
      uStack_150 = (code *)0x0;
      local_430 = (uint *)(lVar17 + 0x26a0);
      local_478 = (uint *)FUN_14088b378();
      bVar38 = local_478 == (uint *)0x0;
      local_450 = uVar15;
      if ((bVar38) || (DAT_14c950c29 == 0)) {
        if (local_478 != (uint *)0x0) goto LAB_140887f0e;
        uVar15 = CONCAT71((int7)((ulonglong)lVar29 >> 8),1);
        if (DAT_14cad00c8 == (uint *)0x0) goto LAB_14088a80c;
        puVar37 = (uint *)0x0;
        uVar15 = CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
        lVar17 = local_470;
LAB_140887f3d:
        local_458 = (longlong *)CONCAT71(local_458._1_7_,!bVar38);
        if (puVar37 != DAT_14cad00c8) goto LAB_140887f4d;
        if ((local_478 != (uint *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(local_478);
        }
        FUN_148f135aa();
      }
      else {
        FUN_1456cec3c();
LAB_140887f0e:
        if (DAT_14cad00c8 == (uint *)0x0) {
          local_490 = &local_268;
          local_268 = FUN_144a7958c;
          local_480 = FUN_14081d0ea;
          local_488 = FUN_14081d0ea;
          local_498 = &LAB_1479b7a0c;
          local_4a0 = &LAB_1463b464e;
          local_4a8 = L"Engine";
          local_4b0 = 0;
          local_4b8 = 0x10000005;
          local_4c0 = 8;
          local_4c8 = CONCAT44(local_4c8._4_4_,0x110);
          FUN_14081cfa3(L"/Script/Engine",L"ActorComponent");
          lVar17 = local_470;
          if (DAT_14cad00c8 == (uint *)0x0) {
            uVar15 = 0;
LAB_14088a80c:
            local_490 = &local_268;
            local_268 = FUN_144a7958c;
            local_480 = FUN_14081d0ea;
            local_488 = FUN_14081d0ea;
            local_498 = &LAB_1479b7a0c;
            local_4a0 = &LAB_1463b464e;
            local_4a8 = L"Engine";
            local_4b0 = 0;
            local_4b8 = 0x10000005;
            local_4c0 = 8;
            local_4c8 = CONCAT44(local_4c8._4_4_,0x110);
            FUN_14081cfa3();
            puVar37 = (uint *)0x0;
            uVar15 = uVar15 & 0xffffffff;
            lVar17 = local_470;
            goto LAB_140887f3d;
          }
        }
        local_458 = (longlong *)CONCAT71(local_458._1_7_,1);
        if ((int)local_478[0xe] < (int)DAT_14cad00c8[0xe]) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          puVar37 = local_478;
          if (*(uint **)(*(longlong *)(local_478 + 0xc) + (longlong)(int)DAT_14cad00c8[0xe] * 8) ==
              DAT_14cad00c8 + 0xc) goto LAB_140887f3d;
        }
LAB_140887f4d:
        bVar28 = (byte)local_458;
        if (((byte)local_458 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(local_478);
          uVar15 = uVar15 & 0xffffffff;
        }
        puVar37 = (uint *)(lVar17 + 0x250);
        uVar34 = *(uint *)(lVar17 + 0x268);
        if (uVar34 == 0) {
          uVar36 = 1;
          uVar31 = 0;
          uVar26 = 0;
          iVar12 = 0;
        }
        else {
          puVar19 = *(uint **)(lVar17 + 0x260);
          if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
            puVar19 = puVar37;
          }
          uVar26 = *puVar19;
          if (uVar26 == 0) {
            iVar12 = uVar34 + 0x1e;
            if (-1 < (int)(uVar34 - 1)) {
              iVar12 = uVar34 - 1;
            }
            uVar31 = 0;
            uVar36 = (ulonglong)(uint)(iVar12 >> 5);
            if (iVar12 >> 5 < 1) {
              uVar36 = uVar31;
            }
            iVar12 = 0;
            do {
              if (uVar36 == uVar31) goto LAB_14088a8e0;
              iVar12 = iVar12 + 0x20;
              uVar26 = puVar19[uVar31 + 1];
              uVar31 = uVar31 + 1;
            } while (uVar26 == 0);
          }
          else {
            uVar31 = 0;
            iVar12 = 0;
          }
          uVar36 = (ulonglong)(-uVar26 & uVar26);
          uVar5 = uVar36 * 2 + 1;
          lVar30 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          uVar26 = (iVar12 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
          if ((int)uVar34 <= (int)uVar26) {
            uVar26 = uVar34;
          }
        }
        if (uVar26 != uVar34) {
          uVar27 = 0xffffffff;
          local_468 = puVar37;
          do {
            lVar30 = *(longlong *)(*(longlong *)(lVar17 + 0x240) + (longlong)(int)uVar26 * 0x10);
            if (lVar30 != 0) {
              if ((DAT_14c950c29 & bVar28) == 1) {
                local_43c = (uint)uVar15;
                FUN_1456cec3c();
                uVar15 = (ulonglong)local_43c;
                puVar37 = local_468;
LAB_140888039:
                if (DAT_14cad00c8 == (uint *)0x0) {
                  local_490 = &local_268;
                  local_268 = FUN_144a7958c;
                  local_480 = FUN_14081d0ea;
                  local_488 = FUN_14081d0ea;
                  local_498 = &LAB_1479b7a0c;
                  local_4a0 = &LAB_1463b464e;
                  local_4a8 = L"Engine";
                  local_4b0 = 0;
                  local_4b8 = 0x10000005;
                  local_4c0 = 8;
                  local_4c8 = CONCAT44(local_4c8._4_4_,0x110);
                  local_43c = (uint)uVar15;
                  FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                  uVar15 = (ulonglong)local_43c;
                  puVar37 = local_468;
                  if (DAT_14cad00c8 == (uint *)0x0) goto LAB_14088a39e;
                }
                if ((int)local_478[0xe] < (int)DAT_14cad00c8[0xe]) goto LAB_14088a39e;
                puVar19 = (uint *)0x0;
                if (*(uint **)(*(longlong *)(local_478 + 0xc) +
                              (longlong)(int)DAT_14cad00c8[0xe] * 8) == DAT_14cad00c8 + 0xc) {
                  puVar19 = local_478;
                }
              }
              else {
                if ((char)uVar15 == '\0') goto LAB_140888039;
LAB_14088a39e:
                puVar19 = (uint *)0x0;
              }
              pcVar2 = uStack_150;
              if (((int)puVar19[0xe] <= *(int *)(*(longlong *)(lVar30 + 0x10) + 0x38)) &&
                 (*(uint **)(*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x30) +
                            (longlong)(int)puVar19[0xe] * 8) == puVar19 + 0xc)) {
                lVar16 = (longlong)(int)uStack_150;
                uVar26 = (int)uStack_150 + 1;
                uStack_150 = (code *)CONCAT44(uStack_150._4_4_,uVar26);
                if (uStack_150._4_4_ < uVar26) {
                  FUN_14088b8ea(&local_158,(ulonglong)pcVar2 & 0xffffffff);
                  uVar15 = uVar15 & 0xffffffff;
                  puVar37 = local_468;
                  bVar28 = (byte)local_458;
                }
                *(longlong *)(local_158 + lVar16 * 8) = lVar30;
                lVar17 = local_470;
              }
            }
            uVar27 = uVar27 & ~(uint)uVar36;
            puVar19 = *(uint **)(lVar17 + 0x260);
            if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
              puVar19 = puVar37;
            }
            uVar13 = *(uint *)(lVar17 + 0x268);
            iVar24 = (int)uVar31;
            lVar30 = (longlong)iVar24;
            uVar26 = puVar19[lVar30] & uVar27;
            if (uVar26 == 0) {
              iVar32 = uVar13 + 0x1e;
              if (-1 < (int)(uVar13 - 1)) {
                iVar32 = uVar13 - 1;
              }
              iVar32 = iVar32 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar35 = iVar32;
              if (iVar32 < iVar24) {
                iVar35 = iVar24;
              }
              puVar37 = local_468;
              if (iVar24 < iVar32) {
                lVar16 = 0;
                do {
                  uVar26 = puVar19[lVar30 + lVar16 + 1];
                  if (uVar26 != 0) {
                    uVar31 = (ulonglong)(iVar24 + (int)lVar16 + 1);
                    uVar27 = 0xffffffff;
                    goto LAB_1408880fc;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar35 - lVar30 != lVar16);
                uVar27 = 0xffffffff;
                iVar24 = iVar35;
              }
              uVar31 = (ulonglong)(iVar24 + 1);
              lVar17 = local_470;
              bVar28 = (byte)local_458;
              uVar26 = uVar13;
            }
            else {
LAB_1408880fc:
              uVar36 = (ulonglong)(-uVar26 & uVar26);
              uVar5 = uVar36 * 2 + 1;
              lVar30 = 0x3f;
              if (uVar5 != 0) {
                for (; uVar5 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              uVar26 = (iVar12 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
              if ((int)uVar13 <= (int)uVar26) {
                uVar26 = uVar13;
              }
            }
            param_1 = (longlong *)(ulonglong)uVar34;
          } while (uVar26 != uVar34);
        }
      }
LAB_14088a8e0:
      pcVar2 = local_158;
      lVar30 = (longlong)(int)uStack_150;
      if (lVar30 == 0) {
        param_1 = (longlong *)0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(longlong *)(pcVar2 + lVar16) != 0) {
            local_268 = (code *)0x0;
            uStack_260 = (uint *)0x0;
            local_338 = *(code **)(*(longlong *)(pcVar2 + lVar16) + 0x18);
            FUN_1400348e2(&local_338);
            if ((int)uStack_260 == DAT_14cbe75f8) {
              if (1 < (int)uStack_260) {
                iVar12 = FUN_144a80a00(local_268);
                bVar38 = true;
                if (iVar12 != 0) goto LAB_14088a955;
              }
LAB_14088a9bd:
              puVar37 = local_430;
              FUN_14485c47a(local_430);
              param_1 = (longlong *)FUN_14479d2ce(puVar37);
              bVar38 = false;
            }
            else {
              bVar38 = true;
              if (DAT_14cbe75f8 + (int)uStack_260 == 1) goto LAB_14088a9bd;
            }
LAB_14088a955:
            if (local_268 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (!bVar38) goto LAB_14088a97f;
          }
          lVar16 = lVar16 + 8;
        } while (lVar30 * 8 != lVar16);
        param_1 = (longlong *)0x0;
      }
LAB_14088a97f:
      lVar17 = local_470;
      uVar15 = local_450;
      if (local_158 != (code *)0x0) {
        FUN_1400020a8();
        uVar15 = local_450;
      }
    }
    else {
      if ((*(uint *)(puVar21 + 1) & 0x10200000) != 0) goto LAB_140887bf6;
      param_1 = (longlong *)*puVar21;
    }
    if (param_1 != (longlong *)0x0) {
      iVar12 = *(int *)(uVar15 + 0x238);
      if (0 < iVar12) {
        lVar30 = 0;
        do {
          iVar32 = DAT_14c9647dc;
          lVar16 = DAT_14c9647c8;
          iVar24 = *(int *)(*(longlong *)(uVar15 + 0x230) + 4 + lVar30 * 8);
          if ((((((iVar24 != 0) &&
                 (uVar34 = *(uint *)(*(longlong *)(uVar15 + 0x230) + lVar30 * 8), -1 < (int)uVar34))
                && ((int)uVar34 < DAT_14c9647dc)) &&
               ((plVar33 = (longlong *)
                           ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
                plVar33 != (longlong *)0x0 && ((int)plVar33[2] == iVar24)))) &&
              ((*(uint *)(plVar33 + 1) & 0x10200000) == 0)) &&
             ((lVar29 = *plVar33, lVar29 != 0 && (*(longlong *)(lVar29 + 0x3d0) != 0)))) {
            local_148 = (uint *)((double)param_1[0x52] * (double)param_1[0xca]);
            uStack_150 = (code *)((double)param_1[0x51] * (double)param_1[0xc9]);
            local_158 = (code *)((double)param_1[0x50] * (double)param_1[200]);
            lVar17 = *(longlong *)(*(longlong *)(lVar29 + 0x3d0) + 0x1c8);
            if (lVar17 == 0) {
              local_258 = DAT_14c8464f0;
              local_268 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_260 = (uint *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_268 = *(code **)(lVar17 + 0x260);
              uStack_260 = *(uint **)(lVar17 + 0x268);
              local_258 = *(longlong *)(lVar17 + 0x270);
            }
            cVar11 = FUN_1404368c0(&local_268,param_1 + 0x48);
            if (cVar11 != '\0') {
              uVar34 = *(uint *)(lVar29 + 0xc);
              if ((int)uVar34 < iVar32) {
                lVar16 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                         *(longlong *)(lVar16 + (ulonglong)(uVar34 >> 0x10) * 8);
              }
              else {
                lVar16 = 0;
              }
              uVar26 = *(uint *)(lVar16 + 0x10);
              local_450 = uVar15;
              if (*(uint *)(lVar16 + 0x10) == 0) {
                LOCK();
                iVar12 = DAT_14c964868 + 1;
                UNLOCK();
                uVar27 = DAT_14c964868 + 1;
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar12;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar27);
                }
                LOCK();
                uVar26 = *(uint *)(lVar16 + 0x10);
                bVar38 = uVar26 == 0;
                if (bVar38) {
                  *(uint *)(lVar16 + 0x10) = uVar27;
                  uVar26 = 0;
                }
                UNLOCK();
                if (bVar38) {
                  uVar26 = uVar27;
                }
              }
              pcVar2 = local_448;
              FUN_14088c1e2(local_448,&local_338);
              plVar33 = local_330;
              *local_330 = CONCAT44(uVar26,uVar34);
              *(undefined4 *)(local_330 + 1) = 0xffffffff;
              local_418 = CONCAT44(local_418._4_4_,(uint)local_338);
              local_4c8 = 0;
              cVar11 = FUN_14088bac2(pcVar2,uVar34 ^ uVar26,local_330);
              if (cVar11 == '\0') {
                uVar27 = *(int *)(local_470 + 0x2920) - *(int *)(local_470 + 0x294c);
                iVar12 = 1;
                if (3 < uVar27) {
                  uVar15 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
                  lVar16 = 0x3f;
                  if (uVar15 != 0) {
                    for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  iVar12 = 1 << ((byte)lVar16 & 0x1f);
                }
                if (((int)uVar27 < 1) || (iVar12 <= *(int *)(local_470 + 0x2960))) {
                  uVar34 = *(int *)(local_470 + 0x2960) - 1U & (uVar34 ^ uVar26);
                  *(uint *)((longlong)plVar33 + 0xc) = uVar34;
                  lVar16 = *(longlong *)(local_470 + 0x2958);
                  if (*(longlong *)(local_470 + 0x2958) == 0) {
                    lVar16 = local_470 + 0x2950;
                  }
                  *(undefined4 *)(plVar33 + 1) =
                       *(undefined4 *)
                        (lVar16 + ((longlong)*(int *)(local_470 + 0x2960) - 1U &
                                  (longlong)(int)uVar34) * 4);
                  lVar16 = *(longlong *)(local_470 + 0x2958);
                  if (*(longlong *)(local_470 + 0x2958) == 0) {
                    lVar16 = local_470 + 0x2950;
                  }
                  *(undefined4 *)
                   (lVar16 + ((longlong)*(int *)(local_470 + 0x2960) - 1U & (longlong)(int)uVar34) *
                             4) = (undefined4)local_418;
                }
                else {
                  *(int *)(local_470 + 0x2960) = iVar12;
                  FUN_145752ade(local_448);
                }
              }
              iVar12 = *(int *)(local_450 + 0x238);
              uVar15 = local_450;
            }
          }
          lVar30 = lVar30 + 1;
          lVar17 = local_470;
        } while ((int)lVar30 < iVar12);
      }
      if (*(int *)(lVar17 + 0x2920) - *(int *)(lVar17 + 0x294c) != (int)local_438) {
        FUN_14088c831();
      }
    }
  }
LAB_140887bf6:
  if ((*(longlong *)(lVar17 + 10000) != 0) &&
     (*(char *)(*(longlong *)(lVar17 + 10000) + 0x4e0) == '\0')) {
    pcVar2 = (code *)(lVar17 + 0x26c0);
    puVar37 = (uint *)(lVar17 + 0x26d0);
    iVar12 = *(int *)(lVar17 + 0x26e8);
    uVar34 = 1;
    if (iVar12 == 0) {
      iVar24 = 0;
      iVar32 = 0;
      iVar20 = 0;
    }
    else {
      puVar19 = *(uint **)(lVar17 + 0x26e0);
      if (*(uint **)(lVar17 + 0x26e0) == (uint *)0x0) {
        puVar19 = puVar37;
      }
      uVar26 = *puVar19;
      if (uVar26 == 0) {
        iVar24 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar24 = iVar12 + -1;
        }
        uVar36 = 0;
        uVar15 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar15 = uVar36;
        }
        iVar32 = (int)uVar15 + 1;
        iVar24 = (int)uVar15 * 0x20 + 0x20;
        iVar35 = 0;
        do {
          iVar20 = iVar12;
          if (uVar15 == uVar36) goto LAB_140887c3d;
          iVar35 = iVar35 + 0x20;
          uVar26 = puVar19[uVar36 + 1];
          uVar36 = uVar36 + 1;
        } while (uVar26 == 0);
        iVar32 = (int)uVar36;
        iVar24 = iVar35;
      }
      else {
        iVar24 = 0;
        iVar32 = 0;
      }
      uVar34 = -uVar26 & uVar26;
      uVar15 = (ulonglong)uVar34 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar20 = (iVar24 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if (iVar12 <= iVar20) {
        iVar20 = iVar12;
      }
    }
LAB_140887c3d:
    uStack_150 = (code *)CONCAT44(uVar34,iVar32);
    uStack_140 = CONCAT44(iVar20,0xffffffff);
    local_138 = CONCAT44(local_138._4_4_,iVar24);
    local_158 = pcVar2;
    local_148 = puVar37;
    if (iVar20 != iVar12) {
      do {
        lVar30 = *(longlong *)local_158 + (longlong)iVar20 * 0x14;
        uVar25 = FUN_14479d2ce(lVar30);
        cVar11 = *(char *)(lVar30 + 8);
        uVar14 = FUN_14575304a(lVar17);
        if ((cVar11 != (char)uVar14) && (*(char *)(local_470 + 0x2912) == '\x01')) {
          FUN_148f12e6a(local_470 + 0x2720,local_470,uVar25,uVar14);
          *(char *)(lVar30 + 8) = (char)uVar14;
        }
        uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
        FUN_1449c0562(&uStack_150);
        lVar17 = local_470;
        iVar20 = uStack_140._4_4_;
      } while (((uStack_140._4_4_ != iVar12) || (local_148 != puVar37)) || (local_158 != pcVar2));
    }
  }
  plVar33 = local_460;
  if (*(char *)(lVar17 + 0x178) == '\x03') {
    iVar12 = (int)local_460[0x39];
    if (iVar12 == 0) {
      uVar36 = 1;
      uVar15 = 0;
      iVar24 = 0;
      iVar32 = 0;
    }
    else {
      puVar37 = (uint *)local_460[0x38];
      if ((uint *)local_460[0x38] == (uint *)0x0) {
        puVar37 = (uint *)(local_460 + 0x36);
      }
      uVar34 = *puVar37;
      if (uVar34 == 0) {
        iVar24 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar24 = iVar12 + -1;
        }
        uVar15 = 0;
        uVar26 = iVar24 >> 5;
        if (iVar24 >> 5 < 1) {
          uVar26 = 0;
        }
        iVar32 = 0;
        do {
          if (uVar26 == uVar15) goto LAB_140888442;
          iVar32 = iVar32 + 0x20;
          uVar34 = puVar37[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar34 == 0);
      }
      else {
        uVar15 = 0;
        iVar32 = 0;
      }
      uVar36 = (ulonglong)(-uVar34 & uVar34);
      uVar31 = uVar36 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar24 = (iVar32 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if (iVar12 <= iVar24) {
        iVar24 = iVar12;
      }
    }
    if (iVar24 == iVar12) {
LAB_140888442:
      bVar28 = 0;
    }
    else {
      puVar37 = (uint *)(local_460 + 0x36);
      if ((uint *)local_460[0x38] != (uint *)0x0) {
        puVar37 = (uint *)local_460[0x38];
      }
      uVar34 = 0xffffffff;
      bVar28 = 0;
      do {
        bVar28 = bVar28 + *(char *)(local_460[0x34] + 0x10 + (longlong)iVar24 * 0x20);
        uVar34 = ~(uint)uVar36 & uVar34;
        iVar24 = (int)uVar15;
        lVar30 = (longlong)iVar24;
        uVar26 = puVar37[lVar30] & uVar34;
        if (uVar26 == 0) {
          iVar35 = iVar12 + -1;
          if (iVar12 + -1 < 0) {
            iVar35 = iVar12 + 0x1e;
          }
          iVar35 = iVar35 >> 5;
          iVar20 = iVar35;
          if (iVar35 < iVar24) {
            iVar20 = iVar24;
          }
          if (iVar35 <= iVar24) break;
          lVar16 = 0;
          while( true ) {
            iVar32 = iVar32 + 0x20;
            uVar26 = puVar37[lVar30 + lVar16 + 1];
            if (uVar26 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar20 - lVar30 == lVar16) goto LAB_140887dd8;
          }
          uVar15 = (ulonglong)(iVar24 + (int)lVar16 + 1);
          uVar34 = 0xffffffff;
        }
        uVar36 = (ulonglong)(-uVar26 & uVar26);
        uVar31 = uVar36 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar24 = (iVar32 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      } while (iVar24 < iVar12);
    }
LAB_140887dd8:
    plVar6 = local_460 + 0x34;
    lVar30 = FUN_14011c349();
    if (((*(longlong *)plVar33[0x41] != 0) && ((uint)bVar28 < *(uint *)(lVar30 + 0x7e8))) &&
       (lVar30 = *(longlong *)plVar33[0x41], lVar30 != 0)) {
      uVar34 = *(uint *)(lVar30 + 8);
      iVar12 = *(int *)(lVar30 + 0xc);
      uVar26 = *(uint *)(lVar30 + 0x10);
      iVar24 = *(int *)(lVar30 + 0x14);
      lVar16 = plVar33[0x41];
      plVar33[0x41] = lVar30;
      *(undefined8 *)(lVar30 + 8) = 0;
      *(undefined8 *)(lVar30 + 0x10) = 0;
      if (lVar16 != 0) {
        FUN_1400020a8();
      }
      if (iVar12 == 0) {
LAB_140888d3f:
        lVar30 = 0;
      }
      else {
        lVar30 = 0;
        if ((-1 < (int)uVar34) && ((int)uVar34 < DAT_14c9647dc)) {
          plVar33 = (longlong *)
                    ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8));
          if ((plVar33 == (longlong *)0x0) ||
             (((int)plVar33[2] != iVar12 || ((*(uint *)(plVar33 + 1) & 0x10200000) != 0))))
          goto LAB_140888d3f;
          lVar30 = *plVar33;
        }
      }
      if (((((iVar24 != 0) && (-1 < (int)uVar26)) && ((int)uVar26 < DAT_14c9647dc)) &&
          ((plVar33 = (longlong *)
                      ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
           plVar33 != (longlong *)0x0 && ((int)plVar33[2] == iVar24)))) &&
         ((((*(uint *)(plVar33 + 1) & 0x10200000) == 0 &&
           ((lVar30 != 0 && (lVar16 = *plVar33, lVar16 != 0)))) &&
          (*(longlong *)(lVar16 + 10000) != 0)))) {
        lVar29 = *(longlong *)(lVar16 + 0x26b0);
        if (lVar29 == 0) {
          uVar25 = FUN_1457512de();
          lVar29 = FUN_14477b664(uVar25);
          *(longlong *)(lVar16 + 0x26b0) = lVar29;
        }
        if (*(longlong *)(lVar16 + 0x26b8) == 0) {
          if ((lVar29 != 0) && (local_478 = (uint *)(lVar16 + 0x26a8), *(longlong *)local_478 != 0))
          {
            plVar33 = *(longlong **)(lVar29 + 0xb8);
            if ((plVar33 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar33 + 0x108))(plVar33), cVar11 == '\0')) {
              *(undefined8 *)(lVar16 + 0x26b8) = 0;
            }
            else {
              uVar25 = (**(code **)(*plVar33 + 0x110))(plVar33);
              lVar29 = FUN_144aff482(uVar25,local_478);
              *(longlong *)(lVar16 + 0x26b8) = lVar29;
              if (lVar29 != 0) goto LAB_14088857e;
            }
          }
        }
        else {
LAB_14088857e:
          lVar29 = *(longlong *)(lVar30 + 0x398);
          if (lVar29 != 0) {
            if (DAT_14cbae3d8 == 0) {
              local_490 = &local_158;
              local_158 = FUN_141030f22;
              local_480 = FUN_14081d0ea;
              local_488 = (code *)&LAB_1464f5fc4;
              local_498 = &LAB_148c3dd26;
              local_4a0 = &LAB_1459673ba;
              local_4a8 = L"Engine";
              local_4b0 = 0;
              local_4b8 = 0x10000004;
              local_4c0 = 0x10;
              local_4c8 = CONCAT44(local_4c8._4_4_,0x1360);
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
              lVar29 = *(longlong *)(lVar30 + 0x398);
              if (lVar29 == 0) goto LAB_1408885cd;
            }
            if ((((DAT_14cbae3d8 != 0) && (lVar17 = *(longlong *)(lVar29 + 0x10), lVar17 != 0)) &&
                (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar17 + 0x38))) &&
               ((*(longlong *)
                  (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
                 DAT_14cbae3d8 + 0x30 && (*(char *)(lVar29 + 0x4dd) == '\x01')))) {
              uVar27 = *(uint *)(lVar16 + 0xc);
              local_338 = (code *)(ulonglong)uVar27;
              if ((int)uVar27 < DAT_14c9647dc) {
                lVar29 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
              }
              else {
                lVar29 = 0;
              }
              uVar13 = *(uint *)(lVar29 + 0x10);
              if (*(uint *)(lVar29 + 0x10) == 0) {
                LOCK();
                iVar32 = DAT_14c964868 + 1;
                UNLOCK();
                iVar35 = DAT_14c964868 + 1;
                local_478 = (uint *)CONCAT44(local_478._4_4_,iVar35);
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar32;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar35);
                }
                LOCK();
                uVar13 = *(uint *)(lVar29 + 0x10);
                bVar38 = uVar13 == 0;
                if (bVar38) {
                  *(uint *)(lVar29 + 0x10) = (uint)local_478;
                  uVar13 = 0;
                }
                UNLOCK();
                uVar27 = (uint)local_338;
                if (bVar38) {
                  uVar13 = (uint)local_478;
                }
              }
              local_338._0_4_ = uVar27;
              local_338 = (code *)CONCAT44(uVar13,(uint)local_338);
              puVar37 = (uint *)(ulonglong)(uVar13 ^ (uint)local_338);
              if ((int)local_460[0x35] != *(int *)((longlong)local_460 + 0x1d4)) {
                plVar33 = local_460 + 0x3b;
                if ((longlong *)local_460[0x3c] != (longlong *)0x0) {
                  plVar33 = (longlong *)local_460[0x3c];
                }
                iVar32 = *(int *)((longlong)plVar33 +
                                 (ulonglong)((int)local_460[0x3d] - 1U & (uVar13 ^ (uint)local_338))
                                 * 4);
                if (iVar32 != -1) {
                  lVar29 = *plVar6;
                  local_478 = puVar37;
                  do {
                    lVar17 = (longlong)iVar32 * 0x20;
                    local_158 = *(code **)(lVar29 + lVar17);
                    local_268 = local_338;
                    cVar11 = FUN_14088c64c(&local_158,&local_268);
                    lVar29 = *plVar6;
                    puVar37 = local_478;
                    if (cVar11 != '\0') {
                      if (lVar29 + lVar17 != 0) {
                        lVar29 = lVar29 + lVar17;
                        goto LAB_1408892f2;
                      }
                      break;
                    }
                    iVar32 = *(int *)(lVar29 + 0x18 + lVar17);
                  } while (iVar32 != -1);
                }
              }
              local_158 = (code *)&local_338;
              FUN_145751bea(plVar6,&local_268,puVar37);
              lVar29 = (longlong)(int)local_268 * 0x20 + *plVar6;
LAB_1408892f2:
              local_468 = (uint *)(lVar29 + 8);
              local_478 = (uint *)CONCAT71(local_478._1_7_,*(undefined1 *)(lVar16 + 0x2b30));
              uVar14 = FUN_14088bb64(lVar16);
              local_458 = (longlong *)CONCAT44(local_458._4_4_,uVar14);
              uVar27 = *(uint *)(lVar30 + 0xc);
              local_438 = (ulonglong)uVar27;
              if ((int)uVar27 < DAT_14c9647dc) {
                lVar29 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
              }
              else {
                lVar29 = 0;
              }
              uVar27 = *(uint *)(lVar29 + 0x10);
              if (*(uint *)(lVar29 + 0x10) == 0) {
                LOCK();
                iVar32 = DAT_14c964868 + 1;
                UNLOCK();
                iVar35 = DAT_14c964868 + 1;
                local_450 = CONCAT44(local_450._4_4_,iVar35);
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar32;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar35);
                }
                LOCK();
                uVar27 = *(uint *)(lVar29 + 0x10);
                bVar38 = uVar27 == 0;
                if (bVar38) {
                  *(uint *)(lVar29 + 0x10) = (uint)local_450;
                  uVar27 = 0;
                }
                UNLOCK();
                if (bVar38) {
                  uVar27 = (uint)local_450;
                }
              }
              local_450 = (ulonglong)uVar27;
              if ((((char)local_478 == '\0') ||
                  (cVar11 = FUN_1457524f2(local_460,lVar16,lVar30), cVar11 != '\0')) &&
                 (((int)local_458 != 0 || (cVar11 = FUN_140890098(lVar16), cVar11 == '\0')))) {
                puVar37 = local_468;
                uVar15 = (ulonglong)(int)local_468[2];
                if (0 < (longlong)uVar15) {
                  lVar29 = uVar15 * 0x38;
                  do {
                    lVar29 = lVar29 + -0x38;
                    cVar11 = FUN_14088ccfe(*(longlong *)puVar37 + lVar29,lVar30);
                    if (cVar11 != '\0') {
                      FUN_14088ba4c(puVar37,(int)uVar15 + -1);
                    }
                    bVar38 = 1 < uVar15;
                    uVar15 = uVar15 - 1;
                  } while (bVar38);
                }
                uVar34 = *(uint *)(lVar16 + 0xc);
                if ((int)uVar34 < DAT_14c9647dc) {
                  lVar29 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8);
                }
                else {
                  lVar29 = 0;
                }
                plVar33 = local_460 + 0x2a;
                uVar26 = *(uint *)(lVar29 + 0x10);
                if (*(uint *)(lVar29 + 0x10) == 0) {
                  LOCK();
                  iVar12 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar27 = DAT_14c964868 + 1;
                  bVar38 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar12;
                  if (bVar38) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar27);
                  }
                  LOCK();
                  uVar26 = *(uint *)(lVar29 + 0x10);
                  bVar38 = uVar26 == 0;
                  if (bVar38) {
                    *(uint *)(lVar29 + 0x10) = uVar27;
                    uVar26 = 0;
                  }
                  UNLOCK();
                  if (bVar38) {
                    uVar26 = uVar27;
                  }
                }
                local_158 = (code *)CONCAT44(uVar26,uVar34);
                iVar12 = FUN_14088c684(plVar33,uVar34 ^ uVar26);
                if (iVar12 != -1) {
                  uVar34 = *(uint *)(lVar16 + 0xc);
                  if ((int)uVar34 < DAT_14c9647dc) {
                    lVar29 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8);
                  }
                  else {
                    lVar29 = 0;
                  }
                  uVar26 = *(uint *)(lVar29 + 0x10);
                  if (*(uint *)(lVar29 + 0x10) == 0) {
                    LOCK();
                    iVar12 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar27 = DAT_14c964868 + 1;
                    bVar38 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar12;
                    if (bVar38) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar27);
                    }
                    LOCK();
                    uVar26 = *(uint *)(lVar29 + 0x10);
                    bVar38 = uVar26 == 0;
                    if (bVar38) {
                      *(uint *)(lVar29 + 0x10) = uVar27;
                      uVar26 = 0;
                    }
                    UNLOCK();
                    if (bVar38) {
                      uVar26 = uVar27;
                    }
                  }
                  local_158 = (code *)CONCAT44(uVar26,uVar34);
                  iVar24 = FUN_14088c684(plVar33,uVar34 ^ uVar26);
                  iVar12 = 0;
                  if (iVar24 == -1) {
                    lVar29 = 0;
                  }
                  else {
                    lVar29 = (longlong)iVar24 * 0x60 + *plVar33;
                  }
                  pcVar2 = (code *)(lVar29 + 8);
                  puVar37 = (uint *)(lVar29 + 0x18);
                  local_268 = (code *)&DAT_100000000;
                  local_258 = 0xffffffff;
                  uStack_250 = uStack_250 & 0xffffffff00000000;
                  uStack_260 = puVar37;
                  if (*(int *)(lVar29 + 0x30) != 0) {
                    FUN_1449c0562(&local_268);
                    iVar12 = *(int *)(lVar29 + 0x30);
                  }
                  uStack_140 = local_258;
                  lVar29 = uStack_140;
                  local_138 = uStack_250;
                  uStack_150 = local_268;
                  local_148 = uStack_260;
                  uStack_140._4_4_ = (int)((ulonglong)local_258 >> 0x20);
                  iVar24 = uStack_140._4_4_;
                  local_158 = pcVar2;
                  if ((uStack_140._4_4_ != iVar12) || (uStack_140 = lVar29, uStack_260 != puVar37))
                  {
                    do {
                      uStack_140 = lVar29;
                      lVar29 = (longlong)iVar24 * 0x18 + *(longlong *)local_158;
                      cVar11 = FUN_14088ccfe(lVar29,lVar30);
                      if (cVar11 != '\0') {
                        *(undefined1 *)(lVar29 + 8) = 0;
                        *(undefined4 *)(lVar29 + 0xc) = 0;
                      }
                      uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
                      FUN_1449c0562(&uStack_150);
                      iVar24 = uStack_140._4_4_;
                      lVar29 = uStack_140;
                    } while (((uStack_140._4_4_ != iVar12) || (local_148 != puVar37)) ||
                            (local_158 != pcVar2));
                  }
                }
                puVar37 = local_468;
                uVar34 = local_468[2];
                local_468[2] = uVar34 + 1;
                if (local_468[3] < uVar34 + 1) {
                  FUN_14575164c(local_468,uVar34);
                }
                plVar33 = local_460;
                lVar30 = *(longlong *)puVar37;
                lVar29 = (longlong)(int)uVar34 * 0x38;
                *(ulonglong *)(lVar30 + lVar29) = (local_450 << 0x20) + local_438;
                puVar21 = (undefined8 *)(lVar30 + 8 + lVar29);
                *puVar21 = 0;
                puVar21[1] = 0;
                puVar21 = (undefined8 *)(lVar30 + 0x18 + lVar29);
                *puVar21 = 0;
                puVar21[1] = 0;
                *(int *)(lVar30 + 0x28 + lVar29) = (int)local_458;
                *(char *)(lVar30 + 0x2c + lVar29) = (char)local_478;
                *(undefined2 *)(lVar30 + 0x2d + lVar29) = (undefined2)local_338;
                *(undefined1 *)(lVar30 + 0x2f + lVar29) = local_338._2_1_;
                *(undefined4 *)(lVar30 + 0x30 + lVar29) = 0xffffffff;
                FUN_14088b45e(local_460,lVar16);
                FUN_1447a1747(0,0);
                goto LAB_140887df9;
              }
              FUN_1447a1747(0,0);
            }
          }
        }
      }
LAB_1408885cd:
      puVar21 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar21 = 0;
      *(uint *)(puVar21 + 1) = uVar34;
      *(int *)((longlong)puVar21 + 0xc) = iVar12;
      *(uint *)(puVar21 + 2) = uVar26;
      *(int *)((longlong)puVar21 + 0x14) = iVar24;
      plVar33 = local_460;
      if (puVar21 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)local_460[0x40];
        local_460[0x40] = (longlong)puVar21;
        *puVar3 = puVar21;
      }
    }
LAB_140887df9:
    uVar34 = *(uint *)(local_470 + 0xc);
    if ((int)uVar34 < DAT_14c9647dc) {
      lVar30 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8);
    }
    else {
      lVar30 = 0;
    }
    uVar26 = *(uint *)(lVar30 + 0x10);
    if (*(uint *)(lVar30 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      uVar27 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar27);
      }
      LOCK();
      uVar26 = *(uint *)(lVar30 + 0x10);
      bVar38 = uVar26 == 0;
      if (bVar38) {
        *(uint *)(lVar30 + 0x10) = uVar27;
        uVar26 = 0;
      }
      UNLOCK();
      if (bVar38) {
        uVar26 = uVar27;
      }
    }
    local_158 = (code *)CONCAT44(uVar26,uVar34);
    iVar12 = FUN_14088b25a(plVar6,uVar34 ^ uVar26);
    lVar17 = local_470;
    if (iVar12 != -1) {
      uVar34 = *(uint *)(local_470 + 0xc);
      if ((int)uVar34 < DAT_14c9647dc) {
        lVar30 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8);
      }
      else {
        lVar30 = 0;
      }
      uVar26 = *(uint *)(lVar30 + 0x10);
      if (*(uint *)(lVar30 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        uVar27 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar27);
        }
        LOCK();
        uVar26 = *(uint *)(lVar30 + 0x10);
        bVar38 = uVar26 == 0;
        if (bVar38) {
          *(uint *)(lVar30 + 0x10) = uVar27;
          uVar26 = 0;
        }
        UNLOCK();
        if (bVar38) {
          uVar26 = uVar27;
        }
      }
      local_158 = (code *)CONCAT44(uVar26,uVar34);
      iVar12 = FUN_14088b25a(plVar6,uVar34 ^ uVar26);
      if (((iVar12 != -1) && (lVar30 = (**(code **)(*plVar33 + 0x180))(plVar33), lVar30 != 0)) &&
         (*(longlong *)(lVar30 + 0x178) != 0)) {
        lVar29 = FUN_14030d660();
        lVar16 = local_470;
        lVar30 = *(longlong *)(lVar30 + 0x178);
        if (((lVar30 != 0) && (lVar29 != 0)) &&
           ((lVar17 = *(longlong *)(lVar30 + 0x10), lVar17 != 0 &&
            ((*(int *)(lVar29 + 0x38) <= *(int *)(lVar17 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar29 + 0x38) * 8) ==
              lVar29 + 0x30)))))) {
          lVar29 = *(longlong *)(local_470 + 0x26b0);
          if (lVar29 == 0) {
            uVar25 = FUN_1457512de();
            lVar29 = FUN_14477b664(uVar25);
            *(longlong *)(lVar16 + 0x26b0) = lVar29;
          }
          plVar22 = (longlong *)(lVar16 + 0x26a8);
          lVar16 = *(longlong *)(lVar16 + 0x26b8);
          if (lVar16 == 0) {
            if ((lVar29 != 0) && (*plVar22 != 0)) {
              plVar7 = *(longlong **)(lVar29 + 0xb8);
              if ((plVar7 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar11 == '\0')) {
                *(undefined8 *)(local_470 + 0x26b8) = 0;
              }
              else {
                uVar25 = (**(code **)(*plVar7 + 0x110))(plVar7);
                lVar16 = FUN_144aff482(uVar25,plVar22);
                *(longlong *)(local_470 + 0x26b8) = lVar16;
                if (lVar16 != 0) {
                  lVar29 = *(longlong *)(local_470 + 0x26b0);
                  goto LAB_140888959;
                }
              }
            }
          }
          else {
LAB_140888959:
            lVar17 = lVar16;
            if (lVar29 == 0) {
              uVar25 = FUN_1457512de();
              lVar29 = FUN_14477b664(uVar25);
              *(longlong *)(local_470 + 0x26b0) = lVar29;
              lVar17 = *(longlong *)(local_470 + 0x26b8);
              if (*(longlong *)(local_470 + 0x26b8) == 0) {
                lVar17 = 0;
                if ((lVar29 != 0) && (lVar17 = 0, *plVar22 != 0)) {
                  plVar33 = *(longlong **)(lVar29 + 0xb8);
                  if ((plVar33 == (longlong *)0x0) ||
                     (cVar11 = (**(code **)(*plVar33 + 0x108))(plVar33), cVar11 == '\0')) {
                    lVar17 = 0;
                  }
                  else {
                    uVar25 = (**(code **)(*plVar33 + 0x110))(plVar33);
                    lVar17 = FUN_144aff482(uVar25,plVar22);
                  }
                  *(longlong *)(local_470 + 0x26b8) = lVar17;
                  plVar33 = local_460;
                }
              }
            }
            FUN_1403723e8(&local_338,lVar17 + 0x30,0);
            local_2d8 = 0x3f800000;
            local_2d0 = 0;
            uStack_2c8 = 0;
            local_2c0 = 0;
            uStack_2b8 = 0;
            local_2b0 = 0;
            if ((local_2a8 != 0) || (local_2a0 != -0xfffff30)) {
              local_2a8 = 0;
              local_2a0 = -0xfffff30;
              local_298 = 0;
            }
            local_290 = 0x3f800000;
            uVar34 = *(uint *)(local_470 + 0xc);
            if ((int)uVar34 < DAT_14c9647dc) {
              lVar29 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8);
            }
            else {
              lVar29 = 0;
            }
            uVar26 = *(uint *)(lVar29 + 0x10);
            if (*(uint *)(lVar29 + 0x10) == 0) {
              LOCK();
              iVar12 = DAT_14c964868 + 1;
              UNLOCK();
              uVar27 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar12;
              if (bVar38) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar27);
              }
              LOCK();
              uVar26 = *(uint *)(lVar29 + 0x10);
              bVar38 = uVar26 == 0;
              if (bVar38) {
                *(uint *)(lVar29 + 0x10) = uVar27;
                uVar26 = 0;
              }
              UNLOCK();
              plVar33 = local_460;
              if (bVar38) {
                uVar26 = uVar27;
              }
            }
            local_158 = (code *)CONCAT44(uVar26,uVar34);
            iVar12 = FUN_14088b25a(plVar6,uVar34 ^ uVar26);
            if (iVar12 == -1) {
              lVar29 = 0;
            }
            else {
              lVar29 = (longlong)iVar12 * 0x20 + *plVar6;
            }
            if ((longlong)*(int *)(lVar29 + 0x10) != 0) {
              puVar37 = *(uint **)(lVar29 + 8);
              puVar19 = puVar37 + (longlong)*(int *)(lVar29 + 0x10) * 0xe;
              bVar38 = false;
              do {
                if ((((puVar37[1] != 0) && (uVar34 = *puVar37, -1 < (int)uVar34)) &&
                    ((int)uVar34 < DAT_14c9647dc)) &&
                   (((plVar22 = (longlong *)
                                ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
                     plVar22 != (longlong *)0x0 && (*(uint *)(plVar22 + 2) == puVar37[1])) &&
                    ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)))) {
                  if (bVar38) break;
                  if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
                    lVar29 = *plVar22;
                  }
                  else {
                    lVar29 = 0;
                  }
                  local_188[0] = local_188[0] & 0xffffffffffffff00;
                  local_160 = 0;
                  FUN_1456bb102(local_188,lVar29);
                  bVar38 = false;
                  iVar12 = 3;
                  if ((lVar29 != 0) && (lVar29 = *(longlong *)(lVar29 + 0x3d0), lVar29 != 0)) {
                    local_478 = puVar19;
                    lVar23 = FUN_1402095ca();
                    lVar17 = *(longlong *)(lVar29 + 0x10);
                    iVar12 = *(int *)(lVar17 + 0x38);
                    if ((iVar12 < *(int *)(lVar23 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8) !=
                        lVar23 + 0x30)) {
                      if (DAT_14cba8288 == 0) {
                        local_158 = FUN_141864c34;
                        local_480 = FUN_14081d0ea;
                        local_488 = (code *)&LAB_1464cee30;
                        local_490 = &local_158;
                        local_498 = &LAB_148bfac22;
                        local_4a0 = &LAB_140f21842;
                        local_4a8 = L"Game";
                        local_4b0 = 0;
                        local_4b8 = 0x10000004;
                        local_4c0 = 0x10;
                        local_4c8 = CONCAT44(local_4c8._4_4_,0x9cd0);
                        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,
                                      FUN_1465d003c);
                        lVar17 = *(longlong *)(lVar29 + 0x10);
                        iVar12 = *(int *)(lVar17 + 0x38);
                      }
                      puVar19 = local_478;
                      if (iVar12 < *(int *)(DAT_14cba8288 + 0x38)) {
                        iVar12 = 3;
                        bVar38 = false;
                      }
                      else {
                        iVar12 = 3;
                        if (*(longlong *)
                             (*(longlong *)(lVar17 + 0x30) +
                             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)
                        goto LAB_14088970e;
                      }
                    }
                    else {
                      lVar29 = FUN_1412d33a2(lVar29);
                      iVar12 = 3;
                      puVar19 = local_478;
                      bVar38 = false;
                      if (lVar29 != 0) {
LAB_14088970e:
                        local_f8 = 0;
                        local_f0 = 0x8000000000;
                        uStack_e8 = 0xffffffff;
                        local_158 = (code *)0x0;
                        uStack_150 = (code *)0x0;
                        local_148 = (uint *)0x0;
                        uStack_140 = 0;
                        local_138 = 0;
                        uStack_130 = 0;
                        local_128 = 0;
                        uStack_120 = 0;
                        local_118 = 0;
                        uStack_110 = 0;
                        local_d8 = 0;
                        local_d0 = 0;
                        local_c8 = 0;
                        uStack_c0 = 0;
                        local_b8 = 0;
                        uStack_b0 = 0;
                        local_a8 = 0;
                        local_a0 = 0xf;
                        local_98 = 1;
                        local_94 = 0;
                        uStack_8c = 0;
                        uVar14 = (**(code **)(*(longlong *)(lVar29 + 0x10c0) + 0x18))
                                           (lVar29 + 0x10c0);
                        local_468 = (uint *)CONCAT44(local_468._4_4_,uVar14);
                        if (*(char *)(local_470 + 0x2b30) == '\x01') {
                          lVar17 = FUN_14088c018();
                          lVar29 = *(longlong *)(lVar30 + 0x488);
                          if (lVar29 != 0) {
                            if (DAT_14cbae3d8 == 0) {
                              local_268 = FUN_141030f22;
                              local_480 = FUN_14081d0ea;
                              local_488 = (code *)&LAB_1464f5fc4;
                              local_490 = &local_268;
                              local_498 = &LAB_148c3dd26;
                              local_4a0 = &LAB_1459673ba;
                              local_4a8 = L"Engine";
                              local_4b0 = 0;
                              local_4b8 = 0x10000004;
                              local_4c0 = 0x10;
                              local_4c8 = CONCAT44(local_4c8._4_4_,0x1360);
                              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8);
                            }
                            if ((*(int *)(DAT_14cbae3d8 + 0x38) <=
                                 *(int *)(*(longlong *)(lVar29 + 0x10) + 0x38)) &&
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x30) +
                                 (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
                                DAT_14cbae3d8 + 0x30)) {
                              iVar12 = 3;
                              if (*(int *)(lVar29 + 0xf38) == 0) goto LAB_14088a500;
                              bVar38 = false;
                              uVar15 = (ulonglong)puVar37[4] / (ulonglong)*(uint *)(lVar17 + 0x5c);
                              iVar24 = (int)uVar15;
                              if ((-1 < iVar24) && (iVar24 < *(int *)(lVar29 + 0xf38))) {
                                lVar29 = *(longlong *)(lVar29 + 0xf30);
                                lVar17 = uVar15 * 0x68;
                                local_408 = *(longlong *)(lVar29 + 0x10 + lVar17);
                                local_418 = *(longlong *)(lVar29 + lVar17);
                                plStack_410 = (longlong *)((longlong *)(lVar29 + lVar17))[1];
                                local_400 = (void *)0x0;
                                uVar34 = *(uint *)(lVar29 + 0x20 + lVar17);
                                pvVar8 = *(void **)(lVar29 + 0x18 + lVar17);
                                uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar34);
                                if ((longlong)(int)uVar34 == 0) {
                                  uStack_3f8 = (ulonglong)uVar34;
                                }
                                else {
                                  FUN_141894126(&local_400,uVar34,0);
                                  memcpy(local_400,pvVar8,(longlong)(int)uVar34 << 4);
                                }
                                lVar29 = lVar29 + lVar17;
                                local_3f0 = (void *)0x0;
                                uVar34 = *(uint *)(lVar29 + 0x30);
                                pvVar8 = *(void **)(lVar29 + 0x28);
                                uStack_3e8 = CONCAT44(uStack_3e8._4_4_,uVar34);
                                if ((longlong)(int)uVar34 == 0) {
                                  uStack_3e8 = (ulonglong)uVar34;
                                }
                                else {
                                  FUN_1406fd90c(&local_3f0,uVar34,0);
                                  memcpy(local_3f0,pvVar8,(longlong)(int)uVar34 << 3);
                                }
                                local_3e0 = (undefined **)&DAT_14a171d50;
                                local_3c8 = 0;
                                lStack_3d0 = 0;
                                local_3d8 = *(undefined **)(lVar29 + 0x40);
                                FUN_1406022fe(&lStack_3d0,lVar29 + 0x48);
                                local_3e0 = &PTR_FUN_14b1828b0;
                                local_3c0 = (void *)0x0;
                                uVar34 = *(uint *)(lVar29 + 0x60);
                                pvVar8 = *(void **)(lVar29 + 0x58);
                                uStack_3b8 = CONCAT44(uStack_3b8._4_4_,uVar34);
                                if ((longlong)(int)uVar34 == 0) {
                                  uStack_3b8 = (ulonglong)uVar34;
                                }
                                else {
                                  FUN_1487630d4(&local_3c0,uVar34,0);
                                  memcpy(local_3c0,pvVar8,(longlong)(int)uVar34 << 3);
                                }
                                lVar29 = local_408;
                                if (local_408 != 0 && plStack_410 != (longlong *)0x0) {
                                  iVar12 = FUN_14005f6be(plStack_410,local_188,0);
                                  if (iVar12 <= (int)local_468) {
                                    iVar12 = FUN_14005f32a(lVar29,local_188,0);
                                    if (iVar12 <= (int)local_468) goto LAB_14088998f;
                                  }
                                  local_468 = (uint *)CONCAT44(local_468._4_4_,(undefined4)local_418
                                                              );
                                }
LAB_14088998f:
                                local_418 = CONCAT44(local_418._4_4_,(int)local_468);
                                FUN_140368c94(&local_418,&local_268,local_188,0);
                                FUN_140a6a9d4(&local_158);
                                FUN_140368b56(&local_268);
                                if (local_3c0 != (void *)0x0) {
                                  FUN_1400020a8();
                                }
                                iVar12 = (int)(local_3c8 >> 0x20);
                                goto joined_r0x000140889d18;
                              }
                              goto LAB_14088a1c5;
                            }
                          }
LAB_14088a047:
                          bVar38 = false;
                          iVar12 = 3;
                          if (local_158 != (code *)0x0) {
                            if ((longlong)(int)(uint)uStack_140 != 0) {
                              lVar29 = 0;
                              do {
                                if (*(longlong *)((longlong)local_148 + lVar29) == 0)
                                goto LAB_14088a1c5;
                                lVar29 = lVar29 + 8;
                              } while ((longlong)(int)(uint)uStack_140 * 8 != lVar29);
                            }
                            local_268 = (code *)0x0;
                            uStack_260 = (uint *)0x0;
                            FUN_140c65c56(&local_158,&local_418);
                            cVar11 = FUN_140baf362(&local_158,&local_268,0);
                            if ((cVar11 != '\0') && (local_418 != 0)) {
                              uVar34 = puVar37[4];
                              puVar37[4] = uVar34 + 1;
                              if (puVar37[5] < uVar34 + 1) {
                                FUN_1447a1bd6(puVar37 + 2,uVar34);
                              }
                              pcVar2 = local_268;
                              lVar29 = *(longlong *)(puVar37 + 2);
                              lVar23 = (longlong)(int)uVar34 * 0x10;
                              puVar21 = (undefined8 *)(lVar29 + lVar23);
                              *(undefined8 *)(lVar29 + lVar23) = 0;
                              lVar17 = (longlong)(int)uStack_260;
                              *(int *)(lVar29 + 8 + lVar23) = (int)uStack_260;
                              if (lVar17 == 0) {
                                *(undefined4 *)((longlong)puVar21 + 0xc) = 0;
                              }
                              else {
                                FUN_1446dd670(puVar21,(ulonglong)uStack_260 & 0xffffffff,0);
                                memcpy((void *)*puVar21,pcVar2,lVar17 * 2);
                              }
                              uVar14 = *(undefined4 *)(local_418 + 0x40);
                              uVar34 = puVar37[8];
                              puVar37[8] = uVar34 + 1;
                              if (puVar37[9] < uVar34 + 1) {
                                FUN_1446f48e2(puVar37 + 6,uVar34);
                              }
                              *(undefined4 *)
                               (*(longlong *)(puVar37 + 6) + (longlong)(int)uVar34 * 4) = uVar14;
                            }
                            plVar33 = plStack_410;
                            if (plStack_410 != (longlong *)0x0) {
                              LOCK();
                              plVar22 = plStack_410 + 1;
                              *(int *)plVar22 = (int)*plVar22 + -1;
                              UNLOCK();
                              if ((int)*plVar22 == 0) {
                                (**(code **)*plStack_410)(plStack_410);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar33 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (*piVar1 == 0) {
                                  (**(code **)(*plVar33 + 0x10))(plVar33);
                                }
                              }
                            }
                            if (local_268 != (code *)0x0) {
                              FUN_1400020a8();
                            }
                            bVar38 = true;
                            iVar12 = 0;
                          }
                        }
                        else {
                          if (*(char *)(lVar16 + 0x18) == '\x01') {
                            uVar34 = puVar37[4];
                            if ((-1 < (longlong)(int)uVar34) &&
                               ((int)uVar34 < *(int *)(lVar16 + 0x28))) {
                              lVar17 = (longlong)(int)uVar34 * 0x170;
                              lVar29 = *(longlong *)(lVar16 + 0x20) + lVar17;
                              if (*(char *)(*(longlong *)(lVar16 + 0x20) + 0x40 + lVar17) == '\x01')
                              {
                                FUN_1403723e8(&local_418,lVar29 + 0x48,0);
                                uStack_3b8 = CONCAT44(uStack_3b8._4_4_,0x3f800000);
                                local_3b0 = 0;
                                uStack_3a8 = 0;
                                local_3a0 = 0;
                                uStack_398 = 0;
                                local_390 = 0;
                                if ((local_388 != 0) || (local_380 != -0xfffff30)) {
                                  local_388 = 0;
                                  local_380 = -0xfffff30;
                                  local_378 = 0;
                                }
                                local_370 = 0x3f800000;
                                local_348 = 0;
                                plStack_340 = (longlong *)0x0;
                                local_4b8 = local_4b8 & 0xffffff00;
                                local_4c0 = local_4c0 & 0xffffff00;
                                local_4b0 = local_4b0 & 0xffffffff00000000;
                                local_4c8 = 0;
                                FUN_140372ab6(&local_348,&local_418,
                                              (ulonglong)local_468 & 0xffffffff,local_188);
                                iVar24 = (int)plStack_340;
                                iVar12 = 3;
                                if (1 < (int)plStack_340) {
                                  FUN_140368c94(local_348,&local_268,local_188,0);
                                  FUN_140a6a9d4(&local_158,&local_268);
                                  FUN_140368b56(&local_268);
                                  iVar12 = 0;
                                }
                                FUN_14036924e(local_348);
                                if (local_348 != 0) {
                                  FUN_1400020a8();
                                }
                                if (local_358 != 0) {
                                  FUN_1400020a8();
                                }
                                if (local_368 != 0) {
                                  FUN_1400020a8();
                                }
                                if (iVar24 < 2) goto LAB_14088a500;
                                goto LAB_14088a047;
                              }
                              bVar38 = false;
                              iVar12 = 3;
                              if ((((*(longlong *)(lVar29 + 0x10) == 0) ||
                                   (0xfffffffd < *(int *)(lVar29 + 0x18) - 1U)) ||
                                  (*(longlong *)(lVar29 + 0x28) == 0)) ||
                                 (0xfffffffd < *(int *)(lVar29 + 0x30) - 1U)) goto LAB_14088a1c5;
                              lVar17 = FUN_1488dc956(lVar29 + 0x28);
                              plStack_410 = (longlong *)FUN_1488dc8d8(lVar29 + 0x10);
                              local_418 = CONCAT44(local_418._4_4_,*(undefined4 *)(lVar29 + 4));
                              local_3f0 = (void *)0x0;
                              uStack_3e8 = 0;
                              local_400 = (void *)0x0;
                              uStack_3f8 = 0;
                              local_408 = lVar17;
                              FUN_140265f12();
                              local_3d8 = &DAT_14cb83310;
                              lStack_3d0 = 0;
                              local_3c8 = 0;
                              local_3e0 = &PTR_FUN_14b1828b0;
                              local_3c0 = (void *)0x0;
                              uStack_3b8 = 0;
                              FUN_140368c94(&local_418,&local_268,local_188,0);
                              FUN_140a6a9d4(&local_158);
                              FUN_140368b56(&local_268);
                              if (local_3c0 != (void *)0x0) {
                                FUN_1400020a8();
                              }
                              iVar12 = (int)(local_3c8 >> 0x20);
joined_r0x000140889d18:
                              local_3c8 = local_3c8 & 0xffffffff00000000;
                              local_3e0 = (undefined **)&DAT_14a171d50;
                              if (iVar12 != 0) {
                                local_3e0 = (undefined **)&DAT_14a171d50;
                                FUN_140115c12(&lStack_3d0);
                              }
                              local_3d8 = (undefined *)0x0;
                              if (lStack_3d0 != 0) {
                                FUN_1400020a8();
                              }
                              if (local_3f0 != (void *)0x0) {
                                FUN_1400020a8();
                              }
                              if (local_400 != (void *)0x0) {
                                FUN_1400020a8();
                              }
                              goto LAB_14088a047;
                            }
                          }
                          local_428 = 0;
                          uStack_420 = 0;
                          local_4b8 = local_4b8 & 0xffffff00;
                          local_4c0 = local_4c0 & 0xffffff00;
                          local_4b0 = local_4b0 & 0xffffffff00000000;
                          local_4c8 = 0;
                          FUN_140372ab6(&local_428,&local_338,uVar14,local_188);
                          iVar24 = (int)uStack_420;
                          if ((int)uStack_420 < 1) {
                            iVar12 = 3;
                          }
                          else {
                            iVar12 = 0;
                            FUN_140368c94(local_428,&local_268,local_188,0);
                            FUN_140a6a9d4(&local_158,&local_268);
                            FUN_140368b56(&local_268);
                            if ((*(longlong *)(local_470 + 10000) != 0) &&
                               (*(char *)(*(longlong *)(local_470 + 10000) + 0x518) == '\x01')) {
                              local_208 = 0;
                              local_200 = 0x8000000000;
                              uStack_1f8 = 0xffffffff;
                              local_268 = (code *)0x0;
                              uStack_260 = (uint *)0x0;
                              local_258 = 0;
                              uStack_250 = 0;
                              local_248 = 0;
                              uStack_240 = 0;
                              local_238 = 0;
                              uStack_230 = 0;
                              local_228 = 0;
                              uStack_220 = 0;
                              local_1e8 = 0;
                              local_1e0 = 0;
                              local_1d8 = 0;
                              uStack_1d0 = 0;
                              local_1c8 = 0;
                              uStack_1c0 = 0;
                              local_1b8 = 0;
                              local_1b0 = 0xf;
                              local_1a8 = 1;
                              local_1a4 = 0;
                              uStack_19c = 0;
                              uVar34 = puVar37[0xc];
                              if (uVar34 == 0xffffffff) {
LAB_140889fa2:
                                puVar37[0xc] = puVar37[4];
                              }
                              else if ((-1 < (int)uVar34) && ((int)uVar34 < (int)puVar37[4])) {
                                FUN_14088c870(&local_268);
                                if (local_268 == (code *)0x0) goto LAB_140889fa2;
                                if ((longlong)(int)uStack_250 != 0) {
                                  lVar29 = 0;
                                  do {
                                    if (*(longlong *)(local_258 + lVar29) == 0) goto LAB_140889fa2;
                                    lVar29 = lVar29 + 8;
                                  } while ((longlong)(int)uStack_250 * 8 != lVar29);
                                }
                                FUN_140c65c56(&local_158,&local_418);
                                FUN_140c65c56(&local_268,&local_348);
                                bVar28 = 0;
                                if ((local_418 != 0) && (bVar28 = 0, local_348 != 0)) {
                                  lVar29 = FUN_14087dee0(&local_158);
                                  lVar17 = FUN_14087dee0(&local_268);
                                  if ((lVar29 == 0) || (lVar17 == 0)) {
LAB_14088a516:
                                    iVar12 = *(int *)(local_348 + 0x38);
                                    iVar32 = *(int *)(local_418 + 0x38);
                                    bVar39 = SBORROW4(iVar32,iVar12);
                                    bVar38 = iVar32 - iVar12 < 0;
                                    if (iVar32 == iVar12) {
                                      iVar12 = *(int *)(local_348 + 0x40);
                                      iVar32 = *(int *)(local_418 + 0x40);
                                      bVar39 = SBORROW4(iVar32,iVar12);
                                      bVar38 = iVar32 - iVar12 < 0;
                                      if (iVar32 == iVar12) {
                                        bVar28 = 0;
                                        goto LAB_140889f6d;
                                      }
                                    }
                                  }
                                  else {
                                    iVar12 = *(int *)(lVar17 + 0x140);
                                    iVar32 = *(int *)(lVar29 + 0x140);
                                    bVar39 = SBORROW4(iVar32,iVar12);
                                    bVar38 = iVar32 - iVar12 < 0;
                                    if (iVar32 == iVar12) goto LAB_14088a516;
                                  }
                                  bVar28 = -(bVar39 != bVar38) | 1;
                                }
LAB_140889f6d:
                                plVar33 = plStack_340;
                                if (plStack_340 != (longlong *)0x0) {
                                  LOCK();
                                  plVar22 = plStack_340 + 1;
                                  *(int *)plVar22 = (int)*plVar22 + -1;
                                  UNLOCK();
                                  if ((int)*plVar22 == 0) {
                                    (**(code **)*plStack_340)(plStack_340);
                                    LOCK();
                                    piVar1 = (int *)((longlong)plVar33 + 0xc);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      (**(code **)(*plVar33 + 0x10))(plVar33);
                                    }
                                  }
                                }
                                plVar33 = plStack_410;
                                if (plStack_410 != (longlong *)0x0) {
                                  LOCK();
                                  plVar22 = plStack_410 + 1;
                                  *(int *)plVar22 = (int)*plVar22 + -1;
                                  UNLOCK();
                                  if ((int)*plVar22 == 0) {
                                    (**(code **)*plStack_410)(plStack_410);
                                    LOCK();
                                    piVar1 = (int *)((longlong)plVar33 + 0xc);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      (**(code **)(*plVar33 + 0x10))(plVar33);
                                    }
                                  }
                                }
                                if ('\0' < (char)bVar28) goto LAB_140889fa2;
                              }
                              FUN_140368b56(&local_268);
                              iVar12 = 0;
                            }
                          }
                          FUN_14036924e(local_428);
                          if (local_428 != 0) {
                            FUN_1400020a8();
                          }
                          if (0 < iVar24) goto LAB_14088a047;
LAB_14088a500:
                          bVar38 = false;
                        }
LAB_14088a1c5:
                        FUN_140368b56(&local_158);
                        puVar19 = local_478;
                      }
                    }
                  }
                  lVar29 = DAT_14c9a3da0;
                  if ((longlong)local_160 != 0) {
                    local_468 = (uint *)CONCAT44(local_468._4_4_,iVar12);
                    lVar23 = (longlong)local_160 + -1;
                    lVar17 = lVar23 * 0x10;
                    local_478 = puVar19;
                    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
                    if (*(longlong *)(lVar29 + lVar17) != 0) {
                      FUN_1400020a8();
                    }
                    lVar29 = DAT_14c9a3da0;
                    iVar12 = (int)lVar23;
                    if (DAT_14c9a3dd4 != 0) {
                      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
                    }
                    *(undefined4 *)(lVar29 + lVar17) = 0xffffffff;
                    iVar24 = -1;
                    if (0 < DAT_14c9a3dd4) {
                      iVar24 = DAT_14c9a3dd0;
                    }
                    *(int *)(lVar29 + 4 + lVar17) = iVar24;
                    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                    puVar18 = DAT_14c9a3dc0;
                    if (DAT_14c9a3dc0 == (undefined *)0x0) {
                      puVar18 = &DAT_14c9a3db0;
                    }
                    iVar24 = iVar12 + 0x1f;
                    if (-1 < iVar12) {
                      iVar24 = iVar12;
                    }
                    bVar28 = (byte)lVar23 & 0x1f;
                    DAT_14c9a3dd0 = iVar12;
                    *(uint *)(puVar18 + (longlong)(iVar24 >> 5) * 4) =
                         *(uint *)(puVar18 + (longlong)(iVar24 >> 5) * 4) &
                         (-2 << bVar28 | 0xfffffffeU >> 0x20 - bVar28);
                    local_160 = 0;
                    puVar19 = local_478;
                    iVar12 = (int)local_468;
                  }
                  plVar33 = local_460;
                  if (((char)local_188[0] == '\x03') && (local_178 != (longlong *)0x0)) {
                    LOCK();
                    piVar1 = (int *)((longlong)local_178 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_178 + 0x10))();
                    }
                  }
                  if ((iVar12 != 3) && (iVar12 != 0)) break;
                }
                puVar37 = puVar37 + 0xe;
              } while (puVar37 != puVar19);
            }
            if (local_278 != 0) {
              FUN_1400020a8();
            }
            if (local_288 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      uVar34 = *(uint *)(local_470 + 0xc);
      if ((int)uVar34 < DAT_14c9647dc) {
        lVar30 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8);
      }
      else {
        lVar30 = 0;
      }
      uVar26 = *(uint *)(lVar30 + 0x10);
      if (*(uint *)(lVar30 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        uVar27 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar27);
        }
        LOCK();
        uVar26 = *(uint *)(lVar30 + 0x10);
        bVar38 = uVar26 == 0;
        if (bVar38) {
          *(uint *)(lVar30 + 0x10) = uVar27;
          uVar26 = 0;
        }
        UNLOCK();
        if (bVar38) {
          uVar26 = uVar27;
        }
      }
      local_158 = (code *)CONCAT44(uVar26,uVar34);
      iVar12 = FUN_14088b25a(plVar6,uVar34 ^ uVar26);
      lVar17 = local_470;
      if (iVar12 != -1) {
        uVar34 = *(uint *)(local_470 + 0xc);
        if ((int)uVar34 < DAT_14c9647dc) {
          lVar30 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8);
        }
        else {
          lVar30 = 0;
        }
        uVar26 = *(uint *)(lVar30 + 0x10);
        if (*(uint *)(lVar30 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          uVar27 = DAT_14c964868 + 1;
          bVar38 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar38) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar27);
          }
          LOCK();
          uVar26 = *(uint *)(lVar30 + 0x10);
          bVar38 = uVar26 == 0;
          if (bVar38) {
            *(uint *)(lVar30 + 0x10) = uVar27;
            uVar26 = 0;
          }
          UNLOCK();
          if (bVar38) {
            uVar26 = uVar27;
          }
        }
        local_158 = (code *)CONCAT44(uVar26,uVar34);
        iVar12 = FUN_14088b25a(plVar6,uVar34 ^ uVar26);
        if (iVar12 == -1) {
          lVar30 = 0;
        }
        else {
          lVar30 = (longlong)iVar12 * 0x20 + *plVar6;
        }
        iVar12 = *(int *)(lVar30 + 0x10);
        if (0 < (longlong)iVar12) {
          lVar16 = local_470 + 11000;
          uVar15 = (longlong)iVar12;
          do {
            uVar36 = uVar15 - 1;
            lVar29 = *(longlong *)(lVar30 + 8);
            iVar12 = *(int *)(lVar29 + 4 + uVar36 * 0x38);
            if (iVar12 == 0) {
LAB_1408883ce:
              FUN_14088ba4c((longlong *)(lVar30 + 8),uVar36 & 0xffffffff);
            }
            else {
              puVar37 = (uint *)(lVar29 + uVar36 * 0x38);
              uVar34 = *puVar37;
              if (((((int)uVar34 < 0) || (DAT_14c9647dc <= (int)uVar34)) ||
                  (lVar29 = (ulonglong)((uVar34 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8),
                  lVar29 == 0)) ||
                 ((*(int *)(lVar29 + 0x10) != iVar12 || ((*(uint *)(lVar29 + 8) & 0x10200000) != 0))
                 )) goto LAB_1408883ce;
              iVar12 = FUN_14088bb64(local_470);
              lVar29 = local_470;
              if (iVar12 <= (int)puVar37[4]) {
                if ((puVar37[1] == 0) || (uVar34 = *puVar37, (int)uVar34 < 0)) {
LAB_14088aeb7:
                  local_478 = (uint *)0x0;
                }
                else {
                  local_478 = (uint *)0x0;
                  if ((int)uVar34 < DAT_14c9647dc) {
                    puVar21 = (undefined8 *)
                              ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8));
                    if ((((puVar21 != (undefined8 *)0x0) && (*(uint *)(puVar21 + 2) == puVar37[1]))
                        && ((*(uint *)(puVar21 + 1) & 0x10200000) == 0)) &&
                       ((puVar19 = (uint *)*puVar21, puVar19 != (uint *)0x0 &&
                        (*(longlong *)(local_470 + 10000) != 0)))) {
                      lVar17 = *(longlong *)(local_470 + 0x26b0);
                      if (lVar17 == 0) {
                        local_468 = puVar19;
                        uVar25 = FUN_1457512de();
                        lVar17 = FUN_14477b664(uVar25);
                        *(longlong *)(lVar29 + 0x26b0) = lVar17;
                        puVar19 = local_468;
                      }
                      if (*(longlong *)(lVar29 + 0x26b8) == 0) {
                        local_478 = (uint *)0x0;
                        local_468 = puVar19;
                        if ((lVar17 == 0) || (*(longlong *)(local_470 + 0x26a8) == 0))
                        goto LAB_14088920c;
                        local_478 = *(uint **)(lVar17 + 0xb8);
                        if ((local_478 == (uint *)0x0) ||
                           (cVar11 = (**(code **)(*(longlong *)local_478 + 0x108))(),
                           lVar29 = local_470, cVar11 == '\0')) {
                          *(undefined8 *)(local_470 + 0x26b8) = 0;
                        }
                        else {
                          local_458 = (longlong *)(local_470 + 0x26a8);
                          uVar25 = (**(code **)(*(longlong *)local_478 + 0x110))();
                          lVar17 = FUN_144aff482(uVar25,local_458);
                          *(longlong *)(lVar29 + 0x26b8) = lVar17;
                          puVar19 = local_468;
                          if (lVar17 != 0) goto LAB_140888f4d;
                        }
                      }
                      else {
LAB_140888f4d:
                        if (*(char *)(*(longlong *)(lVar29 + 10000) + 0x518) == '\x01') {
                          uVar34 = puVar37[0xc];
                          if ((longlong)(int)uVar34 != -1) {
                            if (uVar34 != (uint)((longlong)(int)puVar37[4] + -1)) {
                              lVar29 = *(longlong *)(puVar37 + 2);
                              lVar23 = ((longlong)(int)puVar37[4] + -1) * 0x10;
                              lVar17 = (longlong)(int)uVar34 * 0x10;
                              puVar21 = (undefined8 *)(lVar29 + lVar17);
                              uVar25 = *puVar21;
                              uVar9 = puVar21[1];
                              puVar21 = (undefined8 *)(lVar29 + lVar23);
                              uVar10 = puVar21[1];
                              puVar3 = (undefined8 *)(lVar29 + lVar17);
                              *puVar3 = *puVar21;
                              puVar3[1] = uVar10;
                              local_158._0_4_ = (undefined4)uVar25;
                              local_158._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
                              uStack_150._0_4_ = (int)uVar9;
                              uStack_150._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
                              puVar4 = (undefined4 *)(lVar29 + lVar23);
                              *puVar4 = (undefined4)local_158;
                              puVar4[1] = local_158._4_4_;
                              puVar4[2] = (int)uStack_150;
                              puVar4[3] = uStack_150._4_4_;
                              uVar34 = puVar37[0xc];
                            }
                            uVar26 = puVar37[8];
                            if (uVar34 != uVar26 - 1) {
                              lVar29 = *(longlong *)(puVar37 + 6);
                              uVar14 = *(undefined4 *)(lVar29 + (longlong)(int)uVar34 * 4);
                              *(undefined4 *)(lVar29 + (longlong)(int)uVar34 * 4) =
                                   *(undefined4 *)(lVar29 + -4 + (longlong)(int)uVar26 * 4);
                              *(undefined4 *)(lVar29 + -4 + (longlong)(int)uVar26 * 4) = uVar14;
                            }
                            local_f8 = 0;
                            local_f0 = 0x8000000000;
                            uStack_e8 = 0xffffffff;
                            local_158 = (code *)0x0;
                            uStack_150 = (code *)0x0;
                            local_148 = (uint *)0x0;
                            uStack_140 = 0;
                            local_138 = 0;
                            uStack_130 = 0;
                            local_128 = 0;
                            uStack_120 = 0;
                            local_118 = 0;
                            uStack_110 = 0;
                            local_d8 = 0;
                            local_d0 = 0;
                            local_c8 = 0;
                            uStack_c0 = 0;
                            local_b8 = 0;
                            uStack_b0 = 0;
                            local_a8 = 0;
                            local_a0 = 0xf;
                            local_98 = 1;
                            local_94 = 0;
                            uStack_8c = 0;
                            local_468 = puVar19;
                            FUN_14088c870(&local_158);
                            if (local_158 == (code *)0x0) {
                              local_478 = (uint *)0x0;
                            }
                            else {
                              if ((longlong)(int)(uint)uStack_140 != 0) {
                                lVar29 = 0;
                                do {
                                  if (*(longlong *)((longlong)local_148 + lVar29) == 0) {
                                    local_478 = (uint *)0x0;
                                    goto LAB_140889204;
                                  }
                                  lVar29 = lVar29 + 8;
                                } while ((longlong)(int)(uint)uStack_140 * 8 != lVar29);
                              }
                              local_458 = local_460 + 0x2a;
                              local_268 = (code *)0x0;
                              uStack_260 = (uint *)0x0;
                              FUN_140c65c56(&local_158,&local_338);
                              puVar21 = &local_158;
                              bVar28 = FUN_140baf362(&local_158,&local_268,0);
                              lVar29 = local_470;
                              bVar28 = local_338 != (code *)0x0 & bVar28;
                              local_478 = (uint *)CONCAT71((int7)((ulonglong)puVar21 >> 8),bVar28);
                              if (bVar28 == 1) {
                                local_438 = FUN_14088e1d6(local_470,&local_158,0);
                                local_418 = 0;
                                FUN_14485c47a(&local_418,lVar29);
                                local_458 = (longlong *)
                                            FUN_14575181a(local_458,
                                                          (uint)((ulonglong)local_418 >> 0x20) ^
                                                          (uint)local_418,&local_418);
                                local_188[0] = 0;
                                FUN_14485c47a(local_188,local_468);
                                plVar33 = (longlong *)
                                          FUN_1457516dc(local_458,
                                                        (uint)(local_188[0] >> 0x20) ^
                                                        (uint)local_188[0],local_188);
                                lVar29 = (local_438 << 0x20) + 1;
                              }
                              else {
                                local_418 = 0;
                                FUN_14485c47a(&local_418,local_470);
                                local_458 = (longlong *)
                                            FUN_14575181a(local_458,
                                                          (uint)((ulonglong)local_418 >> 0x20) ^
                                                          (uint)local_418,&local_418);
                                local_188[0] = 0;
                                FUN_14485c47a(local_188,local_468);
                                plVar33 = (longlong *)
                                          FUN_1457516dc(local_458,
                                                        (uint)(local_188[0] >> 0x20) ^
                                                        (uint)local_188[0],local_188);
                                lVar29 = 0;
                              }
                              plVar22 = local_330;
                              *plVar33 = lVar29;
                              if (local_330 != (longlong *)0x0) {
                                LOCK();
                                plVar33 = local_330 + 1;
                                *(int *)plVar33 = (int)*plVar33 + -1;
                                UNLOCK();
                                if ((int)*plVar33 == 0) {
                                  (**(code **)*local_330)(local_330);
                                  LOCK();
                                  piVar1 = (int *)((longlong)plVar22 + 0xc);
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (*piVar1 == 0) {
                                    (**(code **)(*plVar22 + 0x10))(plVar22);
                                  }
                                }
                              }
                              if (local_268 != (code *)0x0) {
                                FUN_1400020a8();
                              }
                            }
LAB_140889204:
                            FUN_140368b56(&local_158);
                            goto LAB_14088920c;
                          }
                        }
                      }
                    }
                    goto LAB_14088aeb7;
                  }
                }
LAB_14088920c:
                lVar29 = local_470;
                FUN_1411b8283(*(undefined8 *)(local_470 + 11000),*(undefined4 *)(local_470 + 0x2b00)
                             );
                *(undefined4 *)(lVar29 + 0x2b00) = 0;
                if (*(int *)(lVar29 + 0x2b04) != 0) {
                  FUN_148f113aa(lVar16);
                }
                if (puVar37[1] == 0) {
                  uVar25 = 0;
                }
                else {
                  uVar34 = *puVar37;
                  if ((int)uVar34 < 0) {
LAB_14088a2dc:
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = 0;
                    if ((int)uVar34 < DAT_14c9647dc) {
                      puVar21 = (undefined8 *)
                                ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8));
                      if (((puVar21 == (undefined8 *)0x0) || (*(uint *)(puVar21 + 2) != puVar37[1]))
                         || ((*(uint *)(puVar21 + 1) & 0x10200000) != 0)) goto LAB_14088a2dc;
                      uVar25 = *puVar21;
                    }
                  }
                }
                local_4c0 = CONCAT31(local_4c0._1_3_,(char)local_478);
                local_4c8 = local_4c8 & 0xffffffff00000000;
                FUN_14088ec36(local_470,uVar25,puVar37 + 2,puVar37 + 6);
                goto LAB_1408883ce;
              }
            }
            bVar38 = 1 < uVar15;
            uVar15 = uVar36;
          } while (bVar38);
          iVar12 = *(int *)(lVar30 + 0x10);
        }
        plVar33 = local_460;
        lVar17 = local_470;
        if (iVar12 == 0) {
          local_158 = (code *)0x0;
          FUN_14485c47a(&local_158,local_470);
          lVar17 = local_470;
          FUN_14088c474(plVar6,local_158);
          FUN_14088b45e(plVar33,lVar17);
        }
      }
    }
  }
  FUN_14088b45e(plVar33,lVar17);
LAB_140887e72:
  if ((local_80 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14088b25a FUN_14088b25a body=180 status=ok
// SIG undefined FUN_14088b25a(void)

int FUN_14088b25a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14088b310(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14088b2e8;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14088b2e8:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088b310 FUN_14088b310 body=104 status=ok
// SIG undefined FUN_14088b310(void)

ulonglong FUN_14088b310(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 14088b378 FUN_14088b378 body=228 status=ok
// SIG undefined FUN_14088b378(void)

longlong FUN_14088b378(void)

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
  if (DAT_14cad0610 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b576a;
    local_38 = &LAB_1479bf2c4;
    local_40 = FUN_1417bba9e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/Engine",L"BoxComponent",&DAT_14cad0610,FUN_1463b5742);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad0610;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088b45e FUN_14088b45e body=836 status=ok
// SIG undefined FUN_14088b45e(void)

void FUN_14088b45e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x140) == 0) {
    bVar2 = 1;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x138);
    lVar9 = (longlong)*(int *)(param_1 + 0x140) * 8;
    do {
      lVar9 = lVar9 + -8;
      bVar2 = FUN_14088b7a4(lVar8);
      if (bVar2 != 0) break;
      lVar8 = lVar8 + 8;
    } while (lVar9 != 0);
    bVar2 = bVar2 ^ 1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
    uVar10 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar10 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar10 = *(uint *)(lVar9 + 0x10);
      bVar11 = uVar10 == 0;
      if (bVar11) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar10 = uVar7;
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x138);
  local_48 = (uint *)CONCAT44(uVar10,uVar5);
  iVar3 = FUN_14088b25a(param_1 + 0x1a0,uVar10 ^ uVar5);
  bVar11 = true;
  if ((((iVar3 != -1) || (**(longlong **)(param_2 + 0x2698) != 0)) ||
      (**(longlong **)(param_2 + 0x2688) != 0)) ||
     (bVar11 = **(longlong **)(param_2 + 0x2678) != 0, bVar2 != 0 || bVar11)) {
    if ((bVar2 & bVar11) == 1) {
      if (param_2 == 0) {
        uVar10 = 0;
        uVar4 = 0;
      }
      else {
        uVar10 = *(uint *)(param_2 + 0xc);
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar4 = (ulonglong)*(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar5 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar5);
          }
          LOCK();
          uVar7 = *(uint *)(lVar9 + 0x10);
          bVar11 = uVar7 == 0;
          if (bVar11) {
            *(uint *)(lVar9 + 0x10) = uVar5;
            uVar7 = 0;
          }
          UNLOCK();
          if (bVar11) {
            uVar7 = uVar5;
          }
          uVar4 = (ulonglong)uVar7;
        }
      }
      iVar3 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar3 + 1U) {
        FUN_1457526ae(plVar1,iVar3);
      }
      *(ulonglong *)(*plVar1 + (longlong)iVar3 * 8) = (ulonglong)uVar10 | uVar4 << 0x20;
    }
  }
  else {
    local_4c = 0;
    if (param_2 == 0) {
      local_50 = 0;
      iVar3 = 0;
    }
    else {
      local_50 = *(uint *)(param_2 + 0xc);
      if ((int)local_50 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar3 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar3 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar3 = iVar6;
        }
      }
    }
    local_48 = &local_50;
    local_4c = iVar3;
    FUN_1411b73de(plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14088b7a4 FUN_14088b7a4 body=325 status=ok
// SIG undefined FUN_14088b7a4(void)

ulonglong FUN_14088b7a4(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14088b8ea FUN_14088b8ea body=353 status=ok
// SIG undefined FUN_14088b8ea(void)

void FUN_14088b8ea(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14088b96f;
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
LAB_14088b96f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14088ba4c FUN_14088ba4c body=118 status=ok
// SIG undefined FUN_14088ba4c(void)

void FUN_14088ba4c(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x38);
  if (*(longlong *)(*param_1 + 0x18 + (longlong)(int)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)((longlong)_Dst + 8),*(undefined4 *)((longlong)_Dst + 0x10));
  if (*(longlong *)((longlong)_Dst + 8) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar1) * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14088cb54(param_1);
  return;
}



// FUNCTION 14088bac2 FUN_14088bac2 body=160 status=ok
// SIG undefined FUN_14088bac2(void)

void FUN_14088bac2(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_14088c3be();
    if (iVar2 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 0x10) = *param_3;
      FUN_148cf9a3c(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_14088baf0;
    }
  }
  uVar1 = 0;
LAB_14088baf0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088bb64 FUN_14088bb64 body=1027 status=ok
// SIG undefined FUN_14088bb64(void)

int FUN_14088bb64(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  char local_58 [16];
  longlong *local_48;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x2b30) == '\x01') {
    lVar7 = FUN_14088c018();
    iVar6 = *(int *)(lVar7 + 0x5c) * *(int *)(lVar7 + 0x58);
    goto LAB_14088bc33;
  }
  lVar7 = *(longlong *)(param_1 + 0x26b0);
  if (lVar7 == 0) {
    uVar8 = FUN_1457512de();
    lVar7 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x26b0) = lVar7;
  }
  plVar2 = (longlong *)(param_1 + 0x26a8);
  lVar12 = *(longlong *)(param_1 + 0x26b8);
  if (lVar12 == 0) {
    iVar6 = 0;
    if ((lVar7 == 0) || (*plVar2 == 0)) goto LAB_14088bc33;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar5 != '\0') {
        uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar12 = FUN_144aff482(uVar8,plVar2);
        *(longlong *)(param_1 + 0x26b8) = lVar12;
        if (lVar12 == 0) goto LAB_14088bc33;
        lVar7 = *(longlong *)(param_1 + 0x26b0);
        goto LAB_14088bbb3;
      }
    }
    *(undefined8 *)(param_1 + 0x26b8) = 0;
    goto LAB_14088bc33;
  }
LAB_14088bbb3:
  if (lVar7 == 0) {
    uVar8 = FUN_1457512de();
    lVar7 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x26b0) = lVar7;
    lVar12 = *(longlong *)(param_1 + 0x26b8);
    if (((lVar12 == 0) && (lVar12 = 0, lVar7 != 0)) && (*plVar2 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14088bf56:
        lVar12 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar3 + 0x108))();
        if (cVar5 == '\0') goto LAB_14088bf56;
        uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar12 = FUN_144aff482(uVar8,plVar2);
      }
      *(longlong *)(param_1 + 0x26b8) = lVar12;
    }
  }
  if (*(char *)(lVar12 + 0x18) == '\x01') {
    lVar7 = *(longlong *)(param_1 + 0x26b0);
    if (lVar7 == 0) {
      uVar8 = FUN_1457512de();
      lVar7 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x26b0) = lVar7;
      lVar12 = *(longlong *)(param_1 + 0x26b8);
    }
    if (lVar12 == 0) {
      *(undefined8 *)(param_1 + 0x26b8) = 0;
      lVar12 = 0;
      if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x26a8) != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_14088bf64:
          lVar12 = 0;
        }
        else {
          cVar5 = (**(code **)(*plVar3 + 0x108))();
          if (cVar5 == '\0') goto LAB_14088bf64;
          uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar12 = FUN_144aff482(uVar8,plVar2);
        }
        *(longlong *)(param_1 + 0x26b8) = lVar12;
      }
    }
    iVar6 = *(int *)(lVar12 + 0x28);
    goto LAB_14088bc33;
  }
  local_58[0] = '\0';
  local_30 = 0;
  lVar7 = *(longlong *)(param_1 + 0x26b0);
  if (lVar7 == 0) {
    uVar8 = FUN_1457512de();
    lVar7 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x26b0) = lVar7;
    lVar12 = *(longlong *)(param_1 + 0x26b8);
  }
  if (lVar12 == 0) {
    *(undefined8 *)(param_1 + 0x26b8) = 0;
    lVar12 = 0;
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x26a8) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14088bf5d:
        lVar12 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar3 + 0x108))();
        if (cVar5 == '\0') goto LAB_14088bf5d;
        uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar12 = FUN_144aff482(uVar8,plVar2);
      }
      *(longlong *)(param_1 + 0x26b8) = lVar12;
    }
  }
  iVar6 = FUN_14088bf68(lVar12 + 0x30,local_58);
  lVar7 = DAT_14c9a3da0;
  if ((longlong)local_30 != 0) {
    lVar12 = (longlong)local_30 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar7 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar7 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar7 + lVar13) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar7 + 4 + lVar13) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar9 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar9 = iVar11;
    }
    bVar4 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_30 = 0;
  }
  if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
LAB_14088bc33:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088bf68 FUN_14088bf68 body=175 status=ok
// SIG undefined FUN_14088bf68(void)

int FUN_14088bf68(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1 + 0xb8,local_40,param_2);
  iVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_40;
    if (0x18 < local_28) {
      pppuVar4 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  iVar3 = 200;
  if (iVar2 < 200) {
    iVar3 = iVar2;
  }
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088c018 FUN_14088c018 body=417 status=ok
// SIG undefined FUN_14088c018(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14088c018(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbe7218 == (longlong *)0x0) {
    _DAT_14cbe7230 = 0;
    _DAT_14cbe7240 = 0;
    DAT_14cbe7228 = 0;
    plVar2 = &DAT_14cbe7228;
    _DAT_14cbe7238 = 0xffffffff;
    _DAT_14cbe7220 = &PTR_FUN_14b5c5fd0;
    _DAT_14cbe7248 = 0;
    _DAT_14cbe7250 = 0;
    _DAT_14cbe7258 = 0;
    _DAT_14cbe7260 = 0;
    _DAT_14cbe7268 = 0;
    _DAT_14cbe7270 = 0;
    _DAT_14cbe7278 = 0x400000002;
    _DAT_14cbe7280 = 0;
    uRam000000014cbe7288 = 0;
    _DAT_14cbe7290 = 0;
    _DAT_14cbe7298 = 0x68b125c0;
    _DAT_14cbe72a0 = 0xb;
    DAT_14cbe7218 = (longlong *)&DAT_14cbe7220;
LAB_14088c048:
    plVar3 = DAT_14cbe7218;
    if (*plVar2 == 0) goto LAB_14088c14b;
    cVar1 = FUN_1449e3c20(DAT_14cbe7218);
    if (cVar1 == '\0') goto LAB_14088c062;
  }
  else {
    plVar2 = DAT_14cbe7218 + 1;
    if ((char)DAT_14cbe7218[2] == '\0') goto LAB_14088c048;
    if ((char)DAT_14cbe7218[2] == '\x02') {
      plVar2 = (longlong *)(*plVar2 + 0x30);
      goto LAB_14088c048;
    }
LAB_14088c14b:
    plVar3 = DAT_14cbe7218;
    if (DAT_14c9a17d8 == (longlong *)0x0) goto LAB_14088c062;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1446ddda2(&local_38,"def_globals_blackmarket",0);
    if (DAT_14c9a17d8 != (longlong *)0x0) {
      (**(code **)(*DAT_14c9a17d8 + 0x2a0))(DAT_14c9a17d8,plVar3,&local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_14088c062:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088c1ba FUN_14088c1ba body=40 status=ok
// SIG undefined FUN_14088c1ba(void)

void FUN_14088c1ba(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14088ebfa(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 14088c1e2 FUN_14088c1e2 body=476 status=ok
// SIG undefined FUN_14088c1e2(void)

int * FUN_14088c1e2(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar11);
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



// FUNCTION 14088c3be FUN_14088c3be body=180 status=ok
// SIG undefined FUN_14088c3be(void)

int FUN_14088c3be(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_1400ff418(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14088c44c;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14088c44c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088c474 FUN_14088c474 body=266 status=ok
// SIG undefined FUN_14088c474(void)

void FUN_14088c474(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    lVar3 = (longlong)
            *(int *)((longlong)plVar2 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (lVar3 != -1) {
      lVar4 = *param_1;
      lVar3 = lVar3 * 0x20;
      local_40 = *(undefined8 *)(lVar4 + lVar3);
      local_48 = param_2;
      cVar1 = FUN_14088b310();
      if (cVar1 == '\0') {
        lVar4 = lVar4 + lVar3;
        do {
          if ((longlong)*(int *)(lVar4 + 0x18) == -1) goto LAB_14088c56b;
          lVar3 = (longlong)*(int *)(lVar4 + 0x18) * 0x20;
          lVar4 = *param_1 + lVar3;
          local_40 = *(undefined8 *)(*param_1 + lVar3);
          local_48 = param_2;
          cVar1 = FUN_14088b310(&local_40,&local_48);
        } while (cVar1 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_14088c56b:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14088c596 FUN_14088c596 body=181 status=ok
// SIG undefined FUN_14088c596(void)

bool FUN_14088c596(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    if ((longlong *)(lVar1 + 8) != param_2) {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0x14);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined8 *)((longlong)param_2 + 0x14) = *(undefined8 *)(lVar1 + 0x1c);
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(lVar1 + 0x24);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(longlong *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 14088c64c FUN_14088c64c body=55 status=ok
// SIG undefined FUN_14088c64c(void)

ulonglong FUN_14088c64c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14088c684 FUN_14088c684 body=184 status=ok
// SIG undefined FUN_14088c684(void)

int FUN_14088c684(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x60);
        cVar1 = FUN_14088b310(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14088c716;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x58 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14088c716:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088c73e FUN_14088c73e body=186 status=ok
// SIG undefined FUN_14088c73e(void)

int FUN_14088c73e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14088c7fa(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14088c7be;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14088c7be:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088c7fa FUN_14088c7fa body=55 status=ok
// SIG undefined FUN_14088c7fa(void)

ulonglong FUN_14088c7fa(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14088c831 FUN_14088c831 body=61 status=ok
// SIG undefined FUN_14088c831(void)

void FUN_14088c831(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088c870 FUN_14088c870 body=708 status=ok
// SIG undefined FUN_14088c870(void)

undefined4 FUN_14088c870(undefined8 param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  size_t sVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  wchar_t *_Str;
  wchar_t *pwVar12;
  undefined1 auStack_128 [36];
  uint local_104;
  char local_100 [128];
  char *local_80;
  char *local_78;
  uint local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  if (*_Str == L'/') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  local_80 = (char *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_78 = (char *)0x0;
    local_70 = 0;
  }
  else {
    sVar7 = wcslen(_Str);
    local_104 = 0;
    local_68 = (char *)CONCAT44(local_68._4_4_,0x7fffffff);
    uVar9 = sVar7 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar10 = (int)uVar9;
      if (iVar10 < 1) {
LAB_14088c9bc:
        local_70 = local_104;
        uVar8 = local_104 + 1;
        if (uVar8 < 0x81) goto LAB_14088c9d9;
        FUN_1446efa72(&local_80,0,uVar8,1);
        local_78 = local_80;
        goto LAB_14088c9db;
      }
      wVar1 = *pwVar12;
      uVar8 = (uint)(ushort)wVar1;
      pwVar3 = pwVar12 + 1;
      uVar11 = iVar10 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          cVar5 = FUN_140024707(uVar8,&local_104,&local_68);
          if (cVar5 != '\0') goto LAB_14088c9bc;
          break;
        }
        if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
          uVar11 = iVar10 - 2;
          pwVar3 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar3;
      cVar5 = FUN_140024707(uVar8,&local_104,&local_68);
      uVar9 = (ulonglong)uVar11;
    } while (cVar5 != '\0');
    local_70 = 0xffffffff;
    uVar8 = 0;
LAB_14088c9d9:
    local_78 = (char *)0x0;
LAB_14088c9db:
    if (local_78 == (char *)0x0) {
      local_78 = local_100;
    }
    iVar10 = (int)sVar7 + 1;
    local_104 = uVar8;
    local_68 = local_78;
    do {
      if (iVar10 < 1) break;
      wVar1 = *_Str;
      uVar8 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar4 = iVar10 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          FUN_1400247af(uVar8,&local_68,&local_104);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar4 = iVar10 + -2;
        }
      }
      iVar10 = iVar4;
      _Str = pwVar12;
      cVar5 = FUN_1400247af(uVar8,&local_68,&local_104);
    } while (cVar5 != '\0');
  }
  pcVar2 = local_78;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  sVar7 = strlen(local_78);
  FUN_140cd1a74(&local_68,pcVar2,sVar7);
  uVar6 = FUN_140cd2106(param_1,&local_68);
  FUN_1401d9a90(&local_68);
  if (local_80 != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14088cb54 FUN_14088cb54 body=150 status=ok
// SIG undefined FUN_14088cb54(void)

void FUN_14088cb54(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x38)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x38,8);
      uVar3 = uVar3 / 0x38;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x38,8);
    }
  }
  return;
}



// FUNCTION 14088cbea FUN_14088cbea body=274 status=ok
// SIG undefined FUN_14088cbea(void)

void FUN_14088cbea(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xf0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14088ccfe FUN_14088ccfe body=249 status=ok
// SIG undefined FUN_14088ccfe(void)

ulonglong FUN_14088ccfe(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar4 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  local_24 = uVar4;
  if ((*param_1 != local_28) ||
     (uVar3 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1), param_1[1] != uVar4)) {
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_144729dda(&local_28);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14088cdf8 FUN_14088cdf8 body=453 status=ok
// SIG undefined FUN_14088cdf8(void)

undefined8 * FUN_14088cdf8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
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
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1f0);
    if (lVar2 != 0) {
      if (DAT_14cb5e538 == 0) {
        local_30 = &local_18;
        local_18 = &LAB_1417c5d06;
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
        lVar2 = *(longlong *)(param_1 + 0x1f0);
        if (lVar2 == 0) goto LAB_14088cf54;
      }
      if (((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          ((*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
            DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar2 + 0x1e0) != 0)))) &&
         (puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x1e0) + 0x70),
         puVar3 != (undefined8 *)0x0)) goto LAB_14088ce8a;
    }
LAB_14088cf54:
    if (((*(byte *)(param_1 + 0x152) & 0xfe) == 4) || (*(byte *)(param_1 + 0x152) == 2)) {
      puVar3 = DAT_14cb83308;
      if (DAT_14cb83308 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x2c) = 0x80;
        *(undefined4 *)(puVar3 + 6) = 0xffffffff;
        DAT_14cb83308 = puVar3;
      }
      goto LAB_14088ce8a;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_14088ce8a:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 14088cfbe FUN_14088cfbe body=805 status=ok
// SIG undefined FUN_14088cfbe(void)

undefined8 *
FUN_14088cfbe(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Dst;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  _Dst = (void *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
  *(undefined8 *)((longlong)_Dst + 0x7c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0xf;
  *(undefined1 *)((longlong)_Dst + 0xd0) = 1;
  *(undefined8 *)((longlong)_Dst + 0xd4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xdc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined8 *)((longlong)_Dst + 0x100) = 0;
  *(undefined4 *)((longlong)_Dst + 0x108) = 2;
  *param_2 = _Dst;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b412b40;
  plVar5[2] = (longlong)_Dst;
  param_2[1] = plVar5;
  if (_Dst != (void *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      *(void **)_Dst = _Dst;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(void **)_Dst = _Dst;
      if (*(longlong **)((longlong)_Dst + 8) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar2 = *(longlong **)((longlong)_Dst + 8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        *(longlong **)((longlong)_Dst + 8) = plVar5;
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar3 = *param_2;
    FUN_14088d668(param_1,local_58,lVar6,param_4);
    FUN_14088d2e4(uVar3,local_58);
    lVar6 = FUN_14001d26e(lVar6);
    if (lVar6 != 0) {
      do {
        FUN_14088d668(param_1,local_68,lVar6,param_4);
        FUN_14088d2e4(uVar3,local_68);
        lVar6 = FUN_14001d26e(lVar6);
      } while (lVar6 != 0);
    }
  }
  lVar6 = param_3[1];
  if (lVar6 != 0) {
    uVar3 = *param_2;
    FUN_14088d668(param_1,local_78,lVar6,param_4);
    FUN_14088d2e4(uVar3,local_78);
    lVar6 = FUN_140a9668e(lVar6);
    if (lVar6 != 0) {
      do {
        FUN_14088d668(param_1,local_88,lVar6,param_4);
        FUN_14088d2e4(uVar3,local_88);
        lVar6 = FUN_140a9668e(lVar6);
      } while (lVar6 != 0);
    }
  }
  lVar6 = param_3[3];
  local_b0 = param_2;
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = param_3[2];
    uVar3 = *param_2;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar7) != 0) {
        FUN_14088d668(param_1,local_98,*(longlong *)(lVar4 + lVar7),param_4);
        FUN_14088d2e4(uVar3,local_98);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  lVar6 = param_3[5];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = param_3[4];
    uVar3 = *local_b0;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar7) != 0) {
        FUN_14088d668(param_1,local_a8,*(longlong *)(lVar4 + lVar7),param_4);
        FUN_14088d2e4(uVar3,local_a8);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_b0;
}



// FUNCTION 14088d2e4 FUN_14088d2e4 body=629 status=ok
// SIG undefined FUN_14088d2e4(void)

void FUN_14088d2e4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar8 = *(int *)(param_1 + 0x1e);
  *(uint *)(param_1 + 0x1e) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0xf4) < iVar8 + 1U) {
    FUN_14088d55a(param_1 + 0x1d,iVar8);
  }
  lVar3 = param_1[0x1d];
  *(undefined8 *)(lVar3 + (longlong)iVar8 * 0x10) = *param_2;
  lVar9 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar8 * 0x10) = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *param_2;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  plVar5 = (longlong *)param_1[1];
  if (plVar5 == (longlong *)0x0) {
LAB_14088d467:
    *local_38 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_38[2] = lVar9;
    *local_38 = &PTR_FUN_14b412ad0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = FUN_14085795a;
  }
  else {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) goto LAB_14088d467;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    uVar6 = *param_1;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *local_38 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_38[2] = lVar9;
    *local_38 = &PTR_FUN_14b412ad0;
    local_38[3] = uVar6;
    local_38[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_38[5] = FUN_14085795a;
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
  FUN_140844560(uVar4,local_40,&local_38);
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14088d55a FUN_14088d55a body=269 status=ok
// SIG undefined FUN_14088d55a(void)

void FUN_14088d55a(longlong param_1,int param_2)

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



// FUNCTION 14088d668 FUN_14088d668 body=2246 status=ok
// SIG undefined FUN_14088d668(void)

longlong * FUN_14088d668(longlong *param_1,longlong *param_2,ulonglong param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  byte bVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  longlong *plVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  undefined1 auStack_a8 [32];
  longlong local_88;
  uint *local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  longlong local_60;
  ulonglong uStack_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar13 = *param_4;
  uVar10 = (uint)((ulonglong)lVar13 >> 0x10);
  uVar30 = (uint)lVar13 & 0xffff;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar28 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar28 = (longlong *)param_1[8];
    }
    iVar25 = *(int *)((longlong)plVar28 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     ((uint)lVar13 << 0x10 | uVar30) + (int)((ulonglong)lVar13 >> 0x20) +
                     (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar30 >> 4)) * 4);
    if (iVar25 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar25 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar25 * 0x60) == lVar13) {
          if (lVar2 != 0) goto LAB_14088d74a;
          break;
        }
        iVar25 = *(int *)(lVar2 + 0x58);
      } while (iVar25 != -1);
    }
  }
  local_70 = SUB84(param_4,0);
  uStack_6c = (undefined4)((ulonglong)param_4 >> 0x20);
  FUN_145751ea8(param_1,&local_4c);
  lVar2 = *param_1 + (longlong)local_4c * 0x60;
LAB_14088d74a:
  uVar8 = DAT_14cb848c0;
  plVar28 = (longlong *)(lVar2 + 8);
  if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
    uVar10 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar13 = lVar2 + 0x40;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      lVar13 = *(longlong *)(lVar2 + 0x48);
    }
    iVar25 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & (uVar10 >> 0x10 ^ uVar10))
                               * 4);
    if (iVar25 != -1) {
      do {
        lVar13 = *plVar28 + (longlong)iVar25 * 0x20;
        if (*(ulonglong *)(*plVar28 + (longlong)iVar25 * 0x20) == param_3) {
          plVar17 = (longlong *)(lVar13 + 8);
          if ((((plVar17 != (longlong *)0x0 && lVar13 != 0) && (*plVar17 != 0)) &&
              (lVar13 = *(longlong *)(lVar13 + 0x10), lVar13 != 0)) && (0 < *(int *)(lVar13 + 8))) {
            *param_2 = 0;
            param_2[1] = lVar13;
            iVar25 = *(int *)(lVar13 + 8);
            goto LAB_14088d8a9;
          }
          break;
        }
        iVar25 = *(int *)(lVar13 + 0x18);
      } while (iVar25 != -1);
    }
  }
  uVar14 = FUN_14050fd64();
  local_88 = *param_4;
  FUN_14088df30(uVar14,param_2,param_3,0);
  lVar13 = *param_2;
  if (lVar13 == 0) goto LAB_14088db16;
  if (*(int *)(lVar13 + 0x6c) == 0) {
    cVar9 = FUN_14088e060(uVar8,lVar13,param_3,param_4);
    lVar13 = *param_2;
    if (cVar9 == '\0') {
      local_70 = 6;
      uStack_6c = (undefined4)*param_4;
      uStack_68 = (undefined4)((ulonglong)*param_4 >> 0x20);
      local_60 = 0;
      uStack_58 = 0;
      FUN_142b20ed2(lVar13,param_3,&local_70);
      FUN_143dae8d2(local_60,uStack_58 & 0xffffffff);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar13 = *param_2;
    }
  }
  lVar32 = param_2[1];
  if (lVar32 != 0) {
    LOCK();
    *(int *)(lVar32 + 0xc) = *(int *)(lVar32 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = param_2;
  if (*(int *)(lVar2 + 0x3c) == 0) {
    iVar25 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = iVar25 + 1;
    if (*(int *)(lVar2 + 0x14) == iVar25) {
      FUN_1447711aa(plVar28,iVar25);
    }
    iVar31 = *(int *)(lVar2 + 0x30);
    if (iVar31 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = iVar31 + 0x1e;
      if (-1 < iVar31 + -1) {
        iVar20 = iVar31 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    lVar29 = lVar2 + 0x18;
    iVar22 = iVar31 + 1;
    iVar27 = iVar31 + 0x1f;
    if (-1 < iVar31) {
      iVar27 = iVar31;
    }
    if (iVar27 >> 5 == iVar20) {
      *(int *)(lVar2 + 0x30) = iVar22;
    }
    else {
      if (*(int *)(lVar2 + 0x34) <= iVar31) {
        if (iVar31 + 0x20U < 0xa0) {
          iVar22 = 0x80;
          iVar20 = iVar31;
        }
        else {
          uVar10 = iVar31 + 0x20U >> 5;
          local_80 = (uint *)(ulonglong)uVar10;
          if (*(int *)(lVar2 + 0x34) + 0x1fU < 0xa0) {
            uVar30 = 4;
            if (4 < uVar10) {
              uVar30 = uVar10;
            }
          }
          else {
            uVar30 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar18 = FUN_144a3809e(uVar30 << 2,0);
          iVar20 = (int)(uVar18 >> 2);
          iVar22 = -0x20;
          if ((int)local_80 <= iVar20) {
            iVar22 = iVar20 << 5;
          }
          iVar20 = *(int *)(lVar2 + 0x30);
        }
        *(int *)(lVar2 + 0x34) = iVar22;
        FUN_1446efbd8(lVar29,iVar20);
        iVar22 = *(int *)(lVar2 + 0x30) + 1;
      }
      iVar20 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar20 = iVar22;
      }
      *(int *)(lVar2 + 0x30) = iVar22;
      if (iVar22 % 0x20 != 0) {
        lVar15 = *(longlong *)(lVar2 + 0x28);
        if (*(longlong *)(lVar2 + 0x28) == 0) {
          lVar15 = lVar29;
        }
        bVar16 = -(char)(iVar22 % 0x20);
        *(uint *)(lVar15 + (longlong)(iVar20 >> 5) * 4) =
             (uint)(*(int *)(lVar15 + (longlong)(iVar20 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar25;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      lVar29 = *(longlong *)(lVar2 + 0x28);
    }
    bVar16 = (byte)iVar31 & 0x1f;
    puVar19 = (uint *)(lVar29 + (longlong)(iVar27 >> 5) * 4);
    *puVar19 = *puVar19 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar25 = *(int *)(lVar2 + 0x38);
    lVar15 = (longlong)iVar25;
    iVar31 = *(int *)(*plVar28 + 4 + lVar15 * 0x20);
    *(int *)(lVar2 + 0x38) = iVar31;
    iVar20 = *(int *)(lVar2 + 0x3c) + -1;
    *(int *)(lVar2 + 0x3c) = iVar20;
    if (iVar20 != 0) {
      *(undefined4 *)(*plVar28 + (longlong)iVar31 * 0x20) = 0xffffffff;
    }
  }
  param_2 = local_78;
  local_80 = (uint *)(lVar2 + 0x18);
  uVar10 = 1 << ((byte)iVar25 & 0x1f);
  puVar19 = *(uint **)(lVar2 + 0x28);
  if (*(uint **)(lVar2 + 0x28) == (uint *)0x0) {
    puVar19 = local_80;
  }
  iVar31 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar31 = iVar25;
  }
  puVar19[iVar31 >> 5] = puVar19[iVar31 >> 5] | uVar10;
  uVar30 = 1;
  lVar29 = *plVar28;
  lVar15 = lVar15 * 0x20;
  puVar3 = (undefined4 *)(lVar29 + lVar15);
  *(ulonglong *)(lVar29 + lVar15) = param_3;
  *(longlong *)(lVar29 + 8 + lVar15) = lVar13;
  *(longlong *)(lVar29 + 0x10 + lVar15) = lVar32;
  *(undefined4 *)(lVar29 + 0x18 + lVar15) = 0xffffffff;
  uVar11 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  uVar21 = *(int *)(lVar2 + 0x10) - *(int *)(lVar2 + 0x3c);
  if ((uVar21 != 0) && (uVar21 != 1)) {
    lVar13 = lVar2 + 0x40;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      lVar13 = *(longlong *)(lVar2 + 0x48);
    }
    iVar20 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & uVar11) * 4);
    if (iVar20 != -1) {
      do {
        puVar4 = (undefined4 *)(*plVar28 + (longlong)iVar20 * 0x20);
        if (*(ulonglong *)(*plVar28 + (longlong)iVar20 * 0x20) == param_3) {
          plVar17 = *(longlong **)(puVar4 + 4);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))();
            }
          }
          uVar12 = *puVar3;
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar12;
          puVar4[1] = uVar5;
          puVar4[2] = uVar6;
          puVar4[3] = uVar7;
          lVar13 = *plVar28;
          if (*(int *)(lVar2 + 0x3c) != 0) {
            *(int *)(lVar13 + (longlong)*(int *)(lVar2 + 0x38) * 0x20) = iVar25;
          }
          *(undefined4 *)(lVar13 + (longlong)iVar25 * 0x20) = 0xffffffff;
          uVar12 = 0xffffffff;
          if (0 < *(int *)(lVar2 + 0x3c)) {
            uVar12 = *(undefined4 *)(lVar2 + 0x38);
          }
          *(undefined4 *)(lVar13 + (longlong)iVar25 * 0x20 + 4) = uVar12;
          *(int *)(lVar2 + 0x38) = iVar25;
          *(int *)(lVar2 + 0x3c) = *(int *)(lVar2 + 0x3c) + 1;
          puVar19 = local_80;
          if (*(uint **)(lVar2 + 0x28) != (uint *)0x0) {
            puVar19 = *(uint **)(lVar2 + 0x28);
          }
          puVar19[iVar31 >> 5] = puVar19[iVar31 >> 5] & ~uVar10;
          param_2 = local_78;
          goto LAB_14088db16;
        }
        iVar20 = puVar4[6];
      } while (iVar20 != -1);
    }
  }
  if (3 < uVar21) {
    uVar18 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar30 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar30 <= *(int *)(lVar2 + 0x50))) {
    uVar11 = *(int *)(lVar2 + 0x50) - 1U & uVar11;
    puVar3[7] = uVar11;
    lVar13 = *(longlong *)(lVar2 + 0x48);
    if (*(longlong *)(lVar2 + 0x48) == 0) {
      lVar13 = lVar2 + 0x40;
    }
    puVar3[6] = *(undefined4 *)
                 (lVar13 + ((longlong)*(int *)(lVar2 + 0x50) - 1U & (longlong)(int)uVar11) * 4);
    lVar13 = *(longlong *)(lVar2 + 0x48);
    if (*(longlong *)(lVar2 + 0x48) == 0) {
      lVar13 = lVar2 + 0x40;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(lVar2 + 0x50) - 1U & (longlong)(int)uVar11) * 4) = iVar25;
    goto LAB_14088db16;
  }
  *(uint *)(lVar2 + 0x50) = uVar30;
  plVar17 = (longlong *)(lVar2 + 0x48);
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    FUN_1446efa72(plVar17,0,0,4);
    uVar30 = *(uint *)(lVar2 + 0x50);
  }
  puVar19 = local_80;
  lVar13 = lVar2 + 0x40;
  if (uVar30 == 1) {
    if (*plVar17 != 0) {
      FUN_1446efa72(plVar17,0,0,4);
    }
LAB_14088dbe7:
    uVar10 = 0;
    do {
      lVar32 = *(longlong *)(lVar2 + 0x48);
      if (*(longlong *)(lVar2 + 0x48) == 0) {
        lVar32 = lVar13;
      }
      *(undefined4 *)(lVar32 + (ulonglong)(*(int *)(lVar2 + 0x50) + 0x7fffffffU & uVar10) * 4) =
           0xffffffff;
      uVar10 = uVar10 + 1;
    } while (uVar30 != uVar10);
  }
  else {
    if (uVar30 == 0) goto LAB_14088db16;
    FUN_1446efa72(plVar17,0,uVar30,4);
    if (0 < (int)uVar30) goto LAB_14088dbe7;
  }
  iVar25 = *(int *)(lVar2 + 0x30);
  if (iVar25 == 0) {
    uVar18 = 0;
    uVar24 = 1;
    iVar31 = 0;
    iVar20 = 0;
  }
  else {
    puVar23 = *(uint **)(lVar2 + 0x28);
    if (*(uint **)(lVar2 + 0x28) == (uint *)0x0) {
      puVar23 = puVar19;
    }
    uVar10 = *puVar23;
    if (uVar10 == 0) {
      iVar31 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar31 = iVar25 + -1;
      }
      uVar18 = 0;
      uVar24 = (ulonglong)(uint)(iVar31 >> 5);
      if (iVar31 >> 5 < 1) {
        uVar24 = uVar18;
      }
      iVar20 = 0;
      do {
        if (uVar24 == uVar18) goto LAB_14088db16;
        iVar20 = iVar20 + 0x20;
        uVar10 = puVar23[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar18 = 0;
      iVar20 = 0;
    }
    uVar24 = (ulonglong)(-uVar10 & uVar10);
    uVar26 = uVar24 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar31 = (iVar20 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar31) {
      iVar31 = iVar25;
    }
  }
  if (iVar31 < iVar25) {
    uVar10 = 0xffffffff;
    do {
      lVar32 = *plVar28;
      lVar15 = (longlong)iVar31 * 0x20;
      uVar30 = ((uint)(*(ulonglong *)(lVar32 + lVar15) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar32 + lVar15) >> 4)) * -0x7a143595;
      uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
      uVar26 = (longlong)(int)(uVar30 >> 0x10 ^ uVar30) & (longlong)*(int *)(lVar2 + 0x50) - 1U;
      iVar25 = (int)uVar26;
      *(int *)(lVar32 + 0x1c + lVar15) = iVar25;
      lVar29 = *(longlong *)(lVar2 + 0x48);
      if (*(longlong *)(lVar2 + 0x48) == 0) {
        lVar29 = lVar13;
      }
      *(undefined4 *)(lVar32 + 0x18 + lVar15) =
           *(undefined4 *)(lVar29 + ((longlong)*(int *)(lVar2 + 0x50) - 1U & uVar26) * 4);
      lVar32 = *(longlong *)(lVar2 + 0x48);
      if (*(longlong *)(lVar2 + 0x48) == 0) {
        lVar32 = lVar13;
      }
      *(int *)(lVar32 + ((longlong)iVar25 & (longlong)*(int *)(lVar2 + 0x50) - 1U) * 4) = iVar31;
      uVar10 = ~(uint)uVar24 & uVar10;
      puVar23 = *(uint **)(lVar2 + 0x28);
      if (*(uint **)(lVar2 + 0x28) == (uint *)0x0) {
        puVar23 = puVar19;
      }
      iVar25 = *(int *)(lVar2 + 0x30);
      iVar31 = (int)uVar18;
      lVar32 = (longlong)iVar31;
      uVar30 = puVar23[lVar32] & uVar10;
      if (uVar30 == 0) {
        iVar22 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar22 = iVar25 + -1;
        }
        iVar22 = iVar22 >> 5;
        iVar27 = iVar22;
        if (iVar22 < iVar31) {
          iVar27 = iVar31;
        }
        if (iVar22 <= iVar31) break;
        lVar29 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar30 = puVar23[lVar32 + lVar29 + 1];
          if (uVar30 != 0) break;
          lVar29 = lVar29 + 1;
          if (iVar27 - lVar32 == lVar29) goto LAB_14088db16;
        }
        uVar18 = (ulonglong)(iVar31 + (int)lVar29 + 1);
        uVar10 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar30 & uVar30);
      uVar26 = uVar24 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar31 = (iVar20 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    } while (iVar31 < iVar25);
  }
LAB_14088db16:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    LOCK();
    iVar31 = *(int *)(lVar13 + 8);
    bVar33 = iVar25 == iVar31;
    if (bVar33) {
      *(int *)(lVar13 + 8) = iVar25 + 1;
      iVar31 = iVar25;
    }
    iVar25 = iVar31;
    UNLOCK();
    if (bVar33) break;
LAB_14088d8a9:
    if (iVar25 == 0) {
      param_2[1] = 0;
      goto LAB_14088db16;
    }
  }
  if (param_2[1] != 0) {
    *param_2 = *plVar17;
  }
  goto LAB_14088db16;
}



// FUNCTION 14088df30 FUN_14088df30 body=301 status=ok
// SIG undefined FUN_14088df30(void)

undefined8 *
FUN_14088df30(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  ushort uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  uVar4 = 0;
  puVar2 = *(undefined4 **)(param_3 + 8);
  if ((DAT_14c9a1ab0 != 0) && (puVar2 != (undefined4 *)0x0)) {
    uVar1 = *(ushort *)(puVar2 + 10);
    if (((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8);
    }
  }
  puVar5 = &DAT_14c9485f0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  FUN_140045924(DAT_14c947fe0,&local_50,puVar5,1);
  local_60 = param_5;
  local_68 = param_4;
  FUN_140844808(param_1,param_2,local_50,uVar4);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088e060 FUN_14088e060 body=374 status=ok
// SIG undefined FUN_14088e060(void)

undefined8 FUN_14088e060(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  
  cVar4 = (**(code **)(*param_1 + 0x2d0))();
  if (((cVar4 != '\0') && ((*(byte *)((longlong)param_1 + 0x155) & 1) == 0)) &&
     ((int)param_1[0x69] != *(int *)((longlong)param_1 + 0x374))) {
    lVar9 = *param_4;
    uVar3 = (uint)((ulonglong)lVar9 >> 0x10);
    uVar7 = (uint)lVar9 & 0xffff;
    plVar6 = param_1 + 0x6f;
    if ((longlong *)param_1[0x70] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x70];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x71] - 1U &
                    (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar7) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = param_1[0x68] + (longlong)iVar5 * 0x60;
        if (*(longlong *)(param_1[0x68] + (longlong)iVar5 * 0x60) == lVar9) {
          if (lVar1 == 0) {
            return 0;
          }
          if ((longlong *)(lVar1 + 8) == (longlong *)0x0) {
            return 0;
          }
          if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
            return 1;
          }
          puVar8 = &DAT_14c9485f0;
          if (*(uint **)(param_3 + 8) != (uint *)0x0) {
            puVar8 = *(uint **)(param_3 + 8);
          }
          lVar9 = lVar1 + 0x40;
          if (*(longlong *)(lVar1 + 0x48) != 0) {
            lVar9 = *(longlong *)(lVar1 + 0x48);
          }
          iVar5 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar1 + 0x50) - 1U & *puVar8) * 4);
          if (iVar5 != -1) {
            lVar9 = *(longlong *)(lVar1 + 8);
            while (lVar1 = lVar9 + (longlong)iVar5 * 0x38,
                  *(uint *)(lVar9 + (longlong)iVar5 * 0x38) != *puVar8) {
              iVar5 = *(int *)(lVar1 + 0x30);
              if (iVar5 == -1) {
                return 1;
              }
            }
            if (lVar1 == 0) {
              return 1;
            }
            if ((ushort *)(lVar1 + 0x28) == (ushort *)0x0) {
              return 1;
            }
            uVar2 = *(ushort *)(lVar1 + 0x28);
            if ((short)uVar2 < 0) {
              return 1;
            }
            if ((int)param_1[0x2c] <= (int)(short)uVar2) {
              return 1;
            }
            FUN_1401d5310(param_2,(ulonglong)uVar2 * 0x10 + param_1[0x2b]);
            return 1;
          }
          return 1;
        }
        iVar5 = *(int *)(lVar1 + 0x58);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14088e1d6 FUN_14088e1d6 body=1998 status=ok
// SIG undefined FUN_14088e1d6(void)

int FUN_14088e1d6(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined *puVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong *local_f8;
  float local_f0;
  undefined4 uStack_ec;
  ushort local_d8;
  byte local_d0;
  char local_c8 [16];
  longlong *local_b8;
  int local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*param_2 == 0) {
    iVar16 = 0;
  }
  else {
    if ((longlong)(int)param_2[3] != 0) {
      iVar16 = 0;
      lVar10 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar10) == 0) goto LAB_14088e42b;
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar10);
    }
    lVar10 = *(longlong *)(param_1 + 0x26b0);
    if (lVar10 == 0) {
      uVar8 = FUN_1457512de();
      lVar10 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x26b0) = lVar10;
    }
    plVar2 = (longlong *)(param_1 + 0x26a8);
    lVar13 = *(longlong *)(param_1 + 0x26b8);
    bVar17 = true;
    if (lVar13 == 0) {
      lVar13 = 0;
      if ((lVar10 != 0) && (*plVar2 != 0)) {
        plVar4 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
          lVar13 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar13 = FUN_144aff482(uVar8,plVar2);
        }
        *(longlong *)(param_1 + 0x26b8) = lVar13;
      }
      bVar17 = lVar13 != 0;
    }
    if ((bVar17) && (param_3 == '\0')) {
      lVar10 = *(longlong *)(param_1 + 0x26b0);
      if (lVar10 == 0) {
        uVar8 = FUN_1457512de();
        lVar10 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x26b0) = lVar10;
        lVar13 = *(longlong *)(param_1 + 0x26b8);
      }
      if (lVar13 == 0) {
        *(undefined8 *)(param_1 + 0x26b8) = 0;
        lVar13 = 0;
        if ((lVar10 != 0) && (*(longlong *)(param_1 + 0x26a8) != 0)) {
          plVar4 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
            lVar13 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar13 = FUN_144aff482(uVar8,plVar2);
          }
          *(longlong *)(param_1 + 0x26b8) = lVar13;
        }
      }
      if (*(char *)(lVar13 + 400) == '\x01') {
        lVar10 = *(longlong *)(param_1 + 0x26b0);
        if (lVar10 == 0) {
          uVar8 = FUN_1457512de();
          lVar10 = FUN_14477b664(uVar8);
          *(longlong *)(param_1 + 0x26b0) = lVar10;
          lVar13 = *(longlong *)(param_1 + 0x26b8);
        }
        if (lVar13 == 0) {
          *(undefined8 *)(param_1 + 0x26b8) = 0;
          lVar13 = 0;
          if ((lVar10 != 0) && (*(longlong *)(param_1 + 0x26a8) != 0)) {
            plVar4 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
              lVar13 = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar13 = FUN_144aff482(uVar8,plVar2);
            }
            *(longlong *)(param_1 + 0x26b8) = lVar13;
          }
        }
        iVar16 = *(int *)(lVar13 + 0x194);
        goto LAB_14088e42b;
      }
    }
    lVar10 = *param_2;
    FUN_140c65c56(param_2,&local_100);
    iVar16 = 0;
    if ((lVar10 != 0) && (local_100 != 0)) {
      local_c8[0] = '\0';
      local_a0 = 0;
      iVar16 = *(int *)(local_100 + 0x38);
      lVar10 = *(longlong *)(param_1 + 0x26b0);
      if (lVar10 == 0) {
        uVar8 = FUN_1457512de();
        lVar10 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x26b0) = lVar10;
      }
      lVar13 = *(longlong *)(param_1 + 0x26b8);
      if (((lVar13 == 0) && (lVar13 = 0, lVar10 != 0)) && (*plVar2 != 0)) {
        plVar4 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar4 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar4 + 0x108))(), cVar6 == '\0')
           ) {
          lVar13 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar13 = FUN_144aff482(uVar8,plVar2);
        }
        *(longlong *)(param_1 + 0x26b8) = lVar13;
      }
      pfVar12 = &local_f0;
      FUN_1448729ea(lVar13 + 0x198,pfVar12,local_c8);
      if (local_d0 == 3) {
        fVar19 = local_f0;
        bVar5 = 3;
      }
      else {
        pfVar15 = &local_98;
        FUN_1400b56fe(pfVar15,&local_f0,3);
        fVar19 = local_98;
        if (local_78 == 0) {
          fVar19 = 3.0;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_80) {
            pfVar15 = (float *)CONCAT44(uStack_94,local_98);
          }
          (*pcVar3)(pfVar15);
        }
        bVar5 = local_d0;
        if (0x18 < local_80) {
          FUN_1400020a8(CONCAT44(uStack_94,local_98));
          bVar5 = local_d0;
        }
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_d8) {
          pfVar12 = (float *)CONCAT44(uStack_ec,local_f0);
        }
        (*pcVar3)(pfVar12);
      }
      if (0x18 < local_d8) {
        FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
      }
      lVar10 = *(longlong *)(param_1 + 0x26b0);
      if (lVar10 == 0) {
        uVar8 = FUN_1457512de();
        lVar10 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x26b0) = lVar10;
      }
      lVar13 = *(longlong *)(param_1 + 0x26b8);
      if (((lVar13 == 0) && (lVar13 = 0, lVar10 != 0)) && (*plVar2 != 0)) {
        plVar4 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar4 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar4 + 0x108))(), cVar6 == '\0')
           ) {
          lVar13 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar13 = FUN_144aff482(uVar8,plVar2);
        }
        *(longlong *)(param_1 + 0x26b8) = lVar13;
      }
      pfVar12 = &local_f0;
      FUN_1448729ea(lVar13 + 0x1e8,pfVar12,local_c8);
      if (local_d0 == 3) {
        uVar7 = 3;
        fVar18 = local_f0;
      }
      else {
        pfVar15 = &local_98;
        FUN_1400b56fe(pfVar15,&local_f0,3);
        fVar18 = local_98;
        if (local_78 == 0) {
          fVar18 = 0.15;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_80) {
            pfVar15 = (float *)CONCAT44(uStack_94,local_98);
          }
          (*pcVar3)(pfVar15);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(CONCAT44(uStack_94,local_98));
        }
        uVar7 = (uint)local_d0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_d8) {
          pfVar12 = (float *)CONCAT44(uStack_ec,local_f0);
        }
        (*pcVar3)(pfVar12);
      }
      if (0x18 < local_d8) {
        FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
      }
      lVar10 = DAT_14c9a3da0;
      fVar19 = (float)*(int *)(local_100 + 0x40) * ((float)iVar16 * fVar18 + fVar19);
      if ((longlong)local_a0 != 0) {
        lVar13 = (longlong)local_a0 + -1;
        lVar14 = lVar13 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
        if (*(longlong *)(lVar10 + lVar14) != 0) {
          FUN_1400020a8();
        }
        lVar10 = DAT_14c9a3da0;
        iVar16 = (int)lVar13;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar16;
        }
        *(undefined4 *)(lVar10 + lVar14) = 0xffffffff;
        iVar9 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar9 = DAT_14c9a3dd0;
        }
        *(int *)(lVar10 + 4 + lVar14) = iVar9;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar11 = DAT_14c9a3dc0;
        }
        iVar9 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar9 = iVar16;
        }
        bVar5 = (byte)lVar13 & 0x1f;
        DAT_14c9a3dd0 = iVar16;
        *(uint *)(puVar11 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar9 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_a0 = 0;
      }
      if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      iVar16 = (int)ROUND(fVar19 + fVar19 + 0.5) >> 1;
    }
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
  }
LAB_14088e42b:
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar16;
}



// FUNCTION 14088e9a6 FUN_14088e9a6 body=595 status=ok
// SIG undefined FUN_14088e9a6(void)

void FUN_14088e9a6(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = **(longlong **)(param_1 + 0x2678);
  if (lVar4 == 0) goto LAB_14088ea4f;
  uVar2 = *(ulonglong *)(lVar4 + 8);
  lVar7 = *(longlong *)(param_1 + 0x2678);
  *(longlong *)(param_1 + 0x2678) = lVar4;
  *(undefined8 *)(lVar4 + 8) = 0;
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
  if (((uVar2 >> 0x20 == 0) || (uVar12 = (uint)uVar2, (int)uVar12 < 0)) ||
     (DAT_14c9647dc <= (int)uVar12)) goto LAB_14088ea4f;
  uVar10 = (ulonglong)((uint)(uVar2 >> 0x10) & 0x7fff);
  lVar4 = (ulonglong)((uVar12 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar10 * 8);
  if (((lVar4 == 0) || (uVar11 = (uint)(uVar2 >> 0x20), *(uint *)(lVar4 + 0x10) != uVar11)) ||
     ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) goto LAB_14088ea4f;
  uVar8 = uVar11 ^ uVar12;
  local_48 = uVar2;
  iVar3 = FUN_141303122(param_1 + 0x2968,uVar8);
  if (iVar3 == -1) goto LAB_14088ea4f;
  plVar5 = (longlong *)(param_1 + 0x2808);
  local_48 = uVar2;
  iVar3 = FUN_1412ea6f2(plVar5,uVar8);
  if (iVar3 == -1) goto LAB_14088ea4f;
  local_48 = uVar2;
  iVar3 = FUN_1412ea6f2(plVar5,uVar8);
  if (iVar3 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x18 + *plVar5;
  }
  if (((*(int *)(lVar4 + 0xc) == 0) || (uVar1 = *(uint *)(lVar4 + 8), (int)uVar1 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar1 ||
      (((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
        (*(int *)(lVar7 + 0x10) != *(int *)(lVar4 + 0xc))) ||
       ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))))) goto LAB_14088ea4f;
  local_48 = uVar2;
  iVar3 = FUN_1412ea6f2(plVar5,uVar8);
  if (iVar3 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar3 * 0x18 + *plVar5;
  }
  if (*(int *)(lVar4 + 0xc) == 0) {
LAB_14088ebf2:
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar8 = *(uint *)(lVar4 + 8);
    plVar5 = (longlong *)0x0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar4 + 0xc) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_14088ebf2;
      plVar5 = (longlong *)*puVar6;
    }
  }
  uVar9 = 0;
  (**(code **)(*plVar5 + 0x5c8))(plVar5,0);
  if ((int)uVar12 < DAT_14c9647dc) {
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar12 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar10 * 8));
    if (((puVar6 == (undefined8 *)0x0) || (*(uint *)(puVar6 + 2) != uVar11)) ||
       ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar6;
    }
  }
  FUN_1412ea1b8(param_1,uVar9);
LAB_14088ea4f:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088ebfa FUN_14088ebfa body=59 status=ok
// SIG undefined FUN_14088ebfa(void)

void FUN_14088ebfa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14088ec36 FUN_14088ec36 body=769 status=ok
// SIG undefined FUN_14088ec36(void)

void FUN_14088ec36(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x2ae8);
  uVar7 = (ulonglong)*(int *)(param_1 + 0x2af0);
  local_98 = param_4;
  if (0 < (longlong)uVar7) {
    lVar8 = uVar7 << 6;
    do {
      lVar8 = lVar8 + -0x40;
      if ((*(longlong **)(*plVar1 + lVar8) == (longlong *)0x0) ||
         (*(longlong **)(*plVar1 + lVar8) == param_2)) {
        FUN_148f0b380(plVar1,(int)uVar7 + -1);
      }
      bVar5 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar5);
  }
  iVar2 = DAT_14c7640d8;
  if (param_2 != (longlong *)0x0) {
    DAT_14c7640d8 = DAT_14c7640d8 + 1;
    local_88 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_80 = iVar2;
    local_78 = 0;
    iVar2 = *(int *)(param_3 + 1);
    uVar4 = *param_3;
    local_70 = CONCAT44(local_70._4_4_,iVar2);
    local_90 = param_3;
    if (iVar2 == 0) {
      local_70 = 0;
    }
    else {
      FUN_140b856de(&local_78,iVar2,0);
      FUN_140b8566a(local_78,uVar4,iVar2);
    }
    local_68 = (void *)0x0;
    uVar3 = *(uint *)(local_98 + 1);
    _Src = (void *)*local_98;
    local_60 = CONCAT44(local_60._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      local_60 = (ulonglong)uVar3;
    }
    else {
      FUN_144a06ca8(&local_68,uVar3,0);
      memcpy(local_68,_Src,(longlong)(int)uVar3 << 2);
    }
    local_58 = param_5;
    local_50 = 0xffffffff;
    uStack_54 = CONCAT31(uStack_54._1_3_,param_6);
    iVar2 = *(int *)(param_1 + 0x2af0);
    *(uint *)(param_1 + 0x2af0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2af4) < iVar2 + 1U) {
      FUN_145752104(plVar1,iVar2);
    }
    lVar8 = *plVar1 + (longlong)iVar2 * 0x40;
    *(longlong **)(*plVar1 + (longlong)iVar2 * 0x40) = local_88;
    if ((local_88 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(int *)(lVar8 + 8) = local_80;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(longlong *)(lVar8 + 0x10) = local_78;
    local_78 = 0;
    *(undefined4 *)(lVar8 + 0x18) = (undefined4)local_70;
    *(undefined4 *)(lVar8 + 0x1c) = local_70._4_4_;
    local_70 = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(void **)(lVar8 + 0x20) = local_68;
    local_68 = (void *)0x0;
    *(undefined4 *)(lVar8 + 0x28) = (undefined4)local_60;
    *(undefined4 *)(lVar8 + 0x2c) = local_60._4_4_;
    local_60 = 0;
    *(undefined4 *)(lVar8 + 0x38) = local_50;
    *(ulonglong *)(lVar8 + 0x30) = CONCAT44(uStack_54,local_58);
    if (*(char *)(param_1 + 0x178) == '\x03') {
      cVar6 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if (cVar6 != '\0') {
        local_b8 = *(undefined4 *)(lVar8 + 8);
        local_b0 = param_5;
        local_a8 = 0;
        FUN_14088f68a(param_1,param_2,local_90,local_98);
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_78,local_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088ef38 FUN_14088ef38 body=510 status=ok
// SIG undefined FUN_14088ef38(void)

void FUN_14088ef38(longlong *param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._4_4_ = 0;
    plVar14 = local_60;
    uVar13 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    plVar14 = local_70;
    uVar13 = (uint)local_58;
    iVar15 = (int)local_68;
  }
  plVar5 = local_60;
  iVar7 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar8 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      uVar13 = uVar13 & ~(uint)uVar10;
      plVar8 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar8 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar12 = (longlong)iVar15;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar15) {
          iVar4 = iVar15;
        }
        if (iVar7 <= iVar15) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar12 == lVar9) goto LAB_14088f05e;
        }
        iVar15 = iVar15 + (int)lVar9 + 1;
        uVar13 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_14088f05e:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar13 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar6 = 0x80;
    if (0x80 < (int)uVar13) {
      uVar6 = uVar13;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(plVar14,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14088f138 FUN_14088f138 body=1361 status=ok
// SIG undefined FUN_14088f138(void)

void FUN_14088f138(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong *local_330;
  code **local_328;
  undefined8 local_318 [12];
  longlong local_2b8 [2];
  ulonglong local_2a4;
  undefined4 local_29c;
  code *local_298 [2];
  undefined ***local_288;
  undefined **local_278;
  undefined4 local_270;
  ulonglong local_26c;
  ulonglong local_264;
  undefined1 local_238;
  longlong local_228;
  undefined8 uStack_220;
  longlong local_150;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (*(char *)(param_1 + 0x2661) != '\0') goto LAB_14088f3a9;
  if (((((*(int *)(param_1 + 0x266c) == 0) || (uVar3 = *(uint *)(param_1 + 0x2668), (int)uVar3 < 0))
       || (DAT_14c9647dc <= (int)uVar3)) ||
      ((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 == 0 ||
       (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x266c))))) ||
     ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) {
    local_228 = 0;
    uStack_220 = 0;
    FUN_1410c6c64(param_1,&local_228);
    if ((longlong)(int)uStack_220 != 0) {
      lVar6 = 0;
      do {
        lVar14 = *(longlong *)(local_228 + lVar6);
        if (*(longlong *)(lVar14 + 0x2a8) == *(longlong *)(param_1 + 0x28b8)) {
          if (lVar14 == 0) {
            *(undefined4 *)(param_1 + 0x2668) = 0;
            iVar2 = 0;
          }
          else {
            uVar3 = *(uint *)(lVar14 + 0xc);
            *(uint *)(param_1 + 0x2668) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            iVar2 = *(int *)(lVar6 + 0x10);
            if (*(int *)(lVar6 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar15) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar2 = *(int *)(lVar6 + 0x10);
              bVar15 = iVar2 == 0;
              if (bVar15) {
                *(int *)(lVar6 + 0x10) = iVar9;
                iVar2 = 0;
              }
              UNLOCK();
              if (bVar15) {
                iVar2 = iVar9;
              }
            }
          }
          *(int *)(param_1 + 0x266c) = iVar2;
          goto LAB_14088f25f;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)uStack_220 * 8 != lVar6);
    }
    iVar2 = *(int *)(param_1 + 0x266c);
LAB_14088f25f:
    if (((iVar2 == 0) || (uVar3 = *(uint *)(param_1 + 0x2668), (int)uVar3 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar3 ||
        (((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 == 0 ||
          (*(int *)(lVar6 + 0x10) != iVar2)) || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      *(undefined1 *)(param_1 + 0x2661) = 1;
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (local_228 != 0) {
      FUN_1400020a8();
    }
    if (!bVar15) goto LAB_14088f3a9;
  }
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 == 0) goto LAB_14088f3a9;
  local_2a4 = 0;
  local_29c = 0;
  local_2b8[0] = 0;
  local_2b8[1] = 0;
  cVar1 = FUN_14088c596(param_1 + 0x2690);
  if (cVar1 != '\0') {
    uVar11 = 0;
    local_d8 = 0;
    local_d0 = 0;
    uStack_cc = 0x80;
    uStack_c8 = 0xffffffff;
    uStack_c4 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0xf;
    local_78 = 1;
    local_74 = 0;
    uStack_6c = 0;
    cVar1 = FUN_14088c870(&local_138,local_2b8);
    if (cVar1 != '\0') {
      local_238 = 0;
      local_338 = 0;
      FUN_143daa03e(&local_228,param_1,*(undefined8 *)(param_1 + 0x28b8),local_298);
      local_270 = local_29c;
      uVar3 = 0;
      if (param_1 != 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
        uVar11 = (ulonglong)uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        uVar3 = *(uint *)(lVar14 + 0x10);
        if (*(uint *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar10 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar10);
          }
          LOCK();
          uVar3 = *(uint *)(lVar14 + 0x10);
          bVar15 = uVar3 == 0;
          if (bVar15) {
            *(uint *)(lVar14 + 0x10) = uVar10;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar15) {
            uVar3 = uVar10;
          }
        }
      }
      local_26c = uVar11 | (ulonglong)uVar3 << 0x20;
      local_288 = (undefined ***)0x0;
      local_278 = &PTR_LAB_14b9deb90;
      local_264 = local_2a4;
      local_298[0] = FUN_144354380;
      if (local_2a4 >> 0x20 == 0) {
LAB_14088f60b:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar3 = (uint)local_2a4;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8)));
          if ((puVar7 == (undefined8 *)0x0) ||
             ((*(int *)(puVar7 + 2) != (int)(local_2a4 >> 0x20) ||
              ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_14088f60b;
          uVar13 = *puVar7;
        }
      }
      if (*(int *)(param_1 + 0x266c) == 0) {
LAB_14088f613:
        lVar14 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x2668);
        lVar14 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar8 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar8 == (longlong *)0x0) ||
             (((int)plVar8[2] != *(int *)(param_1 + 0x266c) ||
              ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_14088f613;
          lVar14 = *plVar8;
        }
      }
      puVar7 = (undefined8 *)(lVar14 + 0x240);
      puVar12 = local_318;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      local_338 = param_1;
      local_330 = &local_228;
      local_328 = local_298;
      FUN_14587fb4d(lVar6,local_318,&local_138,uVar13);
      if (local_298[0] != (code *)0x0) {
        pppuVar5 = local_288;
        if (local_288 == (undefined ***)0x0) {
          pppuVar5 = &local_278;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      if (local_150 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140368b56(&local_138);
  }
  if (local_2b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14088f3a9:
  if ((local_60 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14088f68a FUN_14088f68a body=2316 status=ok
// SIG undefined FUN_14088f68a(void)

void FUN_14088f68a(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,int param_5
                  ,int param_6,char param_7)

{
  longlong *plVar1;
  void *_Src;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 10000) != 0) {
    local_e8 = param_2;
    local_d8 = param_3;
    if (param_7 == '\0') {
      plVar1 = (longlong *)(param_1 + 0x29b8);
      if (param_2 == 0) {
        uVar14 = 0;
        uVar8 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0xc);
        uVar14 = (ulonglong)uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        uVar5 = *(uint *)(lVar12 + 0x10);
        if (uVar5 == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          uVar9 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar9);
          }
          LOCK();
          uVar5 = *(uint *)(lVar12 + 0x10);
          bVar16 = uVar5 == 0;
          if (bVar16) {
            *(uint *)(lVar12 + 0x10) = uVar9;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar16) {
            uVar5 = uVar9;
          }
        }
        uVar8 = (ulonglong)uVar5;
      }
      param_2 = local_e8;
      local_b8 = (void *)(uVar14 | uVar8 << 0x20);
      iVar4 = FUN_145c490d8(plVar1);
      if (iVar4 != -1) {
        if (param_2 == 0) {
          uVar8 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(param_2 + 0xc);
          uVar8 = (ulonglong)uVar5;
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          uVar5 = *(uint *)(lVar12 + 0x10);
          param_2 = local_e8;
          if (uVar5 == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar9 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar9);
            }
            LOCK();
            uVar5 = *(uint *)(lVar12 + 0x10);
            bVar16 = uVar5 == 0;
            if (bVar16) {
              *(uint *)(lVar12 + 0x10) = uVar9;
              uVar5 = 0;
            }
            UNLOCK();
            param_2 = local_e8;
            if (bVar16) {
              uVar5 = uVar9;
            }
          }
        }
        local_b8 = (void *)(uVar8 | (ulonglong)uVar5 << 0x20);
        iVar4 = FUN_145c490d8(plVar1,uVar5 ^ (uint)uVar8);
        if (iVar4 == -1) {
          lVar12 = 0;
        }
        else {
          lVar12 = (longlong)iVar4 * 0x14 + *plVar1;
        }
        if (*(int *)(lVar12 + 8) == param_5) goto LAB_14088f6c1;
      }
    }
    if (param_2 == 0) {
      local_b8._0_4_ = 0;
      uVar5 = 0;
      uVar9 = (uint)local_b8;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0xc);
      local_b8 = (void *)(ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar5 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar10);
        }
        LOCK();
        uVar5 = *(uint *)(lVar12 + 0x10);
        bVar16 = uVar5 == 0;
        if (bVar16) {
          *(uint *)(lVar12 + 0x10) = uVar10;
          uVar5 = 0;
        }
        UNLOCK();
        param_2 = local_e8;
        uVar9 = (uint)local_b8;
        if (bVar16) {
          uVar5 = uVar10;
        }
      }
    }
    local_b8._0_4_ = uVar9;
    local_b8 = (void *)CONCAT44(uVar5,(uint)local_b8);
    piVar6 = (int *)FUN_145897306(param_1 + 0x29b8,uVar5 ^ (uint)local_b8,&local_b8);
    *piVar6 = param_5;
    if (param_2 == 0) {
      local_b8._0_4_ = 0;
      uVar5 = 0;
      uVar9 = (uint)local_b8;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0xc);
      local_b8 = (void *)(ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar5 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar10);
        }
        LOCK();
        uVar5 = *(uint *)(lVar12 + 0x10);
        bVar16 = uVar5 == 0;
        if (bVar16) {
          *(uint *)(lVar12 + 0x10) = uVar10;
          uVar5 = 0;
        }
        UNLOCK();
        param_2 = local_e8;
        uVar9 = (uint)local_b8;
        if (bVar16) {
          uVar5 = uVar10;
        }
      }
    }
    local_b8._0_4_ = uVar9;
    local_b8 = (void *)CONCAT44(uVar5,(uint)local_b8);
    FUN_1412e3d70(param_1 + 0x2968,uVar5 ^ (uint)local_b8,&local_b8);
    FUN_1458d6f38(param_1,param_2);
    if (param_2 == 0) {
      local_b8._0_4_ = 0;
      uVar5 = 0;
      uVar9 = (uint)local_b8;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0xc);
      local_b8 = (void *)(ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar5 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar10);
        }
        LOCK();
        uVar5 = *(uint *)(lVar12 + 0x10);
        bVar16 = uVar5 == 0;
        if (bVar16) {
          *(uint *)(lVar12 + 0x10) = uVar10;
          uVar5 = 0;
        }
        UNLOCK();
        param_2 = local_e8;
        uVar9 = (uint)local_b8;
        if (bVar16) {
          uVar5 = uVar10;
        }
      }
    }
    local_b8._0_4_ = uVar9;
    local_b8 = (void *)CONCAT44(uVar5,(uint)local_b8);
    puVar7 = (undefined8 *)FUN_1412e3d70(param_1 + 0x2968,uVar5 ^ (uint)local_b8);
    FUN_1411b79c1(*puVar7,*(undefined4 *)(puVar7 + 1));
    *(undefined4 *)(puVar7 + 1) = 0;
    if (*(int *)((longlong)puVar7 + 0xc) != 0) {
      FUN_14575f6a0(puVar7);
    }
    local_e0 = param_1;
    FUN_145752a92(param_1,param_2);
    if (0 < (int)local_d8[1]) {
      lVar12 = local_e0 + 0x2680;
      uVar5 = 1;
      do {
        lVar13 = *param_4;
        uVar9 = uVar5 - 1 & 0xff;
        uVar8 = (ulonglong)(uVar9 << 4);
        local_b8 = (void *)0x0;
        local_b0 = *(int *)(*local_d8 + 8 + uVar8);
        lVar15 = (longlong)local_b0;
        _Src = *(void **)(*local_d8 + uVar8);
        if (lVar15 == 0) {
          local_ac = 0;
        }
        else {
          FUN_1446dd670(&local_b8,local_b0,0);
          memcpy(local_b8,_Src,lVar15 * 2);
        }
        local_a8 = *(undefined4 *)(lVar13 + (ulonglong)uVar9 * 4);
        local_a4._0_4_ = 0;
        if (local_e8 == 0) {
          iVar4 = 0;
          uVar9 = (uint)local_a4;
        }
        else {
          uVar9 = *(uint *)(local_e8 + 0xc);
          local_a4 = (ulonglong)uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          iVar4 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar4 = *(int *)(lVar13 + 0x10);
            bVar16 = iVar4 == 0;
            if (bVar16) {
              *(int *)(lVar13 + 0x10) = iVar11;
              iVar4 = 0;
            }
            UNLOCK();
            uVar9 = (uint)local_a4;
            if (bVar16) {
              iVar4 = iVar11;
            }
          }
        }
        local_a4._0_4_ = uVar9;
        local_a4 = CONCAT44(iVar4,(uint)local_a4);
        local_9c = 0;
        FUN_14088ff98(lVar12,&local_b8);
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        bVar16 = (int)uVar5 < (int)local_d8[1];
        uVar5 = (uint)(byte)((char)uVar5 + 1);
      } while (bVar16);
    }
    lVar12 = local_e0;
    if (*(char *)(local_e0 + 0x178) == '\x03') {
      *(undefined1 *)(local_e0 + 0x2ae1) = 0;
    }
    lVar13 = FUN_1447210f0(local_e0);
    if (((lVar13 != 0) && (*(char *)(lVar12 + 0x2b30) == '\0')) &&
       (cVar3 = FUN_140890098(lVar12), cVar3 != '\0')) {
      lVar15 = FUN_14011c349();
      lVar12 = local_e0;
      if (*(longlong *)(lVar13 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar13 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
      }
      if (param_6 < 1) {
        fVar17 = *(float *)(lVar15 + 0x6ac);
      }
      else {
        fVar17 = (float)param_6;
      }
      uVar2 = *puVar7;
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar7 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 1;
      lVar13 = DAT_14c758608 + 1;
      if (lVar15 == 0) {
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 2;
        lVar13 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar13;
      local_d0[2] = lVar15;
      *local_d0 = &PTR_FUN_14b9deb20;
      local_d0[3] = 0;
      iVar4 = 0;
      if (lVar12 != 0) {
        uVar5 = *(uint *)(lVar12 + 0xc);
        *(uint *)(local_d0 + 3) = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar4 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar4 = *(int *)(lVar13 + 0x10);
          bVar16 = iVar4 == 0;
          if (bVar16) {
            *(int *)(lVar13 + 0x10) = iVar11;
            iVar4 = 0;
          }
          UNLOCK();
          lVar12 = local_e0;
          if (bVar16) {
            iVar4 = iVar11;
          }
        }
      }
      *(int *)((longlong)puVar7 + 0x1c) = iVar4;
      puVar7[4] = FUN_148f0825a;
      *(undefined4 *)(puVar7 + 5) = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_f8 = local_c0;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      FUN_1406f4044(uVar2,lVar12 + 0x2b20,&local_b8,fVar17);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      if (local_c8 != 0) {
        if (local_d0 == (undefined8 *)0x0) goto LAB_14088f6c1;
        (**(code **)*local_d0)(local_d0,0);
        FUN_1446efa72(&local_d0,0,0,0x10);
        local_c8 = 0;
      }
      if (local_d0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14088f6c1:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14088ff98 FUN_14088ff98 body=146 status=ok
// SIG undefined FUN_14088ff98(void)

void FUN_14088ff98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(puVar4 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar4 + 1,iVar1,0);
    memcpy((void *)puVar4[1],_Src,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[3];
  puVar4[3] = param_2[2];
  puVar4[4] = uVar3;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar4;
    *puVar2 = puVar4;
  }
  return;
}



// FUNCTION 14089002a FUN_14089002a body=109 status=ok
// SIG undefined FUN_14089002a(void)

longlong FUN_14089002a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x24a8);
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x138) == 0)) || (*(int *)(lVar2 + 0x134) == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(lVar2 + 0x130);
  lVar4 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x10) != *(int *)(lVar2 + 0x134)) {
      return 0;
    }
    lVar4 = 0;
    if ((*(uint *)(lVar3 + 8) & 0x10200000) == 0) {
      lVar4 = *(longlong *)(lVar2 + 0x138);
    }
  }
  return lVar4;
}



// FUNCTION 140890098 FUN_140890098 body=514 status=ok
// SIG undefined FUN_140890098(void)

undefined8 FUN_140890098(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x26b0);
  if (lVar4 == 0) {
    uVar5 = FUN_1457512de();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x26b0) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x26a8);
  lVar6 = *(longlong *)(param_1 + 0x26b8);
  if (lVar6 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x26b8) = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,plVar1);
      *(longlong *)(param_1 + 0x26b8) = lVar6;
      if (lVar6 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x26b0);
        goto LAB_1408900c1;
      }
    }
LAB_1408900f9:
    uVar5 = 0;
  }
  else {
LAB_1408900c1:
    if (lVar4 == 0) {
      uVar5 = FUN_1457512de();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x26b0) = lVar4;
      lVar6 = *(longlong *)(param_1 + 0x26b8);
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar1);
        }
        *(longlong *)(param_1 + 0x26b8) = lVar6;
      }
    }
    if (*(char *)(lVar6 + 0x18) == '\x01') {
      lVar4 = *(longlong *)(param_1 + 0x26b0);
      if (lVar4 == 0) {
        uVar5 = FUN_1457512de();
        lVar4 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x26b0) = lVar4;
        lVar6 = *(longlong *)(param_1 + 0x26b8);
      }
      if (lVar6 == 0) {
        *(undefined8 *)(param_1 + 0x26b8) = 0;
        lVar6 = 0;
        if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x26a8) != 0)) {
          plVar2 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,plVar1);
          }
          *(longlong *)(param_1 + 0x26b8) = lVar6;
        }
      }
      if (*(int *)(lVar6 + 0x28) == 0) goto LAB_1408900f9;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1408902a2 FUN_1408902a2 body=119 status=ok
// SIG undefined FUN_1408902a2(void)

undefined8 FUN_1408902a2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14089031a(param_2,param_1);
  FUN_140890488(param_2,param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_2,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 14089031a FUN_14089031a body=364 status=ok
// SIG undefined FUN_14089031a(void)

longlong * FUN_14089031a(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147bb3dc2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bb3c41(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147bb3dc2(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bb3d86(param_2);
        FUN_147bb3c41(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140890488 FUN_140890488 body=364 status=ok
// SIG undefined FUN_140890488(void)

longlong * FUN_140890488(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147bb3f94(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bb3eaf(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147bb3f94(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bb3f58(param_2);
        FUN_147bb3eaf(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140890604 FUN_140890604 body=45 status=ok
// SIG undefined FUN_140890604(void)

undefined8 FUN_140890604(undefined8 param_1,int param_2)

{
  FUN_140890632();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 140890632 FUN_140890632 body=302 status=ok
// SIG undefined FUN_140890632(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140890632(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ab997d0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140890760(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140890712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140890760 FUN_140890760 body=51 status=ok
// SIG undefined FUN_140890760(void)

void FUN_140890760(longlong param_1,int param_2)

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



// FUNCTION 140890794 FUN_140890794 body=1333 status=ok
// SIG undefined FUN_140890794(void)

void FUN_140890794(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  uVar3 = FUN_14477dc2a();
  FUN_14477dadc(uVar3,param_2);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cacbb10 == 0) {
      local_90 = &local_78;
      local_78 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1463a1b5a;
      local_98 = &LAB_147903fa7;
      local_a0 = &LAB_1459b1fdd;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000000;
      local_c0 = 8;
      local_c8 = 0x1e8;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
    }
    if ((*(int *)(DAT_14cacbb10 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) ==
        DAT_14cacbb10 + 0x30)) {
      (**(code **)(*param_1 + 0x1a8))(param_1,0);
    }
  }
  uVar8 = (**(code **)(*param_1 + 0x1d0))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  if (plVar4 != (longlong *)0x0) {
    fVar9 = (float)(**(code **)(*param_1 + 0x1d0))(param_1);
    fVar10 = (float)(**(code **)(*param_1 + 0x1c0))(param_1);
    fVar11 = (float)(**(code **)(*param_1 + 0x1b8))(param_1);
    fVar12 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
    fVar13 = fVar9;
    if (fVar12 <= fVar9) {
      fVar13 = fVar12;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x2c) = fVar13;
    fVar13 = (float)(~-(uint)(ABS(fVar11) <= 1e-08) & (uint)(fVar10 / fVar11));
    pcVar5 = (char *)(**(code **)(*param_1 + 0x1c8))(param_1);
    if (*pcVar5 == '\x01') {
      fVar10 = *(float *)(pcVar5 + 8) - *(float *)(pcVar5 + 4);
      if (ABS(fVar10) <= 1e-08) {
        fVar10 = (float)(-(uint)(*(float *)(pcVar5 + 8) <= fVar13) & 0x3f800000);
      }
      else {
        fVar10 = (fVar13 - *(float *)(pcVar5 + 4)) / fVar10;
      }
      fVar13 = (*(float *)(pcVar5 + 0x10) - *(float *)(pcVar5 + 0xc)) * fVar10 +
               *(float *)(pcVar5 + 0xc);
    }
    fVar13 = fVar13 * *(float *)(pcVar5 + 0x14) + *(float *)(pcVar5 + 0x18);
    if (pcVar5[1] == '\x01') {
      if (*(float *)(pcVar5 + 0x20) <= fVar13) {
        fVar13 = *(float *)(pcVar5 + 0x20);
      }
      if (fVar13 <= *(float *)(pcVar5 + 0x1c)) {
        fVar13 = *(float *)(pcVar5 + 0x1c);
      }
    }
    if (pcVar5[2] == '\x01') {
      if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
        fVar10 = *(float *)(param_1 + 8);
        if ((0.0 < *(float *)(pcVar5 + (ulonglong)(fVar13 < fVar10) * 4 + 0x24)) &&
           (fVar11 = fVar13 - fVar10, 1e-08 <= fVar11 * fVar11)) {
          fVar13 = *(float *)(pcVar5 + (ulonglong)(fVar13 < fVar10) * 4 + 0x24) * 0.0;
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          fVar13 = fVar10 + fVar11 * fVar13;
        }
      }
      *(float *)(param_1 + 8) = fVar13;
    }
    *(undefined1 *)((longlong)param_1 + 0x44) = 1;
    if (((fVar9 == 0.0) && (!NAN(fVar9))) && (fVar13 * *(float *)(plVar4 + 0x16) < 0.0)) {
      uVar8 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
    }
  }
  param_1[0x16] = 0x47efffffe0000000;
  param_1[0x17] = 0x47efffffe0000000;
  param_1[0x18] = 0x47efffffe0000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar6 = *param_2;
  if ((lVar6 == 0) || (lVar2 = *(longlong *)(lVar6 + 0x130), lVar2 == 0)) {
LAB_140890a70:
    lVar6 = 0;
  }
  else {
    if (DAT_14c9a51d8 == 0) {
      local_90 = &local_78;
      local_78 = FUN_1433d5220;
      local_80 = FUN_142b32f24;
      local_88 = &LAB_1462ac436;
      local_98 = &LAB_1470c7d1d;
      local_a0 = &LAB_1462ac43b;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000008;
      local_c0 = 0x10;
      local_c8 = 0x560;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14c9a51d8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) !=
        DAT_14c9a51d8 + 0x30)) goto LAB_140890a70;
  }
  param_1[0x1e] = lVar6;
  lVar6 = (**(code **)(*param_1 + 0x1f8))(param_1);
  if (lVar6 != 0) {
    lVar2 = param_1[0x1e];
    iVar1 = *(int *)(lVar2 + 0x940);
    *(uint *)(lVar2 + 0x940) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x944) < iVar1 + 1U) {
      FUN_140890db0((longlong *)(lVar2 + 0x938),iVar1);
    }
    lVar2 = *(longlong *)(lVar2 + 0x938);
    *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = param_1 + 0x1d;
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar6;
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) && (lVar2 = *(longlong *)(lVar6 + 0x130), lVar2 != 0)) {
    lVar7 = FUN_140890cca();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) goto LAB_140890a14;
  }
  lVar6 = 0;
LAB_140890a14:
  param_1[0x1f] = lVar6;
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140890cca FUN_140890cca body=228 status=ok
// SIG undefined FUN_140890cca(void)

longlong FUN_140890cca(void)

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
  if (DAT_14cb5b4c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1464cf67c;
    local_38 = &LAB_14867a3fd;
    local_40 = &LAB_145e3abd8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x770;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacterAnimInstance",&DAT_14cb5b4c8,&DAT_14867a3fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5b4c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140890db0 FUN_140890db0 body=262 status=ok
// SIG undefined FUN_140890db0(void)

void FUN_140890db0(longlong param_1,int param_2)

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



// FUNCTION 140890ec0 FUN_140890ec0 body=121 status=ok
// SIG undefined FUN_140890ec0(void)

undefined8 FUN_140890ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 0x6b) != 3)) {
    *(undefined1 *)(param_1 + 1) = 0;
    local_28 = 0;
    FUN_1400bc2c2(param_2,&local_20);
    *param_1 = local_20;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140890f42 FUN_140890f42 body=352 status=ok
// SIG undefined FUN_140890f42(void)

undefined4 FUN_140890f42(longlong param_1,undefined8 param_2,undefined ***param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined **local_d8;
  undefined1 local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined ***local_b0;
  undefined **local_a8;
  undefined ***local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = &PTR_FUN_14a1618a0;
  uVar2 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_e8 = &local_98;
  local_a0 = param_3;
  cVar1 = FUN_1408910dc();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2)
    ;
    uVar2 = 1;
    if (cVar1 != '\0') {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_d8 = &PTR_FUN_14a1618c0;
      pppuVar3 = param_3;
      if ((int)uStack_90 != local_64) {
        pppuVar3 = &local_d8;
      }
      lVar4 = 0x130;
      if (param_4 != '\0') {
        lVar4 = 0x1a8;
      }
      local_c8 = &local_98;
      local_b0 = param_3;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + lVar4))
                        (*(longlong **)(param_1 + 8),param_2,pppuVar3);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408910a4 FUN_1408910a4 body=55 status=ok
// SIG undefined FUN_1408910a4(void)

void FUN_1408910a4(longlong *param_1)

{
  FUN_144a40be0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408910dc FUN_1408910dc body=5591 status=ok
// SIG undefined FUN_1408910dc(void)

ulonglong FUN_1408910dc(longlong param_1,undefined8 param_2,longlong *param_3,char param_4,
                       longlong *param_5)

{
  undefined2 **ppuVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined7 uVar14;
  undefined2 **ppuVar15;
  uint uVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ushort uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  undefined2 *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  int iVar32;
  uint *puVar33;
  ulonglong uVar34;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  int local_1d0;
  byte local_1bb;
  char local_1ba;
  char local_1b9;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  uint *local_190;
  int local_188;
  uint local_184;
  longlong local_180;
  ulonglong local_178;
  longlong local_170;
  ulonglong local_168;
  longlong local_160;
  longlong *local_158;
  ulonglong local_150;
  undefined2 *local_148;
  undefined8 uStack_140;
  undefined2 *local_138;
  int local_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined2 *local_118;
  int local_110;
  undefined2 *local_108;
  int local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined2 *local_c8;
  uint local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_128 = 0;
  uStack_120 = 0;
  local_1b9 = param_4;
  local_198 = param_3;
  FUN_140056680(&local_138);
  FUN_1401ae5e4(&local_138);
  uVar5 = FUN_140b74eb8();
  FUN_140056680(&local_b8,uVar5);
  uVar34 = (ulonglong)((int)uStack_b0 - 1);
  if ((int)uStack_b0 == 0) {
    uVar34 = 0;
  }
  if ((int)uVar34 < 1) {
LAB_1408925d9:
    uVar5 = FUN_14047ac8c();
    FUN_1449b8608(&local_c8,uVar5,L"Cloud/");
    uVar34 = (ulonglong)(local_c0 - 1);
    if (local_c0 == 0) {
      uVar34 = 0;
    }
    if ((int)uVar34 < 1) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      puVar6 = local_c8;
      if (local_c0 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      puVar29 = &DAT_149dfb77a;
      if (local_130 != 0) {
        puVar29 = local_138;
      }
      lVar24 = 0;
LAB_140892641:
      uVar8 = *(ushort *)((longlong)puVar29 + lVar24);
      uVar22 = *(ushort *)((longlong)puVar6 + lVar24);
      if (uVar8 == uVar22) {
        iVar4 = 0;
        if ((uVar8 == 0) || (uVar34 == 1)) goto LAB_14089268c;
LAB_14089265c:
        uVar34 = uVar34 - 1;
        lVar24 = lVar24 + 2;
        goto LAB_140892641;
      }
      if ((uVar22 | uVar8) < 0x80) {
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[(uint)uVar22]) {
          iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar22];
          goto LAB_14089268c;
        }
        if (uVar34 == 1) {
          iVar4 = 0;
          goto LAB_14089268c;
        }
        goto LAB_14089265c;
      }
      iVar4 = (uint)uVar8 - (uint)uVar22;
LAB_14089268c:
      lpCriticalSection = (LPCRITICAL_SECTION)(ulonglong)CONCAT11((char)(uVar22 >> 8),iVar4 == 0);
    }
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar6 = local_b8;
    if ((int)uStack_b0 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    puVar29 = &DAT_149dfb77a;
    if (local_130 != 0) {
      puVar29 = local_138;
    }
    lVar24 = 0;
    while( true ) {
      uVar8 = *(ushort *)((longlong)puVar29 + lVar24);
      uVar16 = (uint)uVar8;
      uVar22 = *(ushort *)((longlong)puVar6 + lVar24);
      uVar18 = (ulonglong)uVar22;
      if (uVar8 != uVar22) break;
      lpCriticalSection = (LPCRITICAL_SECTION)CONCAT71((uint7)(byte)(uVar22 >> 8),1);
      if ((uVar8 == 0) || (uVar34 == 1)) goto LAB_1408911ed;
LAB_1408911bd:
      uVar34 = uVar34 - 1;
      lVar24 = lVar24 + 2;
    }
    if ((uVar22 | uVar8) < 0x80) {
      uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar8];
      uVar18 = (ulonglong)(byte)(&DAT_149e05da0)[uVar22];
      if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar22]) goto LAB_1408925cd;
      if (uVar34 != 1) goto LAB_1408911bd;
    }
    else {
LAB_1408925cd:
      if (uVar16 != (uint)uVar18) goto LAB_1408925d9;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)CONCAT71((int7)(uVar18 >> 8),1);
  }
LAB_1408911ed:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((char)lpCriticalSection == '\0') {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
    EnterCriticalSection(lpCriticalSection);
    FUN_140115598(&local_128,param_1 + 0x10);
    LeaveCriticalSection(lpCriticalSection);
  }
  local_148 = (undefined2 *)0x0;
  uStack_140 = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar14 = (undefined7)((ulonglong)lpCriticalSection >> 8);
  if ((int)uStack_120 < 1) {
    puVar33 = (uint *)CONCAT71(uVar14,1);
  }
  else {
    local_158 = param_5 + 7;
    puVar33 = (uint *)CONCAT71(uVar14,1);
    lVar24 = 0;
    do {
      uVar18 = 0;
      uVar34 = *(ulonglong *)(local_128 + 8 + lVar24 * 0x10);
      if ((int)uStack_b0 != local_84) {
        FUN_141539c3e(&local_b8);
        FUN_14170af7a(&local_b8);
      }
      puVar6 = &DAT_149dfb77a;
      if (local_130 != 0) {
        puVar6 = local_138;
      }
      FUN_140056680(&local_118,puVar6);
      uVar16 = local_110 - 1;
      if (local_110 == 0) {
        uVar16 = 0;
      }
      local_1bb = (byte)puVar33;
      local_180 = lVar24;
      if ((0 < (int)uVar16) && (local_118[(ulonglong)uVar16 - 1] != 0x2f)) {
        FUN_1400020e8(&local_118,&DAT_149e065c6,1);
      }
      iVar4 = *(int *)(uVar34 + 0xd0);
      uVar30 = (ulonglong)(iVar4 - 1);
      if (iVar4 == 0) {
        uVar30 = uVar18;
      }
      puVar6 = *(undefined2 **)(uVar34 + 200);
      local_1b8 = uVar34;
      if ((int)uVar30 < 1) {
LAB_14089245b:
        uVar16 = local_110 - 1;
        if (local_110 == 0) {
          uVar16 = 0;
        }
        if (0 < (int)uVar16) {
          puVar29 = local_118;
          if (local_110 == 0) {
            puVar29 = &DAT_149dfb77a;
          }
          uVar25 = (ulonglong)uVar16;
          puVar17 = puVar6;
          if (iVar4 == 0) {
            puVar17 = &DAT_149dfb77a;
          }
          lVar24 = 0;
          while( true ) {
            uVar8 = *(ushort *)((longlong)puVar17 + lVar24);
            uVar19 = (ulonglong)uVar8;
            uVar22 = *(ushort *)((longlong)puVar29 + lVar24);
            if (uVar8 != uVar22) break;
            if (uVar8 == 0) goto LAB_1408913f3;
LAB_1408924a4:
            uVar25 = uVar25 - 1;
            if (uVar25 == 0) goto LAB_1408913f3;
            lVar24 = lVar24 + 2;
          }
          puVar33 = (uint *)(ulonglong)(uint)(uVar22 | uVar8);
          if ((uVar22 | uVar8) < 0x80) {
            puVar33 = (uint *)&DAT_149e05da0;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
            uVar21 = (ulonglong)uVar22;
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
            if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1408924a4;
          }
          if (uVar8 != uVar22) goto LAB_140892021;
          goto LAB_1408913f3;
        }
      }
      else {
        puVar29 = puVar6;
        if (iVar4 == 0) {
          puVar29 = &DAT_149dfb77a;
        }
        puVar17 = local_118;
        if (local_110 == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        lVar24 = 0;
        uVar25 = uVar30;
        while( true ) {
          uVar8 = *(ushort *)((longlong)puVar17 + lVar24);
          puVar33 = (uint *)(ulonglong)uVar8;
          uVar16 = (uint)uVar8;
          uVar22 = *(ushort *)((longlong)puVar29 + lVar24);
          uVar10 = (uint)uVar22;
          if (uVar8 != uVar22) break;
          if ((uVar8 == 0) || (uVar25 == 1)) goto LAB_1408913f3;
LAB_1408913b6:
          uVar25 = uVar25 - 1;
          lVar24 = lVar24 + 2;
        }
        if ((uVar22 | uVar8) < 0x80) {
          puVar12 = puVar33 + 0x52781768;
          puVar33 = (uint *)0x0;
          uVar16 = (uint)(byte)*puVar12;
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar22];
          if ((byte)*puVar12 == (&DAT_149e05da0)[uVar22]) {
            if (uVar25 != 1) goto LAB_1408913b6;
            goto LAB_1408913f3;
          }
        }
        puVar33 = (uint *)(ulonglong)(uVar16 - uVar10);
        if (uVar16 - uVar10 != 0) goto LAB_14089245b;
LAB_1408913f3:
        local_1ba = *(char *)(uVar34 + 0x214);
        if (local_1ba == '\x01') {
          AcquireSRWLockShared((PSRWLOCK)(uVar34 + 0x188));
          iVar4 = *(int *)(uVar34 + 0xd0);
          puVar6 = *(undefined2 **)(uVar34 + 200);
          uVar30 = (ulonglong)(iVar4 - 1);
          if (iVar4 == 0) {
            uVar30 = uVar18;
          }
        }
        iVar20 = (int)uVar30;
        if (iVar20 < 1) {
          uVar30 = (ulonglong)(local_110 - 1);
          if (local_110 == 0) {
            uVar30 = uVar18;
          }
          uVar16 = (uint)uVar30;
LAB_1408914bd:
          if (iVar20 < 2) {
            iVar20 = 1;
          }
          uVar10 = iVar20 - 1;
          if ((int)uVar10 < (int)uVar16) {
            uVar16 = uVar10;
          }
          uVar23 = 0;
          if (0 < (int)uVar16) {
            uVar23 = uVar16;
          }
          if (uVar10 == uVar23) {
            lVar24 = 0;
            if (uVar10 == 0) {
LAB_140891562:
              lVar24 = 0;
              uVar30 = 0;
            }
            else {
              uVar30 = 0;
              if (0 < (int)uVar16) {
                uVar18 = (ulonglong)uVar10;
                lVar27 = 0;
                while( true ) {
                  uVar8 = *(ushort *)((longlong)puVar6 + lVar27);
                  uVar30 = (ulonglong)uVar8;
                  uVar22 = *(ushort *)((longlong)local_118 + lVar27);
                  if (uVar8 != uVar22) {
                    if ((uVar22 | uVar8) < 0x80) {
                      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
                      uVar25 = (ulonglong)uVar22;
                      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
                      if ((&DAT_149e05da0)[uVar30] == (&DAT_149e05da0)[uVar25]) {
                        if (uVar18 != 1) goto LAB_140891527;
                        goto LAB_140891562;
                      }
                    }
                    uVar34 = local_1b8;
                    if (uVar8 != uVar22) goto LAB_140892004;
                    goto LAB_140891562;
                  }
                  lVar24 = 0;
                  if (uVar8 == 0) goto LAB_140891562;
                  uVar30 = 0;
                  if (uVar18 == 1) break;
LAB_140891527:
                  uVar18 = uVar18 - 1;
                  lVar27 = lVar27 + 2;
                }
              }
            }
            goto LAB_140891595;
          }
        }
        else {
          puVar29 = puVar6;
          if (iVar4 == 0) {
            puVar29 = &DAT_149dfb77a;
          }
          puVar17 = local_118;
          if (local_110 == 0) {
            puVar17 = &DAT_149dfb77a;
          }
          lVar24 = 0;
          while( true ) {
            uVar8 = *(ushort *)((longlong)puVar17 + lVar24);
            uVar10 = (uint)uVar8;
            uVar22 = *(ushort *)((longlong)puVar29 + lVar24);
            puVar33 = (uint *)(ulonglong)uVar22;
            if (uVar8 != uVar22) {
              if ((uVar22 | uVar8) < 0x80) {
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                puVar33 = (uint *)(ulonglong)(byte)(&DAT_149e05da0)[uVar22];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar22]) goto LAB_14089147b;
              }
              uVar30 = (ulonglong)(local_110 - 1);
              if (local_110 == 0) {
                uVar30 = uVar18;
              }
              uVar16 = (uint)uVar30;
              if (uVar10 == (uint)puVar33) goto LAB_14089156f;
              goto LAB_1408914bd;
            }
            if (uVar8 == 0) break;
LAB_14089147b:
            uVar30 = uVar30 - 1;
            if (uVar30 == 0) break;
            lVar24 = lVar24 + 2;
          }
          uVar30 = (ulonglong)(local_110 - 1);
          if (local_110 == 0) {
            uVar30 = uVar18;
          }
LAB_14089156f:
          uVar10 = (uint)uVar30;
          uVar16 = uVar10 - iVar20;
          if ((int)uVar10 <= (int)(uVar10 - iVar20)) {
            uVar16 = uVar10;
          }
          uVar30 = (ulonglong)uVar16;
          if ((int)uVar16 < 1) {
            uVar30 = uVar18;
          }
          lVar24 = (longlong)local_118 +
                   ((longlong)(int)uVar10 * 2 - (ulonglong)(uint)((int)uVar30 * 2));
LAB_140891595:
          puVar33 = (uint *)(uVar34 + 0xf8);
          local_e8 = 0;
          uStack_e0 = 0;
          iVar4 = *(int *)(uVar34 + 0x110);
          if (iVar4 == 0) {
            uVar25 = 1;
            uVar18 = 0;
            iVar20 = 0;
            iVar9 = 0;
          }
          else {
            puVar12 = *(uint **)(uVar34 + 0x108);
            if (*(uint **)(uVar34 + 0x108) == (uint *)0x0) {
              puVar12 = puVar33;
            }
            uVar16 = *puVar12;
            if (uVar16 == 0) {
              iVar20 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar20 = iVar4 + -1;
              }
              uVar18 = 0;
              uVar25 = (ulonglong)(uint)(iVar20 >> 5);
              if (iVar20 >> 5 < 1) {
                uVar25 = uVar18;
              }
              iVar20 = 0;
              do {
                if (uVar25 == uVar18) goto LAB_140891fc9;
                iVar20 = iVar20 + 0x20;
                uVar16 = puVar12[uVar18 + 1];
                uVar18 = uVar18 + 1;
              } while (uVar16 == 0);
            }
            else {
              uVar18 = 0;
              iVar20 = 0;
            }
            uVar25 = (ulonglong)(-uVar16 & uVar16);
            uVar19 = uVar25 * 2 + 1;
            lVar27 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            iVar9 = (iVar20 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar9) {
              iVar9 = iVar4;
            }
          }
          if (iVar9 < iVar4) {
            local_170 = uVar34 + 200;
            local_190 = puVar33;
            local_178 = uVar30;
            local_168 = uVar30;
            local_160 = lVar24;
            uVar16 = 0xffffffff;
            do {
              local_184 = uVar16;
              lVar27 = *(longlong *)(uVar34 + 0xe8);
              iVar11 = (int)uVar30;
              local_1a0 = uVar25;
              if (iVar11 == 0) {
LAB_140891748:
                lVar24 = (longlong)iVar9 * 0x68;
                local_188 = iVar20;
                local_150 = uVar18;
                FUN_1404740bc(&local_f8,local_170,lVar27 + lVar24);
                if (local_1b9 == '\0') {
                  iVar4 = (int)local_f0 + -1;
                  if ((int)local_f0 == 0) {
                    iVar4 = 0;
                  }
                  iVar20 = local_110 + -1;
                  if (local_110 == 0) {
                    iVar20 = 0;
                  }
                  if (iVar20 < iVar4) {
                    local_1d0 = iVar20 + 1;
                    local_1d8 = local_1d8 & 0xffffffff00000000;
                    iVar4 = FUN_1447ee042(&local_f8,&DAT_149e065c6,1,0);
                    if (iVar4 != -1) {
                      if (-1 < iVar4) {
                        puVar6 = &DAT_149dfb77a;
                        if ((int)local_f0 != 0) {
                          puVar6 = local_f8;
                        }
                        iVar20 = (int)local_f0 + -1;
                        if ((int)local_f0 == 0) {
                          iVar20 = 0;
                        }
                        if (iVar4 + 1 < iVar20) {
                          iVar20 = iVar4 + 1;
                        }
                        if (iVar20 < 1) {
                          iVar20 = 0;
                        }
                        FUN_14006620a(&local_108,puVar6,iVar20);
                        puVar6 = local_108;
                        uVar16 = local_100 - 1;
                        if (local_100 == 0) {
                          uVar16 = 0;
                        }
                        if (0 < (int)uVar16) {
                          iVar4 = wcsncmp(L"/",local_108 + ((ulonglong)uVar16 - 1),1);
                          uVar16 = uVar16 - (iVar4 == 0);
                        }
                        local_c8 = puVar6;
                        local_c0 = uVar16;
                        FUN_140115b7a(local_d8,&local_c8);
                        cVar3 = (**(code **)(*local_198 + 8))(local_198,local_d8);
                        if (cVar3 != '\0') {
                          FUN_1405e9454(&local_e8,&local_108);
                        }
                        if (local_108 != (undefined2 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      goto LAB_140891eb6;
                    }
                  }
                  lVar27 = *(longlong *)(uVar34 + 0xe8);
                  puVar33 = (uint *)(lVar27 + lVar24 + 0x20);
                  iVar4 = *(int *)(lVar27 + lVar24 + 0x38);
                  if (iVar4 == 0) {
                    uVar18 = 1;
                    uVar34 = 0;
                    iVar20 = 0;
                    iVar9 = 0;
                  }
                  else {
                    puVar12 = *(uint **)(lVar27 + 0x30 + lVar24);
                    if (puVar12 == (uint *)0x0) {
                      puVar12 = puVar33;
                    }
                    uVar16 = *puVar12;
                    if (uVar16 == 0) {
                      iVar20 = iVar4 + 0x1e;
                      if (-1 < iVar4 + -1) {
                        iVar20 = iVar4 + -1;
                      }
                      uVar34 = 0;
                      uVar18 = (ulonglong)(uint)(iVar20 >> 5);
                      if (iVar20 >> 5 < 1) {
                        uVar18 = uVar34;
                      }
                      iVar20 = 0;
                      do {
                        if (uVar18 == uVar34) goto LAB_140891eb6;
                        iVar20 = iVar20 + 0x20;
                        uVar16 = puVar12[uVar34 + 1];
                        uVar34 = uVar34 + 1;
                      } while (uVar16 == 0);
                    }
                    else {
                      uVar34 = 0;
                      iVar20 = 0;
                    }
                    uVar18 = (ulonglong)(-uVar16 & uVar16);
                    uVar30 = uVar18 * 2 + 1;
                    lVar26 = 0x3f;
                    if (uVar30 != 0) {
                      for (; uVar30 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                      }
                    }
                    iVar9 = (iVar20 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                    if (iVar4 <= iVar9) {
                      iVar9 = iVar4;
                    }
                  }
                  if (iVar9 < iVar4) {
                    lVar24 = lVar24 + lVar27;
                    uVar16 = 0xffffffff;
                    do {
                      local_1a8 = CONCAT44(local_1a8._4_4_,iVar20);
                      lVar27 = *(longlong *)(lVar24 + 0x10);
                      lVar26 = (longlong)iVar9 * 0x20;
                      puVar6 = *(undefined2 **)(lVar27 + lVar26);
                      iVar4 = *(int *)(lVar27 + 8 + lVar26);
                      uVar10 = iVar4 - 1;
                      if (iVar4 == 0) {
                        uVar10 = 0;
                      }
                      local_1b0 = uVar34;
                      if (0 < (int)uVar10) {
                        iVar4 = wcsncmp(L"/",puVar6 + ((ulonglong)uVar10 - 1),1);
                        uVar10 = uVar10 - (iVar4 == 0);
                      }
                      local_c0 = uVar10;
                      local_c8 = puVar6;
                      FUN_140115b7a(local_d8,&local_c8);
                      cVar3 = (**(code **)(*local_198 + 8))(local_198,local_d8);
                      if (cVar3 != '\0') {
                        FUN_1404740bc(&local_c8,&local_f8,lVar27 + lVar26);
                        FUN_140e830ae(&local_b8,local_d8,&local_c8,0);
                        if (local_c8 != (undefined2 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      uVar16 = uVar16 & ~(uint)uVar18;
                      puVar12 = *(uint **)(lVar24 + 0x30);
                      if (*(uint **)(lVar24 + 0x30) == (uint *)0x0) {
                        puVar12 = puVar33;
                      }
                      iVar4 = *(int *)(lVar24 + 0x38);
                      iVar9 = (int)local_1b0;
                      lVar27 = (longlong)iVar9;
                      uVar10 = puVar12[lVar27] & uVar16;
                      uVar34 = local_1b0;
                      iVar20 = (int)local_1a8;
                      if (uVar10 == 0) {
                        iVar11 = iVar4 + 0x1e;
                        if (-1 < iVar4 + -1) {
                          iVar11 = iVar4 + -1;
                        }
                        iVar11 = iVar11 >> 5;
                        iVar28 = iVar11;
                        if (iVar11 < iVar9) {
                          iVar28 = iVar9;
                        }
                        if (iVar11 <= iVar9) break;
                        lVar26 = 0;
                        while( true ) {
                          iVar20 = iVar20 + 0x20;
                          uVar10 = puVar12[lVar27 + lVar26 + 1];
                          if (uVar10 != 0) break;
                          lVar26 = lVar26 + 1;
                          if (iVar28 - lVar27 == lVar26) goto LAB_140891eb6;
                        }
                        uVar16 = 0xffffffff;
                        uVar34 = (ulonglong)(iVar9 + (int)lVar26 + 1);
                      }
                      uVar18 = (ulonglong)(-uVar10 & uVar10);
                      uVar30 = uVar18 * 2 + 1;
                      lVar27 = 0x3f;
                      if (uVar30 != 0) {
                        for (; uVar30 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                        }
                      }
                      iVar9 = (iVar20 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                    } while (iVar9 < iVar4);
                  }
                }
                else {
                  lVar27 = *(longlong *)(uVar34 + 0xe8);
                  puVar33 = (uint *)(lVar27 + lVar24 + 0x20);
                  iVar4 = *(int *)(lVar27 + lVar24 + 0x38);
                  if (iVar4 == 0) {
                    uVar18 = 1;
                    uVar34 = 0;
                    iVar20 = 0;
                    iVar9 = 0;
                  }
                  else {
                    puVar12 = *(uint **)(lVar27 + 0x30 + lVar24);
                    if (puVar12 == (uint *)0x0) {
                      puVar12 = puVar33;
                    }
                    uVar16 = *puVar12;
                    if (uVar16 == 0) {
                      iVar20 = iVar4 + 0x1e;
                      if (-1 < iVar4 + -1) {
                        iVar20 = iVar4 + -1;
                      }
                      uVar34 = 0;
                      uVar18 = (ulonglong)(uint)(iVar20 >> 5);
                      if (iVar20 >> 5 < 1) {
                        uVar18 = uVar34;
                      }
                      iVar20 = 0;
                      do {
                        if (uVar18 == uVar34) goto LAB_140891b9d;
                        iVar20 = iVar20 + 0x20;
                        uVar16 = puVar12[uVar34 + 1];
                        uVar34 = uVar34 + 1;
                      } while (uVar16 == 0);
                    }
                    else {
                      uVar34 = 0;
                      iVar20 = 0;
                    }
                    uVar18 = (ulonglong)(-uVar16 & uVar16);
                    uVar30 = uVar18 * 2 + 1;
                    lVar26 = 0x3f;
                    if (uVar30 != 0) {
                      for (; uVar30 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                      }
                    }
                    iVar9 = (iVar20 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                    if (iVar4 <= iVar9) {
                      iVar9 = iVar4;
                    }
                  }
                  if (iVar9 < iVar4) {
                    lVar24 = lVar24 + lVar27;
                    uVar16 = 0xffffffff;
                    do {
                      local_1b0 = CONCAT44(local_1b0._4_4_,iVar20);
                      lVar27 = *(longlong *)(lVar24 + 0x10);
                      lVar26 = (longlong)iVar9 * 0x20;
                      puVar6 = *(undefined2 **)(lVar27 + lVar26);
                      iVar4 = *(int *)(lVar27 + 8 + lVar26);
                      uVar10 = iVar4 - 1;
                      if (iVar4 == 0) {
                        uVar10 = 0;
                      }
                      local_1a8 = uVar34;
                      if (0 < (int)uVar10) {
                        iVar4 = wcsncmp(L"/",puVar6 + ((ulonglong)uVar10 - 1),1);
                        uVar10 = uVar10 - (iVar4 == 0);
                      }
                      local_c0 = uVar10;
                      local_c8 = puVar6;
                      FUN_140115b7a(local_d8,&local_c8);
                      cVar3 = (**(code **)(*local_198 + 8))(local_198,local_d8);
                      if (cVar3 != '\0') {
                        FUN_1404740bc(&local_c8,&local_f8,lVar27 + lVar26);
                        FUN_140e830ae(&local_b8,local_d8,&local_c8,0);
                        if (local_c8 != (undefined2 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      uVar16 = uVar16 & ~(uint)uVar18;
                      puVar12 = *(uint **)(lVar24 + 0x30);
                      if (*(uint **)(lVar24 + 0x30) == (uint *)0x0) {
                        puVar12 = puVar33;
                      }
                      iVar4 = *(int *)(lVar24 + 0x38);
                      iVar9 = (int)local_1a8;
                      lVar27 = (longlong)iVar9;
                      uVar10 = puVar12[lVar27] & uVar16;
                      uVar34 = local_1a8;
                      iVar20 = (uint)local_1b0;
                      if (uVar10 == 0) {
                        iVar11 = iVar4 + 0x1e;
                        if (-1 < iVar4 + -1) {
                          iVar11 = iVar4 + -1;
                        }
                        iVar11 = iVar11 >> 5;
                        iVar28 = iVar11;
                        if (iVar11 < iVar9) {
                          iVar28 = iVar9;
                        }
                        if (iVar11 <= iVar9) break;
                        lVar26 = 0;
                        while( true ) {
                          iVar20 = iVar20 + 0x20;
                          uVar10 = puVar12[lVar27 + lVar26 + 1];
                          if (uVar10 != 0) break;
                          lVar26 = lVar26 + 1;
                          if (iVar28 - lVar27 == lVar26) goto LAB_140891b9d;
                        }
                        uVar16 = 0xffffffff;
                        uVar34 = (ulonglong)(iVar9 + (int)lVar26 + 1);
                      }
                      uVar18 = (ulonglong)(-uVar10 & uVar10);
                      uVar30 = uVar18 * 2 + 1;
                      lVar27 = 0x3f;
                      if (uVar30 != 0) {
                        for (; uVar30 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                        }
                      }
                      iVar9 = (iVar20 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                    } while (iVar9 < iVar4);
                  }
LAB_140891b9d:
                  puVar6 = local_f8;
                  if (local_110 == (int)local_f0) {
                    if (1 < local_110) {
                      lVar24 = 0;
                      while( true ) {
                        uVar8 = *(ushort *)((longlong)local_118 + lVar24);
                        uVar34 = (ulonglong)uVar8;
                        uVar22 = *(ushort *)((longlong)local_f8 + lVar24);
                        if (uVar8 != uVar22) break;
                        if (uVar8 == 0) goto LAB_140891eb6;
LAB_140891be1:
                        lVar24 = lVar24 + 2;
                      }
                      if ((uVar22 | uVar8) < 0x80) {
                        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar34];
                        uVar18 = (ulonglong)uVar22;
                        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                        if ((&DAT_149e05da0)[uVar34] == (&DAT_149e05da0)[uVar18])
                        goto LAB_140891be1;
                      }
                      if (uVar8 != uVar22) goto LAB_140891c2b;
                    }
                  }
                  else if (local_110 + (int)local_f0 != 1) {
LAB_140891c2b:
                    uVar16 = (int)local_f0 - 1;
                    if ((int)local_f0 == 0) {
                      uVar16 = 0;
                    }
                    if (0 < (int)uVar16) {
                      iVar4 = wcsncmp(L"/",local_f8 + ((ulonglong)uVar16 - 1),1);
                      uVar16 = uVar16 - (iVar4 == 0);
                    }
                    local_c8 = puVar6;
                    local_c0 = uVar16;
                    FUN_140115b7a(local_d8,&local_c8);
                    cVar3 = (**(code **)(*local_198 + 8))();
                    if (cVar3 != '\0') {
                      lVar24 = (longlong)(int)uStack_e0;
                      uVar16 = (int)uStack_e0 + 1;
                      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar16);
                      if (uStack_e0._4_4_ < uVar16) {
                        FUN_1447a1bd6(&local_e8);
                      }
                      lVar24 = lVar24 * 0x10;
                      *(undefined8 *)(local_e8 + lVar24) = 0;
                      *(undefined2 **)(local_e8 + lVar24) = local_f8;
                      local_f8 = (undefined2 *)0x0;
                      *(int *)(local_e8 + 8 + lVar24) = (int)local_f0;
                      *(undefined4 *)(local_e8 + 0xc + lVar24) = local_f0._4_4_;
                      local_f0 = 0;
                    }
                  }
                }
LAB_140891eb6:
                if (local_f8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                iVar4 = *(int *)(local_1b8 + 0x110);
                puVar33 = local_190;
                uVar18 = local_150;
                uVar34 = local_1b8;
                uVar30 = local_168;
                lVar24 = local_160;
                iVar20 = local_188;
              }
              else {
                lVar26 = (longlong)iVar9 * 0x68;
                iVar28 = *(int *)(lVar27 + 8 + lVar26);
                iVar32 = iVar28 + -1;
                if (iVar28 == 0) {
                  iVar32 = 0;
                }
                iVar28 = iVar32;
                if (iVar11 < iVar32) {
                  iVar28 = iVar11;
                }
                iVar13 = 0;
                if (0 < iVar28) {
                  iVar13 = iVar28;
                }
                if (iVar11 <= iVar32) {
                  if (iVar28 < 1) {
                    iVar11 = iVar11 - iVar13;
                  }
                  else {
                    lVar31 = 0;
                    uVar25 = local_178;
                    while( true ) {
                      uVar8 = *(ushort *)(lVar24 + lVar31);
                      uVar16 = (uint)uVar8;
                      uVar22 = *(ushort *)(*(longlong *)(lVar26 + lVar27) + lVar31);
                      uVar10 = (uint)uVar22;
                      if (uVar8 != uVar22) break;
                      if ((uVar8 == 0) || (uVar25 == 1)) goto LAB_140891728;
LAB_1408916f1:
                      uVar25 = uVar25 - 1;
                      lVar31 = lVar31 + 2;
                    }
                    puVar33 = local_190;
                    if (0x7f < (uVar22 | uVar8)) {
LAB_140891fb1:
                      iVar11 = iVar11 - iVar13;
                      if (uVar16 - uVar10 != 0) {
                        iVar11 = uVar16 - uVar10;
                      }
                      goto LAB_14089173f;
                    }
                    uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar22];
                    if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar22]) goto LAB_140891fb1;
                    if (uVar25 != 1) goto LAB_1408916f1;
LAB_140891728:
                    iVar11 = iVar11 - iVar13;
                  }
LAB_14089173f:
                  if (iVar11 == 0) goto LAB_140891748;
                }
              }
              uVar16 = local_184 & ~(uint)local_1a0;
              puVar12 = *(uint **)(uVar34 + 0x108);
              if (*(uint **)(uVar34 + 0x108) == (uint *)0x0) {
                puVar12 = puVar33;
              }
              iVar9 = (int)uVar18;
              lVar27 = (longlong)iVar9;
              uVar10 = puVar12[lVar27] & uVar16;
              if (uVar10 == 0) {
                iVar11 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar11 = iVar4 + -1;
                }
                iVar11 = iVar11 >> 5;
                iVar28 = iVar11;
                if (iVar11 < iVar9) {
                  iVar28 = iVar9;
                }
                if (iVar11 <= iVar9) break;
                lVar26 = 0;
                while( true ) {
                  iVar20 = iVar20 + 0x20;
                  uVar10 = puVar12[lVar27 + lVar26 + 1];
                  if (uVar10 != 0) break;
                  lVar26 = lVar26 + 1;
                  if (iVar28 - lVar27 == lVar26) goto LAB_140891fc9;
                }
                uVar18 = (ulonglong)(iVar9 + (int)lVar26 + 1);
                uVar16 = 0xffffffff;
              }
              uVar25 = (ulonglong)(-uVar10 & uVar10);
              uVar19 = uVar25 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar9 = (iVar20 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
            } while (iVar9 < iVar4);
          }
LAB_140891fc9:
          FUN_140e82fa0(&local_b8,&local_e8);
          FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
        }
LAB_140892004:
        if (local_1ba != '\0') {
          ReleaseSRWLockShared((PSRWLOCK)(uVar34 + 0x188));
        }
      }
LAB_140892021:
      bVar2 = local_1bb;
      puVar33 = (uint *)CONCAT71((int7)((ulonglong)puVar33 >> 8),local_1bb);
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_90 == 0) {
        uVar34 = 1;
        iVar4 = 0;
        uVar18 = 0;
        iVar20 = 0;
      }
      else {
        puVar12 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar12 = local_a8;
        }
        uVar16 = *puVar12;
        if (uVar16 == 0) {
          iVar4 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar4 = local_90 + -1;
          }
          uVar18 = 0;
          uVar34 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar34 = uVar18;
          }
          iVar4 = 0;
          do {
            if (uVar34 == uVar18) goto LAB_140892415;
            iVar4 = iVar4 + 0x20;
            uVar16 = puVar12[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar16 == 0);
        }
        else {
          iVar4 = 0;
          uVar18 = 0;
        }
        uVar34 = (ulonglong)(-uVar16 & uVar16);
        uVar30 = uVar34 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar20 = (iVar4 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (local_90 <= iVar20) {
          iVar20 = local_90;
        }
      }
      if ((iVar20 < local_90) && ((bVar2 & 1) != 0)) {
        uVar16 = 0xffffffff;
        do {
          ppuVar1 = (undefined2 **)(local_b8 + (longlong)iVar20 * 0xc);
          uVar10 = *(uint *)(ppuVar1 + 1);
          uVar23 = 0;
          local_1bb = (byte)puVar33;
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar4);
          local_1b0 = CONCAT44(local_1b0._4_4_,uVar16);
          if ((uVar10 < 2) || ((*ppuVar1)[(longlong)(int)(uVar10 - 1) + -1] != 0x2f)) {
            local_1a0 = 0;
            ppuVar15 = ppuVar1;
          }
          else {
            if ((int)(uVar10 - 1) < 1) {
              uVar10 = 0;
            }
            uVar16 = uStack_140._4_4_;
            uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
            if ((int)uVar16 < (int)uVar10) {
              FUN_1446f8c06(&local_148);
            }
            if (local_148 != (undefined2 *)0x0) {
              *local_148 = 0;
            }
            puVar6 = &DAT_149dfb77a;
            if (*(int *)(ppuVar1 + 1) != 0) {
              puVar6 = *ppuVar1;
            }
            uVar5 = FUN_1400020e8(&local_148,puVar6);
            local_1a0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            ppuVar15 = &local_148;
            uVar10 = (uint)uStack_140;
          }
          iVar4 = uVar10 - 1;
          if (uVar10 == 0) {
            iVar4 = 0;
          }
          if (0 < iVar4) {
            puVar6 = &DAT_149dfb77a;
            if (uVar10 != 0) {
              puVar6 = *ppuVar15;
            }
            lVar24 = 0;
            uVar30 = 0;
            do {
              uVar16 = ((uint)(0x19 < (ushort)puVar6[lVar24] - 0x61) * 0x20 +
                       (uint)(ushort)puVar6[lVar24]) - 0x20;
              uVar23 = (uint)(uVar30 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar30 ^ uVar16) & 0xff) * 4);
              puVar33 = (uint *)0x0;
              uVar23 = uVar23 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar23 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
              uVar30 = (ulonglong)uVar23;
              lVar24 = lVar24 + 1;
            } while (iVar4 != (int)lVar24);
          }
          uVar16 = (uint)local_1b0;
          if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
            plVar7 = (longlong *)param_5[8];
            if ((longlong *)param_5[8] == (longlong *)0x0) {
              plVar7 = local_158;
            }
            iVar4 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_5[9] - 1U & uVar23) * 4);
            if (iVar4 != -1) {
              lVar24 = *param_5;
LAB_140892276:
              lVar27 = (longlong)iVar4;
              uVar23 = *(uint *)(lVar24 + 8 + lVar27 * 0x18);
              if (uVar23 == uVar10) {
                if (1 < (int)uVar10) {
                  lVar26 = 0;
                  do {
                    uVar8 = *(ushort *)(*(longlong *)(lVar24 + lVar27 * 0x18) + lVar26);
                    uVar22 = *(ushort *)((longlong)*ppuVar15 + lVar26);
                    if (uVar8 == uVar22) {
                      if (uVar8 == 0) break;
                    }
                    else {
                      puVar33 = (uint *)(ulonglong)(uint)(uVar22 | uVar8);
                      if (0x7f < (uVar22 | uVar8)) {
                        iVar4 = (uint)uVar8 - (uint)uVar22;
                        goto LAB_140892308;
                      }
                      if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[(uint)uVar22])
                      goto code_r0x000140892305;
                    }
                    lVar26 = lVar26 + 2;
                  } while( true );
                }
                goto LAB_140892407;
              }
              if (uVar23 + uVar10 == 1) goto LAB_140892407;
              goto LAB_140892294;
            }
          }
LAB_14089231f:
          FUN_14482b35e(param_5,&local_c8,ppuVar15,0);
          local_1d8 = local_1b8;
          uVar10 = (**(code **)(*local_198 + 0x10))(local_198,ppuVar1,ppuVar15,local_1a0);
          puVar33 = (uint *)(ulonglong)uVar10;
LAB_140892354:
          uVar16 = uVar16 & ~(uint)uVar34;
          puVar12 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar12 = local_a8;
          }
          iVar20 = (int)uVar18;
          lVar24 = (longlong)iVar20;
          uVar10 = puVar12[lVar24] & uVar16;
          iVar4 = (int)local_1a8;
          if (uVar10 == 0) {
            iVar9 = local_90 + 0x1e;
            if (-1 < local_90 + -1) {
              iVar9 = local_90 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar11 = iVar9;
            if (iVar9 < iVar20) {
              iVar11 = iVar20;
            }
            if (iVar9 <= iVar20) break;
            lVar27 = 0;
            while( true ) {
              iVar4 = iVar4 + 0x20;
              uVar10 = puVar12[lVar24 + lVar27 + 1];
              if (uVar10 != 0) break;
              lVar27 = lVar27 + 1;
              if (iVar11 - lVar24 == lVar27) goto LAB_140892415;
            }
            uVar18 = (ulonglong)(iVar20 + (int)lVar27 + 1);
            uVar16 = 0xffffffff;
          }
          uVar34 = (ulonglong)(-uVar10 & uVar10);
          uVar30 = uVar34 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar20 = (iVar4 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if ((local_90 <= iVar20) || (((ulonglong)puVar33 & 1) == 0)) break;
        } while( true );
      }
LAB_140892415:
      lVar24 = local_180 + 1;
    } while (lVar24 < (int)uStack_120);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1408910a4(&local_b8);
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14482b2f5(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar33 & 0xffffff01;
code_r0x000140892305:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar8] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar22];
LAB_140892308:
  if (iVar4 == 0) {
LAB_140892407:
    puVar33 = (uint *)CONCAT71((int7)((ulonglong)puVar33 >> 8),local_1bb);
    goto LAB_140892354;
  }
LAB_140892294:
  iVar4 = *(int *)(lVar24 + 0x10 + lVar27 * 0x18);
  if (iVar4 == -1) goto LAB_14089231f;
  goto LAB_140892276;
}



// FUNCTION 1408926b4 FUN_1408926b4 body=43 status=ok
// SIG undefined FUN_1408926b4(void)

void FUN_1408926b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1408926e0(lVar1 + 8);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1408926e0 FUN_1408926e0 body=189 status=ok
// SIG undefined FUN_1408926e0(void)

void FUN_1408926e0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(ulonglong *)(param_1 + 0x878) < 0xffffffff00000000) {
    FUN_1407df804(&DAT_14c998008);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0x800) = 0;
  FUN_14089279e(param_1 + 0x800,uVar1);
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (*(int *)(param_1 + 0x824) != 0) {
    FUN_140389cc2(param_1 + 0x818,0);
  }
  FUN_1408927d8(param_1 + 0x838);
  FUN_140441f4a(param_1 + 0x818);
  FUN_14089279e(param_1 + 0x800,*(undefined8 *)(param_1 + 0x800));
  lVar2 = 0x7e8;
  do {
    if (*(longlong *)(param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != -0x18);
  return;
}



// FUNCTION 14089279e FUN_14089279e body=58 status=ok
// SIG undefined FUN_14089279e(void)

void FUN_14089279e(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_140892953(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 1408927d8 FUN_1408927d8 body=148 status=ok
// SIG undefined FUN_1408927d8(void)

void FUN_1408927d8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14089286e();
  puVar1 = (undefined8 *)param_1[2];
  param_1[2] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined1 *)(param_1 + 7) = 0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089286e FUN_14089286e body=110 status=ok
// SIG undefined FUN_14089286e(void)

undefined8 * FUN_14089286e(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 3) * -0x3333333333333333;
  iVar1 = (int)uVar2;
  *(int *)(param_1 + 1) = iVar1;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1408928dc(param_1,uVar2 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 1408928dc FUN_1408928dc body=119 status=ok
// SIG undefined FUN_1408928dc(void)

void FUN_1408928dc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
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



// FUNCTION 140892953 FUN_140892953 body=222 status=ok
// SIG undefined FUN_140892953(void)

void FUN_140892953(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    do {
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + -8) = 0;
      if (*(int *)(param_1 + -4) != 0) {
        FUN_14472eb64((longlong *)(param_1 + -0x10),0);
      }
      *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (0x80 < *(uint *)(param_1 + 0x1c)) {
        *(undefined4 *)(param_1 + 0x1c) = 0x80;
        FUN_1446efbd8(param_1,0);
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      FUN_140892a31(*(undefined8 *)(param_1 + -0x40));
      if (*(longlong *)(param_1 + -0x40) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x90;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140892a31 FUN_140892a31 body=92 status=ok
// SIG undefined FUN_140892a31(void)

void FUN_140892a31(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    FUN_140892a8e(param_1);
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 140892a8e FUN_140892a8e body=465 status=ok
// SIG undefined FUN_140892a8e(void)

void FUN_140892a8e(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar10) goto LAB_140892abc;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar7[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar8 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar10;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar14;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_140892abc;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140892abc:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140892c60 FUN_140892c60 body=36 status=ok
// SIG undefined FUN_140892c60(void)

void FUN_140892c60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140892c84(param_1,param_2,0,param_3,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 140892c84 FUN_140892c84 body=693 status=ok
// SIG undefined FUN_140892c84(void)

void FUN_140892c84(longlong *param_1,longlong param_2,char param_3,longlong *param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  void *_Dst;
  ulonglong uVar5;
  longlong *_Dst_00;
  void *pvVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\x01') {
    cVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar3 != '\0') {
      if (param_6 != 1) {
        _Dst = (void *)FUN_1468c8356(param_1);
        cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
        if (cVar3 == '\0') {
          pvVar6 = (void *)(*(int *)((longlong)param_1 + 0x44) + param_2);
          if (pvVar6 != _Dst) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,_Dst,pvVar6,(int)param_1[6]);
            }
            else {
              memcpy(_Dst,pvVar6,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0xa0))(param_1,param_2,_Dst);
        }
        if (param_6 != 0) {
          uVar5 = 0;
          bVar4 = DAT_14c950c29;
          do {
            lVar2 = param_4[uVar5];
            if ((lVar2 != 0) && ((bVar4 & 1) != 0)) {
              FUN_1456cec3c(lVar2);
              bVar4 = DAT_14c950c29;
            }
            *(longlong *)((longlong)_Dst + uVar5 * 8 + (longlong)param_5 * 8) = lVar2;
            uVar5 = uVar5 + 1;
          } while (param_6 != uVar5);
        }
        cVar3 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar3 == '\0') {
          pvVar6 = (void *)(param_2 + *(int *)((longlong)param_1 + 0x44));
          if (pvVar6 != _Dst) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,pvVar6,_Dst,(int)param_1[6]);
            }
            else {
              memcpy(pvVar6,_Dst,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_2,_Dst);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
      }
      local_50 = *param_4;
      if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c();
      }
      cVar3 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar3 == '\0') {
        _Dst_00 = (longlong *)(param_2 + *(int *)((longlong)param_1 + 0x44));
        if (_Dst_00 != &local_50) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,_Dst_00,&local_50,(int)param_1[6]);
          }
          else {
            memcpy(_Dst_00,&local_50,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_50);
      }
      goto LAB_140892db6;
    }
    param_2 = param_2 + *(int *)((longlong)param_1 + 0x44) +
              (longlong)param_5 * (longlong)*(int *)((longlong)param_1 + 0x34);
  }
  if (param_6 != 0) {
    if (param_6 == 1) {
      if ((*param_4 != 0) || ((*(byte *)((longlong)param_1 + 0x39) & 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
      }
    }
    else {
      iVar1 = *(int *)((longlong)param_1 + 0x34);
      uVar5 = 0;
      do {
        if ((param_4[uVar5] != 0) || ((*(byte *)((longlong)param_1 + 0x39) & 0x10) == 0)) {
          (**(code **)(*param_1 + 0x1f0))(param_1,param_2);
        }
        uVar5 = uVar5 + 1;
        param_2 = param_2 + iVar1;
      } while (param_6 != uVar5);
    }
  }
LAB_140892db6:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140892f74 FUN_140892f74 body=70 status=ok
// SIG undefined FUN_140892f74(void)

void FUN_140892f74(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140892fba();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140892fba FUN_140892fba body=325 status=ok
// SIG undefined FUN_140892fba(void)

void FUN_140892fba(longlong *param_1)

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



// FUNCTION 140893100 FUN_140893100 body=190 status=ok
// SIG undefined FUN_140893100(void)

void FUN_140893100(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x3a8) + lVar1) == param_2) {
        return;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)iVar2 * 8 - lVar1 != 0);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    iVar2 = *(int *)(param_1 + 0x3b0);
  }
  *(uint *)(param_1 + 0x3b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3b4) < iVar2 + 1U) {
    FUN_14575354e((longlong *)(param_1 + 0x3a8),iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar2 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1408931be(param_1,param_2);
  return;
}



// FUNCTION 1408931be FUN_1408931be body=584 status=ok
// SIG undefined FUN_1408931be(void)

void FUN_1408931be(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1447210f0();
  if (*(byte *)(lVar5 + 0x151) != 5) {
    if ((int)*(uint *)(param_1 + 0x3c8) < 1) {
      iVar8 = 0;
    }
    else {
      uVar6 = 0;
      iVar8 = 0;
      do {
        puVar1 = *(uint **)(*(longlong *)(param_1 + 0x3c0) + uVar6 * 8);
        if ((*(byte *)(lVar5 + 0x151) - 1 < 5) && (DAT_14c872be0 == *puVar1)) {
          iVar7 = DAT_14c7639d8 - puVar1[6];
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          iVar8 = iVar8 + iVar7;
        }
        else if ((int)puVar1[6] < DAT_14c7639d8) goto LAB_140893261;
        uVar6 = uVar6 + 1;
      } while (*(uint *)(param_1 + 0x3c8) != uVar6);
    }
    if (iVar8 < DAT_14c7639d8) {
      uVar6 = FUN_145753458(param_1);
LAB_140893261:
      iVar8 = (int)uVar6;
      if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x3c8))) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3c0) + (uVar6 & 0xffffffff) * 8);
        *(int *)(param_2 + 0x60) = iVar8;
        lVar5 = lVar2 + 0x30;
        pbVar3 = *(byte **)(lVar2 + 0x50);
        if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
          *(undefined1 *)(lVar2 + 0x3b) = 1;
        }
        else if (*(char *)(lVar2 + 0x3b) == '\0') {
          uVar4 = *(undefined8 *)(pbVar3 + 0x28);
          FUN_1402eb48e(uVar4,lVar5);
          *(undefined1 *)(lVar2 + 0x3b) = 1;
          FUN_1402eb97e(uVar4,lVar5);
          if (*(char *)(lVar2 + 0x3b) == '\0') {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 0x24) = 0xbf800000;
          }
        }
        iVar8 = *(int *)(lVar2 + 0x18);
        *(uint *)(lVar2 + 0x18) = iVar8 + 1U;
        if (*(uint *)(lVar2 + 0x1c) < iVar8 + 1U) {
          FUN_140893524((longlong *)(lVar2 + 0x10),iVar8);
        }
        *(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar8 * 8) = param_2;
        FUN_14082bb18(param_2,lVar5);
        local_48 = param_2;
        if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_2);
        }
        FUN_14089341e(param_1 + 0x3d0,&local_48,1);
        goto LAB_1408932fc;
      }
    }
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar8 = *(int *)(param_1 + 0x3d8);
  *(uint *)(param_1 + 0x3d8) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x3dc) < iVar8 + 1U) {
    FUN_14575354e((longlong *)(param_1 + 0x3d0),iVar8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar8 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
LAB_1408932fc:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14089341e FUN_14089341e body=261 status=ok
// SIG undefined FUN_14089341e(void)

void FUN_14089341e(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar8) == lVar2) {
        if (iVar6 == 0) {
          return;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        if (param_3 != '\x01') {
          return;
        }
        FUN_1488eea4a(param_1);
        return;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  return;
}



// FUNCTION 140893524 FUN_140893524 body=353 status=ok
// SIG undefined FUN_140893524(void)

void FUN_140893524(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408935a9;
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
LAB_1408935a9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140893692 FUN_140893692 body=250 status=ok
// SIG undefined FUN_140893692(void)

undefined8 * FUN_140893692(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a6ba460;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 2;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x22] = 2;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 14089378c FUN_14089378c body=341 status=ok
// SIG undefined FUN_14089378c(void)

void FUN_14089378c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else if (param_2 < 0x11) {
    iVar7 = 0x10;
  }
  else {
    uVar4 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar4 + 0xf;
        if (param_2 < 0xfff) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408937fe;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1408937fe:
    iVar3 = (int)(uVar4 >> 3);
    iVar7 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar7;
  FUN_1408938e2(param_1,*(undefined4 *)(param_1 + 0x88));
  return;
}



// FUNCTION 1408938e2 FUN_1408938e2 body=140 status=ok
// SIG undefined FUN_1408938e2(void)

void FUN_1408938e2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 14089396e thunk_FUN_140893974 body=5 status=ok
// SIG undefined thunk_FUN_140893974(void)

void thunk_FUN_140893974(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b40eff0;
  if ((DAT_14c872a72 == '\0') && (DAT_14c872bd8 == '\0')) {
    FUN_140893a5c(param_1);
  }
  plVar3 = (longlong *)param_1[0x68];
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
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f6ec(param_1 + 0xb);
  FUN_140893af5(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140893af5(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140893974 FUN_140893974 body=231 status=ok
// SIG undefined FUN_140893974(void)

void FUN_140893974(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b40eff0;
  if ((DAT_14c872a72 == '\0') && (DAT_14c872bd8 == '\0')) {
    FUN_140893a5c(param_1);
  }
  plVar3 = (longlong *)param_1[0x68];
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
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f6ec(param_1 + 0xb);
  FUN_140893af5(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140893af5(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140893a5c FUN_140893a5c body=153 status=ok
// SIG undefined FUN_140893a5c(void)

void FUN_140893a5c(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_140893af5(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_140d0ddb4(param_1 + 0x38,0);
  }
  FUN_140893af5(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_140d0ddb4(param_1 + 0x48,0);
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x12) == '\0')) && (*(char *)(lVar1 + 0x11) == '\0')) {
    FUN_140886972();
    return;
  }
  return;
}



// FUNCTION 140893af5 FUN_140893af5 body=31 status=ok
// SIG undefined FUN_140893af5(void)

void FUN_140893af5(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b2e1720;
    param_1[1] = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140893b14 FUN_140893b14 body=89 status=ok
// SIG undefined FUN_140893b14(void)

void FUN_140893b14(longlong param_1)

{
  longlong lVar1;
  
  FUN_140893b6e();
  *(undefined8 *)(param_1 + 0x80) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x300);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
  *(double *)(param_1 + 0x88) = *(double *)(lVar1 + 0x300) - (double)*(float *)(lVar1 + 0xd0);
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xbd;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  return;
}



// FUNCTION 140893b6e FUN_140893b6e body=149 status=ok
// SIG undefined FUN_140893b6e(void)

void FUN_140893b6e(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x2b8))(param_2);
  if (lVar1 == 0) {
    if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong **)(param_1 + 0x28) = param_2;
  }
  else {
    lVar1 = param_2[0x3bd];
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = param_2[0x3bd];
      }
    }
    *(longlong *)(param_1 + 0x28) = lVar1;
  }
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffe9ff | (param_4 & 2) << 0xb;
  return;
}



// FUNCTION 140893c04 FUN_140893c04 body=52 status=ok
// SIG undefined FUN_140893c04(void)

void FUN_140893c04(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xae0) = 0;
  FUN_140893c38(param_1 + 0xae8);
  FUN_140893c7e(param_1,param_2);
  return;
}



// FUNCTION 140893c38 FUN_140893c38 body=70 status=ok
// SIG undefined FUN_140893c38(void)

void FUN_140893c38(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140893e58();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140893c7e FUN_140893c7e body=99 status=ok
// SIG undefined FUN_140893c7e(void)

void FUN_140893c7e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x950);
  if (plVar1 == param_2 && plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x388))();
  }
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x948) + 0x130,param_1);
    *(undefined8 *)(param_1 + 0x948) = 0;
  }
  FUN_140893ce2(param_1,param_2);
  return;
}



// FUNCTION 140893ce2 FUN_140893ce2 body=374 status=ok
// SIG undefined FUN_140893ce2(void)

void FUN_140893ce2(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x8a0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x898);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe8))(plVar2,param_1,*(undefined8 *)(param_1 + 0x130));
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(int *)(param_1 + 0x6cc) < 0) {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    FUN_1478fef34(param_1 + 0x6c0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
  }
  if (*(int *)(param_1 + 0x728) != *(int *)(param_1 + 0x754)) {
    FUN_1478fbe42(param_1 + 0x720);
    FUN_1478fbf8a(param_1 + 0x720);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  lVar3 = param_1 + 0x470;
  lVar4 = 3;
  do {
    if (*(int *)(lVar3 + 8) != *(int *)(lVar3 + 0x34)) {
      FUN_144a40a0c(lVar3);
      *(undefined4 *)(lVar3 + 8) = 0;
      if (*(int *)(lVar3 + 0xc) < 0) {
        FUN_1401ad22e(lVar3,0);
      }
      *(undefined8 *)(lVar3 + 0x30) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0x28) = 0;
    }
    lVar3 = lVar3 + 0x50;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_1449ad616(param_1 + 0x560);
  iVar1 = *(int *)(param_1 + 0x5bc);
  FUN_1448262fc(*(undefined8 *)(param_1 + 0x5b0),*(undefined4 *)(param_1 + 0x5b8));
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x5bc) != 0)) {
    FUN_14052b4a8(param_1 + 0x5b0,0);
  }
  FUN_140e367da(param_1 + 0x1d0);
  FUN_140892f74(param_1 + 0x7f8);
  return;
}



// FUNCTION 140893e58 FUN_140893e58 body=325 status=ok
// SIG undefined FUN_140893e58(void)

void FUN_140893e58(longlong *param_1)

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



// FUNCTION 140893f9e FUN_140893f9e body=196 status=ok
// SIG undefined FUN_140893f9e(void)

void FUN_140893f9e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = (ulonglong)uVar2;
  FUN_1457535d4();
  if (-1 < (int)uVar2) {
    plVar1 = (longlong *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) < (int)uVar2) {
      FUN_140894804(plVar1);
    }
    if (uVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar3 + uVar2;
      if ((uint)(*(int *)(param_1 + 0x34) - iVar3) < uVar2) {
        FUN_1474d96e0(plVar1);
      }
      lVar5 = 0;
      memset((void *)((longlong)iVar3 * 0x40 + *plVar1),0,uVar4 << 6);
      *(undefined4 *)(*plVar1 + 0x30) = 0x3f800000;
      do {
        FUN_140320438(*(longlong *)(param_1 + 0x18) + lVar5,param_2);
        lVar5 = lVar5 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    FUN_140894062(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 140894062 FUN_140894062 body=461 status=ok
// SIG undefined FUN_140894062(void)

void FUN_140894062(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  
  lVar8 = FUN_144a40dda();
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  uVar7 = FUN_140894230(param_1);
  lVar9 = FUN_14089451a(param_1);
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x28);
      *(undefined4 *)(lVar5 + 8 + lVar11) = 0;
      *(undefined2 *)(lVar5 + 0x26 + lVar11) = 0x101;
      *(undefined1 *)(lVar5 + 0x24 + lVar11) = uVar7;
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar9);
      }
      *(longlong *)(lVar5 + lVar11) = lVar9;
      *(undefined1 *)(lVar5 + 0x27 + lVar11) = 1;
      if (lVar8 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38 + lVar11) = 0;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x40;
    } while (lVar10 < *(int *)(param_1 + 0x30));
  }
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0x3f800000;
  fVar12 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)puVar6 + 0x24),*puVar6);
  *(float *)(puVar6 + 2) = fVar12;
  *(float *)(puVar6 + 3) =
       (*(float *)(puVar6 + 4) - *(float *)((longlong)puVar6 + 0x1c)) * fVar12 +
       *(float *)((longlong)puVar6 + 0x1c);
  if (lVar8 != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38) = 0x3f800000;
    plVar1 = (longlong *)(param_1 + 0x38);
    FUN_1474c4bc2(plVar1);
    iVar3 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar3 + uVar2;
    if ((uint)(*(int *)(param_1 + 0x44) - iVar3) < uVar2) {
      FUN_1401e176a(plVar1);
    }
    memset((void *)((longlong)iVar3 * 0x60 + *plVar1),0,(longlong)(int)uVar2 * 0x60);
    if (0 < (int)uVar2) {
      lVar10 = 0x40;
      lVar9 = 0;
      do {
        lVar11 = *plVar1;
        *(int *)(lVar11 + -0x40 + lVar10) = (int)lVar9;
        uVar4 = *(uint *)(lVar8 + 0x40);
        iVar3 = *(int *)(lVar11 + 8 + lVar10);
        *(uint *)(lVar11 + 8 + lVar10) = iVar3 + uVar4;
        if ((uint)(*(int *)(lVar11 + 0xc + lVar10) - iVar3) < uVar4) {
          FUN_14475e4ac((longlong *)(lVar11 + lVar10));
        }
        memset((void *)((longlong)iVar3 * 4 + *(longlong *)(lVar11 + lVar10)),0,
               (longlong)(int)uVar4 << 2);
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x60;
      } while ((int)uVar2 != lVar9);
    }
  }
  return;
}



// FUNCTION 140894230 FUN_140894230 body=744 status=ok
// SIG undefined FUN_140894230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140894230(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa53c) {
    FUN_144b3d300(&DAT_14caaa53c);
    if (DAT_14caaa53c == -1) {
      _DAT_14caaa530 = 0;
      DAT_14caaa538 = -1;
      _Init_thread_footer(&DAT_14caaa53c);
    }
  }
  if (DAT_14caaa538 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa548) {
      FUN_144b3d300(&DAT_14caaa548);
      if (DAT_14caaa548 == -1) {
        FUN_1446ddc76(&DAT_14caaa540,"BlendType",1);
        _Init_thread_footer(&DAT_14caaa548);
      }
    }
    if (DAT_14caaa0d8 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa0d8 = FUN_140002ddd(FUN_14633061b,uVar6,L"AnimNode_BlendListBase");
    }
    FUN_14094e66e(&local_34,DAT_14caaa540,param_1,DAT_14caaa0d8);
    DAT_14caaa538 = local_2c;
    _DAT_14caaa530 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa538 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089451a FUN_14089451a body=745 status=ok
// SIG undefined FUN_14089451a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14089451a(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa57c) {
    FUN_144b3d300(&DAT_14caaa57c);
    if (DAT_14caaa57c == -1) {
      _DAT_14caaa570 = 0;
      DAT_14caaa578 = -1;
      _Init_thread_footer(&DAT_14caaa57c);
    }
  }
  if (DAT_14caaa578 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa588) {
      FUN_144b3d300(&DAT_14caaa588);
      if (DAT_14caaa588 == -1) {
        FUN_1446ddc76(&DAT_14caaa580,"CustomBlendCurve",1);
        _Init_thread_footer(&DAT_14caaa588);
      }
    }
    if (DAT_14caaa0d8 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa0d8 = FUN_140002ddd(FUN_14633061b,uVar6,L"AnimNode_BlendListBase");
    }
    FUN_14094e66e(&local_34,DAT_14caaa580,param_1,DAT_14caaa0d8);
    DAT_14caaa578 = local_2c;
    _DAT_14caaa570 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa578 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined8 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined8 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined8 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined8 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140894804 FUN_140894804 body=212 status=ok
// SIG undefined FUN_140894804(void)

void FUN_140894804(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x200) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
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
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1408948d8 FUN_1408948d8 body=59 status=ok
// SIG undefined FUN_1408948d8(void)

void FUN_1408948d8(longlong param_1)

{
  FUN_144757f48(param_1,8);
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x30) != 0) {
    FUN_144757f48(param_1,*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x69);
  }
  FUN_140894914(param_1);
  return;
}



// FUNCTION 140894914 FUN_140894914 body=325 status=ok
// SIG undefined FUN_140894914(void)

void FUN_140894914(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x200430) == 0) {
    lVar2 = FUN_140894a5a();
    lVar3 = *(longlong *)(lVar2 + 0x110);
    if (lVar3 == 0) {
      FUN_140aa6c08(lVar2);
      lVar3 = *(longlong *)(lVar2 + 0x110);
    }
    if ((((*(int *)(param_1 + 0x2c) == *(int *)(lVar3 + 0x2c)) &&
         (*(int *)(param_1 + 0x30) == *(int *)(lVar3 + 0x30))) &&
        (*(int *)(param_1 + 0x34) == *(int *)(lVar3 + 0x34))) &&
       (*(int *)(param_1 + 0x38) == *(int *)(lVar3 + 0x38))) {
      local_28.Data1 = 0;
      local_28.Data2 = 0;
      local_28.Data3 = 0;
      local_28.Data4[0] = '\0';
      local_28.Data4[1] = '\0';
      local_28.Data4[2] = '\0';
      local_28.Data4[3] = '\0';
      local_28.Data4[4] = '\0';
      local_28.Data4[5] = '\0';
      local_28.Data4[6] = '\0';
      local_28.Data4[7] = '\0';
      CoCreateGuid(&local_28);
      *(ulong *)(param_1 + 0x2c) = local_28.Data1;
      *(undefined4 *)(param_1 + 0x30) = local_28._4_4_;
      *(undefined4 *)(param_1 + 0x34) = local_28.Data4._0_4_;
      *(undefined4 *)(param_1 + 0x38) = local_28.Data4._4_4_;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140894a5a FUN_140894a5a body=221 status=ok
// SIG undefined FUN_140894a5a(void)

longlong FUN_140894a5a(void)

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
  if (DAT_14cab3b88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475825a5;
    local_40 = &LAB_146342961;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSignedObject",&DAT_14cab3b88,&DAT_1475825a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3b88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140894b38 FUN_140894b38 body=40 status=ok
// SIG undefined FUN_140894b38(void)

undefined8 FUN_140894b38(undefined8 param_1,int param_2)

{
  FUN_140894b60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140894b60 FUN_140894b60 body=205 status=ok
// SIG undefined FUN_140894b60(void)

void FUN_140894b60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b16c1f0;
  param_1[0x72] = &PTR_LAB_14b16c830;
  param_1[0x73] = &PTR_LAB_14b16c850;
  param_1[0x83] = &PTR_LAB_14b16c870;
  param_1[0x84] = &PTR_LAB_14b16c890;
  param_1[0x85] = &PTR_LAB_14b16c8b0;
  FUN_1404d595a(param_1 + 0x90,1);
  param_1[0x8a] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  if (*(int *)((longlong)param_1 + 0x46c) != 0) {
    FUN_140115c12(param_1 + 0x8c,0);
  }
  param_1[0x8b] = 0;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x89] = 0;
  FUN_14061144a(param_1);
  return;
}



// FUNCTION 140894c34 FUN_140894c34 body=6319 status=ok
// SIG undefined FUN_140894c34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140894c34(longlong param_1,longlong param_2)

{
  LARGE_INTEGER *pLVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  LARGE_INTEGER LVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  undefined1 uVar16;
  byte bVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  DWORD DVar21;
  DWORD DVar22;
  longlong lVar23;
  undefined8 uVar24;
  LARGE_INTEGER *pLVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong *plVar29;
  undefined4 *puVar30;
  uint *puVar31;
  undefined7 uVar34;
  LARGE_INTEGER LVar32;
  undefined ***pppuVar33;
  int iVar35;
  uint *puVar36;
  longlong *plVar37;
  int *piVar38;
  undefined8 uVar39;
  longlong *plVar40;
  longlong lVar41;
  longlong *plVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  uint uVar46;
  ulonglong *puVar47;
  LARGE_INTEGER *pLVar48;
  undefined8 *puVar49;
  byte bVar50;
  bool bVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_218 [32];
  LARGE_INTEGER *local_1f8;
  longlong local_1f0;
  undefined4 local_1e4;
  undefined4 local_1e0;
  byte local_1d9;
  LARGE_INTEGER local_1d8;
  undefined8 local_1d0;
  uint local_1c4;
  longlong *local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  LARGE_INTEGER local_198;
  undefined4 local_18c;
  longlong local_188;
  ulonglong *local_180;
  ulonglong local_178;
  undefined8 local_170;
  longlong local_168;
  longlong *local_160;
  ulonglong *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined4 local_140;
  LARGE_INTEGER local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined ***local_128;
  undefined **local_118;
  longlong local_110;
  longlong *local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1f0 = param_1;
  if ((*(char *)(param_1 + 0x341) == '\x01') && (cVar15 = FUN_146161cb3(), cVar15 != '\0')) {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar20 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar21 = FUN_140ad26c0();
        DVar22 = GetCurrentThreadId();
        if (DVar21 == DVar22) goto LAB_140895db6;
      }
    }
    else {
LAB_140895db6:
      FUN_14080c2b4();
      (**(code **)(*DAT_14ca83900 + 0x360))();
      *(undefined1 *)(local_1f0 + 0x341) = 0;
    }
  }
  cVar15 = FUN_140d2ceff();
  if (cVar15 != '\0') {
    lVar23 = *(longlong *)(local_1f0 + 0x2c0);
    if (0 < *(int *)(lVar23 + 0x210)) {
      lVar41 = 0;
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar23 + 0x208) + lVar41 * 8) + 8))();
        lVar41 = lVar41 + 1;
      } while (lVar41 < *(int *)(lVar23 + 0x210));
    }
    FUN_1428733e2(*(undefined8 *)(lVar23 + 0x260));
  }
  lVar23 = FUN_1410f9dc8();
  if (*(longlong *)(lVar23 + 0x110) == 0) {
    local_188 = 0;
  }
  else {
    lVar23 = FUN_1410f9dc8();
    local_188 = *(longlong *)(lVar23 + 0x110);
    if (local_188 == 0) {
      FUN_140aa6c08(lVar23);
      local_188 = *(longlong *)(lVar23 + 0x110);
    }
  }
  fVar54 = (float)DAT_14c759090;
  dVar9 = DAT_14c866ff8 - _DAT_14c86a9d8;
  QueryPerformanceCounter(&local_138);
  dVar10 = ((double)local_138.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
  uVar24 = (**(code **)(*DAT_14c98e618 + 0x68))(DAT_14c98e618,&local_138);
  if (DAT_14c86a9f0 == '\x01') {
    if (DAT_14c872bf0 == '\0') {
      local_1c4 = (uint)CONCAT71((int7)((ulonglong)uVar24 >> 8),DAT_14ca84e78) ^ 1;
    }
    else {
      local_1c4 = 0;
    }
  }
  else {
    local_1c4 = 0;
  }
  uVar13 = local_138.s.LowPart;
  uVar14 = local_138.s.HighPart;
  if (local_188 == 0) {
LAB_140894e3a:
    local_1e0 = 0;
  }
  else {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar20 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar21 = FUN_140ad26c0();
        DVar22 = GetCurrentThreadId();
        if (DVar21 == DVar22) goto LAB_14089644f;
      }
      goto LAB_140894e3a;
    }
LAB_14089644f:
    if ((DAT_14cb0d2b0 == 0) || ((*(longlong *)(DAT_14cb0d2b0 + 0x360) != 0 & (byte)local_1c4) != 1)
       ) goto LAB_140894e3a;
    local_1e0 = (undefined4)CONCAT71((int7)((ulonglong)DAT_14caacf78 >> 8),0 < *DAT_14caacf78);
  }
  uVar18 = DAT_14c967818._4_4_;
  local_198.s.HighPart = DAT_14c967818._4_4_;
  local_198.s.LowPart = (uint)DAT_14c967818;
  puVar2 = *(undefined8 **)(local_1f0 + 8);
  local_178 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(local_178 + 0xc60) == 0x10) {
    local_170 = puVar2[2];
    local_160 = (longlong *)puVar2[3];
  }
  else {
    local_170 = *puVar2;
    local_160 = (longlong *)puVar2[1];
  }
  if (local_160 == (longlong *)0x0) {
    local_160 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_160 + 1) = (int)local_160[1] + 1;
    UNLOCK();
  }
  local_158 = (ulonglong *)0x0;
  uStack_150 = 0;
  iVar20 = *(int *)(param_2 + 0x18);
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar20);
  }
  local_180 = (ulonglong *)(ulonglong)uVar18;
  if (iVar20 != 0) {
    FUN_1432ca634(&local_158);
    if ((longlong)*(int *)(param_2 + 0x18) != 0) {
      plVar27 = *(longlong **)(param_2 + 0x10);
      plVar29 = plVar27 + (longlong)*(int *)(param_2 + 0x18) * 2;
      local_168 = local_1f0 + 0x158;
      local_1d0 = local_1d0 & 0xffffffff00000000;
      local_1a0 = local_1a0 & 0xffffffff00000000;
      lVar23 = local_1f0;
      local_1c0 = plVar29;
      do {
        uVar18 = (uint)DAT_14c967818;
        plVar3 = (longlong *)*plVar27;
        pLVar48 = (LARGE_INTEGER *)plVar3[8];
        if ((pLVar48 != (LARGE_INTEGER *)0x0) ||
           ((((*plVar3 != 0 && (plVar3[1] != 0)) && (0 < *(int *)(plVar3[1] + 8))) &&
            (pLVar48 = (LARGE_INTEGER *)plVar3[2], pLVar48 != (LARGE_INTEGER *)0x0)))) {
          pLVar1 = pLVar48 + 0x73;
          fVar55 = *(float *)(pLVar48 + 0x73);
          pLVar25 = pLVar48 + 0x72;
          if (fVar55 != 0.0) {
            pLVar25 = pLVar1;
          }
          if (NAN(fVar55)) {
            pLVar25 = pLVar1;
          }
          if ((0.0 < *(float *)(pLVar48 + (ulonglong)(-(uint)(fVar55 != 0.0) & 1) + 0x72)) &&
             (0.0 < *(float *)((longlong)pLVar25 + 4))) {
            fVar55 = (float)uVar14 - *(float *)((longlong)pLVar48 + 900);
            fVar56 = (float)uVar13 - *(float *)(pLVar48 + 0x70);
            plVar40 = (longlong *)CONCAT44(DAT_14c967818._4_4_,(uint)DAT_14c967818);
            puVar47 = (ulonglong *)(ulonglong)DAT_14c967818._4_4_;
            DVar21 = pLVar48[0x76].s.LowPart;
            plVar42 = (longlong *)pLVar48[0x75].QuadPart;
            if (plVar42 == (longlong *)0x0) {
LAB_14089508b:
              LVar32.s.HighPart = 0;
              LVar32.s.LowPart = uVar18;
              plVar42 = (longlong *)0;
              uVar26 = 0;
            }
            else {
              iVar20 = (int)plVar42[1];
              do {
                if (iVar20 == 0) goto LAB_14089508b;
                LOCK();
                iVar35 = (int)plVar42[1];
                bVar51 = iVar20 == iVar35;
                if (bVar51) {
                  *(int *)(plVar42 + 1) = iVar20 + 1;
                  iVar35 = iVar20;
                }
                iVar20 = iVar35;
                UNLOCK();
              } while (!bVar51);
              plVar4 = (longlong *)pLVar48[0x74].QuadPart;
              LOCK();
              plVar37 = plVar42 + 1;
              *(int *)plVar37 = (int)*plVar37 + -1;
              UNLOCK();
              if ((int)*plVar37 == 0) {
                (**(code **)*plVar42)(plVar42);
                LOCK();
                piVar38 = (int *)((longlong)plVar42 + 0xc);
                *piVar38 = *piVar38 + -1;
                UNLOCK();
                plVar29 = local_1c0;
                if (*piVar38 == 0) {
                  (**(code **)(*plVar42 + 0x10))(plVar42);
                  plVar29 = local_1c0;
                }
              }
              if (plVar4 == (longlong *)0x0) {
                LVar32.s.HighPart = 0;
                LVar32.s.LowPart = uVar18;
                plVar42 = (longlong *)0;
                lVar23 = local_1f0;
                uVar26 = 0;
              }
              else {
                uVar26 = (**(code **)(*plVar4 + 0x158))(plVar4,&local_138);
                plVar37 = (longlong *)CONCAT44(uStack_12c,local_130);
                if (plVar37 == (longlong *)0x0) {
LAB_1408952fe:
                  local_1e4 = (undefined4)CONCAT71((int7)(uVar26 >> 8),1);
                  plVar37 = (longlong *)0x0;
                }
                else {
                  uVar26 = (ulonglong)*(uint *)(plVar37 + 1);
                  do {
                    uVar18 = (uint)uVar26;
                    if (uVar18 == 0) {
                      plVar37 = (longlong *)0x0;
                      break;
                    }
                    LOCK();
                    uVar46 = *(uint *)(plVar37 + 1);
                    if (uVar18 == uVar46) {
                      *(uint *)(plVar37 + 1) = uVar18 + 1;
                    }
                    else {
                      uVar26 = (ulonglong)uVar46;
                    }
                    UNLOCK();
                  } while (uVar18 != uVar46);
                  LOCK();
                  piVar38 = (int *)((longlong)CONCAT44(uStack_12c,local_130) + 0xc);
                  *piVar38 = *piVar38 + -1;
                  UNLOCK();
                  if (*piVar38 == 0) {
                    uVar26 = (**(code **)(*(longlong *)CONCAT44(uStack_12c,local_130) + 0x10))();
                  }
                  if (plVar37 == (longlong *)0x0) goto LAB_1408952fe;
                  if ((code *)local_138.QuadPart != (code *)0x0) {
                    fVar53 = (*(float *)(local_138.QuadPart + 0xf0) * (float)DAT_14c84635c +
                              *(float *)(local_138.QuadPart + 0xf8) * DAT_14c84635c._4_4_ +
                             *(float *)(local_138.QuadPart + 0x100)) -
                             *(float *)((longlong)pLVar48 + 900);
                    fVar52 = ((float)DAT_14c84635c * *(float *)(local_138.QuadPart + 0xec) +
                              DAT_14c84635c._4_4_ * *(float *)(local_138.QuadPart + 0xf4) +
                             *(float *)(local_138.QuadPart + 0xfc)) - *(float *)(pLVar48 + 0x70);
                    fVar56 = fVar56 - *(float *)(local_138.QuadPart + 0xa4);
                    plVar40 = (longlong *)
                              CONCAT44((int)ROUND(fVar53 + fVar53 + 0.5) >> 1,
                                       (int)ROUND(fVar52 + fVar52 + 0.5) >> 1);
                    fVar55 = fVar55 - *(float *)(local_138.QuadPart + 0xa8);
                  }
                  local_1e4 = 0;
                }
                local_1b8 = plVar40;
                (**(code **)(*plVar4 + 0x10))(plVar4,&local_138);
                local_1d8.s = local_138.s;
                if ((char)local_1d0 != '\0') {
                  (**(code **)(*plVar4 + 0x20))(plVar4);
                }
                plVar40 = local_1b8;
                LVar32 = local_1d8;
                puVar47 = (ulonglong *)((ulonglong)local_1d8.QuadPart >> 0x20);
                DVar22 = local_1d8.s.LowPart;
                local_1b0 = (ulonglong)(DVar22 + (int)local_1b8) |
                            (local_1d8.QuadPart & 0xffffffff00000000U) + (longlong)local_1b8 &
                            0xffffffff00000000;
                uVar19 = (**(code **)(*plVar4 + 0x20))(plVar4);
                local_1d0 = CONCAT44(local_1d0._4_4_,uVar19);
                if ((int)local_180 < LVar32.s.HighPart) {
                  local_180 = puVar47;
                }
                local_180 = (ulonglong *)((ulonglong)local_180 & 0xffffffff);
                if ((int)local_198.s.LowPart < (int)DVar22) {
                  local_198 = LVar32;
                }
                local_198.QuadPart = local_198.QuadPart & 0xffffffff;
                LVar32 = local_1d8;
                plVar42 = plVar40;
                lVar23 = local_1f0;
                plVar29 = local_1c0;
                uVar26 = local_1b0;
                local_1a8 = puVar47;
                if ((char)local_1e4 == '\0') {
                  LOCK();
                  plVar4 = plVar37 + 1;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  plVar40 = local_1b8;
                  plVar42 = local_1b8;
                  if ((int)*plVar4 == 0) {
                    (**(code **)*plVar37)(plVar37);
                    puVar47 = local_1a8;
                    plVar40 = local_1b8;
                    LOCK();
                    piVar38 = (int *)((longlong)plVar37 + 0xc);
                    *piVar38 = *piVar38 + -1;
                    UNLOCK();
                    LVar32 = local_1d8;
                    plVar42 = plVar40;
                    lVar23 = local_1f0;
                    plVar29 = local_1c0;
                    uVar26 = local_1b0;
                    if (*piVar38 == 0) {
                      (**(code **)(*plVar37 + 0x10))(plVar37);
                      LVar32 = local_1d8;
                      lVar23 = local_1f0;
                      plVar29 = local_1c0;
                      uVar26 = local_1b0;
                    }
                  }
                }
              }
            }
            if (*(int *)(lVar23 + 0x128) != *(int *)(lVar23 + 0x154)) {
              uVar18 = ((uint)((ulonglong)pLVar48 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pLVar48 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              lVar41 = *(longlong *)(lVar23 + 0x160);
              if (*(longlong *)(lVar23 + 0x160) == 0) {
                lVar41 = local_168;
              }
              iVar20 = *(int *)(lVar41 + (ulonglong)
                                         (*(int *)(lVar23 + 0x168) - 1U & (uVar18 >> 0x10 ^ uVar18))
                                         * 4);
              if (iVar20 != -1) {
                do {
                  plVar37 = (longlong *)(*(longlong *)(lVar23 + 0x120) + (longlong)iVar20 * 0x18);
                  if ((LARGE_INTEGER *)*plVar37 == pLVar48) {
                    if ((plVar37 != (longlong *)0x0) &&
                       (LVar5 = (LARGE_INTEGER)((LARGE_INTEGER *)(plVar37 + 1))->QuadPart,
                       (code *)LVar5.QuadPart != (code *)0x0)) {
                      local_1d8 = LVar5;
                      local_1b0 = uVar26;
                      if ((*(float *)pLVar1 == 0.0) && (!NAN(*(float *)pLVar1))) {
                        uVar19 = FUN_1415e22d4(lVar23,pLVar48);
                        local_1f8 = pLVar48;
                        FUN_1415e239e(local_1f0,local_1d8.QuadPart,
                                      *(undefined8 *)(local_1d8.QuadPart + 0xa8),uVar19);
                        lVar23 = local_1f0;
                      }
                      *(byte *)((longlong)pLVar48 + 0x36a) =
                           *(byte *)((longlong)pLVar48 + 0x36a) & 0xfd |
                           (char)*(code *)(local_1d8.QuadPart + 0xbc) * '\x02';
                      pLVar48[0x76].s.LowPart = 0xbf800000;
                      lVar41 = *(longlong *)(lVar23 + 0x2b8);
                      if (*(code *)(local_1d8.QuadPart + 0xbc) == (code)0x1) {
                        uVar16 = FUN_14750d1fc();
                        lVar23 = local_1f0;
                      }
                      else {
                        uVar16 = 0;
                      }
                      *(undefined1 *)(lVar41 + 0x32) = uVar16;
                      uVar24 = *(undefined8 *)(lVar23 + 0x2b8);
                      FUN_140f1e58c(uVar24,plVar3);
                      if ((byte)local_1c4 == '\0') {
                        lVar23 = *(longlong *)(lVar23 + 0x2b8);
LAB_14089543e:
                        local_1e4 = 0;
                        local_1a8 = (ulonglong *)((ulonglong)local_1a8._4_4_ << 0x20);
                        local_18c = 0;
                      }
                      else {
                        lVar23 = *(longlong *)(lVar23 + 0x2b8);
                        if ((LVar32.s.LowPart == (uint)DAT_14c967818) &&
                           ((uint)puVar47 == DAT_14c967818._4_4_)) goto LAB_14089543e;
                        uVar34 = (undefined7)((ulonglong)uVar24 >> 8);
                        local_1a8 = (ulonglong *)
                                    CONCAT44(local_1a8._4_4_,
                                             (int)CONCAT71(uVar34,*(undefined1 *)(lVar23 + 0x33)));
                        local_1e4 = (undefined4)CONCAT71(uVar34,*(undefined1 *)(lVar23 + 0x34));
                        local_18c = (undefined4)CONCAT71(uVar34,*(undefined1 *)(lVar23 + 0x35));
                      }
                      local_1d9 = *(byte *)(lVar23 + 0x31);
                      local_1b8 = plVar40;
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14cab0658) &&
                         (FUN_144b3d300(&DAT_14cab0658), DAT_14cab0658 == -1)) {
                        if (DAT_14c8407a8 == (longlong *)0x0) {
                          FUN_1414b00ea();
                        }
                        DAT_14cab0650 =
                             (longlong *)
                             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
                        _Init_thread_footer(&DAT_14cab0658);
                      }
                      iVar20 = (**(code **)(*DAT_14cab0650 + 0xb0))();
                      uVar26 = uStack_150;
                      lVar23 = *(longlong *)(local_1f0 + 0x2b8);
                      *(undefined4 *)(lVar23 + 0x28) = 0;
                      *(undefined1 *)(lVar23 + 0x35) = 0;
                      *(undefined4 *)(lVar23 + 0x31) = 0;
                      *(undefined1 *)(*(longlong *)(local_1f0 + 0x2b8) + 0x32) = 0;
                      lVar23 = (longlong)(int)uStack_150;
                      uVar18 = (int)uStack_150 + 1;
                      uStack_150 = CONCAT44(uStack_150._4_4_,uVar18);
                      if (uStack_150._4_4_ < uVar18) {
                        FUN_1432ca808(&local_158,uVar26 & 0xffffffff);
                      }
                      lVar41 = lVar23 * 0x50;
                      local_158[lVar23 * 10] = (ulonglong)pLVar48;
                      local_158[lVar23 * 10 + 1] = (ulonglong)plVar3;
                      *(LARGE_INTEGER *)(local_158 + lVar23 * 10 + 2) = local_1d8;
                      local_158[lVar23 * 10 + 3] = (ulonglong)local_1b8;
                      local_158[lVar23 * 10 + 4] =
                           LVar32.QuadPart & 0xffffffffU | (longlong)puVar47 << 0x20;
                      local_158[lVar23 * 10 + 5] = (ulonglong)plVar42;
                      local_158[lVar23 * 10 + 6] = local_1b0;
                      *(DWORD *)(local_158 + lVar23 * 10 + 7) = DVar21;
                      *(byte *)((longlong)local_158 + lVar41 + 0x3c) = (byte)local_1a8;
                      *(char *)((longlong)local_158 + lVar41 + 0x3d) = (char)local_1e4;
                      *(char *)((longlong)local_158 + lVar41 + 0x3e) = (char)local_18c;
                      *(int *)(local_158 + lVar23 * 10 + 8) = (int)fVar56;
                      *(int *)((longlong)local_158 + lVar41 + 0x44) = (int)fVar55;
                      *(byte *)(local_158 + lVar23 * 10 + 9) = iVar20 != 0 | local_1d9;
                      local_1a0 = CONCAT44(local_1a0._4_4_,
                                           CONCAT31((int3)(local_1a0 >> 8),
                                                    (byte)local_1a0 | (byte)local_1a8));
                      lVar23 = local_1f0;
                      plVar29 = local_1c0;
                    }
                    break;
                  }
                  iVar20 = (int)plVar37[2];
                } while (iVar20 != -1);
              }
            }
          }
        }
        plVar27 = plVar27 + 2;
      } while (plVar27 != plVar29);
      goto LAB_140895614;
    }
  }
  local_1a0 = (ulonglong)local_1a0._4_4_ << 0x20;
  local_1d0 = (ulonglong)local_1d0._4_4_ << 0x20;
LAB_140895614:
  FUN_1448f1142(local_170);
  uVar28 = local_1a0;
  uVar26 = local_1a0 & 0xffffffff;
  bVar50 = (byte)local_1a0;
  if ((char)local_1e0 != '\0') {
    uVar18 = local_198.s.LowPart;
    if ((uVar18 != 0) && (uVar46 = (uint)local_180, bVar17 = bVar50, uVar46 != 0)) {
      while (bVar17 != 0) {
        bVar17 = (byte)uVar26;
        plVar27 = (longlong *)
                  FUN_14750d7ce(local_188,CONCAT71((int7)(uVar26 >> 8),-bVar17 & bVar17));
        if (plVar27 != (longlong *)0x0) {
          if ((*(uint *)(plVar27 + 0x28) == uVar18) &&
             (*(uint *)((longlong)plVar27 + 0x144) == uVar46)) {
            cVar15 = (**(code **)(*plVar27 + 0x3b8))(plVar27);
            if (cVar15 != (char)local_1d0) goto LAB_1408956a8;
          }
          else {
LAB_1408956a8:
            *(byte *)((longlong)plVar27 + 0x15a) = *(byte *)((longlong)plVar27 + 0x15a) | 1;
            *(uint *)(plVar27 + 0x28) = uVar18;
            *(uint *)((longlong)plVar27 + 0x144) = uVar46;
            *(char *)(plVar27 + 0x2c) = (char)local_1d0;
            if (0x10000 < uVar18) {
              *(undefined4 *)(plVar27 + 0x28) = 1;
            }
            if (0x10000 < uVar46) {
              *(undefined4 *)((longlong)plVar27 + 0x144) = 1;
            }
            (**(code **)(*plVar27 + 0x318))(plVar27);
          }
          *(ulonglong *)(local_1f0 + 0x398 + (ulonglong)(-bVar17 & bVar17) * 8) = DAT_14c872be0;
        }
        iVar20 = (int)uVar26 + -1;
        bVar17 = (byte)iVar20 & bVar17;
        uVar26 = (ulonglong)CONCAT31((int3)((uint)iVar20 >> 8),bVar17);
      }
    }
    if ((char)(uVar28 & 0xffffff1f) != '\x1f') {
      uVar26 = uVar28 & 0xffffff1f ^ 0x1f;
      do {
        bVar17 = (byte)uVar26;
        plVar27 = (longlong *)
                  FUN_14750d8e0(local_188,CONCAT71((int7)(uVar26 >> 8),-bVar17 & bVar17));
        if ((((plVar27 != (longlong *)0x0) && (lVar23 = FUN_1447b4020(plVar27), lVar23 != 0)) &&
            ((int)plVar27[0x28] != 1)) &&
           ((*(int *)((longlong)plVar27 + 0x144) != 1 &&
            (*(ulonglong *)(local_1f0 + 0x398 + (ulonglong)(-bVar17 & bVar17) * 8) < DAT_14c872be0))
           )) {
          plVar27[0x28] = (longlong)&DAT_100000001;
          *(undefined1 *)(plVar27 + 0x2c) = 0x12;
          *(byte *)((longlong)plVar27 + 0x15a) = *(byte *)((longlong)plVar27 + 0x15a) | 1;
          (**(code **)(*plVar27 + 0x318))(plVar27);
        }
        iVar20 = (int)uVar26 + -1;
        bVar17 = (byte)iVar20 & bVar17;
        uVar26 = (ulonglong)CONCAT31((int3)((uint)iVar20 >> 8),bVar17);
      } while (bVar17 != 0);
    }
  }
  local_1d8.QuadPart = local_178 + 0xc60;
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar31 = (uint *)*puVar2;
  if (puVar31 != (uint *)0x0) goto LAB_14089580e;
LAB_140895803:
  FUN_144769a66(puVar2);
  puVar31 = (uint *)*puVar2;
LAB_14089580e:
  uVar18 = puVar31[0x12];
  uVar26 = *(longlong *)(puVar31 + 0x10) + 7;
  while (plVar27 = (longlong *)(uVar26 & 0xfffffffffffffff8), puVar31 + 0x4000 < plVar27 + 6) {
    *(uint **)(puVar31 + 0x10) = puVar31 + 0x4000;
    LOCK();
    uVar46 = *puVar31;
    *puVar31 = *puVar31 + uVar18 + 1;
    UNLOCK();
    if ((uVar46 ^ uVar18) != 0xffffffff) goto LAB_140895803;
    puVar31 = (uint *)*puVar2;
    *puVar31 = 0xffffffff;
    *(uint **)(puVar31 + 0x10) = puVar31 + 0x16;
    puVar31[0x12] = 0;
    *puVar2 = puVar31;
    uVar18 = 0;
    uVar26 = (longlong)puVar31 + 0x5f;
  }
  *(longlong **)(puVar31 + 0x10) = plVar27 + 7;
  puVar31[0x12] = uVar18 + 1;
  *(int *)(plVar27 + -1) = ((int)plVar27 + -8) - (int)puVar31;
  *(undefined4 *)((longlong)plVar27 + -4) = 0x30;
  *plVar27 = 0;
  plVar27[1] = 0;
  plVar27[2] = 0;
  plVar27[3] = 0;
  plVar27[4] = 0;
  plVar27[5] = 0;
  iVar20 = (int)uStack_150;
  if ((int)uStack_150 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_150 & 0xffffffff);
  }
  if ((int)uStack_150 != 0) {
    FUN_1402b6406(plVar27,uStack_150 & 0xffffffff);
  }
  if (plVar27 + 4 != (longlong *)(local_1f0 + 0x330)) {
    lVar23 = plVar27[4];
    if (lVar23 != 0) {
      piVar38 = (int *)((lVar23 + -8) - (ulonglong)*(uint *)(lVar23 + -8));
      LOCK();
      *piVar38 = *piVar38 + -1;
      UNLOCK();
      if (*piVar38 == 0) {
        if (*(longlong *)(piVar38 + 0x10) - (longlong)piVar38 == 0x10000) {
          lVar23 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar23 = FUN_145bdc178();
          }
          FUN_140028df4(lVar23,piVar38);
        }
        else {
          FUN_144705e74(piVar38);
        }
      }
    }
    plVar27[4] = *(longlong *)(local_1f0 + 0x330);
    *(undefined8 *)(local_1f0 + 0x330) = 0;
    *(undefined4 *)(plVar27 + 5) = *(undefined4 *)(local_1f0 + 0x338);
    *(undefined4 *)((longlong)plVar27 + 0x2c) = *(undefined4 *)(local_1f0 + 0x33c);
    *(undefined8 *)(local_1f0 + 0x338) = 0;
    iVar20 = (int)uStack_150;
  }
  bVar50 = bVar50 >> 1;
  uVar26 = (ulonglong)CONCAT31((int3)(uVar28 >> 8),bVar50);
  uVar28 = (uVar28 & 0xff) - (ulonglong)(bVar50 & 0x55);
  uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
  iVar35 = (uint)(byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) *
           iVar20;
  if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar35);
  }
  local_1b8 = plVar27 + 2;
  if (*(int *)((longlong)plVar27 + 0x1c) < iVar35) {
    FUN_147514af2();
  }
  if (iVar20 == 0) {
    uVar28 = 0;
  }
  else {
    local_180 = local_158 + (longlong)iVar20 * 10;
    uVar28 = 0;
    puVar47 = local_158;
    lVar23 = local_1f0;
    do {
      if (((char)local_1e0 == '\0') ||
         (bVar50 = ~*(byte *)((longlong)puVar47 + 0x3e) & *(byte *)((longlong)puVar47 + 0x3c),
         uVar26 = CONCAT71((int7)(uVar26 >> 8),bVar50) & 0xffffffffffffff1f, (bVar50 & 0x1f) == 0))
      {
        iVar20 = 0;
        LVar32.QuadPart = 0;
      }
      else {
        local_198 = (LARGE_INTEGER)(longlong)(int)plVar27[3];
        local_1d0 = uVar28;
        do {
          bVar50 = -(char)(uVar26 & 0xffffffff) & (byte)uVar26;
          uVar39 = CONCAT71((int7)((uVar26 & 0xffffffff) >> 8),bVar50);
          uVar24 = FUN_14750d8e0(local_188,uVar39);
          uVar24 = FUN_1447b4020(uVar24);
          if (((DAT_14cb0d2b0 == 0) || (lVar23 = FUN_14750ba12(), lVar23 == 0)) ||
             (plVar29 = (longlong *)FUN_14750b9a6(lVar23,uVar39), plVar29 == (longlong *)0x0)) {
            plVar29 = (longlong *)0x0;
            LVar32.QuadPart = 0;
          }
          else {
            (**(code **)(*plVar29 + 0x2a8))(plVar29,&local_138);
            plVar29 = (longlong *)CONCAT44(uStack_12c,local_130);
            LVar32 = local_138;
          }
          iVar20 = (int)plVar27[3];
          *(uint *)(plVar27 + 3) = iVar20 + 1U;
          if (*(uint *)((longlong)plVar27 + 0x1c) < iVar20 + 1U) {
            FUN_147514b00(local_1b8,iVar20);
          }
          lVar41 = *local_1b8;
          lVar43 = (longlong)iVar20 * 0x20;
          lVar23 = lVar41 + lVar43;
          ((LARGE_INTEGER *)(lVar41 + lVar43))->QuadPart = (LONGLONG)LVar32;
          *(longlong **)(lVar41 + 8 + lVar43) = plVar29;
          if (plVar29 == (longlong *)0x0) {
            *(undefined8 *)(lVar23 + 0x10) = uVar24;
            *(byte *)(lVar23 + 0x18) = bVar50;
          }
          else {
            LOCK();
            *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
            UNLOCK();
            *(undefined8 *)(lVar23 + 0x10) = uVar24;
            *(byte *)(lVar23 + 0x18) = bVar50;
            LOCK();
            plVar3 = plVar29 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar29)(plVar29);
              LOCK();
              piVar38 = (int *)((longlong)plVar29 + 0xc);
              *piVar38 = *piVar38 + -1;
              UNLOCK();
              if (*piVar38 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
          }
          iVar20 = (int)uVar26 + -1;
          bVar50 = (byte)iVar20 & (byte)uVar26;
          uVar26 = (ulonglong)CONCAT31((int3)((uint)iVar20 >> 8),bVar50);
        } while (bVar50 != 0);
        uVar28 = local_1d0;
        lVar23 = local_1f0;
        if (*(DWORD *)(plVar27 + 3) == local_198.s.LowPart) {
          iVar20 = 0;
          LVar32.QuadPart = 0;
        }
        else {
          iVar20 = *(DWORD *)(plVar27 + 3) - local_198.s.LowPart;
          LVar32.QuadPart = local_198.QuadPart * 0x20 + plVar27[2];
        }
      }
      uVar6 = puVar47[2];
      uVar7 = *(ulonglong *)(lVar23 + 0x3d0);
      if ((byte)local_1c4 != '\0') {
        uVar26 = *puVar47;
        uVar8 = puVar47[1];
        uVar44 = puVar47[8];
        uVar45 = puVar47[5];
        local_1a0 = puVar47[6];
        uVar11 = puVar47[7];
        local_168 = CONCAT71(local_168._1_7_,*(undefined1 *)((longlong)puVar47 + 0x3c));
        uVar12 = puVar47[9];
        iVar35 = (int)plVar27[1];
        *(uint *)(plVar27 + 1) = iVar35 + 1U;
        local_1d0 = uVar28;
        local_198 = LVar32;
        uVar16 = (char)uVar12;
        if (*(uint *)((longlong)plVar27 + 0xc) < iVar35 + 1U) {
          local_1c0 = (longlong *)CONCAT71(local_1c0._1_7_,(char)uVar12);
          local_1b0 = uVar44;
          local_178 = uVar45;
          FUN_147514b56(plVar27,iVar35);
          lVar23 = local_1f0;
          uVar44 = local_1b0;
          uVar45 = local_178;
          uVar16 = local_1c0._0_1_;
        }
        lVar41 = *plVar27;
        lVar43 = (longlong)iVar35 * 0x70;
        *(longlong *)(lVar41 + lVar43) = lVar23;
        *(ulonglong *)(lVar41 + 8 + lVar43) = uVar8;
        *(ulonglong *)(lVar41 + 0x10 + lVar43) = uVar26;
        *(ulonglong *)(lVar41 + 0x18 + lVar43) = uVar6;
        ((LARGE_INTEGER *)(lVar41 + 0x20 + lVar43))->QuadPart = (LONGLONG)local_198;
        *(int *)(lVar41 + 0x28 + lVar43) = iVar20;
        *(ulonglong *)(lVar41 + 0x30 + lVar43) = uVar44;
        *(ulonglong *)(lVar41 + 0x38 + lVar43) = uVar45;
        *(ulonglong *)(lVar41 + 0x40 + lVar43) = local_1a0;
        *(int *)(lVar41 + 0x48 + lVar43) = (int)uVar11;
        *(undefined1 *)(lVar41 + 0x4c + lVar43) = (undefined1)local_168;
        *(undefined2 *)(lVar41 + 0x4d + lVar43) = local_138.s.LowPart._0_2_;
        *(undefined1 *)(lVar41 + 0x4f + lVar43) = local_138.s.LowPart._2_1_;
        *(double *)(lVar41 + 0x50 + lVar43) = dVar10;
        *(double *)(lVar41 + 0x58 + lVar43) = dVar9;
        *(float *)(lVar41 + 0x60 + lVar43) = fVar54;
        *(float *)(lVar41 + 100 + lVar43) = fVar54;
        *(undefined1 *)(lVar41 + 0x68 + lVar43) = uVar16;
        *(undefined1 *)(lVar41 + 0x69 + lVar43) = 0;
        uVar28 = local_1d0;
      }
      uVar28 = CONCAT71((int7)(uVar28 >> 8),(byte)uVar28 | uVar7 == uVar6);
      puVar47 = puVar47 + 10;
    } while (puVar47 != local_180);
  }
  if (((int)plVar27[1] == 0) && ((int)plVar27[5] == 0)) goto LAB_140895eee;
  iVar20 = *(int *)local_1d8;
  if (DAT_14c86a9fc == 0) {
    if (iVar20 != 2) {
      if (iVar20 == 1) {
        DVar21 = FUN_140ad26c0();
        DVar22 = GetCurrentThreadId();
        bVar51 = DVar21 == DVar22;
      }
      else {
        bVar51 = iVar20 == 0x10;
      }
      if (!bVar51) goto LAB_140895e1c;
    }
LAB_140895d1d:
    local_138 = *(LARGE_INTEGER *)(plVar27 + 4);
    local_130 = (undefined4)plVar27[5];
    local_148 = *plVar27;
    local_140 = (undefined4)plVar27[1];
    FUN_1432bd3c2(local_1f0,&DAT_14ca85100);
  }
  else {
    if (iVar20 == 0x10) goto LAB_140895d1d;
LAB_140895e1c:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*(int *)local_1d8 == 2)) goto LAB_140895d1d;
      if (*(int *)local_1d8 == 1) {
        DVar21 = FUN_140ad26c0();
        DVar22 = GetCurrentThreadId();
        if (DVar21 == DVar22) goto LAB_140895d1d;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar31 = (uint *)*puVar2;
      if (puVar31 != (uint *)0x0) goto LAB_14089612b;
      while( true ) {
        uVar18 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar18 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar18 | 1;
          __tlregdtor(&LAB_1432c7d5e);
        }
        lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar30 = *(undefined4 **)(lVar23 + 0x310);
        *(undefined8 *)(lVar23 + 0x310) = 0;
        if (puVar30 == (undefined4 *)0x0) {
          puVar30 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar30 = 0xffffffff;
        *(undefined4 **)(puVar30 + 0x10) = puVar30 + 0x16;
        puVar30[0x12] = 0;
        *puVar2 = puVar30;
        FUN_140217a48(puVar2);
        puVar31 = (uint *)*puVar2;
LAB_14089612b:
        puVar49 = (undefined8 *)(*(longlong *)(puVar31 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar36 = (uint *)(puVar49 + 0x17);
        uVar18 = puVar31[0x12];
        if (puVar36 <= puVar31 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar31 + 0x10) = puVar31 + 0x4000;
          LOCK();
          uVar46 = *puVar31;
          *puVar31 = *puVar31 + uVar18 + 1;
          UNLOCK();
          if ((uVar46 ^ uVar18) != 0xffffffff) break;
          puVar31 = (uint *)*puVar2;
          *puVar31 = 0xffffffff;
          *(uint **)(puVar31 + 0x10) = puVar31 + 0x16;
          puVar31[0x12] = 0;
          *puVar2 = puVar31;
          puVar49 = (undefined8 *)((longlong)puVar31 + 0x5fU & 0xfffffffffffffff8);
          puVar36 = (uint *)(puVar49 + 0x17);
          uVar18 = 0;
          if (puVar36 <= puVar31 + 0x4000) {
            uVar18 = 1;
            goto LAB_1408961ab;
          }
        }
      }
      uVar18 = uVar18 + 1;
LAB_1408961ab:
      *(uint **)(puVar31 + 0x10) = puVar36;
      puVar31[0x12] = uVar18;
      iVar20 = 0;
      FUN_1447247dc(puVar49,0);
      *puVar49 = &PTR_FUN_14a4524c0;
      puVar49[0x15] = local_1f0;
      puVar49[0x16] = plVar27;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar18 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
          uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
          iVar20 = 0;
        }
        else {
          uVar26 = 2;
        }
      }
      else {
        iVar20 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar26 = 5;
      }
      if (*(code **)(puVar49[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar49[0xe] + 0x18))(puVar49 + 0xe,puVar49 + 9);
      }
      puVar49[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar49[9] = puVar49;
      puVar49[10] = puVar49;
      lVar23 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar23 == 0) {
        uVar6 = 1;
        if ((char)uVar26 != '\x06') {
          uVar6 = uVar26;
        }
        uVar26 = uVar6;
        uVar24 = 0;
      }
      else {
        if ((char)uVar26 == '\x06') {
          uVar26 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
        }
        uVar24 = *(undefined8 *)(lVar23 + 0x30);
      }
      puVar49[0xf] = uVar24;
      puVar49[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar49 + 0x1c) = iVar20;
      if (puVar49 == (undefined8 *)0x0) {
        local_138.s.LowPart._0_1_ = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar49 + 1) = *(int *)(puVar49 + 1) + 1;
        UNLOCK();
        local_138.s.LowPart._0_1_ = 1;
        FUN_1447439e4(puVar49);
        LOCK();
        piVar38 = (int *)(puVar49 + 1);
        *piVar38 = *piVar38 + -1;
        UNLOCK();
        if (*piVar38 == 0) {
          (**(code **)*puVar49)(puVar49,1);
        }
      }
    }
    else {
      local_128 = (undefined ***)0x0;
      local_118 = &PTR_LAB_14a452470;
      local_110 = local_1f0;
      local_138.QuadPart = (LONGLONG)FUN_1432cab96;
      local_1f8 = &local_138;
      local_108 = plVar27;
      FUN_14005a792(&DAT_14ca9a440,L"SlateDrawWindowsCommand",&DAT_14cab0e78);
      if ((code *)local_138.QuadPart != (code *)0x0) {
        pppuVar33 = local_128;
        if (local_128 == (undefined ***)0x0) {
          pppuVar33 = &local_118;
        }
        (*(code *)(*pppuVar33)[2])();
      }
    }
    plVar27 = (longlong *)0x0;
  }
  FUN_1432ca85e(plVar27);
  plVar27 = (longlong *)0x0;
LAB_140895eee:
  if ((uVar28 & 1) != 0) {
    FUN_14080c2b4();
    *(undefined8 *)(local_1f0 + 0x3d0) = 0;
    *(undefined8 *)(local_1f0 + 0x3d8) = 0;
    *(undefined8 *)(local_1f0 + 0x3c0) = 0;
    *(undefined8 *)(local_1f0 + 0x3c8) = 0;
    *(undefined8 *)(local_1f0 + 0x3e0) = 0;
  }
  puVar47 = local_158;
  lVar23 = (longlong)(int)uStack_150;
  if (lVar23 != 0) {
    lVar41 = local_1f0 + 0x18;
    lVar43 = 0;
    do {
      FUN_14010084e(lVar41,*(undefined8 *)((longlong)puVar47 + lVar43),
                    *(longlong *)((longlong)puVar47 + lVar43 + 0x10) + 0x10);
      lVar43 = lVar43 + 0x50;
    } while (lVar23 * 0x50 != lVar43);
  }
  lVar23 = local_1f0;
  FUN_1415a4f92(local_1f0);
  FUN_142863faa(local_170);
  FUN_142873896(*(undefined8 *)(*(longlong *)(lVar23 + 0x2c0) + 0x260));
  FUN_1432ca85e(plVar27);
  if (puVar47 != (ulonglong *)0x0) {
    piVar38 = (int *)((longlong)puVar47 + (-8 - (ulonglong)(uint)puVar47[-1]));
    LOCK();
    *piVar38 = *piVar38 + -1;
    UNLOCK();
    if (*piVar38 == 0) {
      if (*(longlong *)(piVar38 + 0x10) - (longlong)piVar38 == 0x10000) {
        lVar23 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar23 = FUN_145bdc178();
        }
        FUN_140028df4(lVar23,piVar38);
      }
      else {
        FUN_144705e74(piVar38);
      }
    }
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar27 = local_160 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
      (**(code **)*local_160)();
      LOCK();
      piVar38 = (int *)((longlong)local_160 + 0xc);
      *piVar38 = *piVar38 + -1;
      UNLOCK();
      if (*piVar38 == 0) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408964e4 FUN_1408964e4 body=320 status=ok
// SIG undefined FUN_1408964e4(void)

void FUN_1408964e4(longlong *param_1)

{
  longlong lVar1;
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
  if ((char)param_1[0x2f] == '\x03') {
    lVar1 = (**(code **)(*param_1 + 0x5d0))();
    if (lVar1 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1459f2e4c;
        local_48 = &LAB_148c39de3;
        local_50 = &LAB_1457a9eb2;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140896684 FUN_140896684 body=95 status=ok
// SIG undefined FUN_140896684(void)

ulonglong FUN_140896684(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (*(longlong *)(param_1 + 0x3200) == 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      lVar1 = FUN_1406f612e(lVar1);
      uVar2 = CONCAT71(uVar3,lVar1 != 0);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x3200) = lVar1;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1408966e4 FUN_1408966e4 body=314 status=ok
// SIG undefined FUN_1408966e4(void)

undefined4 FUN_1408966e4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x398);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar2 = *(longlong *)(param_1 + 0x398);
      if (lVar2 == 0) goto LAB_14089674b;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      uVar3 = *(undefined4 *)(lVar2 + 0x394);
    }
  }
LAB_14089674b:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140896820 FUN_140896820 body=401 status=ok
// SIG undefined FUN_140896820(void)

void FUN_140896820(longlong param_1,undefined4 param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_3a8 [44];
  int local_37c;
  longlong local_378;
  undefined1 local_36c [4];
  int *local_368;
  longlong *local_360 [99];
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  iVar2 = FUN_140d17d4e(param_2,param_3,param_1 + 0x780);
  plVar3 = (longlong *)FUN_1440e6910(param_1,iVar2);
  if ((plVar3 == (longlong *)0x0) || (*plVar3 == 0)) {
    lVar6 = 0x330;
    if (*(int *)(param_1 + 0x520) != *(int *)(param_1 + 0x54c)) {
      lVar4 = param_1 + 0x550;
      if (*(longlong *)(param_1 + 0x558) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x558);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x560) - 1U & (uint)*param_3) * 4);
      if (iVar5 != -1) {
        do {
          if (*(byte *)(*(longlong *)(param_1 + 0x518) + (longlong)iVar5 * 0xc) == *param_3) {
            lVar6 = 0x350;
            break;
          }
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x518) + (longlong)iVar5 * 0xc + 4);
        } while (iVar5 != -1);
      }
    }
    if (*(int *)(param_3 + 0x22c) != 0) {
      local_368 = (int *)CONCAT44(local_368._4_4_,param_2);
      FUN_140d1861a(local_360,param_3);
      local_48 = 0;
      local_44 = 0x1400;
      local_42 = 0;
      FUN_140d17b40(param_1 + lVar6,&local_368);
      FUN_140d17bd8(local_360);
      local_378 = *(longlong *)(param_1 + 0x10 + lVar6);
      local_37c = iVar2;
      if (iVar2 != 0 && local_378 != 0) {
        local_368 = &local_37c;
        local_360[0] = &local_378;
        FUN_1440eaf44(param_1 + 0x568,local_36c,&local_368,0);
      }
    }
  }
  else {
    piVar1 = (int *)(*plVar3 + 0x234);
    *piVar1 = *piVar1 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408969b2 FUN_1408969b2 body=235 status=ok
// SIG undefined FUN_1408969b2(void)

void FUN_1408969b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140896aa8();
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x3b0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3b0) = 0;
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
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  FUN_140896ad0(param_1 + 0x3f8);
  if (*(int *)(param_1 + 0x45c) < 0) {
    *(undefined4 *)(param_1 + 0x458) = 0;
    FUN_14481578e(param_1 + 0x450,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(uint *)(param_1 + 0x438) = *(uint *)(param_1 + 0x438) | 0x7fffffff;
  *(undefined4 *)(param_1 + 0x43c) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0x44c)) {
    *(undefined4 *)(param_1 + 0x448) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x448) = 0;
  FUN_1404236c6(param_1 + 0x440,0);
  return;
}



// FUNCTION 140896a9e FUN_140896a9e body=9 status=ok
// SIG undefined FUN_140896a9e(void)

void FUN_140896a9e(longlong param_1)

{
  FUN_140896cec(param_1 + 0x10);
  return;
}



// FUNCTION 140896aa8 FUN_140896aa8 body=39 status=ok
// SIG undefined FUN_140896aa8(void)

void FUN_140896aa8(longlong *param_1)

{
  if ((*param_1 != 0) && ((*(byte *)(*param_1 + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1,0xff);
    return;
  }
  return;
}



// FUNCTION 140896ad0 FUN_140896ad0 body=73 status=ok
// SIG undefined FUN_140896ad0(void)

void FUN_140896ad0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (*plVar1 != 0) {
    FUN_140897c66(*plVar1,plVar1);
    plVar1 = (longlong *)*param_1;
    if (plVar1 == (longlong *)0x0) goto LAB_140896af9;
  }
  FUN_140896b1a(plVar1);
  FUN_1400020a8(plVar1);
LAB_140896af9:
  *param_1 = 0;
  return;
}



// FUNCTION 140896b1a FUN_140896b1a body=210 status=ok
// SIG undefined FUN_140896b1a(void)

void FUN_140896b1a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,1);
        iVar2 = *(int *)(param_1 + 0x10);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) != 0) {
        FUN_1400020a8();
        iVar2 = *(int *)(param_1 + 0x20);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140896bec FUN_140896bec body=68 status=ok
// SIG undefined FUN_140896bec(void)

undefined8 * FUN_140896bec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e1390;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_140896c30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140896c30 FUN_140896c30 body=188 status=ok
// SIG undefined FUN_140896c30(void)

void FUN_140896c30(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a1dfcd0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_140074ac0(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 140896cec FUN_140896cec body=3872 status=ok
// SIG undefined FUN_140896cec(void)

void FUN_140896cec(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  uint *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_1 + 0x278);
  while (lVar17 = *plVar1, lVar17 != 0) {
    lVar12 = *(longlong *)(lVar17 + 8);
    lVar18 = *(longlong *)(param_1 + 0x278);
    *(longlong *)(param_1 + 0x278) = lVar17;
    *(undefined8 *)(lVar17 + 8) = 0;
    if (lVar18 != 0) {
      FUN_1400020a8();
    }
    if (lVar12 != 0) {
      FUN_140896b1a(lVar12);
      FUN_1400020a8();
    }
    plVar1 = *(longlong **)(param_1 + 0x278);
  }
  while (lVar17 = **(longlong **)(param_1 + 0x268), lVar17 != 0) {
    plVar1 = *(longlong **)(lVar17 + 8);
    lVar12 = *(longlong *)(param_1 + 0x268);
    *(longlong *)(param_1 + 0x268) = lVar17;
    *(undefined8 *)(lVar17 + 8) = 0;
    if (lVar12 != 0) {
      FUN_1400020a8();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,1);
    }
  }
  while (*(int *)(param_1 + 0xb0) != 0) {
    lVar17 = **(longlong **)(param_1 + 0xa8);
    FUN_140897c66();
    if (lVar17 != 0) {
      FUN_140896b1a(lVar17);
      FUN_1400020a8();
    }
  }
  plVar1 = (longlong *)(param_1 + 0xb8);
  local_78 = (uint *)(param_1 + 200);
  iVar14 = *(int *)(param_1 + 0xe0);
  if (iVar14 == 0) {
    uVar15 = 1;
    uVar20 = 0;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar2 = local_78;
    }
    uVar13 = *puVar2;
    if (uVar13 == 0) {
      iVar10 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar10 = iVar14 + -1;
      }
      uVar20 = 0;
      uVar7 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar7 = uVar20;
      }
      iVar10 = 0;
      do {
        if (uVar7 == uVar20) goto LAB_140896e9d;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar2[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar20 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar7 = uVar15 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar6) {
      iVar6 = iVar14;
    }
  }
  if (iVar6 != iVar14) {
    uVar13 = 0xffffffff;
    iVar11 = iVar14;
    do {
      plVar16 = *(longlong **)(*plVar1 + (longlong)iVar6 * 8);
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 0x20))(plVar16,1);
        iVar11 = *(int *)(param_1 + 0xe0);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar2 = *(uint **)(param_1 + 0xd8);
      if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
        puVar2 = local_78;
      }
      iVar6 = (int)uVar20;
      lVar17 = (longlong)iVar6;
      uVar3 = puVar2[lVar17] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar4 = iVar11 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar6 < iVar4) {
          lVar12 = 0;
          do {
            uVar3 = puVar2[lVar17 + lVar12 + 1];
            if (uVar3 != 0) {
              uVar20 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140896e73;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar17 != lVar12);
          uVar13 = 0xffffffff;
          lVar17 = (longlong)iVar5;
        }
        uVar20 = lVar17 + 1U & 0xffffffff;
        iVar6 = iVar11;
      }
      else {
LAB_140896e73:
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar7 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar6) {
          iVar6 = iVar11;
        }
      }
    } while (iVar6 != iVar14);
  }
LAB_140896e9d:
  lVar17 = param_1 + 0x100;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_88 = plVar1;
  local_60 = lVar17;
  if (*(int *)(param_1 + 0x118) == 0) {
    uVar20 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar14 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar20 = local_68 >> 0x20;
    iVar14 = *(int *)(param_1 + 0x118);
  }
  lVar12 = local_60;
  local_70 = (longlong *)(param_1 + 0xf0);
  local_80 = lVar17;
  iVar6 = local_58._4_4_;
  iVar10 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar11 = local_50;
  do {
    while( true ) {
      if ((iVar6 == iVar14) && (lVar12 == local_80)) {
        iVar14 = *(int *)(param_1 + 0x438);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x430);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        plVar1 = local_88;
        if (*(longlong *)(param_1 + 0x428) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x430) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x418);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x410);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x408) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x410) != 0) {
          FUN_1400020a8();
        }
        iVar14 = *(int *)(param_1 + 0x3f8);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x3f0);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 1000) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x3f0) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x3d8);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x3d0);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x3c8) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x3d0) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x3b8);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x3b0);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x3a8) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x3b0) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x398);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x390);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x388) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x390) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x378);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x370);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x368) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x370) != 0) {
          FUN_1400020a8();
        }
        iVar14 = *(int *)(param_1 + 0x358);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x350);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x348) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x350) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x338);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x330);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x328) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x330) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x318);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x310);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x308) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x310) != 0) {
          FUN_1400020a8();
        }
        plVar16 = local_88;
        iVar14 = *(int *)(param_1 + 0x2f8);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x2f0);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
            plVar1 = plVar16;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x2e8) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x2f0) != 0) {
          FUN_1400020a8();
        }
        iVar14 = *(int *)(param_1 + 0x2d8);
        if ((longlong)iVar14 != 0) {
          lVar17 = *(longlong *)(param_1 + 0x2d0);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar12) != 0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
          } while ((longlong)iVar14 * 0x10 != lVar12);
        }
        if (*(longlong *)(param_1 + 0x2c8) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x2d0) != 0) {
          FUN_1400020a8();
        }
        if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
          plVar16 = *(longlong **)(param_1 + 0x2b0);
          plVar8 = plVar16 + (longlong)*(int *)(param_1 + 0x2b8) * 2;
          do {
            lVar17 = *plVar16;
            if (lVar17 != 0) {
              if (*(longlong *)(lVar17 + -0x10) != 0) {
                lVar12 = *(longlong *)(lVar17 + -0x10) * 0x2d0;
                do {
                  FUN_142b4e8f4(lVar17 + -0x2d0 + lVar12);
                  lVar12 = lVar12 + -0x2d0;
                } while (lVar12 != 0);
              }
              FUN_1400020a8(lVar17 + -0x10);
            }
            plVar16 = plVar16 + 2;
            plVar1 = local_88;
          } while (plVar16 != plVar8);
        }
        lVar17 = *(longlong *)(param_1 + 0x2a8);
        if (lVar17 != 0) {
          lVar12 = *(longlong *)(lVar17 + -0x10);
          if (lVar12 != 0) {
            plVar16 = (longlong *)(lVar12 * 0x2d0 + lVar17 + -0x60);
            lVar12 = lVar12 * -0x2d0;
            do {
              if (plVar16[4] != 0) {
                plVar8 = plVar16 + 8;
                if ((longlong *)plVar16[6] != (longlong *)0x0) {
                  plVar8 = (longlong *)plVar16[6];
                }
                (**(code **)(*plVar8 + 0x10))();
              }
              if (plVar16[-4] != 0) {
                plVar8 = (longlong *)plVar16[-2];
                if ((longlong *)plVar16[-2] == (longlong *)0x0) {
                  plVar8 = plVar16;
                }
                (**(code **)(*plVar8 + 0x10))();
              }
              if ((char)plVar16[-0xe] == '\x01') {
                *(undefined1 *)(plVar16 + -0xe) = 0;
              }
              plVar16 = plVar16 + -0x5a;
              lVar12 = lVar12 + 0x2d0;
            } while (lVar12 != 0);
          }
          FUN_1400020a8(lVar17 + -0x10);
        }
        if (*(longlong *)(param_1 + 0x2b0) == 0) goto LAB_140897642;
        while( true ) {
          FUN_1400020a8();
LAB_140897642:
          if (*(undefined8 **)(param_1 + 0x298) == (undefined8 *)0x0) break;
          *(undefined8 *)(param_1 + 0x298) = **(undefined8 **)(param_1 + 0x298);
        }
        while (*(undefined8 **)(param_1 + 0x288) != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x288) = **(undefined8 **)(param_1 + 0x288);
          FUN_1400020a8();
        }
        while (*(undefined8 **)(param_1 + 0x278) != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x278) = **(undefined8 **)(param_1 + 0x278);
          FUN_1400020a8();
        }
        while (*(undefined8 **)(param_1 + 0x268) != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x268) = **(undefined8 **)(param_1 + 0x268);
          FUN_1400020a8();
        }
        *(undefined4 *)(param_1 + 0x250) = 0;
        if (*(longlong *)(param_1 + 0x248) != 0) {
          FUN_1400020a8();
        }
        FUN_140cb0490((longlong *)(param_1 + 0x208),0);
        if (*(longlong *)(param_1 + 0x228) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x208) != 0) {
          FUN_1400020a8();
        }
        if (*(PSRWLOCK *)(param_1 + 0x1b8) != (PSRWLOCK)0x0) {
          AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
          **(int **)(param_1 + 0x1c0) = **(int **)(param_1 + 0x1c0) + -1;
          piVar9 = *(int **)(param_1 + 0x1c0);
          if (*piVar9 == 0) {
            plVar16 = *(longlong **)(param_1 + 0x1b0);
            if (plVar16 != (longlong *)0x0) {
              *(undefined4 *)(plVar16 + 9) = 0;
              if (plVar16[8] != 0) {
                FUN_1400020a8();
              }
              FUN_140b7c400(plVar16,0);
              if (plVar16[4] != 0) {
                FUN_1400020a8();
              }
              if (*plVar16 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(plVar16);
              piVar9 = *(int **)(param_1 + 0x1c0);
            }
            *(undefined8 *)(param_1 + 0x1b0) = 0;
            if (piVar9 != (int *)0x0) {
              FUN_1400020a8();
            }
            *(undefined8 *)(param_1 + 0x1c0) = 0;
            ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
            if (*(longlong *)(param_1 + 0x1b8) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 *)(param_1 + 0x1b8) = 0;
          }
          else {
            ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
          }
        }
        *(undefined ***)(param_1 + 0x178) = &PTR_LAB_14a1e3a20;
        if (*(longlong *)(param_1 + 0x1a0) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 400) != 0) {
          FUN_1400020a8();
        }
        if (*(PSRWLOCK *)(param_1 + 0x168) != (PSRWLOCK)0x0) {
          AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x168));
          **(int **)(param_1 + 0x170) = **(int **)(param_1 + 0x170) + -1;
          piVar9 = *(int **)(param_1 + 0x170);
          if (*piVar9 == 0) {
            plVar16 = *(longlong **)(param_1 + 0x160);
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
              piVar9 = *(int **)(param_1 + 0x170);
            }
            *(undefined8 *)(param_1 + 0x160) = 0;
            if (piVar9 != (int *)0x0) {
              FUN_1400020a8();
            }
            *(undefined8 *)(param_1 + 0x170) = 0;
            ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x168));
            if (*(longlong *)(param_1 + 0x168) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 *)(param_1 + 0x168) = 0;
          }
          else {
            ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x168));
          }
        }
        if (*(longlong *)(param_1 + 0x148) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x138) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0x128) != 0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(param_1 + 0xf8) = 0;
        if (*(int *)(param_1 + 0xfc) != 0) {
          FUN_140b584e0(local_70,0);
        }
        *(undefined8 *)(param_1 + 0x120) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x118) = 0;
        if (0x80 < *(uint *)(param_1 + 0x11c)) {
          *(undefined4 *)(param_1 + 0x11c) = 0x80;
          FUN_1446efbd8(local_80,0);
        }
        if (*(longlong *)(param_1 + 0x110) != 0) {
          FUN_1400020a8();
        }
        if (*local_70 != 0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(param_1 + 0xc0) = 0;
        if (*(int *)(param_1 + 0xc4) != 0) {
          FUN_140b584e0(plVar1,0);
        }
        *(undefined8 *)(param_1 + 0xe8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (0x80 < *(uint *)(param_1 + 0xe4)) {
          *(undefined4 *)(param_1 + 0xe4) = 0x80;
          FUN_1446efbd8(local_78,0);
        }
        if (*(longlong *)(param_1 + 0xd8) != 0) {
          FUN_1400020a8();
        }
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_1400020a8();
        }
        if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      lVar17 = *(longlong *)(*local_70 + (longlong)iVar6 * 8);
      if (lVar17 != 0) {
        if (*(longlong *)(lVar17 + 0x290) != 0) {
          plVar1 = (longlong *)(lVar17 + 0x2b0);
          if (*(longlong **)(lVar17 + 0x2a0) != (longlong *)0x0) {
            plVar1 = *(longlong **)(lVar17 + 0x2a0);
          }
          (**(code **)(*plVar1 + 0x10))();
        }
        if (*(longlong *)(lVar17 + 0x250) != 0) {
          plVar1 = (longlong *)(lVar17 + 0x270);
          if (*(longlong **)(lVar17 + 0x260) != (longlong *)0x0) {
            plVar1 = *(longlong **)(lVar17 + 0x260);
          }
          (**(code **)(*plVar1 + 0x10))();
        }
        FUN_1400020a8(lVar17);
      }
      uVar13 = uVar13 & ~(uint)uVar20;
      lVar17 = *(longlong *)(lVar12 + 0x10);
      if (*(longlong *)(lVar12 + 0x10) == 0) {
        lVar17 = lVar12;
      }
      iVar4 = *(int *)(lVar12 + 0x18);
      lVar18 = (longlong)iVar10;
      uVar3 = *(uint *)(lVar17 + lVar18 * 4) & uVar13;
      if (uVar3 == 0) break;
LAB_140897b60:
      uVar20 = (ulonglong)(-uVar3 & uVar3);
      uVar7 = uVar20 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
    }
    iVar6 = iVar4 + 0x1e;
    if (-1 < iVar4 + -1) {
      iVar6 = iVar4 + -1;
    }
    iVar6 = iVar6 >> 5;
    iVar11 = iVar11 + 0x20;
    iVar5 = iVar6;
    if (iVar6 < iVar10) {
      iVar5 = iVar10;
    }
    if (iVar10 < iVar6) {
      lVar19 = 0;
      do {
        uVar3 = *(uint *)(lVar17 + lVar18 * 4 + 4 + lVar19 * 4);
        if (uVar3 != 0) {
          iVar10 = iVar10 + (int)lVar19 + 1;
          uVar13 = 0xffffffff;
          goto LAB_140897b60;
        }
        iVar11 = iVar11 + 0x20;
        lVar19 = lVar19 + 1;
      } while (iVar5 - lVar18 != lVar19);
      uVar13 = 0xffffffff;
      iVar10 = iVar5;
    }
    iVar10 = iVar10 + 1;
    iVar6 = iVar4;
  } while( true );
}



// FUNCTION 140897c0e FUN_140897c0e body=87 status=ok
// SIG undefined FUN_140897c0e(void)

undefined8 * FUN_140897c0e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e3c98;
  FUN_144724f11(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140897c66 FUN_140897c66 body=365 status=ok
// SIG undefined FUN_140897c66(void)

void FUN_140897c66(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    plVar9 = *(longlong **)(param_2 + 8);
    plVar1 = plVar9 + *(int *)(param_2 + 0x10);
    do {
      lVar4 = (longlong)*(int *)(*plVar9 + 0x2a8);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(*plVar9 + 0x2a0);
        lVar6 = 0;
        do {
          local_50 = *(ulonglong *)(lVar5 + 0x508 + lVar6);
          uVar2 = *(ulonglong *)(lVar5 + 0x518 + lVar6);
          local_58 = uVar2;
          if (local_50 < uVar2) {
            local_58 = local_50;
            local_50 = uVar2;
          }
          FUN_140897dd4(param_1 + 0x208,&local_58);
          lVar6 = lVar6 + 0x520;
        } while (lVar4 * 0x520 - lVar6 != 0);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
    iVar8 = 1;
    lVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) == local_60) {
        if (iVar8 != 0) {
          iVar8 = iVar3 - iVar8;
          if (iVar8 != 0) {
            iVar7 = 1;
            if (iVar8 < 1) {
              iVar7 = iVar8;
            }
            memmove((void *)(lVar4 + (lVar5 >> 0x20) * 8),
                    (void *)(lVar4 + (longlong)(iVar3 - iVar7) * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0xb0);
          }
          *(int *)(param_1 + 0xb0) = iVar3 + -1;
        }
        break;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 << 3 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140897dd4 FUN_140897dd4 body=302 status=ok
// SIG undefined FUN_140897dd4(void)

void FUN_140897dd4(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    uVar10 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar11 +
                    ((longlong)
                     (int)((uVar7 >> 2) + uVar7 * 0x40 + (uVar10 >> 0x10 ^ uVar10) + 0x9e3779b9 ^
                          uVar7) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar5 = *param_1;
      do {
        lVar8 = (longlong)iVar2 * 0x538;
        lVar1 = lVar5 + lVar8;
        if ((*(ulonglong *)(lVar5 + lVar8) == uVar3) && (*(ulonglong *)(lVar5 + 8 + lVar8) == uVar4)
           ) {
          iVar6 = *(int *)((longlong)plVar11 + (longlong)*(int *)(lVar1 + 0x534) * 4);
          if (iVar6 == iVar2) {
            piVar9 = (int *)((longlong)plVar11 + (longlong)*(int *)(lVar1 + 0x534) * 4);
          }
          else {
            do {
              piVar9 = (int *)(lVar5 + (longlong)iVar6 * 0x538 + 0x530);
              iVar6 = *piVar9;
            } while (iVar6 != iVar2);
          }
          *piVar9 = *(int *)(lVar1 + 0x530);
          FUN_140897f02(param_1,iVar2,1);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x530);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 140897f02 FUN_140897f02 body=145 status=ok
// SIG undefined FUN_140897f02(void)

void FUN_140897f02(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x538 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x538) = param_2;
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
      puVar7 = puVar7 + 0x14e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140897f94 FUN_140897f94 body=573 status=ok
// SIG undefined FUN_140897f94(void)

void FUN_140897f94(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong local_90;
  int local_88;
  uint local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1457538dc(&local_90,0x10,1,0);
  uVar7 = (ulonglong)local_80;
  if ((-1 < (int)local_80) && ((int)local_80 < local_88)) {
    do {
      lVar4 = *(longlong *)(local_90 + (uVar7 & 0xffffffff) * 8);
      local_98 = lVar4;
      if ((((lVar4 != 0) && (lVar6 = FUN_1408981d2(), lVar6 != 0)) &&
          (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        local_b8 = (longlong *)0x0;
        plStack_b0 = (longlong *)0x0;
        local_a8 = 0;
        FUN_14575388e(&local_b8,local_98);
        plVar2 = plStack_b0;
        plVar5 = local_b8;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plStack_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if ((plVar5 != (longlong *)0x0) &&
           ((**(code **)(*plVar5 + 0x10))(plVar5,&local_c0), local_c0 != 0)) {
          local_78 = &local_c0;
          local_70 = &local_98;
          FUN_145c160e2(&DAT_14cb866b0,local_64,&local_78,0);
        }
        plVar5 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_b0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      uVar7 = (longlong)(int)local_80;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
        local_80 = (uint)uVar7;
        if ((longlong)local_88 <= (longlong)uVar7) break;
      } while (*(longlong *)(local_90 + uVar7 * 8) == 0);
    } while ((-2 < (longlong)uVar8) && ((int)local_80 < local_88));
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408981d2 FUN_1408981d2 body=57 status=ok
// SIG undefined FUN_1408981d2(void)

void FUN_1408981d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bba8 = FUN_140002ddd(FUN_14652e15e,uVar1,L"MissionAliasTemplate");
  }
  return;
}



// FUNCTION 14089820c FUN_14089820c body=24 status=ok
// SIG undefined FUN_14089820c(void)

undefined8 FUN_14089820c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140898224 FUN_140898224 body=76 status=ok
// SIG undefined FUN_140898224(void)

void FUN_140898224(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    lVar1 = *(longlong *)(*param_1 + 0x78 + (ulonglong)param_2 * 0x90);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x28)) &
              0xffffffffffffff02;
      uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
    }
    FUN_140898270(param_1,*param_1 + (ulonglong)param_2 * 0x90,uVar3,0,0);
  }
  return;
}



// FUNCTION 140898270 FUN_140898270 body=286 status=ok
// SIG undefined FUN_140898270(void)

void FUN_140898270(longlong *param_1,longlong param_2,undefined4 param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_1[2];
  if ((char)param_3 == '\0') {
    if ((*(byte *)(*(longlong *)(param_2 + 0x40) + 0x28) & 1) == 0) {
      FUN_14089845a(param_2,0);
    }
    else if ((*(byte *)(param_2 + 0x88) & 0x22) == 2) {
      *(byte *)(param_2 + 0x88) = *(byte *)(param_2 + 0x88) & 0xdd;
    }
  }
  else {
    FUN_14089838e(param_2);
  }
  if (param_4 != '\0') {
    lVar5 = param_2 + 0x60;
    if (*(longlong *)(param_2 + 0x68) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x68);
    }
    iVar1 = *(int *)(param_2 + 0x70);
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        iVar2 = *(int *)(lVar5 + lVar4);
        if ((-1 < (longlong)iVar2) && (iVar2 < (int)param_1[1])) {
          FUN_140898270(param_1,(longlong)iVar2 * 0x90 + *param_1,param_3,1,1);
        }
        lVar4 = lVar4 + 4;
      } while ((longlong)iVar1 * 4 != lVar4);
    }
  }
  if (param_5 == '\0') {
    if ((*(byte *)(*(longlong *)(param_2 + 0x40) + 0x28) & 1) != 0) {
      FUN_1408983b2(param_2);
    }
    if (((param_1[2] != lVar3) && ((int)param_1[4] != 0)) &&
       ((longlong *)param_1[3] != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001408982fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[3] + 0x60))();
      return;
    }
  }
  return;
}



// FUNCTION 14089838e FUN_14089838e body=36 status=ok
// SIG undefined FUN_14089838e(void)

void FUN_14089838e(longlong param_1)

{
  if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x28) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x88) & 0x22) == 0) {
      *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
    }
    return;
  }
  FUN_14089845a(param_1,1);
  return;
}



// FUNCTION 1408983b2 FUN_1408983b2 body=167 status=ok
// SIG undefined FUN_1408983b2(void)

void FUN_1408983b2(longlong param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)(param_1 + 0x88) & 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    bVar3 = 1;
    if (((-1 < (longlong)iVar1) && (iVar1 < (int)(*(longlong **)(param_1 + 0x40))[1])) &&
       (lVar4 = (longlong)iVar1 * 0x90 + **(longlong **)(param_1 + 0x40), lVar4 != 0)) {
      bVar3 = *(byte *)(lVar4 + 0x88) & 1;
    }
    FUN_14089845a(param_1,*(byte *)(param_1 + 0x88) >> 1 & bVar3);
    lVar4 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
    }
    iVar1 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        iVar2 = *(int *)(lVar4 + lVar5);
        if (((-1 < (longlong)iVar2) && (iVar2 < (int)(*(longlong **)(param_1 + 0x40))[1])) &&
           ((longlong)iVar2 * 0x90 + **(longlong **)(param_1 + 0x40) != 0)) {
          FUN_1408983b2();
        }
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar1 * 4 != lVar5);
    }
  }
  return;
}



// FUNCTION 14089845a FUN_14089845a body=186 status=ok
// SIG undefined FUN_14089845a(void)

void FUN_14089845a(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x88);
  if ((bVar1 & 0x20) != 0) {
    return;
  }
  if (((bVar1 ^ param_2) & 1) == 0) {
    return;
  }
  param_2 = bVar1 & 0xde | param_2;
  *(byte *)(param_1 + 0x88) = param_2;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 8) + 8 + lVar2) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 8) + lVar2) != 0)) {
        FUN_140898514(param_1 + 8);
        param_2 = *(byte *)(param_1 + 0x88);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0x10 != lVar2);
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_1408984d2;
    lVar2 = 0x30;
  }
  else {
    if (*(int *)(param_1 + 0x28) < 1) goto LAB_1408984d2;
    lVar2 = 0x20;
  }
  FUN_1447cd2ec(lVar2 + param_1,0);
LAB_1408984d2:
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((~*(byte *)(lVar2 + 0x28) & 3) == 0) {
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) & ~*(ulonglong *)(param_1 + 0x58);
    }
    else {
      *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) | *(ulonglong *)(param_1 + 0x58);
    }
  }
  return;
}



// FUNCTION 140898514 FUN_140898514 body=162 status=ok
// SIG undefined FUN_140898514(void)

void FUN_140898514(longlong *param_1,undefined4 param_2)

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
        goto LAB_14089859c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14089859c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1408985b6 FUN_1408985b6 body=311 status=ok
// SIG undefined FUN_1408985b6(void)

longlong FUN_1408985b6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong local_28;
  int local_20;
  char local_1c;
  byte local_1b;
  byte local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_1408986ee(&local_30,param_1);
    plVar2 = local_30;
    lVar3 = local_28;
LAB_1408985eb:
    local_28 = lVar3;
    local_30 = plVar2;
    if (local_28 != 0) {
      lVar3 = local_28;
      if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_14089868a;
      lVar3 = *(longlong *)(local_28 + 0x18);
      plVar2 = local_30;
      local_28 = lVar3;
      if (local_30 != (longlong *)0x0) {
        do {
          lVar4 = (longlong)local_20;
          while( true ) {
            for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
              if (((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x2008001) == 0) &&
                 (((local_1b & 1) != 0 || ((*(byte *)(lVar3 + 0x3b) & 0x20) == 0))))
              goto LAB_1408985eb;
            }
            if ((local_1a & 1) == 0) break;
            lVar4 = lVar4 + 1;
            local_20 = (int)lVar4;
            if ((int)plVar2[0x3c] <= lVar4) break;
            lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
            lVar3 = 0;
            if (lVar1 != 0) {
              lVar3 = *(longlong *)(lVar1 + 0x50);
            }
          }
          if ((local_1c != '\x01') ||
             (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(), plVar2 == (longlong *)0x0))
          goto LAB_140898688;
          lVar3 = plVar2[10];
          local_20 = -1;
        } while( true );
      }
      plVar2 = (longlong *)0x0;
      goto LAB_1408985eb;
    }
  }
LAB_140898688:
  lVar3 = 0;
LAB_14089868a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1408986ee FUN_1408986ee body=315 status=ok
// SIG undefined FUN_1408986ee(void)

longlong * FUN_1408986ee(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar4;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar4 = FUN_144a797b2();
    if (*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30;
      goto LAB_14089873a;
    }
  }
  bVar5 = false;
LAB_14089873a:
  *(bool *)((longlong)param_1 + 0x16) = bVar5;
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_14089874d:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x2008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_14089876f;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_14089874d;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_14089874d;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_14089876f:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return param_1;
}



// FUNCTION 14089882a FUN_14089882a body=111 status=ok
// SIG undefined FUN_14089882a(void)

longlong * FUN_14089882a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14001cc68(0x90,0x10);
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_140515e58(uVar2,param_1);
  FUN_14089889a(lVar1,uVar2,param_3,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14089889a FUN_14089889a body=214 status=ok
// SIG undefined FUN_14089889a(void)

undefined8 *
FUN_14089889a(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar1;
  *(byte *)((longlong)param_1 + 0x1d) = bVar1;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bf10;
  param_1[0x11] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
    if (*(int *)(param_2 + 8) == 1) {
      LOCK();
      *(undefined4 *)(param_2 + 0xc) = 1;
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = param_4;
  FUN_14054469a(param_1,param_3);
  return param_1;
}



// FUNCTION 14089897c FUN_14089897c body=182 status=ok
// SIG undefined FUN_14089897c(void)

void FUN_14089897c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140898a32(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x60 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x3ff00000;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0x3ff0000000000000;
      puVar2[9] = 0x3ff0000000000000;
      puVar2[10] = 0x3ff0000000000000;
      puVar2[0xb] = 0;
      puVar2 = puVar2 + 0xc;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9bb80(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140898a32 FUN_140898a32 body=275 status=ok
// SIG undefined FUN_140898a32(void)

void FUN_140898a32(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140898b46 FUN_140898b46 body=40 status=ok
// SIG undefined FUN_140898b46(void)

undefined8 FUN_140898b46(undefined8 param_1,int param_2)

{
  FUN_140898b6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140898b6e FUN_140898b6e body=214 status=ok
// SIG undefined FUN_140898b6e(void)

void FUN_140898b6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab90d10;
  param_1[5] = &PTR_FUN_14ab91710;
  param_1[6] = &PTR_LAB_14ab91750;
  param_1[0x55] = &PTR_FUN_14ab917a0;
  param_1[0x56] = &PTR_FUN_14ab91820;
  param_1[0x57] = &PTR_FUN_14ab91830;
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_1408c1d26(param_1 + 0xd3,1);
  *param_1 = &PTR_FUN_14ab7dce0;
  param_1[5] = &PTR_LAB_14ab7e6e0;
  param_1[6] = &PTR_LAB_14ab7e720;
  param_1[0x55] = &PTR_LAB_14ab7e770;
  param_1[0x56] = &PTR_LAB_14ab7e7f0;
  param_1[0x57] = &PTR_LAB_14ab7e800;
  FUN_1404857c6(param_1 + 0xcc,1);
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140898c44 FUN_140898c44 body=112 status=ok
// SIG undefined FUN_140898c44(void)

undefined8 * FUN_140898c44(undefined8 *param_1,int param_2)

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
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140898cb4 FUN_140898cb4 body=112 status=ok
// SIG undefined FUN_140898cb4(void)

undefined8 * FUN_140898cb4(undefined8 *param_1,int param_2)

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
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140898d24 FUN_140898d24 body=310 status=ok
// SIG undefined FUN_140898d24(void)

ulonglong FUN_140898d24(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  for (plVar2 = param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[4]) {
    if ((*(uint *)(plVar2 + 1) & 0x30) != 0) goto LAB_140898df9;
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar4 = param_1[0x2f];
    cVar5 = (**(code **)(*param_1 + 0x2d8))(param_1);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((bool)cVar5 != (lVar4 != 0)) goto LAB_140898dfb;
    if (param_1[0x2f] == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = (*(byte *)(param_1[0x2f] + 0x240) & 0x20) >> 5;
    }
    bVar6 = (**(code **)(*param_1 + 0x2e0))(param_1);
    if ((bVar7 != bVar6) && (cVar5 = (**(code **)(*param_1 + 0x2d8))(param_1), cVar5 != '\0'))
    goto LAB_140898dfb;
    bVar7 = *(byte *)(lVar3 + 0x152);
    if ((bVar7 == 1) || ((bVar7 < 7 && ((0x68U >> (bVar7 & 0x1f) & 1) != 0)))) {
      iVar1 = *(int *)((longlong)param_1 + 0xe4);
      if (((longlong)iVar1 < 0) || ((int)param_1[0xd] <= iVar1)) goto LAB_140898dd0;
      local_30 = *(longlong *)(param_1[0xc] + (longlong)iVar1 * 8);
    }
    else {
LAB_140898dd0:
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_30);
    }
    if ((param_1[0x2f] != 0) && (param_1[0x32] != local_30)) goto LAB_140898dfb;
  }
LAB_140898df9:
  uVar8 = 0;
LAB_140898dfb:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140898eae FUN_140898eae body=673 status=ok
// SIG undefined FUN_140898eae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140898eae(longlong param_1)

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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11090) {
    FUN_144b3d300(&DAT_14cb11090);
    if (DAT_14cb11090 == -1) {
      DAT_14cb11060 = 0;
      _DAT_14cb11068 = 0;
      DAT_14cb11040 = 0;
      _DAT_14cb11048 = 0;
      _DAT_14cb1106c = 0xffffffff00000080;
      _DAT_14cb11074 = 0;
      DAT_14cb11080 = 0;
      _DAT_14cb11088 = 0;
      atexit(FUN_143798495);
      _Init_thread_footer(&DAT_14cb11090);
    }
  }
  if (DAT_14cb10130 == 0) {
    local_40 = &local_20;
    local_20 = FUN_140754f84;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147da9a76;
    local_50 = FUN_1409f3105;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar2 = DAT_14cb10130;
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
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
  }
  if ((*(longlong *)(lVar4 + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb11040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140899162 FUN_140899162 body=87 status=ok
// SIG undefined FUN_140899162(void)

longlong FUN_140899162(longlong param_1)

{
  if (*(int *)(param_1 + 0x144) != *(int *)(param_1 + 0x140)) {
    FUN_144881636(param_1 + 0x150,param_1);
    FUN_144731a98(param_1 + 0x150,param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x140);
  }
  return param_1 + 0x150;
}



// FUNCTION 1408991ca FUN_1408991ca body=742 status=ok
// SIG undefined FUN_1408991ca(void)

void FUN_1408991ca(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *_Src;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_1403a682c;
      local_b0 = 0;
      local_b8 = 0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_60);
            goto LAB_1408992d5;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_60) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_60,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_60,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar1[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_60,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_60,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
LAB_1408992d5:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98[0] = local_60[0];
  local_90 = local_58;
  uVar6 = FUN_14477b664(uStack_50);
  local_88 = FUN_14477b664(uVar6);
  local_80 = local_48;
  local_78 = uStack_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  local_68 = local_30;
  (**(code **)(*param_1 + 0x2a8))(param_1,local_98);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408994b2 FUN_1408994b2 body=262 status=ok
// SIG undefined FUN_1408994b2(void)

void FUN_1408994b2(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  iVar1 = *param_2;
  if ((*(int *)(param_1 + 0xd8) != iVar1) && (*(int *)(param_1 + 0x68) != iVar1)) {
    *(int *)(param_1 + 0xd8) = iVar1;
    lVar2 = *(longlong *)(param_2 + 2);
    if (*(longlong *)(param_1 + 0x108) != lVar2) {
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
    *(longlong *)(param_1 + 0x108) = lVar2;
    if (*(longlong *)(param_1 + 0x110) != *(longlong *)(param_2 + 4)) {
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
    uVar6 = FUN_14477b664();
    uVar6 = FUN_14477b664(uVar6);
    *(undefined8 *)(param_1 + 0x110) = uVar6;
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 6);
    iVar1 = param_2[9];
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    *(int *)(param_1 + 0x120) = param_2[8];
    *(int *)(param_1 + 0x124) = iVar1;
    *(int *)(param_1 + 0x128) = iVar3;
    *(int *)(param_1 + 300) = iVar4;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(byte *)(param_1 + 0x139) = *(byte *)(param_2 + 0xc) & 1;
    uVar5 = FUN_1408995b8(param_2,param_1);
    *(undefined1 *)(param_1 + 0x130) = uVar5;
    *(byte *)(param_1 + 0x140) = *(byte *)(param_2 + 0xc) >> 1 & 1;
    *(byte *)(param_1 + 0x141) = *(byte *)(param_2 + 0xc) >> 2 & 1;
    *(byte *)(param_1 + 0x142) = *(byte *)(param_2 + 0xc) >> 3 & 1;
    if ((*(byte *)(param_2 + 0xc) & 0x10) != 0) {
      FUN_1457539de(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1408995b8 FUN_1408995b8 body=143 status=ok
// SIG undefined FUN_1408995b8(void)

undefined1 FUN_1408995b8(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar4 != 0) {
      lVar4 = FUN_140115352(lVar4);
      if ((((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x48), plVar1 != (longlong *)0x0)) &&
          (*param_1 != 0)) && ((longlong)(int)plVar1[1] != 0)) {
        lVar4 = *plVar1;
        lVar5 = (longlong)(int)plVar1[1] * 0x118;
        do {
          if (*(int *)(lVar4 + 4) == *param_1) goto LAB_14089961d;
          lVar4 = lVar4 + 0x118;
          lVar5 = lVar5 + -0x118;
        } while (lVar5 != 0);
      }
    }
  }
  lVar4 = 0;
LAB_14089961d:
  cVar2 = FUN_140899648(param_1 + 2);
  if (cVar2 == '\0') {
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(lVar4 + 0xc1);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140899648 FUN_140899648 body=55 status=ok
// SIG undefined FUN_140899648(void)

undefined1 FUN_140899648(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_14494f566();
  uVar3 = FUN_140899680(param_1);
  lVar4 = FUN_140899702(uVar3,uVar2);
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar4 + 0x39);
  }
  return uVar1;
}



// FUNCTION 140899680 FUN_140899680 body=130 status=ok
// SIG undefined FUN_140899680(void)

void FUN_140899680(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14012344a();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 140899702 FUN_140899702 body=369 status=ok
// SIG undefined FUN_140899702(void)

longlong FUN_140899702(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_140899874(*(undefined1 *)(param_2 + 0x12));
    lVar6 = plVar3[1];
    if (lVar6 == 0) {
      uVar4 = FUN_14065b502();
      lVar6 = FUN_14477b664(uVar4);
      plVar3[1] = lVar6;
    }
    lVar5 = plVar3[2];
    if (lVar5 != 0) {
LAB_140899817:
      lVar6 = FUN_14575395a();
      if (param_1 == 0) {
        return lVar5;
      }
      if (lVar5 != lVar6) {
        return lVar5;
      }
      goto LAB_140899748;
    }
    if ((*plVar3 != 0) && (lVar6 != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        plVar3[2] = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,plVar3);
        plVar3[2] = lVar5;
        if (lVar5 != 0) goto LAB_140899817;
      }
    }
  }
  lVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
LAB_140899748:
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x48);
    if (lVar7 == 0) {
      uVar4 = FUN_14065b502();
      lVar7 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x48) = lVar7;
    }
    lVar5 = *(longlong *)(lVar6 + 0x50);
    if (((lVar5 == 0) && (lVar5 = 0, lVar7 != 0)) && (*(longlong *)(lVar6 + 0x40) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x40));
      }
      *(longlong *)(lVar6 + 0x50) = lVar5;
    }
  }
  return lVar5;
}



// FUNCTION 140899874 FUN_140899874 body=147 status=ok
// SIG undefined FUN_140899874(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140899874(ushort param_1)

{
  undefined *puVar1;
  
  if ((DAT_14cb7f870 == 0) || (*(int *)(DAT_14cb7f870 + 0x368) <= (int)(uint)param_1)) {
    puVar1 = &DAT_14cb7f8e0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7f8f8) {
      FUN_144b3d300(&DAT_14cb7f8f8);
      if (DAT_14cb7f8f8 == -1) {
        _DAT_14cb7f8e0 = 0;
        uRam000000014cb7f8e8 = 0;
        _DAT_14cb7f8f0 = 0;
        _Init_thread_footer(&DAT_14cb7f8f8);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)((uint)param_1 * 0x18) + *(longlong *)(DAT_14cb7f870 + 0x360))
    ;
  }
  return puVar1;
}



// FUNCTION 140899908 FUN_140899908 body=363 status=ok
// SIG undefined FUN_140899908(void)

void FUN_140899908(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar2 < 2) {
    uVar7 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140899996;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_140899996:
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar5 >> 3)) {
      uVar7 = uVar5 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar7;
  FUN_140899a74(param_1,param_2,uVar7,8);
  return;
}



// FUNCTION 140899a74 FUN_140899a74 body=132 status=ok
// SIG undefined FUN_140899a74(void)

void FUN_140899a74(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 140899af8 FUN_140899af8 body=40 status=ok
// SIG undefined FUN_140899af8(void)

undefined8 FUN_140899af8(undefined8 param_1,int param_2)

{
  FUN_140899b20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140899b20 FUN_140899b20 body=147 status=ok
// SIG undefined FUN_140899b20(void)

void FUN_140899b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a39a9d0;
  param_1[5] = &PTR_FUN_14a39b5c0;
  param_1[6] = &PTR_FUN_14a39b600;
  param_1[0x55] = &PTR_FUN_14a39b650;
  param_1[0x56] = &PTR_FUN_14a39b6d0;
  param_1[0x57] = &PTR_FUN_14a39b6e0;
  param_1[0xe3] = &PTR_FUN_14a39b710;
  if (param_1[0x197] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x195] != 0) {
    FUN_1400020a8();
  }
  FUN_140899bb4(param_1);
  return;
}



// FUNCTION 140899bb4 FUN_140899bb4 body=265 status=ok
// SIG undefined FUN_140899bb4(void)

void FUN_140899bb4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14a632b50;
  param_1[5] = &PTR_FUN_14a633740;
  param_1[6] = &PTR_FUN_14a633780;
  param_1[0x55] = &PTR_FUN_14a6337d0;
  param_1[0x56] = &PTR_FUN_14a633850;
  param_1[0x57] = &PTR_FUN_14a633860;
  param_1[0xe3] = &PTR_FUN_14a633890;
  param_1[0xfd] = 0;
  puVar4 = param_1 + 0x18e;
  if ((undefined8 *)param_1[0x192] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x192];
  }
  FUN_144717c65(puVar4,*(undefined4 *)(param_1 + 0x193));
  if (param_1[0x192] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x179] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x168] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x163];
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
  FUN_14006df30(param_1);
  return;
}



// FUNCTION 140899ccc FUN_140899ccc body=36 status=ok
// SIG undefined FUN_140899ccc(void)

undefined8 FUN_140899ccc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140899cf0 FUN_140899cf0 body=1661 status=ok
// SIG undefined FUN_140899cf0(void)

longlong * FUN_140899cf0(longlong *param_1,undefined2 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 unaff_RBX;
  longlong lVar11;
  undefined1 auStack_78 [46];
  undefined1 local_4a;
  byte local_49;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc78);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14aa881e4);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc08);
  lVar11 = param_1[0xd];
  if ((lVar11 == 0) || (*(longlong *)(lVar11 + 0x10) == 0)) {
    uVar10 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(**(longlong **)(lVar11 + 8) + 0xa8))(*(longlong **)(lVar11 + 8),&local_48);
    uVar10 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (0 < (int)uStack_40) {
      lVar11 = 0;
      do {
        uVar9 = FUN_14741398a(*(undefined8 *)(local_48 + lVar11 * 8));
        cVar7 = FUN_1436b9814(uVar9);
        if ((cVar7 != '\0') && (*(char *)(param_2 + 6) != '\0')) {
LAB_14089a2d5:
          uVar10 = 0;
          break;
        }
        cVar7 = FUN_1448eb86f(uVar9);
        if (cVar7 != '\0') goto LAB_14089a2d5;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uStack_40);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140562eea(&local_4a,param_1,uVar10,&DAT_14c896044);
  puVar3 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 2) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar5 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar5 + 1) {
    local_48 = CONCAT44(local_48._4_4_,(uint)*(byte *)(param_2 + 6));
    (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
    if (1 < (uint)local_48) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 6) = (uint)local_48 != 0;
  }
  else {
    *(bool *)(param_2 + 6) = *piVar5 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  iVar8 = FUN_1448332aa(param_1,&DAT_14aa881e4);
  puVar1 = (undefined1 *)((longlong)param_2 + 0xf);
  if (iVar8 < 2) {
    *puVar1 = 3;
  }
  else {
    puVar6 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar1,1);
    }
    else {
      *puVar1 = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
  }
  piVar5 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar5 + 1) {
    local_48 = CONCAT44(local_48._4_4_,(uint)*(byte *)((longlong)param_2 + 0xd));
    (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
    if (1 < (uint)local_48) {
      FUN_14572541c(param_1);
    }
    *(bool *)((longlong)param_2 + 0xd) = (uint)local_48 != 0;
  }
  else {
    *(bool *)((longlong)param_2 + 0xd) = *piVar5 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  iVar8 = FUN_1448332aa(param_1,&DAT_149e3cc78);
  if (iVar8 < 0x36) {
    *(undefined1 *)(param_2 + 7) = 1;
  }
  else {
    piVar5 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar5 + 1) {
      local_48 = CONCAT44(local_48._4_4_,(uint)*(byte *)(param_2 + 7));
      (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
      if (1 < (uint)local_48) {
        FUN_14572541c(param_1);
      }
      *(bool *)(param_2 + 7) = (uint)local_48 != 0;
    }
    else {
      *(bool *)(param_2 + 7) = *piVar5 != 0;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 8,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  iVar8 = FUN_1448332aa(param_1,&DAT_149e3cc08);
  puVar2 = (undefined8 *)(param_2 + 0x14);
  if (iVar8 < 0xf) {
    FUN_147d1db84(puVar2);
    FUN_1400d018c(param_1,*puVar2);
  }
  else {
    FUN_14089a8aa(param_1,puVar2);
  }
  FUN_14041268c(param_1,param_2 + 0x1c);
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x24,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x26,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x26) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x28,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    param_2[0x28] = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  FUN_1402ac1b3(param_1,param_2 + 0x2a);
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x32,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x32) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_49 & 1) == 0) {
    FUN_14089a36e(param_1,param_2 + 0x54);
    FUN_14089a4a8(param_1,param_2 + 0x68);
  }
  piVar5 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar5 + 1) {
    local_48 = CONCAT44(local_48._4_4_,(uint)*(byte *)(param_2 + 0x78));
    (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
    if (1 < (uint)local_48) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x78) = (uint)local_48 != 0;
  }
  else {
    *(bool *)(param_2 + 0x78) = *piVar5 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089a36e FUN_14089a36e body=313 status=ok
// SIG undefined FUN_14089a36e(void)

longlong * FUN_14089a36e(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14024fde8(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar4 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14089a5e2(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar4 = (uint)param_2[1];
    }
    uVar3 = *param_2;
    uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    (**(code **)(*param_1 + 0x170))(param_1,uVar5,(longlong)(int)uVar4 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14089a4a8 FUN_14089a4a8 body=313 status=ok
// SIG undefined FUN_14089a4a8(void)

longlong * FUN_14089a4a8(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140552fc6(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar4 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14089a746(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar4 = (uint)param_2[1];
    }
    uVar3 = *param_2;
    uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    (**(code **)(*param_1 + 0x170))(param_1,uVar5,(longlong)(int)uVar4 << 3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14089a5e2 FUN_14089a5e2 body=355 status=ok
// SIG undefined FUN_14089a5e2(void)

void FUN_14089a5e2(ulonglong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar8 = 0;
    goto LAB_14089a65e;
  }
  uVar8 = (ulonglong)param_2;
  uVar3 = (longlong)(int)param_2 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar4 = uVar5 & 0xfffffffffffffff0;
        if (uVar4 < 0x7ff1) goto LAB_14089a6df;
        goto LAB_14089a6ae;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_14089a650:
  do {
    iVar6 = (int)uVar8;
    uVar8 = 0x7fffffff;
    if (iVar6 <= (int)(uVar3 >> 2)) {
      uVar8 = uVar3 >> 2 & 0xffffffff;
    }
LAB_14089a65e:
    iVar7 = (int)uVar8;
    iVar6 = param_3;
    if (iVar7 <= param_3) goto LAB_14089a693;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      iVar6 = iVar7;
      if (iVar7 < 1 && uVar3 == 0) goto LAB_14089a693;
      if (-1 < iVar7) {
        uVar8 = FUN_14001fdce(uVar3,uVar8 << 2,4);
        *param_1 = uVar8;
LAB_14089a693:
        *(int *)((longlong)param_1 + 0xc) = iVar6;
        return;
      }
    }
    else {
      param_3 = 0;
      iVar6 = param_3;
      if (iVar7 == 0) goto LAB_14089a693;
    }
    uVar5 = 0;
    uVar4 = uVar8;
    FUN_1467ac767();
LAB_14089a6df:
    bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
    uVar5 = 0x32;
    if (0x32 < bVar2) {
      uVar5 = (ulonglong)bVar2;
    }
    uVar9 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14089a650;
      lVar1 = uVar5 + 1 + uVar9;
      uVar9 = uVar9 - 1;
    } while (lVar1 != 0x33);
LAB_14089a6ae:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar4 + uVar3) - 1;
  } while( true );
}



// FUNCTION 14089a746 FUN_14089a746 body=355 status=ok
// SIG undefined FUN_14089a746(void)

void FUN_14089a746(ulonglong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar8 = 0;
    goto LAB_14089a7c2;
  }
  uVar8 = (ulonglong)param_2;
  uVar3 = (longlong)(int)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar4 = uVar5 & 0xfffffffffffffff0;
        if (uVar4 < 0x7ff1) goto LAB_14089a843;
        goto LAB_14089a812;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_14089a7b4:
  do {
    iVar6 = (int)uVar8;
    uVar8 = 0x7fffffff;
    if (iVar6 <= (int)(uVar3 >> 3)) {
      uVar8 = uVar3 >> 3 & 0xffffffff;
    }
LAB_14089a7c2:
    iVar7 = (int)uVar8;
    iVar6 = param_3;
    if (iVar7 <= param_3) goto LAB_14089a7f7;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      iVar6 = iVar7;
      if (iVar7 < 1 && uVar3 == 0) goto LAB_14089a7f7;
      if (-1 < iVar7) {
        uVar8 = FUN_14001fdce(uVar3,uVar8 << 3,4);
        *param_1 = uVar8;
LAB_14089a7f7:
        *(int *)((longlong)param_1 + 0xc) = iVar6;
        return;
      }
    }
    else {
      param_3 = 0;
      iVar6 = param_3;
      if (iVar7 == 0) goto LAB_14089a7f7;
    }
    uVar5 = 0;
    uVar4 = uVar8;
    FUN_1467ac767();
LAB_14089a843:
    bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
    uVar5 = 0x32;
    if (0x32 < bVar2) {
      uVar5 = (ulonglong)bVar2;
    }
    uVar9 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14089a7b4;
      lVar1 = uVar5 + 1 + uVar9;
      uVar9 = uVar9 - 1;
    } while (lVar1 != 0x33);
LAB_14089a812:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar4 + uVar3) - 1;
  } while( true );
}



// FUNCTION 14089a8aa FUN_14089a8aa body=442 status=ok
// SIG undefined FUN_14089a8aa(void)

longlong * FUN_14089a8aa(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14074fa8b(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_14089aaac(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_1400d018c(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_14089aa66(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_147d204b2(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_1400d018c(param_1,lVar5 + (longlong)iVar3 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14089aa66 FUN_14089aa66 body=69 status=ok
// SIG undefined FUN_14089aa66(void)

void FUN_14089aa66(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14074fa8b(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14089aaac(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14089aaac FUN_14089aaac body=226 status=ok
// SIG undefined FUN_14089aaac(void)

void FUN_14089aaac(longlong param_1,int param_2)

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



// FUNCTION 14089ab8e FUN_14089ab8e body=390 status=ok
// SIG undefined FUN_14089ab8e(void)

void FUN_14089ab8e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_68 [38];
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[0x30];
  lVar7 = param_1[0x31];
  uVar3 = 0;
  if ((longlong)(int)lVar7 != 0) {
    lVar6 = 0;
    do {
      fVar8 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      fVar9 = *(float *)(lVar5 + 8 + lVar6);
      if (fVar8 <= fVar9) {
        fVar9 = fVar8;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      *(float *)(lVar5 + 8 + lVar6) = fVar9;
      lVar6 = lVar6 + 0xc;
    } while ((longlong)(int)lVar7 * 0xc != lVar6);
    uVar3 = (undefined4)param_1[0x31];
    lVar5 = param_1[0x30];
  }
  FUN_14089ad16(lVar5,uVar3,param_3,&local_41);
  iVar4 = (int)param_1[0x31];
  if (iVar4 < 1) {
    *(undefined4 *)(param_1 + 0x33) = 0;
    if (*(int *)((longlong)param_1 + 0x19c) != 0) {
      FUN_1402191ca(param_1 + 0x32,0);
    }
  }
  else {
    plVar1 = param_1 + 0x32;
    iVar2 = *(int *)((longlong)param_1 + 0x19c);
    *(undefined4 *)(param_1 + 0x33) = 0;
    if (iVar2 < 0) {
      FUN_1402191ca(plVar1,0);
      iVar4 = (int)param_1[0x31];
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      iVar2 = *(int *)((longlong)param_1 + 0x19c);
    }
    if (iVar2 < iVar4) {
      FUN_1402191ca(plVar1);
      iVar4 = (int)param_1[0x31];
    }
    if (iVar4 != 0) {
      lVar5 = param_1[0x30];
      lVar7 = (longlong)iVar4 * 0xc;
      do {
        FUN_140721fbe(plVar1,lVar5);
        lVar5 = lVar5 + 0xc;
        lVar7 = lVar7 + -0xc;
      } while (lVar7 != 0);
    }
  }
  FUN_14089b021(param_1[0x11],(int)param_1[0x12],param_3,&local_42);
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14089ad16 FUN_14089ad16 body=778 status=ok
// SIG undefined FUN_14089ad16(void)

void FUN_14089ad16(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [190];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar10 = &local_358;
    do {
      puVar4 = (undefined8 *)*plVar10;
      puVar11 = (undefined8 *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar5 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 2);
      puVar14 = puVar11;
      puVar15 = puVar4;
      if (iVar13 != 0) {
LAB_14089ade3:
        uVar7 = iVar5 * -0x55555555 + 1;
        if (8 < (int)uVar7) {
          uVar8 = (ulonglong)(uVar7 >> 1);
          uVar1 = *(undefined4 *)((longlong)puVar4 + uVar8 * 0xc + 8);
          uVar2 = *(undefined8 *)((longlong)puVar4 + uVar8 * 0xc);
          *(undefined4 *)((longlong)puVar4 + uVar8 * 0xc + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined8 *)((longlong)puVar4 + uVar8 * 0xc) = *puVar4;
          *(undefined4 *)(puVar4 + 1) = uVar1;
          *puVar4 = uVar2;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0xc);
          puVar6 = puVar4;
          do {
            puVar3 = (undefined8 *)((longlong)puVar6 + 0xc);
            puVar12 = (undefined8 *)((longlong)puVar6 + 0xc);
            do {
              puVar6 = puVar12;
              puVar9 = puVar3;
              if (puVar11 < puVar6) break;
              puVar3 = (undefined8 *)((longlong)puVar9 + 0xc);
              puVar12 = (undefined8 *)((longlong)puVar6 + 0xc);
            } while (*(float *)(puVar6 + 1) < *(float *)(puVar4 + 1) ||
                     *(float *)(puVar6 + 1) == *(float *)(puVar4 + 1));
            puVar3 = puVar17 + -3;
            do {
              puVar12 = puVar17;
              puVar16 = puVar3;
              puVar17 = (undefined8 *)((longlong)puVar12 + -0xc);
              if (puVar17 <= puVar4) break;
              puVar3 = (undefined8 *)((longlong)puVar16 + -0xc);
            } while (*(float *)(puVar4 + 1) < *(float *)((longlong)puVar12 + -4) ||
                     *(float *)(puVar4 + 1) == *(float *)((longlong)puVar12 + -4));
            if (puVar17 < puVar6) goto LAB_14089af5d;
            uVar1 = *(undefined4 *)(puVar6 + 1);
            uVar2 = *puVar6;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)puVar12 + -4);
            *puVar6 = *puVar17;
            *(undefined4 *)((longlong)puVar12 + -4) = uVar1;
            *puVar17 = uVar2;
          } while( true );
        }
        for (; puVar15 = puVar4, puVar14 = puVar4, puVar4 < puVar11;
            puVar11 = (undefined8 *)((longlong)puVar11 + -0xc)) {
          while (puVar17 = puVar15, puVar14 = (undefined8 *)((longlong)puVar14 + 0xc),
                puVar14 <= puVar11) {
            puVar15 = puVar14;
            if (*(float *)(puVar14 + 1) < *(float *)(puVar17 + 1) ||
                *(float *)(puVar14 + 1) == *(float *)(puVar17 + 1)) {
              puVar15 = puVar17;
            }
          }
          local_48 = *(undefined4 *)(puVar17 + 1);
          local_50 = *puVar17;
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar11 + 1);
          *puVar17 = *puVar11;
          *(undefined4 *)(puVar11 + 1) = local_48;
          *puVar11 = local_50;
        }
        goto LAB_14089ae69;
      }
LAB_14089ae7e:
      FUN_1479356e1(puVar4);
LAB_14089ae69:
      plVar10 = plVar10 + -3;
    } while (&local_358 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14089af5d:
  local_48 = *(undefined4 *)(puVar4 + 1);
  local_50 = *puVar4;
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((longlong)puVar12 + -4);
  *puVar4 = *puVar17;
  *(undefined4 *)((longlong)puVar12 + -4) = local_48;
  *puVar17 = local_50;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -3;
  if ((longlong)puVar16 - (longlong)puVar15 < (longlong)puVar14 - (longlong)puVar9) {
    if (puVar6 < puVar11) {
      *plVar10 = (longlong)puVar6;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar9 = puVar4;
    if (puVar17 <= (undefined8 *)((longlong)puVar4 + 0xcU)) goto LAB_14089ae69;
  }
  else {
    if ((undefined8 *)((longlong)puVar4 + 0xcU) < puVar17) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar6;
    puVar12 = puVar11;
    puVar16 = puVar11;
    if (puVar11 <= puVar6) goto LAB_14089ae69;
  }
  iVar5 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar9) >> 2);
  puVar11 = puVar12;
  puVar14 = puVar16;
  puVar15 = puVar9;
  if (iVar13 == 0) goto LAB_14089ae7e;
  goto LAB_14089ade3;
}



// FUNCTION 14089b021 FUN_14089b021 body=1505 status=ok
// SIG undefined FUN_14089b021(void)

void FUN_14089b021(longlong param_1,uint param_2)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  void *_Src;
  uint uVar6;
  void *_Src_00;
  void *_Src_01;
  int iVar7;
  void *pvVar8;
  longlong *plVar9;
  void *pvVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_468 [44];
  int local_43c;
  void *local_438;
  void *local_430;
  longlong local_428;
  longlong local_420;
  undefined4 local_418 [188];
  undefined1 local_128 [184];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (1 < (int)param_2) {
    memset(local_418,0,0x2f0);
    local_420 = (ulonglong)param_2 * 0xb8 + param_1 + -0xb8;
    local_428 = param_1;
    fVar11 = logf((float)(int)param_2);
    local_418[0] = (int)(longlong)(fVar11 + fVar11);
    plVar9 = &local_428;
    do {
      _Src_01 = (void *)*plVar9;
      pvVar5 = (void *)plVar9[1];
      iVar7 = (int)plVar9[2];
      iVar4 = (int)((ulonglong)((longlong)pvVar5 - (longlong)_Src_01) >> 3);
      _Src_00 = pvVar5;
      pvVar8 = _Src_01;
      pvVar10 = _Src_01;
      if (iVar7 != 0) {
LAB_14089b12e:
        uVar6 = iVar4 * -0x1642c859 + 1;
        if (8 < (int)uVar6) {
          pvVar10 = (void *)((ulonglong)(uVar6 >> 1) * 0xb8 + (longlong)_Src_01);
          local_43c = iVar7;
          local_438 = pvVar8;
          local_430 = pvVar5;
          memcpy(local_128,pvVar10,0xb8);
          memcpy(pvVar10,_Src_01,0xb8);
          memcpy(_Src_01,local_128,0xb8);
          _Src = (void *)((longlong)_Src_00 + 0xb8);
          pvVar10 = _Src_01;
          do {
            pvVar5 = (void *)((longlong)pvVar10 + 0xb8);
            pvVar3 = (void *)((longlong)pvVar10 + 0xb8);
            do {
              pvVar10 = pvVar3;
              pvVar8 = pvVar5;
              if (_Src_00 < pvVar10) break;
              if (*(char *)((longlong)_Src_01 + 0x19) == '\x02') {
                fVar11 = *(float *)((longlong)_Src_01 + 0x24) * *(float *)((longlong)_Src_01 + 0x20)
                         + *(float *)((longlong)_Src_01 + 0x1c);
              }
              else if (*(char *)((longlong)_Src_01 + 0x19) == '\x01') {
                fVar11 = *(float *)((longlong)_Src_01 + 0x1c) + *(float *)((longlong)_Src_01 + 0x24)
                ;
              }
              else {
                fVar11 = *(float *)((longlong)_Src_01 + 0x24);
              }
              if (*(char *)((longlong)pvVar10 + 0x19) == '\x02') {
                fVar12 = *(float *)((longlong)pvVar10 + 0x24) * *(float *)((longlong)pvVar10 + 0x20)
                         + *(float *)((longlong)pvVar10 + 0x1c);
              }
              else if (*(char *)((longlong)pvVar10 + 0x19) == '\x01') {
                fVar12 = *(float *)((longlong)pvVar10 + 0x1c) + *(float *)((longlong)pvVar10 + 0x24)
                ;
              }
              else {
                fVar12 = *(float *)((longlong)pvVar10 + 0x24);
              }
              fVar11 = fVar11 + *(float *)((longlong)_Src_01 + 0x30);
              fVar12 = fVar12 + *(float *)((longlong)pvVar10 + 0x30);
              bVar1 = *(int *)((longlong)_Src_01 + 0xa4) < *(int *)((longlong)pvVar10 + 0xa4);
              if (1e-08 < ABS(fVar11 - fVar12)) {
                bVar1 = fVar11 < fVar12;
              }
              pvVar5 = (void *)((longlong)pvVar8 + 0xb8);
              pvVar3 = (void *)((longlong)pvVar10 + 0xb8);
            } while (!bVar1);
            pvVar3 = (void *)((longlong)_Src + -0x170);
            do {
              pvVar2 = _Src;
              pvVar5 = pvVar3;
              _Src = (void *)((longlong)pvVar2 + -0xb8);
              if (_Src <= _Src_01) break;
              if (*(char *)((longlong)pvVar2 + -0x9f) == '\x02') {
                fVar11 = *(float *)((longlong)pvVar2 + -0x94) * *(float *)((longlong)pvVar2 + -0x98)
                         + *(float *)((longlong)pvVar2 + -0x9c);
              }
              else if (*(char *)((longlong)pvVar2 + -0x9f) == '\x01') {
                fVar11 = *(float *)((longlong)pvVar2 + -0x9c) + *(float *)((longlong)pvVar2 + -0x94)
                ;
              }
              else {
                fVar11 = *(float *)((longlong)pvVar2 + -0x94);
              }
              if (*(char *)((longlong)_Src_01 + 0x19) == '\x02') {
                fVar12 = *(float *)((longlong)_Src_01 + 0x24) * *(float *)((longlong)_Src_01 + 0x20)
                         + *(float *)((longlong)_Src_01 + 0x1c);
              }
              else if (*(char *)((longlong)_Src_01 + 0x19) == '\x01') {
                fVar12 = *(float *)((longlong)_Src_01 + 0x1c) + *(float *)((longlong)_Src_01 + 0x24)
                ;
              }
              else {
                fVar12 = *(float *)((longlong)_Src_01 + 0x24);
              }
              fVar11 = fVar11 + *(float *)((longlong)pvVar2 + -0x88);
              fVar12 = fVar12 + *(float *)((longlong)_Src_01 + 0x30);
              bVar1 = *(int *)((longlong)pvVar2 + -0x14) < *(int *)((longlong)_Src_01 + 0xa4);
              if (1e-08 < ABS(fVar11 - fVar12)) {
                bVar1 = fVar11 < fVar12;
              }
              pvVar3 = (void *)((longlong)pvVar5 + -0xb8);
            } while (!bVar1);
            if (_Src < pvVar10) goto LAB_14089b3f3;
            memcpy(local_128,pvVar10,0xb8);
            memcpy(pvVar10,_Src,0xb8);
            memcpy(_Src,local_128,0xb8);
          } while( true );
        }
        for (; pvVar5 = _Src_01, pvVar10 = _Src_01, _Src_01 < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0xb8)) {
          while (pvVar8 = pvVar5, pvVar5 = (void *)((longlong)pvVar10 + 0xb8), pvVar5 <= _Src_00) {
            if (*(char *)((longlong)pvVar8 + 0x19) == '\x02') {
              fVar11 = *(float *)((longlong)pvVar8 + 0x24) * *(float *)((longlong)pvVar8 + 0x20) +
                       *(float *)((longlong)pvVar8 + 0x1c);
            }
            else if (*(char *)((longlong)pvVar8 + 0x19) == '\x01') {
              fVar11 = *(float *)((longlong)pvVar8 + 0x1c) + *(float *)((longlong)pvVar8 + 0x24);
            }
            else {
              fVar11 = *(float *)((longlong)pvVar8 + 0x24);
            }
            if (*(char *)((longlong)pvVar10 + 0xd1) == '\x02') {
              fVar12 = *(float *)((longlong)pvVar10 + 0xdc) * *(float *)((longlong)pvVar10 + 0xd8) +
                       *(float *)((longlong)pvVar10 + 0xd4);
            }
            else if (*(char *)((longlong)pvVar10 + 0xd1) == '\x01') {
              fVar12 = *(float *)((longlong)pvVar10 + 0xd4) + *(float *)((longlong)pvVar10 + 0xdc);
            }
            else {
              fVar12 = *(float *)((longlong)pvVar10 + 0xdc);
            }
            fVar11 = fVar11 + *(float *)((longlong)pvVar8 + 0x30);
            fVar12 = fVar12 + *(float *)((longlong)pvVar10 + 0xe8);
            bVar1 = fVar11 < fVar12;
            if (ABS(fVar11 - fVar12) <= 1e-08) {
              bVar1 = *(int *)((longlong)pvVar8 + 0xa4) < *(int *)((longlong)pvVar10 + 0x15c);
            }
            pvVar10 = pvVar5;
            if (!bVar1) {
              pvVar5 = pvVar8;
            }
          }
          memcpy(local_128,pvVar8,0xb8);
          memcpy(pvVar8,_Src_00,0xb8);
          memcpy(_Src_00,local_128,0xb8);
        }
        goto LAB_14089b384;
      }
LAB_14089b4e7:
      FUN_147935c68(pvVar10);
LAB_14089b384:
      plVar9 = plVar9 + -3;
    } while (&local_428 <= plVar9);
  }
  if ((local_70 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14089b3f3:
  memcpy(local_128,_Src_01,0xb8);
  memcpy(_Src_01,_Src,0xb8);
  memcpy(_Src,local_128,0xb8);
  iVar7 = local_43c + -1;
  if ((longlong)pvVar5 - (longlong)local_438 < (longlong)local_430 - (longlong)pvVar8) {
    if (pvVar10 < _Src_00) {
      *plVar9 = (longlong)pvVar10;
      plVar9[1] = (longlong)_Src_00;
      *(int *)(plVar9 + 2) = iVar7;
      plVar9 = plVar9 + 3;
    }
    _Src_00 = (void *)((longlong)pvVar2 + -0x170);
    pvVar10 = _Src_01;
    pvVar8 = _Src_01;
    if (_Src <= (void *)((longlong)_Src_01 + 0xb8U)) goto LAB_14089b384;
  }
  else {
    if ((void *)((longlong)_Src_01 + 0xb8U) < _Src) {
      *plVar9 = (longlong)_Src_01;
      plVar9[1] = (longlong)pvVar2 + -0x170;
      *(int *)(plVar9 + 2) = iVar7;
      plVar9 = plVar9 + 3;
    }
    pvVar5 = _Src_00;
    if (_Src_00 <= pvVar10) goto LAB_14089b384;
  }
  iVar4 = (int)((ulonglong)((longlong)pvVar5 - (longlong)pvVar8) >> 3);
  _Src_01 = pvVar10;
  if (iVar7 == 0) goto LAB_14089b4e7;
  goto LAB_14089b12e;
}



// FUNCTION 14089b60a FUN_14089b60a body=182 status=ok
// SIG undefined FUN_14089b60a(void)

longlong * FUN_14089b60a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_144837e54(param_2,0);
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x460))(param_1);
    *(longlong **)(param_2 + 0x30) = plVar1;
    if (param_2 != 0) {
      if (plVar1 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      FUN_1407d81de(plVar1 + 1,param_2);
      plVar1 = *(longlong **)(param_2 + 0x30);
    }
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  lVar3 = FUN_14013f0a2();
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44)) {
      uVar4 = FUN_14013f0a2();
      FUN_1446e7478(param_2 + 0x48,plVar1,uVar4,1);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
      return plVar1;
    }
    return plVar1;
  }
  return (longlong *)0x0;
}



// FUNCTION 14089b6c6 FUN_14089b6c6 body=61 status=ok
// SIG undefined FUN_14089b6c6(void)

void FUN_14089b6c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb263b8);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14acb87a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 14089b704 FUN_14089b704 body=61 status=ok
// SIG undefined FUN_14089b704(void)

void FUN_14089b704(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb26418);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14acb87a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 14089b742 FUN_14089b742 body=61 status=ok
// SIG undefined FUN_14089b742(void)

void FUN_14089b742(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb264f0);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14acb87a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 14089b780 FUN_14089b780 body=4664 status=ok
// SIG undefined FUN_14089b780(void)

void FUN_14089b780(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  undefined2 local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined8 local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 *local_2a8;
  char local_2a0;
  longlong local_298 [64];
  undefined8 local_98;
  undefined4 local_90;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_14082167c();
  lVar10 = param_2 + 0x2c0;
  local_2e8 = FUN_1406b2efc(lVar10);
  lVar14 = local_2e8 + 0xb0;
  plVar11 = DAT_14cbcdaa4;
  local_2e0 = lVar10;
  if ((DAT_14cbcdaa4 == DAT_14c948034) && (plVar11 = DAT_14c948034, DAT_14cbcdaa0 != DAT_14c948030))
  {
    FUN_14011791e(&local_2b8,DAT_14cbcdaa0,(ulonglong)DAT_14cbcdaa4 >> 0x20);
    plVar11 = (longlong *)CONCAT44(local_2b8._4_4_,(uint)local_2b8);
    DAT_14cbcdaa4 = plVar11;
  }
  local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
  local_2b8._4_4_ = 0;
  uStack_2b0._0_4_ = 0;
  uStack_2b0._4_4_ = 0;
  FUN_144976b9c(&local_2b8,plVar11);
  puVar1 = (undefined8 *)(param_1 + 0x78);
  local_90 = *(undefined4 *)(param_1 + 0x80);
  local_98 = *(undefined8 *)(param_1 + 0x78);
  local_2f0 = (ushort)local_2f0._1_1_ << 8;
  local_2f8 = local_2f8 & 0xffffffffffffff00;
  FUN_14064171a(lVar14,&local_98,&DAT_14cbcd498,&local_2b8);
  FUN_14089ceb8(&local_98,param_2,&DAT_14c948618);
  bVar5 = *(byte *)(param_1 + 8);
  FUN_14089cb6a(param_1,&local_2b8,0,param_2);
  local_2f8 = param_1 + 0x10;
  local_2f0 = (ushort)bVar5 * 2;
  lVar10 = FUN_1408236ae(param_1,param_2,&local_2b8,puVar1);
  local_2b8 = local_298;
  local_2a0 = '\0';
  local_2a8 = &local_98;
  uStack_2b0 = local_2b8;
  FUN_14014e8d0(&local_98,&local_2b8);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 4)) {
    FUN_145753a78(&local_2b8,4);
  }
  *(undefined4 *)uStack_2b0 = 0x203d3d20;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 4);
  FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,0);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
    FUN_145753a78(&local_2b8,1);
  }
  *(undefined1 *)uStack_2b0 = 0;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
  FUN_140822110(&local_2c8,&local_2b8,0);
  iVar6 = *(int *)(lVar10 + 0x38);
  *(uint *)(lVar10 + 0x38) = iVar6 + 1U;
  if (*(uint *)(lVar10 + 0x3c) < iVar6 + 1U) {
    FUN_1410f5714((longlong *)(lVar10 + 0x30),iVar6);
  }
  lVar10 = *(longlong *)(lVar10 + 0x30);
  lVar14 = (longlong)iVar6 * 0x10;
  *(undefined8 *)(lVar10 + lVar14) = 0;
  *(ulonglong *)(lVar10 + lVar14) = CONCAT44(local_2c8._4_4_,(uint)local_2c8);
  local_2c8._0_4_ = 0;
  local_2c8._4_4_ = 0;
  *(int *)(lVar10 + 8 + lVar14) = iStack_2c0;
  *(undefined4 *)(lVar10 + 0xc + lVar14) = uStack_2bc;
  iStack_2c0 = 0;
  uStack_2bc = 0;
  FUN_1447cd778(0,0);
  if (CONCAT44(local_2c8._4_4_,(uint)local_2c8) != 0) {
    FUN_1400020a8();
  }
  piVar4 = (int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa0) != 0) {
    bVar5 = *(byte *)(param_1 + 8);
    FUN_14089cb6a(param_1,&local_2c8,1,param_2);
    local_2f8 = param_1 + 0x10;
    local_2f0 = (ushort)bVar5 * 2;
    lVar10 = FUN_1408236ae(param_1,param_2,&local_2c8,piVar4);
    uStack_2b0 = local_2b8;
    FUN_14014e8d0(&local_98,&local_2b8);
    if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 4)) {
      FUN_145753a78(&local_2b8,4);
    }
    *(undefined4 *)uStack_2b0 = 0x203d3d20;
    uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 4);
    FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,2);
    if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
      FUN_145753a78(&local_2b8,1);
    }
    *(undefined1 *)uStack_2b0 = 0;
    uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
    FUN_140822110(&local_2c8,&local_2b8,0);
    iVar6 = *(int *)(lVar10 + 0x38);
    *(uint *)(lVar10 + 0x38) = iVar6 + 1U;
    if (*(uint *)(lVar10 + 0x3c) < iVar6 + 1U) {
      FUN_1410f5714((longlong *)(lVar10 + 0x30),iVar6);
    }
    lVar10 = *(longlong *)(lVar10 + 0x30);
    lVar14 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar10 + lVar14) = 0;
    *(ulonglong *)(lVar10 + lVar14) = CONCAT44(local_2c8._4_4_,(uint)local_2c8);
    local_2c8._0_4_ = 0;
    local_2c8._4_4_ = 0;
    *(int *)(lVar10 + 8 + lVar14) = iStack_2c0;
    *(undefined4 *)(lVar10 + 0xc + lVar14) = uStack_2bc;
    iStack_2c0 = 0;
    uStack_2bc = 0;
    FUN_1447cd778(0,0);
    if (CONCAT44(local_2c8._4_4_,(uint)local_2c8) != 0) {
      FUN_1400020a8();
    }
  }
  if (local_2a0 == '\x01') {
    FUN_1400020a8(local_2b8);
  }
  plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b41e000;
  plVar11[2] = (longlong)&PTR_FUN_14b35b440;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = 0;
  plVar11[6] = (longlong)&PTR_FUN_14b00be10;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  local_2a0 = '\0';
  local_2b8 = local_298;
  local_2a8 = &local_98;
  uStack_2b0 = local_2b8;
  FUN_1406421aa(puVar1,&local_2b8,1);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
    FUN_145753a78(&local_2b8,1);
  }
  *(undefined1 *)uStack_2b0 = 0x2e;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
  FUN_1406421aa(&DAT_14cbcd498,&local_2b8,1);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 4)) {
    FUN_145753a78(&local_2b8,4);
  }
  *(undefined4 *)uStack_2b0 = 0x203d3d20;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 4);
  FUN_1406421aa(&DAT_14cbcd4c8,&local_2b8,1);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
    FUN_145753a78(&local_2b8,1);
  }
  *(undefined1 *)uStack_2b0 = 0;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
  FUN_140822110(&local_2c8,&local_2b8,0);
  FUN_14089cace(plVar11 + 2,&local_2c8);
  FUN_1447cd778(CONCAT44(local_2c8._4_4_,(uint)local_2c8),iStack_2c0);
  if (CONCAT44(local_2c8._4_4_,(uint)local_2c8) != 0) {
    FUN_1400020a8();
  }
  local_2c8._0_4_ = CONCAT31(local_2c8._1_3_,2);
  uStack_2bc = 1;
  local_2c8._4_4_ = 0;
  iStack_2c0 = 0;
  local_2f8 = CONCAT71(local_2f8._1_7_,5);
  FUN_140641812(plVar11 + 6,&local_98,&local_2c8,0);
  lVar10 = local_2e0;
  iStack_2c0 = (int)plVar11;
  uStack_2bc = (undefined4)((ulonglong)plVar11 >> 0x20);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_2c8 = plVar11 + 2;
  FUN_1408229d0(local_2e0,&local_2c8);
  plVar12 = (longlong *)CONCAT44(uStack_2bc,iStack_2c0);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_2a0 == '\x01') {
    FUN_1400020a8(local_2b8);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x88);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11,param_1,param_2,&DAT_14c948618);
  }
  if (*piVar4 == 0) {
    plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b41e000;
    plVar11[2] = (longlong)&PTR_FUN_14b35b440;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = (longlong)&PTR_FUN_14b00be10;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    local_2a0 = '\0';
    local_2b8 = local_298;
    local_2a8 = &local_98;
    uStack_2b0 = local_2b8;
    FUN_14014e8d0(&local_98,&local_2b8);
    if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 4)) {
      FUN_145753a78(&local_2b8,4);
    }
    *(undefined4 *)uStack_2b0 = 0x203d3d20;
    uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 4);
    FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,2);
    if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
      FUN_145753a78(&local_2b8,1);
    }
    *(undefined1 *)uStack_2b0 = 0;
    uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
    FUN_140822110(&local_2c8,&local_2b8,0);
    FUN_14089cace(plVar11 + 2,&local_2c8);
    FUN_1447cd778(local_2c8,iStack_2c0);
    if (local_2c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar12 = DAT_14cbcd4b4;
    if ((DAT_14cbcd4b4 == DAT_14c948034) &&
       (plVar12 = DAT_14c948034, DAT_14cbcd4b0 != DAT_14c948030)) {
      FUN_14011791e(&local_2c8,DAT_14cbcd4b0,(ulonglong)DAT_14cbcd4b4 >> 0x20);
      DAT_14cbcd4b4 = local_2c8;
      plVar12 = local_2c8;
    }
    local_2c8._0_4_ = (uint)local_2c8 & 0xffffff00;
    local_2c8._4_4_ = 0;
    iStack_2c0 = 0;
    uStack_2bc = 0;
    FUN_144976b9c(&local_2c8,plVar12);
    uStack_2d0 = *(undefined4 *)(param_1 + 0x80);
    local_2d8 = (undefined4)*puVar1;
    uStack_2d4 = (undefined4)((ulonglong)*puVar1 >> 0x20);
    local_2f0 = local_2f0 & 0xff00;
    local_2f8 = local_2f8 & 0xffffffffffffff00;
    FUN_14064171a(plVar11 + 6,&local_2d8,&DAT_14cbcd498,&local_2c8);
    iStack_2c0 = (int)plVar11;
    uStack_2bc = (undefined4)((ulonglong)plVar11 >> 0x20);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_2c8 = plVar11 + 2;
    FUN_1408229d0(lVar10,&local_2c8);
    lVar14 = local_2e8;
    plVar12 = (longlong *)CONCAT44(uStack_2bc,iStack_2c0);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar12 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar4 = (int *)((longlong)plVar12 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (local_2a0 == '\x01') {
      FUN_1400020a8(local_2b8);
    }
  }
  else {
    puVar13 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar13 = *(undefined4 **)(param_2 + 8);
    }
    local_2c8._0_4_ = 0;
    local_2c8._4_4_ = 0;
    iStack_2c0 = 0;
    uStack_2bc = 0;
    FUN_1400b2348(puVar13,&local_2c8,1);
    puVar15 = &DAT_149dfb77a;
    if (iStack_2c0 != 0) {
      puVar15 = (undefined2 *)CONCAT44(local_2c8._4_4_,(uint)local_2c8);
    }
    FUN_140002266(&local_2b8,L"__Bind_%s_ReturnTrigger",puVar15);
    uStack_2d4 = 0;
    uStack_2d0 = 0;
    plVar11 = (longlong *)&DAT_149dfb77a;
    if ((int)uStack_2b0 != 0) {
      plVar11 = local_2b8;
    }
    FUN_1405f0d29(&local_2d8,plVar11,0);
    puVar9 = (undefined1 *)uStack_2b0;
    if (local_2b8 != (longlong *)0x0) {
      FUN_1400020a8();
      puVar9 = (undefined1 *)uStack_2b0;
    }
    uStack_2b0._4_4_ = (undefined4)((ulonglong)puVar9 >> 0x20);
    if (CONCAT44(local_2c8._4_4_,(uint)local_2c8) != 0) {
      uStack_2b0 = (longlong *)puVar9;
      FUN_1400020a8();
    }
    uStack_2b0._0_4_ = *(undefined4 *)(param_1 + 0xa8);
    local_2b8._0_4_ = (uint)*(undefined8 *)piVar4;
    local_2b8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)piVar4 >> 0x20);
    lVar14 = FUN_140d89a16(param_1,param_2,&local_2d8);
    *(undefined1 *)(lVar14 + 0x30) = 1;
    plVar11 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b41bb30;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[7] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14afff040;
    *(undefined8 *)((longlong)plVar11 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar11 + 0x34) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x3c) = 0;
    *(undefined4 *)(plVar11 + 4) = 1;
    FUN_140823334(plVar11 + 3,0);
    puVar7 = (undefined8 *)plVar11[3];
    *puVar7 = DAT_14cb86278;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    plVar12 = DAT_14cbcd4b4;
    if ((DAT_14cbcd4b4 == DAT_14c948034) &&
       (plVar12 = DAT_14c948034, DAT_14cbcd4b0 != DAT_14c948030)) {
      FUN_14011791e(&local_2b8,DAT_14cbcd4b0,(ulonglong)DAT_14cbcd4b4 >> 0x20);
      plVar12 = (longlong *)CONCAT44(local_2b8._4_4_,(uint)local_2b8);
      DAT_14cbcd4b4 = plVar12;
    }
    local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
    local_2b8._4_4_ = 0;
    uStack_2b0._0_4_ = 0;
    uStack_2b0._4_4_ = 0;
    FUN_144976b9c(&local_2b8,plVar12);
    iStack_2c0 = *(undefined4 *)(param_1 + 0x80);
    local_2c8._0_4_ = (uint)*puVar1;
    local_2c8._4_4_ = (undefined4)((ulonglong)*puVar1 >> 0x20);
    local_2f8 = local_2f8 & 0xffffffffffffff00;
    FUN_14089cdd4(puVar7,&local_2c8,&DAT_14cbcd498,&local_2b8);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    iVar6 = *(int *)(lVar14 + 0x50);
    *(uint *)(lVar14 + 0x50) = iVar6 + 1U;
    if (*(uint *)(lVar14 + 0x54) < iVar6 + 1U) {
      FUN_140822376((longlong *)(lVar14 + 0x48),iVar6);
    }
    lVar14 = *(longlong *)(lVar14 + 0x48);
    *(longlong **)(lVar14 + (longlong)iVar6 * 0x10) = plVar11 + 2;
    *(longlong **)(lVar14 + 8 + (longlong)iVar6 * 0x10) = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar4 = (int *)((longlong)plVar11 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar12 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14b41e000;
    plVar12[2] = (longlong)&PTR_FUN_14b35b440;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = (longlong)&PTR_FUN_14b00be10;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    plVar12[0xc] = 0;
    local_2a0 = '\0';
    local_2b8 = local_298;
    local_2a8 = &local_98;
    uStack_2b0 = local_2b8;
    FUN_14014e8d0(&local_98,&local_2b8);
    if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 4)) {
      FUN_145753a78(&local_2b8,4);
    }
    *(undefined4 *)uStack_2b0 = 0x203d3d20;
    uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 4);
    FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,2);
    if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
      FUN_145753a78(&local_2b8,1);
    }
    *(undefined1 *)uStack_2b0 = 0;
    uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
    FUN_140822110(&local_2c8,&local_2b8,0);
    FUN_14089cace(plVar12 + 2,&local_2c8);
    FUN_1447cd778(CONCAT44(local_2c8._4_4_,(uint)local_2c8),iStack_2c0);
    if (CONCAT44(local_2c8._4_4_,(uint)local_2c8) != 0) {
      FUN_1400020a8();
    }
    FUN_140d22200(plVar12 + 6,&local_2d8);
    iStack_2c0 = (int)plVar12;
    uStack_2bc = (undefined4)((ulonglong)plVar12 >> 0x20);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_2c8 = plVar12 + 2;
    FUN_1408229d0(lVar10,&local_2c8);
    lVar14 = local_2e8;
    plVar8 = (longlong *)CONCAT44(uStack_2bc,iStack_2c0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar4 = (int *)((longlong)plVar8 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    FUN_140d89482(lVar14 + 0x170,&local_2d8);
    FUN_140d89482(lVar14 + 0x58,&local_2d8);
    if (local_2a0 == '\x01') {
      FUN_1400020a8(local_2b8);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar12 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar4 = (int *)((longlong)plVar12 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
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
      piVar4 = (int *)((longlong)plVar11 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  local_2a0 = '\0';
  local_2b8 = local_298;
  local_2a8 = &local_98;
  uStack_2b0 = local_2b8;
  FUN_1406421aa(puVar1,&local_2b8,1);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
    FUN_145753a78(&local_2b8,1);
  }
  *(undefined1 *)uStack_2b0 = 0x2e;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
  FUN_1406421aa(&DAT_14cbcd498,&local_2b8,1);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 4)) {
    FUN_145753a78(&local_2b8,4);
  }
  *(undefined4 *)uStack_2b0 = 0x203d3d20;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 4);
  FUN_1406421aa(&DAT_14cbcd4b0,&local_2b8,1);
  if (local_2a8 <= (undefined8 *)((longlong)uStack_2b0 + 1)) {
    FUN_145753a78(&local_2b8,1);
  }
  *(undefined1 *)uStack_2b0 = 0;
  uStack_2b0 = (longlong *)((longlong)uStack_2b0 + 1);
  FUN_140822110(&local_2c8,&local_2b8,0);
  FUN_140822770(lVar10,&local_2c8,1);
  FUN_1447cd778(local_2c8,iStack_2c0);
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_2a0 == '\x01') {
    FUN_1400020a8(local_2b8);
  }
  plVar11 = DAT_14cbcd4b4;
  if ((DAT_14cbcd4b4 == DAT_14c948034) && (plVar11 = DAT_14c948034, DAT_14cbcd4b0 != DAT_14c948030))
  {
    FUN_14011791e(&local_2b8,DAT_14cbcd4b0,(ulonglong)DAT_14cbcd4b4 >> 0x20);
    DAT_14cbcd4b4 = local_2b8;
    plVar11 = local_2b8;
  }
  local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
  local_2b8._4_4_ = 0;
  uStack_2b0._0_4_ = 0;
  uStack_2b0._4_4_ = 0;
  FUN_144976b9c(&local_2b8,plVar11);
  iStack_2c0 = *(undefined4 *)(param_1 + 0x80);
  local_2c8._0_4_ = (uint)*puVar1;
  local_2c8._4_4_ = (undefined4)((ulonglong)*puVar1 >> 0x20);
  local_2f0 = local_2f0 & 0xff00;
  local_2f8 = local_2f8 & 0xffffffffffffff00;
  FUN_14064171a(lVar14 + 0x140,&local_2c8,&DAT_14cbcd498,&local_2b8);
  plVar11 = DAT_14cbcda8c;
  if ((DAT_14cbcda8c == DAT_14c948034) && (plVar11 = DAT_14c948034, DAT_14cbcda88 != DAT_14c948030))
  {
    FUN_14011791e(&local_2b8,DAT_14cbcda88,(ulonglong)DAT_14cbcda8c >> 0x20);
    plVar11 = (longlong *)CONCAT44(local_2b8._4_4_,(uint)local_2b8);
    DAT_14cbcda8c = plVar11;
  }
  local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
  local_2b8._4_4_ = 0;
  uStack_2b0._0_4_ = 0;
  uStack_2b0._4_4_ = 0;
  FUN_144976b9c(&local_2b8,plVar11);
  iStack_2c0 = *(undefined4 *)(param_1 + 0x80);
  local_2c8._0_4_ = (uint)*puVar1;
  local_2c8._4_4_ = (undefined4)((ulonglong)*puVar1 >> 0x20);
  local_2f0 = local_2f0 & 0xff00;
  local_2f8 = local_2f8 & 0xffffffffffffff00;
  FUN_14064171a(lVar14 + 0xe0,&local_2c8,&DAT_14cbcd498,&local_2b8);
  plVar11 = DAT_14cbcda8c;
  if ((DAT_14cbcda8c == DAT_14c948034) && (plVar11 = DAT_14c948034, DAT_14cbcda88 != DAT_14c948030))
  {
    FUN_14011791e(&local_2b8,DAT_14cbcda88,(ulonglong)DAT_14cbcda8c >> 0x20);
    plVar11 = (longlong *)CONCAT44(local_2b8._4_4_,(uint)local_2b8);
    DAT_14cbcda8c = plVar11;
  }
  local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
  local_2b8._4_4_ = 0;
  uStack_2b0._0_4_ = 0;
  uStack_2b0._4_4_ = 0;
  FUN_144976b9c(&local_2b8,plVar11);
  iStack_2c0 = *(undefined4 *)(param_1 + 0x80);
  local_2c8._0_4_ = (uint)*puVar1;
  local_2c8._4_4_ = (undefined4)((ulonglong)*puVar1 >> 0x20);
  local_2f0 = local_2f0 & 0xff00;
  local_2f8 = local_2f8 & 0xffffffffffffff00;
  FUN_14064171a(lVar14 + 0x110,&local_2c8,&DAT_14cbcd498,&local_2b8);
  plVar11 = DAT_14cbcda8c;
  if ((DAT_14cbcda8c == DAT_14c948034) && (plVar11 = DAT_14c948034, DAT_14cbcda88 != DAT_14c948030))
  {
    FUN_14011791e(&local_2b8,DAT_14cbcda88,(ulonglong)DAT_14cbcda8c >> 0x20);
    plVar11 = (longlong *)CONCAT44(local_2b8._4_4_,(uint)local_2b8);
    DAT_14cbcda8c = plVar11;
  }
  local_2b8._0_4_ = (uint)local_2b8 & 0xffffff00;
  local_2b8._4_4_ = 0;
  uStack_2b0._0_4_ = 0;
  uStack_2b0._4_4_ = 0;
  FUN_144976b9c(&local_2b8,plVar11);
  iStack_2c0 = *(undefined4 *)(param_1 + 0x80);
  local_2c8._0_4_ = (uint)*puVar1;
  local_2c8._4_4_ = (undefined4)((ulonglong)*puVar1 >> 0x20);
  local_2f0 = local_2f0 & 0xff00;
  local_2f8 = local_2f8 & 0xffffffffffffff00;
  FUN_14064171a(lVar14 + 0x58,&local_2c8,&DAT_14cbcd498,&local_2b8);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14089c9ba FUN_14089c9ba body=71 status=ok
// SIG undefined FUN_14089c9ba(void)

void FUN_14089c9ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14089ca02(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089ca02 FUN_14089ca02 body=203 status=ok
// SIG undefined FUN_14089ca02(void)

longlong FUN_14089ca02(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  while( true ) {
    uVar2 = local_48;
    local_50 = local_48;
    uVar1 = *(undefined8 *)(param_1 + 8);
    iVar5 = (int)*(undefined8 *)(param_1 + 0x10) - (int)uVar1;
    puVar4 = (ulonglong *)FUN_144737586();
    local_60 = uVar2;
    local_68 = 0;
    uVar3 = __stdio_common_vsprintf(*puVar4 | 2,uVar1,(longlong)iVar5,param_2);
    if ((int)uVar3 < 0) {
      uVar3 = 0xffffffff;
    }
    if (iVar5 <= (int)uVar3) {
      uVar3 = 0xffffffff;
    }
    if ((-1 < (int)uVar3) && ((int)uVar3 < iVar5)) break;
    FUN_145753a78(param_1,0x40);
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089cace FUN_14089cace body=155 status=ok
// SIG undefined FUN_14089cace(void)

void FUN_14089cace(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_140822996();
  FUN_140005f6c(param_1 + 8,uVar3,0,0);
  FUN_140822942(param_1 + 8,&local_30);
  FUN_1400fce78(local_30 + 8,param_2);
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



// FUNCTION 14089cb6a FUN_14089cb6a body=350 status=ok
// SIG undefined FUN_14089cb6a(void)

undefined8 *
FUN_14089cb6a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_4 + 0x18) == 0) {
    *(uint *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
    if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  piVar4 = *(int **)(param_4 + 8);
  if (piVar4 == (int *)0x0) {
    piVar4 = &DAT_14c9485f0;
  }
  if (((*piVar4 == 0) || (iVar1 = piVar4[1], iVar1 == 0)) || (*piVar4 == DAT_14c948000)) {
LAB_14089cc67:
    local_18 = DAT_14c948620;
    local_20 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar4[9] < 1)) {
      piVar4 = piVar4 + 2;
    }
    else {
      piVar4 = *(int **)(piVar4 + 6);
    }
    if (iVar1 < 1) goto LAB_14089cc67;
    local_18 = piVar4[2];
    local_20 = *(undefined8 *)piVar4;
  }
  piVar4 = *(int **)(*(longlong *)(param_4 + 0x18) + 8);
  piVar3 = &DAT_14c9485f0;
  if (piVar4 != (int *)0x0) {
    piVar3 = piVar4;
  }
  if (*piVar3 != 0) {
    uVar2 = piVar3[1];
    piVar4 = (int *)(ulonglong)uVar2;
    if ((uVar2 != 0) && (*piVar3 != DAT_14c948000)) {
      if (((int)uVar2 < 2) && (piVar3[9] < 1)) {
        piVar3 = piVar3 + 2;
      }
      else {
        piVar3 = *(int **)(piVar3 + 6);
      }
      if (0 < (int)uVar2) {
        local_28 = piVar3[2];
        piVar4 = (int *)(ulonglong)local_28;
        local_30 = *(undefined8 *)piVar3;
        goto LAB_14089cc35;
      }
    }
  }
  local_28 = DAT_14c948620;
  local_30 = DAT_14c948618;
LAB_14089cc35:
  local_38 = &local_20;
  FUN_14089ccca(piVar4,param_2,param_3,&local_30);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 14089ccca FUN_14089ccca body=264 status=ok
// SIG undefined FUN_14089ccca(void)

longlong FUN_14089ccca(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1408226d0(param_4,&local_58,1);
  local_78 = &DAT_149dfb77a;
  if (local_50 != 0) {
    local_78 = local_58;
  }
  FUN_1408226d0(param_5,&local_68,1);
  puVar1 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar1 = local_68;
  }
  FUN_140002266(&local_48,L"WP_%s_%d_%s",puVar1,param_3 + 1);
  *(undefined8 *)(param_2 + 4) = 0;
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_1405f0d29(param_2,puVar1,0);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089cdd4 FUN_14089cdd4 body=226 status=ok
// SIG undefined FUN_14089cdd4(void)

undefined8
FUN_14089cdd4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_68 [2];
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68[0] = 0xb;
  local_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_78 = *param_2;
  local_70 = *(undefined4 *)(param_2 + 1);
  FUN_144928d62(&local_58,0);
  local_80 = *(undefined4 *)(param_3 + 1);
  local_88 = *param_3;
  FUN_144928d62(&local_58,1);
  uVar1 = FUN_140821fec(param_1,local_68,param_4,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089ceb8 FUN_14089ceb8 body=569 status=ok
// SIG undefined FUN_14089ceb8(void)

undefined2 * FUN_14089ceb8(undefined2 *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [40];
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400b22c2(&local_98,"Stage");
  if (*param_3 != 0) {
    thunk_FUN_14047a987(&local_98,L"_Common",1);
    FUN_1408226d0(param_3,&local_58,1);
    iVar1 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_98,local_58,iVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_144928d62(&local_58,0,&DAT_14cb7bd98);
  piVar2 = &DAT_14c9485f0;
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    piVar2 = *(int **)(param_2 + 8);
  }
  if (((*piVar2 != 0) && (iVar1 = piVar2[1], iVar1 != 0)) && (*piVar2 != DAT_14c948000)) {
    if ((iVar1 < 2) && (piVar2[9] < 1)) {
      piVar2 = piVar2 + 2;
    }
    else {
      piVar2 = *(int **)(piVar2 + 6);
    }
    if (0 < iVar1) {
      local_a0 = piVar2[2];
      local_a8 = *(undefined8 *)piVar2;
      goto LAB_14089cf7b;
    }
  }
  local_a0 = DAT_14c948620;
  local_a8 = DAT_14c948618;
LAB_14089cf7b:
  FUN_144928d62(&local_58,1,&local_a8);
  FUN_144928d62(&local_58,2,&DAT_14cb7bdb0);
  iVar1 = local_90 + -1;
  if (local_90 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_88,iVar1,local_98,1);
  FUN_1401533ba(&local_a8,local_88,1);
  FUN_144928d62(&local_58,3,&local_a8);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1447a97f4(local_80,&local_58);
  FUN_14071d490(local_80,param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089d0f2 FUN_14089d0f2 body=1121 status=ok
// SIG undefined FUN_14089d0f2(void)

void FUN_14089d0f2(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [40];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14089ceb8(local_88,param_3,param_4);
  plVar10 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b41e000;
  plVar10[2] = (longlong)&PTR_FUN_14b35b440;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[6] = (longlong)&PTR_FUN_14b00be10;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  FUN_140b126e4(local_88,&local_b8);
  puVar13 = local_b8;
  if (local_b0 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  FUN_140002266(local_a8,L"%s == %d",puVar13,1);
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  FUN_140bf89dc(&local_98,local_a8,0);
  FUN_14089cace(plVar10 + 2,&local_98);
  FUN_1447cd778(CONCAT44(local_98._4_4_,(undefined4)local_98),uStack_90);
  if (CONCAT44(local_98._4_4_,(undefined4)local_98) != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uStack_90 = SUB84(plVar10,0);
  uStack_8c = (undefined4)((ulonglong)plVar10 >> 0x20);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_98 = plVar10 + 2;
  FUN_1408229d0(param_3 + 0x2c0,&local_98);
  plVar3 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  iVar4 = (int)plVar10[0xc];
  *(uint *)(plVar10 + 0xc) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar10 + 100) < iVar4 + 1U) {
    FUN_14089d690(plVar10 + 0xb,iVar4);
  }
  plVar3 = (longlong *)(plVar10[0xb] + (longlong)iVar4 * 0x18);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  uVar11 = FUN_140823eb8();
  lVar14 = 0;
  FUN_140005f6c(plVar3,uVar11,0,0);
  lVar12 = *plVar3;
  if (lVar12 != 0) {
    uVar11 = FUN_140823eb8();
    cVar9 = FUN_1448093f4(lVar12,uVar11);
    if (cVar9 == '\0') {
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar3;
      plVar5 = (longlong *)plVar3[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        lVar14 = lVar14 + 8;
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
        goto LAB_14089d307;
      }
    }
  }
  lVar14 = lVar14 + 8;
LAB_14089d307:
  uVar11 = FUN_14089d5a8();
  FUN_140005f6c(lVar14,uVar11,0,0);
  FUN_14089d554(lVar14,&local_98);
  plVar5 = local_98;
  *(undefined4 *)(local_98 + 1) = *(undefined4 *)(param_1 + 0x10);
  lVar12 = *(longlong *)(param_1 + 0x18);
  if (local_98[2] != lVar12) {
    local_98[4] = 0;
  }
  local_98[2] = lVar12;
  if (local_98[3] != *(longlong *)(param_1 + 0x20)) {
    local_98[4] = 0;
  }
  uVar11 = FUN_14477b664();
  lVar12 = FUN_14477b664(uVar11);
  plVar5[3] = lVar12;
  plVar5[4] = *(longlong *)(param_1 + 0x28);
  lVar12 = *(longlong *)(param_1 + 0x38);
  plVar5[5] = *(longlong *)(param_1 + 0x30);
  plVar5[6] = lVar12;
  if ((plVar5[7] != *(longlong *)(param_1 + 0x40)) || ((int)plVar5[8] != *(int *)(param_1 + 0x48)))
  {
    plVar5[7] = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(plVar5 + 8) = *(undefined4 *)(param_1 + 0x48);
    plVar5[9] = 0;
  }
  *(undefined4 *)(plVar5 + 10) = *(undefined4 *)(param_1 + 0x58);
  uVar6 = *(undefined4 *)(param_1 + 100);
  uVar7 = *(undefined4 *)(param_1 + 0x68);
  uVar8 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(plVar5 + 0xb) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((longlong)plVar5 + 0x5c) = uVar6;
  *(undefined4 *)(plVar5 + 0xc) = uVar7;
  *(undefined4 *)((longlong)plVar5 + 100) = uVar8;
  *(undefined4 *)(plVar5 + 0xd) = *(undefined4 *)(param_1 + 0x70);
  FUN_14089d632(plVar5 + 0xe,param_1 + 0x78);
  FUN_14089d5e2(plVar5 + 0x10,param_1 + 0x88);
  *(undefined1 *)(plVar5 + 0x12) = *(undefined1 *)(param_1 + 0x98);
  FUN_1401f3db8(plVar5 + 0x13,param_1 + 0xa0);
  plVar5 = (longlong *)CONCAT44(uStack_8c,uStack_90);
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
  local_98._0_4_ = CONCAT31(local_98._1_3_,2);
  uStack_8c = 2;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  local_c8 = 5;
  FUN_140641812(*plVar3 + 0x20,local_88,&local_98,0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14089d554 FUN_14089d554 body=83 status=ok
// SIG undefined FUN_14089d554(void)

longlong * FUN_14089d554(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14089d5a8();
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



// FUNCTION 14089d5a8 FUN_14089d5a8 body=57 status=ok
// SIG undefined FUN_14089d5a8(void)

void FUN_14089d5a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e178 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e178 = FUN_140002ddd(FUN_146539c84,uVar1,L"ObjectiveValueEvaluator_Timer");
  }
  return;
}



// FUNCTION 14089d5e2 FUN_14089d5e2 body=79 status=ok
// SIG undefined FUN_14089d5e2(void)

undefined8 * FUN_14089d5e2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_143c880a8(param_1,iVar1);
      FUN_143c8818d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14089d632 FUN_14089d632 body=93 status=ok
// SIG undefined FUN_14089d632(void)

undefined8 * FUN_14089d632(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140acec6f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143c87e10(param_1,iVar1);
      FUN_143c87f5a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14089d690 FUN_14089d690 body=370 status=ok
// SIG undefined FUN_14089d690(void)

void FUN_14089d690(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14089d719;
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
LAB_14089d719:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14089d802 FUN_14089d802 body=2443 status=ok
// SIG undefined FUN_14089d802(void)

void FUN_14089d802(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  short local_2d0;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2ac [4];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 *local_290;
  char local_288;
  undefined4 local_280 [128];
  undefined4 local_80 [10];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_14089ceb8(local_80,param_3,&DAT_14c948618);
  puVar12 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(param_3 + 8);
  }
  local_2c8 = (longlong *)0x0;
  uStack_2c0 = (longlong *)0x0;
  FUN_1400b2348(puVar12,&local_2c8,1);
  puVar13 = &DAT_149dfb77a;
  plVar11 = (longlong *)&DAT_149dfb77a;
  if ((int)uStack_2c0 != 0) {
    plVar11 = local_2c8;
  }
  FUN_140002266(&local_2a0,L"__Bind_%s_Encounter",plVar11);
  local_2a8 = 0;
  if ((int)local_298 != 0) {
    puVar13 = (undefined2 *)CONCAT44(local_2a0._4_4_,(undefined4)local_2a0);
  }
  FUN_1405f0d29(local_2ac,puVar13,0);
  if (CONCAT44(local_2a0._4_4_,(undefined4)local_2a0) != 0) {
    FUN_1400020a8();
  }
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_298._0_4_ = *(undefined4 *)(param_1 + 0x10);
  local_2a0._0_4_ = (undefined4)*(undefined8 *)(param_1 + 8);
  local_2a0._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  lVar9 = FUN_140d89a16(param_2,param_3,local_2ac);
  local_2d0 = (ushort)*(byte *)(param_2 + 8) * 2;
  local_2d8 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_2d8 = param_2 + 0x10;
  }
  lVar10 = param_1 + 0x14;
  if (*(int *)(param_1 + 0x14) == 0) {
    lVar10 = param_1 + 8;
  }
  FUN_14089cb6a(param_2,&local_2a0,2,param_3);
  lVar10 = FUN_1408236ae(param_2,param_3,&local_2a0,lVar10);
  local_2a0 = local_280;
  local_288 = '\0';
  local_290 = local_80;
  local_298 = local_2a0;
  FUN_14014e8d0(local_80,&local_2a0);
  if (local_290 <= local_298 + 1) {
    FUN_145753a78(&local_2a0,4);
  }
  *local_298 = 0x203d3d20;
  local_298 = local_298 + 1;
  FUN_14089c9ba(&local_2a0,&DAT_149dfc0ac,1);
  if (local_290 <= (undefined4 *)((longlong)local_298 + 1)) {
    FUN_145753a78(&local_2a0,1);
  }
  *(undefined1 *)local_298 = 0;
  local_298 = (undefined4 *)((longlong)local_298 + 1);
  FUN_140822110(&local_2c8,&local_2a0,0);
  iVar7 = *(int *)(lVar10 + 0x38);
  *(uint *)(lVar10 + 0x38) = iVar7 + 1U;
  if (*(uint *)(lVar10 + 0x3c) < iVar7 + 1U) {
    FUN_1410f5714((longlong *)(lVar10 + 0x30),iVar7);
  }
  lVar10 = *(longlong *)(lVar10 + 0x30);
  lVar14 = (longlong)iVar7 * 0x10;
  *(undefined8 *)(lVar10 + lVar14) = 0;
  *(longlong **)(lVar10 + lVar14) = local_2c8;
  local_2c8 = (longlong *)0x0;
  *(int *)(lVar10 + 8 + lVar14) = (int)uStack_2c0;
  *(undefined4 *)(lVar10 + 0xc + lVar14) = uStack_2c0._4_4_;
  uStack_2c0 = (longlong *)0x0;
  FUN_1447cd778(0,0);
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_288 == '\x01') {
    FUN_1400020a8(local_2a0);
  }
  pbVar4 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc80);
  if ((*pbVar4 & 1) == 0) {
    plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b41dfe0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14b00be30;
    *(undefined1 *)((longlong)plVar11 + 0x29) = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    *(undefined4 *)(plVar11 + 9) = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    *(undefined2 *)(plVar11 + 0xc) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x62) = 1;
  }
  else {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar8 = *(undefined4 *)(lVar10 + 0xc7c);
    *pbVar4 = 0;
    *(undefined4 *)(lVar10 + 0xc7c) = 0xffffffff;
    plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b41dfe0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14b00be30;
    *(undefined1 *)((longlong)plVar11 + 0x29) = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    *(undefined4 *)(plVar11 + 9) = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    *(undefined2 *)(plVar11 + 0xc) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x62) = 1;
    *(undefined4 *)(lVar10 + 0xc7c) = uVar8;
    *pbVar4 = 1;
  }
  *(undefined1 *)(plVar11 + 0xc) = 1;
  iVar7 = (int)plVar11[4];
  *(uint *)(plVar11 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)plVar11 + 0x24) < iVar7 + 1U) {
    FUN_140823334(plVar11 + 3,iVar7);
    lVar10 = plVar11[3];
  }
  else {
    lVar10 = 0;
  }
  puVar5 = (undefined8 *)(lVar10 + (longlong)iVar7 * 0x28);
  *puVar5 = DAT_14cb86280;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  local_2a0._0_4_ = CONCAT31(local_2a0._1_3_,2);
  local_298._4_4_ = 2;
  local_2a0._4_4_ = 0;
  local_298._0_4_ = 0;
  FUN_140821fec(puVar5,local_80,&local_2a0,5);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(lVar9 + 0x50);
  *(uint *)(lVar9 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar9 + 0x54) < iVar7 + 1U) {
    FUN_140822376((longlong *)(lVar9 + 0x48),iVar7);
  }
  lVar9 = *(longlong *)(lVar9 + 0x48);
  *(longlong **)(lVar9 + (longlong)iVar7 * 0x10) = plVar11 + 2;
  *(longlong **)(lVar9 + 8 + (longlong)iVar7 * 0x10) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  puVar12 = (undefined4 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc7c)
  ;
  uVar8 = *puVar12;
  bVar6 = *pbVar4;
  if ((bVar6 & 1) != 0) {
    *pbVar4 = 0;
    *puVar12 = 0xffffffff;
  }
  plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b41e000;
  plVar11[2] = (longlong)&PTR_FUN_14b35b440;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = 0;
  plVar11[6] = (longlong)&PTR_FUN_14b00be10;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  if ((bVar6 & 1) != 0) {
    *puVar12 = uVar8;
    *pbVar4 = 1;
  }
  local_288 = '\0';
  local_290 = local_80;
  local_2a0 = local_280;
  local_298 = local_280;
  FUN_14014e8d0(local_80,&local_2a0);
  if (local_290 <= local_298 + 1) {
    FUN_145753a78(&local_2a0,4);
  }
  *local_298 = 0x203d3d20;
  local_298 = local_298 + 1;
  FUN_14089c9ba(&local_2a0,&DAT_149dfc0ac,1);
  if (local_290 <= (undefined4 *)((longlong)local_298 + 1)) {
    FUN_145753a78(&local_2a0,1);
  }
  *(undefined1 *)local_298 = 0;
  local_298 = (undefined4 *)((longlong)local_298 + 1);
  FUN_140822110(&local_2c8,&local_2a0,0);
  FUN_14089cace(plVar11 + 2,&local_2c8);
  FUN_1447cd778(local_2c8,(ulonglong)uStack_2c0 & 0xffffffff);
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140d22200(plVar11 + 6,local_2ac);
  param_3 = param_3 + 0x2c0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_2c8 = plVar11 + 2;
  uStack_2c0 = plVar11;
  FUN_1408229d0(param_3,&local_2c8);
  plVar1 = uStack_2c0;
  if (uStack_2c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_2c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_2c0)(uStack_2c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar9 = FUN_1406b2efc(param_3);
  FUN_140d89482(lVar9 + 0x170,local_2ac);
  lVar9 = FUN_1406b2efc(param_3);
  FUN_140d89482(lVar9 + 0x58,local_2ac);
  if (local_288 == '\x01') {
    FUN_1400020a8(local_2a0);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  uVar8 = *puVar12;
  bVar6 = *pbVar4;
  if ((bVar6 & 1) != 0) {
    *pbVar4 = 0;
    *puVar12 = 0xffffffff;
  }
  plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b41e000;
  plVar11[2] = (longlong)&PTR_FUN_14b35b440;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = 0;
  plVar11[6] = (longlong)&PTR_FUN_14b00be10;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  if ((bVar6 & 1) != 0) {
    *puVar12 = uVar8;
    *pbVar4 = 1;
  }
  local_288 = '\0';
  local_290 = local_80;
  local_2a0 = local_280;
  local_298 = local_280;
  FUN_14014e8d0(local_80,&local_2a0);
  if (local_290 <= (undefined4 *)((longlong)local_298 + 3)) {
    FUN_145753a78(&local_2a0,3);
  }
  *(undefined1 *)((longlong)local_298 + 2) = 0x20;
  *(undefined2 *)local_298 = 0x3e20;
  local_298 = (undefined4 *)((longlong)local_298 + 3);
  FUN_14089c9ba(&local_2a0,&DAT_149dfc0ac,1);
  if (local_290 <= (undefined4 *)((longlong)local_298 + 1)) {
    FUN_145753a78(&local_2a0,1);
  }
  *(undefined1 *)local_298 = 0;
  local_298 = (undefined4 *)((longlong)local_298 + 1);
  FUN_140822110(&local_2c8,&local_2a0,0);
  FUN_14089cace(plVar11 + 2,&local_2c8);
  FUN_1447cd778(local_2c8,(ulonglong)uStack_2c0 & 0xffffffff);
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140d89482(plVar11 + 6,local_2ac);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_2c8 = plVar11 + 2;
  uStack_2c0 = plVar11;
  FUN_1408229d0(param_3,&local_2c8);
  plVar1 = uStack_2c0;
  if (uStack_2c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_2c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_2c0)(uStack_2c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_288 == '\x01') {
    FUN_1400020a8(local_2a0);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089e18e FUN_14089e18e body=118 status=ok
// SIG undefined FUN_14089e18e(void)

void FUN_14089e18e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 4, 4 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x14,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x5c)) {
    return;
  }
  *(int *)(param_1 + 0x5c) = (int)uVar2;
  FUN_14089e204(param_1,*(undefined4 *)(param_1 + 0x58),uVar2,0x14);
  return;
}



// FUNCTION 14089e204 FUN_14089e204 body=140 status=ok
// SIG undefined FUN_14089e204(void)

void FUN_14089e204(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,param_4);
  return;
}



// FUNCTION 14089e290 FUN_14089e290 body=108 status=ok
// SIG undefined FUN_14089e290(void)

void FUN_14089e290(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_14089e2fc();
  if ((((*(byte *)(param_1 + 99) & 8) != 0) && (lVar2 = FUN_1447210f0(param_1), lVar2 != 0)) &&
     ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0);
    }
    if (lVar2 != param_1) {
      *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xf7;
    }
  }
  if ((*(byte *)(param_1 + 99) & 8) == 0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14089e2fc FUN_14089e2fc body=265 status=ok
// SIG undefined FUN_14089e2fc(void)

void FUN_14089e2fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1401b2056();
  if ((*(byte *)(param_1 + 0x39d) & 8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    return;
  }
  lVar1 = FUN_144a79cc8(param_1);
  if (lVar1 == 0) {
    return;
  }
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0x228);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_14089e37e;
    lVar2 = FUN_1412b49a2();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar2 = FUN_1412b49a2();
      if ((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar3 = lVar1;
        }
      }
      lVar1 = FUN_146412f62(param_1,lVar3,0,0,0,0,0,0);
      if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x3e0) = lVar1;
    }
  }
LAB_14089e37e:
  *(byte *)(param_1 + 0x39d) = *(byte *)(param_1 + 0x39d) & 0xf7;
  return;
}



// FUNCTION 14089e406 FUN_14089e406 body=242 status=ok
// SIG undefined FUN_14089e406(void)

undefined8 *
FUN_14089e406(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    FUN_140056680(&local_50,L"FColoredMaterialRenderProxy");
  }
  else {
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_2 + 0xa0);
    lVar4 = (longlong)local_48;
    _Src = *(void **)(param_2 + 0x98);
    if (lVar4 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar4 * 2);
    }
  }
  FUN_14089e4fa(param_1,&local_50);
  *param_1 = &PTR_FUN_14a9d8f20;
  param_1[0x19] = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x1a) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
  param_1[0x1c] = param_4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089e4fa FUN_14089e4fa body=186 status=ok
// SIG undefined FUN_14089e4fa(void)

undefined8 * FUN_14089e4fa(undefined8 *param_1,longlong *param_2)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_LAB_14a9d8de0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x13] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 0x14) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(byte *)((longlong)param_1 + 0xac) = *(byte *)((longlong)param_1 + 0xac) & 0xf4;
  *(undefined1 *)((longlong)param_1 + 0xad) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14089e5ba FUN_14089e5ba body=57 status=ok
// SIG undefined FUN_14089e5ba(void)

void FUN_14089e5ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aa10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aa10 = FUN_140002ddd(FUN_1464cb828,uVar1,L"GbxBrainAspect_DialogEvent");
  }
  return;
}



// FUNCTION 14089e602 FUN_14089e602 body=40 status=ok
// SIG undefined FUN_14089e602(void)

undefined8 FUN_14089e602(undefined8 param_1,int param_2)

{
  FUN_1407f60da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14089e62a FUN_14089e62a body=180 status=ok
// SIG undefined FUN_14089e62a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14089e62a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_2068 [32];
  undefined8 local_2048;
  undefined8 *local_2040;
  undefined8 *local_2030;
  undefined1 local_2028 [8200];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2068;
  local_res18 = param_3;
  local_res20 = param_4;
  local_2030 = &local_res18;
  puVar1 = (undefined8 *)FUN_144737586();
  local_2048 = 0;
  local_2040 = &local_res18;
  __stdio_common_vswprintf(*puVar1,local_2028,0x1000,param_2);
  lVar2 = FUN_1407bb686();
  uVar3 = FUN_1407bb416();
  local_2048 = CONCAT71(local_2048._1_7_,4);
  FUN_14089e6e0(uVar3,*(undefined8 *)(lVar2 + 0x10),local_2028,0);
  if ((local_20 ^ (ulonglong)auStack_2068) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089e6e0 FUN_14089e6e0 body=276 status=ok
// SIG undefined FUN_14089e6e0(void)

/* WARNING: Removing unreachable block (ram,0x00014089e7ee) */

undefined4
FUN_14089e6e0(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection(param_1);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  FUN_140056680(&local_60);
  local_50 = CONCAT11(param_4,param_5);
  lVar4 = (longlong)*(int *)(param_2 + 0x18);
  uVar3 = *(int *)(param_2 + 0x18) + 1;
  *(uint *)(param_2 + 0x18) = uVar3;
  if (*(uint *)(param_2 + 0x1c) < uVar3) {
    FUN_145c4daa0((longlong *)(param_2 + 0x10));
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = local_60;
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0x18) = (undefined4)local_58;
  *(undefined4 *)(lVar2 + 0xc + lVar4 * 0x18) = local_58._4_4_;
  *(undefined2 *)(lVar2 + 0x10 + lVar4 * 0x18) = local_50;
  local_58 = 0;
  local_60 = 0;
  FUN_14089e7f6(param_1,3,param_2);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14089e7f6 FUN_14089e7f6 body=219 status=ok
// SIG undefined FUN_14089e7f6(void)

void FUN_14089e7f6(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_2a8 [32];
  undefined1 **local_288;
  undefined1 local_278 [36];
  undefined4 local_254;
  undefined1 *local_250;
  undefined1 *local_248;
  ulonglong *local_240;
  char local_238;
  undefined1 local_230 [512];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_250 = local_230;
    local_238 = '\0';
    local_240 = &local_30;
    local_288 = &local_250;
    local_248 = local_250;
    FUN_146820326(param_1,local_278,param_3,*(undefined4 *)(param_1 + 0x80));
    pcVar1 = *(code **)(param_1 + 0x40);
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    local_254 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_254,local_278);
    if (local_238 == '\x01') {
      FUN_1400020a8(local_250);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14089e8d2 FUN_14089e8d2 body=282 status=ok
// SIG undefined FUN_14089e8d2(void)

undefined8 FUN_14089e8d2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0x6e8);
  if (plVar5 == (longlong *)0x0) {
    FUN_1406c9d00(param_1 + 0x5e0,&local_38);
    if (local_30 == 0) {
      uVar2 = FUN_140927942();
      local_30 = FUN_14477b664(uVar2);
    }
    if (local_28 == (longlong *)0x0) {
      if ((((local_30 != 0) && (local_38 != 0)) &&
          (plVar5 = *(longlong **)(local_30 + 0xb8), plVar5 != (longlong *)0x0)) &&
         (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 != '\0')) {
        uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
        local_28 = (longlong *)FUN_144aff482(uVar2,&local_38);
        if (local_28 != (longlong *)0x0) goto LAB_14089e95e;
      }
    }
    else {
LAB_14089e95e:
      plVar5 = local_28;
      lVar3 = (**(code **)(*local_28 + 8))(local_28);
      lVar4 = FUN_14185c56c();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) goto LAB_14089e8f7;
    }
    uVar2 = 0;
  }
  else {
LAB_14089e8f7:
    uVar2 = (**(code **)(*plVar5 + 0x158))(plVar5,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14089e9ee FUN_14089e9ee body=166 status=ok
// SIG undefined FUN_14089e9ee(void)

longlong FUN_14089e9ee(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if ((*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + 0xa0)) &&
     (*(longlong *)(param_2 + 0x10) == *(longlong *)(param_1 + 0xa8))) {
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 == *(int *)(param_1 + 0xb8)) {
      if (1 < iVar1) {
        lVar2 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x18) + lVar2);
          uVar4 = (ulonglong)uVar3;
          uVar5 = *(ushort *)(*(longlong *)(param_1 + 0xb0) + lVar2);
          if (uVar3 != uVar5) break;
          if (uVar3 == 0) goto LAB_14089ea24;
LAB_14089ea56:
          lVar2 = lVar2 + 2;
        }
        if ((uVar5 | uVar3) < 0x80) {
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_14089ea56;
        }
        if (uVar3 != uVar5) goto LAB_14089e9ff;
      }
    }
    else if (*(int *)(param_1 + 0xb8) + iVar1 != 1) goto LAB_14089e9ff;
LAB_14089ea24:
    param_1 = param_1 + 0xd0;
  }
  else {
LAB_14089e9ff:
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 14089ea94 FUN_14089ea94 body=13536 status=ok
// SIG undefined FUN_14089ea94(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14089ea94(longlong param_1)

{
  ulonglong uVar1;
  double dVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  DWORD DVar13;
  DWORD DVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  longlong lVar21;
  uint uVar22;
  undefined2 *_Dst;
  undefined1 uVar23;
  int iVar24;
  longlong *plVar25;
  uint *puVar26;
  uint *puVar27;
  bool bVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  uint uVar36;
  undefined8 *puVar37;
  uint *puVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint *puVar41;
  int iVar42;
  uint uVar43;
  undefined4 *_Src;
  undefined1 *_Src_00;
  bool bVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_508 [32];
  double *local_4e8;
  undefined4 local_4e0;
  undefined1 *local_4d8;
  undefined1 *local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b0;
  uint *local_4a8;
  uint *local_4a0;
  uint *local_498;
  uint *local_490;
  uint *local_488;
  longlong local_480;
  uint *local_478;
  longlong local_470;
  uint *local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  double local_438;
  double dStack_430;
  double local_428;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined1 local_400;
  undefined1 local_3ff;
  undefined1 uStack_3fe;
  undefined1 uStack_3fd;
  undefined2 uStack_3fc;
  undefined2 uStack_3fa;
  undefined1 uStack_3f8;
  undefined2 uStack_3f4;
  undefined2 uStack_3f2;
  undefined1 uStack_3f0;
  undefined1 uStack_3ef;
  undefined4 local_3ec;
  undefined2 local_3e8 [16];
  undefined2 *local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8 [2];
  undefined8 *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined4 local_370;
  undefined1 local_36c;
  undefined4 local_368;
  undefined8 *local_2f8;
  int local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined2 uStack_104;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined1 local_f8;
  undefined2 local_f4;
  undefined2 uStack_f2;
  undefined2 local_f0;
  undefined1 local_e8 [32];
  undefined1 *local_c8;
  ulonglong local_c0;
  undefined4 local_b8 [4];
  undefined4 *local_a8;
  int local_a0;
  undefined4 local_9c;
  ulonglong local_90;
  
  lVar35 = DAT_14cb945d0;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_508;
  iVar15 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar15 == 0x40000002) {
    uVar32 = 0;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar15 != 2)) {
      if (iVar15 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar44 = DVar13 == DVar14;
      }
      else {
        bVar44 = false;
      }
    }
    uVar32 = (ulonglong)(bVar44 ^ 1);
  }
  if (*(int *)(lVar35 + uVar32 * 4) != 0) {
    uVar36 = *(uint *)(param_1 + 0x18);
    uVar32 = (ulonglong)(int)uVar36;
    local_480 = param_1;
    if (uVar32 != 0) {
      puVar26 = *(uint **)(param_1 + 0x10);
      if (puVar26[1] == 0 || *(longlong *)(puVar26 + 2) == 0) {
        bVar44 = true;
      }
      else {
        uVar29 = *puVar26;
        bVar44 = true;
        if ((((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) &&
            (lVar35 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8), lVar35 != 0))
           && (*(uint *)(lVar35 + 0x10) == puVar26[1])) {
          bVar44 = (*(uint *)(lVar35 + 8) & 0x10200000) != 0;
        }
      }
      iVar42 = 0;
      uVar39 = 0;
      lVar35 = DAT_14c9647c8;
      iVar15 = DAT_14c9647dc;
      do {
        while( true ) {
          iVar24 = (int)uVar39;
          uVar39 = (ulonglong)(iVar24 + 1U);
          if ((int)(iVar24 + 1U) < (int)uVar36) break;
          if (bVar44 != false) goto LAB_14089f4c7;
          bVar28 = false;
LAB_14089f4a9:
          iVar33 = (int)uVar39 - iVar24;
          if (iVar42 != iVar24) {
            memmove(puVar26 + (longlong)iVar42 * 4,puVar26 + (longlong)iVar24 * 4,
                    (longlong)iVar33 << 4);
            lVar35 = DAT_14c9647c8;
            iVar15 = DAT_14c9647dc;
          }
          iVar42 = iVar42 + iVar33;
          bVar44 = true;
          if (!bVar28) goto LAB_14089f4c7;
        }
        uVar39 = (longlong)iVar24 + 1;
        puVar41 = puVar26 + (longlong)iVar24 * 4 + 6;
        bVar28 = true;
        do {
          if (*(longlong *)puVar41 == 0) {
            if (bVar44 == false) goto LAB_14089f4a9;
          }
          else if (((puVar41[-1] == 0) || (uVar29 = puVar41[-2], (int)uVar29 < 0)) ||
                  ((iVar15 <= (int)uVar29 ||
                   ((lVar16 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                              *(longlong *)(lVar35 + (ulonglong)(uVar29 >> 0x10) * 8), lVar16 == 0
                    || (*(uint *)(lVar16 + 0x10) != puVar41[-1])))))) {
            if (!bVar44) goto LAB_14089f4a0;
          }
          else if (bVar44 == ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) goto LAB_14089f4a0;
          uVar39 = uVar39 + 1;
          bVar28 = (longlong)uVar39 < (longlong)uVar32;
          puVar41 = puVar41 + 4;
        } while (uVar32 != uVar39);
        uVar39 = (ulonglong)uVar36;
LAB_14089f4a0:
        if (bVar44 == false) goto LAB_14089f4a9;
        bVar44 = false;
      } while (bVar28);
LAB_14089f4c7:
      *(int *)(local_480 + 0x18) = iVar42;
    }
    lVar35 = local_480;
    if (((((*(int *)(local_480 + -0x14) != 0) &&
          (uVar36 = *(uint *)(local_480 + -0x18), -1 < (int)uVar36)) &&
         ((int)uVar36 < DAT_14c9647dc)) &&
        ((plVar25 = (longlong *)
                    ((ulonglong)((uVar36 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8)),
         plVar25 != (longlong *)0x0 && ((int)plVar25[2] == *(int *)(local_480 + -0x14))))) &&
       (((*(uint *)(plVar25 + 1) & 0x10200000) == 0 && (local_470 = *plVar25, local_470 != 0)))) {
      lVar16 = FUN_144860928();
      uVar36 = *(uint *)(lVar35 + 0x18);
      uVar32 = (ulonglong)uVar36;
      if (*(int *)(lVar16 + 0x88) != 0 && 0 < (int)uVar36) {
        local_4a8 = (uint *)CONCAT44(local_4a8._4_4_,*(int *)(lVar16 + 0x88));
        lVar35 = 0;
        local_4b0 = (uint *)((ulonglong)local_4b0 & 0xffffffff00000000);
        do {
          plVar25 = *(longlong **)(*(longlong *)(local_480 + 0x10) + 8 + lVar35 * 0x10);
          if (plVar25 == (longlong *)0x0) {
LAB_14089f38d:
            uVar36 = (uint)local_4b0;
          }
          else {
            puVar26 = (uint *)(*(longlong *)(local_480 + 0x10) + lVar35 * 0x10);
            uVar36 = puVar26[1];
            if (((uVar36 == 0) || (uVar29 = *puVar26, (int)uVar29 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar29 ||
                (((lVar16 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8),
                  lVar16 == 0 || (*(uint *)(lVar16 + 0x10) != uVar36)) ||
                 ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)))))) goto LAB_14089f38d;
            lVar16 = (**(code **)(*plVar25 + 0x10))();
            iVar15 = *(int *)(lVar16 + 0x178);
            puVar26 = (uint *)(lVar16 + 0x160);
            if (iVar15 == 0) {
              uVar39 = 1;
              uVar32 = 0;
              iVar42 = 0;
              iVar24 = 0;
            }
            else {
              puVar41 = *(uint **)(lVar16 + 0x170);
              if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                puVar41 = puVar26;
              }
              uVar36 = *puVar41;
              if (uVar36 == 0) {
                iVar42 = iVar15 + 0x1e;
                if (-1 < iVar15 + -1) {
                  iVar42 = iVar15 + -1;
                }
                uVar32 = 0;
                uVar39 = (ulonglong)(uint)(iVar42 >> 5);
                if (iVar42 >> 5 < 1) {
                  uVar39 = uVar32;
                }
                iVar24 = 0;
                do {
                  if (uVar39 == uVar32) goto LAB_14089f59a;
                  iVar24 = iVar24 + 0x20;
                  uVar36 = puVar41[uVar32 + 1];
                  uVar32 = uVar32 + 1;
                } while (uVar36 == 0);
              }
              else {
                uVar32 = 0;
                iVar24 = 0;
              }
              uVar39 = (ulonglong)(-uVar36 & uVar36);
              uVar1 = uVar39 * 2 + 1;
              lVar40 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
              if (iVar15 <= iVar42) {
                iVar42 = iVar15;
              }
            }
            if (iVar42 == iVar15) break;
            iVar33 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar33 = iVar15 + -1;
            }
            puVar41 = *(uint **)(lVar16 + 0x170);
            uVar36 = iVar33 >> 5;
            puVar27 = puVar41;
            if (puVar41 == (uint *)0x0) {
              puVar27 = puVar26;
            }
            uVar29 = 0xffffffff;
            while ((lVar40 = *(longlong *)
                              (*(longlong *)(lVar16 + 0x150) + 8 + (longlong)iVar42 * 0x20),
                   lVar40 == 0 || (*(char *)(lVar40 + 0x538) == '\0'))) {
              uVar29 = uVar29 & ~(uint)uVar39;
              uVar22 = (uint)uVar32;
              lVar40 = (longlong)(int)uVar22;
              uVar43 = puVar27[lVar40] & uVar29;
              if (uVar43 == 0) {
                uVar29 = uVar36;
                if ((int)uVar36 < (int)uVar22) {
                  uVar29 = uVar22;
                }
                if ((int)uVar36 <= (int)uVar22) goto LAB_14089f59a;
                lVar21 = 0;
                while( true ) {
                  iVar24 = iVar24 + 0x20;
                  uVar43 = puVar27[lVar40 + lVar21 + 1];
                  if (uVar43 != 0) break;
                  lVar21 = lVar21 + 1;
                  if ((int)uVar29 - lVar40 == lVar21) goto LAB_14089f59a;
                }
                uVar32 = (ulonglong)(uVar22 + (int)lVar21 + 1);
                uVar29 = 0xffffffff;
              }
              uVar39 = (ulonglong)(-uVar43 & uVar43);
              uVar1 = uVar39 * 2 + 1;
              lVar40 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
              if (iVar15 <= iVar42) goto LAB_14089f59a;
            }
            if (iVar15 == 0) {
              uVar32 = 1;
              uVar39 = 0;
              iVar42 = 0;
              iVar24 = 0;
            }
            else {
              uVar29 = *puVar27;
              uVar39 = 0;
              if (uVar29 == 0) {
                uVar32 = (ulonglong)uVar36;
                if ((int)uVar36 < 1) {
                  uVar32 = uVar39;
                }
                iVar24 = 0;
                do {
                  if (uVar32 == uVar39) goto LAB_14089f356;
                  iVar24 = iVar24 + 0x20;
                  uVar29 = puVar27[uVar39 + 1];
                  uVar39 = uVar39 + 1;
                } while (uVar29 == 0);
              }
              else {
                iVar24 = 0;
              }
              uVar32 = (ulonglong)(-uVar29 & uVar29);
              uVar1 = uVar32 * 2 + 1;
              lVar40 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
              if (iVar15 <= iVar42) {
                iVar42 = iVar15;
              }
            }
            if (iVar42 != iVar15) {
              uVar36 = 0xffffffff;
              iVar33 = iVar15;
              do {
                local_4a0 = (uint *)CONCAT44(local_4a0._4_4_,uVar36);
                lVar40 = *(longlong *)(*(longlong *)(lVar16 + 0x150) + 8 + (longlong)iVar42 * 0x20);
                if ((lVar40 != 0) && (*(longlong *)(lVar40 + 0x520) != 0)) {
                  local_498 = (uint *)(lVar40 + 0x528);
                  *(undefined4 *)(lVar40 + 0x530) = 0;
                  if (*(int *)(lVar40 + 0x534) < 0) {
                    FUN_1446f8c06(local_498,0);
                  }
                  if (*(undefined2 **)local_498 != (undefined2 *)0x0) {
                    **(undefined2 **)local_498 = 0;
                  }
                  local_490 = (uint *)(lVar40 + 0x520);
                  local_3ec = 0;
                  local_3e8[0] = 0x101;
                  local_3c0 = 0;
                  local_3b8[0] = 0x800000000;
                  local_3a0 = 0;
                  local_398 = 0x400000000;
                  local_400 = 0;
                  uStack_3f4 = 0;
                  uStack_3f2 = 0;
                  local_418 = ZEXT816(0);
                  local_408 = 0;
                  local_3ff = 1;
                  uStack_3fe = 0;
                  uStack_3fd = 0;
                  uStack_3f0 = 0;
                  uStack_3fc = 0;
                  uStack_3fa = 0x100;
                  uStack_3f8 = 1;
                  local_380 = _DAT_14cad0ee0;
                  uStack_378 = uRam000000014cad0ee8;
                  local_390 = _DAT_14cad0ed0;
                  uStack_388 = _DAT_14cad0ed8;
                  lVar21 = 0x88;
                  do {
                    cVar11 = local_418[lVar21];
                    cVar4 = local_418[lVar21 + 1];
                    cVar5 = local_418[lVar21 + 2];
                    cVar6 = local_418[lVar21 + 3];
                    cVar7 = local_418[lVar21 + 4];
                    cVar8 = local_418[lVar21 + 5];
                    cVar9 = local_418[lVar21 + 6];
                    cVar10 = local_418[lVar21 + 7];
                    if ((bool)(~(cVar11 == '\x02') & 1)) {
                      local_418[lVar21] = 2;
                    }
                    if ((bool)(~(cVar4 == '\x02') & 1)) {
                      local_418[lVar21 + 1] = 2;
                    }
                    if ((bool)(~(cVar5 == '\x02') & 1)) {
                      local_418[lVar21 + 2] = 2;
                    }
                    if ((bool)(~(cVar6 == '\x02') & 1)) {
                      local_418[lVar21 + 3] = 2;
                    }
                    if ((bool)(~(cVar7 == '\x02') & 1)) {
                      local_418[lVar21 + 4] = 2;
                    }
                    if ((bool)(~(cVar8 == '\x02') & 1)) {
                      local_418[lVar21 + 5] = 2;
                    }
                    if ((bool)(~(cVar9 == '\x02') & 1)) {
                      local_418[lVar21 + 6] = 2;
                    }
                    if ((bool)(~(cVar10 == '\x02') & 1)) {
                      local_418[lVar21 + 7] = 2;
                    }
                    if ((bool)(~(cVar11 == '\x02') & 1)) {
                      local_418[lVar21 + 8] = 2;
                    }
                    if ((bool)(~(cVar4 == '\x02') & 1)) {
                      local_418[lVar21 + 9] = 2;
                    }
                    if ((bool)(~(cVar5 == '\x02') & 1)) {
                      local_418[lVar21 + 10] = 2;
                    }
                    if ((bool)(~(cVar6 == '\x02') & 1)) {
                      local_418[lVar21 + 0xb] = 2;
                    }
                    if ((bool)(~(cVar7 == '\x02') & 1)) {
                      local_418[lVar21 + 0xc] = 2;
                    }
                    if ((bool)(~(cVar8 == '\x02') & 1)) {
                      local_418[lVar21 + 0xd] = 2;
                    }
                    if ((bool)(~(cVar9 == '\x02') & 1)) {
                      local_418[lVar21 + 0xe] = 2;
                    }
                    if ((bool)(~(cVar10 == '\x02') & 1)) {
                      local_418[lVar21 + 0xf] = 2;
                    }
                    lVar21 = lVar21 + 0x10;
                  } while (lVar21 != 0xa8);
                  local_370 = 0;
                  local_36c = 0;
                  local_368 = 0;
                  local_2f8 = (undefined8 *)0x0;
                  local_2f0 = 0;
                  local_2e8 = 0;
                  uStack_2e0 = 0;
                  cVar11 = FUN_144a410ba(local_470);
                  if (cVar11 != '\0') {
                    if ((longlong)(int)uStack_2e0 == 0) {
                      uVar23 = 0;
                    }
                    else {
                      lVar21 = 0;
                      do {
                        local_488 = puVar26;
                        if ((*(byte *)(local_2e8 + 0xad + lVar21) & 1) != 0) {
                          FUN_1408a3d20(local_2e8 + lVar21,&local_118);
                          if (local_498 == (uint *)&local_118) {
                            if (local_118 != 0) {
                              FUN_1400020a8();
                            }
                          }
                          else {
                            if (*(longlong *)local_498 != 0) {
                              FUN_1400020a8();
                            }
                            *(longlong *)(lVar40 + 0x528) = local_118;
                            local_118 = 0;
                            *(uint *)(lVar40 + 0x530) = (uint)uStack_110;
                            *(uint *)(lVar40 + 0x534) = uStack_110._4_4_;
                          }
                          uVar23 = 1;
                          puVar26 = local_488;
                          break;
                        }
                        lVar21 = lVar21 + 0x100;
                        uVar23 = 0;
                      } while ((longlong)(int)uStack_2e0 * 0x100 != lVar21);
                    }
                    *(undefined1 *)(lVar40 + 0x519) = uVar23;
                  }
                  local_490[0] = 0;
                  local_490[1] = 0;
                  if (local_2e8 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_2f0 == 0) {
LAB_14089f189:
                    if (local_2f8 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (local_2f8 != (undefined8 *)0x0) {
                    (**(code **)*local_2f8)(local_2f8,0);
                    FUN_1446efa72(&local_2f8,0,0,0x10);
                    local_2f0 = 0;
                    goto LAB_14089f189;
                  }
                  if (local_3a0 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_3c0 != 0) {
                    FUN_1400020a8();
                  }
                  iVar33 = *(int *)(lVar16 + 0x178);
                  puVar41 = *(uint **)(lVar16 + 0x170);
                }
                uVar36 = (uint)local_4a0 & ~(uint)uVar32;
                puVar27 = puVar41;
                if (puVar41 == (uint *)0x0) {
                  puVar27 = puVar26;
                }
                iVar42 = (int)uVar39;
                lVar40 = (longlong)iVar42;
                uVar29 = puVar27[lVar40] & uVar36;
                if (uVar29 == 0) {
                  iVar34 = iVar33 + 0x1e;
                  if (-1 < iVar33 + -1) {
                    iVar34 = iVar33 + -1;
                  }
                  iVar34 = iVar34 >> 5;
                  iVar24 = iVar24 + 0x20;
                  iVar30 = iVar34;
                  if (iVar34 < iVar42) {
                    iVar30 = iVar42;
                  }
                  if (iVar42 < iVar34) {
                    lVar21 = 0;
                    do {
                      uVar29 = puVar27[lVar40 + lVar21 + 1];
                      if (uVar29 != 0) {
                        uVar39 = (ulonglong)(iVar42 + (int)lVar21 + 1);
                        uVar36 = 0xffffffff;
                        goto LAB_14089f23d;
                      }
                      iVar24 = iVar24 + 0x20;
                      lVar21 = lVar21 + 1;
                    } while (iVar30 - lVar40 != lVar21);
                    uVar36 = 0xffffffff;
                    iVar42 = iVar30;
                  }
                  uVar39 = (ulonglong)(iVar42 + 1);
                  iVar42 = iVar33;
                }
                else {
LAB_14089f23d:
                  uVar32 = (ulonglong)(-uVar29 & uVar29);
                  uVar1 = uVar32 * 2 + 1;
                  lVar40 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                    }
                  }
                  iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                  if (iVar33 <= iVar42) {
                    iVar42 = iVar33;
                  }
                }
              } while (iVar42 != iVar15);
            }
LAB_14089f356:
            uVar32 = (ulonglong)*(uint *)(local_480 + 0x18);
            uVar36 = (uint)local_4b0 + 1;
          }
          lVar35 = lVar35 + 1;
          local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,uVar36);
        } while (lVar35 < (int)uVar32 && uVar36 < (uint)local_4a8);
LAB_14089f59a:
        uVar32 = (ulonglong)*(uint *)(local_480 + 0x18);
        lVar35 = local_480;
      }
      if (1 < (int)uVar32) {
        lVar35 = *(longlong *)(lVar35 + 0x10);
        memset(&local_408,0,0x2f0);
        local_418._8_8_ = uVar32 * 0x10 + lVar35 + -0x10;
        local_418._0_8_ = lVar35;
        fVar46 = logf((float)(int)uVar32);
        local_408 = CONCAT44(local_408._4_4_,(int)(longlong)(fVar46 + fVar46));
        puVar26 = (uint *)local_418;
        do {
          puVar27 = *(uint **)puVar26;
          puVar41 = *(uint **)(puVar26 + 2);
          uVar36 = puVar26[4];
          iVar15 = (int)((ulonglong)((longlong)puVar41 - (longlong)puVar27) >> 4);
          uVar32 = (ulonglong)(iVar15 + 1);
          if (uVar36 != 0) {
LAB_14089ffb5:
            local_4a0 = puVar27;
            local_488 = puVar26;
            if (8 < (int)(uint)uVar32) {
              uVar32 = (ulonglong)((uint)uVar32 >> 1);
              local_118 = *(longlong *)(puVar27 + uVar32 * 4);
              uStack_110 = *(undefined8 *)(puVar27 + uVar32 * 4 + 2);
              uVar18 = *(undefined8 *)(puVar27 + 2);
              *(undefined8 *)(puVar27 + uVar32 * 4) = *(undefined8 *)puVar27;
              *(undefined8 *)(puVar27 + uVar32 * 4 + 2) = uVar18;
              *(longlong *)puVar27 = local_118;
              *(undefined8 *)(puVar27 + 2) = uStack_110;
              puVar38 = puVar41 + 4;
              local_490 = (uint *)CONCAT44(local_490._4_4_,uVar36);
              puVar26 = puVar27;
              local_498 = puVar41;
              local_478 = puVar41;
              do {
                puVar17 = puVar26 + 4;
                if (puVar17 <= local_498) {
                  do {
                    puVar41 = puVar17;
                    plVar25 = *(longlong **)(puVar26 + 6);
                    lVar35 = (**(code **)(**(longlong **)(puVar27 + 2) + 0x10))();
                    lVar16 = (**(code **)(*plVar25 + 0x10))(plVar25);
                    iVar15 = *(int *)(lVar35 + 0x178);
                    local_4a8 = (uint *)(lVar35 + 0x160);
                    if (iVar15 == 0) {
                      uVar39 = 1;
                      uVar32 = 0;
                      iVar42 = 0;
                      iVar24 = 0;
                    }
                    else {
                      puVar26 = *(uint **)(lVar35 + 0x170);
                      if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                        puVar26 = local_4a8;
                      }
                      uVar36 = *puVar26;
                      if (uVar36 == 0) {
                        iVar42 = iVar15 + 0x1e;
                        if (-1 < iVar15 + -1) {
                          iVar42 = iVar15 + -1;
                        }
                        uVar32 = 0;
                        uVar39 = (ulonglong)(uint)(iVar42 >> 5);
                        if (iVar42 >> 5 < 1) {
                          uVar39 = uVar32;
                        }
                        iVar24 = 0;
                        do {
                          if (uVar39 == uVar32) goto LAB_1408a04b6;
                          iVar24 = iVar24 + 0x20;
                          uVar36 = puVar26[uVar32 + 1];
                          uVar32 = uVar32 + 1;
                        } while (uVar36 == 0);
                      }
                      else {
                        uVar32 = 0;
                        iVar24 = 0;
                      }
                      uVar39 = (ulonglong)(-uVar36 & uVar36);
                      uVar1 = uVar39 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      if (iVar15 <= iVar42) {
                        iVar42 = iVar15;
                      }
                    }
                    if (iVar42 == iVar15) {
LAB_1408a04b6:
                      bVar44 = false;
                    }
                    else {
                      uVar36 = 0xffffffff;
                      do {
                        lVar40 = *(longlong *)
                                  (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar42 * 0x20);
                        if ((lVar40 != 0) && (bVar44 = true, *(char *)(lVar40 + 0x538) != '\0'))
                        break;
                        puVar26 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar26 = local_4a8;
                        }
                        uVar36 = uVar36 & ~(uint)uVar39;
                        iVar42 = (int)uVar32;
                        lVar40 = (longlong)iVar42;
                        uVar29 = puVar26[lVar40] & uVar36;
                        if (uVar29 == 0) {
                          iVar33 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar33 = iVar15 + -1;
                          }
                          iVar33 = iVar33 >> 5;
                          iVar34 = iVar33;
                          if (iVar33 < iVar42) {
                            iVar34 = iVar42;
                          }
                          if (iVar33 <= iVar42) goto LAB_1408a04b6;
                          lVar21 = 0;
                          while( true ) {
                            iVar24 = iVar24 + 0x20;
                            uVar29 = puVar26[lVar40 + lVar21 + 1];
                            if (uVar29 != 0) break;
                            lVar21 = lVar21 + 1;
                            bVar44 = false;
                            if (iVar34 - lVar40 == lVar21) goto LAB_1408a0193;
                          }
                          uVar32 = (ulonglong)(iVar42 + (int)lVar21 + 1);
                          uVar36 = 0xffffffff;
                        }
                        uVar39 = (ulonglong)(-uVar29 & uVar29);
                        uVar1 = uVar39 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                        bVar44 = false;
                      } while (iVar42 < iVar15);
                    }
LAB_1408a0193:
                    iVar42 = *(int *)(lVar16 + 0x178);
                    puVar17 = puVar41;
                    puVar27 = local_4a0;
                    if (iVar42 == 0) {
                      uVar32 = 1;
                      uVar39 = 0;
                      iVar24 = 0;
                      iVar33 = 0;
                    }
                    else {
                      puVar26 = *(uint **)(lVar16 + 0x170);
                      if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                        puVar26 = (uint *)(lVar16 + 0x160);
                      }
                      uVar36 = *puVar26;
                      if (uVar36 == 0) {
                        iVar24 = iVar42 + 0x1e;
                        if (-1 < iVar42 + -1) {
                          iVar24 = iVar42 + -1;
                        }
                        uVar39 = 0;
                        uVar32 = (ulonglong)(uint)(iVar24 >> 5);
                        if (iVar24 >> 5 < 1) {
                          uVar32 = uVar39;
                        }
                        iVar33 = 0;
                        do {
                          if (uVar32 == uVar39) goto LAB_1408a02eb;
                          iVar33 = iVar33 + 0x20;
                          uVar36 = puVar26[uVar39 + 1];
                          uVar39 = uVar39 + 1;
                        } while (uVar36 == 0);
                      }
                      else {
                        uVar39 = 0;
                        iVar33 = 0;
                      }
                      uVar32 = (ulonglong)(-uVar36 & uVar36);
                      uVar1 = uVar32 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      if (iVar42 <= iVar24) {
                        iVar24 = iVar42;
                      }
                    }
                    if (iVar24 != iVar42) {
                      uVar36 = 0xffffffff;
                      do {
                        lVar40 = *(longlong *)
                                  (*(longlong *)(lVar16 + 0x150) + 8 + (longlong)iVar24 * 0x20);
                        if ((lVar40 != 0) && (*(char *)(lVar40 + 0x538) != '\0')) {
                          if (bVar44) goto LAB_1408a0472;
                          goto LAB_1408a02f4;
                        }
                        puVar26 = *(uint **)(lVar16 + 0x170);
                        if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                          puVar26 = (uint *)(lVar16 + 0x160);
                        }
                        uVar36 = uVar36 & ~(uint)uVar32;
                        iVar24 = (int)uVar39;
                        lVar40 = (longlong)iVar24;
                        uVar29 = puVar26[lVar40] & uVar36;
                        if (uVar29 == 0) {
                          iVar34 = iVar42 + 0x1e;
                          if (-1 < iVar42 + -1) {
                            iVar34 = iVar42 + -1;
                          }
                          iVar34 = iVar34 >> 5;
                          iVar30 = iVar34;
                          if (iVar34 < iVar24) {
                            iVar30 = iVar24;
                          }
                          if (iVar34 <= iVar24) break;
                          lVar21 = 0;
                          while( true ) {
                            iVar33 = iVar33 + 0x20;
                            uVar29 = puVar26[lVar40 + lVar21 + 1];
                            if (uVar29 != 0) break;
                            lVar21 = lVar21 + 1;
                            if (iVar30 - lVar40 == lVar21) goto LAB_1408a02eb;
                          }
                          uVar39 = (ulonglong)(iVar24 + (int)lVar21 + 1);
                          uVar36 = 0xffffffff;
                        }
                        uVar32 = (ulonglong)(-uVar29 & uVar29);
                        uVar1 = uVar32 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      } while (iVar24 < iVar42);
                    }
LAB_1408a02eb:
                    if (bVar44) {
LAB_1408a02f4:
                      if (iVar15 == 0) {
                        uVar39 = 1;
                        uVar32 = 0;
                        iVar42 = 0;
                        iVar24 = 0;
                      }
                      else {
                        puVar26 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar26 = local_4a8;
                        }
                        uVar36 = *puVar26;
                        if (uVar36 == 0) {
                          iVar42 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar42 = iVar15 + -1;
                          }
                          uVar32 = 0;
                          uVar39 = (ulonglong)(uint)(iVar42 >> 5);
                          if (iVar42 >> 5 < 1) {
                            uVar39 = uVar32;
                          }
                          iVar24 = 0;
                          do {
                            if (uVar39 == uVar32) goto LAB_1408a0489;
                            iVar24 = iVar24 + 0x20;
                            uVar36 = puVar26[uVar32 + 1];
                            uVar32 = uVar32 + 1;
                          } while (uVar36 == 0);
                        }
                        else {
                          uVar32 = 0;
                          iVar24 = 0;
                        }
                        uVar39 = (ulonglong)(-uVar36 & uVar36);
                        uVar1 = uVar39 * 2 + 1;
                        lVar16 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        iVar42 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        if (iVar15 <= iVar42) {
                          iVar42 = iVar15;
                        }
                      }
                      if (iVar42 != iVar15) {
                        uVar36 = 0xffffffff;
                        do {
                          lVar16 = *(longlong *)
                                    (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar42 * 0x20);
                          if ((lVar16 != 0) && (*(char *)(lVar16 + 0x538) != '\0'))
                          goto LAB_1408a04ee;
                          puVar26 = *(uint **)(lVar35 + 0x170);
                          if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                            puVar26 = local_4a8;
                          }
                          uVar36 = uVar36 & ~(uint)uVar39;
                          iVar42 = (int)uVar32;
                          lVar16 = (longlong)iVar42;
                          uVar29 = puVar26[lVar16] & uVar36;
                          if (uVar29 == 0) {
                            iVar33 = iVar15 + 0x1e;
                            if (-1 < iVar15 + -1) {
                              iVar33 = iVar15 + -1;
                            }
                            iVar33 = iVar33 >> 5;
                            iVar34 = iVar33;
                            if (iVar33 < iVar42) {
                              iVar34 = iVar42;
                            }
                            if (iVar33 <= iVar42) break;
                            lVar40 = 0;
                            while( true ) {
                              iVar24 = iVar24 + 0x20;
                              uVar29 = puVar26[lVar16 + lVar40 + 1];
                              if (uVar29 != 0) break;
                              lVar40 = lVar40 + 1;
                              if (iVar34 - lVar16 == lVar40) goto LAB_1408a0489;
                            }
                            uVar32 = (ulonglong)(iVar42 + (int)lVar40 + 1);
                            uVar36 = 0xffffffff;
                          }
                          uVar39 = (ulonglong)(-uVar29 & uVar29);
                          uVar1 = uVar39 * 2 + 1;
                          lVar16 = 0x3f;
                          if (uVar1 != 0) {
                            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                            }
                          }
                          iVar42 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        } while (iVar42 < iVar15);
                      }
                    }
                    else {
LAB_1408a0472:
                      if (*(float *)(lVar35 + 0x148) <= *(float *)(lVar16 + 0x148) &&
                          *(float *)(lVar16 + 0x148) != *(float *)(lVar35 + 0x148)) break;
                    }
LAB_1408a0489:
                    puVar17 = puVar41 + 4;
                    puVar26 = puVar41;
                    local_4b0 = puVar41;
                  } while (puVar17 <= local_498);
                }
LAB_1408a04ee:
                do {
                  local_4b0 = puVar17;
                  puVar41 = puVar38;
                  puVar38 = puVar41 + -4;
                  if (puVar38 <= puVar27) break;
                  plVar25 = *(longlong **)(puVar27 + 2);
                  lVar35 = (**(code **)(**(longlong **)(puVar41 + -2) + 0x10))();
                  lVar16 = (**(code **)(*plVar25 + 0x10))();
                  iVar15 = *(int *)(lVar35 + 0x178);
                  if (iVar15 == 0) {
                    uVar39 = 1;
                    uVar32 = 0;
                    iVar42 = 0;
                    iVar24 = 0;
                  }
                  else {
                    puVar26 = *(uint **)(lVar35 + 0x170);
                    if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                      puVar26 = (uint *)(lVar35 + 0x160);
                    }
                    uVar36 = *puVar26;
                    if (uVar36 == 0) {
                      iVar42 = iVar15 + 0x1e;
                      if (-1 < iVar15 + -1) {
                        iVar42 = iVar15 + -1;
                      }
                      uVar32 = 0;
                      uVar39 = (ulonglong)(uint)(iVar42 >> 5);
                      if (iVar42 >> 5 < 1) {
                        uVar39 = uVar32;
                      }
                      iVar24 = 0;
                      do {
                        if (uVar39 == uVar32) goto LAB_1408a0821;
                        iVar24 = iVar24 + 0x20;
                        uVar36 = puVar26[uVar32 + 1];
                        uVar32 = uVar32 + 1;
                      } while (uVar36 == 0);
                    }
                    else {
                      uVar32 = 0;
                      iVar24 = 0;
                    }
                    uVar39 = (ulonglong)(-uVar36 & uVar36);
                    uVar1 = uVar39 * 2 + 1;
                    lVar40 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                      }
                    }
                    iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    if (iVar15 <= iVar42) {
                      iVar42 = iVar15;
                    }
                  }
                  if (iVar42 == iVar15) {
LAB_1408a0821:
                    bVar44 = false;
                  }
                  else {
                    uVar36 = 0xffffffff;
                    do {
                      lVar40 = *(longlong *)
                                (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar42 * 0x20);
                      if ((lVar40 != 0) && (bVar44 = true, *(char *)(lVar40 + 0x538) != '\0'))
                      break;
                      puVar26 = *(uint **)(lVar35 + 0x170);
                      if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                        puVar26 = (uint *)(lVar35 + 0x160);
                      }
                      uVar36 = uVar36 & ~(uint)uVar39;
                      iVar42 = (int)uVar32;
                      lVar40 = (longlong)iVar42;
                      uVar29 = puVar26[lVar40] & uVar36;
                      if (uVar29 == 0) {
                        iVar33 = iVar15 + 0x1e;
                        if (-1 < iVar15 + -1) {
                          iVar33 = iVar15 + -1;
                        }
                        iVar33 = iVar33 >> 5;
                        iVar34 = iVar33;
                        if (iVar33 < iVar42) {
                          iVar34 = iVar42;
                        }
                        if (iVar33 <= iVar42) goto LAB_1408a0821;
                        lVar21 = 0;
                        while( true ) {
                          iVar24 = iVar24 + 0x20;
                          uVar29 = puVar26[lVar40 + lVar21 + 1];
                          if (uVar29 != 0) break;
                          lVar21 = lVar21 + 1;
                          bVar44 = false;
                          if (iVar34 - lVar40 == lVar21) goto LAB_1408a066b;
                        }
                        uVar32 = (ulonglong)(iVar42 + (int)lVar21 + 1);
                        uVar36 = 0xffffffff;
                      }
                      uVar39 = (ulonglong)(-uVar29 & uVar29);
                      uVar1 = uVar39 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      bVar44 = false;
                    } while (iVar42 < iVar15);
                  }
LAB_1408a066b:
                  iVar15 = *(int *)(lVar16 + 0x178);
                  if (iVar15 == 0) {
                    uVar32 = 1;
                    uVar39 = 0;
                    iVar42 = 0;
                    iVar24 = 0;
                  }
                  else {
                    puVar26 = *(uint **)(lVar16 + 0x170);
                    if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                      puVar26 = (uint *)(lVar16 + 0x160);
                    }
                    uVar36 = *puVar26;
                    if (uVar36 == 0) {
                      iVar42 = iVar15 + 0x1e;
                      if (-1 < iVar15 + -1) {
                        iVar42 = iVar15 + -1;
                      }
                      uVar39 = 0;
                      uVar32 = (ulonglong)(uint)(iVar42 >> 5);
                      if (iVar42 >> 5 < 1) {
                        uVar32 = uVar39;
                      }
                      iVar24 = 0;
                      do {
                        if (uVar32 == uVar39) goto LAB_1408a07c2;
                        iVar24 = iVar24 + 0x20;
                        uVar36 = puVar26[uVar39 + 1];
                        uVar39 = uVar39 + 1;
                      } while (uVar36 == 0);
                    }
                    else {
                      uVar39 = 0;
                      iVar24 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar36 & uVar36);
                    uVar1 = uVar32 * 2 + 1;
                    lVar40 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                      }
                    }
                    iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    if (iVar15 <= iVar42) {
                      iVar42 = iVar15;
                    }
                  }
                  if (iVar42 != iVar15) {
                    uVar36 = 0xffffffff;
                    do {
                      lVar40 = *(longlong *)
                                (*(longlong *)(lVar16 + 0x150) + 8 + (longlong)iVar42 * 0x20);
                      if ((lVar40 != 0) && (*(char *)(lVar40 + 0x538) != '\0')) {
                        if (bVar44) goto LAB_1408a07fe;
                        goto LAB_1408a07c6;
                      }
                      puVar26 = *(uint **)(lVar16 + 0x170);
                      if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                        puVar26 = (uint *)(lVar16 + 0x160);
                      }
                      uVar36 = uVar36 & ~(uint)uVar32;
                      iVar42 = (int)uVar39;
                      lVar40 = (longlong)iVar42;
                      uVar29 = puVar26[lVar40] & uVar36;
                      if (uVar29 == 0) {
                        iVar33 = iVar15 + 0x1e;
                        if (-1 < iVar15 + -1) {
                          iVar33 = iVar15 + -1;
                        }
                        iVar33 = iVar33 >> 5;
                        iVar34 = iVar33;
                        if (iVar33 < iVar42) {
                          iVar34 = iVar42;
                        }
                        if (iVar33 <= iVar42) break;
                        lVar21 = 0;
                        while( true ) {
                          iVar24 = iVar24 + 0x20;
                          uVar29 = puVar26[lVar40 + lVar21 + 1];
                          if (uVar29 != 0) break;
                          lVar21 = lVar21 + 1;
                          if (iVar34 - lVar40 == lVar21) goto LAB_1408a07c2;
                        }
                        uVar39 = (ulonglong)(iVar42 + (int)lVar21 + 1);
                        uVar36 = 0xffffffff;
                      }
                      uVar32 = (ulonglong)(-uVar29 & uVar29);
                      uVar1 = uVar32 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    } while (iVar42 < iVar15);
                  }
LAB_1408a07c2:
                  if (bVar44) {
LAB_1408a07c6:
                    cVar11 = FUN_145753b2a(lVar35);
                    puVar27 = local_4a0;
                    puVar17 = local_4b0;
                    if (cVar11 != '\0') break;
                    goto LAB_1408a04ee;
                  }
LAB_1408a07fe:
                  puVar27 = local_4a0;
                  puVar17 = local_4b0;
                } while (*(float *)(lVar16 + 0x148) < *(float *)(lVar35 + 0x148) ||
                         *(float *)(lVar16 + 0x148) == *(float *)(lVar35 + 0x148));
                if (puVar38 < local_4b0) goto code_r0x0001408a0854;
                local_118 = *(longlong *)local_4b0;
                uStack_110 = *(undefined8 *)(local_4b0 + 2);
                uVar18 = *(undefined8 *)(puVar41 + -2);
                *(undefined8 *)local_4b0 = *(undefined8 *)puVar38;
                *(undefined8 *)(local_4b0 + 2) = uVar18;
                *(longlong *)puVar38 = local_118;
                *(undefined8 *)(puVar41 + -2) = uStack_110;
                puVar26 = local_4b0;
              } while( true );
            }
            if (puVar27 < puVar41) {
              local_490 = puVar27 + 4;
              do {
                puVar26 = local_490;
                puVar27 = local_4a0;
                puVar38 = local_4a0;
                if (local_490 <= puVar41) {
                  do {
                    local_498 = puVar41;
                    puVar17 = puVar38;
                    plVar25 = *(longlong **)(puVar27 + 6);
                    local_4a8 = puVar26;
                    lVar35 = (**(code **)(**(longlong **)(puVar17 + 2) + 0x10))();
                    lVar16 = (**(code **)(*plVar25 + 0x10))(plVar25);
                    iVar15 = *(int *)(lVar35 + 0x178);
                    puVar26 = (uint *)(lVar35 + 0x160);
                    if (iVar15 == 0) {
                      uVar39 = 1;
                      uVar32 = 0;
                      iVar42 = 0;
                      iVar24 = 0;
                    }
                    else {
                      puVar41 = *(uint **)(lVar35 + 0x170);
                      if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                        puVar41 = puVar26;
                      }
                      uVar36 = *puVar41;
                      if (uVar36 == 0) {
                        iVar42 = iVar15 + 0x1e;
                        if (-1 < iVar15 + -1) {
                          iVar42 = iVar15 + -1;
                        }
                        uVar32 = 0;
                        uVar39 = (ulonglong)(uint)(iVar42 >> 5);
                        if (iVar42 >> 5 < 1) {
                          uVar39 = uVar32;
                        }
                        iVar24 = 0;
                        do {
                          if (uVar39 == uVar32) goto LAB_1408a1833;
                          iVar24 = iVar24 + 0x20;
                          uVar36 = puVar41[uVar32 + 1];
                          uVar32 = uVar32 + 1;
                        } while (uVar36 == 0);
                      }
                      else {
                        uVar32 = 0;
                        iVar24 = 0;
                      }
                      uVar39 = (ulonglong)(-uVar36 & uVar36);
                      uVar1 = uVar39 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      if (iVar15 <= iVar42) {
                        iVar42 = iVar15;
                      }
                    }
                    if (iVar42 == iVar15) {
LAB_1408a1833:
                      bVar44 = false;
                    }
                    else {
                      uVar36 = 0xffffffff;
                      do {
                        lVar40 = *(longlong *)
                                  (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar42 * 0x20);
                        if ((lVar40 != 0) && (bVar44 = true, *(char *)(lVar40 + 0x538) != '\0'))
                        break;
                        puVar41 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar41 = puVar26;
                        }
                        uVar36 = uVar36 & ~(uint)uVar39;
                        iVar42 = (int)uVar32;
                        lVar40 = (longlong)iVar42;
                        uVar29 = puVar41[lVar40] & uVar36;
                        if (uVar29 == 0) {
                          iVar33 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar33 = iVar15 + -1;
                          }
                          iVar33 = iVar33 >> 5;
                          iVar34 = iVar33;
                          if (iVar33 < iVar42) {
                            iVar34 = iVar42;
                          }
                          if (iVar33 <= iVar42) goto LAB_1408a1833;
                          lVar21 = 0;
                          while( true ) {
                            iVar24 = iVar24 + 0x20;
                            uVar29 = puVar41[lVar40 + lVar21 + 1];
                            if (uVar29 != 0) break;
                            lVar21 = lVar21 + 1;
                            bVar44 = false;
                            if (iVar34 - lVar40 == lVar21) goto LAB_1408a1512;
                          }
                          uVar32 = (ulonglong)(iVar42 + (int)lVar21 + 1);
                          uVar36 = 0xffffffff;
                        }
                        uVar39 = (ulonglong)(-uVar29 & uVar29);
                        uVar1 = uVar39 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar42 = (iVar24 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                        bVar44 = false;
                      } while (iVar42 < iVar15);
                    }
LAB_1408a1512:
                    iVar42 = *(int *)(lVar16 + 0x178);
                    puVar38 = puVar17;
                    if (iVar42 == 0) {
                      uVar32 = 1;
                      uVar39 = 0;
                      iVar24 = 0;
                      iVar33 = 0;
                    }
                    else {
                      puVar41 = *(uint **)(lVar16 + 0x170);
                      if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                        puVar41 = (uint *)(lVar16 + 0x160);
                      }
                      uVar36 = *puVar41;
                      if (uVar36 == 0) {
                        iVar24 = iVar42 + 0x1e;
                        if (-1 < iVar42 + -1) {
                          iVar24 = iVar42 + -1;
                        }
                        uVar39 = 0;
                        uVar32 = (ulonglong)(uint)(iVar24 >> 5);
                        if (iVar24 >> 5 < 1) {
                          uVar32 = uVar39;
                        }
                        iVar33 = 0;
                        do {
                          if (uVar32 == uVar39) goto LAB_1408a1662;
                          iVar33 = iVar33 + 0x20;
                          uVar36 = puVar41[uVar39 + 1];
                          uVar39 = uVar39 + 1;
                        } while (uVar36 == 0);
                      }
                      else {
                        uVar39 = 0;
                        iVar33 = 0;
                      }
                      uVar32 = (ulonglong)(-uVar36 & uVar36);
                      uVar1 = uVar32 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      if (iVar42 <= iVar24) {
                        iVar24 = iVar42;
                      }
                    }
                    if (iVar24 != iVar42) {
                      uVar36 = 0xffffffff;
                      do {
                        lVar40 = *(longlong *)
                                  (*(longlong *)(lVar16 + 0x150) + 8 + (longlong)iVar24 * 0x20);
                        if ((lVar40 != 0) && (*(char *)(lVar40 + 0x538) != '\0')) {
                          if (bVar44) goto LAB_1408a17ed;
                          goto LAB_1408a166b;
                        }
                        puVar41 = *(uint **)(lVar16 + 0x170);
                        if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                          puVar41 = (uint *)(lVar16 + 0x160);
                        }
                        uVar36 = uVar36 & ~(uint)uVar32;
                        iVar24 = (int)uVar39;
                        lVar40 = (longlong)iVar24;
                        uVar29 = puVar41[lVar40] & uVar36;
                        if (uVar29 == 0) {
                          iVar34 = iVar42 + 0x1e;
                          if (-1 < iVar42 + -1) {
                            iVar34 = iVar42 + -1;
                          }
                          iVar34 = iVar34 >> 5;
                          iVar30 = iVar34;
                          if (iVar34 < iVar24) {
                            iVar30 = iVar24;
                          }
                          if (iVar34 <= iVar24) break;
                          lVar21 = 0;
                          while( true ) {
                            iVar33 = iVar33 + 0x20;
                            uVar29 = puVar41[lVar40 + lVar21 + 1];
                            if (uVar29 != 0) break;
                            lVar21 = lVar21 + 1;
                            if (iVar30 - lVar40 == lVar21) goto LAB_1408a1662;
                          }
                          uVar39 = (ulonglong)(iVar24 + (int)lVar21 + 1);
                          uVar36 = 0xffffffff;
                        }
                        uVar32 = (ulonglong)(-uVar29 & uVar29);
                        uVar1 = uVar32 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      } while (iVar24 < iVar42);
                    }
LAB_1408a1662:
                    if (bVar44) {
LAB_1408a166b:
                      if (iVar15 == 0) {
                        uVar39 = 1;
                        uVar32 = 0;
                        iVar42 = 0;
                        iVar24 = 0;
                      }
                      else {
                        puVar41 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar41 = puVar26;
                        }
                        uVar36 = *puVar41;
                        if (uVar36 == 0) {
                          iVar42 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar42 = iVar15 + -1;
                          }
                          uVar32 = 0;
                          uVar39 = (ulonglong)(uint)(iVar42 >> 5);
                          if (iVar42 >> 5 < 1) {
                            uVar39 = uVar32;
                          }
                          iVar24 = 0;
                          do {
                            if (uVar39 == uVar32) goto LAB_1408a180c;
                            iVar24 = iVar24 + 0x20;
                            uVar36 = puVar41[uVar32 + 1];
                            uVar32 = uVar32 + 1;
                          } while (uVar36 == 0);
                        }
                        else {
                          uVar32 = 0;
                          iVar24 = 0;
                        }
                        uVar39 = (ulonglong)(-uVar36 & uVar36);
                        uVar1 = uVar39 * 2 + 1;
                        lVar16 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        iVar42 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        if (iVar15 <= iVar42) {
                          iVar42 = iVar15;
                        }
                      }
                      if (iVar42 != iVar15) {
                        uVar36 = 0xffffffff;
                        do {
                          lVar16 = *(longlong *)
                                    (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar42 * 0x20);
                          if ((lVar16 != 0) && (*(char *)(lVar16 + 0x538) != '\0'))
                          goto LAB_1408a1809;
                          puVar41 = *(uint **)(lVar35 + 0x170);
                          if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                            puVar41 = puVar26;
                          }
                          uVar36 = uVar36 & ~(uint)uVar39;
                          iVar42 = (int)uVar32;
                          lVar16 = (longlong)iVar42;
                          uVar29 = puVar41[lVar16] & uVar36;
                          if (uVar29 == 0) {
                            iVar33 = iVar15 + 0x1e;
                            if (-1 < iVar15 + -1) {
                              iVar33 = iVar15 + -1;
                            }
                            iVar33 = iVar33 >> 5;
                            iVar34 = iVar33;
                            if (iVar33 < iVar42) {
                              iVar34 = iVar42;
                            }
                            if (iVar33 <= iVar42) break;
                            lVar40 = 0;
                            while( true ) {
                              iVar24 = iVar24 + 0x20;
                              uVar29 = puVar41[lVar16 + lVar40 + 1];
                              if (uVar29 != 0) break;
                              lVar40 = lVar40 + 1;
                              if (iVar34 - lVar16 == lVar40) goto LAB_1408a180c;
                            }
                            uVar32 = (ulonglong)(iVar42 + (int)lVar40 + 1);
                            uVar36 = 0xffffffff;
                          }
                          uVar39 = (ulonglong)(-uVar29 & uVar29);
                          uVar1 = uVar39 * 2 + 1;
                          lVar16 = 0x3f;
                          if (uVar1 != 0) {
                            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                            }
                          }
                          iVar42 = (iVar24 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        } while (iVar42 < iVar15);
                      }
                    }
                    else {
LAB_1408a17ed:
                      if (*(float *)(lVar35 + 0x148) <= *(float *)(lVar16 + 0x148) &&
                          *(float *)(lVar16 + 0x148) != *(float *)(lVar35 + 0x148)) {
LAB_1408a1809:
                        puVar38 = local_4a8;
                      }
                    }
LAB_1408a180c:
                    puVar26 = local_4a8 + 4;
                    puVar41 = local_498;
                    puVar27 = local_4a8;
                    local_4b0 = puVar17;
                  } while (local_4a8 + 4 <= local_498);
                }
                local_118 = *(longlong *)puVar38;
                uStack_110 = *(undefined8 *)(puVar38 + 2);
                lVar35 = local_118;
                uVar20 = uStack_110;
                uVar18 = *(undefined8 *)(puVar41 + 2);
                *(undefined8 *)puVar38 = *(undefined8 *)puVar41;
                *(undefined8 *)(puVar38 + 2) = uVar18;
                local_118._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
                uStack_110._4_4_ = (uint)((ulonglong)uStack_110 >> 0x20);
                *puVar41 = (uint)local_118;
                puVar41[1] = local_118._4_4_;
                puVar41[2] = (uint)uStack_110;
                puVar41[3] = uStack_110._4_4_;
                puVar41 = puVar41 + -4;
                puVar26 = local_488;
                local_118 = lVar35;
                uStack_110 = uVar20;
              } while (local_4a0 < puVar41);
            }
            goto LAB_1408a189a;
          }
LAB_1408a19b7:
          iVar42 = (int)uVar32;
          local_4b0 = puVar27;
          local_488 = puVar26;
          if (iVar42 != 0) {
            uVar36 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
            do {
              puVar26 = (uint *)(ulonglong)uVar36;
              puVar38 = (uint *)(ulonglong)uVar36;
              uVar29 = uVar36;
              puVar41 = local_4b0;
              puVar27 = local_4a8;
              while (local_4a8 = puVar38, uVar43 = uVar36 * 2 + 1, local_4b0 = puVar41,
                    (int)uVar43 < iVar42) {
                uVar36 = uVar36 * 2 + 2;
                if ((int)uVar36 < iVar42) {
                  local_118 = *(longlong *)(puVar41 + (longlong)(int)uVar43 * 4);
                  uStack_110 = *(undefined8 *)(puVar41 + (longlong)(int)uVar43 * 4 + 2);
                  local_438 = *(double *)(puVar41 + (longlong)(int)uVar36 * 4);
                  dStack_430 = *(double *)((longlong)(puVar41 + (longlong)(int)uVar36 * 4) + 8);
                  cVar11 = FUN_1408a37b0(&local_438,&local_118);
                  puVar38 = (uint *)(ulonglong)uVar43;
                  if (cVar11 == '\0') {
                    puVar38 = (uint *)(ulonglong)uVar36;
                  }
                }
                else {
                  puVar38 = (uint *)(ulonglong)uVar43;
                }
                uVar36 = (uint)puVar38;
                local_118 = *(longlong *)(puVar41 + (longlong)(int)uVar36 * 4);
                uStack_110 = *(undefined8 *)(puVar41 + (longlong)(int)uVar36 * 4 + 2);
                local_438 = *(double *)(puVar41 + (longlong)(int)puVar26 * 4);
                dStack_430 = *(double *)((longlong)(puVar41 + (longlong)(int)puVar26 * 4) + 8);
                cVar11 = FUN_1408a37b0(&local_438);
                uVar29 = (uint)local_4a8;
                puVar27 = local_4a8;
                if (cVar11 == '\0') break;
                puVar26 = local_4b0 + (longlong)(int)puVar26 * 4;
                puVar41 = local_4b0 + (longlong)(int)uVar36 * 4;
                local_118 = *(longlong *)puVar26;
                uStack_110 = *(undefined8 *)(puVar26 + 2);
                lVar35 = local_118;
                uVar20 = uStack_110;
                uVar18 = *(undefined8 *)(puVar41 + 2);
                *(undefined8 *)puVar26 = *(undefined8 *)puVar41;
                *(undefined8 *)(puVar26 + 2) = uVar18;
                local_118._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
                uStack_110._4_4_ = (uint)((ulonglong)uStack_110 >> 0x20);
                *puVar41 = (uint)local_118;
                puVar41[1] = local_118._4_4_;
                puVar41[2] = (uint)uStack_110;
                puVar41[3] = uStack_110._4_4_;
                puVar26 = puVar38;
                puVar38 = local_4a8;
                puVar41 = local_4b0;
                local_118 = lVar35;
                uStack_110 = uVar20;
              }
              local_4a8 = puVar27;
              uVar36 = uVar29 - 1;
            } while (uVar29 != 0);
            puVar26 = local_488;
            if (1 < iVar42) {
              puVar41 = (uint *)(uVar32 - 1);
              local_118 = *(longlong *)local_4b0;
              uStack_110 = *(undefined8 *)(local_4b0 + 2);
              lVar35 = local_118;
              uVar20 = uStack_110;
              uVar18 = *(undefined8 *)(local_4b0 + (longlong)puVar41 * 4 + 2);
              *(undefined8 *)local_4b0 = *(undefined8 *)(local_4b0 + (longlong)puVar41 * 4);
              *(undefined8 *)(local_4b0 + 2) = uVar18;
              local_118._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
              uStack_110._4_4_ = (uint)((ulonglong)uStack_110 >> 0x20);
              puVar27 = local_4b0 + (longlong)puVar41 * 4;
              *puVar27 = (uint)local_118;
              puVar27[1] = local_118._4_4_;
              puVar27[2] = (uint)uStack_110;
              puVar27[3] = uStack_110._4_4_;
              local_118 = lVar35;
              uStack_110 = uVar20;
              if (iVar42 != 2) {
                do {
                  iVar15 = 0;
                  puVar26 = (uint *)&DAT_00000001;
                  uVar32 = 0;
                  local_4a0 = puVar41;
                  do {
                    iVar42 = (int)uVar32;
                    local_498 = (uint *)(ulonglong)(iVar15 + 2U);
                    puVar41 = (uint *)(longlong)(int)(iVar15 + 2U);
                    puVar27 = (uint *)(longlong)(int)puVar26;
                    if ((longlong)puVar41 < (longlong)local_4a0) {
                      plVar25 = *(longlong **)(local_4b0 + (longlong)puVar27 * 4 + 2);
                      lVar35 = (**(code **)(**(longlong **)(local_4b0 + (longlong)puVar41 * 4 + 2) +
                                           0x10))();
                      lVar16 = (**(code **)(*plVar25 + 0x10))(plVar25);
                      iVar15 = *(int *)(lVar35 + 0x178);
                      local_468 = (uint *)(lVar35 + 0x160);
                      local_490 = (uint *)CONCAT44(local_490._4_4_,iVar42);
                      if (iVar15 == 0) {
                        uVar32 = 1;
                        uVar39 = 0;
                        iVar24 = 0;
                        iVar33 = 0;
                      }
                      else {
                        puVar38 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar38 = local_468;
                        }
                        uVar36 = *puVar38;
                        if (uVar36 == 0) {
                          iVar24 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar24 = iVar15 + -1;
                          }
                          uVar39 = 0;
                          uVar32 = (ulonglong)(uint)(iVar24 >> 5);
                          if (iVar24 >> 5 < 1) {
                            uVar32 = uVar39;
                          }
                          iVar33 = 0;
                          do {
                            if (uVar32 == uVar39) goto LAB_1408a12d5;
                            iVar33 = iVar33 + 0x20;
                            uVar36 = puVar38[uVar39 + 1];
                            uVar39 = uVar39 + 1;
                          } while (uVar36 == 0);
                        }
                        else {
                          uVar39 = 0;
                          iVar33 = 0;
                        }
                        uVar32 = (ulonglong)(-uVar36 & uVar36);
                        uVar1 = uVar32 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                        if (iVar15 <= iVar24) {
                          iVar24 = iVar15;
                        }
                      }
                      if (iVar24 == iVar15) {
LAB_1408a12d5:
                        bVar44 = false;
                      }
                      else {
                        uVar36 = 0xffffffff;
                        do {
                          lVar40 = *(longlong *)
                                    (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar24 * 0x20);
                          if ((lVar40 != 0) && (bVar44 = true, *(char *)(lVar40 + 0x538) != '\0'))
                          break;
                          puVar38 = *(uint **)(lVar35 + 0x170);
                          if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                            puVar38 = local_468;
                          }
                          uVar36 = uVar36 & ~(uint)uVar32;
                          iVar24 = (int)uVar39;
                          lVar40 = (longlong)iVar24;
                          uVar29 = puVar38[lVar40] & uVar36;
                          if (uVar29 == 0) {
                            iVar34 = iVar15 + 0x1e;
                            if (-1 < iVar15 + -1) {
                              iVar34 = iVar15 + -1;
                            }
                            iVar34 = iVar34 >> 5;
                            iVar30 = iVar34;
                            if (iVar34 < iVar24) {
                              iVar30 = iVar24;
                            }
                            if (iVar34 <= iVar24) goto LAB_1408a12d5;
                            lVar21 = 0;
                            while( true ) {
                              iVar33 = iVar33 + 0x20;
                              uVar29 = puVar38[lVar40 + lVar21 + 1];
                              if (uVar29 != 0) break;
                              lVar21 = lVar21 + 1;
                              bVar44 = false;
                              if (iVar30 - lVar40 == lVar21) goto LAB_1408a0aad;
                            }
                            uVar39 = (ulonglong)(iVar24 + (int)lVar21 + 1);
                            uVar36 = 0xffffffff;
                          }
                          uVar32 = (ulonglong)(-uVar29 & uVar29);
                          uVar1 = uVar32 * 2 + 1;
                          lVar40 = 0x3f;
                          if (uVar1 != 0) {
                            for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                            }
                          }
                          iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                          bVar44 = false;
                        } while (iVar24 < iVar15);
                      }
LAB_1408a0aad:
                      iVar24 = *(int *)(lVar16 + 0x178);
                      local_4a8 = puVar41;
                      local_478 = puVar27;
                      if (iVar24 == 0) {
                        uVar39 = 1;
                        uVar32 = 0;
                        iVar33 = 0;
                        iVar34 = 0;
                      }
                      else {
                        puVar38 = *(uint **)(lVar16 + 0x170);
                        if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                          puVar38 = (uint *)(lVar16 + 0x160);
                        }
                        uVar36 = *puVar38;
                        if (uVar36 == 0) {
                          iVar33 = iVar24 + 0x1e;
                          if (-1 < iVar24 + -1) {
                            iVar33 = iVar24 + -1;
                          }
                          uVar32 = 0;
                          uVar39 = (ulonglong)(uint)(iVar33 >> 5);
                          if (iVar33 >> 5 < 1) {
                            uVar39 = uVar32;
                          }
                          iVar34 = 0;
                          do {
                            if (uVar39 == uVar32) goto LAB_1408a0c0b;
                            iVar34 = iVar34 + 0x20;
                            uVar36 = puVar38[uVar32 + 1];
                            uVar32 = uVar32 + 1;
                          } while (uVar36 == 0);
                        }
                        else {
                          uVar32 = 0;
                          iVar34 = 0;
                        }
                        uVar39 = (ulonglong)(-uVar36 & uVar36);
                        uVar1 = uVar39 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar33 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                        if (iVar24 <= iVar33) {
                          iVar33 = iVar24;
                        }
                      }
                      if (iVar33 != iVar24) {
                        uVar36 = 0xffffffff;
                        do {
                          lVar40 = *(longlong *)
                                    (*(longlong *)(lVar16 + 0x150) + 8 + (longlong)iVar33 * 0x20);
                          if ((lVar40 != 0) && (*(char *)(lVar40 + 0x538) != '\0')) {
                            if (bVar44) goto LAB_1408a0d9c;
                            goto LAB_1408a0c14;
                          }
                          puVar38 = *(uint **)(lVar16 + 0x170);
                          if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                            puVar38 = (uint *)(lVar16 + 0x160);
                          }
                          uVar36 = uVar36 & ~(uint)uVar39;
                          iVar33 = (int)uVar32;
                          lVar40 = (longlong)iVar33;
                          uVar29 = puVar38[lVar40] & uVar36;
                          if (uVar29 == 0) {
                            iVar30 = iVar24 + 0x1e;
                            if (-1 < iVar24 + -1) {
                              iVar30 = iVar24 + -1;
                            }
                            iVar30 = iVar30 >> 5;
                            iVar31 = iVar30;
                            if (iVar30 < iVar33) {
                              iVar31 = iVar33;
                            }
                            if (iVar30 <= iVar33) break;
                            lVar21 = 0;
                            while( true ) {
                              iVar34 = iVar34 + 0x20;
                              uVar29 = puVar38[lVar40 + lVar21 + 1];
                              if (uVar29 != 0) break;
                              lVar21 = lVar21 + 1;
                              if (iVar31 - lVar40 == lVar21) goto LAB_1408a0c0b;
                            }
                            uVar32 = (ulonglong)(iVar33 + (int)lVar21 + 1);
                            uVar36 = 0xffffffff;
                          }
                          uVar39 = (ulonglong)(-uVar29 & uVar29);
                          uVar1 = uVar39 * 2 + 1;
                          lVar40 = 0x3f;
                          if (uVar1 != 0) {
                            for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                            }
                          }
                          iVar33 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                        } while (iVar33 < iVar24);
                      }
LAB_1408a0c0b:
                      if (bVar44) {
LAB_1408a0c14:
                        if (iVar15 == 0) {
                          uVar39 = 1;
                          uVar32 = 0;
                          iVar24 = 0;
                          iVar33 = 0;
                        }
                        else {
                          puVar38 = *(uint **)(lVar35 + 0x170);
                          if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                            puVar38 = local_468;
                          }
                          uVar36 = *puVar38;
                          if (uVar36 == 0) {
                            iVar24 = iVar15 + 0x1e;
                            if (-1 < iVar15 + -1) {
                              iVar24 = iVar15 + -1;
                            }
                            uVar32 = 0;
                            uVar39 = (ulonglong)(uint)(iVar24 >> 5);
                            if (iVar24 >> 5 < 1) {
                              uVar39 = uVar32;
                            }
                            iVar33 = 0;
                            do {
                              if (uVar39 == uVar32) goto LAB_1408a0dc7;
                              iVar33 = iVar33 + 0x20;
                              uVar36 = puVar38[uVar32 + 1];
                              uVar32 = uVar32 + 1;
                            } while (uVar36 == 0);
                          }
                          else {
                            uVar32 = 0;
                            iVar33 = 0;
                          }
                          uVar39 = (ulonglong)(-uVar36 & uVar36);
                          uVar1 = uVar39 * 2 + 1;
                          lVar16 = 0x3f;
                          if (uVar1 != 0) {
                            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                            }
                          }
                          iVar24 = (iVar33 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                          if (iVar15 <= iVar24) {
                            iVar24 = iVar15;
                          }
                        }
                        if (iVar24 != iVar15) {
                          uVar36 = 0xffffffff;
                          do {
                            lVar16 = *(longlong *)
                                      (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar24 * 0x20);
                            if ((lVar16 != 0) && (*(char *)(lVar16 + 0x538) != '\0'))
                            goto LAB_1408a0dc0;
                            puVar38 = *(uint **)(lVar35 + 0x170);
                            if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                              puVar38 = local_468;
                            }
                            uVar36 = uVar36 & ~(uint)uVar39;
                            iVar24 = (int)uVar32;
                            lVar16 = (longlong)iVar24;
                            uVar29 = puVar38[lVar16] & uVar36;
                            if (uVar29 == 0) {
                              iVar34 = iVar15 + 0x1e;
                              if (-1 < iVar15 + -1) {
                                iVar34 = iVar15 + -1;
                              }
                              iVar34 = iVar34 >> 5;
                              iVar30 = iVar34;
                              if (iVar34 < iVar24) {
                                iVar30 = iVar24;
                              }
                              if (iVar34 <= iVar24) break;
                              lVar40 = 0;
                              while( true ) {
                                iVar33 = iVar33 + 0x20;
                                uVar29 = puVar38[lVar16 + lVar40 + 1];
                                if (uVar29 != 0) break;
                                lVar40 = lVar40 + 1;
                                if (iVar30 - lVar16 == lVar40) goto LAB_1408a0dc7;
                              }
                              uVar32 = (ulonglong)(iVar24 + (int)lVar40 + 1);
                              uVar36 = 0xffffffff;
                            }
                            uVar39 = (ulonglong)(-uVar29 & uVar29);
                            uVar1 = uVar39 * 2 + 1;
                            lVar16 = 0x3f;
                            if (uVar1 != 0) {
                              for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                              }
                            }
                            iVar24 = (iVar33 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                          } while (iVar24 < iVar15);
                        }
                      }
                      else {
LAB_1408a0d9c:
                        if (*(float *)(lVar35 + 0x148) <= *(float *)(lVar16 + 0x148) &&
                            *(float *)(lVar16 + 0x148) != *(float *)(lVar35 + 0x148))
                        goto LAB_1408a0dc0;
                      }
                    }
                    else {
LAB_1408a0dc0:
                      puVar41 = puVar27;
                      local_498 = puVar26;
                    }
LAB_1408a0dc7:
                    puVar26 = (uint *)((longlong)puVar41 * 0x10);
                    plVar25 = *(longlong **)(local_4b0 + 2 + (longlong)puVar41 * 4);
                    lVar35 = (**(code **)(**(longlong **)(local_4b0 + (longlong)iVar42 * 4 + 2) +
                                         0x10))();
                    lVar16 = (**(code **)(*plVar25 + 0x10))(plVar25);
                    iVar15 = *(int *)(lVar35 + 0x178);
                    local_490 = (uint *)(lVar35 + 0x160);
                    if (iVar15 == 0) {
                      uVar32 = 1;
                      uVar39 = 0;
                      iVar24 = 0;
                      iVar33 = 0;
                    }
                    else {
                      puVar41 = *(uint **)(lVar35 + 0x170);
                      if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                        puVar41 = local_490;
                      }
                      uVar36 = *puVar41;
                      if (uVar36 == 0) {
                        iVar24 = iVar15 + 0x1e;
                        if (-1 < iVar15 + -1) {
                          iVar24 = iVar15 + -1;
                        }
                        uVar39 = 0;
                        uVar32 = (ulonglong)(uint)(iVar24 >> 5);
                        if (iVar24 >> 5 < 1) {
                          uVar32 = uVar39;
                        }
                        iVar33 = 0;
                        do {
                          if (uVar32 == uVar39) goto LAB_1408a12b3;
                          iVar33 = iVar33 + 0x20;
                          uVar36 = puVar41[uVar39 + 1];
                          uVar39 = uVar39 + 1;
                        } while (uVar36 == 0);
                      }
                      else {
                        uVar39 = 0;
                        iVar33 = 0;
                      }
                      uVar32 = (ulonglong)(-uVar36 & uVar36);
                      uVar1 = uVar32 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      if (iVar15 <= iVar24) {
                        iVar24 = iVar15;
                      }
                    }
                    if (iVar24 == iVar15) {
LAB_1408a12b3:
                      bVar44 = false;
                    }
                    else {
                      uVar36 = 0xffffffff;
                      do {
                        lVar40 = *(longlong *)
                                  (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar24 * 0x20);
                        if ((lVar40 != 0) && (bVar44 = true, *(char *)(lVar40 + 0x538) != '\0'))
                        break;
                        puVar41 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar41 = local_490;
                        }
                        uVar36 = uVar36 & ~(uint)uVar32;
                        iVar24 = (int)uVar39;
                        lVar40 = (longlong)iVar24;
                        uVar29 = puVar41[lVar40] & uVar36;
                        if (uVar29 == 0) {
                          iVar34 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar34 = iVar15 + -1;
                          }
                          iVar34 = iVar34 >> 5;
                          iVar30 = iVar34;
                          if (iVar34 < iVar24) {
                            iVar30 = iVar24;
                          }
                          if (iVar34 <= iVar24) goto LAB_1408a12b3;
                          lVar21 = 0;
                          while( true ) {
                            iVar33 = iVar33 + 0x20;
                            uVar29 = puVar41[lVar40 + lVar21 + 1];
                            if (uVar29 != 0) break;
                            lVar21 = lVar21 + 1;
                            bVar44 = false;
                            if (iVar30 - lVar40 == lVar21) goto LAB_1408a0f53;
                          }
                          uVar39 = (ulonglong)(iVar24 + (int)lVar21 + 1);
                          uVar36 = 0xffffffff;
                        }
                        uVar32 = (ulonglong)(-uVar29 & uVar29);
                        uVar1 = uVar32 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar24 = (iVar33 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                        bVar44 = false;
                      } while (iVar24 < iVar15);
                    }
LAB_1408a0f53:
                    iVar24 = *(int *)(lVar16 + 0x178);
                    local_4a8 = puVar26;
                    if (iVar24 == 0) {
                      uVar39 = 1;
                      uVar32 = 0;
                      iVar33 = 0;
                      iVar34 = 0;
                    }
                    else {
                      puVar41 = *(uint **)(lVar16 + 0x170);
                      if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                        puVar41 = (uint *)(lVar16 + 0x160);
                      }
                      uVar36 = *puVar41;
                      if (uVar36 == 0) {
                        iVar33 = iVar24 + 0x1e;
                        if (-1 < iVar24 + -1) {
                          iVar33 = iVar24 + -1;
                        }
                        uVar32 = 0;
                        uVar39 = (ulonglong)(uint)(iVar33 >> 5);
                        if (iVar33 >> 5 < 1) {
                          uVar39 = uVar32;
                        }
                        iVar34 = 0;
                        do {
                          if (uVar39 == uVar32) goto LAB_1408a10b1;
                          iVar34 = iVar34 + 0x20;
                          uVar36 = puVar41[uVar32 + 1];
                          uVar32 = uVar32 + 1;
                        } while (uVar36 == 0);
                      }
                      else {
                        uVar32 = 0;
                        iVar34 = 0;
                      }
                      uVar39 = (ulonglong)(-uVar36 & uVar36);
                      uVar1 = uVar39 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar33 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      if (iVar24 <= iVar33) {
                        iVar33 = iVar24;
                      }
                    }
                    if (iVar33 != iVar24) {
                      uVar36 = 0xffffffff;
                      do {
                        lVar40 = *(longlong *)
                                  (*(longlong *)(lVar16 + 0x150) + 8 + (longlong)iVar33 * 0x20);
                        if ((lVar40 != 0) && (*(char *)(lVar40 + 0x538) != '\0')) {
                          if (bVar44) goto LAB_1408a1235;
                          goto LAB_1408a10ba;
                        }
                        puVar41 = *(uint **)(lVar16 + 0x170);
                        if (*(uint **)(lVar16 + 0x170) == (uint *)0x0) {
                          puVar41 = (uint *)(lVar16 + 0x160);
                        }
                        uVar36 = uVar36 & ~(uint)uVar39;
                        iVar33 = (int)uVar32;
                        lVar40 = (longlong)iVar33;
                        uVar29 = puVar41[lVar40] & uVar36;
                        if (uVar29 == 0) {
                          iVar30 = iVar24 + 0x1e;
                          if (-1 < iVar24 + -1) {
                            iVar30 = iVar24 + -1;
                          }
                          iVar30 = iVar30 >> 5;
                          iVar31 = iVar30;
                          if (iVar30 < iVar33) {
                            iVar31 = iVar33;
                          }
                          if (iVar30 <= iVar33) break;
                          lVar21 = 0;
                          while( true ) {
                            iVar34 = iVar34 + 0x20;
                            uVar29 = puVar41[lVar40 + lVar21 + 1];
                            if (uVar29 != 0) break;
                            lVar21 = lVar21 + 1;
                            if (iVar31 - lVar40 == lVar21) goto LAB_1408a10b1;
                          }
                          uVar32 = (ulonglong)(iVar33 + (int)lVar21 + 1);
                          uVar36 = 0xffffffff;
                        }
                        uVar39 = (ulonglong)(-uVar29 & uVar29);
                        uVar1 = uVar39 * 2 + 1;
                        lVar40 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                          }
                        }
                        iVar33 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      } while (iVar33 < iVar24);
                    }
LAB_1408a10b1:
                    if (bVar44) {
LAB_1408a10ba:
                      if (iVar15 == 0) {
                        uVar39 = 1;
                        uVar32 = 0;
                        iVar24 = 0;
                        iVar33 = 0;
                      }
                      else {
                        puVar41 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar41 = local_490;
                        }
                        uVar36 = *puVar41;
                        if (uVar36 == 0) {
                          iVar24 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar24 = iVar15 + -1;
                          }
                          uVar32 = 0;
                          uVar39 = (ulonglong)(uint)(iVar24 >> 5);
                          if (iVar24 >> 5 < 1) {
                            uVar39 = uVar32;
                          }
                          iVar33 = 0;
                          do {
                            if (uVar39 == uVar32) goto LAB_1408a12dd;
                            iVar33 = iVar33 + 0x20;
                            uVar36 = puVar41[uVar32 + 1];
                            uVar32 = uVar32 + 1;
                          } while (uVar36 == 0);
                        }
                        else {
                          uVar32 = 0;
                          iVar33 = 0;
                        }
                        uVar39 = (ulonglong)(-uVar36 & uVar36);
                        uVar1 = uVar39 * 2 + 1;
                        lVar16 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        iVar24 = (iVar33 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        if (iVar15 <= iVar24) {
                          iVar24 = iVar15;
                        }
                      }
                      if (iVar24 == iVar15) break;
                      uVar36 = 0xffffffff;
                      while ((lVar16 = *(longlong *)
                                        (*(longlong *)(lVar35 + 0x150) + 8 + (longlong)iVar24 * 0x20
                                        ), lVar16 == 0 || (*(char *)(lVar16 + 0x538) == '\0'))) {
                        puVar41 = *(uint **)(lVar35 + 0x170);
                        if (*(uint **)(lVar35 + 0x170) == (uint *)0x0) {
                          puVar41 = local_490;
                        }
                        uVar36 = uVar36 & ~(uint)uVar39;
                        iVar24 = (int)uVar32;
                        lVar16 = (longlong)iVar24;
                        uVar29 = puVar41[lVar16] & uVar36;
                        if (uVar29 == 0) {
                          iVar34 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar34 = iVar15 + -1;
                          }
                          iVar34 = iVar34 >> 5;
                          iVar30 = iVar34;
                          if (iVar34 < iVar24) {
                            iVar30 = iVar24;
                          }
                          if (iVar34 <= iVar24) goto LAB_1408a12dd;
                          lVar40 = 0;
                          while( true ) {
                            iVar33 = iVar33 + 0x20;
                            uVar29 = puVar41[lVar16 + lVar40 + 1];
                            if (uVar29 != 0) break;
                            lVar40 = lVar40 + 1;
                            if (iVar30 - lVar16 == lVar40) goto LAB_1408a12dd;
                          }
                          uVar32 = (ulonglong)(iVar24 + (int)lVar40 + 1);
                          uVar36 = 0xffffffff;
                        }
                        uVar39 = (ulonglong)(-uVar29 & uVar29);
                        uVar1 = uVar39 * 2 + 1;
                        lVar16 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        iVar24 = (iVar33 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        if (iVar15 <= iVar24) goto LAB_1408a12dd;
                      }
                    }
                    else {
LAB_1408a1235:
                      if (*(float *)(lVar16 + 0x148) < *(float *)(lVar35 + 0x148) ||
                          *(float *)(lVar16 + 0x148) == *(float *)(lVar35 + 0x148)) break;
                    }
                    puVar41 = local_4b0 + (longlong)iVar42 * 4;
                    puVar26 = (uint *)((longlong)puVar26 + (longlong)local_4b0);
                    local_118 = *(longlong *)puVar41;
                    uStack_110 = *(undefined8 *)(puVar41 + 2);
                    uVar18 = *(undefined8 *)(puVar26 + 2);
                    *(undefined8 *)puVar41 = *(undefined8 *)puVar26;
                    *(undefined8 *)(puVar41 + 2) = uVar18;
                    *(longlong *)puVar26 = local_118;
                    *(undefined8 *)(puVar26 + 2) = uStack_110;
                    iVar15 = (int)local_498 * 2;
                    uVar36 = (int)local_498 * 2 + 1;
                    puVar26 = (uint *)(ulonglong)uVar36;
                    uVar32 = (ulonglong)local_498 & 0xffffffff;
                  } while ((longlong)(int)uVar36 < (longlong)local_4a0);
LAB_1408a12dd:
                  puVar41 = (uint *)((longlong)local_4a0 + -1);
                  local_118 = *(longlong *)local_4b0;
                  uStack_110 = *(undefined8 *)(local_4b0 + 2);
                  lVar35 = local_118;
                  uVar20 = uStack_110;
                  uVar18 = *(undefined8 *)(local_4b0 + (longlong)puVar41 * 4 + 2);
                  *(undefined8 *)local_4b0 = *(undefined8 *)(local_4b0 + (longlong)puVar41 * 4);
                  *(undefined8 *)(local_4b0 + 2) = uVar18;
                  local_118._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
                  uStack_110._4_4_ = (uint)((ulonglong)uStack_110 >> 0x20);
                  puVar26 = local_4b0 + (longlong)puVar41 * 4;
                  *puVar26 = (uint)local_118;
                  puVar26[1] = local_118._4_4_;
                  puVar26[2] = (uint)uStack_110;
                  puVar26[3] = uStack_110._4_4_;
                  puVar26 = local_488;
                  local_118 = lVar35;
                  uStack_110 = uVar20;
                } while ((uint *)0x2 < local_4a0);
              }
            }
          }
LAB_1408a189a:
          puVar26 = puVar26 + -6;
          lVar35 = local_480;
        } while (local_418 <= puVar26);
      }
      dVar2 = *(double *)(local_470 + 0x6d0);
      lVar16 = FUN_144860928();
      uVar36 = *(uint *)(lVar16 + 0x88);
      iVar15 = *(int *)(lVar35 + 0x18);
      if (uVar36 != 0 && 0 < iVar15) {
        lVar16 = 0;
        uVar29 = 0;
        do {
          plVar25 = *(longlong **)(*(longlong *)(lVar35 + 0x10) + 8 + lVar16 * 0x10);
          if (plVar25 != (longlong *)0x0) {
            puVar26 = (uint *)(*(longlong *)(lVar35 + 0x10) + lVar16 * 0x10);
            uVar43 = puVar26[1];
            if (((((uVar43 != 0) && (uVar22 = *puVar26, -1 < (int)uVar22)) &&
                 ((int)uVar22 < DAT_14c9647dc)) &&
                ((lVar40 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8),
                 lVar40 != 0 && (*(uint *)(lVar40 + 0x10) == uVar43)))) &&
               ((*(uint *)(lVar40 + 8) & 0x10200000) == 0)) {
              puVar26 = (uint *)(**(code **)(*plVar25 + 0x10))();
              cVar11 = FUN_145753b2a(puVar26);
              if (cVar11 == '\0') break;
              fVar46 = (float)dVar2 - (float)puVar26[0x52];
              local_498 = puVar26;
              if (*(longlong *)(puVar26 + 0x10) != 0) {
                fVar45 = (float)FUN_144916004();
                fVar46 = fVar46 * fVar45;
              }
              uVar43 = local_498[0x5e];
              local_4a0 = (uint *)(ulonglong)uVar43;
              local_470 = CONCAT44(local_470._4_4_,uVar29);
              puVar41 = local_498;
              if (uVar43 == 0) {
                uVar32 = 1;
                puVar38 = (uint *)0x0;
                puVar27 = (uint *)0x0;
                local_4b0 = (uint *)((ulonglong)local_4b0._4_4_ << 0x20);
              }
              else {
                puVar27 = *(uint **)(local_498 + 0x5c);
                if (*(uint **)(local_498 + 0x5c) == (uint *)0x0) {
                  puVar27 = puVar26 + 0x58;
                }
                uVar29 = *puVar27;
                if (uVar29 == 0) {
                  iVar15 = uVar43 + 0x1e;
                  if (-1 < (int)(uVar43 - 1)) {
                    iVar15 = uVar43 - 1;
                  }
                  puVar38 = (uint *)0x0;
                  puVar17 = (uint *)(ulonglong)(uint)(iVar15 >> 5);
                  if (iVar15 >> 5 < 1) {
                    puVar17 = puVar38;
                  }
                  local_4b0 = (uint *)((ulonglong)local_4b0 & 0xffffffff00000000);
                  do {
                    if (puVar17 == puVar38) goto LAB_14089feb2;
                    local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,(uint)local_4b0 + 0x20);
                    uVar29 = puVar27[(longlong)puVar38 + 1];
                    puVar38 = (uint *)((longlong)puVar38 + 1);
                  } while (uVar29 == 0);
                }
                else {
                  puVar38 = (uint *)0x0;
                  local_4b0 = (uint *)((ulonglong)local_4b0._4_4_ << 0x20);
                }
                uVar32 = (ulonglong)(-uVar29 & uVar29);
                uVar39 = uVar32 * 2 + 1;
                lVar40 = 0x3f;
                if (uVar39 != 0) {
                  for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                  }
                }
                uVar29 = ((uint)local_4b0 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                puVar27 = (uint *)(ulonglong)uVar29;
                if ((int)uVar43 <= (int)uVar29) {
                  puVar27 = local_4a0;
                }
              }
              if ((uint)puVar27 != uVar43) {
                local_4a8 = (uint *)CONCAT44(local_4a8._4_4_,0xffffffff);
                puVar17 = (uint *)(ulonglong)uVar43;
                local_488 = puVar26 + 0x58;
                do {
                  lVar40 = *(longlong *)
                            (*(longlong *)(puVar41 + 0x54) + 8 + (longlong)(int)puVar27 * 0x20);
                  if (lVar40 != 0) {
                    if (*(char *)(lVar40 + 0x508) == '\x01') {
                      *(float *)(lVar40 + 0x50c) = *(float *)(lVar40 + 0x50c) + fVar46;
                    }
                    else {
                      fVar45 = *(float *)(lVar40 + 0x510);
                      if ((fVar45 != 3.4028235e+38) || (NAN(fVar45))) {
                        *(float *)(lVar40 + 0x510) = fVar45 + fVar46;
                      }
                    }
                    local_490 = puVar38;
                    if ((((*(longlong *)(lVar40 + 0x500) != 0) &&
                         (*(char *)(lVar40 + 0x538) == '\x01')) &&
                        (*(longlong *)(lVar40 + 0x520) == 0)) &&
                       (((((*(int *)(lVar40 + 0x1c) != 0 &&
                           (uVar29 = *(uint *)(lVar40 + 0x18), -1 < (int)uVar29)) &&
                          (((int)uVar29 < DAT_14c9647dc &&
                           ((plVar25 = (longlong *)
                                       ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                            plVar25 != (longlong *)0x0 &&
                            ((int)plVar25[2] == *(int *)(lVar40 + 0x1c))))))) &&
                         ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)) &&
                        (lVar21 = *plVar25, lVar21 != 0)))) {
                      if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
                        bVar12 = *(byte *)(lVar21 + 0xbd8);
                      }
                      else {
                        bVar12 = 0;
                      }
                      local_448 = DAT_14c8464f0;
                      local_458 = DAT_14c8464e0;
                      uStack_450 = DAT_14c8464e8;
                      if (((int)(uint)bVar12 < *(int *)(lVar21 + 0xbf0)) &&
                         (plVar25 = *(longlong **)
                                     (*(longlong *)(lVar21 + 0xbe8) + 8 +
                                     (ulonglong)bVar12 * 0x80 + (ulonglong)bVar12 * 8),
                         plVar25 != (longlong *)0x0)) {
                        (**(code **)(*plVar25 + 0x2c0))(plVar25,&local_458);
                      }
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14cb945b8) &&
                         (FUN_144b3d300(&DAT_14cb945b8), DAT_14cb945b8 == -1)) {
                        FUN_1446f470e(&DAT_14cb945b0,L"AIWeaponBlockedTrace",1);
                        _Init_thread_footer(&DAT_14cb945b8);
                      }
                      local_f4 = 0;
                      uStack_f2 = 0;
                      local_f0 = 0x101;
                      local_c8 = (undefined1 *)0x0;
                      local_c0 = 0x800000000;
                      local_a8 = (undefined4 *)0x0;
                      local_9c = 4;
                      uStack_fc = 0;
                      uStack_fa = 0;
                      local_118 = DAT_14cb945b0;
                      local_108 = 0x100;
                      local_f8 = 0;
                      uStack_104 = 0;
                      uStack_102 = 0;
                      local_b8[0] = *(undefined4 *)(lVar21 + 0xc);
                      local_a0 = 1;
                      uStack_110 = *(undefined8 *)(lVar21 + 0x18);
                      uStack_101 = 1;
                      uStack_100 = 1;
                      lVar35 = *(longlong *)(lVar40 + 0x500);
                      if (((*(longlong *)(lVar35 + 0x40) == 0) ||
                          (local_478 = (uint *)FUN_1447210f0(), local_478 == (uint *)0x0)) ||
                         (plVar25 = (longlong *)FUN_1408a1f76(lVar35), plVar25 == (longlong *)0x0))
                      {
LAB_1408a1969:
                        *(undefined8 *)(lVar40 + 0x520) = 0;
                        lVar35 = local_480;
                      }
                      else {
                        uVar18 = FUN_14069ce7c();
                        plVar25 = (longlong *)(**(code **)(*plVar25 + 0x288))(plVar25,uVar18);
                        if (plVar25 == (longlong *)0x0) goto LAB_1408a1969;
                        uVar18 = FUN_14069ce7c();
                        plVar19 = (longlong *)FUN_144718840(plVar25,uVar18);
                        if (((plVar25 == plVar19) || (plVar19 == (longlong *)0x0)) ||
                           (puVar26 = (uint *)(**(code **)(*plVar19 + 0x10))(plVar19),
                           puVar26 == (uint *)0x0)) goto LAB_1408a1969;
                        uVar18 = (**(code **)(**(longlong **)(lVar35 + 0x70) + 0x28))();
                        uVar20 = FUN_1408a1f76(lVar35);
                        cVar11 = FUN_1408a20f6(uVar18,0,uVar20,0);
                        if (cVar11 == '\0') {
                          if ((puVar26[1] == 0) || (uVar29 = *puVar26, (int)uVar29 < 0)) {
LAB_1408a1b36:
                            uVar18 = 0;
                          }
                          else {
                            uVar18 = 0;
                            if ((int)uVar29 < DAT_14c9647dc) {
                              puVar37 = (undefined8 *)
                                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                              if (((puVar37 == (undefined8 *)0x0) ||
                                  (*(uint *)(puVar37 + 2) != puVar26[1])) ||
                                 ((*(uint *)(puVar37 + 1) & 0x10200000) != 0)) goto LAB_1408a1b36;
                              uVar18 = *puVar37;
                            }
                          }
                          uVar20 = (**(code **)(**(longlong **)(lVar35 + 0x70) + 0x28))();
                          lVar21 = FUN_1447ca08a(uVar20,uVar18,0);
                          if (lVar21 == 0) {
                            local_428 = DAT_14cb242f8;
                            local_438 = DAT_14cb242e8;
                            dStack_430 = DAT_14cb242f0;
                          }
                          else {
                            local_428 = *(double *)(lVar21 + 0x28);
                            local_438 = *(double *)(lVar21 + 0x18);
                            dStack_430 = *(double *)(lVar21 + 0x20);
                          }
                        }
                        else {
                          FUN_1408a229c(puVar26,&local_438);
                        }
                        if (((local_438 != _DAT_14cb94660) ||
                            (NAN(local_438) || NAN(_DAT_14cb94660))) ||
                           (((dStack_430 != _DAT_14cb94668 ||
                             ((NAN(dStack_430) || NAN(_DAT_14cb94668) ||
                              (local_428 != _DAT_14cb94670)))) ||
                            (NAN(local_428) || NAN(_DAT_14cb94670))))) {
                          uStack_3f8 = local_f8;
                          uStack_3f4 = local_f4;
                          uStack_3f2 = uStack_f2;
                          uStack_3f0 = (undefined1)local_f0;
                          uStack_3ef = (undefined1)((ushort)local_f0 >> 8);
                          local_408 = CONCAT44(CONCAT13(uStack_101,CONCAT12(uStack_102,uStack_104)),
                                               local_108);
                          local_400 = uStack_100;
                          local_3ff = uStack_ff;
                          uStack_3fe = (undefined1)uStack_fe;
                          uStack_3fd = (undefined1)((ushort)uStack_fe >> 8);
                          uStack_3fc = uStack_fc;
                          uStack_3fa = uStack_fa;
                          local_418._8_8_ = uStack_110;
                          local_418._0_8_ = local_118;
                          local_3c8 = (undefined2 *)0x0;
                          lVar21 = (longlong)(int)local_c0;
                          local_3c0 = CONCAT44(local_3c0._4_4_,(int)local_c0);
                          if (lVar21 == 0) {
                            local_3c0 = CONCAT44(8,(int)local_c0);
                          }
                          else {
                            _Src_00 = local_e8;
                            if (local_c8 != (undefined1 *)0x0) {
                              _Src_00 = local_c8;
                            }
                            FUN_14470be6c(local_3e8,local_c0 & 0xffffffff,0);
                            _Dst = local_3c8;
                            if (local_3c8 == (undefined2 *)0x0) {
                              _Dst = local_3e8;
                            }
                            memcpy(_Dst,_Src_00,lVar21 << 2);
                          }
                          local_3a8 = (undefined8 *)0x0;
                          lVar21 = (longlong)local_a0;
                          local_3a0 = CONCAT44(local_3a0._4_4_,local_a0);
                          if (lVar21 == 0) {
                            local_3a0 = CONCAT44(4,local_a0);
                          }
                          else {
                            _Src = local_a8;
                            if (local_a8 == (undefined4 *)0x0) {
                              _Src = local_b8;
                            }
                            FUN_1447163e6(local_3b8,local_a0,0);
                            puVar37 = local_3a8;
                            if (local_3a8 == (undefined8 *)0x0) {
                              puVar37 = local_3b8;
                            }
                            memcpy(puVar37,_Src,lVar21 << 2);
                          }
                          uVar39 = local_3a0;
                          if (*(longlong *)(lVar35 + 0x40) != 0) {
                            uVar3 = *(undefined4 *)(*(longlong *)(lVar35 + 0x40) + 0xc);
                            lVar35 = (longlong)(int)local_3a0;
                            uVar29 = (int)local_3a0 + 1;
                            local_3a0 = CONCAT44(local_3a0._4_4_,uVar29);
                            if (local_3a0._4_4_ < uVar29) {
                              FUN_1447de67e(local_3b8,uVar39 & 0xffffffff);
                            }
                            puVar37 = local_3a8;
                            if (local_3a8 == (undefined8 *)0x0) {
                              puVar37 = local_3b8;
                            }
                            *(undefined4 *)((longlong)puVar37 + lVar35 * 4) = uVar3;
                          }
                          uVar39 = local_3a0;
                          if ((((((puVar26[1] != 0) && (uVar29 = *puVar26, -1 < (int)uVar29)) &&
                                ((int)uVar29 < DAT_14c9647dc)) &&
                               ((plVar25 = (longlong *)
                                           ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                                plVar25 != (longlong *)0x0 && (*(uint *)(plVar25 + 2) == puVar26[1])
                                ))) && ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)) &&
                             (*plVar25 != 0)) {
                            uVar3 = *(undefined4 *)(*plVar25 + 0xc);
                            lVar35 = (longlong)(int)local_3a0;
                            uVar29 = (int)local_3a0 + 1;
                            local_3a0 = CONCAT44(local_3a0._4_4_,uVar29);
                            if (local_3a0._4_4_ < uVar29) {
                              FUN_1447de67e(local_3b8,uVar39 & 0xffffffff);
                            }
                            puVar37 = local_3a8;
                            if (local_3a8 == (undefined8 *)0x0) {
                              puVar37 = local_3b8;
                            }
                            *(undefined4 *)((longlong)puVar37 + lVar35 * 4) = uVar3;
                          }
                          local_4d0 = &DAT_14cad0f10;
                          local_4e8 = &local_438;
                          local_4c0 = 0;
                          local_4c8 = 0;
                          local_4e0 = 3;
                          local_4d8 = local_418;
                          FUN_1447de878(local_478,&local_460,0,&local_458);
                          if (local_3a8 != (undefined8 *)0x0) {
                            FUN_1400020a8();
                          }
                          lVar35 = local_480;
                          uVar18 = local_460;
                          if (local_3c8 != (undefined2 *)0x0) {
                            FUN_1400020a8();
                            uVar18 = local_460;
                          }
                        }
                        else {
                          uVar18 = 0;
                          lVar35 = local_480;
                        }
                        *(undefined8 *)(lVar40 + 0x520) = uVar18;
                        if (local_a8 != (undefined4 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      if (local_c8 != (undefined1 *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    local_418 = (undefined1  [16])0x0;
                    cVar11 = FUN_1408a2554(lVar40,local_418);
                    if (cVar11 == '\0') {
                      FUN_1408a2052();
                    }
                    else {
                      FUN_1408a23a4(lVar40);
                    }
                    puVar41 = local_498;
                    if (local_418._0_8_ != 0) {
                      FUN_1400020a8();
                    }
                    puVar17 = (uint *)(ulonglong)puVar41[0x5e];
                    puVar38 = local_490;
                  }
                  uVar29 = (uint)local_4a8 & ~(uint)uVar32;
                  puVar26 = *(uint **)(puVar41 + 0x5c);
                  if (*(uint **)(puVar41 + 0x5c) == (uint *)0x0) {
                    puVar26 = local_488;
                  }
                  iVar15 = (int)puVar38;
                  lVar40 = (longlong)iVar15;
                  local_4a8 = (uint *)CONCAT44(local_4a8._4_4_,uVar29);
                  uVar29 = puVar26[lVar40] & uVar29;
                  iVar42 = (int)puVar17;
                  if (uVar29 == 0) {
                    iVar24 = iVar42 + 0x1e;
                    if (-1 < iVar42 + -1) {
                      iVar24 = iVar42 + -1;
                    }
                    iVar24 = iVar24 >> 5;
                    local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,(uint)local_4b0 + 0x20);
                    iVar33 = iVar24;
                    if (iVar24 < iVar15) {
                      iVar33 = iVar15;
                    }
                    if (iVar15 < iVar24) {
                      lVar21 = 0;
                      do {
                        uVar29 = puVar26[lVar40 + lVar21 + 1];
                        if (uVar29 != 0) {
                          puVar38 = (uint *)(ulonglong)(iVar15 + (int)lVar21 + 1);
                          local_4a8 = (uint *)CONCAT44(local_4a8._4_4_,0xffffffff);
                          goto LAB_14089fe28;
                        }
                        local_4b0 = (uint *)CONCAT44(local_4b0._4_4_,(uint)local_4b0 + 0x20);
                        lVar21 = lVar21 + 1;
                      } while (iVar33 - lVar40 != lVar21);
                      local_4a8 = (uint *)CONCAT44(local_4a8._4_4_,0xffffffff);
                      iVar15 = iVar33;
                    }
                    puVar38 = (uint *)(ulonglong)(iVar15 + 1);
                    puVar27 = puVar17;
                    lVar35 = local_480;
                    puVar41 = local_498;
                  }
                  else {
LAB_14089fe28:
                    uVar32 = (ulonglong)(-uVar29 & uVar29);
                    uVar39 = uVar32 * 2 + 1;
                    lVar40 = 0x3f;
                    if (uVar39 != 0) {
                      for (; uVar39 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                      }
                    }
                    uVar29 = ((uint)local_4b0 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    puVar27 = (uint *)(ulonglong)uVar29;
                    if (iVar42 <= (int)uVar29) {
                      puVar27 = puVar17;
                    }
                  }
                } while ((int)puVar27 != (int)local_4a0);
              }
LAB_14089feb2:
              puVar41[0x52] = (uint)(float)dVar2;
              uVar29 = (int)local_470 + 1;
              iVar15 = *(int *)(lVar35 + 0x18);
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar15 && uVar29 < uVar36);
      }
    }
    iVar15 = *(int *)(lVar35 + 0x168);
    if (0 < iVar15) {
      lVar16 = lVar35;
      do {
        puVar26 = *(uint **)(lVar16 + 0x160);
        if (*(uint **)(lVar16 + 0x160) == (uint *)0x0) {
          puVar26 = (uint *)(lVar35 + 0x20);
        }
        if ((((puVar26[1] != 0) && (uVar36 = *puVar26, -1 < (int)uVar36)) &&
            (((int)uVar36 < DAT_14c9647dc &&
             (((plVar25 = (longlong *)
                          ((ulonglong)((uVar36 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8)),
               plVar25 != (longlong *)0x0 && (*(uint *)(plVar25 + 2) == puVar26[1])) &&
              ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)))))) && (*plVar25 != 0)) {
          FUN_1408a4376(*plVar25);
          iVar15 = *(int *)(lVar16 + 0x168) + -1;
          if (iVar15 == 0) {
            iVar15 = 0;
          }
          else {
            puVar26 = (uint *)(lVar35 + 0x20);
            if (*(uint **)(lVar16 + 0x160) != (uint *)0x0) {
              puVar26 = *(uint **)(lVar16 + 0x160);
            }
            memmove(puVar26,puVar26 + 5,(longlong)iVar15 * 0x14);
            iVar15 = *(int *)(lVar16 + 0x168) + -1;
          }
LAB_1408a1c56:
          *(int *)(lVar16 + 0x168) = iVar15;
          break;
        }
        if (iVar15 - 1U == 0) {
          iVar15 = 0;
          lVar16 = local_480;
          goto LAB_1408a1c56;
        }
        memmove(puVar26,puVar26 + 5,(ulonglong)(iVar15 - 1U) * 0x14);
        iVar42 = *(int *)(local_480 + 0x168);
        iVar15 = iVar42 + -1;
        *(int *)(local_480 + 0x168) = iVar15;
        lVar16 = local_480;
      } while (1 < iVar42);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001408a0854:
  local_118 = *(longlong *)puVar27;
  uStack_110 = *(undefined8 *)(puVar27 + 2);
  lVar35 = local_118;
  uVar20 = uStack_110;
  uVar18 = *(undefined8 *)(puVar41 + -2);
  *(undefined8 *)puVar27 = *(undefined8 *)puVar38;
  *(undefined8 *)(puVar27 + 2) = uVar18;
  local_118._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
  uStack_110._4_4_ = (uint)((ulonglong)uStack_110 >> 0x20);
  *puVar38 = (uint)local_118;
  puVar41[-3] = local_118._4_4_;
  puVar41[-2] = (uint)uStack_110;
  puVar41[-1] = uStack_110._4_4_;
  uVar36 = (int)local_490 - 1;
  puVar41 = puVar41 + -8;
  puVar26 = local_488;
  local_118 = lVar35;
  uStack_110 = uVar20;
  if ((longlong)puVar41 - (longlong)puVar27 < (longlong)local_478 - (longlong)local_4b0) {
    if (local_4b0 < local_498) {
      *(uint **)local_488 = local_4b0;
      *(uint **)(local_488 + 2) = local_498;
      local_488[4] = uVar36;
      puVar26 = local_488 + 6;
    }
    if (puVar38 <= puVar27 + 4) goto LAB_1408a189a;
  }
  else {
    if (puVar27 + 4 < puVar38) {
      *(uint **)local_488 = puVar27;
      *(uint **)(local_488 + 2) = puVar41;
      local_488[4] = uVar36;
      puVar26 = local_488 + 6;
    }
    puVar41 = local_498;
    puVar27 = local_4b0;
    if (local_498 <= local_4b0) goto LAB_1408a189a;
  }
  iVar15 = (int)((ulonglong)((longlong)puVar41 - (longlong)puVar27) >> 4);
  uVar32 = (ulonglong)(iVar15 + 1);
  if (uVar36 == 0) goto LAB_1408a19b7;
  goto LAB_14089ffb5;
}



// FUNCTION 1408a1f76 FUN_1408a1f76 body=108 status=ok
// SIG undefined FUN_1408a1f76(void)

undefined8 FUN_1408a1f76(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x6c) != 0) && (uVar1 = *(uint *)(param_1 + 0x68), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x6c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))();
        uVar2 = FUN_1408a1fe2(uVar2);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1408a1fe2 FUN_1408a1fe2 body=112 status=ok
// SIG undefined FUN_1408a1fe2(void)

undefined8 FUN_1408a1fe2(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if ((((*(int *)(param_1 + 0xc0) == 0) || (*(int *)(param_1 + 0x80) < 1)) ||
      (**(int **)(param_1 + 0x78) == 0x7fffffff)) ||
     (uVar1 = *(ulonglong *)(*(int **)(param_1 + 0x78) + 1), uVar1 >> 0x20 == 0)) {
    return 0;
  }
  uVar2 = 0;
  uVar4 = (uint)uVar1;
  if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8)));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != (int)(uVar1 >> 0x20)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 1408a2052 FUN_1408a2052 body=163 status=ok
// SIG undefined FUN_1408a2052(void)

void FUN_1408a2052(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = DAT_14c9647c8;
  if ((((*(char *)(param_1 + 0x508) == '\x01') && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == iVar1)) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      *(undefined1 *)(param_1 + 0x508) = 0;
      *(undefined4 *)(param_1 + 0x514) = 0;
      *(undefined8 *)(param_1 + 0x50c) = 0;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != iVar1)) ||
         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)*puVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x0001408a20ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x828))(plVar4,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 1408a20f6 FUN_1408a20f6 body=421 status=ok
// SIG undefined FUN_1408a20f6(void)

undefined4 FUN_1408a20f6(longlong param_1,uint param_2,longlong param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    uVar7 = 0;
    uVar2 = 0;
  }
  else {
    uVar7 = *(uint *)(param_3 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar2 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar5;
      }
    }
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar8 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x90);
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & (uVar2 ^ uVar7)) * 4);
    if (iVar4 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x50);
      do {
        lVar6 = (longlong)iVar4 * 0x2b0;
        local_58 = *(undefined8 *)(lVar8 + lVar6);
        local_60 = CONCAT44(uVar2,uVar7);
        cVar1 = FUN_14472d054(&local_58,&local_60);
        lVar8 = *(longlong *)(param_1 + 0x50);
        if (cVar1 != '\0') {
          uVar3 = 0;
          if ((lVar8 + lVar6 != 0) && (lVar8 = lVar8 + lVar6 + 8, lVar8 != 0)) {
            uVar2 = (param_2 & 0xff) * 0x60;
            uVar3 = CONCAT31((int3)(uVar2 >> 8),*(float *)(lVar8 + (ulonglong)uVar2) <= param_4);
          }
          goto LAB_1408a221c;
        }
        iVar4 = *(int *)(lVar8 + 0x2a8 + lVar6);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
LAB_1408a221c:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1408a229c FUN_1408a229c body=261 status=ok
// SIG undefined FUN_1408a229c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1408a229c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 != (longlong *)0x0) &&
         (((*(uint *)(plVar4 + 2) == param_1[1] && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
          (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
        if (*(char *)((longlong)param_1 + 0x18e) == '\x01') {
          (**(code **)(*plVar4 + 0x588))(plVar4,param_2,local_28);
LAB_1408a2335:
          if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
            return param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        lVar2 = plVar4[0x39];
        if (lVar2 != 0) {
          uVar3 = *(undefined8 *)(lVar2 + 0x268);
          *param_2 = *(undefined8 *)(lVar2 + 0x260);
          param_2[1] = uVar3;
          param_2[2] = *(undefined8 *)(lVar2 + 0x270);
          goto LAB_1408a2335;
        }
        param_2[2] = DAT_14c8464f0;
        uVar5 = (undefined4)DAT_14c8464e0;
        uVar6 = DAT_14c8464e0._4_4_;
        uVar7 = (undefined4)DAT_14c8464e8;
        uVar8 = DAT_14c8464e8._4_4_;
        goto LAB_1408a237e;
      }
    }
  }
  param_2[2] = DAT_14cb24420;
  uVar5 = _DAT_14cb24410;
  uVar6 = uRam000000014cb24414;
  uVar7 = _DAT_14cb24418;
  uVar8 = uRam000000014cb2441c;
LAB_1408a237e:
  *(undefined4 *)param_2 = uVar5;
  *(undefined4 *)((longlong)param_2 + 4) = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1408a23a4 FUN_1408a23a4 body=431 status=ok
// SIG undefined FUN_1408a23a4(void)

void FUN_1408a23a4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  plVar5 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar5[2] != iVar3) {
    return;
  }
  if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
    return;
  }
  if (((*(uint *)(plVar5 + 1) & 0x10200000) == 0) && (*plVar5 != 0)) {
    cVar2 = FUN_14022747e();
    if (cVar2 != '\0') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != 0) goto LAB_1408a2423;
  }
  else {
LAB_1408a2423:
    uVar1 = *(uint *)(param_1 + 0x18);
    if (((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
         (plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0)) &&
        (((int)plVar5[2] == iVar3 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
       ((*plVar5 != 0 && (cVar2 = FUN_1402273fc(), cVar2 != '\0')))) {
      return;
    }
  }
  cVar2 = FUN_1406f1180();
  if (cVar2 != '\0') {
    FUN_145753cc0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x508) == '\0') {
    *(undefined1 *)(param_1 + 0x508) = 1;
    *(undefined4 *)(param_1 + 0x50c) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    plVar5 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1408a252a;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      plVar5 = (longlong *)*puVar4;
      goto LAB_1408a252a;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1408a252a:
                    /* WARNING: Could not recover jumptable at 0x0001408a253b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x820))(plVar5,0);
  return;
}



// FUNCTION 1408a2554 FUN_1408a2554 body=3852 status=ok
// SIG undefined FUN_1408a2554(void)

ulonglong FUN_1408a2554(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  undefined *puVar16;
  float *unaff_RBX;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_118 [32];
  float local_f8;
  char local_f4;
  char local_f0 [16];
  longlong *local_e0;
  int local_c8;
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x538) == '\0') {
    if (param_2 == 0) goto LAB_1408a2939;
    pwVar15 = L"Weapon Doesn\'t Want to Fire";
LAB_1408a2931:
    FUN_14020fad6(param_2,pwVar15);
  }
  else {
    cVar4 = FUN_140471d84(param_1,param_2);
    if (cVar4 != '\0') {
      if (*(char *)(param_1 + 0x588) == '\0') {
        lVar11 = *(longlong *)(param_1 + 0x500);
        uVar8 = (**(code **)(**(longlong **)(lVar11 + 0x70) + 0x28))();
        uVar9 = FUN_1408a1f76(lVar11);
        pfVar10 = (float *)FUN_1400b9668(uVar8,0,uVar9);
        if (pfVar10 == (float *)0x0) {
          fVar21 = 3.4028235e+38;
        }
        else {
          fVar21 = *pfVar10;
        }
        if (*(char *)(param_1 + 0x4f8) == '\x01') {
          local_f0[0] = '\0';
          local_c8 = 0;
          FUN_1456bb102(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
          pfVar10 = &local_c0;
          FUN_1448729ea(param_1 + 0x4a8,pfVar10,local_f0);
          if (local_a0 == 3) {
            uVar6 = 3;
            fVar22 = local_c0;
          }
          else {
            pfVar19 = &local_98;
            FUN_1400b56fe(pfVar19,&local_c0,3);
            fVar22 = 0.0;
            if (local_78 != 0) {
              fVar22 = local_98;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_80) {
                pfVar19 = (float *)CONCAT44(uStack_94,local_98);
              }
              (*pcVar2)(pfVar19);
            }
            if (0x18 < local_80) {
              FUN_1400020a8(CONCAT44(uStack_94,local_98));
            }
            uVar6 = (uint)local_a0;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_a8) {
              pfVar10 = (float *)CONCAT44(uStack_bc,local_c0);
            }
            (*pcVar2)(pfVar10);
          }
          if (0x18 < local_a8) {
            FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
          }
          lVar11 = DAT_14c9a3da0;
          if ((longlong)local_c8 != 0) {
            lVar18 = (longlong)local_c8 + -1;
            lVar20 = lVar18 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
            if (*(longlong *)(lVar11 + lVar20) != 0) {
              FUN_1400020a8();
            }
            lVar11 = DAT_14c9a3da0;
            iVar5 = (int)lVar18;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
            }
            *(undefined4 *)(lVar11 + lVar20) = 0xffffffff;
            iVar7 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar7 = DAT_14c9a3dd0;
            }
            *(int *)(lVar11 + 4 + lVar20) = iVar7;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar16 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar16 = DAT_14c9a3dc0;
            }
            iVar7 = iVar5 + 0x1f;
            if (-1 < iVar5) {
              iVar7 = iVar5;
            }
            bVar3 = (byte)lVar18 & 0x1f;
            DAT_14c9a3dd0 = iVar5;
            *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) =
                 *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) &
                 (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            local_c8 = 0;
          }
          if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_e0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_e0 + 0x10))();
            }
          }
        }
        else {
          lVar11 = FUN_144860928();
          fVar22 = *(float *)(lVar11 + 0x9c);
        }
        if (fVar22 < fVar21) {
          if (param_2 != 0) {
            pwVar15 = L"Target Not Sensed";
            goto LAB_1408a2931;
          }
        }
        else {
          plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x500) + 0x40);
          if (plVar13 != (longlong *)0x0) {
            uVar8 = FUN_1408a34bc();
            unaff_RBX = (float *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar8);
            if (unaff_RBX != (float *)0x0) {
              uVar8 = FUN_1408a34bc();
              pfVar10 = (float *)FUN_144718840(unaff_RBX,uVar8);
              if ((((unaff_RBX != pfVar10) && (pfVar10 != (float *)0x0)) &&
                  (lVar11 = (**(code **)(*(longlong *)pfVar10 + 0x10))(pfVar10), lVar11 != 0)) &&
                 (cVar4 = FUN_1408a3462(), cVar4 != '\0')) goto LAB_1408a2703;
            }
          }
          lVar11 = FUN_1408a35a2(param_1 + 0x600);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x3b2) == '\0')) {
            unaff_RBX = &local_f8;
            FUN_14056d7ae(lVar11,unaff_RBX);
            if (local_f4 != '\0') {
              if (*(char *)(param_1 + 0x1e8) == '\x01') {
                local_f0[0] = '\0';
                local_c8 = 0;
                FUN_1456bb102(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
                FUN_1448729ea(param_1 + 0x198,&local_c0,local_f0);
                if (local_a0 == 3) {
                  uVar6 = 3;
                  fVar22 = local_c0;
                }
                else {
                  pfVar10 = &local_98;
                  FUN_1400b56fe(pfVar10,&local_c0,3);
                  fVar22 = 0.0;
                  if (local_78 != 0) {
                    fVar22 = local_98;
                  }
                  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120)
                                     );
                  if (pcVar2 != (code *)0x0) {
                    if (0x18 < local_80) {
                      pfVar10 = (float *)CONCAT44(uStack_94,local_98);
                    }
                    (*pcVar2)(pfVar10);
                  }
                  if (0x18 < local_80) {
                    FUN_1400020a8(CONCAT44(uStack_94,local_98));
                  }
                  uVar6 = (uint)local_a0;
                }
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
                if (pcVar2 != (code *)0x0) {
                  (*pcVar2)();
                }
                if (0x18 < local_a8) {
                  FUN_1400020a8();
                }
                lVar11 = DAT_14c9a3da0;
                unaff_RBX = (float *)(longlong)local_c8;
                if (unaff_RBX != (float *)0x0) {
                  unaff_RBX = (float *)((longlong)unaff_RBX + -1);
                  lVar18 = (longlong)unaff_RBX * 0x10;
                  FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                                *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
                  if (*(longlong *)(lVar11 + lVar18) != 0) {
                    FUN_1400020a8();
                  }
                  lVar11 = DAT_14c9a3da0;
                  iVar5 = (int)unaff_RBX;
                  if (DAT_14c9a3dd4 != 0) {
                    *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
                  }
                  *(undefined4 *)(lVar11 + lVar18) = 0xffffffff;
                  iVar7 = -1;
                  if (0 < DAT_14c9a3dd4) {
                    iVar7 = DAT_14c9a3dd0;
                  }
                  *(int *)(lVar11 + 4 + lVar18) = iVar7;
                  DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                  puVar16 = &DAT_14c9a3db0;
                  if (DAT_14c9a3dc0 != (undefined *)0x0) {
                    puVar16 = DAT_14c9a3dc0;
                  }
                  iVar7 = iVar5 + 0x1f;
                  if (-1 < iVar5) {
                    iVar7 = iVar5;
                  }
                  bVar3 = (byte)unaff_RBX & 0x1f;
                  DAT_14c9a3dd0 = iVar5;
                  *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) =
                       *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) &
                       (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
                  local_c8 = 0;
                }
                if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_e0 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_e0 + 0x10))();
                  }
                }
              }
              else {
                lVar11 = FUN_144860928();
                fVar22 = *(float *)(lVar11 + 0x98);
              }
              if (local_f8 <= fVar22 * 0.017453292) {
                if (((fVar21 != 0.0) || (NAN(fVar21))) || (*(char *)(param_1 + 0x519) == '\0'))
                goto LAB_1408a2703;
                if (param_2 != 0) {
                  pwVar15 = L"Weapon\'s path to Target is blocked";
                  goto LAB_1408a2931;
                }
                goto LAB_1408a2939;
              }
            }
          }
          if (param_2 != 0) {
            pwVar15 = L"Not Aimed At Target";
            goto LAB_1408a2931;
          }
        }
      }
      else {
LAB_1408a2703:
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar5 == 0) {
LAB_1408a2cf3:
          lVar11 = 0;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x18);
          lVar11 = 0;
          if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
            if ((plVar13 == (longlong *)0x0) ||
               (((int)plVar13[2] != iVar5 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
            goto LAB_1408a2cf3;
            lVar11 = *plVar13;
          }
        }
        if (*(char *)(param_1 + 0x518) == *(char *)(lVar11 + 0xbd8)) {
          uVar17 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
          if (*(char *)(param_1 + 0x5b0) != '\0') goto LAB_1408a293b;
          if (*(char *)(param_1 + 0x508) == '\0') {
            fVar21 = *(float *)(param_1 + 0x510);
            if (*(char *)(param_1 + 0x2f0) == '\x01') {
              local_f0[0] = '\0';
              local_c8 = 0;
              FUN_1456bb102(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
              pfVar10 = &local_c0;
              FUN_1448729ea(param_1 + 0x2a0,pfVar10,local_f0);
              if (local_a0 == 3) {
                uVar6 = 3;
                fVar22 = local_c0;
              }
              else {
                pfVar19 = &local_98;
                FUN_1400b56fe(pfVar19,&local_c0,3);
                fVar22 = 0.0;
                if (local_78 != 0) {
                  fVar22 = local_98;
                }
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
                if (pcVar2 != (code *)0x0) {
                  if (0x18 < local_80) {
                    pfVar19 = (float *)CONCAT44(uStack_94,local_98);
                  }
                  (*pcVar2)(pfVar19);
                }
                if (0x18 < local_80) {
                  FUN_1400020a8(CONCAT44(uStack_94,local_98));
                }
                uVar6 = (uint)local_a0;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_a8) {
                  pfVar10 = (float *)CONCAT44(uStack_bc,local_c0);
                }
                (*pcVar2)(pfVar10);
              }
              if (0x18 < local_a8) {
                FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
              }
              lVar11 = DAT_14c9a3da0;
              if ((longlong)local_c8 != 0) {
                lVar18 = (longlong)local_c8 + -1;
                lVar20 = lVar18 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
                if (*(longlong *)(lVar11 + lVar20) != 0) {
                  FUN_1400020a8();
                }
                lVar11 = DAT_14c9a3da0;
                iVar5 = (int)lVar18;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
                }
                *(undefined4 *)(lVar11 + lVar20) = 0xffffffff;
                iVar7 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar7 = DAT_14c9a3dd0;
                }
                *(int *)(lVar11 + 4 + lVar20) = iVar7;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar16 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar16 = DAT_14c9a3dc0;
                }
                iVar7 = iVar5 + 0x1f;
                if (-1 < iVar5) {
                  iVar7 = iVar5;
                }
                bVar3 = (byte)lVar18 & 0x1f;
                DAT_14c9a3dd0 = iVar5;
                *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) =
                     *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) &
                     (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
                local_c8 = 0;
              }
              if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_e0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_e0 + 0x10))();
                }
              }
            }
            else {
              if (iVar5 == 0) {
LAB_1408a2ecf:
                uVar12 = 0;
              }
              else {
                uVar6 = *(uint *)(param_1 + 0x18);
                uVar12 = 0;
                if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
                  plVar13 = (longlong *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                  if ((plVar13 == (longlong *)0x0) ||
                     ((((int)plVar13[2] != iVar5 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) ||
                      (*plVar13 == 0)))) goto LAB_1408a2ecf;
                  uVar12 = (ulonglong)*(byte *)(*plVar13 + 0xbd8);
                }
              }
              fVar22 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar12 * 0x18) +
                                 0x144);
            }
            if (fVar22 <= fVar21) goto LAB_1408a293b;
            if (param_2 != 0) {
              pwVar15 = L"Waiting - Burst Delayed";
              goto LAB_1408a2931;
            }
            goto LAB_1408a2939;
          }
          if (*(char *)(param_1 + 0x1ea) == '\x01') {
            pcVar14 = (char *)(param_1 + 0x1e9);
          }
          else {
            if (iVar5 == 0) {
LAB_1408a2d06:
              uVar12 = 0;
            }
            else {
              uVar6 = *(uint *)(param_1 + 0x18);
              uVar12 = 0;
              if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
                plVar13 = (longlong *)
                          ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                if (((plVar13 == (longlong *)0x0) ||
                    (((int)plVar13[2] != iVar5 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) ||
                   (*plVar13 == 0)) goto LAB_1408a2d06;
                uVar12 = (ulonglong)*(byte *)(*plVar13 + 0xbd8);
              }
            }
            pcVar14 = (char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar12 * 0x18) + 300);
          }
          if (*pcVar14 == '\x01') {
            fVar21 = *(float *)(param_1 + 0x50c);
            if (*(char *)(param_1 + 0x298) == '\x01') {
              local_f0[0] = '\0';
              local_c8 = 0;
              FUN_1456bb102(local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
              pfVar10 = &local_c0;
              FUN_1448729ea(param_1 + 0x248,pfVar10,local_f0);
              if (local_a0 == 3) {
                uVar6 = 3;
                fVar22 = local_c0;
              }
              else {
                pfVar19 = &local_98;
                FUN_1400b56fe(pfVar19,&local_c0,3);
                fVar22 = 0.0;
                if (local_78 != 0) {
                  fVar22 = local_98;
                }
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
                if (pcVar2 != (code *)0x0) {
                  if (0x18 < local_80) {
                    pfVar19 = (float *)CONCAT44(uStack_94,local_98);
                  }
                  (*pcVar2)(pfVar19);
                }
                if (0x18 < local_80) {
                  FUN_1400020a8(CONCAT44(uStack_94,local_98));
                }
                uVar6 = (uint)local_a0;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_a8) {
                  pfVar10 = (float *)CONCAT44(uStack_bc,local_c0);
                }
                (*pcVar2)(pfVar10);
              }
              if (0x18 < local_a8) {
                FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
              }
              lVar11 = DAT_14c9a3da0;
              if ((longlong)local_c8 != 0) {
                lVar18 = (longlong)local_c8 + -1;
                lVar20 = lVar18 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
                if (*(longlong *)(lVar11 + lVar20) != 0) {
                  FUN_1400020a8();
                }
                lVar11 = DAT_14c9a3da0;
                iVar5 = (int)lVar18;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
                }
                *(undefined4 *)(lVar11 + lVar20) = 0xffffffff;
                iVar7 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar7 = DAT_14c9a3dd0;
                }
                *(int *)(lVar11 + 4 + lVar20) = iVar7;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar16 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar16 = DAT_14c9a3dc0;
                }
                iVar7 = iVar5 + 0x1f;
                if (-1 < iVar5) {
                  iVar7 = iVar5;
                }
                bVar3 = (byte)lVar18 & 0x1f;
                DAT_14c9a3dd0 = iVar5;
                *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) =
                     *(uint *)(puVar16 + (longlong)(iVar7 >> 5) * 4) &
                     (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
                local_c8 = 0;
              }
              if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_e0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_e0 + 0x10))();
                }
              }
            }
            else {
              if (iVar5 == 0) {
LAB_1408a321c:
                uVar12 = 0;
              }
              else {
                uVar6 = *(uint *)(param_1 + 0x18);
                uVar12 = 0;
                if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
                  plVar13 = (longlong *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                  if ((plVar13 == (longlong *)0x0) ||
                     ((((int)plVar13[2] != iVar5 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) ||
                      (*plVar13 == 0)))) goto LAB_1408a321c;
                  uVar12 = (ulonglong)*(byte *)(*plVar13 + 0xbd8);
                }
              }
              fVar22 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar12 * 0x18) +
                                 0x138);
            }
            if (fVar21 < fVar22) goto LAB_1408a293b;
          }
          else {
            if (((iVar5 == 0) || (uVar6 = *(uint *)(param_1 + 0x18), (int)uVar6 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar6 ||
                ((plVar13 = (longlong *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                 plVar13 == (longlong *)0x0 || ((int)plVar13[2] != iVar5)))))) {
              lVar11 = *(longlong *)(param_1 + 0x20);
              if (*(char *)(lVar11 + 8) == '\0') goto LAB_1408a2889;
LAB_1408a2da5:
              uVar12 = 0;
LAB_1408a2a4a:
              iVar5 = (**(code **)(**(longlong **)(lVar11 + uVar12 * 0x18) + 0x3c0))();
            }
            else {
              if (((*(uint *)(plVar13 + 1) & 0x10200000) == 0) && (*plVar13 != 0)) {
                uVar12 = (ulonglong)*(byte *)(*plVar13 + 0xbd8);
              }
              else {
                uVar12 = 0;
              }
              lVar11 = *(longlong *)(param_1 + 0x20);
              if (*(char *)(lVar11 + 8 + uVar12 * 0x18) != '\0') {
                if (((*(uint *)(plVar13 + 1) & 0x10200000) != 0) || (*plVar13 == 0))
                goto LAB_1408a2da5;
                uVar12 = (ulonglong)*(byte *)(*plVar13 + 0xbd8);
                goto LAB_1408a2a4a;
              }
LAB_1408a2889:
              iVar5 = *(int *)(param_1 + 0x514);
            }
            if (*(char *)(param_1 + 0x240) == '\x01') {
              iVar7 = FUN_148a1850c(param_1 + 0x40,
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x40));
            }
            else {
              if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1408a2d90:
                uVar12 = 0;
              }
              else {
                uVar6 = *(uint *)(param_1 + 0x18);
                uVar12 = 0;
                if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
                  plVar13 = (longlong *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                  if ((plVar13 == (longlong *)0x0) ||
                     ((((int)plVar13[2] != *(int *)(param_1 + 0x1c) ||
                       ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (*plVar13 == 0))))
                  goto LAB_1408a2d90;
                  uVar12 = (ulonglong)*(byte *)(*plVar13 + 0xbd8);
                }
              }
              iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar12 * 0x18) + 0x130)
              ;
            }
            if (iVar5 < iVar7) goto LAB_1408a293b;
          }
          if (param_2 != 0) {
            pwVar15 = L"Has Fired Enough";
            goto LAB_1408a2931;
          }
        }
        else if (param_2 != 0) {
          pwVar15 = L"Waiting - Switching modes";
          goto LAB_1408a2931;
        }
      }
    }
  }
LAB_1408a2939:
  uVar17 = 0;
LAB_1408a293b:
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a3462 FUN_1408a3462 body=89 status=ok
// SIG undefined FUN_1408a3462(void)

longlong FUN_1408a3462(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x268);
  if (((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x620) != 0)) &&
       (*(char *)(lVar1 + 0x629) == '\x01')) &&
      ((0 < *(int *)(lVar1 + 0x638) && (*(char *)(lVar1 + 0x628) == '\x01')))) &&
     ((*(longlong *)(param_1 + 0x270) != 0 &&
      ((lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1), *(longlong *)(param_1 + 0x278) != 0 ||
       (*(char *)(param_1 + 0x280) != '\x01')))))) {
    return lVar1;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(param_1 + 0x50) != '\0');
}



// FUNCTION 1408a34bc FUN_1408a34bc body=228 status=ok
// SIG undefined FUN_1408a34bc(void)

longlong FUN_1408a34bc(void)

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
  if (DAT_14cb20d80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f14ccb;
    local_40 = FUN_146430f58;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"CoverUser",&DAT_14cb20d80,&DAT_147f14cca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20d80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a35a2 FUN_1408a35a2 body=524 status=ok
// SIG undefined FUN_1408a35a2(void)

longlong FUN_1408a35a2(longlong *param_1)

{
  code ***pppcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code **ppcVar6;
  longlong *plVar7;
  code ***pppcVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  undefined1 *local_70;
  longlong **local_68;
  longlong local_60;
  longlong local_58;
  undefined1 **local_50;
  code *local_48;
  longlong *local_40;
  code **local_38;
  code *local_30;
  code ***local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_1[3] == 0) || (pppcVar8 = (code ***)param_1[4], pppcVar8 == (code ***)0x0)) ||
     (*(int *)(pppcVar8 + 1) < 1)) {
    if (((*param_1 != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
       (*(int *)((longlong)param_1 + 0xc) != 0)) {
      uVar4 = *(uint *)(param_1 + 1);
      lVar9 = 0;
      if (((int)uVar4 < 0) || (lVar9 = 0, DAT_14c9647dc <= (int)uVar4)) goto LAB_1408a35f8;
      lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if ((lVar9 != 0) &&
         ((*(int *)(lVar9 + 0x10) == *(int *)((longlong)param_1 + 0xc) &&
          ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
        plVar7 = (longlong *)0x0;
        if ((*(uint *)(lVar9 + 8) & 0x10200000) == 0) {
          plVar7 = (longlong *)param_1[2];
        }
        lVar9 = (**(code **)(*plVar7 + 0x10))();
        local_78 = &local_60;
        local_60 = 0;
        local_68 = &local_80;
        local_70 = &LAB_143cbcae0;
        local_80 = param_1;
        if (*(longlong *)(lVar9 + 0x40) != 0) {
          local_40 = &local_58;
          local_50 = &local_70;
          local_38 = &local_48;
          local_48 = FUN_143cbca2e;
          local_28 = &local_38;
          local_30 = FUN_1487df56e;
          local_58 = lVar9;
          FUN_1447c5ba2();
          lVar9 = local_60;
          if (local_60 != 0) {
            FUN_1408a3c94(local_60,&local_30);
            param_1[3] = (longlong)local_30;
            local_30 = (code *)0x0;
            plVar7 = (longlong *)param_1[4];
            param_1[4] = (longlong)local_28;
            local_28 = (code ***)0x0;
            if (plVar7 == (longlong *)0x0) goto LAB_1408a35f8;
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
            if (local_28 == (code ***)0x0) goto LAB_1408a35f8;
            LOCK();
            piVar2 = (int *)((longlong)local_28 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 != 0) goto LAB_1408a35f8;
            ppcVar6 = *local_28;
            pppcVar8 = local_28;
            goto LAB_1408a37a7;
          }
        }
      }
    }
    lVar9 = 0;
  }
  else {
    iVar5 = *(int *)(pppcVar8 + 1);
    do {
      lVar9 = 0;
      if (iVar5 == 0) goto LAB_1408a35f8;
      LOCK();
      iVar3 = *(int *)(pppcVar8 + 1);
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(pppcVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    lVar9 = param_1[3];
    LOCK();
    pppcVar1 = pppcVar8 + 1;
    *(int *)pppcVar1 = *(int *)pppcVar1 + -1;
    UNLOCK();
    if (*(int *)pppcVar1 != 0) goto LAB_1408a35f8;
    (***pppcVar8)(pppcVar8);
    LOCK();
    piVar2 = (int *)((longlong)pppcVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_1408a35f8;
    ppcVar6 = *pppcVar8;
LAB_1408a37a7:
    (*ppcVar6[2])(pppcVar8);
  }
LAB_1408a35f8:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 1408a37b0 FUN_1408a37b0 body=1251 status=ok
// SIG undefined FUN_1408a37b0(void)

undefined8 FUN_1408a37b0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  lVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
  iVar2 = *(int *)(lVar4 + 0x178);
  puVar19 = (uint *)(lVar4 + 0x160);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar15 = 0;
    iVar18 = 0;
  }
  else {
    puVar6 = *(uint **)(lVar4 + 0x170);
    if (*(uint **)(lVar4 + 0x170) == (uint *)0x0) {
      puVar6 = puVar19;
    }
    uVar16 = *puVar6;
    if (uVar16 == 0) {
      iVar18 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar18 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar15 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_1408a395c;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar14 = 0;
      iVar15 = 0;
    }
    uVar12 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar12 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar18 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar18) {
      iVar18 = iVar2;
    }
  }
  if (iVar18 == iVar2) {
LAB_1408a395c:
    bVar3 = false;
  }
  else {
    iVar10 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar10 = iVar2 + -1;
    }
    iVar10 = iVar10 >> 5;
    puVar6 = *(uint **)(lVar4 + 0x170);
    if (*(uint **)(lVar4 + 0x170) == (uint *)0x0) {
      puVar6 = puVar19;
    }
    uVar16 = 0xffffffff;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x150) + 8 + (longlong)iVar18 * 0x20);
      if ((lVar8 != 0) && (bVar3 = true, *(char *)(lVar8 + 0x538) != '\0')) break;
      uVar16 = uVar16 & ~(uint)uVar12;
      iVar18 = (int)uVar14;
      lVar8 = (longlong)iVar18;
      uVar13 = puVar6[lVar8] & uVar16;
      if (uVar13 == 0) {
        iVar11 = iVar10;
        if (iVar10 < iVar18) {
          iVar11 = iVar18;
        }
        if (iVar10 <= iVar18) goto LAB_1408a395c;
        lVar17 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar13 = puVar6[lVar8 + lVar17 + 1];
          if (uVar13 != 0) break;
          lVar17 = lVar17 + 1;
          bVar3 = false;
          if (iVar11 - lVar8 == lVar17) goto LAB_1408a395f;
        }
        uVar14 = (ulonglong)(iVar18 + (int)lVar17 + 1);
        uVar16 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar12 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar18 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      bVar3 = false;
    } while (iVar18 < iVar2);
  }
LAB_1408a395f:
  puVar6 = (uint *)(lVar5 + 0x160);
  iVar18 = *(int *)(lVar5 + 0x178);
  if (iVar18 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar15 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar5 + 0x170);
    if (*(uint **)(lVar5 + 0x170) == (uint *)0x0) {
      puVar9 = puVar6;
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar15 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar15 = iVar18 + -1;
      }
      uVar14 = 0;
      uVar13 = iVar15 >> 5;
      if (iVar15 >> 5 < 1) {
        uVar13 = 0;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar14) goto LAB_1408a3acf;
        iVar10 = iVar10 + 0x20;
        uVar16 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar12 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar15 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar15) {
      iVar15 = iVar18;
    }
  }
  if (iVar15 != iVar18) {
    iVar11 = iVar18 + 0x1e;
    if (-1 < iVar18 + -1) {
      iVar11 = iVar18 + -1;
    }
    iVar11 = iVar11 >> 5;
    if (*(uint **)(lVar5 + 0x170) != (uint *)0x0) {
      puVar6 = *(uint **)(lVar5 + 0x170);
    }
    uVar16 = 0xffffffff;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x150) + 8 + (longlong)iVar15 * 0x20);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x538) != '\0')) {
        if (!bVar3) goto LAB_1408a3ad8;
        goto LAB_1408a3b66;
      }
      uVar16 = uVar16 & ~(uint)uVar12;
      iVar15 = (int)uVar14;
      lVar8 = (longlong)iVar15;
      uVar13 = puVar6[lVar8] & uVar16;
      if (uVar13 == 0) {
        iVar20 = iVar11;
        if (iVar11 < iVar15) {
          iVar20 = iVar15;
        }
        if (iVar11 <= iVar15) break;
        lVar17 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar13 = puVar6[lVar8 + lVar17 + 1];
          if (uVar13 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar20 - lVar8 == lVar17) goto LAB_1408a3acf;
        }
        uVar14 = (ulonglong)(iVar15 + (int)lVar17 + 1);
        uVar16 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar12 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar15 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar18);
  }
LAB_1408a3acf:
  if (bVar3) {
LAB_1408a3ad8:
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar12 = 0;
      iVar15 = 0;
      iVar18 = 0;
    }
    else {
      puVar6 = *(uint **)(lVar4 + 0x170);
      if (*(uint **)(lVar4 + 0x170) == (uint *)0x0) {
        puVar6 = puVar19;
      }
      uVar16 = *puVar6;
      if (uVar16 == 0) {
        iVar18 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar18 = iVar2 + -1;
        }
        uVar12 = 0;
        uVar14 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar14 = uVar12;
        }
        iVar15 = 0;
        do {
          if (uVar14 == uVar12) goto LAB_1408a3c75;
          iVar15 = iVar15 + 0x20;
          uVar16 = puVar6[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar12 = 0;
        iVar15 = 0;
      }
      uVar14 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar14 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar18 = (iVar15 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar18) {
        iVar18 = iVar2;
      }
    }
    if (iVar18 == iVar2) {
LAB_1408a3c75:
      uVar7 = 0;
    }
    else {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      iVar10 = iVar10 >> 5;
      if (*(uint **)(lVar4 + 0x170) != (uint *)0x0) {
        puVar19 = *(uint **)(lVar4 + 0x170);
      }
      uVar16 = 0xffffffff;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x150) + 8 + (longlong)iVar18 * 0x20);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x538) != '\0')) {
          return CONCAT71((int7)((ulonglong)((longlong)iVar18 * 0x20) >> 8),1);
        }
        uVar16 = uVar16 & ~(uint)uVar14;
        iVar18 = (int)uVar12;
        lVar5 = (longlong)iVar18;
        uVar13 = puVar19[lVar5] & uVar16;
        if (uVar13 == 0) {
          iVar11 = iVar10;
          if (iVar10 < iVar18) {
            iVar11 = iVar18;
          }
          if (iVar10 <= iVar18) goto LAB_1408a3c75;
          lVar8 = 0;
          while( true ) {
            iVar15 = iVar15 + 0x20;
            uVar13 = puVar19[lVar5 + lVar8 + 1];
            if (uVar13 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar11 - lVar5 == lVar8) {
              return 0;
            }
          }
          uVar12 = (ulonglong)(iVar18 + (int)lVar8 + 1);
          uVar16 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar14 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar18 = (iVar15 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        uVar7 = 0;
      } while (iVar18 < iVar2);
    }
  }
  else {
LAB_1408a3b66:
    uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),
                     *(float *)(lVar4 + 0x148) <= *(float *)(lVar5 + 0x148) &&
                     *(float *)(lVar5 + 0x148) != *(float *)(lVar4 + 0x148));
  }
  return uVar7;
}



// FUNCTION 1408a3c94 FUN_1408a3c94 body=140 status=ok
// SIG undefined FUN_1408a3c94(void)

longlong * FUN_1408a3c94(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      param_1 = 0;
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x118);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
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
        *param_2 = param_1;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return param_2;
      }
    }
    *param_2 = param_1;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1408a3d20 FUN_1408a3d20 body=1620 status=ok
// SIG undefined FUN_1408a3d20(void)

undefined8 FUN_1408a3d20(undefined4 *param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  undefined2 *local_1c0;
  undefined2 *local_1b8;
  undefined2 *local_1b0;
  undefined2 *local_1a8;
  undefined2 *local_1a0;
  undefined2 *local_198;
  double local_190;
  undefined4 local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined4 local_160;
  undefined4 local_150;
  char local_149;
  undefined8 local_148;
  undefined2 *local_140;
  undefined2 *local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120;
  uint local_11c;
  undefined2 *local_118;
  undefined2 *local_110;
  undefined2 *local_108;
  undefined2 *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_128 = *param_1;
  local_11c = (uint)param_1[0x3c] >> 0x10;
  local_120 = DAT_14c87eb08 + 1;
  local_108 = &DAT_149e01fe8;
  local_148 = param_2;
  if ((local_11c < local_120) &&
     (FUN_1400021e4(param_1 + 0x3c,&local_70), local_108 = local_70, local_68 == 0)) {
    local_108 = &DAT_149dfb77a;
  }
  local_138 = &DAT_149e01fe8;
  if (param_1[0x37] != 0) {
    uVar2 = param_1[0x36];
    local_124 = 0;
    if (-1 < (int)uVar2) {
      local_110 = &DAT_149e01fe8;
      if (DAT_14c9647dc <= (int)uVar2) goto LAB_1408a3e28;
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == param_1[0x37])) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
        lVar3 = FUN_14479d2ce();
        local_90 = *(undefined2 **)(lVar3 + 0x18);
        FUN_1400021e4(&local_90,&local_80);
        local_110 = local_80;
        if (local_78 == 0) {
          local_110 = &DAT_149dfb77a;
        }
        local_124 = (undefined4)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        goto LAB_1408a3e28;
      }
    }
  }
  local_124 = 0;
  local_110 = &DAT_149e01fe8;
LAB_1408a3e28:
  local_149 = FUN_144a41512(param_1 + 0x2e);
  local_140 = &DAT_149e01fe8;
  if ((local_149 != '\0') &&
     (FUN_1463c709e(param_1 + 0x2e,&local_90), local_140 = local_90, local_88 == 0)) {
    local_140 = &DAT_149dfb77a;
  }
  if (((param_1[0x2d] == 0) || (uVar2 = param_1[0x2c], (int)uVar2 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar2 ||
      (((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0 ||
        (*(int *)(lVar7 + 0x10) != param_1[0x2d])) || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))))
     ) {
    local_150 = 0;
  }
  else {
    lVar7 = FUN_14479d2ce();
    local_b0 = *(undefined2 **)(lVar7 + 0x18);
    FUN_1400021e4(&local_b0,&local_a0);
    local_138 = local_a0;
    if (local_98 == 0) {
      local_138 = &DAT_149dfb77a;
    }
    local_150 = (undefined4)CONCAT71((int7)((ulonglong)local_138 >> 8),1);
  }
  fVar1 = (float)param_1[0x28];
  local_12c = param_1[0x2a];
  local_1c8 = *(double *)(param_1 + 0x26);
  FUN_140002266(&local_b0,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x22),
                *(undefined8 *)(param_1 + 0x24));
  local_118 = &DAT_149dfb77a;
  if (local_a8 != 0) {
    local_118 = local_b0;
  }
  local_1c8 = *(double *)(param_1 + 0x20);
  FUN_140002266(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x1c),
                *(undefined8 *)(param_1 + 0x1e));
  puVar4 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    puVar4 = local_c0;
  }
  local_1c8 = *(double *)(param_1 + 0x1a);
  FUN_140002266(&local_d0,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x16),
                *(undefined8 *)(param_1 + 0x18));
  puVar10 = &DAT_149dfb77a;
  if (local_c8 != 0) {
    puVar10 = local_d0;
  }
  local_1c8 = *(double *)(param_1 + 0x14);
  FUN_140002266(&local_e0,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x12));
  puVar5 = &DAT_149dfb77a;
  if (local_d8 != 0) {
    puVar5 = local_e0;
  }
  local_1c8 = *(double *)(param_1 + 0xe);
  FUN_140002266(&local_f0,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 10),
                *(undefined8 *)(param_1 + 0xc));
  local_1b8 = &DAT_149dfb77a;
  if (local_e8 != 0) {
    local_1b8 = local_f0;
  }
  local_1c8 = *(double *)(param_1 + 8);
  FUN_140002266(&local_100,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 4),
                *(undefined8 *)(param_1 + 6));
  uVar6 = local_148;
  local_1c0 = &DAT_149dfb77a;
  if (local_f8 != 0) {
    local_1c0 = local_100;
  }
  pwVar8 = L"True";
  pwVar9 = L"True";
  if ((*(byte *)((longlong)param_1 + 0xad) & 2) == 0) {
    pwVar9 = L"False";
  }
  if ((*(byte *)((longlong)param_1 + 0xad) & 1) == 0) {
    pwVar8 = L"False";
  }
  local_1c8 = (double)(float)param_1[1];
  local_160 = local_128;
  local_168 = local_108;
  local_170 = local_110;
  local_178 = local_140;
  local_180 = local_138;
  local_188 = local_12c;
  local_198 = local_118;
  local_1b0 = puVar5;
  local_1a8 = puVar10;
  local_1a0 = puVar4;
  local_190 = (double)fVar1;
  FUN_140002266(local_148,
                L"bBlockingHit:%s bStartPenetrating:%s Time:%f Location:%s ImpactPoint:%s Normal:%s ImpactNormal:%s TraceStart:%s TraceEnd:%s PenetrationDepth:%f Item:%d PhysMaterial:%s Actor:%s Component:%s BoneName:%s FaceIndex:%d"
                ,pwVar8,pwVar9);
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (((char)local_150 != '\0') && (uVar6 = local_148, local_a0 != (undefined2 *)0x0)) {
    FUN_1400020a8();
    uVar6 = local_148;
  }
  if ((local_149 != '\0') && (uVar6 = local_148, local_90 != (undefined2 *)0x0)) {
    FUN_1400020a8();
    uVar6 = local_148;
  }
  if (((char)local_124 != '\0') && (uVar6 = local_148, local_80 != (undefined2 *)0x0)) {
    FUN_1400020a8();
    uVar6 = local_148;
  }
  if ((local_11c < local_120) && (local_70 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1408a4376 FUN_1408a4376 body=383 status=ok
// SIG undefined FUN_1408a4376(void)

void FUN_1408a4376(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    plVar3 = (longlong *)FUN_1409179ca();
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140ee5b12();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = FUN_140ee5b12();
        plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
        if ((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
      }
      if (*(longlong *)(param_1 + 0x458) != 0) {
        cVar1 = FUN_144729dda(param_1 + 0x450);
        if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x458) != (longlong *)0x0)) {
          lVar6 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))();
          uVar2 = *(uint *)(param_1 + 0x464);
          iVar7 = *(int *)(lVar6 + 0xa8);
          if ((-1 < (longlong)(int)uVar2) &&
             ((((int)uVar2 < iVar7 && (*(longlong *)(lVar6 + 0x150) != 0)) &&
              (*(char *)(*(longlong *)(lVar6 + 0x150) + 0x178) == '\x03')))) {
            lVar8 = (longlong)(int)uVar2 * 0x170;
            if (*(longlong *)(*(longlong *)(lVar6 + 0xa0) + 0x20 + lVar8) != 0) {
              *(undefined8 *)(*(longlong *)(lVar6 + 0xa0) + lVar8 + 0x20) = 0;
              uVar2 = *(uint *)(param_1 + 0x464);
              iVar7 = *(int *)(lVar6 + 0xa8);
            }
          }
          if ((-1 < (int)uVar2) && ((int)uVar2 < iVar7)) {
            lVar8 = (ulonglong)uVar2 * 0x170;
            FUN_140e7ecae(lVar6,*(longlong *)(lVar6 + 0xa0) + lVar8);
            *(undefined8 *)(*(longlong *)(lVar6 + 0xa0) + 0x28 + lVar8) = 0;
            *(undefined8 *)(*(longlong *)(lVar6 + 0xa0) + 0x30 + lVar8) = 0;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x2e0) = 3;
      lVar6 = *(longlong *)(param_1 + 0x2e8);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x2c0) = *(undefined1 *)(*(longlong *)(lVar6 + 0x2a8) + 0x2e0);
      }
      return;
    }
  }
  return;
}



// FUNCTION 1408a44f6 FUN_1408a44f6 body=159 status=ok
// SIG undefined FUN_1408a44f6(void)

undefined8 FUN_1408a44f6(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1408a4596(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1408a4596 FUN_1408a4596 body=91 status=ok
// SIG undefined FUN_1408a4596(void)

void FUN_1408a4596(longlong *param_1,int param_2)

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
  FUN_1408a45f2(param_1,param_2,1);
  return;
}



// FUNCTION 1408a45f2 FUN_1408a45f2 body=136 status=ok
// SIG undefined FUN_1408a45f2(void)

void FUN_1408a45f2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1408a467a FUN_1408a467a body=125 status=ok
// SIG undefined FUN_1408a467a(void)

undefined8 * FUN_1408a467a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1408a46f8();
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



// FUNCTION 1408a46f8 FUN_1408a46f8 body=150 status=ok
// SIG undefined FUN_1408a46f8(void)

longlong * FUN_1408a46f8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1408a478e FUN_1408a478e body=93 status=ok
// SIG undefined FUN_1408a478e(void)

undefined8 * FUN_1408a478e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0be130;
  FUN_1408a47eb(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408a47eb FUN_1408a47eb body=105 status=ok
// SIG undefined FUN_1408a47eb(void)

void FUN_1408a47eb(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408a4860 FUN_1408a4860 body=193 status=ok
// SIG undefined FUN_1408a4860(void)

void FUN_1408a4860(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1408a4922(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined4 *)((longlong)iVar1 * 0x50 + *param_1 + 0x48);
      do {
        *(undefined8 *)(puVar2 + -10) = 0;
        puVar2[-8] = 0;
        *(undefined8 *)(puVar2 + -0x12) = 0;
        *(undefined8 *)(puVar2 + -0x10) = 0;
        *(undefined8 *)(puVar2 + -7) = 0xffffffff00000080;
        puVar2[-5] = 0;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x14;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146d9c006(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d9c06e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1408a4922 FUN_1408a4922 body=275 status=ok
// SIG undefined FUN_1408a4922(void)

void FUN_1408a4922(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1408a4a36 FUN_1408a4a36 body=75 status=ok
// SIG undefined FUN_1408a4a36(void)

void FUN_1408a4a36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_18 = 1;
  local_10 = param_3;
  FUN_1408a4a82();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a4a82 FUN_1408a4a82 body=6168 status=ok
// SIG undefined FUN_1408a4a82(void)

void FUN_1408a4a82(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  uint *puVar19;
  undefined ***pppuVar20;
  longlong lVar21;
  uint *puVar22;
  undefined8 unaff_RBX;
  ulonglong uVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  undefined4 *puVar28;
  int *piVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_198 [32];
  LARGE_INTEGER *local_178;
  longlong *local_168;
  undefined4 local_15c;
  int *local_158;
  undefined4 local_14c;
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  code *local_130;
  undefined8 uStack_128;
  LARGE_INTEGER LStack_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  void *local_f8;
  ulonglong uStack_f0;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8 [16];
  LARGE_INTEGER local_a8;
  ulonglong uStack_a0;
  undefined ***local_98;
  undefined **local_88;
  code *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  DWORD DStack_70;
  LONG LStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar16 = *(longlong *)*param_3;
  local_168 = param_3;
  if (*(longlong **)(lVar16 + 0x40) == (longlong *)0x0) {
LAB_1408a4b7d:
    local_15c = (undefined4)CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
    plVar15 = (longlong *)0x0;
    uVar10 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    plVar15 = (longlong *)(**(code **)(**(longlong **)(lVar16 + 0x40) + 0x3e0))();
    lVar16 = 0;
    if (plVar15 == (longlong *)0x0) goto LAB_1408a4b7d;
    lVar16 = (**(code **)(*plVar15 + 0x3d0))(plVar15);
    if (lVar16 == 0) {
      local_15c = 1;
      uVar10 = 0;
    }
    else {
      DVar13 = DAT_14c758730;
      if (DAT_14c758730 == 0xffffffff) {
        DVar13 = TlsAlloc();
        DVar14 = 0xffffffff;
        LOCK();
        bVar31 = DAT_14c758730 != 0xffffffff;
        DVar9 = DVar13;
        if (bVar31) {
          DVar14 = DAT_14c758730;
          DVar9 = DAT_14c758730;
        }
        DAT_14c758730 = DVar9;
        UNLOCK();
        if (bVar31) {
          TlsFree(DVar13);
          DVar13 = DVar14;
        }
      }
      puVar17 = TlsGetValue(DVar13);
      if (puVar17 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        DVar14 = GetCurrentThreadId();
        *(DWORD *)(puVar17 + 1) = DVar14;
        *puVar17 = &PTR_FUN_149e06328;
        puVar17[2] = 0;
        *(undefined4 *)(puVar17 + 3) = 1;
        *(undefined1 *)((longlong)puVar17 + 0x1c) = 0;
        FUN_140fddf04(puVar17);
        TlsSetValue(DVar13,puVar17);
      }
      *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
      FUN_14083337a(lVar16);
      DVar13 = DAT_14c758730;
      if (DAT_14c758730 == 0xffffffff) {
        DVar13 = TlsAlloc();
        DVar14 = 0xffffffff;
        LOCK();
        bVar31 = DAT_14c758730 != 0xffffffff;
        DVar9 = DVar13;
        if (bVar31) {
          DVar14 = DAT_14c758730;
          DVar9 = DAT_14c758730;
        }
        DAT_14c758730 = DVar9;
        UNLOCK();
        if (bVar31) {
          TlsFree(DVar13);
          DVar13 = DVar14;
        }
      }
      puVar17 = TlsGetValue(DVar13);
      if (puVar17 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        DVar14 = GetCurrentThreadId();
        *(DWORD *)(puVar17 + 1) = DVar14;
        *puVar17 = &PTR_FUN_149e06328;
        puVar17[2] = 0;
        *(undefined4 *)(puVar17 + 3) = 1;
        *(undefined1 *)((longlong)puVar17 + 0x1c) = 0;
        FUN_140fddf04(puVar17);
        TlsSetValue(DVar13,puVar17);
      }
      *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + -1;
      if (DAT_14caf1b90 == '\0') {
        FUN_145e7ba6a(&DAT_14caf1948);
      }
      FUN_143585238(&DAT_14caf1948);
      uVar10 = 0;
      local_15c = 0;
      param_3 = local_168;
    }
  }
  piVar29 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  iVar12 = *piVar29;
  if (DAT_14c86a9fc == 0) {
    if (iVar12 != 2) {
      if (iVar12 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar31 = DVar13 == DVar14;
      }
      else {
        bVar31 = iVar12 == 0x10;
      }
      param_3 = local_168;
      if (!bVar31) goto LAB_1408a4c13;
    }
LAB_1408a4bb4:
    DVar13 = DAT_14c758730;
    if (DAT_14c758730 == 0xffffffff) {
      DVar13 = TlsAlloc();
      DVar14 = 0xffffffff;
      LOCK();
      bVar31 = DAT_14c758730 != 0xffffffff;
      DVar9 = DVar13;
      if (bVar31) {
        DVar14 = DAT_14c758730;
        DVar9 = DAT_14c758730;
      }
      DAT_14c758730 = DVar9;
      UNLOCK();
      if (bVar31) {
        TlsFree(DVar13);
        DVar13 = DVar14;
      }
    }
    puVar17 = TlsGetValue(DVar13);
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      DVar14 = GetCurrentThreadId();
      *(DWORD *)(puVar17 + 1) = DVar14;
      *puVar17 = &PTR_FUN_149e06328;
      puVar17[2] = 0;
      *(undefined4 *)(puVar17 + 3) = 1;
      *(undefined1 *)((longlong)puVar17 + 0x1c) = 0;
      FUN_140fddf04(puVar17);
      TlsSetValue(DVar13,puVar17);
    }
    *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
    param_3 = local_168;
  }
  else {
    if (iVar12 == 0x10) goto LAB_1408a4bb4;
LAB_1408a4c13:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar29 == 2)) goto LAB_1408a4bb4;
      if (*piVar29 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        param_3 = local_168;
        if (DVar13 == DVar14) goto LAB_1408a4bb4;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar17 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar17;
      if (puVar19 != (uint *)0x0) goto LAB_1408a4d83;
      do {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_142fe9a45);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar28 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar28 == (undefined4 *)0x0) {
          puVar28 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar28 = 0xffffffff;
        *(undefined4 **)(puVar28 + 0x10) = puVar28 + 0x16;
        puVar28[0x12] = 0;
        *puVar17 = puVar28;
        FUN_140217a48(puVar17);
        puVar19 = (uint *)*puVar17;
LAB_1408a4d83:
        uVar23 = *(longlong *)(puVar19 + 0x10) + 7;
        uVar11 = puVar19[0x12];
        while( true ) {
          puVar26 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
          if (puVar26 + 0x16 <= puVar19 + 0x4000) {
            *(undefined8 **)(puVar19 + 0x10) = puVar26 + 0x16;
            puVar19[0x12] = uVar11 + 1;
            iVar12 = 0;
            FUN_1447247dc(puVar26,0);
            *puVar26 = &PTR_FUN_14a2f1490;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar11 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
                uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
              }
              else {
                uVar23 = 2;
              }
            }
            else {
              iVar12 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar23 = 5;
            }
            if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
            }
            puVar26[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar26[9] = puVar26;
            puVar26[10] = puVar26;
            lVar16 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar16 == 0) {
              uVar8 = 1;
              if ((char)uVar23 != '\x06') {
                uVar8 = uVar23;
              }
              uVar23 = uVar8;
              uVar18 = 0;
            }
            else {
              if ((char)uVar23 == '\x06') {
                uVar23 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
              }
              uVar18 = *(undefined8 *)(lVar16 + 0x30);
            }
            puVar26[0xf] = uVar18;
            puVar26[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar26 + 0x1c) = iVar12;
            if (puVar26 == (undefined8 *)0x0) {
              local_a8.s.LowPart._0_1_ = 1;
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
              UNLOCK();
              local_a8.s.LowPart._0_1_ = 1;
              FUN_1447439e4(puVar26);
              LOCK();
              piVar1 = (int *)(puVar26 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar26)(puVar26);
              }
            }
            goto LAB_1408a4cb2;
          }
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar3 = *puVar19;
          *puVar19 = *puVar19 + uVar11 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar11) != 0xffffffff) break;
          puVar19 = (uint *)*puVar17;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar17 = puVar19;
          uVar23 = (longlong)puVar19 + 0x5f;
          uVar11 = 0;
        }
      } while( true );
    }
    local_178 = &local_a8;
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14a2f19c0;
    local_80 = FUN_142ffe592;
    local_a8.QuadPart = (LONGLONG)&LAB_1448467b2;
    FUN_14005a792(&DAT_14ca9a440,L"SetRtWaitCriticalPath",&DAT_14ca473d8);
    if ((undefined1 *)local_a8.QuadPart != (undefined1 *)0x0) {
      pppuVar20 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar20 = &local_88;
      }
      (*(code *)(*pppuVar20)[2])();
    }
  }
LAB_1408a4cb2:
  FUN_143578b70(&local_d9);
  iVar12 = *piVar29;
  if (DAT_14c86a9fc == 0) {
    if (iVar12 != 2) {
      if (iVar12 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar31 = DVar13 == DVar14;
      }
      else {
        bVar31 = iVar12 == 0x10;
      }
      param_3 = local_168;
      if (!bVar31) goto LAB_1408a5021;
    }
LAB_1408a4cd9:
    FUN_142fe21ca();
  }
  else {
    if (iVar12 == 0x10) goto LAB_1408a4cd9;
LAB_1408a5021:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar29 == 2)) goto LAB_1408a4cd9;
      if (*piVar29 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        param_3 = local_168;
        if (DVar13 == DVar14) goto LAB_1408a4cd9;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar17 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar17;
      if (puVar19 != (uint *)0x0) goto LAB_1408a55c0;
      do {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_142fe9a45);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar28 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar28 == (undefined4 *)0x0) {
          puVar28 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar28 = 0xffffffff;
        *(undefined4 **)(puVar28 + 0x10) = puVar28 + 0x16;
        puVar28[0x12] = 0;
        *puVar17 = puVar28;
        FUN_140217a48(puVar17);
        puVar19 = (uint *)*puVar17;
LAB_1408a55c0:
        uVar23 = *(longlong *)(puVar19 + 0x10) + 7;
        uVar11 = puVar19[0x12];
        while( true ) {
          puVar26 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
          if (puVar26 + 0x16 <= puVar19 + 0x4000) {
            *(undefined8 **)(puVar19 + 0x10) = puVar26 + 0x16;
            puVar19[0x12] = uVar11 + 1;
            iVar12 = 0;
            FUN_1447247dc(puVar26,0);
            *puVar26 = &PTR_FUN_14a2f14d0;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar11 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
                uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
              }
              else {
                uVar23 = 2;
              }
            }
            else {
              iVar12 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar23 = 5;
            }
            if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
            }
            puVar26[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar26[9] = puVar26;
            puVar26[10] = puVar26;
            lVar16 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar16 == 0) {
              uVar8 = 1;
              if ((char)uVar23 != '\x06') {
                uVar8 = uVar23;
              }
              uVar23 = uVar8;
              uVar18 = 0;
            }
            else {
              if ((char)uVar23 == '\x06') {
                uVar23 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
              }
              uVar18 = *(undefined8 *)(lVar16 + 0x30);
            }
            puVar26[0xf] = uVar18;
            puVar26[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar26 + 0x1c) = iVar12;
            if (puVar26 == (undefined8 *)0x0) {
              local_a8.s.LowPart._0_1_ = 1;
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
              UNLOCK();
              local_a8.s.LowPart._0_1_ = 1;
              FUN_1447439e4(puVar26);
              LOCK();
              piVar1 = (int *)(puVar26 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar26)(puVar26);
              }
            }
            goto LAB_1408a50c8;
          }
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar3 = *puVar19;
          *puVar19 = *puVar19 + uVar11 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar11) != 0xffffffff) break;
          puVar19 = (uint *)*puVar17;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar17 = puVar19;
          uVar23 = (longlong)puVar19 + 0x5f;
          uVar11 = 0;
        }
      } while( true );
    }
    local_178 = &local_a8;
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14a2f19c0;
    local_80 = (code *)&LAB_142ffe82c;
    local_a8.QuadPart = (LONGLONG)&LAB_1448467b2;
    FUN_14005a792(&DAT_14ca9a440,L"UpdateFastVRamConfig",&DAT_14ca473dc);
    if ((undefined1 *)local_a8.QuadPart != (undefined1 *)0x0) {
      pppuVar20 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar20 = &local_88;
      }
      (*(code *)(*pppuVar20)[2])();
    }
  }
LAB_1408a50c8:
  FUN_143222f6a(local_d0);
  local_140 = param_2;
  FUN_14376e4da(param_2);
  uVar5 = DAT_14c75b13c;
  plVar24 = (longlong *)*param_3;
  local_14c = uVar10;
  if ((char)uVar10 == '\0') {
    if (*(char *)(*plVar24 + 0xcf) == '\x01') {
      (**(code **)(*plVar15 + 0x498))(plVar15);
      plVar24 = (longlong *)*param_3;
    }
    lVar16 = param_3[1];
    if ((longlong)(int)lVar16 != 0) {
      lVar21 = 0;
      do {
        lVar25 = *(longlong *)((longlong)plVar24 + lVar21);
        uVar10 = (**(code **)(*plVar15 + 0x490))(plVar15);
        *(undefined4 *)(lVar25 + 0xac) = uVar10;
        lVar21 = lVar21 + 8;
      } while ((longlong)(int)lVar16 * 8 != lVar21);
    }
  }
  else {
    lVar16 = param_3[1];
    if ((longlong)(int)lVar16 != 0) {
      lVar21 = 0;
      do {
        *(undefined4 *)(*(longlong *)((longlong)plVar24 + lVar21) + 0xac) = uVar5;
        lVar21 = lVar21 + 8;
      } while ((longlong)(int)lVar16 * 8 != lVar21);
    }
  }
  FUN_140083894();
  uVar11 = DAT_14cad3bb0;
  if ((longlong)(int)param_3[1] != 0) {
    uVar23 = (ulonglong)DAT_14cad3bb0;
    local_158 = piVar29;
    local_148 = plVar15;
    if ((int)DAT_14cad3bb0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar23);
    }
    plVar24 = (longlong *)*param_3;
    local_138 = plVar24 + (int)param_3[1];
    do {
      lVar21 = *plVar24;
      lVar16 = lVar21 + 0x138;
      *(undefined4 *)(lVar21 + 0x170) = 0;
      if (*(uint *)(lVar21 + 0x174) != uVar11) {
        FUN_14152897a(lVar16,uVar11);
      }
      if (uVar23 != 0) {
        lVar25 = 0;
        do {
          FUN_140083894();
          puVar28 = (undefined4 *)(DAT_14cad3ba8 + lVar25);
          iVar12 = *(int *)(lVar21 + 0x170);
          *(uint *)(lVar21 + 0x170) = iVar12 + 1U;
          if (*(uint *)(lVar21 + 0x174) < iVar12 + 1U) {
            FUN_14721b87e(lVar16,iVar12);
          }
          lVar30 = *(longlong *)(lVar21 + 0x168);
          if (*(longlong *)(lVar21 + 0x168) == 0) {
            lVar30 = lVar16;
          }
          *(undefined8 *)(lVar30 + 0x10 + (longlong)iVar12 * 0x18) = *(undefined8 *)(puVar28 + 4);
          uVar10 = puVar28[1];
          uVar5 = puVar28[2];
          uVar6 = puVar28[3];
          puVar2 = (undefined4 *)(lVar30 + (longlong)iVar12 * 0x18);
          *puVar2 = *puVar28;
          puVar2[1] = uVar10;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          lVar25 = lVar25 + 0x38;
        } while (uVar23 * 0x38 - lVar25 != 0);
      }
      plVar15 = local_148;
      piVar29 = local_158;
      plVar24 = plVar24 + 1;
    } while (plVar24 != local_138);
    if ((longlong)(int)local_168[1] != 0) {
      plVar27 = (longlong *)*local_168;
      plVar24 = plVar27 + (int)local_168[1];
      do {
        lVar16 = *plVar27;
        *(undefined8 *)(lVar16 + 0xb0) = DAT_14c872be0;
        if (0 < *(int *)(lVar16 + 0x100)) {
          lVar21 = 0;
          lVar25 = 0;
          do {
            plVar4 = *(longlong **)(*(longlong *)(lVar16 + 0xf8) + lVar21);
            (**(code **)(*plVar4 + 0x28))(plVar4,lVar16);
            lVar25 = lVar25 + 1;
            lVar21 = lVar21 + 0x10;
          } while (lVar25 < *(int *)(lVar16 + 0x100));
        }
        plVar27 = plVar27 + 1;
      } while (plVar27 != plVar24);
    }
  }
  if ((char)local_14c != '\0') goto LAB_1408a5973;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  lVar16 = local_168[1];
  if ((longlong)(int)lVar16 != 0) {
    lVar21 = *local_168;
    lVar25 = 0;
    do {
      uVar23 = uStack_100;
      uVar18 = *(undefined8 *)(lVar21 + lVar25);
      lVar30 = (longlong)(int)uStack_100;
      uVar11 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar11);
      if (uStack_100._4_4_ < uVar11) {
        FUN_140290316(&local_108,uVar23 & 0xffffffff);
      }
      *(undefined8 *)(local_108 + lVar30 * 8) = uVar18;
      lVar25 = lVar25 + 8;
    } while ((longlong)(int)lVar16 * 8 != lVar25);
  }
  lVar16 = local_140;
  if (*(longlong *)(local_140 + 0x60) == 0) {
    FUN_140bf13a7(plVar15,&local_108);
    local_118 = local_108;
    local_110 = (int)uStack_100;
    FUN_140f0ebf8(&local_118,*(undefined8 *)(lVar16 + 0x60));
    iVar12 = (int)plVar15[0x6e6];
    if (0 < iVar12) {
      lVar16 = 0;
      do {
        pvVar7 = local_f8;
        lVar21 = (longlong)(int)uStack_f0;
        if (lVar21 != 0) {
          uVar18 = *(undefined8 *)(plVar15[0x6e5] + lVar16 * 8);
          lVar25 = 0;
          do {
            if ((*(byte *)(*(longlong *)((longlong)pvVar7 + lVar25) + 0xf8) & 2) == 0) {
              (**(code **)(*plVar15 + 0x1d0))(plVar15,uVar18);
            }
            lVar25 = lVar25 + 8;
          } while (lVar21 * 8 != lVar25);
          iVar12 = (int)plVar15[0x6e6];
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar12);
    }
  }
  else {
    local_118 = local_108;
    local_110 = (int)uStack_100;
    FUN_140f0ebf8();
  }
  if ((longlong)(int)uStack_f0 != 0) {
    lVar16 = 0;
    do {
      *(undefined4 *)(*(longlong *)((longlong)local_f8 + lVar16) + 0x1a0) = 0;
      lVar21 = DAT_14ca46348;
      lVar16 = lVar16 + 8;
    } while ((longlong)(int)uStack_f0 * 8 - lVar16 != 0);
    if ((1 < (int)uStack_f0) && (1 < DAT_14c760da4)) {
      iVar12 = *piVar29;
      local_158 = piVar29;
      if (iVar12 == 0x40000002) {
        uVar23 = 0;
      }
      else {
        bVar31 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
          if (iVar12 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            bVar31 = DVar13 == DVar14;
          }
          else {
            bVar31 = false;
          }
        }
        uVar23 = (ulonglong)(bVar31 ^ 1);
      }
      iVar12 = *(int *)(lVar21 + uVar23 * 4);
      if (iVar12 == 2) {
        puVar17 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        pvVar7 = local_f8;
        piVar1 = (int *)(puVar17 + 1);
        *(undefined4 *)(puVar17 + 1) = 0;
        *puVar17 = &PTR_FUN_14a2f0aa8;
        puVar17[2] = 0;
        puVar17[3] = 0;
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        lVar16 = (longlong)(int)uStack_f0;
        if (lVar16 != 0) {
          lVar21 = 0;
          do {
            puVar26 = *(undefined8 **)(*(longlong *)((longlong)pvVar7 + lVar21) + 0x8f8);
            if (puVar26 != puVar17) {
              *(undefined8 **)(*(longlong *)((longlong)pvVar7 + lVar21) + 0x8f8) = puVar17;
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              if (puVar26 != (undefined8 *)0x0) {
                LOCK();
                piVar29 = (int *)(puVar26 + 1);
                *piVar29 = *piVar29 + -1;
                UNLOCK();
                if (*piVar29 == 0) {
                  (**(code **)*puVar26)(puVar26,1);
                }
              }
            }
            lVar21 = lVar21 + 8;
          } while (lVar16 * 8 != lVar21);
        }
        piVar29 = local_158;
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        piVar29 = local_158;
        if ((iVar12 == 1) && (1 < (int)uStack_f0)) {
          lVar16 = *(longlong *)((longlong)local_f8 + (longlong)((int)uStack_f0 + -1) * 8);
          lVar21 = 0;
          do {
            lVar25 = *(longlong *)((longlong)local_f8 + lVar21 * 8);
            FUN_142fe5eaa(lVar25,0);
            if ((*(char *)(lVar25 + 0x164) == '\x01') &&
               ((*(uint *)(lVar25 + 0x900) & *(uint *)(lVar25 + 0x900) - 1) == 0)) {
              local_a8.QuadPart = 0;
              uStack_a0 = 0;
              uVar10 = *(undefined4 *)(lVar25 + 0x8ac);
              (**(code **)(**(longlong **)(lVar25 + 200) + 0x28))
                        (*(longlong **)(lVar25 + 200),&local_d8);
              local_130 = *(code **)(lVar25 + 1000);
              uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(lVar25 + 0x3f0));
              FUN_142fe615a(&local_a8,&local_130,local_d8,uVar10);
              FUN_1472db19a((longlong *)(lVar25 + 0x8d8),uStack_a0 & 0xffffffff,1);
              if (0 < (int)uStack_a0) {
                lVar30 = 0;
                do {
                  puVar17 = (undefined8 *)FUN_14001cc68(0x10);
                  *puVar17 = 0;
                  puVar17[1] = 0;
                  *(undefined8 **)(*(longlong *)(lVar25 + 0x8d8) + lVar30 * 8) = puVar17;
                  iVar12 = *(int *)(lVar16 + 0x8f0);
                  uVar11 = iVar12 + 1;
                  *(uint *)(lVar16 + 0x8f0) = uVar11;
                  if (*(uint *)(lVar16 + 0x8f4) < uVar11) {
                    FUN_1472df460((longlong *)(lVar16 + 0x8e8));
                  }
                  *(undefined8 **)(*(longlong *)(lVar16 + 0x8e8) + (longlong)iVar12 * 8) = puVar17;
                  lVar30 = lVar30 + 1;
                } while (lVar30 < (int)uStack_a0);
              }
              if ((undefined1 *)local_a8.QuadPart != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar21 = lVar21 + 1;
            piVar29 = local_158;
          } while (lVar21 < (longlong)(int)uStack_f0 + -1);
        }
      }
    }
  }
  QueryPerformanceCounter(&local_a8);
  LStack_120 = local_a8;
  pvVar7 = local_f8;
  local_130 = (code *)0x0;
  lVar16 = (longlong)(int)uStack_f0;
  uStack_128 = CONCAT44(uStack_128._4_4_,(int)uStack_f0);
  if (lVar16 == 0) {
    uStack_128 = uStack_f0 & 0xffffffff;
  }
  else {
    FUN_1403a4e26(&local_130,uStack_f0 & 0xffffffff,0);
    memcpy(local_130,pvVar7,lVar16 << 3);
  }
  iVar12 = *piVar29;
  if (DAT_14c86a9fc == 0) {
    if (iVar12 != 2) {
      if (iVar12 != 1) goto LAB_1408a5501;
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      if (DVar13 == DVar14) goto LAB_1408a550a;
      goto LAB_1408a5859;
    }
LAB_1408a550a:
    FUN_142ffe99c(&local_130,&DAT_14ca85100);
  }
  else {
LAB_1408a5501:
    if (iVar12 == 0x10) goto LAB_1408a550a;
LAB_1408a5859:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar29 == 2)) goto LAB_1408a550a;
      if (*piVar29 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        if (DVar13 == DVar14) goto LAB_1408a550a;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar17 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar17;
      if (puVar19 != (uint *)0x0) goto LAB_1408a5a77;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_142fe9a45);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar28 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar28 == (undefined4 *)0x0) {
          puVar28 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar28 = 0xffffffff;
        *(undefined4 **)(puVar28 + 0x10) = puVar28 + 0x16;
        puVar28[0x12] = 0;
        *puVar17 = puVar28;
        FUN_140217a48(puVar17);
        puVar19 = (uint *)*puVar17;
LAB_1408a5a77:
        puVar26 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar22 = (uint *)(puVar26 + 0x18);
        uVar11 = puVar19[0x12];
        if (puVar22 <= puVar19 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar3 = *puVar19;
          *puVar19 = *puVar19 + uVar11 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar11) != 0xffffffff) break;
          puVar19 = (uint *)*puVar17;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar17 = puVar19;
          puVar26 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar26 + 0x18);
          uVar11 = 0;
          if (puVar22 <= puVar19 + 0x4000) {
            uVar11 = 1;
            goto LAB_1408a5af7;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_1408a5af7:
      *(uint **)(puVar19 + 0x10) = puVar22;
      puVar19[0x12] = uVar11;
      iVar12 = 0;
      FUN_1447247dc(puVar26,0);
      *puVar26 = &PTR_FUN_14a2f1528;
      puVar26[0x15] = local_130;
      local_130 = (code *)0x0;
      *(undefined4 *)(puVar26 + 0x16) = (undefined4)uStack_128;
      *(undefined4 *)((longlong)puVar26 + 0xb4) = uStack_128._4_4_;
      uStack_128 = 0;
      ((LARGE_INTEGER *)(puVar26 + 0x17))->s = (_struct_19)LStack_120;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar11 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
          uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
        }
        else {
          uVar23 = 2;
        }
      }
      else {
        iVar12 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar23 = 5;
      }
      if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
      }
      puVar26[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar26[9] = puVar26;
      puVar26[10] = puVar26;
      lVar16 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar16 == 0) {
        uVar8 = 1;
        if ((char)uVar23 != '\x06') {
          uVar8 = uVar23;
        }
        uVar23 = uVar8;
        uVar18 = 0;
      }
      else {
        if ((char)uVar23 == '\x06') {
          uVar23 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
        }
        uVar18 = *(undefined8 *)(lVar16 + 0x30);
      }
      puVar26[0xf] = uVar18;
      puVar26[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar26 + 0x1c) = iVar12;
      if (puVar26 == (undefined8 *)0x0) {
        local_a8.s.LowPart._0_1_ = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
        local_a8.s.LowPart._0_1_ = 1;
        FUN_1447439e4(puVar26);
        LOCK();
        piVar29 = (int *)(puVar26 + 1);
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (*piVar29 == 0) {
          (**(code **)*puVar26)(puVar26,1);
        }
      }
    }
    else {
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_LAB_14a2f14e0;
      local_80 = local_130;
      local_78 = (undefined4)uStack_128;
      uStack_74 = uStack_128._4_4_;
      local_130 = (code *)0x0;
      uStack_128 = 0;
      DStack_70 = LStack_120._0_4_;
      LStack_6c = LStack_120._4_4_;
      local_a8.QuadPart = (LONGLONG)&LAB_142fff14c;
      local_178 = &local_a8;
      FUN_14005a792(&DAT_14ca9a440,L"FDrawSceneCommand",&DAT_14ca473e0);
      if ((undefined1 *)local_a8.QuadPart != (undefined1 *)0x0) {
        pppuVar20 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar20 = &local_88;
        }
        (*(code *)(*pppuVar20)[2])();
      }
    }
  }
  if (local_130 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14c82b440 != '\0') {
    (**(code **)(*DAT_14c82b500 + 0x88))(DAT_14c82b500,DAT_14c7585c8);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1408a5973:
  FUN_1405ee12c(&DAT_14ca966d0,local_d0);
  FUN_14004710c(local_b8);
  FUN_143579012(&local_d9);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a629c FUN_1408a629c body=346 status=ok
// SIG undefined FUN_1408a629c(void)

undefined8 * FUN_1408a629c(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  puVar1[1] = &DAT_14c952378;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71d60;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1408a63f8(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a63f8 FUN_1408a63f8 body=132 status=ok
// SIG undefined FUN_1408a63f8(void)

undefined8 *
FUN_1408a63f8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1408a647e(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e71d60;
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a647e FUN_1408a647e body=128 status=ok
// SIG undefined FUN_1408a647e(void)

undefined8 *
FUN_1408a647e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1408a6500(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9ed90;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a6500 FUN_1408a6500 body=128 status=ok
// SIG undefined FUN_1408a6500(void)

undefined8 *
FUN_1408a6500(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1408a6582(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9f000;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a6582 FUN_1408a6582 body=135 status=ok
// SIG undefined FUN_1408a6582(void)

undefined8 *
FUN_1408a6582(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9f270;
  *(undefined4 *)((longlong)param_1 + 0x34) = 4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a660a FUN_1408a660a body=103 status=ok
// SIG undefined FUN_1408a660a(void)

ulonglong FUN_1408a660a(longlong param_1)

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
LAB_1408a6654:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1408a6654;
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



// FUNCTION 1408a6678 FUN_1408a6678 body=114 status=ok
// SIG undefined FUN_1408a6678(void)

void FUN_1408a6678(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((((*(int *)(param_1 + 0x44) != 0) && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x44))) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))))) {
    uVar2 = FUN_1408a66ea(*(undefined8 *)(param_1 + 0x30),*plVar3,param_1 + 0x48);
    FUN_1402a7054(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1408a66ea FUN_1408a66ea body=344 status=ok
// SIG undefined FUN_1408a66ea(void)

byte FUN_1408a66ea(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  
  plVar1 = *(longlong **)(&DAT_00006850 + param_2);
  bVar12 = false;
  uVar6 = *(uint *)(param_1 + 0x14);
  cVar5 = '\0';
  cVar10 = '\0';
  if (plVar1 == (longlong *)0x0) {
    cVar2 = '\0';
    cVar11 = '\0';
  }
  else {
    cVar2 = '\0';
    if ((uVar6 & 1) != 0) {
      cVar2 = FUN_1408a6842(plVar1);
      uVar6 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar6 & 2) != 0) {
      cVar5 = (**(code **)(*plVar1 + 0xf38))(plVar1);
      uVar6 = *(uint *)(param_1 + 0x14);
    }
    cVar11 = '\0';
    cVar10 = cVar5;
    if ((uVar6 & 4) != 0) {
      cVar11 = *(char *)((longlong)plVar1 + 0x422c);
    }
  }
  if ((uVar6 & 8) != 0) {
    pcVar8 = (char *)(**(code **)(*(longlong *)(param_2 + 0x3b60) + 0x20))(param_2 + 0x3b60);
    bVar12 = *pcVar8 != '\0';
    uVar6 = *(uint *)(param_1 + 0x14);
  }
  cVar3 = '\0';
  cVar5 = '\0';
  if (((uVar6 & 0x10) != 0) && (*param_3 != 0)) {
    cVar5 = *(char *)(*param_3 + 0x41);
  }
  if ((uVar6 & 0x20) != 0) {
    uVar7 = (**(code **)(*(longlong *)(param_2 + 0x3b38) + 0x18))(param_2 + 0x3b38);
    cVar3 = FUN_140226b70(uVar7);
    uVar6 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar6 & 0x40) == 0) {
    cVar4 = '\0';
  }
  else if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar9 = (**(code **)(*(longlong *)(param_2 + 0x3b48) + 0x20))(param_2 + 0x3b48);
    cVar4 = *(char *)(lVar9 + 0x31) != '\0';
  }
  else {
    cVar4 = (**(code **)(*(longlong *)(param_2 + 0x3b48) + 0x60))(param_2 + 0x3b48);
  }
  return (cVar4 == '\0' &&
         ((cVar5 == '\0' && cVar3 == '\0') &&
         ((cVar11 == '\0' && !bVar12) && (cVar2 == '\0' && cVar10 == '\0')))) ^
         *(byte *)(param_1 + 0x10);
}



// FUNCTION 1408a6842 FUN_1408a6842 body=272 status=ok
// SIG undefined FUN_1408a6842(void)

ulonglong FUN_1408a6842(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = param_1;
  if (*(longlong *)(param_1 + 0x43d8) != 0) {
    uVar5 = *(longlong *)(param_1 + 0x43d8) + 0x20;
    uVar4 = uVar5;
    lVar1 = FUN_14485c28e(uVar5);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_14485c28e(uVar5);
      uVar4 = uVar5;
    }
    if (*(longlong *)(param_1 + 0x3170) == 0) {
      if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_1408a6858;
      uVar5 = param_1 + 0x3210;
    }
    else {
      uVar5 = *(longlong *)(param_1 + 0x3170) + 0xd8;
    }
    uVar4 = uVar5;
    lVar2 = FUN_140153468(uVar5);
    if (((lVar2 != 0) && ((*(byte *)(uVar5 + 0x298) & 2) == 0)) &&
       (*(longlong *)(param_1 + 0x110) != 0)) {
      if (*(longlong *)(param_1 + 0x3170) == 0) {
        uVar4 = 0;
        if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_1408a6858;
        uVar4 = param_1 + 0x3210;
      }
      else {
        uVar4 = *(longlong *)(param_1 + 0x3170) + 0xd8;
      }
      lVar2 = FUN_140153468(uVar4);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        if (*(longlong *)(param_1 + 0x3170) == 0) {
          if (*(char *)(param_1 + 0x34b0) == '\x01') {
            lVar2 = param_1 + 0x3210;
            goto LAB_1408a693b;
          }
          lVar3 = 0;
          lVar2 = 0;
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x3170) + 0xd8;
LAB_1408a693b:
          lVar3 = FUN_140153468(lVar2);
        }
        uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        if (lVar3 == lVar1) goto LAB_1408a685e;
      }
    }
  }
LAB_1408a6858:
  uVar4 = CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)(param_1 + 0x43f0));
LAB_1408a685e:
  return uVar4 & 0xffffffff;
}


