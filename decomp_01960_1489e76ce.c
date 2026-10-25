// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489e76ce FUN_1489e76ce body=114 status=ok
// SIG undefined FUN_1489e76ce(void)

void FUN_1489e76ce(longlong *param_1,int param_2)

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



// FUNCTION 1489e7740 FUN_1489e7740 body=477 status=ok
// SIG undefined FUN_1489e7740(void)

void FUN_1489e7740(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489e791e FUN_1489e791e body=129 status=ok
// SIG undefined FUN_1489e791e(void)

undefined8 FUN_1489e791e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_1489e7993:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489e7993;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1489e7993;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1489e79a0 FUN_1489e79a0 body=45 status=ok
// SIG undefined FUN_1489e79a0(void)

undefined8 FUN_1489e79a0(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)lVar2;
  return 1;
}



// FUNCTION 1489e79ce FUN_1489e79ce body=49 status=ok
// SIG undefined FUN_1489e79ce(void)

undefined8 FUN_1489e79ce(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x70);
  lVar2 = (**(code **)(*plVar1 + 0x220))
                    (plVar1,param_2 + *(int *)(*(longlong *)(param_1 + 0x18) + 0x44));
  *param_3 = (double)lVar2;
  return 1;
}



// FUNCTION 1489e7a00 FUN_1489e7a00 body=49 status=ok
// SIG undefined FUN_1489e7a00(void)

undefined8 FUN_1489e7a00(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x70);
  lVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)lVar2;
  return 1;
}



// FUNCTION 1489e7a32 FUN_1489e7a32 body=24 status=ok
// SIG undefined FUN_1489e7a32(void)

undefined8 FUN_1489e7a32(longlong param_1)

{
  FUN_145a2521c(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x70));
  return 1;
}



// FUNCTION 1489e7a52 FUN_1489e7a52 body=107 status=ok
// SIG undefined FUN_1489e7a52(void)

bool FUN_1489e7a52(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e7abe(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e7abe FUN_1489e7abe body=234 status=ok
// SIG undefined FUN_1489e7abe(void)

longlong FUN_1489e7abe(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e7b8b;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e7b8b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e7baa FUN_1489e7baa body=191 status=ok
// SIG undefined FUN_1489e7baa(void)

longlong FUN_1489e7baa(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a7452c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  local_2c = 0;
  (**(code **)(*param_2 + 0x220))(param_2,&local_2c);
  *(undefined4 *)(param_3 + *(int *)(lVar3 + 0x44)) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e7c6a FUN_1489e7c6a body=129 status=ok
// SIG undefined FUN_1489e7c6a(void)

undefined8 FUN_1489e7c6a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_1489e7cdf:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489e7cdf;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1489e7cdf;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1489e7cec FUN_1489e7cec body=45 status=ok
// SIG undefined FUN_1489e7cec(void)

undefined8 FUN_1489e7cec(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)lVar2;
  return 1;
}



// FUNCTION 1489e7d1a FUN_1489e7d1a body=107 status=ok
// SIG undefined FUN_1489e7d1a(void)

bool FUN_1489e7d1a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e7d86(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e7d86 FUN_1489e7d86 body=234 status=ok
// SIG undefined FUN_1489e7d86(void)

longlong FUN_1489e7d86(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e7e53;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e7e53:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e7e72 FUN_1489e7e72 body=191 status=ok
// SIG undefined FUN_1489e7e72(void)

longlong FUN_1489e7e72(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  local_2c = 0;
  (**(code **)(*param_2 + 0x218))(param_2,&local_2c);
  *(undefined4 *)(param_3 + *(int *)(lVar3 + 0x44)) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e7f32 FUN_1489e7f32 body=129 status=ok
// SIG undefined FUN_1489e7f32(void)

undefined8 FUN_1489e7f32(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_1489e7fa7:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489e7fa7;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1489e7fa7;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1489e7fb4 FUN_1489e7fb4 body=73 status=ok
// SIG undefined FUN_1489e7fb4(void)

undefined8 FUN_1489e7fb4(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = (**(code **)(*plVar1 + 0x230))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)uVar2;
  return 1;
}



// FUNCTION 1489e7ffe FUN_1489e7ffe body=20 status=ok
// SIG undefined FUN_1489e7ffe(void)

undefined1 FUN_1489e7ffe(longlong param_1)

{
  FUN_1489e8169(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489e8012 FUN_1489e8012 body=107 status=ok
// SIG undefined FUN_1489e8012(void)

bool FUN_1489e8012(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e807e(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e807e FUN_1489e807e body=234 status=ok
// SIG undefined FUN_1489e807e(void)

longlong FUN_1489e807e(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e814b;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e814b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e8169 FUN_1489e8169 body=109 status=ok
// SIG undefined FUN_1489e8169(void)

void FUN_1489e8169(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x248))(param_1,local_30,*(int *)((longlong)param_1 + 0x44) + param_2);
  FUN_144936510(local_30,param_3,param_4);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e81d8 FUN_1489e81d8 body=197 status=ok
// SIG undefined FUN_1489e81d8(void)

longlong FUN_1489e81d8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a83f76();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  local_30 = 0;
  (**(code **)(*param_2 + 0x210))(param_2,&local_30);
  *(undefined8 *)(param_3 + *(int *)(lVar3 + 0x44)) = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e829e FUN_1489e829e body=129 status=ok
// SIG undefined FUN_1489e829e(void)

undefined8 FUN_1489e829e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_1489e8313:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489e8313;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1489e8313;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1489e8320 FUN_1489e8320 body=45 status=ok
// SIG undefined FUN_1489e8320(void)

undefined8 FUN_1489e8320(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (double)lVar2;
  return 1;
}



// FUNCTION 1489e834e FUN_1489e834e body=45 status=ok
// SIG undefined FUN_1489e834e(void)

undefined8 FUN_1489e834e(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x220))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)lVar2;
  return 1;
}



// FUNCTION 1489e837c FUN_1489e837c body=20 status=ok
// SIG undefined FUN_1489e837c(void)

undefined1 FUN_1489e837c(longlong param_1)

{
  FUN_1489e84e7(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489e8390 FUN_1489e8390 body=107 status=ok
// SIG undefined FUN_1489e8390(void)

bool FUN_1489e8390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e83fc(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e83fc FUN_1489e83fc body=234 status=ok
// SIG undefined FUN_1489e83fc(void)

longlong FUN_1489e83fc(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e84c9;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e84c9:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e84e7 FUN_1489e84e7 body=109 status=ok
// SIG undefined FUN_1489e84e7(void)

void FUN_1489e84e7(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x248))(param_1,local_30,*(int *)((longlong)param_1 + 0x44) + param_2);
  FUN_144936510(local_30,param_3,param_4);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e8556 FUN_1489e8556 body=197 status=ok
// SIG undefined FUN_1489e8556(void)

longlong FUN_1489e8556(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144aa1f9a();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  local_30 = 0;
  (**(code **)(*param_2 + 0x208))(param_2,&local_30);
  *(undefined8 *)(param_3 + *(int *)(lVar3 + 0x44)) = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e861c FUN_1489e861c body=129 status=ok
// SIG undefined FUN_1489e861c(void)

undefined8 FUN_1489e861c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_1489e8691:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489e8691;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1489e8691;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1489e869e FUN_1489e869e body=65 status=ok
// SIG undefined FUN_1489e869e(void)

undefined8 FUN_1489e869e(longlong param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = (**(code **)(*plVar1 + 0x230))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  auVar3._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0x45300000;
  *param_3 = ((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
             (auVar3._8_8_ - 1.9342813113834067e+25);
  return 1;
}



// FUNCTION 1489e86e0 FUN_1489e86e0 body=73 status=ok
// SIG undefined FUN_1489e86e0(void)

undefined8 FUN_1489e86e0(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = (**(code **)(*plVar1 + 0x230))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)uVar2;
  return 1;
}



// FUNCTION 1489e872a FUN_1489e872a body=20 status=ok
// SIG undefined FUN_1489e872a(void)

undefined1 FUN_1489e872a(longlong param_1)

{
  FUN_1489e8895(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489e873e FUN_1489e873e body=107 status=ok
// SIG undefined FUN_1489e873e(void)

bool FUN_1489e873e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e87aa(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e87aa FUN_1489e87aa body=234 status=ok
// SIG undefined FUN_1489e87aa(void)

longlong FUN_1489e87aa(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e8877;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e8877:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e8895 FUN_1489e8895 body=109 status=ok
// SIG undefined FUN_1489e8895(void)

void FUN_1489e8895(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x248))(param_1,local_30,*(int *)((longlong)param_1 + 0x44) + param_2);
  FUN_144936510(local_30,param_3,param_4);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e8904 FUN_1489e8904 body=198 status=ok
// SIG undefined FUN_1489e8904(void)

longlong FUN_1489e8904(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a64e42();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  local_2c = 0;
  (**(code **)(*param_2 + 0x1d8))(param_2,&local_2c);
  *(undefined4 *)(param_3 + *(int *)(lVar3 + 0x44)) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e89cc FUN_1489e89cc body=129 status=ok
// SIG undefined FUN_1489e89cc(void)

undefined8 FUN_1489e89cc(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_1489e8a41:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489e8a41;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1489e8a41;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1489e8a4e FUN_1489e8a4e body=20 status=ok
// SIG undefined FUN_1489e8a4e(void)

undefined1 FUN_1489e8a4e(longlong param_1)

{
  FUN_1489e8bb9(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489e8a62 FUN_1489e8a62 body=107 status=ok
// SIG undefined FUN_1489e8a62(void)

bool FUN_1489e8a62(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e8ace(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e8ace FUN_1489e8ace body=234 status=ok
// SIG undefined FUN_1489e8ace(void)

longlong FUN_1489e8ace(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e8b9b;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e8b9b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e8bb9 FUN_1489e8bb9 body=109 status=ok
// SIG undefined FUN_1489e8bb9(void)

void FUN_1489e8bb9(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x248))(param_1,local_30,*(int *)((longlong)param_1 + 0x44) + param_2);
  FUN_144936510(local_30,param_3,param_4);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e8c28 FUN_1489e8c28 body=199 status=ok
// SIG undefined FUN_1489e8c28(void)

longlong FUN_1489e8c28(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a49fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  local_30 = 0;
  (**(code **)(*param_2 + 0x1d0))(param_2,&local_30);
  *(undefined8 *)(param_3 + *(int *)(lVar3 + 0x44)) = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e8cf0 FUN_1489e8cf0 body=129 status=ok
// SIG undefined FUN_1489e8cf0(void)

undefined8 FUN_1489e8cf0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_1489e8d65:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489e8d65;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1489e8d65;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1489e8d72 FUN_1489e8d72 body=40 status=ok
// SIG undefined FUN_1489e8d72(void)

undefined8 FUN_1489e8d72(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x240))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = extraout_XMM0_Qa;
  return 1;
}



// FUNCTION 1489e8d9a FUN_1489e8d9a body=44 status=ok
// SIG undefined FUN_1489e8d9a(void)

undefined8 FUN_1489e8d9a(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x240))(plVar1,param_2 + *(int *)((longlong)plVar1 + 0x44));
  *param_3 = (float)(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  return 1;
}



// FUNCTION 1489e8dc6 FUN_1489e8dc6 body=20 status=ok
// SIG undefined FUN_1489e8dc6(void)

undefined1 FUN_1489e8dc6(longlong param_1)

{
  FUN_1489e8f31(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489e8dda FUN_1489e8dda body=107 status=ok
// SIG undefined FUN_1489e8dda(void)

bool FUN_1489e8dda(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e8e46(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e8e46 FUN_1489e8e46 body=234 status=ok
// SIG undefined FUN_1489e8e46(void)

longlong FUN_1489e8e46(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e8f13;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e8f13:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e8f31 FUN_1489e8f31 body=109 status=ok
// SIG undefined FUN_1489e8f31(void)

void FUN_1489e8f31(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x248))(param_1,local_30,*(int *)((longlong)param_1 + 0x44) + param_2);
  FUN_144936510(local_30,param_3,param_4);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e8fa4 FUN_1489e8fa4 body=107 status=ok
// SIG undefined FUN_1489e8fa4(void)

bool FUN_1489e8fa4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e9010(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e9010 FUN_1489e9010 body=234 status=ok
// SIG undefined FUN_1489e9010(void)

longlong FUN_1489e9010(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e90dd;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e90dd:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e90fc FUN_1489e90fc body=250 status=ok
// SIG undefined FUN_1489e90fc(void)

longlong FUN_1489e90fc(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar4 + 8);
    lVar2 = FUN_144a4a07e();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar5) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar5 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar5) {
      lVar3 = lVar4;
    }
  }
  FUN_144a5dc74(&local_38);
  FUN_1489e934f(param_2,&local_38);
  lVar4 = (longlong)*(int *)(lVar3 + 0x44);
  plVar1 = *(longlong **)(param_3 + lVar4);
  if (plVar1 != local_38) {
    *(longlong **)(param_3 + lVar4) = local_38;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_3 + 8 + lVar4) = local_30;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e91f8 FUN_1489e91f8 body=107 status=ok
// SIG undefined FUN_1489e91f8(void)

bool FUN_1489e91f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e9264(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e9264 FUN_1489e9264 body=234 status=ok
// SIG undefined FUN_1489e9264(void)

longlong FUN_1489e9264(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e9331;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e9331:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e934f FUN_1489e934f body=173 status=ok
// SIG undefined FUN_1489e934f(void)

void FUN_1489e934f(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58[0] = (longlong *)0x0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x1c8))(0,&local_30,local_58);
  FUN_1409ee323(local_30,local_58[0],local_48);
  FUN_140009b9a(local_58,local_48);
  FUN_140008f88(param_2,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489e93fe FUN_1489e93fe body=190 status=ok
// SIG undefined FUN_1489e93fe(void)

longlong FUN_1489e93fe(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar4 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = lVar1;
    }
  }
  local_30 = 0;
  FUN_140f67fee(param_2,&local_30);
  *(undefined8 *)(param_3 + *(int *)(lVar3 + 0x44)) = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1489e94c2 FUN_1489e94c2 body=107 status=ok
// SIG undefined FUN_1489e94c2(void)

bool FUN_1489e94c2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (1 < uVar1) {
    puVar4 = (undefined8 *)FUN_1489e952e(param_1,param_3);
    *puVar4 = param_3;
    puVar4[1] = lVar2;
    uVar3 = FUN_1489dbb60();
    *param_4 = uVar3;
    *(code **)(param_4 + 2) = FUN_144b3a2f7;
    *(code **)(param_4 + 4) = FUN_144b3a1ca;
    *(undefined8 *)(param_4 + 6) = 0;
    *(undefined8 **)(param_4 + 8) = puVar4;
  }
  return 1 < uVar1;
}



// FUNCTION 1489e952e FUN_1489e952e body=234 status=ok
// SIG undefined FUN_1489e952e(void)

longlong FUN_1489e952e(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar4 != 0) goto LAB_1489e95fb;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_30;
  FUN_1489e5be6(plVar1,&local_1c);
  lVar4 = (longlong)local_1c * 0x20 + *plVar1;
LAB_1489e95fb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 8;
}



// FUNCTION 1489e9619 FUN_1489e9619 body=116 status=ok
// SIG undefined FUN_1489e9619(void)

void FUN_1489e9619(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_2,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0xd0))(param_1,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489e968e FUN_1489e968e body=29 status=ok
// SIG undefined FUN_1489e968e(void)

undefined8 FUN_1489e968e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e96ac FUN_1489e96ac body=128 status=ok
// SIG undefined FUN_1489e96ac(void)

void FUN_1489e96ac(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      do {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = (longlong *)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar2)) &&
       (plVar3 = (longlong *)plVar2[-1],
       0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1489e972e FUN_1489e972e body=272 status=ok
// SIG undefined FUN_1489e972e(void)

void FUN_1489e972e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar1 = *param_1;
  uVar8 = (param_1[1] - lVar1 >> 3) + 1;
  uVar4 = param_1[2] - lVar1 >> 3;
  uVar9 = (uVar4 >> 1) + uVar4;
  if (uVar9 <= uVar8) {
    uVar9 = uVar8;
  }
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar9 = 0x1fffffffffffffff;
  }
  puVar3 = (undefined8 *)FUN_1489e98da(uVar9);
  uVar2 = *param_3;
  *param_3 = 0;
  *(undefined8 *)((longlong)puVar3 + ((longlong)param_2 - lVar1)) = uVar2;
  puVar5 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  puVar6 = puVar3;
  if (puVar7 == param_2) {
    for (; puVar5 != param_2; puVar5 = puVar5 + 1) {
      uVar2 = *puVar5;
      *puVar5 = 0;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    if (puVar5 != param_2) {
      do {
        uVar2 = *puVar5;
        *puVar5 = 0;
        *puVar6 = uVar2;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (puVar5 != param_2);
      puVar7 = (undefined8 *)param_1[1];
    }
    if (puVar7 != param_2) {
      puVar5 = (undefined8 *)(((longlong)param_2 - lVar1) + (longlong)puVar3);
      do {
        puVar5 = puVar5 + 1;
        uVar2 = *param_2;
        *param_2 = 0;
        *puVar5 = uVar2;
        param_2 = param_2 + 1;
      } while (param_2 != puVar7);
    }
  }
  FUN_1489e983e(param_1,puVar3,uVar8,uVar9);
  return;
}



// FUNCTION 1489e983e FUN_1489e983e body=154 status=ok
// SIG undefined FUN_1489e983e(void)

void FUN_1489e983e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      do {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = (longlong *)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar2)) &&
       (plVar3 = (longlong *)plVar2[-1],
       0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 1489e98da FUN_1489e98da body=76 status=ok
// SIG undefined FUN_1489e98da(void)

undefined8 FUN_1489e98da(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1489e9928 FUN_1489e9928 body=82 status=ok
// SIG undefined FUN_1489e9928(void)

void FUN_1489e9928(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1489e997c FUN_1489e997c body=45 status=ok
// SIG undefined FUN_1489e997c(void)

longlong FUN_1489e997c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *_Src;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  _Src = (undefined8 *)param_1[1];
  if (_Src != (undefined8 *)param_1[2]) {
    *_Src = 0;
    _Src[1] = 0;
    _Src[2] = 0;
    _Src[3] = 0;
    *(undefined4 *)((longlong)_Src + 0xc) = 1;
    *(undefined4 *)(_Src + 2) = 0;
    *(undefined4 *)((longlong)_Src + 0x13) = 0;
    param_1[1] = param_1[1] + 0x20;
    return 0;
  }
  lVar2 = *param_1;
  lVar5 = (longlong)_Src - lVar2;
  uVar4 = (param_1[1] - lVar2 >> 5) + 1;
  uVar3 = param_1[2] - lVar2 >> 5;
  uVar6 = (uVar3 >> 1) + uVar3;
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  if (0x7ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar6 = 0x7ffffffffffffff;
  }
  _Dst = (void *)FUN_1489e9afc(uVar6);
  *(undefined8 *)((longlong)_Dst + lVar5) = 0;
  ((undefined8 *)((longlong)_Dst + lVar5))[1] = 0;
  puVar1 = (undefined8 *)((longlong)_Dst + lVar5 + 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((longlong)_Dst + lVar5 + 0xc) = 1;
  *(undefined4 *)((longlong)_Dst + lVar5 + 0x13) = 0;
  *(undefined4 *)((longlong)_Dst + lVar5 + 0x10) = 0;
  puVar1 = (undefined8 *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)_Src - *param_1);
  if (puVar1 != _Src) {
    memmove((void *)((longlong)_Dst + lVar5 + 0x20),_Src,param_1[1] - (longlong)_Src);
  }
  FUN_1489e9a8c(param_1,_Dst,uVar4,uVar6);
  return (longlong)_Dst + lVar5;
}



// FUNCTION 1489e99aa FUN_1489e99aa body=225 status=ok
// SIG undefined FUN_1489e99aa(void)

longlong FUN_1489e99aa(longlong *param_1,void *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  lVar6 = (longlong)param_2 - lVar2;
  uVar5 = (param_1[1] - lVar2 >> 5) + 1;
  uVar4 = param_1[2] - lVar2 >> 5;
  uVar7 = (uVar4 >> 1) + uVar4;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (0x7ffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar7 = 0x7ffffffffffffff;
  }
  _Dst = (void *)FUN_1489e9afc(uVar7);
  *(undefined8 *)((longlong)_Dst + lVar6) = 0;
  ((undefined8 *)((longlong)_Dst + lVar6))[1] = 0;
  puVar1 = (undefined8 *)((longlong)_Dst + lVar6 + 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((longlong)_Dst + lVar6 + 0xc) = 1;
  *(undefined4 *)((longlong)_Dst + lVar6 + 0x13) = 0;
  *(undefined4 *)((longlong)_Dst + lVar6 + 0x10) = 0;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)((longlong)_Dst + lVar6 + 0x20),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_1489e9a8c(param_1,_Dst,uVar5,uVar7);
  return (longlong)_Dst + lVar6;
}



// FUNCTION 1489e9a8c FUN_1489e9a8c body=110 status=ok
// SIG undefined FUN_1489e9a8c(void)

void FUN_1489e9a8c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



// FUNCTION 1489e9afc FUN_1489e9afc body=75 status=ok
// SIG undefined FUN_1489e9afc(void)

undefined8 FUN_1489e9afc(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x7f < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 5);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 5,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1489e9b48 FUN_1489e9b48 body=105 status=ok
// SIG undefined FUN_1489e9b48(void)

longlong FUN_1489e9b48(longlong param_1,longlong param_2)

{
  FUN_1472ea2b4();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_1474409b8(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"PositionTransform",0);
  FUN_1474409b8(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"UVScaleBias",0);
  return param_1;
}



// FUNCTION 1489e9bb2 FUN_1489e9bb2 body=300 status=ok
// SIG undefined FUN_1489e9bb2(void)

void FUN_1489e9bb2(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

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
  
  lVar11 = FUN_144821ef4(param_2);
  FUN_14303dd62(param_1,lVar11,param_4,param_5,*(undefined8 *)(*(longlong *)(param_6 + 8) + 0x40));
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_2[1] < puVar13) {
      FUN_140023dd8(param_2,0x60);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_2 = (ulonglong)puVar13;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
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



// FUNCTION 1489e9cde FUN_1489e9cde body=31 status=ok
// SIG undefined FUN_1489e9cde(void)

undefined8 FUN_1489e9cde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e9d18 FUN_1489e9d18 body=93 status=ok
// SIG undefined FUN_1489e9d18(void)

void FUN_1489e9d18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4563d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489e9d76 FUN_1489e9d76 body=93 status=ok
// SIG undefined FUN_1489e9d76(void)

void FUN_1489e9d76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4563d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489e9dd4 FUN_1489e9dd4 body=126 status=ok
// SIG undefined FUN_1489e9dd4(void)

void FUN_1489e9dd4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4563d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489e9e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489e9e52 FUN_1489e9e52 body=35 status=ok
// SIG undefined FUN_1489e9e52(void)

void FUN_1489e9e52(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489e9e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1489e9e75 FUN_1489e9e75 body=40 status=ok
// SIG undefined FUN_1489e9e75(void)

void FUN_1489e9e75(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1489e5348(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1489e9e9d FUN_1489e9e9d body=40 status=ok
// SIG undefined FUN_1489e9e9d(void)

void FUN_1489e9e9d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1489e540a(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1489e9ec6 FUN_1489e9ec6 body=24 status=ok
// SIG undefined FUN_1489e9ec6(void)

void FUN_1489e9ec6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489e9eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1489e9ede FUN_1489e9ede body=29 status=ok
// SIG undefined FUN_1489e9ede(void)

undefined8 FUN_1489e9ede(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489e9efc FUN_1489e9efc body=64 status=ok
// SIG undefined FUN_1489e9efc(void)

void FUN_1489e9efc(void)

{
  if (DAT_14cb90f24 != 0) {
    DAT_14cb90f24 = 0;
    FUN_1446f8d3c(&DAT_14cb90f18,DAT_14cb90f20,0,0x18,8);
  }
  return;
}



// FUNCTION 1489e9f5e FUN_1489e9f5e body=93 status=ok
// SIG undefined FUN_1489e9f5e(void)

void FUN_1489e9f5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456640;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4565d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489e9fbc FUN_1489e9fbc body=93 status=ok
// SIG undefined FUN_1489e9fbc(void)

void FUN_1489e9fbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456640;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4565d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1489ea01a FUN_1489ea01a body=126 status=ok
// SIG undefined FUN_1489ea01a(void)

void FUN_1489ea01a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b456640;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4565d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ea089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ea098 FUN_1489ea098 body=23 status=ok
// SIG undefined FUN_1489ea098(void)

undefined8 FUN_1489ea098(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1489ea0b2 FUN_1489ea0b2 body=312 status=ok
// SIG undefined FUN_1489ea0b2(void)

undefined8 * FUN_1489ea0b2(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b4566b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x27) = 0;
  local_28 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4();
  if (param_1 + 1 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 2) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_2c;
  }
  plVar2 = (longlong *)FUN_144a7d136();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  if (*(char *)(lVar3 + 0x8c) == '\x01') {
    uVar4 = *(int *)(param_1 + 2) - 1;
    if (*(int *)(param_1 + 2) == 0) {
      uVar4 = 0;
    }
    if (0 < (int)uVar4) {
      lVar3 = param_1[1];
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)(lVar3 + uVar5 * 2);
        *(ushort *)(lVar3 + uVar5 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ea1ec FUN_1489ea1ec body=58 status=ok
// SIG undefined FUN_1489ea1ec(void)

undefined8 * FUN_1489ea1ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4566b0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1489ea226 FUN_1489ea226 body=359 status=ok
// SIG undefined FUN_1489ea226(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1489ea226(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Dst;
  undefined1 *puVar8;
  ulonglong _Size;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  puVar8 = auStack_38;
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (puVar8 = auStack_38, (*(uint *)(*(longlong *)(param_1 + 0x20) + 8) >> 0x1e & 1) == 0)) {
    iVar4 = (**(code **)(*param_2 + 0x28))(param_2);
    puVar8 = auStack_38;
    *(bool *)(param_1 + 0x28) = iVar4 != 0;
    _Size = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x18) + 0xb6);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x5c);
    lVar6 = lVar7 + _Size;
    if ((int)lVar6 == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      lVar6 = -(lVar6 + 0x1eU & 0xfffffffffffffff0);
      puVar8 = auStack_38 + lVar6;
      puVar5 = auStack_38 + lVar6;
    }
    _Dst = (void *)(-lVar7 & (ulonglong)(puVar5 + lVar7 + -1));
    *(undefined8 *)(puVar8 + -0x28) = 0x1489ea2ed;
    memset(_Dst,0,_Size);
    *(undefined8 *)(puVar8 + -0x28) = 0x1489ea2fb;
    FUN_1489ea3ec(param_1,param_2,_Dst);
    if (*(char *)(param_1 + 0x2a) == '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      plVar2 = *(longlong **)(param_1 + 0x20);
      pcVar3 = *(code **)(*plVar2 + 0x248);
      *(undefined8 *)(puVar8 + -0x28) = 0x1489ea321;
      (*pcVar3)(plVar2,uVar1,_Dst);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(puVar8 + -0x28) = 0x1489ea332;
      lVar6 = FUN_140d2ab24(uVar1);
      if (lVar6 == 0) {
        lVar6 = 0x20;
      }
      else {
        *(undefined1 *)(param_1 + 0x29) = 1;
        pcVar3 = *(code **)(*param_2 + 0x10);
        *(undefined8 *)(puVar8 + -0x28) = 0x1489ea34f;
        (*pcVar3)(param_2);
        *(undefined4 *)(puVar8 + -0x10) = 0;
        *(undefined8 *)(puVar8 + -0x38) = 0x1489ea36c;
        FUN_143ea44b0(param_1,param_2,lVar6,_Dst);
        lVar6 = 0x18;
      }
      pcVar3 = *(code **)(*param_2 + lVar6);
      *(undefined8 *)(puVar8 + -0x28) = 0x1489ea382;
      (*pcVar3)(param_2);
    }
  }
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -0x28) = &UNK_1489ea285;
  FUN_144d8e3a0();
}



// FUNCTION 1489ea398 FUN_1489ea398 body=84 status=ok
// SIG undefined FUN_1489ea398(void)

void FUN_1489ea398(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 0x20) = param_2;
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) &&
      (lVar1 = *(longlong *)(param_1 + 0x18), (*(byte *)(lVar1 + 0xb1) & 4) == 0)) &&
     (*(int *)(lVar1 + 0x68) == 0)) {
    lVar1 = FUN_1400796d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar1 + 0x18),1);
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x18) = lVar1;
    }
  }
  return;
}



// FUNCTION 1489ea3ec FUN_1489ea3ec body=259 status=ok
// SIG undefined FUN_1489ea3ec(void)

void FUN_1489ea3ec(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  int local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(longlong *)(param_1 + 0x18);
  if (local_50 == 0) {
    local_48 = (longlong *)0x0;
  }
  else {
    local_48 = *(longlong **)(local_50 + 0x50);
  }
  local_40 = 0xffffffff;
  local_3c = 0x101;
  local_3a = 0;
  FUN_144a2daf0(&local_50);
  if (local_48 != (longlong *)0x0) {
    iVar2 = 0;
    do {
      plVar1 = local_48;
      if (((uint)local_48[7] & 0x480) != 0x80) break;
      if (((uint)local_48[7] >> 9 & 1) == 0) {
        (**(code **)(*local_48 + 0x160))(local_48,*(int *)((longlong)local_48 + 0x44) + param_3);
      }
      local_58 = iVar2;
      FUN_143ea44b0(param_1,param_2,plVar1,param_3);
      if (*(char *)(param_1 + 0x2a) != '\0') break;
      local_48 = (longlong *)local_48[3];
      FUN_144a2daf0(&local_50);
      iVar2 = iVar2 + 1;
    } while (local_48 != (longlong *)0x0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ea4f0 FUN_1489ea4f0 body=119 status=ok
// SIG undefined FUN_1489ea4f0(void)

void FUN_1489ea4f0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x128))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x220))(plVar1,puVar2,*(code **)(*plVar1 + 0x220));
    return;
  }
  return;
}



// FUNCTION 1489ea568 FUN_1489ea568 body=120 status=ok
// SIG undefined FUN_1489ea568(void)

void FUN_1489ea568(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x118))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x210))(plVar1,puVar2,*(code **)(*plVar1 + 0x210));
    return;
  }
  return;
}



// FUNCTION 1489ea5e0 FUN_1489ea5e0 body=119 status=ok
// SIG undefined FUN_1489ea5e0(void)

void FUN_1489ea5e0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xf0))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1e0))(plVar1,puVar2,*(code **)(*plVar1 + 0x1e0));
    return;
  }
  return;
}



// FUNCTION 1489ea658 FUN_1489ea658 body=119 status=ok
// SIG undefined FUN_1489ea658(void)

void FUN_1489ea658(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x120))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x218))(plVar1,puVar2,*(code **)(*plVar1 + 0x218));
    return;
  }
  return;
}



// FUNCTION 1489ea6d0 FUN_1489ea6d0 body=120 status=ok
// SIG undefined FUN_1489ea6d0(void)

void FUN_1489ea6d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x110))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x208))(plVar1,puVar2,*(code **)(*plVar1 + 0x208));
    return;
  }
  return;
}



// FUNCTION 1489ea748 FUN_1489ea748 body=120 status=ok
// SIG undefined FUN_1489ea748(void)

void FUN_1489ea748(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe8))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1d8))(plVar1,puVar2,*(code **)(*plVar1 + 0x1d8));
    return;
  }
  return;
}



// FUNCTION 1489ea7c0 FUN_1489ea7c0 body=120 status=ok
// SIG undefined FUN_1489ea7c0(void)

void FUN_1489ea7c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea82d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1d0))(plVar1,puVar2,*(code **)(*plVar1 + 0x1d0));
    return;
  }
  return;
}



// FUNCTION 1489ea838 FUN_1489ea838 body=119 status=ok
// SIG undefined FUN_1489ea838(void)

void FUN_1489ea838(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x140))(plVar1,*puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001489ea877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001489ea8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x238))(plVar1,puVar2,*(code **)(*plVar1 + 0x238));
    return;
  }
  return;
}



// FUNCTION 1489ea8b0 FUN_1489ea8b0 body=202 status=ok
// SIG undefined FUN_1489ea8b0(void)

void FUN_1489ea8b0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)(*(int *)(param_3 + 0x44) + param_4);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar1 != (longlong *)0x0) {
      if (*(int *)(puVar3 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*puVar3;
      }
      (**(code **)(*plVar1 + 0xd0))(plVar1,puVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_5);
    local_28 = 0;
    local_30 = 0;
    (**(code **)(*plVar1 + 0x1c8))(plVar1,&local_30,&local_28);
    FUN_1409ee323(local_30,local_28,puVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ea98c FUN_1489ea98c body=78 status=ok
// SIG undefined FUN_1489ea98c(void)

void FUN_1489ea98c(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  
  param_4 = *(int *)(param_3 + 0x44) + param_4;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    FUN_1489eaa46(param_2,param_4);
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\x01') {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_5);
  FUN_1489e934f(uVar1,param_4);
  return;
}



// FUNCTION 1489ea9da FUN_1489ea9da body=107 status=ok
// SIG undefined FUN_1489ea9da(void)

void FUN_1489ea9da(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_4 = *(int *)(param_3 + 0x44) + param_4;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (lVar1 != 0) {
      FUN_14140a72a(lVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001489eaa15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar2 = (**(code **)(*param_2 + 8))(param_2,param_5);
    FUN_140f67fee(uVar2,param_4);
    return;
  }
  return;
}



// FUNCTION 1489eaa46 FUN_1489eaa46 body=90 status=ok
// SIG undefined FUN_1489eaa46(void)

void FUN_1489eaa46(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_2);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001489eaa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



// FUNCTION 1489eaaa0 FUN_1489eaaa0 body=31 status=ok
// SIG undefined FUN_1489eaaa0(void)

undefined8 FUN_1489eaaa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eaad8 FUN_1489eaad8 body=93 status=ok
// SIG undefined FUN_1489eaad8(void)

void FUN_1489eaad8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4566d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eab36 FUN_1489eab36 body=93 status=ok
// SIG undefined FUN_1489eab36(void)

void FUN_1489eab36(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4566d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eab94 FUN_1489eab94 body=126 status=ok
// SIG undefined FUN_1489eab94(void)

void FUN_1489eab94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4566d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489eac03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489eac1e FUN_1489eac1e body=31 status=ok
// SIG undefined FUN_1489eac1e(void)

undefined8 FUN_1489eac1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eac56 FUN_1489eac56 body=93 status=ok
// SIG undefined FUN_1489eac56(void)

void FUN_1489eac56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eacb4 FUN_1489eacb4 body=93 status=ok
// SIG undefined FUN_1489eacb4(void)

void FUN_1489eacb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ead12 FUN_1489ead12 body=126 status=ok
// SIG undefined FUN_1489ead12(void)

void FUN_1489ead12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa9a7d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b456800;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ead81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ead9e FUN_1489ead9e body=21 status=ok
// SIG undefined FUN_1489ead9e(void)

undefined8 FUN_1489ead9e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489eadb4 FUN_1489eadb4 body=29 status=ok
// SIG undefined FUN_1489eadb4(void)

undefined8 FUN_1489eadb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eadee FUN_1489eadee body=93 status=ok
// SIG undefined FUN_1489eadee(void)

void FUN_1489eadee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b456ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eae4c FUN_1489eae4c body=93 status=ok
// SIG undefined FUN_1489eae4c(void)

void FUN_1489eae4c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b456ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eaeaa FUN_1489eaeaa body=126 status=ok
// SIG undefined FUN_1489eaeaa(void)

void FUN_1489eaeaa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b456ac0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489eaf19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489eaf34 FUN_1489eaf34 body=21 status=ok
// SIG undefined FUN_1489eaf34(void)

undefined8 FUN_1489eaf34(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489eaf4a FUN_1489eaf4a body=29 status=ok
// SIG undefined FUN_1489eaf4a(void)

undefined8 FUN_1489eaf4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eaf84 FUN_1489eaf84 body=93 status=ok
// SIG undefined FUN_1489eaf84(void)

void FUN_1489eaf84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eafe2 FUN_1489eafe2 body=93 status=ok
// SIG undefined FUN_1489eafe2(void)

void FUN_1489eafe2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eb040 FUN_1489eb040 body=126 status=ok
// SIG undefined FUN_1489eb040(void)

void FUN_1489eb040(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b456b30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489eb0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489eb0cc FUN_1489eb0cc body=21 status=ok
// SIG undefined FUN_1489eb0cc(void)

undefined8 FUN_1489eb0cc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489eb0e2 FUN_1489eb0e2 body=230 status=ok
// SIG undefined FUN_1489eb0e2(void)

undefined8 * FUN_1489eb0e2(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1489eb1ca FUN_1489eb1ca body=29 status=ok
// SIG undefined FUN_1489eb1ca(void)

undefined8 FUN_1489eb1ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eb210 FUN_1489eb210 body=93 status=ok
// SIG undefined FUN_1489eb210(void)

void FUN_1489eb210(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456c10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eb26e FUN_1489eb26e body=93 status=ok
// SIG undefined FUN_1489eb26e(void)

void FUN_1489eb26e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456c10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eb2cc FUN_1489eb2cc body=126 status=ok
// SIG undefined FUN_1489eb2cc(void)

void FUN_1489eb2cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b456c10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b456ba0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489eb33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489eb358 FUN_1489eb358 body=21 status=ok
// SIG undefined FUN_1489eb358(void)

undefined8 FUN_1489eb358(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489eb370 FUN_1489eb370 body=230 status=ok
// SIG undefined FUN_1489eb370(void)

undefined8 * FUN_1489eb370(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1489eb458 FUN_1489eb458 body=29 status=ok
// SIG undefined FUN_1489eb458(void)

undefined8 FUN_1489eb458(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eb49e FUN_1489eb49e body=93 status=ok
// SIG undefined FUN_1489eb49e(void)

void FUN_1489eb49e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456cf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456c80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eb4fc FUN_1489eb4fc body=93 status=ok
// SIG undefined FUN_1489eb4fc(void)

void FUN_1489eb4fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456cf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456c80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eb55a FUN_1489eb55a body=126 status=ok
// SIG undefined FUN_1489eb55a(void)

void FUN_1489eb55a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b456cf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b456c80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489eb5c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489eb5e6 FUN_1489eb5e6 body=21 status=ok
// SIG undefined FUN_1489eb5e6(void)

undefined8 FUN_1489eb5e6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489eb5fe FUN_1489eb5fe body=29 status=ok
// SIG undefined FUN_1489eb5fe(void)

undefined8 FUN_1489eb5fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eb636 FUN_1489eb636 body=29 status=ok
// SIG undefined FUN_1489eb636(void)

bool FUN_1489eb636(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489eb654 FUN_1489eb654 body=26 status=ok
// SIG undefined FUN_1489eb654(void)

bool FUN_1489eb654(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489eb66e FUN_1489eb66e body=24 status=ok
// SIG undefined FUN_1489eb66e(void)

bool FUN_1489eb66e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489eb686 FUN_1489eb686 body=101 status=ok
// SIG undefined FUN_1489eb686(void)

void FUN_1489eb686(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489eb6ec FUN_1489eb6ec body=101 status=ok
// SIG undefined FUN_1489eb6ec(void)

void FUN_1489eb6ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489eb752 FUN_1489eb752 body=134 status=ok
// SIG undefined FUN_1489eb752(void)

void FUN_1489eb752(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea200;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b456d60;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489eb7c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489eb7d8 FUN_1489eb7d8 body=68 status=ok
// SIG undefined FUN_1489eb7d8(void)

void FUN_1489eb7d8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489eb819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489eb81c FUN_1489eb81c body=183 status=ok
// SIG undefined FUN_1489eb81c(void)

bool FUN_1489eb81c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
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
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489eb8d4 FUN_1489eb8d4 body=38 status=ok
// SIG undefined FUN_1489eb8d4(void)

undefined8 FUN_1489eb8d4(undefined8 param_1,int param_2)

{
  FUN_1489ec5dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489eb8fa FUN_1489eb8fa body=291 status=ok
// SIG undefined FUN_1489eb8fa(void)

ulonglong FUN_1489eb8fa(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  int local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  if (param_2 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar3 = strlen(param_2);
    FUN_1446e6fe8(local_138,param_2,sVar3 & 0xffffffff,1);
  }
  FUN_140056680(&local_148,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_14113f0c0(*(longlong *)(param_1 + 0x18) + 0x230);
  if (cVar2 != '\0') {
    cVar2 = FUN_1489c6549(*(longlong *)(param_1 + 0x18) + 0x230,&local_148);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_1489eb9c6;
    }
  }
  iVar1 = local_140 + -1;
  if (local_140 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x20,local_148,iVar1);
  *(undefined4 *)(param_1 + 0x10) = 1;
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1489eb9c6:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489eba42 FUN_1489eba42 body=369 status=ok
// SIG undefined FUN_1489eba42(void)

void FUN_1489eba42(longlong param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_178 [32];
  longlong local_158 [2];
  longlong local_148;
  int local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_143ea6700(&local_148);
  local_38 = 0;
  if (param_3 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_138,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_158);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == local_140) {
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x20) + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(local_148 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) goto LAB_1489ebb33;
LAB_1489ebafe:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1489ebafe;
      }
      if (uVar4 != uVar6) goto LAB_1489ebb3a;
    }
  }
  else if (local_140 + iVar1 != 1) goto LAB_1489ebb3a;
LAB_1489ebb33:
  *(undefined4 *)(param_1 + 0x10) = 3;
LAB_1489ebb3a:
  FUN_1489c64b6(*(longlong *)(param_1 + 0x18) + 0x220,&local_148,local_158);
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489ebbb4 FUN_1489ebbb4 body=308 status=ok
// SIG undefined FUN_1489ebbb4(void)

void FUN_1489ebbb4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_143ea6700(&local_30);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == local_28) {
    if (1 < iVar1) {
      lVar2 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x20) + lVar2);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(local_30 + lVar2);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_1489ebc48;
LAB_1489ebc13:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1489ebc13;
      }
      if (uVar3 != uVar5) goto LAB_1489ebc96;
    }
  }
  else if (local_28 + iVar1 != 1) goto LAB_1489ebc96;
LAB_1489ebc48:
  FUN_1400b22c2(&local_40,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x20) == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x20) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x28) = local_38;
    *(undefined4 *)(param_1 + 0x2c) = local_34;
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
LAB_1489ebc96:
  FUN_1489c6455(*(longlong *)(param_1 + 0x18) + 0x210,&local_30);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489ebcea FUN_1489ebcea body=47 status=ok
// SIG undefined FUN_1489ebcea(void)

void FUN_1489ebcea(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1489deef8();
  FUN_1489c6432(*(longlong *)(param_1 + 0x18) + 0x1c0);
  return;
}



// FUNCTION 1489ebd30 FUN_1489ebd30 body=187 status=ok
// SIG undefined FUN_1489ebd30(void)

undefined8 * FUN_1489ebd30(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  (**(code **)(*DAT_14c98e618 + 0x30))(DAT_14c98e618,&local_28);
  if (local_28 != 0) {
    FUN_14287c17c(local_28,&local_30);
    *(int *)(param_2 + 1) = (int)(longlong)local_30;
    *(int *)((longlong)param_2 + 0xc) = (int)(longlong)local_2c;
    param_2[2] = 0x1800000018;
    *(int *)param_2 = (int)(longlong)local_30;
    *(int *)((longlong)param_2 + 4) = (int)(longlong)local_2c;
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ebdec FUN_1489ebdec body=456 status=ok
// SIG undefined FUN_1489ebdec(void)

undefined8
FUN_1489ebdec(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             int param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined1 uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_144a7d136();
  local_68 = plVar6[0x22];
  if (local_68 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    local_68 = plVar6[0x22];
  }
  if (((param_5 == 2) && (*(char *)(local_68 + 0x46) == '\0')) &&
     (cVar3 = (**(code **)(*param_2 + 0x38))(), cVar3 == '\n')) {
LAB_1489ebf84:
    uVar7 = 1;
    if (param_4 == (undefined1 *)0x0) goto LAB_1489ebf8d;
    uVar9 = 0;
  }
  else {
    local_60 = param_4;
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar4 != 0) {
      uVar11 = 0;
      do {
        if ((longlong)*(int *)(local_68 + 0x50) != 0) {
          puVar15 = *(undefined8 **)(local_68 + 0x48);
          puVar12 = puVar15 + (longlong)*(int *)(local_68 + 0x50) * 2;
          do {
            if (param_5 == 2) {
              uVar7 = (**(code **)(*param_2 + 0x10))(param_2,uVar11);
              FUN_1400b22c2(&local_58,uVar7);
              puVar8 = local_58;
              if (local_50 == 0) {
                puVar8 = &DAT_149dfb77a;
              }
              puVar10 = &DAT_149dfb77a;
              if (*(int *)(puVar15 + 1) != 0) {
                puVar10 = (undefined2 *)*puVar15;
              }
              lVar13 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar10 + lVar13);
                uVar14 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar8 + lVar13);
                uVar5 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489ebf0f;
                  }
                  iVar4 = uVar14 - uVar5;
                  goto LAB_1489ebf3b;
                }
                if (uVar1 == 0) break;
LAB_1489ebf0f:
                lVar13 = lVar13 + 2;
              }
              iVar4 = 0;
LAB_1489ebf3b:
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              param_4 = local_60;
              if (iVar4 == 0) goto LAB_1489ebf84;
            }
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
      } while (uVar11 < uVar5);
    }
    uVar9 = 1;
    uVar7 = 0;
    param_4 = local_60;
    if (local_60 == (undefined1 *)0x0) goto LAB_1489ebf8d;
  }
  *param_4 = uVar9;
LAB_1489ebf8d:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1489ebfb6 FUN_1489ebfb6 body=423 status=ok
// SIG undefined FUN_1489ebfb6(void)

undefined8
FUN_1489ebfb6(undefined8 param_1,longlong *param_2,int *param_3,undefined1 *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong *local_60;
  longlong **local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  plVar4 = (longlong *)FUN_144a7d136();
  lVar9 = plVar4[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar9 = plVar4[0x22];
  }
  if ((*param_3 != 0) && ((*param_3 != 3 || (*(char *)(lVar9 + 0x68) == '\0')))) {
    if ((param_5 == 2) && (*(char *)(lVar9 + 0x46) == '\0')) {
      cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
      if (cVar1 == '\n') {
        uVar5 = 1;
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        goto LAB_1489ec026;
      }
    }
    else if (1 < param_5 - 1U) goto LAB_1489ec01c;
    local_64 = 0;
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar2 != 0) {
      do {
        local_58 = &local_60;
        local_50 = &local_64;
        if ((longlong)*(int *)(lVar9 + 0x60) != 0) {
          lVar7 = *(longlong *)(lVar9 + 0x58);
          lVar8 = (longlong)*(int *)(lVar9 + 0x60) << 4;
          do {
            cVar1 = FUN_1489ec65c(&local_58,lVar7);
            if (cVar1 != '\0') {
              if (lVar7 != 0) goto LAB_1489ec14c;
              break;
            }
            lVar7 = lVar7 + 0x10;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        if ((param_5 == 2) &&
           (local_58 = &local_60, local_50 = &local_64, (longlong)*(int *)(lVar9 + 0x50) != 0)) {
          lVar7 = *(longlong *)(lVar9 + 0x48);
          lVar8 = (longlong)*(int *)(lVar9 + 0x50) << 4;
          do {
            cVar1 = FUN_1489ec65c(&local_58,lVar7);
            if (cVar1 != '\0') {
              if (lVar7 != 0) goto LAB_1489ec14c;
              break;
            }
            lVar7 = lVar7 + 0x10;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        uVar6 = local_64 + 1;
        local_64 = uVar6;
        uVar3 = (**(code **)(*local_60 + 8))();
      } while (uVar6 < uVar3);
    }
  }
LAB_1489ec01c:
  uVar5 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
LAB_1489ec026:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_1489ec14c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = 1;
  goto LAB_1489ec026;
}



// FUNCTION 1489ec24c FUN_1489ec24c body=50 status=ok
// SIG undefined FUN_1489ec24c(void)

void FUN_1489ec24c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x168) != 0)) {
    uVar2 = FUN_1489cc816(param_2);
    *(undefined4 *)(*(longlong *)(lVar1 + 0x168) + 0x220) = uVar2;
  }
  return;
}



// FUNCTION 1489ec2a2 FUN_1489ec2a2 body=55 status=ok
// SIG undefined FUN_1489ec2a2(void)

void FUN_1489ec2a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x48,0x10);
  FUN_1489dd2de(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489ec2da FUN_1489ec2da body=45 status=ok
// SIG undefined FUN_1489ec2da(void)

longlong FUN_1489ec2da(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1489ec5dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ec308 FUN_1489ec308 body=567 status=ok
// SIG undefined FUN_1489ec308(void)

void FUN_1489ec308(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined7 uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_1489ec32e;
  uVar5 = FUN_143e96386();
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar10 = *(longlong **)(param_1 + 0x30);
  if (plVar10 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
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
  lVar6 = FUN_14001cc68(0x70,0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x168);
  if (lVar3 == 0) {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x178);
  }
  else {
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x238) + 8);
  }
  FUN_1489dcd04(lVar6,*puVar7,param_2);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b4541c0;
  plVar8[2] = lVar6;
  *(longlong *)(param_1 + 0x28) = lVar6;
  plVar10 = *(longlong **)(param_1 + 0x30);
  if (plVar8 == plVar10) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar10 = plVar8;
        goto joined_r0x0001489ec44e;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x30) = plVar8;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001489ec44e:
        if (iVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  FUN_1446ddc76(&local_40,"CohtmlPlugin",1);
  uVar9 = FUN_144a52528();
  FUN_1402c9134(uVar9,local_40,local_34,1);
  uVar11 = (undefined7)((ulonglong)local_40 >> 8);
  if ((DAT_14cb90d70 == (longlong *)0x0 || DAT_14cb90d78 == 0) ||
     (cVar4 = (**(code **)(*DAT_14cb90d70 + 0x30))(), cVar4 == '\0')) {
    uVar9 = DAT_14c98e618;
    local_50 = *(undefined8 *)(param_1 + 0x28);
    local_48 = *(longlong *)(param_1 + 0x30);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    FUN_1428f5168(uVar9,CONCAT71(uVar11,1),uVar5,&local_50);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x168);
    if (lVar3 == 0) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x178);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x238) + 8);
    }
    plVar10 = DAT_14cb90d70;
    if (DAT_14cb90d78 == 0) {
      plVar10 = (longlong *)0x0;
    }
    local_58 = param_2;
    (**(code **)(*plVar10 + 0x58))(plVar10,param_1 + 0x28,uVar5,*puVar7);
  }
LAB_1489ec32e:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ec540 FUN_1489ec540 body=155 status=ok
// SIG undefined FUN_1489ec540(void)

void FUN_1489ec540(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_143e96386();
    if (DAT_14c98e618 != 0) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_1428f5168(DAT_14c98e618,0,uVar4);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
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



// FUNCTION 1489ec5dc FUN_1489ec5dc body=128 status=ok
// SIG undefined FUN_1489ec5dc(void)

void FUN_1489ec5dc(IViewListener *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_14b456dd0;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14b456ea0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::ITextInputHandler::~ITextInputHandler((ITextInputHandler *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001489ec655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::IViewListener::~IViewListener(param_1);
  return;
}



// FUNCTION 1489ec65c FUN_1489ec65c body=205 status=ok
// SIG undefined FUN_1489ec65c(void)

bool FUN_1489ec65c(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (**(code **)(**(longlong **)*param_1 + 0x10))
                    (*(longlong **)*param_1,*(undefined4 *)param_1[1]);
  FUN_1400b22c2(&local_28,uVar3);
  puVar5 = &DAT_149dfb77a;
  puVar4 = local_28;
  if (local_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar5 = (undefined2 *)*param_2;
  }
  lVar8 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar5 + lVar8);
    uVar6 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar4 + lVar8);
    uVar9 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489ec6d2;
      }
      iVar7 = uVar6 - uVar9;
      goto LAB_1489ec6fd;
    }
    if (uVar1 == 0) break;
LAB_1489ec6d2:
    lVar8 = lVar8 + 2;
  }
  iVar7 = 0;
LAB_1489ec6fd:
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar7 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ec72a FUN_1489ec72a body=24 status=ok
// SIG undefined FUN_1489ec72a(void)

void FUN_1489ec72a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ec73e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1489ec742 FUN_1489ec742 body=29 status=ok
// SIG undefined FUN_1489ec742(void)

undefined8 FUN_1489ec742(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ec760 FUN_1489ec760 body=324 status=ok
// SIG undefined FUN_1489ec760(void)

longlong * FUN_1489ec760(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x2e0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b456ef0;
  plVar4 = plVar3 + 2;
  FUN_145a31d14(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1489ec8ce(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1489ec837;
    param_1[1] = 0;
LAB_1489ec801:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1489ec837;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1489ec837;
      goto LAB_1489ec801;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1489ec837;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1489ec837:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2d0;
  FUN_140a52e78(*param_1,"SCohtmlWidget",
                ".\\../Plugins/Runtime/Coherent/CohtmlPlugin/Source/CohtmlPlugin/Private/CohtmlWidget.cpp"
                ,0xde);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ec8a6 FUN_1489ec8a6 body=9 status=ok
// SIG undefined FUN_1489ec8a6(void)

void FUN_1489ec8a6(longlong param_1)

{
  FUN_1413d7d8a(param_1 + 0x10);
  return;
}



// FUNCTION 1489ec8b0 FUN_1489ec8b0 body=29 status=ok
// SIG undefined FUN_1489ec8b0(void)

undefined8 FUN_1489ec8b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ec8ce FUN_1489ec8ce body=167 status=ok
// SIG undefined FUN_1489ec8ce(void)

void FUN_1489ec8ce(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489ec949;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489ec949;
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
LAB_1489ec949:
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
                    /* WARNING: Could not recover jumptable at 0x0001489ec969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489ec976 FUN_1489ec976 body=29 status=ok
// SIG undefined FUN_1489ec976(void)

undefined8 FUN_1489ec976(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ec9ae FUN_1489ec9ae body=29 status=ok
// SIG undefined FUN_1489ec9ae(void)

bool FUN_1489ec9ae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489ec9cc FUN_1489ec9cc body=26 status=ok
// SIG undefined FUN_1489ec9cc(void)

bool FUN_1489ec9cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489ec9e6 FUN_1489ec9e6 body=24 status=ok
// SIG undefined FUN_1489ec9e6(void)

bool FUN_1489ec9e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489ec9fe FUN_1489ec9fe body=93 status=ok
// SIG undefined FUN_1489ec9fe(void)

void FUN_1489ec9fe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b456f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eca5c FUN_1489eca5c body=93 status=ok
// SIG undefined FUN_1489eca5c(void)

void FUN_1489eca5c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b456f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ecaba FUN_1489ecaba body=126 status=ok
// SIG undefined FUN_1489ecaba(void)

void FUN_1489ecaba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b456f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ecb29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ecb38 FUN_1489ecb38 body=35 status=ok
// SIG undefined FUN_1489ecb38(void)

void FUN_1489ecb38(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489ecb57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1489ecb5c FUN_1489ecb5c body=142 status=ok
// SIG undefined FUN_1489ecb5c(void)

bool FUN_1489ecb5c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ecbec FUN_1489ecbec body=29 status=ok
// SIG undefined FUN_1489ecbec(void)

undefined8 FUN_1489ecbec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489ecc24 FUN_1489ecc24 body=29 status=ok
// SIG undefined FUN_1489ecc24(void)

bool FUN_1489ecc24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489ecc42 FUN_1489ecc42 body=26 status=ok
// SIG undefined FUN_1489ecc42(void)

bool FUN_1489ecc42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489ecc5c FUN_1489ecc5c body=24 status=ok
// SIG undefined FUN_1489ecc5c(void)

bool FUN_1489ecc5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489ecc80 FUN_1489ecc80 body=93 status=ok
// SIG undefined FUN_1489ecc80(void)

void FUN_1489ecc80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489eccde FUN_1489eccde body=93 status=ok
// SIG undefined FUN_1489eccde(void)

void FUN_1489eccde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b456f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489ecd3c FUN_1489ecd3c body=126 status=ok
// SIG undefined FUN_1489ecd3c(void)

void FUN_1489ecd3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b456ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b456f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489ecdab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489ecdba FUN_1489ecdba body=58 status=ok
// SIG undefined FUN_1489ecdba(void)

void FUN_1489ecdba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489ecdf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489ecdf4 FUN_1489ecdf4 body=173 status=ok
// SIG undefined FUN_1489ecdf4(void)

bool FUN_1489ecdf4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
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



// FUNCTION 1489ecea4 FUN_1489ecea4 body=334 status=ok
// SIG undefined FUN_1489ecea4(void)

undefined4 * FUN_1489ecea4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14783dad6(param_1,local_48);
  FUN_1489ecff4(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_14783dbbc(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x24) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14783dd3c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ecff4 FUN_1489ecff4 body=121 status=ok
// SIG undefined FUN_1489ecff4(void)

undefined8 * FUN_1489ecff4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  return param_1;
}



// FUNCTION 1489ed06e FUN_1489ed06e body=67 status=ok
// SIG undefined FUN_1489ed06e(void)

void FUN_1489ed06e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c4091c(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14783dd3c(param_1);
    return;
  }
  FUN_1489ed0b2(param_1);
  FUN_145c4091c(param_1,0);
  return;
}



// FUNCTION 1489ed0b2 FUN_1489ed0b2 body=322 status=ok
// SIG undefined FUN_1489ed0b2(void)

void FUN_1489ed0b2(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1489ed1f6 FUN_1489ed1f6 body=334 status=ok
// SIG undefined FUN_1489ed1f6(void)

undefined4 * FUN_1489ed1f6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14783dad6(param_1,local_48);
  FUN_1489ed346(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_14783dbbc(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x24) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14783dd3c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ed346 FUN_1489ed346 body=152 status=ok
// SIG undefined FUN_1489ed346(void)

undefined8 * FUN_1489ed346(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1489ed3de FUN_1489ed3de body=203 status=ok
// SIG undefined FUN_1489ed3de(void)

int FUN_1489ed3de(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1489ed428:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1489ed49e;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1489ed49e;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1489ed48f;
    }
  }
  return -1;
LAB_1489ed49e:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1489ed48f:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1489ed428;
}



// FUNCTION 1489ed4aa FUN_1489ed4aa body=315 status=ok
// SIG undefined FUN_1489ed4aa(void)

undefined4 * FUN_1489ed4aa(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_1489ed5e6(param_1,local_48);
  FUN_1489ed74e(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
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
  cVar3 = FUN_1489ed6cc(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1489ed868(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ed5e6 FUN_1489ed5e6 body=229 status=ok
// SIG undefined FUN_1489ed5e6(void)

int * FUN_1489ed5e6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1489ed6cc FUN_1489ed6cc body=129 status=ok
// SIG undefined FUN_1489ed6cc(void)

undefined8 FUN_1489ed6cc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1489ed3de(), iVar7 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar7 * 0x20);
    plVar2 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    plVar1[2] = *(longlong *)(param_3 + 4);
    *(undefined4 *)plVar1 = uVar3;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar4;
    *(undefined4 *)(plVar1 + 1) = uVar5;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar6;
    FUN_1489ed7b2(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1489ed74e FUN_1489ed74e body=100 status=ok
// SIG undefined FUN_1489ed74e(void)

undefined8 * FUN_1489ed74e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1489ed7b2 FUN_1489ed7b2 body=114 status=ok
// SIG undefined FUN_1489ed7b2(void)

void FUN_1489ed7b2(longlong *param_1,int param_2)

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



// FUNCTION 1489ed824 FUN_1489ed824 body=68 status=ok
// SIG undefined FUN_1489ed824(void)

void FUN_1489ed824(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1489ed868(param_1);
  return;
}



// FUNCTION 1489ed868 FUN_1489ed868 body=476 status=ok
// SIG undefined FUN_1489ed868(void)

void FUN_1489ed868(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x20;
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
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
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



// FUNCTION 1489eda46 FUN_1489eda46 body=67 status=ok
// SIG undefined FUN_1489eda46(void)

void FUN_1489eda46(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c40ab6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1489ed868(param_1);
    return;
  }
  FUN_1489eda8a(param_1);
  FUN_145c40ab6(param_1,0);
  return;
}



// FUNCTION 1489eda8a FUN_1489eda8a body=322 status=ok
// SIG undefined FUN_1489eda8a(void)

void FUN_1489eda8a(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1489edbce FUN_1489edbce body=203 status=ok
// SIG undefined FUN_1489edbce(void)

void FUN_1489edbce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1446f4a44(param_1,iVar5);
  return;
}



// FUNCTION 1489edc9a FUN_1489edc9a body=68 status=ok
// SIG undefined FUN_1489edc9a(void)

void FUN_1489edc9a(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_144725486();
  FUN_144725486(param_1 + 0x20);
  FUN_14003f39a(param_1 + 0x20);
  FUN_144a80d50(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1489edcde FUN_1489edcde body=419 status=ok
// SIG undefined FUN_1489edcde(void)

void FUN_1489edcde(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 1489ede82 FUN_1489ede82 body=81 status=ok
// SIG undefined FUN_1489ede82(void)

void FUN_1489ede82(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1489eded4(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489eded4 FUN_1489eded4 body=90 status=ok
// SIG undefined FUN_1489eded4(void)

void FUN_1489eded4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1489edf2e();
  return;
}



// FUNCTION 1489edf2e FUN_1489edf2e body=52 status=ok
// SIG undefined FUN_1489edf2e(void)

void FUN_1489edf2e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x20) != 0) {
    FUN_14018802a();
  }
  FUN_1489edf62(param_1,param_2);
  return;
}



// FUNCTION 1489edf62 FUN_1489edf62 body=114 status=ok
// SIG undefined FUN_1489edf62(void)

void FUN_1489edf62(longlong *param_1,int param_2)

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



// FUNCTION 1489edfd4 FUN_1489edfd4 body=81 status=ok
// SIG undefined FUN_1489edfd4(void)

void FUN_1489edfd4(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1489ee026(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489ee026 FUN_1489ee026 body=90 status=ok
// SIG undefined FUN_1489ee026(void)

void FUN_1489ee026(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1489ee080();
  return;
}



// FUNCTION 1489ee080 FUN_1489ee080 body=52 status=ok
// SIG undefined FUN_1489ee080(void)

void FUN_1489ee080(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1489ee0b4(param_1,param_2);
  return;
}



// FUNCTION 1489ee0b4 FUN_1489ee0b4 body=114 status=ok
// SIG undefined FUN_1489ee0b4(void)

void FUN_1489ee0b4(longlong *param_1,int param_2)

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



// FUNCTION 1489ee126 FUN_1489ee126 body=81 status=ok
// SIG undefined FUN_1489ee126(void)

void FUN_1489ee126(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1489ee178(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489ee178 FUN_1489ee178 body=90 status=ok
// SIG undefined FUN_1489ee178(void)

void FUN_1489ee178(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1489ee1d2();
  return;
}



// FUNCTION 1489ee1d2 FUN_1489ee1d2 body=52 status=ok
// SIG undefined FUN_1489ee1d2(void)

void FUN_1489ee1d2(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1489ee206(param_1,param_2);
  return;
}



// FUNCTION 1489ee206 FUN_1489ee206 body=114 status=ok
// SIG undefined FUN_1489ee206(void)

void FUN_1489ee206(longlong *param_1,int param_2)

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



// FUNCTION 1489ee278 FUN_1489ee278 body=291 status=ok
// SIG undefined FUN_1489ee278(void)

undefined4 * FUN_1489ee278(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489ee39c(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1489e0584(local_40 + 2,uVar1);
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1489ee47e(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0xd] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489edcde(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ee39c FUN_1489ee39c body=226 status=ok
// SIG undefined FUN_1489ee39c(void)

int * FUN_1489ee39c(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1489ee47e FUN_1489ee47e body=174 status=ok
// SIG undefined FUN_1489ee47e(void)

undefined8 FUN_1489ee47e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          puVar2 = *(undefined8 **)(piVar1 + 6);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          iVar7 = param_3[4];
          iVar8 = param_3[5];
          iVar9 = param_3[6];
          iVar10 = param_3[7];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar7;
          piVar1[5] = iVar8;
          piVar1[6] = iVar9;
          piVar1[7] = iVar10;
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_1489ee52c(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xc];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489ee52c FUN_1489ee52c body=116 status=ok
// SIG undefined FUN_1489ee52c(void)

void FUN_1489ee52c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1489ee5a0 FUN_1489ee5a0 body=157 status=ok
// SIG undefined FUN_1489ee5a0(void)

void FUN_1489ee5a0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489ee63e FUN_1489ee63e body=81 status=ok
// SIG undefined FUN_1489ee63e(void)

void FUN_1489ee63e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_1489ee690(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489ee690 FUN_1489ee690 body=87 status=ok
// SIG undefined FUN_1489ee690(void)

void FUN_1489ee690(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1489ee6e8();
  return;
}



// FUNCTION 1489ee6e8 FUN_1489ee6e8 body=57 status=ok
// SIG undefined FUN_1489ee6e8(void)

void FUN_1489ee6e8(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x18 + (longlong)param_2 * 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1489ee52c(param_1,param_2);
  return;
}



// FUNCTION 1489ee722 FUN_1489ee722 body=146 status=ok
// SIG undefined FUN_1489ee722(void)

void FUN_1489ee722(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x128,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x128)) {
      uVar5 = uVar4 / 0x128 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x128,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489ee7b6 FUN_1489ee7b6 body=303 status=ok
// SIG undefined FUN_1489ee7b6(void)

undefined4 * FUN_1489ee7b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489ee8e6(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  *local_40 = *(uint *)*param_3;
  local_40[2] = *puVar1;
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 2);
  puVar1[2] = 0;
  puVar1[3] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1489ee9cc(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489eea6c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ee8e6 FUN_1489ee8e6 body=229 status=ok
// SIG undefined FUN_1489ee8e6(void)

int * FUN_1489ee8e6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1489ee9cc FUN_1489ee9cc body=159 status=ok
// SIG undefined FUN_1489ee9cc(void)

undefined8 FUN_1489ee9cc(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_14018802a();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489edf62(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489eea6c FUN_1489eea6c body=422 status=ok
// SIG undefined FUN_1489eea6c(void)

void FUN_1489eea6c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1489eec14 FUN_1489eec14 body=310 status=ok
// SIG undefined FUN_1489eec14(void)

undefined4 * FUN_1489eec14(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489eed4c(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1489eee32(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489eeed2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489eed4c FUN_1489eed4c body=229 status=ok
// SIG undefined FUN_1489eed4c(void)

int * FUN_1489eed4c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1489eee32 FUN_1489eee32 body=159 status=ok
// SIG undefined FUN_1489eee32(void)

undefined8 FUN_1489eee32(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489ee0b4(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489eeed2 FUN_1489eeed2 body=422 status=ok
// SIG undefined FUN_1489eeed2(void)

void FUN_1489eeed2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1489ef07a FUN_1489ef07a body=310 status=ok
// SIG undefined FUN_1489ef07a(void)

undefined4 * FUN_1489ef07a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489ef1b2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1489ef298(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489ef338(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489ef1b2 FUN_1489ef1b2 body=229 status=ok
// SIG undefined FUN_1489ef1b2(void)

int * FUN_1489ef1b2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1489ef298 FUN_1489ef298 body=159 status=ok
// SIG undefined FUN_1489ef298(void)

undefined8 FUN_1489ef298(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489ee206(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489ef338 FUN_1489ef338 body=422 status=ok
// SIG undefined FUN_1489ef338(void)

void FUN_1489ef338(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1489ef4e0 FUN_1489ef4e0 body=48 status=ok
// SIG undefined FUN_1489ef4e0(void)

void FUN_1489ef4e0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1c,4);
  }
  return;
}



// FUNCTION 1489ef510 FUN_1489ef510 body=95 status=ok
// SIG undefined FUN_1489ef510(void)

void FUN_1489ef510(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  int iVar1;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 8);
  if (*_Dst != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *_Dst = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1489ef570 FUN_1489ef570 body=62 status=ok
// SIG undefined FUN_1489ef570(void)

void FUN_1489ef570(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489ef5ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1489ef5ae FUN_1489ef5ae body=93 status=ok
// SIG undefined FUN_1489ef5ae(void)

ulonglong FUN_1489ef5ae(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1489ef60c FUN_1489ef60c body=132 status=ok
// SIG undefined FUN_1489ef60c(void)

void FUN_1489ef60c(longlong param_1,int param_2)

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



// FUNCTION 1489ef692 FUN_1489ef692 body=48 status=ok
// SIG undefined FUN_1489ef692(void)

void FUN_1489ef692(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489ef6c2 FUN_1489ef6c2 body=81 status=ok
// SIG undefined FUN_1489ef6c2(void)

void FUN_1489ef6c2(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1489ef714(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489ef714 FUN_1489ef714 body=90 status=ok
// SIG undefined FUN_1489ef714(void)

void FUN_1489ef714(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1489ef76e();
  return;
}



// FUNCTION 1489ef76e FUN_1489ef76e body=52 status=ok
// SIG undefined FUN_1489ef76e(void)

void FUN_1489ef76e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1489ef7a2(param_1,param_2);
  return;
}



// FUNCTION 1489ef7a2 FUN_1489ef7a2 body=114 status=ok
// SIG undefined FUN_1489ef7a2(void)

void FUN_1489ef7a2(longlong *param_1,int param_2)

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



// FUNCTION 1489ef814 FUN_1489ef814 body=81 status=ok
// SIG undefined FUN_1489ef814(void)

void FUN_1489ef814(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_1489ef866(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489ef866 FUN_1489ef866 body=87 status=ok
// SIG undefined FUN_1489ef866(void)

void FUN_1489ef866(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1489ef8be();
  return;
}



// FUNCTION 1489ef8be FUN_1489ef8be body=52 status=ok
// SIG undefined FUN_1489ef8be(void)

void FUN_1489ef8be(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FUN_14018802a();
  }
  FUN_1489ef8f2(param_1,param_2);
  return;
}



// FUNCTION 1489ef8f2 FUN_1489ef8f2 body=114 status=ok
// SIG undefined FUN_1489ef8f2(void)

void FUN_1489ef8f2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1489ef964 FUN_1489ef964 body=309 status=ok
// SIG undefined FUN_1489ef964(void)

undefined4 * FUN_1489ef964(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489efa9a(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  *local_40 = *(uint *)*param_3;
  local_40[2] = *puVar1;
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 2);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(char *)(local_40 + 6) = (char)puVar1[4];
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1489efb80(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[9] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489efc20(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


