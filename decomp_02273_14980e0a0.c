// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14980e0a0 FUN_14980e0a0 body=260 status=ok
// SIG undefined FUN_14980e0a0(void)

void FUN_14980e0a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  local_48 = 0;
  local_40 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_40[1] = (longlong)&DAT_100000001;
  *local_40 = (longlong)&PTR_FUN_14be901d0;
  local_40[2] = 0;
  FUN_145a282c4(param_1 + 0x88,&local_48);
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  FUN_14980e1a6(param_1 + 8,*(undefined8 *)(param_1 + 0x80));
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x3c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((iVar4 < iVar3) && (iVar5 == iVar6)) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980e1a6 FUN_14980e1a6 body=132 status=ok
// SIG undefined FUN_14980e1a6(void)

void FUN_14980e1a6(longlong *param_1,ulonglong param_2)

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
          FUN_14980e22a(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14980e22a FUN_14980e22a body=90 status=ok
// SIG undefined FUN_14980e22a(void)

void FUN_14980e22a(longlong *param_1,int param_2)

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
  FUN_14980e284();
  return;
}



// FUNCTION 14980e284 FUN_14980e284 body=78 status=ok
// SIG undefined FUN_14980e284(void)

void FUN_14980e284(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14980e2d2(param_1,param_2);
  return;
}



// FUNCTION 14980e2d2 FUN_14980e2d2 body=114 status=ok
// SIG undefined FUN_14980e2d2(void)

void FUN_14980e2d2(longlong *param_1,int param_2)

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



// FUNCTION 14980e344 FUN_14980e344 body=343 status=ok
// SIG undefined FUN_14980e344(void)

undefined4 * FUN_14980e344(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14980e49c(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_14980e582(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14980e642(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980e49c FUN_14980e49c body=229 status=ok
// SIG undefined FUN_14980e49c(void)

int * FUN_14980e49c(longlong *param_1,int *param_2)

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



// FUNCTION 14980e582 FUN_14980e582 body=191 status=ok
// SIG undefined FUN_14980e582(void)

undefined8 FUN_14980e582(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
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
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14980e2d2(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14980e642 FUN_14980e642 body=477 status=ok
// SIG undefined FUN_14980e642(void)

void FUN_14980e642(longlong *param_1)

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



// FUNCTION 14980e820 FUN_14980e820 body=73 status=ok
// SIG undefined FUN_14980e820(void)

void FUN_14980e820(longlong param_1,int param_2)

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



// FUNCTION 14980e86a FUN_14980e86a body=29 status=ok
// SIG undefined FUN_14980e86a(void)

undefined8 FUN_14980e86a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980e8a4 FUN_14980e8a4 body=93 status=ok
// SIG undefined FUN_14980e8a4(void)

void FUN_14980e8a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be901f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980e902 FUN_14980e902 body=93 status=ok
// SIG undefined FUN_14980e902(void)

void FUN_14980e902(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be901f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980e960 FUN_14980e960 body=123 status=ok
// SIG undefined FUN_14980e960(void)

void FUN_14980e960(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be901f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980e9ea FUN_14980e9ea body=21 status=ok
// SIG undefined FUN_14980e9ea(void)

undefined8 FUN_14980e9ea(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980ea00 FUN_14980ea00 body=29 status=ok
// SIG undefined FUN_14980ea00(void)

undefined8 FUN_14980ea00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980ea3a FUN_14980ea3a body=93 status=ok
// SIG undefined FUN_14980ea3a(void)

void FUN_14980ea3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be90260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980ea98 FUN_14980ea98 body=93 status=ok
// SIG undefined FUN_14980ea98(void)

void FUN_14980ea98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be90260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980eaf6 FUN_14980eaf6 body=123 status=ok
// SIG undefined FUN_14980eaf6(void)

void FUN_14980eaf6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be90260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980eb80 FUN_14980eb80 body=21 status=ok
// SIG undefined FUN_14980eb80(void)

undefined8 FUN_14980eb80(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980ebae FUN_14980ebae body=29 status=ok
// SIG undefined FUN_14980ebae(void)

undefined8 FUN_14980ebae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980ebcc FUN_14980ebcc body=132 status=ok
// SIG undefined FUN_14980ebcc(void)

void FUN_14980ebcc(longlong param_1,int param_2)

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



// FUNCTION 14980ec52 FUN_14980ec52 body=31 status=ok
// SIG undefined FUN_14980ec52(void)

undefined8 FUN_14980ec52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980ec8e FUN_14980ec8e body=93 status=ok
// SIG undefined FUN_14980ec8e(void)

void FUN_14980ec8e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be902f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980ecec FUN_14980ecec body=123 status=ok
// SIG undefined FUN_14980ecec(void)

void FUN_14980ecec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14be902f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980ed68 FUN_14980ed68 body=21 status=ok
// SIG undefined FUN_14980ed68(void)

undefined8 FUN_14980ed68(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980ed7e FUN_14980ed7e body=76 status=ok
// SIG undefined FUN_14980ed7e(void)

void FUN_14980ed7e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145bb14ec();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14980ed92;
    }
  }
  lVar2 = 0;
LAB_14980ed92:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14980edca FUN_14980edca body=455 status=ok
// SIG undefined FUN_14980edca(void)

void FUN_14980edca(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x28);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x24 + lVar10 * 0x28) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14980ef92 FUN_14980ef92 body=31 status=ok
// SIG undefined FUN_14980ef92(void)

undefined8 FUN_14980ef92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980efb8 FUN_14980efb8 body=29 status=ok
// SIG undefined FUN_14980efb8(void)

bool FUN_14980efb8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14980efd6 FUN_14980efd6 body=26 status=ok
// SIG undefined FUN_14980efd6(void)

bool FUN_14980efd6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14980eff0 FUN_14980eff0 body=93 status=ok
// SIG undefined FUN_14980eff0(void)

void FUN_14980eff0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be903a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980f04e FUN_14980f04e body=123 status=ok
// SIG undefined FUN_14980f04e(void)

void FUN_14980f04e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be903a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980f0ca FUN_14980f0ca body=130 status=ok
// SIG undefined FUN_14980f0ca(void)

bool FUN_14980f0ca(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980f14e FUN_14980f14e body=62 status=ok
// SIG undefined FUN_14980f14e(void)

void FUN_14980f14e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14980f18c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14980f18c FUN_14980f18c body=93 status=ok
// SIG undefined FUN_14980f18c(void)

ulonglong FUN_14980f18c(uint param_1,uint param_2)

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



// FUNCTION 14980f1ea FUN_14980f1ea body=96 status=ok
// SIG undefined FUN_14980f1ea(void)

undefined8 FUN_14980f1ea(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 4;
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x714)) {
    return SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  }
  *(int *)(param_1 + 0x714) = iVar5;
  uVar3 = FUN_14980f24a(param_1,*(undefined4 *)(param_1 + 0x710));
  return uVar3;
}



// FUNCTION 14980f24a FUN_14980f24a body=141 status=ok
// SIG undefined FUN_14980f24a(void)

void FUN_14980f24a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x700);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x70);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x700,0,param_3,0x70);
    memmove(*(void **)((longlong)param_1 + 0x700),param_1,(longlong)param_2 * 0x70);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x700,param_2,param_3,0x70);
  return;
}



// FUNCTION 14980f2d8 FUN_14980f2d8 body=132 status=ok
// SIG undefined FUN_14980f2d8(void)

void FUN_14980f2d8(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x710);
  if (param_2 <= (int)uVar1) {
    iVar6 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x714)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x70,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 4;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x714) = iVar6;
    FUN_14980f24a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14980f35e FUN_14980f35e body=38 status=ok
// SIG undefined FUN_14980f35e(void)

undefined8 FUN_14980f35e(undefined8 param_1,int param_2)

{
  FUN_145a27f90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980f38a FUN_14980f38a body=33 status=ok
// SIG undefined FUN_14980f38a(void)

void FUN_14980f38a(undefined8 param_1)

{
  FUN_145a28196();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 14980f48c FUN_14980f48c body=42 status=ok
// SIG undefined FUN_14980f48c(void)

void FUN_14980f48c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_2);
  return;
}



// FUNCTION 14980f4cc FUN_14980f4cc body=60 status=ok
// SIG undefined FUN_14980f4cc(void)

undefined1 FUN_14980f4cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14058acb2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 14980f530 FUN_14980f530 body=59 status=ok
// SIG undefined FUN_14980f530(void)

undefined8 FUN_14980f530(longlong *param_1)

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



// FUNCTION 14980f576 FUN_14980f576 body=53 status=ok
// SIG undefined FUN_14980f576(void)

void FUN_14980f576(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14980f650 FUN_14980f650 body=87 status=ok
// SIG undefined FUN_14980f650(void)

undefined8 FUN_14980f650(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      uVar1 = *(undefined4 *)(param_3 + -8);
      *(undefined4 *)(param_2 + -5) = *(undefined4 *)(param_3 + -5);
      *(undefined4 *)(param_2 + -8) = uVar1;
      FUN_14980f786(param_2,param_3);
      FUN_147b4c404(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14980f6d0 FUN_14980f6d0 body=59 status=ok
// SIG undefined FUN_14980f6d0(void)

undefined8 FUN_14980f6d0(longlong *param_1)

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



// FUNCTION 14980f716 FUN_14980f716 body=34 status=ok
// SIG undefined FUN_14980f716(void)

void FUN_14980f716(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1459ade56(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14980f786 FUN_14980f786 body=95 status=ok
// SIG undefined FUN_14980f786(void)

undefined8 * FUN_14980f786(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459ade9f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14980f7e6(param_1,iVar1);
      FUN_14980f859(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14980f7e6 FUN_14980f7e6 body=115 status=ok
// SIG undefined FUN_14980f7e6(void)

void FUN_14980f7e6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14980f859 FUN_14980f859 body=134 status=ok
// SIG undefined FUN_14980f859(void)

void FUN_14980f859(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14980f924 FUN_14980f924 body=81 status=ok
// SIG undefined FUN_14980f924(void)

undefined8 FUN_14980f924(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3153e(param_2,param_3);
    FUN_14980fa54(param_2 + 0x10,param_3 + 0x10);
    *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_3 + 0x22);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14980f99e FUN_14980f99e body=59 status=ok
// SIG undefined FUN_14980f99e(void)

undefined8 FUN_14980f99e(longlong *param_1)

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



// FUNCTION 14980f9e4 FUN_14980f9e4 body=34 status=ok
// SIG undefined FUN_14980f9e4(void)

void FUN_14980f9e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1459adf4c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14980fa54 FUN_14980fa54 body=95 status=ok
// SIG undefined FUN_14980fa54(void)

undefined8 * FUN_14980fa54(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459adf91(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14980fab4(param_1,iVar1);
      FUN_14980fb27(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14980fab4 FUN_14980fab4 body=115 status=ok
// SIG undefined FUN_14980fab4(void)

void FUN_14980fab4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14980fb27 FUN_14980fb27 body=134 status=ok
// SIG undefined FUN_14980fb27(void)

void FUN_14980fb27(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14980fc0a FUN_14980fc0a body=100 status=ok
// SIG undefined FUN_14980fc0a(void)

undefined8 FUN_14980fc0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x25) = *(undefined4 *)(param_3 + -0x25);
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      FUN_14980f786(param_2 + -0x20,param_3 + -0x20);
      FUN_147b4c404(param_2 + -0x10,param_3 + -0x10);
      FUN_14980fd4c(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14980fc96 FUN_14980fc96 body=59 status=ok
// SIG undefined FUN_14980fc96(void)

undefined8 FUN_14980fc96(longlong *param_1)

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



// FUNCTION 14980fcdc FUN_14980fcdc body=34 status=ok
// SIG undefined FUN_14980fcdc(void)

void FUN_14980fcdc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1459adef6(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14980fd4c FUN_14980fd4c body=95 status=ok
// SIG undefined FUN_14980fd4c(void)

undefined8 * FUN_14980fd4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459adf25(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14980fdac(param_1,iVar1);
      FUN_14980fe1f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14980fdac FUN_14980fdac body=115 status=ok
// SIG undefined FUN_14980fdac(void)

void FUN_14980fdac(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14980fe1f FUN_14980fe1f body=52 status=ok
// SIG undefined FUN_14980fe1f(void)

void FUN_14980fe1f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14980fe54(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 14980fe54 FUN_14980fe54 body=164 status=ok
// SIG undefined FUN_14980fe54(void)

undefined8 * FUN_14980fe54(undefined8 *param_1,undefined8 *param_2)

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
    FUN_147f315ec(param_1,iVar1,0);
    FUN_147f3165f(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14980fab4(param_1 + 2,iVar1,0);
    FUN_14980fb27(param_1[2],uVar2,iVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 14980ff52 FUN_14980ff52 body=108 status=ok
// SIG undefined FUN_14980ff52(void)

undefined8 FUN_14980ff52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x25);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x25) = uVar1;
      FUN_14980f786(param_2 + -0x20,param_3 + -0x20);
      FUN_147b4c404(param_2 + -0x10,param_3 + -0x10);
      FUN_14981009c(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14980ffe6 FUN_14980ffe6 body=59 status=ok
// SIG undefined FUN_14980ffe6(void)

undefined8 FUN_14980ffe6(longlong *param_1)

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



// FUNCTION 14981002c FUN_14981002c body=34 status=ok
// SIG undefined FUN_14981002c(void)

void FUN_14981002c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1459ade22(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14981009c FUN_14981009c body=95 status=ok
// SIG undefined FUN_14981009c(void)

undefined8 * FUN_14981009c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459aded0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1498100fc(param_1,iVar1);
      FUN_14981016b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1498100fc FUN_1498100fc body=111 status=ok
// SIG undefined FUN_1498100fc(void)

void FUN_1498100fc(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14981016b FUN_14981016b body=52 status=ok
// SIG undefined FUN_14981016b(void)

void FUN_14981016b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1498101a0(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1498101a0 FUN_1498101a0 body=95 status=ok
// SIG undefined FUN_1498101a0(void)

longlong FUN_1498101a0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_149810200();
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_14980fdac((undefined8 *)(param_1 + 0x28),iVar1,0);
    FUN_14980fe1f(*(undefined8 *)(param_1 + 0x28),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149810200 FUN_149810200 body=166 status=ok
// SIG undefined FUN_149810200(void)

undefined4 * FUN_149810200(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)((longlong)param_2 + 3);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar2 = param_2[4];
  uVar3 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar2;
  if (iVar2 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_14980f7e6(param_1 + 2,iVar2,0);
    FUN_14980f859(*(undefined8 *)(param_1 + 2),uVar3,iVar2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar2 = param_2[8];
  uVar3 = *(undefined8 *)(param_2 + 6);
  param_1[8] = iVar2;
  if (iVar2 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_147b4c4c0(param_1 + 6,iVar2,0);
    FUN_147b4c533(*(undefined8 *)(param_1 + 6),uVar3,iVar2);
  }
  return param_1;
}



// FUNCTION 1498102a8 FUN_1498102a8 body=31 status=ok
// SIG undefined FUN_1498102a8(void)

undefined8 FUN_1498102a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498102e4 FUN_1498102e4 body=93 status=ok
// SIG undefined FUN_1498102e4(void)

void FUN_1498102e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be92d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149810342 FUN_149810342 body=126 status=ok
// SIG undefined FUN_149810342(void)

void FUN_149810342(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be92d30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498103b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498103c0 FUN_1498103c0 body=21 status=ok
// SIG undefined FUN_1498103c0(void)

undefined8 FUN_1498103c0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498103d6 FUN_1498103d6 body=25 status=ok
// SIG undefined FUN_1498103d6(void)

undefined8 FUN_1498103d6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  (*(code *)*param_2)(param_1,*param_3);
  return param_1;
}



// FUNCTION 14981040f ffxAssertSetPrintingCallback body=8 status=ok
// SIG undefined ffxAssertSetPrintingCallback(void)

void ffxAssertSetPrintingCallback(undefined8 param_1)

{
                    /* 0x981040f  574  ffxAssertSetPrintingCallback */
  DAT_14cc28960 = param_1;
  return;
}



// FUNCTION 149810417 ffxAssertReport body=186 status=ok
// SIG undefined ffxAssertReport(void)

undefined8 ffxAssertReport(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  LPCSTR lpOutputString;
  
                    /* 0x9810417  573  ffxAssertReport */
  if (param_1 != 0) {
    lVar2 = param_4;
    if (param_4 == 0) {
      lVar2 = param_3;
    }
    iVar1 = FUN_14626ea25(0,0,"%s(%d): ASSERTION FAILED. %s\n",param_1,param_2,lVar2);
    lpOutputString = malloc((longlong)(iVar1 + 1));
    if (lpOutputString != (LPCSTR)0x0) {
      if (param_4 == 0) {
        param_4 = param_3;
      }
      FUN_1498104d1(lpOutputString,(longlong)(iVar1 + 1),"%s(%d): ASSERTION FAILED. %s\n",param_1,
                    param_2,param_4);
      if (DAT_14cc28960 == (code *)0x0) {
        OutputDebugStringA(lpOutputString);
      }
      else {
        (*DAT_14cc28960)();
      }
      free(lpOutputString);
    }
  }
  return 1;
}



// FUNCTION 1498104d1 FUN_1498104d1 body=130 status=ok
// SIG undefined FUN_1498104d1(void)

int FUN_1498104d1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar3 = (undefined8 *)FUN_144737586();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = __stdio_common_vsprintf_s(*puVar3,param_1,param_2,param_3);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149810554 ffxBreadcrumbsAppendList body=19 status=ok
// SIG undefined ffxBreadcrumbsAppendList(void)

void ffxBreadcrumbsAppendList
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5)

{
                    /* 0x9810554  575  ffxBreadcrumbsAppendList */
                    /* WARNING: Could not recover jumptable at 0x000149810564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 8))(param_1,(param_2 + param_4) * param_3);
  return;
}



// FUNCTION 149810567 ffxBreadcrumbsPopList body=38 status=ok
// SIG undefined ffxBreadcrumbsPopList(void)

undefined8
ffxBreadcrumbsPopList(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
                    /* 0x9810567  576  ffxBreadcrumbsPopList */
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014981057f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_4 + 8))(param_1,param_3 * param_2);
    return uVar1;
  }
  (**(code **)(param_4 + 0x10))();
  return 0;
}



// FUNCTION 14981058d ffxSafeReleasePipeline body=10 status=ok
// SIG undefined ffxSafeReleasePipeline(void)

void ffxSafeReleasePipeline(longlong param_1)

{
                    /* 0x981058d  615  ffxSafeReleasePipeline */
                    /* WARNING: Could not recover jumptable at 0x000149810594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))();
  return;
}



// FUNCTION 149810597 ffxSafeReleaseCopyResource body=9 status=ok
// SIG undefined ffxSafeReleaseCopyResource(void)

void ffxSafeReleaseCopyResource(longlong param_1,int param_2)

{
                    /* 0x9810597  614  ffxSafeReleaseCopyResource */
                    /* WARNING: Could not recover jumptable at 0x00014981059d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(param_1,param_2 + 1);
  return;
}



// FUNCTION 1498105a0 ffxSafeReleaseResource body=7 status=ok
// SIG undefined ffxSafeReleaseResource(void)

void ffxSafeReleaseResource(longlong param_1)

{
                    /* 0x98105a0  616  ffxSafeReleaseResource */
                    /* WARNING: Could not recover jumptable at 0x0001498105a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))();
  return;
}



// FUNCTION 1498105a7 ffxSetPrintMessageCallback body=8 status=ok
// SIG undefined ffxSetPrintMessageCallback(void)

void ffxSetPrintMessageCallback(undefined8 param_1)

{
                    /* 0x98105a7  617  ffxSetPrintMessageCallback */
  DAT_14cc28968 = param_1;
  return;
}



// FUNCTION 1498105af ffxPrintMessage body=148 status=ok
// SIG undefined ffxPrintMessage(void)

void ffxPrintMessage(undefined8 param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_428 [32];
  WCHAR local_408 [512];
  ulonglong local_8;
  
                    /* 0x98105af  612  ffxPrintMessage */
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if (DAT_14cc28968 != (code *)0x0) {
    if ((local_8 ^ (ulonglong)auStack_428) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001498105f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cc28968)(param_1,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_428);
  }
  if ((int)param_1 == 0) {
    pwVar1 = L"FSR_API_DEBUG_ERROR: %ls\n";
  }
  else {
    if ((int)param_1 != 1) goto LAB_149810629;
    pwVar1 = L"FSR_API_DEBUG_WARNING: %ls\n";
  }
  FUN_14190d354(local_408,0x200,pwVar1);
LAB_149810629:
  OutputDebugStringW(local_408);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_428);
}



// FUNCTION 14981064d FUN_14981064d body=187 status=ok
// SIG undefined FUN_14981064d(void)

undefined8 FUN_14981064d(byte param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x39) {
    uVar1 = 0;
    switch(param_1) {
    case 1:
      return 3;
    case 2:
      return 10;
    case 4:
      return 0x17;
    case 9:
    case 0x1a:
      return 0x10;
    case 10:
    case 0x13:
      uVar1 = 4;
      break;
    case 0xb:
    case 0xd:
      return 0x1c;
    case 0xf:
      return 0x12;
    case 0x11:
      return 6;
    case 0x12:
      return 0x11;
    case 0x15:
      return 0x15;
    case 0x1c:
      return 8;
    case 0x20:
      return 0x16;
    case 0x23:
      return 0x14;
    case 0x25:
      if (param_2 == '\0') {
        return 10;
      }
      return 0xc;
    case 0x28:
      return 0x1a;
    case 0x30:
      return 2;
    case 0x31:
      return 0x13;
    }
  }
  else if (param_1 < 0x3f) {
    if (param_1 == 0x39) {
      return 7;
    }
    uVar1 = 0;
    if (param_1 == 0x3c) {
      return 9;
    }
  }
  else {
    if (param_1 == 0x3f) {
      return 0x18;
    }
    if (param_1 == 0x47) {
      return 0x19;
    }
  }
  return uVar1;
}



// FUNCTION 149810708 FUN_149810708 body=118 status=ok
// SIG undefined FUN_149810708(void)

undefined8 FUN_149810708(int param_1)

{
  if (param_1 < 0x10) {
    switch(param_1) {
    case 1:
    case 0xc:
      return 0x70;
    case 2:
      return 0xc00;
    case 4:
      return 0x10;
    case 8:
      return 0x60;
    }
  }
  else if (param_1 < 0x20) {
    if (param_1 == 0x10) {
      return 0x80;
    }
    if (param_1 == 0x14) {
      return 0x10095;
    }
  }
  else {
    if (param_1 == 0x20) {
      return 0x2000;
    }
    if (param_1 == 0x40) {
      return 4;
    }
    if (param_1 == 0x80) {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 149810782 FUN_149810782 body=36 status=ok
// SIG undefined FUN_149810782(void)

undefined8 FUN_149810782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498107c2 FUN_1498107c2 body=93 status=ok
// SIG undefined FUN_1498107c2(void)

void FUN_1498107c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be92ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149810820 FUN_149810820 body=123 status=ok
// SIG undefined FUN_149810820(void)

void FUN_149810820(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14be92ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14981089c FUN_14981089c body=21 status=ok
// SIG undefined FUN_14981089c(void)

undefined8 FUN_14981089c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498108b1 ffxFsr3UpscalerGetSharedResourceDescriptions body=278 status=ok
// SIG undefined ffxFsr3UpscalerGetSharedResourceDescriptions(void)

undefined8 ffxFsr3UpscalerGetSharedResourceDescriptions(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* 0x98108b1  598  ffxFsr3UpscalerGetSharedResourceDescriptions */
  uVar2 = 0x80000000;
  if (param_2 != (undefined8 *)0x0 && param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 4);
    param_2[10] = 0x200000000;
    *(undefined4 *)(param_2 + 0xb) = 0x1c;
    *(undefined8 *)((longlong)param_2 + 0x5c) = uVar2;
    *(undefined1 **)((longlong)param_2 + 100) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0x6c) = 0x800300000000;
    *(undefined4 *)((longlong)param_2 + 0x74) = 2;
    param_2[0xf] = L"FSR3UPSCALER_DilatedDepth";
    *(undefined4 *)(param_2 + 0x10) = 10;
    *(undefined4 *)(param_2 + 0x11) = 1;
    *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x94) = 0;
    uVar2 = 0;
    *(undefined4 *)((longlong)param_2 + 0x9c) = 0;
    uVar1 = *(undefined8 *)(param_1 + 4);
    param_2[0x14] = 0x200000000;
    *(undefined4 *)(param_2 + 0x15) = 0x12;
    *(undefined8 *)((longlong)param_2 + 0xac) = uVar1;
    *(undefined1 **)((longlong)param_2 + 0xb4) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0xbc) = 0x800300000000;
    *(undefined4 *)((longlong)param_2 + 0xc4) = 2;
    param_2[0x19] = L"FSR3UPSCALER_DilatedVelocity";
    *(undefined4 *)(param_2 + 0x1a) = 9;
    *(undefined4 *)(param_2 + 0x1b) = 1;
    *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
    *(undefined4 *)((longlong)param_2 + 0xec) = 0;
    uVar1 = *(undefined8 *)(param_1 + 4);
    *param_2 = 0x200000000;
    *(undefined4 *)(param_2 + 1) = 8;
    *(undefined8 *)((longlong)param_2 + 0xc) = uVar1;
    *(undefined1 **)((longlong)param_2 + 0x14) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0x200000000;
    *(undefined4 *)((longlong)param_2 + 0x24) = 2;
    param_2[5] = L"FSR3UPSCALER_ReconstructedPrevNearestDepth";
    *(undefined4 *)(param_2 + 6) = 8;
    *(undefined4 *)(param_2 + 7) = 1;
    *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x44) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  }
  return uVar2;
}



// FUNCTION 1498109c7 ffxFsr3UpscalerContextCreate body=4310 status=ok
// SIG undefined ffxFsr3UpscalerContextCreate(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ffxFsr3UpscalerContextCreate(uint *param_1,void *param_2)

{
  uint *puVar1;
  uint *_Dst;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar13;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auStack_8c8 [32];
  uint *local_8a8;
  uint local_8a0;
  uint *local_898;
  uint *local_888;
  uint *local_880;
  uint *local_878;
  uint *local_870;
  uint *local_868;
  uint *local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  int local_848;
  undefined8 local_844;
  undefined4 local_838 [2];
  wchar_t *local_830 [2];
  undefined4 local_820;
  uint local_81c;
  uint local_818;
  undefined8 local_814;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined4 local_7f0;
  wchar_t *local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  uint local_7d4;
  uint local_7d0;
  undefined8 local_7cc;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined4 local_7a8;
  wchar_t *local_7a0;
  undefined8 local_798;
  undefined4 local_790;
  uint local_78c;
  uint local_788;
  undefined8 local_784;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined4 local_760;
  wchar_t *local_758;
  undefined8 local_750;
  undefined4 local_748;
  uint local_744;
  uint local_740;
  undefined8 local_73c;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined4 local_718;
  wchar_t *local_710;
  undefined8 local_708;
  undefined4 local_700;
  uint local_6fc;
  uint local_6f8;
  undefined1 *local_6f4;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  wchar_t *local_6c8;
  undefined8 local_6c0;
  undefined4 local_6b8;
  uint local_6b4;
  uint local_6b0;
  undefined1 *local_6ac;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined4 local_688;
  wchar_t *local_680;
  undefined1 *local_678;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined1 *local_664;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined4 local_640;
  wchar_t *local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined8 local_61c;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined4 local_5f8;
  wchar_t *local_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined8 local_5d4;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined4 local_5b0;
  wchar_t *local_5a8;
  undefined1 *local_5a0;
  undefined4 local_598;
  uint local_594;
  uint local_590;
  undefined8 local_58c;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined4 local_568;
  wchar_t *local_560;
  undefined1 *local_558;
  undefined4 local_550;
  uint local_54c;
  uint local_548;
  undefined1 *local_544;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined4 local_520;
  wchar_t *local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined8 local_4fc;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  wchar_t *local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined8 local_4b4;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 local_490;
  wchar_t *local_488;
  undefined1 *local_480;
  undefined1 *puStack_478;
  undefined1 *local_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined4 local_448;
  wchar_t *local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined1 *local_424;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 local_400;
  wchar_t *local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined1 *local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined2 *local_3c0;
  undefined4 local_3b8;
  wchar_t *local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 *local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_370;
  wchar_t *local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 *local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 *local_330;
  undefined4 local_328;
  wchar_t *local_320;
  undefined1 *local_318;
  undefined1 *puStack_310;
  undefined1 *local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined2 local_2d8 [128];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 *puStack_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  undefined4 local_19c;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  int local_180;
  int local_17c;
  undefined8 local_178;
  uint local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_fc;
  ulonglong local_f0;
  
                    /* 0x98109c7  589  ffxFsr3UpscalerContextCreate */
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_8c8;
  memset(param_1,0,0x80000);
  uVar4 = 0x80000000;
  if ((((param_2 != (void *)0x0 && param_1 != (uint *)0x0) &&
       (uVar4 = 0x80000008, *(longlong *)((longlong)param_2 + 0x20) != 0)) &&
      (*(longlong *)((longlong)param_2 + 0x38) != 0)) &&
     (((*(longlong *)((longlong)param_2 + 0x30) != 0 &&
       (*(longlong *)((longlong)param_2 + 0x40) != 0)) &&
      ((*(longlong *)((longlong)param_2 + 0xf0) == 0 ||
       (*(longlong *)((longlong)param_2 + 0xf8) != 0)))))) {
    memset(param_1,0,0x6b0d8);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x100);
    memcpy(param_1,param_2,0x108);
    puVar1 = param_1 + 8;
    iVar3 = (**(code **)(param_1 + 8))(puVar1);
    uVar4 = 0x8000000f;
    if (iVar3 == 0x401004) {
      uVar4 = (**(code **)(param_1 + 0xc))(puVar1,0x11,0,param_1 + 0x42);
      if ((int)uVar4 == 0) {
        uVar4 = (**(code **)(param_1 + 0xe))(puVar1);
        if ((int)uVar4 == 0) {
          *(undefined1 *)(param_1 + 0x1ac30) = 1;
          param_1[0x1ac31] = 0;
          param_1[0x4d] = *(uint *)((longlong)param_2 + 0xc);
          param_1[0x4e] = *(uint *)((longlong)param_2 + 0x10);
          *(undefined1 **)(param_1 + 99) = &DAT_3f8000003f800000;
          param_1[0x65] = 0x3f800000;
          param_1[0x66] = 0x3eaaaaab;
          param_1[0x67] = 0xbeaaaaab;
          lVar8 = 0;
          memset(local_2d8,0,0x100);
          auVar2 = _DAT_14a241e40;
          do {
            fVar16 = ((float)(int)lVar8 + (float)(int)lVar8) / 127.0;
            fVar10 = 1.0;
            uVar13 = 0;
            uVar5 = 0;
            uVar6 = 0;
            if (1e-06 <= fVar16) {
              fVar10 = sinf(fVar16 * 3.1415927);
              fVar11 = sinf(fVar16 * 1.5707964);
              fVar10 = (fVar11 / (fVar16 * 1.5707964)) * (fVar10 / (fVar16 * 3.1415927));
              uVar13 = extraout_XMM0_Db;
              uVar5 = extraout_XMM0_Dc;
              uVar6 = extraout_XMM0_Dd;
            }
            auVar14._0_8_ = CONCAT44(uVar13,fVar10 * 32767.0) & 0x8000000080000000;
            auVar14._8_4_ = uVar5 & 0x80000000;
            auVar14._12_4_ = uVar6 & 0x80000000;
            auVar15._4_12_ = SUB1612(auVar14 | auVar2,4);
            auVar15._0_4_ = SUB164(auVar14 | auVar2,0) + fVar10 * 32767.0;
            auVar12._0_12_ = ZEXT812(0);
            auVar12._12_4_ = 0;
            auVar12 = roundss(auVar12,auVar15,0xb);
            local_2d8[lVar8] = (short)(int)auVar12._0_4_;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x80);
          local_2e0 = 0;
          local_81c = *(uint *)((longlong)param_2 + 4);
          local_818 = *(uint *)((longlong)param_2 + 8);
          local_838[0] = 0x14;
          local_830[0] = L"FSR3UPSCALER_Accumulation1";
          local_830[1] = (wchar_t *)0x300000002;
          local_820 = 0x19;
          local_814 = 1;
          uStack_800 = 0;
          local_7f8 = 0;
          local_808 = 1;
          local_7f0 = 0x15;
          local_7e8 = L"FSR3UPSCALER_Accumulation2";
          local_7e0 = 0x300000002;
          local_7d8 = 0x19;
          local_7cc = 1;
          local_7b0 = 0;
          uStack_7b8 = 0;
          local_7c0 = 1;
          local_7a8 = 0x28;
          local_7a0 = L"FSR3UPSCALER_Luma1";
          local_798 = 0x300000002;
          local_790 = 0x15;
          local_784 = 1;
          uStack_770 = 0;
          local_768 = 0;
          local_778 = 1;
          local_760 = 0x29;
          local_758 = L"FSR3UPSCALER_Luma2";
          local_750 = 0x300000002;
          local_748 = 0x15;
          local_73c = 1;
          local_720 = 0;
          uStack_728 = 0;
          local_730 = 1;
          local_718 = 0x31;
          local_710 = L"FSR3UPSCALER_IntermediateFp16x1";
          local_708 = 0x800200000002;
          local_700 = 0x15;
          local_6b4 = local_81c >> 1;
          local_6b0 = local_818 >> 1;
          local_6f4 = &DAT_100000001;
          local_6d8 = 0;
          uStack_6e0 = 0;
          local_6e8 = 1;
          local_6d0 = 0x2a;
          local_6c8 = L"FSR3UPSCALER_ShadingChange";
          local_6c0 = 0x800200000002;
          local_6b8 = 0x19;
          local_6ac = &DAT_100000001;
          local_690 = 0;
          uStack_698 = 0;
          local_6a0 = 1;
          local_688 = 0xd;
          local_680 = L"FSR3UPSCALER_NewLocks";
          local_678 = &DAT_200000002;
          local_670 = 0x19;
          local_66c = *(undefined4 *)((longlong)param_2 + 0xc);
          local_668 = *(undefined4 *)((longlong)param_2 + 0x10);
          local_664 = &DAT_100000001;
          uStack_650 = 0;
          local_648 = 0;
          local_658 = 1;
          local_640 = 0x16;
          local_638 = L"FSR3UPSCALER_InternalUpscaled1";
          local_630 = 0x800300000002;
          local_628 = 4;
          local_61c = 1;
          uStack_608 = 0;
          local_600 = 0;
          local_610 = 1;
          local_5f8 = 0x17;
          local_5f0 = L"FSR3UPSCALER_InternalUpscaled2";
          local_5e8 = 0x800300000002;
          local_5e0 = 4;
          local_5d4 = 1;
          uStack_5c0 = 0;
          local_5b8 = 0;
          local_5c8 = 1;
          local_5b0 = 0x1b;
          local_5a8 = L"FSR3UPSCALER_SpdMips";
          local_5a0 = &DAT_200000002;
          local_598 = 0x12;
          local_58c = 0x100000000;
          uStack_578 = 0;
          local_570 = 0;
          local_580 = 1;
          local_568 = 0x2c;
          local_560 = L"FSR3UPSCALER_FarthestDepthMip1";
          local_558 = &DAT_200000002;
          local_550 = 0x15;
          local_544 = &DAT_100000001;
          local_528 = 0;
          uStack_530 = 0;
          local_538 = 1;
          local_520 = 0x25;
          local_518 = L"FSR3UPSCALER_LumaHistory1";
          local_510 = 0x300000002;
          local_508 = 4;
          local_504 = *(undefined4 *)((longlong)param_2 + 4);
          local_500 = *(undefined4 *)((longlong)param_2 + 8);
          local_4fc = 1;
          uStack_4e8 = 0;
          local_4e0 = 0;
          local_4f0 = 1;
          local_4d8 = 0x26;
          local_4d0 = L"FSR3UPSCALER_LumaHistory2";
          local_4c8 = 0x300000002;
          local_4c0 = 4;
          local_4b4 = 1;
          uStack_4a0 = 0;
          local_498 = 0;
          local_4a8 = 1;
          local_490 = 0x11;
          local_488 = L"FSR3UPSCALER_SpdAtomicCounter";
          local_480 = &DAT_200000002;
          puStack_478 = &DAT_100000008;
          local_470 = &DAT_100000001;
          local_468 = 0;
          local_460 = 3;
          uStack_458 = 4;
          local_450 = 0;
          local_448 = 0x1a;
          local_440 = L"FSR3UPSCALER_DilatedReactiveMasks";
          local_438 = 0x800200000002;
          local_430 = 10;
          local_424 = &DAT_100000001;
          uStack_410 = 0;
          local_408 = 0;
          local_418 = 1;
          local_400 = 0x10;
          local_3f8 = L"FSR3UPSCALER_LanczosLutData";
          local_3f0 = 2;
          uStack_3e8 = 0x8000000018;
          local_3e0 = &DAT_100000001;
          local_3d8 = 0;
          local_3d0 = 2;
          local_3c8 = 0x100;
          local_3c0 = local_2d8;
          local_3b8 = 0x18;
          local_3b0 = L"FSR3UPSCALER_DefaultReactivityMask";
          local_3a8 = 2;
          uStack_3a0 = 0x100000019;
          local_398 = &DAT_100000001;
          local_390 = 0;
          local_388 = 3;
          uStack_380 = 1;
          local_378 = 0;
          local_370 = 0x21;
          local_368 = L"FSR3UPSCALER_DefaultExposure";
          local_360 = 2;
          uStack_358 = 0x100000006;
          local_350 = &DAT_100000001;
          local_348 = 0;
          local_340 = 2;
          local_338 = 8;
          local_330 = &local_2e0;
          local_328 = 0x22;
          local_320 = L"FSR3UPSCALER_FrameInfo";
          local_318 = &DAT_200000002;
          puStack_310 = &DAT_100000003;
          local_308 = &DAT_100000001;
          local_300 = 0;
          local_2e8 = 0;
          uStack_2f0 = 0;
          local_2f8 = 1;
          _Dst = param_1 + 0x1abb8;
          local_7d4 = local_81c;
          local_7d0 = local_818;
          local_78c = local_81c;
          local_788 = local_818;
          local_744 = local_81c;
          local_740 = local_818;
          local_6fc = local_81c;
          local_6f8 = local_818;
          local_624 = local_66c;
          local_620 = local_668;
          local_5dc = local_66c;
          local_5d8 = local_668;
          local_594 = local_6b4;
          local_590 = local_6b0;
          local_54c = local_6b4;
          local_548 = local_6b0;
          local_4bc = local_504;
          local_4b8 = local_500;
          local_42c = local_504;
          local_428 = local_500;
          memset(_Dst,0,0xf0);
          lVar8 = 0x30;
          do {
            local_180 = *(int *)((longlong)&local_858 + lVar8 + 4);
            local_1a0 = 0;
            local_19c = *(undefined4 *)((longlong)&local_858 + lVar8);
            local_198 = *(undefined8 **)((longlong)&uStack_850 + lVar8);
            local_190 = CONCAT44(1,*(undefined4 *)((longlong)&local_848 + lVar8));
            local_188 = *(undefined8 **)((longlong)&local_844 + lVar8);
            local_17c = (local_180 == 0) + 2 + (uint)(local_180 == 0);
            local_178 = *(undefined8 *)((longlong)&local_860 + lVar8);
            local_170 = *(uint *)((longlong)&local_868 + lVar8);
            local_158 = *(undefined8 *)((longlong)local_830 + lVar8 + 8);
            local_168 = *(undefined8 *)((longlong)local_838 + lVar8);
            uStack_160 = *(undefined8 *)((longlong)local_830 + lVar8);
            uVar4 = (**(code **)(param_1 + 0x12))
                              (puVar1,&local_1a0,param_1[0x42],
                               _Dst + *(uint *)((longlong)&local_868 + lVar8));
            if ((int)uVar4 != 0) goto LAB_149810a70;
            lVar8 = lVar8 + 0x48;
          } while (lVar8 != 0x588);
          memcpy(param_1 + 0x1abf4,_Dst,0xf0);
          memset(&local_1a0,0,0xb0);
          local_1a0 = *param_1;
          local_fc = 4;
          local_190 = 2;
          local_198 = &local_1c8;
          local_1b8 = &DAT_100000004;
          puStack_1b0 = &DAT_200000002;
          local_1c8 = 0x200000000;
          puStack_1c0 = &DAT_200000002;
          local_1a8 = 0x400000002;
          local_180 = 2;
          local_188 = &local_1d8;
          local_1d8 = 0x400000025;
          uStack_1d0 = 0x400000006;
          (**(code **)(param_1 + 0xe))(puVar1,(longlong)&uStack_850 + 4);
          bVar9 = (int)local_844 == 0x40 && local_848 == 0x20;
          uVar5 = *param_1;
          wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-LUMA-PYRAMID");
          local_8a0 = param_1[0x42];
          uVar6 = (uint)bVar9 + (uVar5 & 0xf) * 2 | (uint)(6 < uStack_850._4_4_ && bVar9) << 6;
          uVar5 = (uint)local_844._4_1_ << 7 | uVar6;
          uVar7 = uVar5 ^ 4;
          local_8a8 = &local_1a0;
          local_898 = param_1 + 0xd60c;
          uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,1,uVar7);
          if ((int)uVar4 == 0) {
            wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-RCAS");
            local_8a0 = param_1[0x42];
            local_8a8 = &local_1a0;
            local_898 = param_1 + 0xb272;
            uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,8,uVar6 ^ 4);
            if ((int)uVar4 == 0) {
              local_858 = param_1 + 0xb272;
              wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-GEN_REACTIVE");
              local_8a0 = param_1[0x42];
              local_8a8 = &local_1a0;
              local_898 = param_1 + 0xf9a6;
              uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,10,uVar7);
              if ((int)uVar4 == 0) {
                local_180 = 1;
                local_860 = param_1 + 0xd60c;
                wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-PREPARE-INPUTS");
                local_8a0 = param_1[0x42];
                local_8a8 = &local_1a0;
                local_898 = param_1 + 0x70;
                uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,0,uVar7);
                if ((int)uVar4 == 0) {
                  wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-PREPARE-REACTIVITY");
                  local_8a0 = param_1[0x42];
                  local_8a8 = &local_1a0;
                  local_898 = param_1 + 0x240a;
                  uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,4,uVar7);
                  if ((int)uVar4 == 0) {
                    wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-SHADING-CHANGE");
                    local_898 = param_1 + 0x47a4;
                    local_8a0 = param_1[0x42];
                    local_8a8 = &local_1a0;
                    local_868 = local_898;
                    uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,3,uVar7);
                    if ((int)uVar4 == 0) {
                      wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-ACCUMULATE");
                      local_898 = param_1 + 0x6b3e;
                      local_8a0 = param_1[0x42];
                      local_8a8 = &local_1a0;
                      local_870 = local_898;
                      uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,6,uVar7);
                      if ((int)uVar4 == 0) {
                        wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-ACCUM_SHARP");
                        local_898 = param_1 + 0x8ed8;
                        local_8a0 = param_1[0x42];
                        local_8a8 = &local_1a0;
                        local_878 = local_898;
                        uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,7,uVar5 ^ 0x24);
                        if ((int)uVar4 == 0) {
                          wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-SHADING-CHANGE-PYRAMID");
                          local_8a0 = param_1[0x42];
                          local_8a8 = &local_1a0;
                          local_898 = param_1 + 0x140da;
                          uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,2,uVar7);
                          if ((int)uVar4 == 0) {
                            wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-LUMA-INSTABILITY");
                            local_898 = param_1 + 0x16474;
                            local_8a0 = param_1[0x42];
                            local_8a8 = &local_1a0;
                            local_880 = local_898;
                            uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,5,uVar7);
                            if ((int)uVar4 == 0) {
                              wcscpy_s((wchar_t *)&local_17c,0x40,L"FSR3-DEBUG-VIEW");
                              local_898 = param_1 + 0x1880e;
                              local_8a0 = param_1[0x42];
                              local_8a8 = &local_1a0;
                              local_888 = local_898;
                              uVar4 = (**(code **)(param_1 + 0x26))(puVar1,0x11,9,uVar7);
                              if ((int)uVar4 == 0) {
                                uVar4 = FUN_1446488e5(param_1 + 0x70);
                                if ((int)uVar4 == 0) {
                                  uVar4 = FUN_1446488e5(param_1 + 0x240a);
                                  if ((int)uVar4 == 0) {
                                    uVar4 = FUN_1446488e5(local_868);
                                    if ((int)uVar4 == 0) {
                                      uVar4 = FUN_1446488e5(local_870);
                                      if ((int)uVar4 == 0) {
                                        uVar4 = FUN_1446488e5(local_860);
                                        if ((int)uVar4 == 0) {
                                          uVar4 = FUN_1446488e5(local_878);
                                          if ((int)uVar4 == 0) {
                                            uVar4 = FUN_1446488e5(local_858);
                                            if ((int)uVar4 == 0) {
                                              uVar4 = FUN_1446488e5(param_1 + 0xf9a6);
                                              if ((int)uVar4 == 0) {
                                                uVar4 = FUN_1446488e5(param_1 + 0x11d40);
                                                if ((int)uVar4 == 0) {
                                                  uVar4 = FUN_1446488e5(param_1 + 0x140da);
                                                  if ((int)uVar4 == 0) {
                                                    uVar4 = FUN_1446488e5(local_880);
                                                    if ((int)uVar4 == 0) {
                                                      uVar4 = FUN_1446488e5(local_888);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_149810a70:
  if ((local_f0 ^ (ulonglong)auStack_8c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149811a9e ffxFsr3UpscalerContextGetGpuMemoryUsage body=62 status=ok
// SIG undefined ffxFsr3UpscalerContextGetGpuMemoryUsage(void)

undefined8 ffxFsr3UpscalerContextGetGpuMemoryUsage(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
                    /* 0x9811a9e  593  ffxFsr3UpscalerContextGetGpuMemoryUsage */
  uVar1 = 0x80000000;
  if (param_2 != 0 && param_1 != 0) {
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149811ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x28))
                        (param_1 + 0x20,*(undefined4 *)(param_1 + 0x108),param_2,
                         *(code **)(param_1 + 0x28));
      return uVar1;
    }
    uVar1 = 0x8000000c;
  }
  return uVar1;
}



// FUNCTION 149811adc ffxFsr3UpscalerContextDestroy body=483 status=ok
// SIG undefined ffxFsr3UpscalerContextDestroy(void)

undefined8 ffxFsr3UpscalerContextDestroy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
                    /* 0x9811adc  590  ffxFsr3UpscalerContextDestroy */
  if (param_1 == 0) {
    uVar2 = 0x80000000;
  }
  else {
    lVar1 = param_1 + 0x20;
    ffxSafeReleasePipeline(lVar1,param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x9028,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x11e90,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x1acf8,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x23b60,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x2c9c8,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x35830,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x3e698,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x47500,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x50368,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x591d0,*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleasePipeline(lVar1,param_1 + 0x62038,*(undefined4 *)(param_1 + 0x108));
    lVar3 = 0;
    *(undefined8 *)(param_1 + 0x6af28) = 0;
    *(undefined8 *)(param_1 + 0x6af94) = 0;
    *(undefined4 *)(param_1 + 0x6af8c) = 0;
    *(undefined4 *)(param_1 + 0x6afa0) = 0;
    *(undefined8 *)(param_1 + 0x6aee4) = 0;
    *(undefined8 *)(param_1 + 0x6aeec) = 0;
    *(undefined8 *)(param_1 + 0x6aef4) = 0;
    *(undefined8 *)(param_1 + 0x6aefc) = 0;
    *(undefined8 *)(param_1 + 0x6af04) = 0;
    *(undefined8 *)(param_1 + 0x6af0c) = 0;
    ffxSafeReleaseCopyResource
              (lVar1,*(undefined4 *)(param_1 + 0x6af24),*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleaseCopyResource
              (lVar1,*(undefined4 *)(param_1 + 0x6af20),*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleaseCopyResource
              (lVar1,*(undefined4 *)(param_1 + 0x6af40),*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleaseCopyResource
              (lVar1,*(undefined4 *)(param_1 + 0x6af64),*(undefined4 *)(param_1 + 0x108));
    do {
      ffxSafeReleaseResource
                (lVar1,*(undefined4 *)(param_1 + 0x6aee0 + lVar3 * 4),
                 *(undefined4 *)(param_1 + 0x108));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x3c);
    (**(code **)(param_1 + 0x40))(lVar1,*(undefined4 *)(param_1 + 0x108));
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 149811cbf ffxFsr3UpscalerContextDispatch body=115 status=ok
// SIG undefined ffxFsr3UpscalerContextDispatch(void)

undefined8 ffxFsr3UpscalerContextDispatch(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
                    /* 0x9811cbf  591  ffxFsr3UpscalerContextDispatch */
  uVar1 = 0x80000000;
  if ((((param_2 != 0 && param_1 != 0) &&
       (uVar1 = 0x8000000b, *(uint *)(param_2 + 0x6f8) <= *(uint *)(param_1 + 4))) &&
      (*(uint *)(param_2 + 0x6fc) <= *(uint *)(param_1 + 8))) &&
     ((*(uint *)(param_2 + 0x700) <= *(uint *)(param_1 + 0xc) &&
      (*(uint *)(param_2 + 0x704) <= *(uint *)(param_1 + 0x10))))) {
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      uVar1 = 0x8000000c;
    }
    else {
      FUN_144647590();
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 149811d32 ffxFsr3UpscalerGetUpscaleRatioFromQualityMode body=23 status=ok
// SIG undefined ffxFsr3UpscalerGetUpscaleRatioFromQualityMode(void)

undefined4 ffxFsr3UpscalerGetUpscaleRatioFromQualityMode(uint param_1)

{
  undefined4 uVar1;
  
                    /* 0x9811d32  599  ffxFsr3UpscalerGetUpscaleRatioFromQualityMode */
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = *(undefined4 *)(&DAT_14be96550 + (ulonglong)param_1 * 4);
  }
  return uVar1;
}



// FUNCTION 149811d49 ffxFsr3UpscalerGetRenderResolutionFromQualityMode body=100 status=ok
// SIG undefined ffxFsr3UpscalerGetRenderResolutionFromQualityMode(void)

undefined8
ffxFsr3UpscalerGetRenderResolutionFromQualityMode
          (undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  undefined8 uVar2;
  
                    /* 0x9811d49  597  ffxFsr3UpscalerGetRenderResolutionFromQualityMode */
  uVar2 = 0x80000000;
  if (param_2 != (undefined4 *)0x0 && param_1 != (undefined4 *)0x0) {
    uVar2 = 0x80000009;
    if (param_5 < 5) {
      fVar1 = *(float *)(&DAT_14be96550 + (ulonglong)param_5 * 4);
      *param_1 = (int)(longlong)((float)param_3 / fVar1);
      *param_2 = (int)(longlong)((float)param_4 / fVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 149811dad ffxFsr3UpscalerGetJitterPhaseCount body=29 status=ok
// SIG undefined ffxFsr3UpscalerGetJitterPhaseCount(void)

int ffxFsr3UpscalerGetJitterPhaseCount(int param_1,int param_2)

{
                    /* 0x9811dad  596  ffxFsr3UpscalerGetJitterPhaseCount */
  return (int)(((float)param_2 / (float)param_1) * ((float)param_2 / (float)param_1) * 8.0);
}



// FUNCTION 149811dca ffxFsr3UpscalerGetJitterOffset body=258 status=ok
// SIG undefined ffxFsr3UpscalerGetJitterOffset(void)

undefined8 ffxFsr3UpscalerGetJitterOffset(float *param_1,float *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
                    /* 0x9811dca  595  ffxFsr3UpscalerGetJitterOffset */
  uVar1 = 0x80000000;
  if (param_2 != (float *)0x0 && param_1 != (float *)0x0) {
    if (param_4 < 1) {
      return 0x8000000a;
    }
    if (param_3 % param_4 < 0) {
      fVar4 = -0.5;
      fVar5 = fVar4;
    }
    else {
      uVar3 = (ulonglong)(param_3 % param_4 + 1);
      fVar5 = 1.0;
      fVar4 = 0.0;
      uVar2 = uVar3;
      do {
        fVar5 = fVar5 * 0.5;
        fVar4 = fVar4 + (float)((uint)uVar2 & 1) * fVar5;
        auVar7 = ZEXT416((uint)((float)(int)(uint)uVar2 * 0.5));
        auVar7 = roundss(auVar7,auVar7,9);
        uVar2 = (ulonglong)auVar7._0_4_;
      } while (0 < (int)uVar2);
      fVar6 = 1.0;
      fVar5 = 0.0;
      do {
        fVar6 = fVar6 / 3.0;
        fVar5 = fVar5 + (float)((int)uVar3 + (int)((uVar3 & 0xffffffff) / 3) * -3) * fVar6;
        auVar7 = ZEXT416((uint)((float)(int)uVar3 / 3.0));
        auVar7 = roundss(auVar7,auVar7,9);
        uVar3 = (ulonglong)auVar7._0_4_;
      } while (0 < (int)uVar3);
      fVar4 = fVar4 + -0.5;
      fVar5 = fVar5 + -0.5;
    }
    *param_1 = fVar4;
    *param_2 = fVar5;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 149811ecc ffxFsr3UpscalerResourceIsNull body=8 status=ok
// SIG undefined ffxFsr3UpscalerResourceIsNull(void)

bool ffxFsr3UpscalerResourceIsNull(longlong *param_1)

{
                    /* 0x9811ecc  600  ffxFsr3UpscalerResourceIsNull */
  return *param_1 == 0;
}



// FUNCTION 149811ed4 ffxFsr3UpscalerContextGenerateReactiveMask body=661 status=ok
// SIG undefined ffxFsr3UpscalerContextGenerateReactiveMask(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ffxFsr3UpscalerContextGenerateReactiveMask(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_13468 [40];
  undefined4 uStack_13440;
  undefined4 uStack_1343c;
  undefined4 uStack_13438;
  undefined4 uStack_13434;
  undefined4 auStack_13430 [34];
  undefined1 auStack_133a8 [39344];
  undefined1 local_99f8 [36456];
  uint local_b90;
  uint local_b8c;
  undefined4 local_b88 [3];
  undefined4 auStack_b7c [321];
  undefined4 local_678;
  undefined8 local_78 [6];
  ulonglong local_48;
  
                    /* 0x9811ed4  592  ffxFsr3UpscalerContextGenerateReactiveMask */
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_13468;
  uVar9 = 0x80000000;
  if ((param_2 != (longlong *)0x0 && param_1 != 0) && (lVar5 = *param_2, lVar5 != 0)) {
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      uVar9 = 0x8000000c;
    }
    else {
      lVar10 = param_2[0x43];
      iVar3 = *(int *)((longlong)param_2 + 0x21c);
      memset(local_b88,0,0xb40);
      lVar1 = param_1 + 0x20;
      (**(code **)(param_1 + 0x50))
                (lVar1,param_2 + 1,*(undefined4 *)(param_1 + 0x108),param_1 + 0x6aee4);
      (**(code **)(param_1 + 0x50))
                (lVar1,param_2 + 0x17,*(undefined4 *)(param_1 + 0x108),param_1 + 0x6aee8);
      (**(code **)(param_1 + 0x50))
                (lVar1,param_2 + 0x2d,*(undefined4 *)(param_1 + 0x108),param_1 + 0x6b05c);
      local_678 = *(undefined4 *)(param_1 + 0x6b05c);
      local_b88[0] = 1;
      local_b90 = (int)lVar10 + 7U >> 3;
      local_b8c = iVar3 + 7U >> 3;
      memcpy(local_99f8,(void *)(param_1 + 0x3e698),0x8e68);
      uVar4 = *(uint *)(param_1 + 0x3e6bc);
      if ((ulonglong)uVar4 != 0) {
        puVar6 = (uint *)(param_1 + 0x409e4);
        uVar8 = 0;
        do {
          auStack_b7c[uVar8] = *(undefined4 *)(param_1 + 0x6aee0 + (ulonglong)*puVar6 * 4);
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 0x23;
        } while (uVar4 != uVar8);
      }
      uStack_13440 = (undefined4)param_2[0x44];
      uStack_1343c = *(undefined4 *)((longlong)param_2 + 0x224);
      uStack_13438 = (undefined4)param_2[0x45];
      uStack_13434 = *(undefined4 *)((longlong)param_2 + 0x22c);
      (**(code **)(param_1 + 0x90))(lVar1,&uStack_13440,0x10,param_1 + 0x6aed0);
      uVar4 = *(uint *)(param_1 + 0x3e6d8);
      if ((ulonglong)uVar4 != 0) {
        puVar7 = local_78;
        lVar10 = 0;
        do {
          puVar2 = (undefined8 *)
                   (param_1 + 0x6aea0 + (ulonglong)*(uint *)(param_1 + 0x472e4 + lVar10) * 0x10);
          uVar9 = puVar2[1];
          *puVar7 = *puVar2;
          puVar7[1] = uVar9;
          lVar10 = lVar10 + 0x8c;
          puVar7 = puVar7 + 2;
        } while ((ulonglong)uVar4 * 0x8c - lVar10 != 0);
      }
      uVar9 = 0;
      memset(auStack_13430,0,0x88);
      auStack_13430[0] = 2;
      memcpy(auStack_133a8,local_99f8,0x99b0);
      (**(code **)(param_1 + 0xa8))(lVar1,auStack_13430);
      (**(code **)(param_1 + 0xb0))(lVar1,lVar5,*(undefined4 *)(param_1 + 0x108));
      (**(code **)(param_1 + 0x60))(lVar1,lVar5,*(undefined4 *)(param_1 + 0x108));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_13468) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981216a ffxFsr3UpscalerGetEffectVersion body=6 status=ok
// SIG undefined ffxFsr3UpscalerGetEffectVersion(void)

undefined8 ffxFsr3UpscalerGetEffectVersion(void)

{
                    /* 0x981216a  594  ffxFsr3UpscalerGetEffectVersion */
  return 0xc01004;
}



// FUNCTION 149812170 ffxFsr3UpscalerSetConstant body=264 status=ok
// SIG undefined ffxFsr3UpscalerSetConstant(void)

undefined8 ffxFsr3UpscalerSetConstant(longlong param_1,undefined4 param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
                    /* 0x9812170  601  ffxFsr3UpscalerSetConstant */
  if (param_1 != 0) {
    switch(param_2) {
    case 0:
      fVar2 = 1.0;
      if (param_3 != (float *)0x0) {
        fVar2 = *param_3;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = 1.0;
      if (fVar3 <= 1.0) {
        fVar2 = fVar3;
      }
      lVar1 = 0x18c;
      break;
    case 1:
      if (param_3 == (float *)0x0) {
        fVar3 = 1.0;
      }
      else {
        fVar3 = *param_3;
      }
      fVar2 = 0.0;
      if (0.0 <= fVar3) {
        fVar2 = fVar3;
      }
      lVar1 = 400;
      break;
    case 2:
      if (param_3 == (float *)0x0) {
        fVar3 = 1.0;
      }
      else {
        fVar3 = *param_3;
      }
      fVar2 = 0.0;
      if (0.0 <= fVar3) {
        fVar2 = fVar3;
      }
      lVar1 = 0x194;
      break;
    case 3:
      if (param_3 == (float *)0x0) {
        fVar2 = 0.33333334;
      }
      else {
        fVar2 = *param_3;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = 1.0;
      if (fVar3 <= 1.0) {
        fVar2 = fVar3;
      }
      lVar1 = 0x198;
      break;
    case 4:
      if (param_3 == (float *)0x0) {
        fVar2 = -0.33333334;
      }
      else {
        fVar2 = *param_3;
      }
      fVar3 = -1.0;
      if (-1.0 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = 1.0;
      if (fVar3 <= 1.0) {
        fVar2 = fVar3;
      }
      lVar1 = 0x19c;
      break;
    default:
      return 0x80000009;
    }
    *(float *)(param_1 + lVar1) = fVar2;
    return 0;
  }
  return 0x80000000;
}



// FUNCTION 149812278 ffxFsr3UpscalerSetGlobalDebugMessage body=16 status=ok
// SIG undefined ffxFsr3UpscalerSetGlobalDebugMessage(void)

undefined8 ffxFsr3UpscalerSetGlobalDebugMessage(void)

{
                    /* 0x9812278  602  ffxFsr3UpscalerSetGlobalDebugMessage */
  ffxSetPrintMessageCallback();
  return 0;
}



// FUNCTION 14981228c FUN_14981228c body=36 status=ok
// SIG undefined FUN_14981228c(void)

undefined8 FUN_14981228c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498122cc FUN_1498122cc body=93 status=ok
// SIG undefined FUN_1498122cc(void)

void FUN_1498122cc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be964a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14981232a FUN_14981232a body=123 status=ok
// SIG undefined FUN_14981232a(void)

void FUN_14981232a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14be964a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498123a6 FUN_1498123a6 body=21 status=ok
// SIG undefined FUN_1498123a6(void)

undefined8 FUN_1498123a6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498123bb ffxOpticalflowContextCreate body=3846 status=ok
// SIG undefined ffxOpticalflowContextCreate(void)

int ffxOpticalflowContextCreate(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_9a8 [32];
  ulonglong local_988;
  ulonglong local_980;
  ulonglong local_978;
  ulonglong local_970;
  uint local_968;
  int local_964;
  ulonglong local_960;
  undefined4 local_958;
  int local_954;
  undefined8 local_950;
  uint local_948;
  undefined4 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  uint local_938 [2];
  undefined8 local_930;
  uint local_928;
  uint uStack_924;
  undefined8 local_920;
  uint auStack_918 [2];
  undefined8 local_910;
  uint local_908 [2];
  undefined8 local_900;
  undefined1 *local_8f8;
  undefined4 local_8f0;
  uint local_8ec;
  uint local_8e8;
  undefined8 local_8e4;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined4 local_8c0;
  wchar_t *local_8b8;
  undefined1 *local_8b0;
  undefined4 local_8a8;
  uint local_8a4;
  uint local_8a0;
  undefined8 local_89c;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined4 local_878;
  wchar_t *local_870;
  undefined1 *local_868;
  undefined4 local_860;
  uint local_85c;
  uint local_858;
  undefined8 local_854;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined4 local_830;
  wchar_t *local_828;
  undefined1 *local_820;
  undefined4 local_818;
  uint local_814;
  uint local_810;
  undefined8 local_80c;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined4 local_7e8;
  wchar_t *local_7e0;
  undefined1 *local_7d8;
  undefined4 local_7d0;
  uint local_7cc;
  uint local_7c8;
  undefined8 local_7c4;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined4 local_7a0;
  wchar_t *local_798;
  undefined1 *local_790;
  undefined4 local_788;
  uint local_784;
  uint local_780;
  undefined8 local_77c;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined4 local_758;
  wchar_t *local_750;
  undefined1 *local_748;
  undefined4 local_740;
  uint local_73c;
  uint local_738;
  undefined8 local_734;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined4 local_710;
  wchar_t *local_708;
  undefined1 *local_700;
  undefined4 local_6f8;
  uint local_6f4;
  uint local_6f0;
  undefined8 local_6ec;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  wchar_t *local_6c0;
  undefined1 *local_6b8;
  undefined4 local_6b0;
  uint local_6ac;
  uint local_6a8;
  undefined8 local_6a4;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined4 local_680;
  wchar_t *local_678;
  undefined1 *local_670;
  undefined4 local_668;
  uint local_664;
  uint local_660;
  undefined8 local_65c;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined4 local_638;
  wchar_t *local_630;
  undefined1 *local_628;
  undefined4 local_620;
  uint local_61c;
  uint local_618;
  undefined8 local_614;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  wchar_t *local_5e8;
  undefined1 *local_5e0;
  undefined4 local_5d8;
  uint local_5d4;
  uint local_5d0;
  undefined8 local_5cc;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined4 local_5a8;
  wchar_t *local_5a0;
  undefined1 *local_598;
  undefined4 local_590;
  uint local_58c;
  uint local_588;
  undefined8 local_584;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined4 local_560;
  wchar_t *local_558;
  undefined1 *local_550;
  undefined4 local_548;
  uint local_544;
  uint local_540;
  undefined8 local_53c;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined4 local_518;
  wchar_t *local_510;
  undefined1 *local_508;
  undefined4 local_500;
  uint local_4fc;
  uint local_4f8;
  undefined8 local_4f4;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  wchar_t *local_4c8;
  undefined1 *local_4c0;
  undefined4 local_4b8;
  uint local_4b4;
  uint local_4b0;
  undefined8 local_4ac;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined4 local_488;
  wchar_t *local_480;
  undefined1 *local_478;
  undefined4 local_470;
  uint local_46c;
  uint local_468;
  undefined8 local_464;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 local_440;
  wchar_t *local_438;
  undefined1 *local_430;
  undefined4 local_428;
  uint local_424;
  uint local_420;
  undefined8 local_41c;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined4 local_3f8;
  wchar_t *local_3f0;
  undefined1 *local_3e8;
  undefined4 local_3e0;
  uint local_3dc;
  uint local_3d8;
  undefined8 local_3d4;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  wchar_t *local_3a8;
  undefined1 *local_3a0;
  undefined4 local_398;
  uint local_394;
  uint local_390;
  undefined8 local_38c;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined4 local_368;
  wchar_t *local_360;
  undefined1 *local_358;
  undefined4 local_350;
  uint local_34c;
  uint local_348;
  undefined8 local_344;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined4 local_320;
  wchar_t *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  uint local_304;
  uint local_300;
  undefined8 local_2fc;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  wchar_t *local_2d0;
  undefined1 *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  uint local_2b8;
  undefined8 local_2b4;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  wchar_t *local_288;
  undefined1 *local_280;
  undefined4 local_278;
  uint local_274;
  uint local_270;
  undefined8 local_26c;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined4 local_248;
  wchar_t *local_240;
  undefined1 *local_238;
  undefined4 local_230;
  uint local_22c;
  uint local_228;
  undefined8 local_224;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  wchar_t *local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  uint local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  wchar_t *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  uint local_198;
  undefined8 local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  uint local_154;
  uint local_150;
  undefined8 local_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  wchar_t *local_120;
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
                    /* 0x98123bb  606  ffxOpticalflowContextCreate */
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_9a8;
  iVar2 = -0x80000000;
  if (((((param_2 != (longlong *)0x0 && param_1 != (undefined8 *)0x0) &&
        (iVar2 = -0x7ffffff8, *param_2 != 0)) && (param_2[3] != 0)) &&
      ((param_2[2] != 0 && (param_2[4] != 0)))) && ((param_2[0x1a] == 0 || (param_2[0x1b] != 0)))) {
    memset(param_1,0,0x3e788);
    param_1[0x24] = param_2[0x1c];
    memcpy(param_1,param_2,0xf8);
    iVar1 = (*(code *)*param_1)(param_1);
    iVar2 = -0x7ffffff1;
    if (((iVar1 == 0x401004) &&
        (iVar2 = (*(code *)param_1[2])(param_1,0x13,0,param_1 + 0x1f), iVar2 == 0)) &&
       (iVar2 = (*(code *)param_1[3])(param_1,param_1 + 0x25), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x7cf0) = 1;
      *(undefined4 *)((longlong)param_1 + 0x3e784) = 0;
      local_8ec = *(uint *)((longlong)param_1 + 0xec);
      *(uint *)((longlong)param_1 + 0xfc) = local_8ec;
      local_8e8 = *(uint *)(param_1 + 0x1e);
      *(uint *)(param_1 + 0x20) = local_8e8;
      iVar1 = 2 - (*(uint *)(param_1 + 0x1d) & 1);
      local_908[0] = 1;
      local_900 = L"OPTICALFLOW_OpticalFlowInput1";
      local_8f8 = &DAT_200000002;
      local_8f0 = 7;
      local_8e4 = 1;
      uStack_8d0 = 0;
      local_8c8 = 0;
      local_8d8 = 1;
      local_8c0 = 2;
      local_8b8 = L"OPTICALFLOW_OpticalFlowInput1Level1";
      local_8b0 = &DAT_200000002;
      local_8a8 = 7;
      local_8a4 = local_8ec >> 1;
      local_8a0 = local_8e8 >> 1;
      local_89c = 1;
      local_880 = 0;
      uStack_888 = 0;
      local_890 = 1;
      local_878 = 3;
      local_870 = L"OPTICALFLOW_OpticalFlowInput1Level2";
      local_868 = &DAT_200000002;
      local_860 = 7;
      local_85c = local_8ec >> 2;
      local_858 = local_8e8 >> 2;
      local_854 = 1;
      uStack_840 = 0;
      local_838 = 0;
      local_848 = 1;
      local_830 = 4;
      local_828 = L"OPTICALFLOW_OpticalFlowInput1Level3";
      local_820 = &DAT_200000002;
      local_818 = 7;
      local_814 = local_8ec >> 3;
      local_810 = local_8e8 >> 3;
      local_80c = 1;
      local_7f0 = 0;
      uStack_7f8 = 0;
      local_800 = 1;
      local_7e8 = 5;
      local_7e0 = L"OPTICALFLOW_OpticalFlowInput1Level4";
      local_7d8 = &DAT_200000002;
      local_7d0 = 7;
      local_7cc = local_8ec >> 4;
      local_7c8 = local_8e8 >> 4;
      local_7c4 = 1;
      local_7a8 = 0;
      uStack_7b0 = 0;
      local_7b8 = 1;
      local_7a0 = 6;
      local_798 = L"OPTICALFLOW_OpticalFlowInput1Level5";
      local_790 = &DAT_200000002;
      local_788 = 7;
      local_784 = local_8ec >> 5;
      local_780 = local_8e8 >> 5;
      local_77c = 1;
      local_760 = 0;
      uStack_768 = 0;
      local_770 = 1;
      local_758 = 7;
      local_750 = L"OPTICALFLOW_OpticalFlowInput1Level6";
      local_748 = &DAT_200000002;
      local_740 = 7;
      local_968 = local_8ec >> 6;
      local_73c = local_968;
      local_738 = local_8e8 >> 6;
      local_734 = 1;
      local_718 = 0;
      uStack_720 = 0;
      local_728 = 1;
      local_710 = 8;
      local_708 = L"OPTICALFLOW_OpticalFlowInput2";
      local_700 = &DAT_200000002;
      local_6f8 = 7;
      local_6f4 = local_8ec;
      local_6f0 = local_8e8;
      local_6ec = 1;
      local_6d0 = 0;
      uStack_6d8 = 0;
      local_6e0 = 1;
      local_6c8 = 9;
      local_6c0 = L"OPTICALFLOW_OpticalFlowInput2Level1";
      local_6b8 = &DAT_200000002;
      local_6b0 = 7;
      local_6ac = local_8ec >> 1;
      local_6a8 = local_8e8 >> 1;
      local_6a4 = 1;
      local_688 = 0;
      uStack_690 = 0;
      local_698 = 1;
      local_680 = 10;
      local_678 = L"OPTICALFLOW_OpticalFlowInput2Level2";
      local_670 = &DAT_200000002;
      local_668 = 7;
      local_664 = local_8ec >> 2;
      local_660 = local_8e8 >> 2;
      local_65c = 1;
      local_640 = 0;
      uStack_648 = 0;
      local_650 = 1;
      local_638 = 0xb;
      local_630 = L"OPTICALFLOW_OpticalFlowInput2Level3";
      local_628 = &DAT_200000002;
      local_620 = 7;
      local_61c = local_8ec >> 3;
      local_4fc = *(int *)((longlong)param_2 + 0xec) + 7U >> 3;
      local_970 = (ulonglong)local_4fc;
      local_4f8 = (int)param_2[0x1e] + 7U >> 3;
      local_978 = (ulonglong)local_4f8;
      local_618 = local_8e8 >> 3;
      local_614 = 1;
      local_5f8 = 0;
      uStack_600 = 0;
      local_608 = 1;
      local_5f0 = 0xc;
      local_5e8 = L"OPTICALFLOW_OpticalFlowInput2Level4";
      local_4b4 = local_4fc + 1 >> 1;
      local_980 = (ulonglong)local_4b4;
      local_5e0 = &DAT_200000002;
      local_5d8 = 7;
      local_5d4 = local_8ec >> 4;
      local_4b0 = local_4f8 + 1 >> 1;
      local_5d0 = local_8e8 >> 4;
      local_5cc = 1;
      local_5b0 = 0;
      uStack_5b8 = 0;
      local_5c0 = 1;
      local_5a8 = 0xd;
      local_5a0 = L"OPTICALFLOW_OpticalFlowInput2Level5";
      local_46c = local_4b4 + 1 >> 1;
      local_988 = (ulonglong)local_46c;
      local_598 = &DAT_200000002;
      local_590 = 7;
      local_58c = local_8ec >> 5;
      local_468 = local_4b0 + 1 >> 1;
      local_588 = local_8e8 >> 5;
      local_584 = 1;
      local_568 = 0;
      uStack_570 = 0;
      local_578 = 1;
      local_560 = 0xe;
      local_558 = L"OPTICALFLOW_OpticalFlowInput2Level6";
      local_424 = local_46c + 1 >> 1;
      local_960 = (ulonglong)local_424;
      local_550 = &DAT_200000002;
      local_548 = 7;
      local_420 = local_468 + 1 >> 1;
      local_544 = local_968;
      local_540 = local_8e8 >> 6;
      local_53c = 1;
      local_520 = 0;
      uStack_528 = 0;
      local_530 = 1;
      local_518 = 0xf;
      local_510 = L"OPTICALFLOW_OpticalFlow1";
      local_508 = &DAT_200000002;
      local_500 = 0x14;
      local_4f4 = 1;
      local_4d8 = 0;
      uStack_4e0 = 0;
      local_4e8 = 1;
      local_4d0 = 0x10;
      local_4c8 = L"OPTICALFLOW_OpticalFlow1Level1";
      local_4c0 = &DAT_200000002;
      local_4b8 = 0x14;
      local_4ac = 1;
      local_490 = 0;
      uStack_498 = 0;
      local_4a0 = 1;
      local_488 = 0x11;
      local_480 = L"OPTICALFLOW_OpticalFlow1Level2";
      local_478 = &DAT_200000002;
      local_470 = 0x14;
      local_464 = 1;
      local_448 = 0;
      uStack_450 = 0;
      local_458 = 1;
      local_440 = 0x12;
      local_438 = L"OPTICALFLOW_OpticalFlow1Level3";
      local_430 = &DAT_200000002;
      local_428 = 0x14;
      local_41c = 1;
      local_400 = 0;
      uStack_408 = 0;
      local_410 = 1;
      local_3f8 = 0x13;
      local_3f0 = L"OPTICALFLOW_OpticalFlow1Level4";
      local_3dc = local_424 + 1 >> 1;
      local_3d8 = local_420 + 1 >> 1;
      local_3e8 = &DAT_200000002;
      local_3e0 = 0x14;
      local_3d4 = 1;
      local_3b8 = 0;
      uStack_3c0 = 0;
      local_3c8 = 1;
      local_3b0 = 0x14;
      local_3a8 = L"OPTICALFLOW_OpticalFlow1Level5";
      local_394 = local_3dc + 1 >> 1;
      local_390 = local_3d8 + 1 >> 1;
      local_3a0 = &DAT_200000002;
      local_398 = 0x14;
      local_38c = 1;
      local_370 = 0;
      uStack_378 = 0;
      local_380 = 1;
      local_368 = 0x15;
      local_360 = L"OPTICALFLOW_OpticalFlow1Level6";
      local_34c = local_394 + 1 >> 1;
      local_348 = local_390 + 1 >> 1;
      local_358 = &DAT_200000002;
      local_350 = 0x14;
      local_344 = 1;
      local_328 = 0;
      uStack_330 = 0;
      local_338 = 1;
      local_320 = 0x16;
      local_318 = L"OPTICALFLOW_OpticalFlow2";
      local_310 = &DAT_200000002;
      local_308 = 0x14;
      local_304 = local_4fc;
      local_300 = local_4f8;
      local_2fc = 1;
      local_2e0 = 0;
      uStack_2e8 = 0;
      local_2f0 = 1;
      local_2d8 = 0x17;
      local_2d0 = L"OPTICALFLOW_OpticalFlow2Level1";
      local_2c8 = &DAT_200000002;
      local_2c0 = 0x14;
      local_2bc = local_4b4;
      local_2b8 = local_4b0;
      local_2b4 = 1;
      local_298 = 0;
      uStack_2a0 = 0;
      local_2a8 = 1;
      local_290 = 0x18;
      local_288 = L"OPTICALFLOW_OpticalFlow2Level2";
      local_280 = &DAT_200000002;
      local_278 = 0x14;
      local_274 = local_46c;
      local_270 = local_468;
      local_26c = 1;
      local_250 = 0;
      uStack_258 = 0;
      local_260 = 1;
      local_248 = 0x19;
      local_240 = L"OPTICALFLOW_OpticalFlow2Level3";
      local_238 = &DAT_200000002;
      local_230 = 0x14;
      local_22c = local_424;
      local_228 = local_420;
      local_224 = 1;
      local_208 = 0;
      uStack_210 = 0;
      local_218 = 1;
      local_200 = 0x1a;
      local_1f8 = L"OPTICALFLOW_OpticalFlow2Level4";
      local_1f0 = &DAT_200000002;
      local_1e8 = 0x14;
      local_1e4 = local_3dc;
      local_1e0 = local_3d8;
      local_1dc = 1;
      local_1c0 = 0;
      uStack_1c8 = 0;
      local_1d0 = 1;
      local_1b8 = 0x1b;
      local_1b0 = L"OPTICALFLOW_OpticalFlow2Level5";
      local_1a8 = &DAT_200000002;
      local_1a0 = 0x14;
      local_19c = local_394;
      local_198 = local_390;
      local_194 = 1;
      local_178 = 0;
      uStack_180 = 0;
      local_188 = 1;
      local_170 = 0x1c;
      local_168 = L"OPTICALFLOW_OpticalFlow2Level6";
      local_160 = &DAT_200000002;
      local_158 = 0x14;
      local_154 = local_34c;
      local_150 = local_348;
      local_14c = 1;
      local_130 = 0;
      uStack_138 = 0;
      local_140 = 1;
      local_128 = 0x1d;
      local_120 = L"OPTICALFLOW_OpticalFlowSCDHistogram";
      local_118 = &DAT_200000002;
      uStack_110 = 0x90000000008;
      local_108 = &DAT_100000001;
      local_100 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_f8 = 1;
      local_e0 = 0x1e;
      local_d8 = L"OPTICALFLOW_OpticalFlowSCDPreviousHistogram";
      local_d0 = &DAT_200000002;
      uStack_c8 = 0x9000000001c;
      local_c0 = &DAT_100000001;
      local_b8 = 0;
      local_a0 = 0;
      uStack_a8 = 0;
      local_b0 = 1;
      local_98 = 0x1f;
      local_90 = L"OPTICALFLOW_OpticalFlowSCDTemp";
      local_88 = &DAT_200000002;
      uStack_80 = 0x300000008;
      local_78 = &DAT_100000001;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 1;
      param_1[0x7cd1] = 0;
      param_1[0x7cd2] = 0;
      param_1[0x7ccf] = 0;
      param_1[0x7cd0] = 0;
      param_1[0x7ccd] = 0;
      param_1[0x7cce] = 0;
      param_1[0x7ccb] = 0;
      param_1[0x7ccc] = 0;
      param_1[0x7cc9] = 0;
      param_1[0x7cca] = 0;
      param_1[0x7cc7] = 0;
      param_1[0x7cc8] = 0;
      param_1[0x7cc5] = 0;
      param_1[0x7cc6] = 0;
      param_1[0x7cc3] = 0;
      param_1[0x7cc4] = 0;
      lVar3 = 0x30;
      local_964 = iVar1;
      do {
        local_948 = *(uint *)((longlong)auStack_918 + lVar3);
        local_954 = 2;
        if (local_948 < 2) {
          local_954 = iVar1;
        }
        local_950 = *(undefined8 *)((longlong)&local_920 + lVar3);
        local_940 = *(undefined4 *)((longlong)auStack_918 + lVar3 + 4);
        local_938[0] = *(uint *)((longlong)&uStack_924 + lVar3);
        local_958 = 0;
        local_944 = 1;
        local_93c = 0;
        local_938[1] = 2;
        local_930 = *(undefined8 *)((longlong)&local_930 + lVar3);
        local_928 = *(uint *)((longlong)local_938 + lVar3);
        local_910 = *(undefined8 *)((longlong)&local_8f8 + lVar3);
        local_920._0_4_ = *(undefined4 *)((longlong)local_908 + lVar3);
        local_920._4_4_ = *(undefined4 *)((longlong)local_908 + lVar3 + 4);
        auStack_918[0] = *(uint *)((longlong)&local_900 + lVar3);
        auStack_918[1] = *(undefined4 *)((longlong)&local_900 + lVar3 + 4);
        iVar2 = (*(code *)param_1[5])
                          (param_1,&local_958,*(undefined4 *)(param_1 + 0x1f),
                           (longlong)param_1 + (ulonglong)local_928 * 4 + 0x3e618);
        if (iVar2 != 0) goto LAB_1498123f8;
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != 0x8e8);
      *(undefined1 *)((longlong)param_1 + 0x3e781) = 0;
      memset(param_1 + 0x7cd3,0,200);
      FUN_144649d73(param_1);
    }
  }
LAB_1498123f8:
  if ((local_48 ^ (ulonglong)auStack_9a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1498132c2 ffxOpticalflowContextGetGpuMemoryUsage body=55 status=ok
// SIG undefined ffxOpticalflowContextGetGpuMemoryUsage(void)

undefined8 ffxOpticalflowContextGetGpuMemoryUsage(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
                    /* 0x98132c2  609  ffxOpticalflowContextGetGpuMemoryUsage */
  uVar1 = 0x80000000;
  if (param_2 != 0 && param_1 != 0) {
    if (*(longlong *)(param_1 + 0x120) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498132ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 8))(param_1,*(undefined4 *)(param_1 + 0xf8),param_2);
      return uVar1;
    }
    uVar1 = 0x8000000c;
  }
  return uVar1;
}



// FUNCTION 1498132f9 ffxOpticalflowContextDestroy body=239 status=ok
// SIG undefined ffxOpticalflowContextDestroy(void)

undefined8 ffxOpticalflowContextDestroy(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
                    /* 0x98132f9  607  ffxOpticalflowContextDestroy */
  if (param_1 == 0) {
    uVar1 = 0x80000000;
  }
  else {
    (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x140,*(undefined4 *)(param_1 + 0xf8));
    (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x8fa8,*(undefined4 *)(param_1 + 0xf8));
    (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x11e10,*(undefined4 *)(param_1 + 0xf8));
    (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x1ac78,*(undefined4 *)(param_1 + 0xf8));
    (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x23ae0,*(undefined4 *)(param_1 + 0xf8));
    (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x2c948,*(undefined4 *)(param_1 + 0xf8));
    (**(code **)(param_1 + 0x80))(param_1,param_1 + 0x357b0,*(undefined4 *)(param_1 + 0xf8));
    lVar2 = 0xf986;
    do {
      ffxSafeReleaseResource
                (param_1,*(undefined4 *)(param_1 + lVar2 * 4),*(undefined4 *)(param_1 + 0xf8));
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0xf9a6);
    (**(code **)(param_1 + 0x20))(param_1,*(undefined4 *)(param_1 + 0xf8));
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1498133e8 ffxOpticalflowResourceIsNull body=8 status=ok
// SIG bool ffxOpticalflowResourceIsNull(FfxResource param_1)

/* bool __cdecl ffxOpticalflowResourceIsNull(struct FfxResource) */

bool __cdecl ffxOpticalflowResourceIsNull(longlong *param_1)

{
                    /* 0x98133e8  366  ?ffxOpticalflowResourceIsNull@@YA_NUFfxResource@@@Z */
  return *param_1 == 0;
}



// FUNCTION 1498133f0 ffxOpticalflowGetSharedResourceDescriptions body=193 status=ok
// SIG undefined ffxOpticalflowGetSharedResourceDescriptions(void)

undefined8 ffxOpticalflowGetSharedResourceDescriptions(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
                    /* 0x98133f0  611  ffxOpticalflowGetSharedResourceDescriptions */
  uVar3 = 0x80000000;
  if (param_2 != (undefined8 *)0x0 && param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xec);
    iVar2 = *(int *)(param_1 + 0xf0);
    *param_2 = 0x200000000;
    *(undefined4 *)(param_2 + 1) = 0x14;
    *(uint *)((longlong)param_2 + 0xc) = iVar1 + 7U >> 3;
    *(uint *)(param_2 + 2) = iVar2 + 7U >> 3;
    *(undefined1 **)((longlong)param_2 + 0x14) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0x200000000;
    *(undefined4 *)((longlong)param_2 + 0x24) = 2;
    param_2[5] = L"OPTICALFLOW_Result";
    uVar3 = 0;
    *(undefined4 *)(param_2 + 6) = 0;
    *(undefined4 *)(param_2 + 7) = 1;
    *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x44) = 0;
    *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x54) = 0x800000002;
    *(undefined1 **)((longlong)param_2 + 0x5c) = &DAT_100000003;
    *(undefined1 **)((longlong)param_2 + 100) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0x6c) = 0x200000000;
    *(undefined4 *)((longlong)param_2 + 0x74) = 2;
    param_2[0xf] = L"OPTICALFLOW_SCDOutput";
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x11) = 1;
    *(undefined4 *)((longlong)param_2 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  }
  return uVar3;
}



// FUNCTION 1498134b1 ffxOpticalflowContextDispatch body=118 status=ok
// SIG undefined ffxOpticalflowContextDispatch(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ffxOpticalflowContextDispatch(longlong param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_9be8 [32];
  uint uStack_9bc8;
  undefined4 uStack_9bc0;
  uint uStack_9bb4;
  longlong lStack_9bb0;
  ulonglong uStack_9ba8;
  ulonglong uStack_9ba0;
  longlong lStack_9b98;
  longlong lStack_9b90;
  undefined8 uStack_9b88;
  longlong lStack_9b80;
  longlong lStack_9b78;
  longlong lStack_9b70;
  longlong lStack_9b68;
  longlong lStack_9b60;
  undefined1 auStack_9b58 [32];
  undefined2 uStack_9b38;
  undefined2 uStack_9b36;
  undefined4 uStack_9b34;
  undefined4 uStack_9b30;
  undefined4 uStack_9b2c;
  undefined8 uStack_9b28;
  ulonglong uStack_9b20;
  undefined8 uStack_9b18;
  undefined8 uStack_9b10;
  longlong lStack_9b08;
  ulonglong uStack_9b00;
  undefined8 uStack_9af8;
  uint auStack_9af0 [14];
  uint uStack_9ab8;
  int iStack_9ab4;
  undefined8 uStack_9ab0;
  int iStack_9aa8;
  undefined8 uStack_9a98;
  undefined8 uStack_9a90;
  longlong lStack_9a88;
  ulonglong uStack_9a80;
  undefined4 uStack_9a10;
  undefined4 uStack_9a0c;
  undefined4 uStack_9a08;
  undefined4 uStack_9a04;
  undefined4 uStack_9a00;
  ulonglong uStack_60;
  undefined8 uStack_48;
  
                    /* 0x98134b1  608  ffxOpticalflowContextDispatch */
  if (((param_2 == (longlong *)0x0 || param_1 == 0) || (*param_2 == 0)) || (param_2[1] == 0)) {
    return -0x80000000;
  }
  if ((int)param_2[2] != 2) {
    return -0x7ffffff6;
  }
  if (param_2[0x17] == 0) {
    return -0x80000000;
  }
  if (param_2[0x2d] == 0) {
    return -0x80000000;
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return -0x7ffffff4;
  }
  if (*(uint *)(param_1 + 0xec) < *(uint *)(param_2 + 3)) {
    return -0x7ffffff6;
  }
  if (*(uint *)(param_1 + 0xf0) < *(uint *)((longlong)param_2 + 0x1c)) {
    return -0x7ffffff6;
  }
  uStack_48 = 0x144648caa;
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_9be8;
  (**(code **)(param_1 + 0x30))
            (param_1,param_2 + 0x17,*(undefined4 *)(param_1 + 0xf8),param_1 + 0x3e758);
  (**(code **)(param_1 + 0x30))
            (param_1,param_2 + 0x2d,*(undefined4 *)(param_1 + 0xf8),param_1 + 0x3e75c);
  (**(code **)(param_1 + 0x30))
            (param_1,param_2 + 1,*(undefined4 *)(param_1 + 0xf8),param_1 + 0x3e69c);
  lVar10 = *param_2;
  if (*(char *)(param_1 + 0x3e781) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e781) = 0;
    FUN_144649d73(param_1);
  }
  (**(code **)(param_1 + 0x50))(auStack_9b58,param_1,*(undefined4 *)(param_1 + 0x3e69c));
  lStack_9bb0 = param_1 + 0xfc;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)((longlong)param_2 + 0x21c);
  *(int *)(param_1 + 0x114) = (int)param_2[0x44];
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)((longlong)param_2 + 0x224);
  lStack_9b90 = lVar10;
  if ((char)param_2[0x43] == '\x01') {
    *(undefined1 *)(param_1 + 0x3e780) = 0;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x3e780);
    *(undefined1 *)(param_1 + 0x3e780) = 0;
    if (cVar2 == '\0') {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
      goto LAB_1446490c6;
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  pwVar1 = (wchar_t *)((longlong)&uStack_9a98 + 4);
  memset(&uStack_9a98,0,0x9a38);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow SCD Temp");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e694);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e75c);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow SCD Histogram");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e68c);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow SCD Previous histogram");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e690);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e61c);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 1");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e620);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 2");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e624);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 3");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e628);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 4");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e62c);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 5");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e630);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 6");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e634);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e638);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 1");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e63c);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 2");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e640);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 3");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e644);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 4");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e648);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 5");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e64c);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 6");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e650);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
LAB_1446490c6:
  iVar12 = (*(int *)(param_1 + 0xec) - 1U >> 6) + 1;
  iVar11 = (*(int *)(param_1 + 0xf0) - 1U >> 6) + 1;
  iStack_9ab4 = iVar11 * iVar12;
  uStack_9ab8 = 4;
  uStack_9ab0 = 0;
  lStack_9b60 = param_1 + 0x3e760;
  iStack_9aa8 = iStack_9ab4;
  (**(code **)(param_1 + 0x70))(param_1,lStack_9bb0,0x20);
  (**(code **)(param_1 + 0x70))(param_1,auStack_9af0 + 0xe,0x20,param_1 + 0x3e770);
  *(undefined4 *)(param_1 + 0x3e724) = *(undefined4 *)(param_1 + 0x3e68c);
  *(undefined8 *)(param_1 + 0x3e728) = *(undefined8 *)(param_1 + 0x3e690);
  *(undefined4 *)(param_1 + 0x3e730) = *(undefined4 *)(param_1 + 0x3e75c);
  uStack_9bb4 = *(uint *)(param_1 + 0x3e784) & 1;
  bVar15 = uStack_9bb4 == 0;
  lVar10 = 8;
  if (bVar15) {
    lVar10 = 1;
  }
  lVar14 = 1;
  if (bVar15) {
    lVar14 = 8;
  }
  lVar9 = 0x58;
  if (bVar15) {
    lVar9 = 0x3c;
  }
  lVar5 = 0x3c;
  if (bVar15) {
    lVar5 = 0x58;
  }
  uVar8 = (ulonglong)(uint)((int)lVar10 << 2);
  uVar3 = *(undefined4 *)(param_1 + 0x3e618 + uVar8);
  *(undefined4 *)(param_1 + 0x3e704) = uVar3;
  *(undefined4 *)(param_1 + 0x3e708) = *(undefined4 *)(param_1 + 0x3e61c + uVar8);
  *(undefined4 *)(param_1 + 0x3e70c) = *(undefined4 *)(param_1 + 0x3e620 + lVar10 * 4);
  *(undefined4 *)(param_1 + 0x3e710) = *(undefined4 *)(param_1 + 0x3e624 + uVar8);
  *(undefined4 *)(param_1 + 0x3e714) = *(undefined4 *)(param_1 + 0x3e628 + lVar10 * 4);
  *(undefined4 *)(param_1 + 0x3e718) = *(undefined4 *)(param_1 + 0x3e62c + uVar8);
  *(undefined4 *)(param_1 + 0x3e71c) = *(undefined4 *)(param_1 + 0x3e630 + lVar10 * 4);
  *(undefined4 *)(param_1 + 0x3e6a0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e6bc) = *(undefined4 *)(param_1 + 0x3e618 + lVar14 * 4);
  uVar3 = *(undefined4 *)(param_1 + 0x3e618 + lVar9);
  *(undefined4 *)(param_1 + 0x3e6d0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e734) = uVar3;
  *(undefined4 *)(param_1 + 0x3e6d8) = *(undefined4 *)(param_1 + 0x3e618 + lVar5);
  uStack_9bc8 = (*(int *)(param_1 + 0xf0) + 1U >> 1) + 0xf >> 4;
  uStack_9bc0 = 1;
  FUN_14464a188(param_1,param_1 + 0x140,L"OF PrepareLuma",
                (*(int *)(param_1 + 0xec) + 1U >> 1) + 0xf >> 4);
  uStack_9bc0 = 1;
  uStack_9bc8 = iVar11;
  FUN_14464a188(param_1,param_1 + 0x8fa8,L"OF GenerateOpticalFlowInputPyramid",iVar12);
  uStack_9bc0 = 9;
  uStack_9bc8 = 0x10;
  FUN_14464a188(param_1,param_1 + 0x11e10,L"OF GenerateSCDHistogram",
                *(uint *)(param_1 + 0xec) / 0xc + 0x1f >> 5);
  uStack_9bc0 = 1;
  uStack_9bc8 = 3;
  FUN_14464a188(param_1,param_1 + 0x1ac78,L"OF ComputeSCDDivergence",9);
  uVar4 = *(int *)(param_1 + 0xec) + 7U >> 3;
  uVar7 = *(int *)(param_1 + 0xf0) + 7U >> 3;
  uStack_9af8 = CONCAT44(uVar7,uVar4);
  lVar9 = 0;
  do {
    uVar4 = uVar4 + 1 >> 1;
    uVar7 = uVar7 + 1 >> 1;
    auStack_9af0[lVar9 * 2] = uVar4;
    auStack_9af0[lVar9 * 2 + 1] = uVar7;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 6);
  lStack_9b68 = param_1 + 0x23ae0;
  lStack_9b70 = param_1 + 0x2c948;
  lStack_9b98 = param_1 + 0x357b0;
  lStack_9b78 = param_1 + lVar14 * 4 + 0x3e630;
  lStack_9b80 = param_1 + lVar10 * 4 + 0x3e630;
  lVar10 = 0;
  do {
    uVar8 = lVar10 + 6;
    *(uint *)(param_1 + 0x104) = (uint)uVar8;
    *(undefined4 *)(param_1 + 0x108) = 7;
    (**(code **)(param_1 + 0x70))(param_1,lStack_9bb0,0x20,lStack_9b60);
    bVar15 = uStack_9bb4 == ((uint)uVar8 & 1);
    uStack_9b88 = 0xf;
    if (bVar15) {
      uStack_9b88 = 0x16;
    }
    *(undefined4 *)(param_1 + 0x3e6a0) = *(undefined4 *)(lStack_9b80 + lVar10 * 4);
    *(undefined4 *)(param_1 + 0x3e6bc) = *(undefined4 *)(lStack_9b78 + lVar10 * 4);
    lVar14 = lVar10 + 0x16;
    if (bVar15) {
      lVar14 = lVar10 + 0xf;
    }
    *(undefined4 *)(param_1 + 0x3e734) = *(undefined4 *)(param_1 + 0x3e630 + lVar14 * 4);
    uStack_9ba8 = (ulonglong)(uint)((int)lVar10 + 6 + (int)uStack_9b88);
    *(undefined4 *)(param_1 + 0x3e6d8) = *(undefined4 *)(param_1 + 0x3e618 + uStack_9ba8 * 4);
    uVar7 = *(uint *)(param_1 + 0xec) >> ((byte)uVar8 & 0x1f);
    uVar4 = *(uint *)(param_1 + 0xf0) >> ((byte)uVar8 & 0x1f);
    uStack_9ba0 = uVar8;
    FUN_1498136ee(&uStack_9b38,uVar8 & 0xffffffff);
    FUN_149813532(&uStack_9b38);
    uStack_9b18 = (undefined8 *)CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,uStack_9b38));
    lStack_9b08 = uStack_9b28;
    uStack_9b00 = uStack_9b20;
    uStack_9b28 = 0;
    uStack_9b20 = 7;
    uStack_9b38 = 0;
    plVar6 = (longlong *)FUN_14600854c(&uStack_9b18,L" Search",7);
    uStack_9a98 = (undefined8 *)*plVar6;
    uStack_9a90 = plVar6[1];
    lStack_9a88 = plVar6[2];
    uStack_9a80 = plVar6[3];
    plVar6[2] = 0;
    plVar6[3] = 7;
    *(undefined2 *)plVar6 = 0;
    if (7 < uStack_9b00) {
      FUN_14600850e(&uStack_9b18,uStack_9b18);
    }
    lStack_9b08 = 0;
    uStack_9b00 = 7;
    uStack_9b18 = (undefined8 *)((ulonglong)uStack_9b18 & 0xffffffffffff0000);
    if (7 < uStack_9b20) {
      FUN_14600850e(&uStack_9b38,CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,uStack_9b38)));
    }
    puVar13 = &uStack_9a98;
    if (7 < uStack_9a80) {
      puVar13 = uStack_9a98;
    }
    uStack_9bc8 = uVar4 + (uVar4 == 0) + 0xf >> 4;
    uStack_9bc0 = 1;
    FUN_14464a188(param_1,lStack_9b68,puVar13,
                  ((uVar7 + (uVar7 == 0)) * 4 + 0xc & 0xfffffff0) + 0x3f >> 6);
    if (7 < uStack_9a80) {
      FUN_14600850e(&uStack_9a98,uStack_9a98);
    }
    *(undefined4 *)(param_1 + 0x3e6d8) = *(undefined4 *)(param_1 + 0x3e630 + lVar14 * 4);
    *(undefined4 *)(param_1 + 0x3e734) = *(undefined4 *)(param_1 + 0x3e618 + uStack_9ba8 * 4);
    if (lVar10 == -6) {
      *(undefined4 *)(param_1 + 0x3e734) = *(undefined4 *)(param_1 + 0x3e758);
    }
    uVar4 = auStack_9af0[lVar10 * 2 + 10];
    uVar7 = auStack_9af0[lVar10 * 2 + 0xb];
    FUN_1498136ee(&uStack_9b38,uStack_9ba0);
    FUN_149813532(&uStack_9b38);
    uStack_9b18 = (undefined8 *)CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,uStack_9b38));
    uStack_9b10 = CONCAT44(uStack_9b2c,uStack_9b30);
    lStack_9b08 = uStack_9b28;
    uStack_9b00 = uStack_9b20;
    uStack_9b28 = 0;
    uStack_9b20 = 7;
    uStack_9b38 = 0;
    plVar6 = (longlong *)FUN_14600854c(&uStack_9b18,L" Filter",7);
    uStack_9a98 = (undefined8 *)*plVar6;
    uStack_9a90 = plVar6[1];
    lStack_9a88 = plVar6[2];
    uStack_9a80 = plVar6[3];
    plVar6[2] = 0;
    plVar6[3] = 7;
    *(undefined2 *)plVar6 = 0;
    if (7 < uStack_9b00) {
      FUN_14600850e(&uStack_9b18,uStack_9b18);
    }
    lStack_9b08 = 0;
    uStack_9b00 = 7;
    uStack_9b18 = (undefined8 *)((ulonglong)uStack_9b18 & 0xffffffffffff0000);
    if (7 < uStack_9b20) {
      FUN_14600850e(&uStack_9b38,CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,uStack_9b38)));
    }
    puVar13 = &uStack_9a98;
    if (7 < uStack_9a80) {
      puVar13 = uStack_9a98;
    }
    uStack_9bc8 = uVar7 + 3 >> 2;
    uStack_9bc0 = 1;
    FUN_14464a188(param_1,lStack_9b70,puVar13,uVar4 + 0xf >> 4);
    if (7 < uStack_9a80) {
      FUN_14600850e(&uStack_9a98);
    }
    if (lVar10 != -6) {
      *(undefined4 *)(param_1 + 0x3e6f0 + lVar10 * 4) = *(undefined4 *)(param_1 + 0x3e734);
      *(undefined4 *)(param_1 + 0x3e6d0) = *(undefined4 *)(param_1 + 0x3e618 + uStack_9ba8 * 4);
      *(undefined4 *)(param_1 + 0x3e738) =
           *(undefined4 *)
            (param_1 + 0x3e618 + (ulonglong)(uint)((int)lVar10 + 5 + (int)uStack_9b88) * 4);
      uVar4 = auStack_9af0[lVar10 * 2 + 8];
      uVar7 = auStack_9af0[lVar10 * 2 + 9];
      FUN_1498136ee(&uStack_9b38,uStack_9ba0);
      FUN_149813532(&uStack_9b38);
      uStack_9a98 = (undefined8 *)CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,uStack_9b38));
      uStack_9a90 = CONCAT44(uStack_9b2c,uStack_9b30);
      lStack_9a88 = uStack_9b28;
      uStack_9a80 = uStack_9b20;
      uStack_9b28 = 0;
      uStack_9b20 = 7;
      uStack_9b38 = 0;
      plVar6 = (longlong *)FUN_14600854c(&uStack_9a98,L" Scale",6);
      uStack_9b18 = (undefined8 *)*plVar6;
      uStack_9b10 = plVar6[1];
      lStack_9b08 = plVar6[2];
      uStack_9b00 = plVar6[3];
      plVar6[2] = 0;
      plVar6[3] = 7;
      *(undefined2 *)plVar6 = 0;
      if (7 < uStack_9a80) {
        FUN_14600850e(&uStack_9a98,uStack_9a98);
      }
      lStack_9a88 = 0;
      uStack_9a80 = 7;
      uStack_9a98 = (undefined8 *)((ulonglong)uStack_9a98 & 0xffffffffffff0000);
      if (7 < uStack_9b20) {
        FUN_14600850e(&uStack_9b38,CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,uStack_9b38)));
      }
      puVar13 = &uStack_9b18;
      if (7 < uStack_9b00) {
        puVar13 = uStack_9b18;
      }
      uStack_9bc8 = uVar7 + 3 >> 2;
      uStack_9bc0 = 1;
      FUN_14464a188(param_1,lStack_9b98,puVar13,uVar4 + 3 >> 2);
      memset(&uStack_9a98,0,0x9a38);
      uStack_9a98 = (undefined8 *)CONCAT44(uStack_9a98._4_4_,3);
      uStack_9a10 = *(undefined4 *)(param_1 + 0x3e6d0);
      uStack_9a08 = 4;
      uStack_9a04 = 2;
      (**(code **)(param_1 + 0x88))(param_1);
      if (7 < uStack_9b00) {
        FUN_14600850e(&uStack_9b18);
      }
    }
    memset(&uStack_9a98,0,0x9a38);
    uStack_9a98 = (undefined8 *)CONCAT44(uStack_9a98._4_4_,3);
    uStack_9a10 = *(undefined4 *)(param_1 + 0x3e6d8);
    uStack_9a08 = 4;
    uStack_9a04 = 2;
    (**(code **)(param_1 + 0x88))(param_1);
    lVar10 = lVar10 + -1;
  } while (lVar10 != -7);
  memset(&uStack_9a98,0,0x9a38);
  uStack_9a98 = (undefined8 *)CONCAT44(uStack_9a98._4_4_,3);
  pwVar1 = (wchar_t *)((longlong)&uStack_9a98 + 4);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e61c);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 1");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e620);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 2");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e624);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 3");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e628);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 4");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e62c);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 5");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e630);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 6");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e634);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e638);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 1");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e63c);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 2");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e640);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 3");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e644);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 4");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e648);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 5");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e64c);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 6");
  uStack_9a10 = *(undefined4 *)(param_1 + 0x3e650);
  uStack_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&uStack_9a98);
  lVar10 = lStack_9b90;
  *(uint *)(param_1 + 0x3e784) = *(int *)(param_1 + 0x3e784) + 1U & 0xf;
  iVar11 = (**(code **)(param_1 + 0x90))(param_1,lStack_9b90,*(undefined4 *)(param_1 + 0xf8));
  if (iVar11 == 0) {
    (**(code **)(param_1 + 0x40))(param_1,lVar10,*(undefined4 *)(param_1 + 0xf8));
  }
  if ((uStack_60 ^ (ulonglong)auStack_9be8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 149813527 ffxOpticalflowGetEffectVersion body=6 status=ok
// SIG undefined ffxOpticalflowGetEffectVersion(void)

undefined8 ffxOpticalflowGetEffectVersion(void)

{
                    /* 0x9813527  610  ffxOpticalflowGetEffectVersion */
  return 0x401002;
}



// FUNCTION 149813532 FUN_149813532 body=202 status=ok
// SIG undefined FUN_149813532(void)

undefined8 * FUN_149813532(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *_Src;
  longlong lVar2;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < 3) {
    FUN_1498135fc(param_1);
  }
  else {
    param_1[2] = lVar1 + 3;
    _Src = param_1;
    if (7 < (ulonglong)param_1[3]) {
      _Src = (undefined8 *)*param_1;
    }
    lVar2 = 3;
    if ((undefined *)((longlong)L" Search" + 0xf) < (undefined *)((longlong)_Src + lVar1 * 2) &&
        _Src < &DAT_14be97f94) {
      if (_Src < &DAT_14be97f8e || (undefined *)((longlong)_Src + -0x14be97f8e) == (undefined *)0x0)
      {
        lVar2 = 0;
      }
      else {
        lVar2 = (longlong)_Src + -0x14be97f8e >> 1;
      }
    }
    memmove((undefined *)((longlong)_Src + 6),_Src,lVar1 * 2 + 2);
    memcpy(_Src,&DAT_14be97f8e,lVar2 * 2);
    memcpy((undefined *)((longlong)_Src + lVar2 * 2),&DAT_14be97f94 + lVar2 * 2,lVar2 * -2 + 6);
  }
  return param_1;
}



// FUNCTION 1498135fc FUN_1498135fc body=241 status=ok
// SIG undefined FUN_1498135fc(void)

undefined8 * FUN_1498135fc(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Src;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  lVar1 = param_1[2];
  if (lVar1 + 0x8000000000000004U < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  uVar2 = param_1[3];
  uVar3 = lVar1 + 3U | 7;
  uVar5 = 0x7ffffffffffffffe;
  if (((uVar3 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < uVar3)) {
    uVar5 = uVar3;
  }
  puVar4 = (undefined4 *)FUN_145b28560(param_1,uVar5 + 1);
  param_1[2] = lVar1 + 3U;
  param_1[3] = uVar5;
  if (uVar2 < 8) {
    *(undefined2 *)(puVar4 + 1) = 0x20;
    *puVar4 = 0x46004f;
    memcpy((void *)((longlong)puVar4 + 6),param_1,lVar1 * 2 + 2);
  }
  else {
    _Src = (void *)*param_1;
    *(undefined2 *)(puVar4 + 1) = 0x20;
    *puVar4 = 0x46004f;
    memcpy((void *)((longlong)puVar4 + 6),_Src,lVar1 * 2 + 2);
    FUN_14600850e(param_1,_Src,uVar2);
  }
  *param_1 = puVar4;
  return param_1;
}



// FUNCTION 1498136ee FUN_1498136ee body=242 status=ok
// SIG undefined FUN_1498136ee(void)

undefined8 * FUN_1498136ee(undefined8 *param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_68 [30];
  ushort uStack_4a;
  ushort auStack_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 0) {
    lVar2 = 0x28;
    uVar4 = -param_2;
    do {
      lVar3 = lVar2;
      *(ushort *)((longlong)auStack_48 + lVar3) = (short)uVar4 + (short)(uVar4 / 10) * -10 | 0x30;
      lVar2 = lVar3 + -2;
      bVar1 = 9 < uVar4;
      uVar4 = uVar4 / 10;
    } while (bVar1);
    *(undefined2 *)((longlong)auStack_48 + lVar3 + -2) = 0x2d;
  }
  else {
    lVar2 = 0x2a;
    do {
      *(ushort *)((longlong)auStack_48 + lVar2 + -2) =
           (short)param_2 + (short)(param_2 / 10) * -10 | 0x30;
      lVar2 = lVar2 + -2;
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar2 == 0x2a) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    FUN_1498137e2(param_1,(longlong)auStack_48 + lVar2,0x2a - lVar2 >> 1);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1498137e2 FUN_1498137e2 body=191 status=ok
// SIG undefined FUN_1498137e2(void)

void FUN_1498137e2(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  void *_Dst;
  ulonglong uVar2;
  
  if (param_3 < 0x7fffffffffffffff) {
    if (param_3 < 8) {
      param_1[2] = param_3;
      param_1[3] = 7;
      memcpy(param_1,param_2,param_3 * 2);
      puVar1 = (undefined2 *)((longlong)param_1 + param_3 * 2);
    }
    else {
      param_1[3] = 7;
      uVar2 = 10;
      if (10 < (param_3 | 7)) {
        uVar2 = param_3 | 7;
      }
      if (0x7ffffffffffffffd < uVar2) {
        uVar2 = 0x7ffffffffffffffe;
      }
      _Dst = (void *)FUN_145b28560(param_1,uVar2 + 1);
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,param_3 * 2);
      puVar1 = (undefined2 *)((longlong)_Dst + param_3 * 2);
    }
    *puVar1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 1498138a2 FUN_1498138a2 body=36 status=ok
// SIG undefined FUN_1498138a2(void)

undefined8 FUN_1498138a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498138e2 FUN_1498138e2 body=93 status=ok
// SIG undefined FUN_1498138e2(void)

void FUN_1498138e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be98400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149813940 FUN_149813940 body=123 status=ok
// SIG undefined FUN_149813940(void)

void FUN_149813940(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14be98400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498139bc FUN_1498139bc body=21 status=ok
// SIG undefined FUN_1498139bc(void)

undefined8 FUN_1498139bc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498139d1 FUN_1498139d1 body=25 status=ok
// SIG undefined FUN_1498139d1(void)

undefined4 FUN_1498139d1(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 - 1U < 0x20) {
    uVar1 = *(undefined4 *)(&DAT_14be9a6c0 + (ulonglong)(param_1 - 1U) * 4);
  }
  return uVar1;
}



// FUNCTION 1498139ea ffxFrameInterpolationGetSharedResourceDescriptions body=278 status=ok
// SIG undefined ffxFrameInterpolationGetSharedResourceDescriptions(void)

undefined8 ffxFrameInterpolationGetSharedResourceDescriptions(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* 0x98139ea  586  ffxFrameInterpolationGetSharedResourceDescriptions */
  uVar2 = 0x80000000;
  if (param_2 != (undefined8 *)0x0 && param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 4);
    param_2[10] = 0x200000000;
    *(undefined4 *)(param_2 + 0xb) = 0x1c;
    *(undefined8 *)((longlong)param_2 + 0x5c) = uVar2;
    *(undefined1 **)((longlong)param_2 + 100) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0x6c) = 0x800300000000;
    *(undefined4 *)((longlong)param_2 + 0x74) = 2;
    param_2[0xf] = L"FISHARED_DilatedDepth";
    *(undefined4 *)(param_2 + 0x10) = 10;
    *(undefined4 *)(param_2 + 0x11) = 1;
    *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x94) = 0;
    uVar2 = 0;
    *(undefined4 *)((longlong)param_2 + 0x9c) = 0;
    uVar1 = *(undefined8 *)(param_1 + 4);
    param_2[0x14] = 0x200000000;
    *(undefined4 *)(param_2 + 0x15) = 0x12;
    *(undefined8 *)((longlong)param_2 + 0xac) = uVar1;
    *(undefined1 **)((longlong)param_2 + 0xb4) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0xbc) = 0x800300000000;
    *(undefined4 *)((longlong)param_2 + 0xc4) = 2;
    param_2[0x19] = L"FISHARED_DilatedVelocity";
    *(undefined4 *)(param_2 + 0x1a) = 0xb;
    *(undefined4 *)(param_2 + 0x1b) = 1;
    *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
    *(undefined4 *)((longlong)param_2 + 0xec) = 0;
    uVar1 = *(undefined8 *)(param_1 + 4);
    *param_2 = 0x200000000;
    *(undefined4 *)(param_2 + 1) = 8;
    *(undefined8 *)((longlong)param_2 + 0xc) = uVar1;
    *(undefined1 **)((longlong)param_2 + 0x14) = &DAT_100000001;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0x200000000;
    *(undefined4 *)((longlong)param_2 + 0x24) = 2;
    param_2[5] = L"FISHARED_ReconstructedPrevNearestDepth";
    *(undefined4 *)(param_2 + 6) = 0xc;
    *(undefined4 *)(param_2 + 7) = 1;
    *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x44) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  }
  return uVar2;
}



// FUNCTION 149813b00 ffxFrameInterpolationContextCreate body=2018 status=ok
// SIG undefined ffxFrameInterpolationContextCreate(void)

int ffxFrameInterpolationContextCreate(void *param_1,byte *param_2)

{
  longlong lVar1;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_438 [40];
  undefined4 local_410;
  undefined4 local_40c;
  undefined8 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  int local_3f0;
  int local_3ec;
  undefined8 local_3e8;
  uint local_3e0 [2];
  int local_3d8 [2];
  undefined8 uStack_3d0;
  undefined1 local_3c8 [14];
  undefined2 local_3ba;
  int local_3b8 [2];
  undefined8 local_3b0;
  undefined1 *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined1 *local_394;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_370;
  wchar_t *local_368;
  undefined1 *local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined1 *local_34c;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined4 local_328;
  wchar_t *local_320;
  undefined1 *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined1 *local_304;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  wchar_t *local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  uint local_2c0;
  undefined8 local_2bc;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  wchar_t *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_250;
  wchar_t *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined1 *local_22c;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined4 local_208;
  wchar_t *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined1 *local_1e4;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  uint local_1a4;
  uint local_1a0;
  undefined8 local_19c;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  wchar_t *local_170;
  undefined1 *local_168;
  undefined4 local_160;
  uint local_15c;
  uint local_158;
  undefined1 *local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 *local_10c;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  ulonglong local_a0;
  
                    /* 0x9813b00  581  ffxFrameInterpolationContextCreate */
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  iVar5 = -0x80000000;
  if (((((param_2 != (byte *)0x0 && param_1 != (void *)0x0) &&
        (iVar5 = -0x7ffffff8, *(longlong *)(param_2 + 0x20) != 0)) &&
       (*(longlong *)(param_2 + 0x38) != 0)) &&
      ((*(longlong *)(param_2 + 0x30) != 0 && (*(longlong *)(param_2 + 0x40) != 0)))) &&
     ((*(longlong *)(param_2 + 0xf0) == 0 || (*(longlong *)(param_2 + 0xf8) != 0)))) {
    uVar2 = FUN_1498139d1(*(undefined4 *)(param_2 + 0x14));
    uVar3 = FUN_1498139d1(*(undefined4 *)(param_2 + 0x18));
    iVar5 = -0x7ffffff6;
    if (uVar2 == uVar3 && -1 < (int)(uVar3 | uVar2)) {
      memset(param_1,0,0x62248);
      *(undefined8 *)((longlong)param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x100);
      memcpy(param_1,param_2,0x108);
      lVar1 = (longlong)param_1 + 0x20;
      iVar4 = (**(code **)((longlong)param_1 + 0x20))(lVar1);
      iVar5 = -0x7ffffff1;
      if (((iVar4 == 0x401004) &&
          (iVar5 = (**(code **)((longlong)param_1 + 0x30))(lVar1,0x12,0,(longlong)param_1 + 0x108),
          iVar5 == 0)) && (iVar5 = (**(code **)((longlong)param_1 + 0x38))(lVar1), iVar5 == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x62230) = 1;
        *(byte *)((longlong)param_1 + 0x62232) = *param_2 >> 6 & 1;
        *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)((longlong)param_1 + 0x198) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)((longlong)param_1 + 0x140) = *(undefined4 *)(param_2 + 0x10);
        *(float *)((longlong)param_1 + 0x144) = 1.0 / (float)*(uint *)(param_2 + 0xc);
        *(float *)((longlong)param_1 + 0x148) = 1.0 / (float)*(uint *)(param_2 + 0x10);
        *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
        *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)((longlong)param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x10);
        iVar5 = 0;
        do {
          fVar7 = ((float)iVar5 + (float)iVar5) / 127.0;
          if (1e-06 <= fVar7) {
            sinf(fVar7 * 3.1415927);
            sinf(fVar7 * 1.5707964);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x80);
        local_a8 = &local_3ba;
        local_3ba = 0;
        local_3b8[0] = 0xd;
        local_3b0 = L"FI_ReconstructedDepthInterpolatedFrame";
        local_3a8 = &DAT_200000002;
        local_3a0 = 8;
        local_39c = *(undefined4 *)(param_2 + 4);
        local_398 = *(undefined4 *)(param_2 + 8);
        local_394 = &DAT_100000001;
        uStack_380 = 0;
        local_378 = 0;
        local_388 = 1;
        local_370 = 0xf;
        local_368 = L"FI_GameMotionVectorFieldX";
        local_360 = &DAT_200000002;
        local_358 = 8;
        local_34c = &DAT_100000001;
        uStack_338 = 0;
        local_330 = 0;
        local_340 = 1;
        local_328 = 0x10;
        local_320 = L"FI_GameMotionVectorFieldY";
        local_318 = &DAT_200000002;
        local_310 = 8;
        local_304 = &DAT_100000001;
        uStack_2f0 = 0;
        local_2e8 = 0;
        local_2f8 = 1;
        local_2e0 = 0x21;
        local_2d8 = L"FI_InpaintingPyramid";
        local_2d0 = &DAT_200000002;
        local_2c8 = 4;
        local_1a4 = *(uint *)(param_2 + 0xc);
        local_2c4 = local_1a4 >> 1;
        local_1a0 = *(uint *)(param_2 + 0x10);
        local_2c0 = local_1a0 >> 1;
        local_2bc = 0x100000000;
        uStack_2a8 = 0;
        local_2a0 = 0;
        local_2b0 = 1;
        local_298 = 0x20;
        local_290 = L"FI_Counters";
        local_288 = 0x200000000;
        uStack_280 = 0x800000000;
        local_278 = &DAT_100000004;
        local_270 = 0;
        uStack_260 = 0;
        local_258 = 0;
        local_268 = 1;
        local_250 = 0x11;
        local_248 = L"FI_OpticalFlowMotionVectorFieldX";
        local_240 = &DAT_200000002;
        local_238 = 8;
        local_22c = &DAT_100000001;
        uStack_218 = 0;
        local_210 = 0;
        local_220 = 1;
        local_208 = 0x12;
        local_200 = L"FI_OpticalFlowMotionVectorFieldY";
        local_1f8 = &DAT_200000002;
        local_1f0 = 8;
        local_1e4 = &DAT_100000001;
        uStack_1d0 = 0;
        local_1c8 = 0;
        local_1d8 = 1;
        local_1c0 = 3;
        local_1b8 = L"FI_PreviousInterpolationSouce";
        local_1b0 = &DAT_200000002;
        local_1a8 = *(undefined4 *)(param_2 + 0x18);
        local_19c = 1;
        uStack_188 = 0;
        local_180 = 0;
        local_190 = 1;
        local_178 = 0x1e;
        local_170 = L"FI_InpaintingMask";
        local_168 = &DAT_200000002;
        local_160 = 0x19;
        local_154 = &DAT_100000001;
        uStack_140 = 0;
        local_138 = 0;
        local_148 = 1;
        local_130 = 0xe;
        local_128 = L"FI_DisocclusionMask";
        local_120 = &DAT_200000002;
        local_118 = 0x1a;
        local_10c = &DAT_100000001;
        uStack_f8 = 0;
        local_f0 = 0;
        local_100 = 1;
        local_e8 = 0x2e;
        local_e0 = L"FI_DefaultDistortionField";
        local_d8 = 2;
        uStack_d0 = 0x10000001a;
        local_c8 = &DAT_100000001;
        local_c0 = 0;
        local_b8 = 2;
        uStack_b0 = 2;
        _Dst = (void *)((longlong)param_1 + 0x620b0);
        local_354 = local_39c;
        local_350 = local_398;
        local_30c = local_39c;
        local_308 = local_398;
        local_234 = local_39c;
        local_230 = local_398;
        local_1ec = local_39c;
        local_1e8 = local_398;
        local_15c = local_1a4;
        local_158 = local_1a0;
        local_114 = local_39c;
        local_110 = local_398;
        memset(_Dst,0,0xc0);
        lVar6 = 0x30;
        do {
          local_40c = *(undefined4 *)((longlong)local_3d8 + lVar6);
          local_408 = *(undefined8 *)((longlong)&uStack_3d0 + lVar6);
          local_400 = *(undefined4 *)(local_3c8 + lVar6);
          local_3f8 = *(undefined8 *)(local_3c8 + lVar6 + 4);
          local_3f0 = *(int *)((longlong)local_3d8 + lVar6 + 4);
          local_3ec = (uint)(local_3f0 == 0) * 2 + 2;
          if (local_3f0 == 1) {
            local_3ec = 0x100;
          }
          local_410 = 0;
          local_3fc = 1;
          local_3e8 = *(undefined8 *)((longlong)local_3e0 + lVar6);
          local_3e0[0] = *(uint *)((longlong)local_3e0 + lVar6 + -8);
          local_3c8._0_8_ = *(undefined8 *)((longlong)&local_3a8 + lVar6);
          local_3d8[0] = *(int *)((longlong)local_3b8 + lVar6);
          local_3d8[1] = *(undefined4 *)((longlong)local_3b8 + lVar6 + 4);
          uStack_3d0._0_4_ = *(undefined4 *)((longlong)&local_3b0 + lVar6);
          uStack_3d0._4_4_ = *(undefined4 *)((longlong)&local_3b0 + lVar6 + 4);
          iVar5 = (**(code **)((longlong)param_1 + 0x48))
                            (lVar1,&local_410,*(undefined4 *)((longlong)param_1 + 0x108),
                             (void *)((longlong)_Dst + (ulonglong)local_3e0[0] * 4));
          if (iVar5 != 0) goto LAB_149813b68;
          lVar6 = lVar6 + 0x48;
        } while (lVar6 != 0x348);
        memcpy((void *)((longlong)param_1 + 0x62170),_Dst,0xc0);
        *(undefined1 *)((longlong)param_1 + 0x62231) = 0;
        FUN_14464a5dc(param_1);
      }
    }
  }
LAB_149813b68:
  if ((local_a0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1498142e3 ffxFrameInterpolationContextGetGpuMemoryUsage body=62 status=ok
// SIG undefined ffxFrameInterpolationContextGetGpuMemoryUsage(void)

undefined8 ffxFrameInterpolationContextGetGpuMemoryUsage(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
                    /* 0x98142e3  583  ffxFrameInterpolationContextGetGpuMemoryUsage */
  uVar1 = 0x80000000;
  if (param_2 != 0 && param_1 != 0) {
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149814317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x28))
                        (param_1 + 0x20,*(undefined4 *)(param_1 + 0x108),param_2,
                         *(code **)(param_1 + 0x28));
      return uVar1;
    }
    uVar1 = 0x8000000c;
  }
  return uVar1;
}



// FUNCTION 149814321 ffxSharedContextGetGpuMemoryUsage body=34 status=ok
// SIG undefined ffxSharedContextGetGpuMemoryUsage(void)

undefined8 ffxSharedContextGetGpuMemoryUsage(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
                    /* 0x9814321  618  ffxSharedContextGetGpuMemoryUsage */
  if (param_2 == 0 || param_1 == 0) {
    return 0x80000000;
  }
                    /* WARNING: Could not recover jumptable at 0x000149814340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 8))(param_1,0,param_2);
  return uVar1;
}



// FUNCTION 149814343 ffxFrameInterpolationContextDestroy body=449 status=ok
// SIG undefined ffxFrameInterpolationContextDestroy(void)

undefined8 ffxFrameInterpolationContextDestroy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
                    /* 0x9814343  582  ffxFrameInterpolationContextDestroy */
  if (param_1 == 0) {
    uVar2 = 0x80000000;
  }
  else {
    lVar1 = param_1 + 0x20;
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x218,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x9080,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x11ee8,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x1ad50,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x23bb8,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x2ca20,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x35888,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x3e6f0,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x47558,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x503c0,*(undefined4 *)(param_1 + 0x108));
    (**(code **)(param_1 + 0xa0))(lVar1,param_1 + 0x59228,*(undefined4 *)(param_1 + 0x108));
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x620c0) = 0;
    *(undefined4 *)(param_1 + 0x620fc) = 0;
    *(undefined8 *)(param_1 + 0x62104) = 0;
    *(undefined4 *)(param_1 + 0x6210c) = 0;
    *(undefined4 *)(param_1 + 0x620b4) = 0;
    *(undefined4 *)(param_1 + 0x62174) = 0;
    *(undefined4 *)(param_1 + 0x620d8) = 0;
    *(undefined4 *)(param_1 + 0x62198) = 0;
    *(undefined8 *)(param_1 + 0x620dc) = 0;
    *(undefined8 *)(param_1 + 0x6219c) = 0;
    *(undefined4 *)(param_1 + 0x6216c) = 0;
    ffxSafeReleaseCopyResource
              (lVar1,*(undefined4 *)(param_1 + 0x62130),*(undefined4 *)(param_1 + 0x108));
    ffxSafeReleaseCopyResource
              (lVar1,*(undefined4 *)(param_1 + 0x62168),*(undefined4 *)(param_1 + 0x108));
    do {
      ffxSafeReleaseResource
                (lVar1,*(undefined4 *)(param_1 + 0x620b0 + lVar3 * 4),
                 *(undefined4 *)(param_1 + 0x108));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x30);
    (**(code **)(param_1 + 0x40))(lVar1,*(undefined4 *)(param_1 + 0x108));
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 149814504 ffxFrameInterpolationResourceIsNull body=8 status=ok
// SIG bool ffxFrameInterpolationResourceIsNull(FfxResource param_1)

/* bool __cdecl ffxFrameInterpolationResourceIsNull(struct FfxResource) */

bool __cdecl ffxFrameInterpolationResourceIsNull(longlong *param_1)

{
                    /* 0x9814504  364  ?ffxFrameInterpolationResourceIsNull@@YA_NUFfxResource@@@Z */
  return *param_1 == 0;
}



// FUNCTION 14981450c ffxFrameInterpolationPrepare body=714 status=ok
// SIG undefined ffxFrameInterpolationPrepare(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ffxFrameInterpolationPrepare(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 auStack_9a98 [40];
  undefined1 local_9a70 [4];
  wchar_t local_9a6c [66];
  undefined4 local_99e8;
  undefined4 local_99e4;
  undefined4 local_99e0;
  undefined4 local_99dc;
  uint local_99d8;
  ulonglong local_38;
  
                    /* 0x981450c  587  ffxFrameInterpolationPrepare */
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_9a98;
  uVar1 = *param_1;
  if (((((char)uVar1 < '\0') &&
       (*(int *)(param_2 + 0x3c0) == 0 && *(longlong *)(param_2 + 0x3b8) == 0)) &&
      (*(int *)(param_2 + 0x3cc) == 0 && *(longlong *)(param_2 + 0x3c4) == 0)) &&
     ((*(int *)(param_2 + 0x3d8) == 0 && *(longlong *)(param_2 + 0x3d0) == 0 &&
      (*(int *)(param_2 + 0x3e4) == 0 && *(longlong *)(param_2 + 0x3dc) == 0)))) {
    ffxPrintMessage(1,
                    L"ffxDispatchDescFrameGenerationPrepareCameraInfo needs to be passed as linked struct. This is a required input to FSR3.1.4 and onwards for best quality."
                   );
    uVar1 = *param_1;
  }
  param_1[0x4d] = *(uint *)(param_2 + 0x10);
  param_1[0x4e] = *(uint *)(param_2 + 0x14);
  param_1[0x75] = *(uint *)(param_2 + 0x18);
  puVar2 = param_1 + 0x4f;
  if ((uVar1 & 0x10) == 0) {
    puVar2 = param_1 + 0x4d;
  }
  param_1[0x76] = *(uint *)(param_2 + 0x1c);
  param_1[0x77] =
       (uint)(*(float *)(param_2 + 0x20) /
             (float)*(int *)((longlong)param_1 + (ulonglong)((uVar1 & 0x10) >> 1) + 0x134));
  param_1[0x78] = (uint)(*(float *)(param_2 + 0x24) / (float)(int)puVar2[1]);
  puVar2 = param_1 + 8;
  (**(code **)(param_1 + 0x24))(puVar2,param_1 + 0x4d,0xb0,param_1 + 0x18824);
  (**(code **)(param_1 + 0x14))(puVar2,param_2 + 0x40,param_1[0x42],param_1 + 0x18831);
  (**(code **)(param_1 + 0x14))(puVar2,param_2 + 0xf0,param_1[0x42],param_1 + 0x18832);
  (**(code **)(param_1 + 0x14))(puVar2,param_2 + 0x1a8,param_1[0x42],param_1 + 0x18866);
  (**(code **)(param_1 + 0x14))(puVar2,param_2 + 600,param_1[0x42],param_1 + 0x18867);
  (**(code **)(param_1 + 0x14))(puVar2,param_2 + 0x308,param_1[0x42],param_1 + 0x18868);
  memset(local_9a70,0,0x9a38);
  if ((*param_1 & 1) == 0) {
    local_99e8 = 0x3f800000;
  }
  else {
    local_99e8 = 0;
  }
  local_99e4 = local_99e8;
  local_99e0 = local_99e8;
  local_99dc = local_99e8;
  wcscpy_s(local_9a6c,0x40,L"Clear Reconstructed Previous Nearest Depth");
  local_99d8 = param_1[0x18868];
  (**(code **)(param_1 + 0x2a))(puVar2,local_9a70);
  FUN_14464a39c(param_1,param_1 + 0x86,*(int *)(param_2 + 0x10) + 7U >> 3,
                *(int *)(param_2 + 0x14) + 7U >> 3);
  (**(code **)(param_1 + 0x2c))(puVar2,*(undefined8 *)(param_2 + 8),param_1[0x42]);
  (**(code **)(param_1 + 0x18))(puVar2,*(undefined8 *)(param_2 + 8),param_1[0x42]);
  param_1[0x18831] = 0;
  param_1[0x18832] = 0;
  param_1[0x18866] = 0;
  param_1[0x18867] = 0;
  param_1[0x18868] = 0;
  if ((local_38 ^ (ulonglong)auStack_9a98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498147d7 ffxFrameInterpolationDispatch body=2757 status=ok
// SIG undefined ffxFrameInterpolationDispatch(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ffxFrameInterpolationDispatch(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  uint *puVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auStack_9b48 [44];
  uint local_9b1c;
  uint **local_9b18;
  uint **local_9b10;
  uint *local_9b08;
  uint *local_9b00;
  float local_9af8;
  wchar_t local_9af4 [2];
  float local_9af0;
  undefined4 local_9aec;
  float local_9a70;
  float local_9a6c;
  float local_9a68;
  float local_9a64;
  uint local_9a60;
  float local_b8 [4];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  ulonglong local_90;
  undefined8 uStack_48;
  undefined8 extraout_XMM0_Qb_00;
  
                    /* 0x98147d7  584  ffxFrameInterpolationDispatch */
  uStack_48 = 0x1498147ed;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_9b48;
  local_9b08 = param_1;
  local_9b00 = param_2;
  if (*(byte *)((longlong)param_1 + 0x62231) == 1) {
    FUN_14464a5dc(param_1);
    *(byte *)((longlong)param_1 + 0x62231) = 0;
  }
  if (*(longlong *)(param_1 + 0x18890) == 0) {
    bVar8 = 1;
  }
  else {
    bVar8 = (byte)param_2[0xf2];
  }
  uVar4 = *(ulonglong *)(param_2 + 0xf6);
  uVar7 = *(ulonglong *)(param_1 + 0x1888e);
  uVar9 = *(ulonglong *)(param_1 + 0x1888e);
  *(ulonglong *)(param_1 + 0x1888e) = uVar4;
  *(longlong *)(param_1 + 0x18890) = *(longlong *)(param_1 + 0x18890) + 1;
  param_1[0x4d] = param_2[6];
  param_1[0x4e] = param_2[7];
  param_1[0x4f] = param_2[4];
  param_1[0x50] = param_2[5];
  fVar24 = 1.0;
  param_1[0x51] = (uint)(1.0 / (float)param_2[4]);
  param_1[0x52] = (uint)(1.0 / (float)param_2[5]);
  param_1[0x55] = param_2[0x8e];
  param_1[0x56] = param_2[0x8f];
  param_1[0x57] = 0;
  param_1[0x58] = ((1 < uVar4 - uVar9 || uVar4 < uVar7) | bVar8) & 1;
  param_1[0x5d] = param_2[0xf1];
  param_1[0x5e] = (uint)(*(longlong *)(param_2 + 0x34) != 0);
  param_1[0x61] = param_2[0xea];
  param_1[0x62] = param_2[0xeb];
  param_1[99] = param_2[0xec];
  param_1[100] = *param_2;
  param_1[0x53] = param_2[0xed];
  param_1[0x54] = param_2[0xee];
  param_1[0x69] = param_2[0x8c];
  param_1[0x6a] = param_2[0x8d];
  param_1[0x6b] = param_2[0x8e];
  param_1[0x6c] = param_2[0x8f];
  param_1[0x6f] = *(uint *)(&DAT_14be98588 + DAT_14cc28980 * 0xc);
  *(undefined8 *)(param_1 + 0x6d) = *(undefined8 *)(&DAT_14be98580 + DAT_14cc28980 * 0xc);
  DAT_14cc28980 = DAT_14cc28980 + ((DAT_14cc28980 + 1U) / 7) * -7 + 1;
  param_1[0x70] = param_2[0xf3];
  param_1[0x71] = param_2[0xf4];
  param_1[0x72] = param_2[0xf5];
  uVar17 = param_2[6];
  uVar2 = param_2[7];
  fVar18 = tanf((float)param_2[0xef] * 0.5);
  fVar18 = atanf(fVar18 * ((float)uVar17 / (float)uVar2));
  fVar18 = tanf((fVar18 + fVar18) * 0.5);
  param_1[0x73] = (uint)fVar18;
  lVar16 = *(longlong *)(param_2 + 0x17c);
  if (lVar16 == 0) {
    param_1[0x5f] = 1;
    uVar17 = 1;
  }
  else {
    param_1[0x5f] = param_2[0x180];
    uVar17 = param_2[0x181];
  }
  param_1[0x60] = uVar17;
  fVar18 = (float)param_2[0xee];
  param_1[0x48] = (uint)fVar18;
  local_b8[3] = (float)param_2[0xed];
  param_1[0x47] = (uint)local_b8[3];
  uVar17 = -(uint)(0.0 < (float)param_2[0xf0]);
  fVar5 = (float)(~uVar17 & 0x3f800000 | param_2[0xf0] & uVar17);
  param_1[0x4a] = (uint)fVar5;
  fVar19 = (float)param_2[0xef];
  param_1[0x49] = (uint)fVar19;
  uVar4 = *(ulonglong *)(param_2 + 6);
  *(ulonglong *)(param_1 + 0x43) = uVar4;
  *(undefined8 *)(param_1 + 0x45) = *(undefined8 *)(param_2 + 4);
  fVar23 = local_b8[3];
  if (fVar18 <= local_b8[3]) {
    fVar23 = fVar18;
  }
  if (local_b8[3] <= fVar18) {
    local_b8[3] = fVar18;
  }
  uVar17 = *param_1 & 1;
  fVar18 = fVar23;
  if (uVar17 != 0) {
    fVar18 = local_b8[3];
    local_b8[3] = fVar23;
  }
  local_9af8 = local_b8[3] / (fVar18 - local_b8[3]);
  local_9af4[0] = L'\x01';
  local_9af4[1] = L'뾀';
  local_9af0 = local_9af8;
  local_9aec = 0x34000000;
  local_b8[0] = local_9af8 * fVar18;
  local_b8[1] = -1.1920929e-07 - fVar18;
  local_b8[2] = local_9af8 * fVar18;
  uVar7 = (ulonglong)(*param_1 * 2 & 4);
  uVar9 = (ulonglong)(uVar17 << 3);
  param_1[0x59] = *(uint *)((longlong)&local_9af8 + uVar7 + uVar9) ^ 0x80000000;
  param_1[0x5a] = (uint)(fVar5 * *(float *)((longlong)local_b8 + uVar7 + uVar9));
  fVar18 = cosf(fVar19 * 0.5);
  fVar19 = sinf((float)param_1[0x49] * 0.5);
  param_1[0x5b] =
       (uint)(1.0 / ((fVar18 / fVar19) / ((float)(uVar4 & 0xffffffff) / (float)(uVar4 >> 0x20))));
  param_1[0x5c] = (uint)(1.0 / (fVar18 / fVar19));
  puVar1 = param_1 + 8;
  (**(code **)(param_1 + 0x24))(puVar1,param_1 + 0x4d,0xb0,param_1 + 0x18824);
  puVar6 = local_9b00;
  if (param_1[0x5e] == 1) {
    (**(code **)(param_1 + 0x14))(puVar1,local_9b00 + 8,param_1[0x42],param_1 + 0x1884b);
    (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0x34,param_1[0x42],param_1 + 0x18830);
  }
  else {
    (**(code **)(param_1 + 0x14))(puVar1,local_9b00 + 8,param_1[0x42],param_1 + 0x18830);
    param_1[0x1884b] = param_1[0x18830];
  }
  if (*(longlong *)(puVar6 + 0xf8) != 0) {
    (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0xf8,param_1[0x42],param_1 + 0x18836);
  }
  if (*(longlong *)(puVar6 + 0x124) != 0) {
    (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0x124,param_1[0x42],param_1 + 0x18837);
  }
  if (*(longlong *)(puVar6 + 0x150) != 0) {
    (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0x150,param_1[0x42],param_1 + 0x18838);
  }
  (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0x60,param_1[0x42],param_1 + 0x1885d);
  param_1[0x1882d] = param_1[0x1885d];
  if ((float)puVar6[0xea] <= 0.0) {
    param_1[0x18841] = 0;
    param_1[0x18842] = 0;
    param_1[0x18843] = 0;
    param_1[0x1883f] = 0;
  }
  else {
    (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0x90,param_1[0x42],param_1 + 0x1883f);
    (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0xbc,param_1[0x42],param_1 + 0x18843);
  }
  if (lVar16 == 0) {
    param_1[0x1885b] = param_1[0x1885a];
  }
  else {
    (**(code **)(param_1 + 0x14))(puVar1,puVar6 + 0x17c,param_1[0x42],param_1 + 0x1885b);
  }
  uVar17 = puVar6[4];
  uVar2 = puVar6[5];
  uVar11 = puVar6[6];
  uVar3 = puVar6[0xec];
  uVar15 = puVar6[7];
  local_9b1c = param_1[0x58];
  local_b8[0] = (float)param_1[0x18869];
  local_b8[1] = (float)param_1[0x1886b];
  local_b8[2] = (float)param_1[0x1886c];
  local_b8[3] = (float)param_1[0x1887d];
  local_a8 = param_1[0x1886d];
  local_a4 = param_1[0x1886e];
  local_a0 = param_1[0x1887a];
  local_9c = param_1[0x1886a];
  lVar16 = 0;
  do {
    memset(&local_9af8,0,0x9a38);
    local_9af8 = 5.60519e-45;
    local_9a70 = local_b8[lVar16];
    (**(code **)(param_1 + 0x2a))(puVar1);
    lVar16 = lVar16 + 1;
  } while (lVar16 != 8);
  uVar14 = uVar17 + 7 >> 3;
  uVar10 = uVar2 + 7 >> 3;
  uVar11 = uVar11 + 7 >> 3;
  uVar15 = uVar15 + 7 >> 3;
  FUN_14464a39c(param_1,param_1 + 0x2420,uVar11,uVar15);
  local_9b18 = &local_9b00;
  local_9b10 = &local_9b08;
  if (local_9b1c == 0) {
    memset(&local_9af8,0,0x9a38);
    if ((*param_1 & 1) != 0) {
      fVar24 = 0.0;
    }
    local_9a70 = fVar24;
    local_9a6c = fVar24;
    local_9a68 = fVar24;
    local_9a64 = fVar24;
    wcscpy_s(local_9af4,0x40,L"Clear Reconstructed Depth Interpolated Frame");
    local_9a60 = local_9b08[0x18869];
    (**(code **)(local_9b08 + 0x2a))(local_9b08 + 8,&local_9af8);
    FUN_14464a39c(local_9b08,local_9b08 + 0x47ba,uVar11,uVar15);
    FUN_14464a39c(local_9b08,local_9b08 + 0x6b54,uVar11,uVar15);
    FUN_14464a858(&local_9b18);
    FUN_14464a39c(local_9b08,local_9b08 + 0x8eee,
                  (ulonglong)(longlong)((float)uVar17 / (float)(int)uVar3 + 7.0) >> 3 & 0x1fffffff,
                  (ulonglong)(longlong)((float)uVar2 / (float)(int)uVar3 + 7.0) >> 3 & 0x1fffffff);
    FUN_14464a39c(local_9b08,local_9b08 + 0xb288,uVar11,uVar15);
    param_1 = local_9b08;
  }
  auVar22._0_8_ = FUN_14464a39c(param_1,param_1 + 0xd622,uVar14,uVar10);
  auVar22._8_8_ = extraout_XMM0_Qb;
  uVar17 = local_9b00[4];
  uVar2 = local_9b00[5];
  iVar13 = (uVar17 - 1 >> 6) + 1;
  iVar12 = (uVar2 - 1 >> 6) + 1;
  if (uVar17 <= uVar2) {
    uVar17 = uVar2;
  }
  auVar20._4_12_ = auVar22._4_12_;
  auVar20._0_4_ = (float)uVar17;
  auVar21._0_8_ = log2f(auVar20._0_8_);
  auVar21._8_8_ = extraout_XMM0_Qb_00;
  auVar22 = roundss(auVar21,auVar21,9);
  fVar18 = auVar22._0_4_;
  if (12.0 <= fVar18) {
    fVar18 = 12.0;
  }
  local_9b08[0x7a] = iVar12 * iVar13;
  local_9b08[0x79] = (uint)(longlong)fVar18;
  local_9b08[0x7b] = 0;
  local_9b08[0x7c] = 0;
  (**(code **)(local_9b08 + 0x24))(local_9b08 + 8,local_9b08 + 0x79,0x10,local_9b08 + 0x18828);
  FUN_14464a39c(local_9b08,local_9b08 + 0xf9bc,iVar13,iVar12);
  FUN_14464a39c(local_9b08,local_9b08 + 0x11d56,uVar14,uVar10);
  if ((*local_9b00 & 4) != 0) {
    FUN_14464a858(&local_9b18);
    FUN_14464a39c(local_9b08,local_9b08 + 0x1648a,uVar14,uVar10);
  }
  memset(&local_9af8,0,0x9a38);
  local_9af8 = 1.4013e-45;
  local_9a70 = (float)local_9b08[0x18830];
  local_9a68 = (float)local_9b08[0x1885f];
  (**(code **)(local_9b08 + 0x2a))(local_9b08 + 8);
  lVar16 = 0;
  do {
    memset(&local_9af8,0,0x9a38);
    local_9af8 = 4.2039e-45;
    local_9a70 = (float)local_9b08
                        [(ulonglong)*(uint *)((longlong)&DAT_14be98630 + lVar16) + 0x1882c];
    local_9a64 = 2.8026e-45;
    if ((ulonglong)*(uint *)((longlong)&DAT_14be98630 + lVar16) == 0x20) {
      local_9a64 = 4.48416e-44;
    }
    local_9a60 = 0;
    local_9a6c = 0.0;
    (**(code **)(local_9b08 + 0x2a))(local_9b08 + 8);
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x48);
  (**(code **)(local_9b08 + 0x2c))(local_9b08 + 8,*(undefined8 *)(local_9b00 + 2),local_9b08[0x42]);
  (**(code **)(local_9b08 + 0x18))(local_9b08 + 8,*(undefined8 *)(local_9b00 + 2),local_9b08[0x42]);
  if ((local_90 ^ (ulonglong)auStack_9b48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14981529d ffxFrameInterpolationGetEffectVersion body=6 status=ok
// SIG undefined ffxFrameInterpolationGetEffectVersion(void)

undefined8 ffxFrameInterpolationGetEffectVersion(void)

{
                    /* 0x981529d  585  ffxFrameInterpolationGetEffectVersion */
  return 0x401003;
}



// FUNCTION 1498152a3 ffxFrameInterpolationSetGlobalDebugMessage body=16 status=ok
// SIG undefined ffxFrameInterpolationSetGlobalDebugMessage(void)

undefined8 ffxFrameInterpolationSetGlobalDebugMessage(void)

{
                    /* 0x98152a3  588  ffxFrameInterpolationSetGlobalDebugMessage */
  ffxSetPrintMessageCallback();
  return 0;
}



// FUNCTION 1498152b8 FUN_1498152b8 body=36 status=ok
// SIG undefined FUN_1498152b8(void)

undefined8 FUN_1498152b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498152f8 FUN_1498152f8 body=93 status=ok
// SIG undefined FUN_1498152f8(void)

void FUN_1498152f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be9a610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149815356 FUN_149815356 body=123 status=ok
// SIG undefined FUN_149815356(void)

void FUN_149815356(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14be9a610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498153d2 FUN_1498153d2 body=21 status=ok
// SIG undefined FUN_1498153d2(void)

undefined8 FUN_1498153d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14981545e FUN_14981545e body=120 status=ok
// SIG undefined FUN_14981545e(void)

undefined8 * FUN_14981545e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc28f58) {
    FUN_144b3d300(&DAT_14cc28f58);
    if (DAT_14cc28f58 == -1) {
      FUN_1446ddc76(&DAT_14cc28f50,"Project",1);
      _Init_thread_footer(&DAT_14cc28f58);
    }
  }
  *param_2 = DAT_14cc28f50;
  return param_2;
}



// FUNCTION 1498154d6 FUN_1498154d6 body=120 status=ok
// SIG undefined FUN_1498154d6(void)

undefined8 * FUN_1498154d6(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc28f68) {
    FUN_144b3d300(&DAT_14cc28f68);
    if (DAT_14cc28f68 == -1) {
      FUN_1446ddc76(&DAT_14cc28f60,"Plugins",1);
      _Init_thread_footer(&DAT_14cc28f68);
    }
  }
  *param_2 = DAT_14cc28f60;
  return param_2;
}



// FUNCTION 14981554e FUN_14981554e body=120 status=ok
// SIG undefined FUN_14981554e(void)

undefined8 * FUN_14981554e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc28f78) {
    FUN_144b3d300(&DAT_14cc28f78);
    if (DAT_14cc28f78 == -1) {
      FUN_1446ddc76(&DAT_14cc28f70,&DAT_14bea20ae,1);
      _Init_thread_footer(&DAT_14cc28f78);
    }
  }
  *param_2 = DAT_14cc28f70;
  return param_2;
}



// FUNCTION 1498155c6 FUN_1498155c6 body=36 status=ok
// SIG undefined FUN_1498155c6(void)

undefined8 FUN_1498155c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149815606 FUN_149815606 body=93 status=ok
// SIG undefined FUN_149815606(void)

void FUN_149815606(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea2410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149815664 FUN_149815664 body=123 status=ok
// SIG undefined FUN_149815664(void)

void FUN_149815664(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bea2410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498156e0 FUN_1498156e0 body=21 status=ok
// SIG undefined FUN_1498156e0(void)

undefined8 FUN_1498156e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498156f5 ffxCreateContext body=243 status=ok
// SIG undefined ffxCreateContext(void)

undefined8 ffxCreateContext(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
                    /* 0x98156f5  578  ffxCreateContext */
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = 6;
  if (param_1 != (undefined8 *)0x0 && param_2 != (longlong *)0x0) {
    *param_1 = 0;
    lVar8 = 0;
    plVar5 = param_2;
    do {
      if (*plVar5 == 5) {
        lVar8 = plVar5[2];
        break;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (plVar5 != (longlong *)0x0);
    lVar1 = *param_2;
    lVar6 = 0;
    bVar2 = true;
    do {
      bVar7 = bVar2;
      plVar5 = (longlong *)(&PTR_PTR_14bea2570)[lVar6];
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if ((lVar6 == lVar8) ||
         ((lVar8 == 0 && (cVar3 = (**(code **)(*plVar5 + 8))(plVar5,lVar1), cVar3 != '\0')))) {
        local_50 = param_3;
        uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1,param_2);
        goto LAB_14981572c;
      }
      lVar6 = 1;
      bVar2 = false;
    } while (bVar7);
    uVar4 = 4;
  }
LAB_14981572c:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1498157e9 ffxDestroyContext body=85 status=ok
// SIG undefined ffxDestroyContext(void)

undefined8 ffxDestroyContext(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
                    /* 0x98157e9  579  ffxDestroyContext */
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 6;
  }
  else {
    local_10 = param_2;
    uVar1 = (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981583f ffxConfigure body=44 status=ok
// SIG undefined ffxConfigure(void)

undefined8 ffxConfigure(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
                    /* 0x981583f  577  ffxConfigure */
  if (param_1 == (undefined8 *)0x0 || param_2 == 0) {
    return 6;
  }
                    /* WARNING: Could not recover jumptable at 0x000149815868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)*param_1 + 0x30))();
  return uVar1;
}



// FUNCTION 14981586b ffxQuery body=420 status=ok
// SIG undefined ffxQuery(void)

undefined8 ffxQuery(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  
                    /* 0x981586b  613  ffxQuery */
  if (param_2 == (longlong *)0x0) {
    uVar9 = 6;
  }
  else {
    lVar3 = *param_2;
    if (param_1 == (undefined8 *)0x0) {
      if (lVar3 == 4) {
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          return 0;
        }
        if ((*(longlong *)param_2[4] == 0) || (param_2[5] == 0 && param_2[6] == 0)) {
          lVar3 = param_2[2];
          bVar8 = true;
          lVar5 = 0;
          lVar4 = 0;
          do {
            bVar2 = (**(code **)(*(longlong *)(&PTR_PTR_14bea2570)[lVar4] + 8))
                              ((&PTR_PTR_14bea2570)[lVar4],lVar3);
            lVar5 = (ulonglong)bVar2 + lVar5;
            if (!bVar8) break;
            lVar4 = 1;
            bVar8 = false;
          } while (lVar5 != -1);
        }
        else {
          lVar5 = FUN_149815a0f(param_2[2]);
        }
        *(longlong *)param_2[4] = lVar5;
        return 0;
      }
      plVar6 = param_2;
      if (lVar3 != 5) {
        lVar5 = 0;
        do {
          plVar6 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)0x0) goto LAB_1498158f0;
        } while (*plVar6 != 5);
      }
      lVar5 = plVar6[2];
LAB_1498158f0:
      lVar4 = 0;
      bVar8 = true;
      do {
        bVar7 = bVar8;
        plVar6 = (longlong *)(&PTR_PTR_14bea2570)[lVar4];
        lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((lVar4 == lVar5) ||
           ((lVar5 == 0 && (cVar1 = (**(code **)(*plVar6 + 8))(plVar6,lVar3), cVar1 != '\0')))) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x38);
          param_1 = (undefined8 *)0x0;
          goto LAB_149815942;
        }
        lVar4 = 1;
        bVar8 = false;
      } while (bVar7);
    }
    else {
      plVar6 = *(longlong **)*param_1;
      if (lVar3 != 6) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x38);
LAB_149815942:
                    /* WARNING: Could not recover jumptable at 0x000149815951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*UNRECOVERED_JUMPTABLE)(plVar6,param_1,param_2);
        return uVar9;
      }
      if (plVar6 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        param_2[2] = lVar3;
        lVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
        param_2[3] = lVar3;
        return 0;
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
    uVar9 = 4;
  }
  return uVar9;
}



// FUNCTION 149815a0f FUN_149815a0f body=182 status=ok
// SIG undefined FUN_149815a0f(void)

ulonglong FUN_149815a0f(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  bVar3 = 1;
  lVar6 = 0;
  uVar7 = 0;
  do {
    plVar1 = (longlong *)(&PTR_PTR_14bea2570)[lVar6];
    cVar4 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
    uVar8 = uVar7;
    if (cVar4 != '\0') {
      if (param_3 != 0) {
        uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
        *(undefined8 *)(param_3 + uVar7 * 8) = uVar5;
      }
      uVar8 = uVar7 + 1;
      if (param_4 != 0) {
        uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
        *(undefined8 *)(param_4 + uVar7 * 8) = uVar5;
      }
    }
    lVar6 = 1;
    bVar2 = (bool)(bVar3 & uVar8 < param_2);
    bVar3 = 0;
    uVar7 = uVar8;
  } while (bVar2);
  return uVar8;
}



// FUNCTION 149815ac5 ffxDispatch body=44 status=ok
// SIG undefined ffxDispatch(void)

undefined8 ffxDispatch(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
                    /* 0x9815ac5  580  ffxDispatch */
  if (param_1 == (undefined8 *)0x0 || param_2 == 0) {
    return 6;
  }
                    /* WARNING: Could not recover jumptable at 0x000149815aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)*param_1 + 0x40))();
  return uVar1;
}



// FUNCTION 149815af2 FUN_149815af2 body=16 status=ok
// SIG undefined FUN_149815af2(void)

bool FUN_149815af2(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff0000) == 0x20000;
}



// FUNCTION 149815b02 FUN_149815b02 body=11 status=ok
// SIG undefined FUN_149815b02(void)

undefined8 FUN_149815b02(void)

{
  return 0xf600000000401003;
}



// FUNCTION 149815b16 FUN_149815b16 body=1167 status=ok
// SIG undefined FUN_149815b16(void)

undefined8 FUN_149815b16(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  uint local_494;
  longlong local_490;
  undefined8 *local_488;
  undefined8 local_480 [5];
  uint *local_458;
  undefined8 local_430 [5];
  uint *local_408;
  undefined8 local_3e0 [5];
  uint *local_3b8;
  undefined1 local_390 [80];
  undefined8 local_340 [10];
  undefined8 local_2f0 [10];
  undefined8 local_2a0 [9];
  undefined8 local_258;
  undefined8 uStack_250;
  uint local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined1 local_228 [480];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  uVar7 = 2;
  if ((param_3 != (longlong *)0x0) && (*param_3 == 0x20001)) {
    puVar5 = (undefined8 *)*param_4;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = malloc(0x100560);
    }
    else {
      puVar5 = (undefined8 *)(*(code *)puVar5[1])(*puVar5);
    }
    memset(puVar5,0,0x100560);
    uVar7 = 5;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_1;
      puVar1 = puVar5 + 0x1e;
      local_248 = local_248 & 0xffffff00;
      iVar4 = FUN_149817a40(param_3,&local_248,puVar1,param_4);
      uVar7 = 1;
      if ((iVar4 == 0) && ((char)local_248 != '\0')) {
        puVar8 = puVar5 + 1;
        local_248 = local_248 & 0xffffff00;
        iVar4 = FUN_149817a40(param_3,&local_248,puVar8,param_4);
        if ((iVar4 == 0) && ((char)local_248 != '\0')) {
          *(byte *)(puVar5 + 0x20045) = *(byte *)(param_3 + 2) & 1;
          iVar4 = (*(code *)puVar5[0x20])(puVar1,0x80,0,puVar5 + 0x20044);
          uVar7 = 3;
          if (iVar4 == 0) {
            local_258 = 0;
            uStack_250 = 0;
            memcpy(local_340,puVar8,0xe8);
            local_258 = CONCAT44(*(undefined4 *)((longlong)param_3 + 0x14),(undefined4)local_258);
            uStack_250 = CONCAT44(uStack_250._4_4_,(int)param_3[3]);
            iVar4 = ffxOpticalflowContextCreate(puVar5 + 0x3b,local_340);
            if (iVar4 == 0) {
              local_230 = 0;
              memcpy(local_228,puVar8,0xe8);
              uVar2 = *(uint *)(param_3 + 2);
              local_248 = (((uVar2 & 1) << 6 | uVar2 >> 2 & 8) + (uVar2 & 6) * 8 | uVar2 >> 3 & 3) +
                          (uVar2 & 0x40) * 2;
              local_244 = *(undefined4 *)((longlong)param_3 + 0x1c);
              local_240 = (undefined4)param_3[4];
              local_23c = *(undefined4 *)((longlong)param_3 + 0x14);
              local_238 = (undefined4)param_3[3];
              local_234 = *(undefined4 *)((longlong)param_3 + 0x24);
              local_230 = CONCAT44(local_230._4_4_,local_234);
              do {
                if (*param_3 == 0x20009) {
                  local_230 = CONCAT44(local_230._4_4_,(int)param_3[2]);
                }
                param_3 = (longlong *)param_3[1];
              } while (param_3 != (longlong *)0x0);
              iVar4 = ffxFrameInterpolationContextCreate(puVar5 + 0x1003b);
              if (iVar4 == 0) {
                memset(local_3e0,0,0xa0);
                iVar4 = ffxOpticalflowGetSharedResourceDescriptions(puVar5 + 0x3b,local_3e0);
                if (iVar4 == 0) {
                  iVar4 = (*(code *)puVar5[0x23])
                                    (puVar1,local_3e0,*(undefined4 *)(puVar5 + 0x20044),
                                     (longlong)puVar5 + 0x1001dc);
                  if (iVar4 == 0) {
                    iVar4 = (*(code *)puVar5[0x23])
                                      (puVar1,local_390,*(undefined4 *)(puVar5 + 0x20044),
                                       puVar5 + 0x2003c);
                    if (iVar4 == 0) {
                      memset(local_340,0,0xf0);
                      iVar4 = ffxFrameInterpolationGetSharedResourceDescriptions(puVar5 + 0x1003b);
                      if (iVar4 == 0) {
                        *(undefined4 *)((longlong)puVar5 + 0x10021c) = 0;
                        local_490 = 0;
                        memset(&local_248,0,0x200);
                        local_488 = puVar5 + 0x2003b;
                        local_494 = (uint)CONCAT71((int7)((ulonglong)local_488 >> 8),1);
                        do {
                          lVar3 = local_490;
                          puVar8 = local_2f0;
                          puVar9 = local_3e0;
                          for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                            *puVar9 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar9 = puVar9 + 1;
                          }
                          local_4a8 = (undefined4)local_490;
                          FUN_149815fa6(&local_248);
                          local_3b8 = &local_248;
                          iVar4 = (*(code *)puVar5[0x23])
                                            (puVar1,local_3e0,*(undefined4 *)(puVar5 + 0x20044),
                                             (longlong)local_488 + lVar3 * 0xc + 0x14);
                          if (iVar4 != 0) goto LAB_149815b8a;
                          puVar8 = local_2a0;
                          puVar9 = local_430;
                          for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                            *puVar9 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar9 = puVar9 + 1;
                          }
                          local_4a8 = (undefined4)local_490;
                          FUN_149815fa6(&local_248);
                          local_408 = &local_248;
                          iVar4 = (*(code *)puVar5[0x23])
                                            (puVar1,local_430,*(undefined4 *)(puVar5 + 0x20044),
                                             (longlong)local_488 + lVar3 * 0xc + 0x18);
                          if (iVar4 != 0) goto LAB_149815b8a;
                          puVar8 = local_340;
                          puVar9 = local_480;
                          for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
                            *puVar9 = *puVar8;
                            puVar8 = puVar8 + 1;
                            puVar9 = puVar9 + 1;
                          }
                          local_4a8 = (undefined4)local_490;
                          FUN_149815fa6(&local_248);
                          local_458 = &local_248;
                          iVar4 = (*(code *)puVar5[0x23])
                                            (puVar1,local_480,*(undefined4 *)(puVar5 + 0x20044),
                                             (longlong)local_488 + lVar3 * 0xc + 0x1c);
                          if (iVar4 != 0) goto LAB_149815b8a;
                          local_490 = 1;
                          uVar2 = local_494 & 1;
                          local_494 = 0;
                        } while (uVar2 != 0);
                        *param_2 = puVar5;
                        uVar7 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_149815b8a:
  if ((local_48 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149815fa6 FUN_149815fa6 body=110 status=ok
// SIG undefined FUN_149815fa6(void)

void FUN_149815fa6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res20 = param_4;
  local_20 = &local_res20;
  puVar1 = (undefined8 *)FUN_144737586();
  local_38 = 0;
  local_30 = &local_res20;
  __stdio_common_vswprintf(*puVar1,param_1,0xff,L"%s%d");
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149816016 FUN_149816016 body=247 status=ok
// SIG undefined FUN_149816016(void)

undefined8 FUN_149816016(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Memory;
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 6;
  if ((param_2 != (undefined8 *)0x0) && (_Memory = (void *)*param_2, _Memory != (void *)0x0)) {
    lVar4 = 0x40076;
    uVar3 = 3;
    do {
      iVar2 = (**(code **)((longlong)_Memory + 0x148))
                        ((longlong)_Memory + 0xf0,*(undefined4 *)((longlong)_Memory + lVar4 * 4),
                         *(undefined4 *)((longlong)_Memory + 0x100220));
      if (iVar2 != 0) {
        return 3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40087);
    iVar2 = ffxFrameInterpolationContextDestroy((longlong)_Memory + 0x801d8);
    if (((iVar2 == 0) &&
        (iVar2 = ffxOpticalflowContextDestroy((longlong)_Memory + 0x1d8), iVar2 == 0)) &&
       (iVar2 = (**(code **)((longlong)_Memory + 0x110))
                          ((longlong)_Memory + 0xf0,*(undefined4 *)((longlong)_Memory + 0x100220)),
       iVar2 == 0)) {
      puVar1 = (undefined8 *)*param_3;
      if (puVar1 == (undefined8 *)0x0) {
        free(*(void **)((longlong)_Memory + 0xd8));
      }
      else {
        (*(code *)puVar1[2])(*puVar1);
      }
      puVar1 = (undefined8 *)*param_3;
      if (puVar1 == (undefined8 *)0x0) {
        free(*(void **)((longlong)_Memory + 0x1c0));
      }
      else {
        (*(code *)puVar1[2])(*puVar1);
      }
      puVar1 = (undefined8 *)*param_3;
      if (puVar1 == (undefined8 *)0x0) {
        free(_Memory);
      }
      else {
        (*(code *)puVar1[2])(*puVar1,_Memory);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14981610e FUN_14981610e body=912 status=ok
// SIG undefined FUN_14981610e(void)

undefined8 FUN_14981610e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_268 [32];
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  longlong local_140;
  code *local_138;
  longlong lStack_130;
  code *local_128;
  longlong lStack_120;
  undefined1 local_118;
  undefined1 local_117;
  longlong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  uint local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uVar8 = 6;
  if ((param_2 == (longlong *)0x0) || (lVar2 = *param_2, param_3 == (longlong *)0x0 || lVar2 == 0))
  goto LAB_14981614f;
  if (*param_3 == 1) {
    iVar7 = ffxFrameInterpolationSetGlobalDebugMessage(param_3[2],(int)param_3[3]);
    uVar8 = 3;
    if (iVar7 != 0) goto LAB_14981614f;
    *(longlong *)(lVar2 + 0x100550) = param_3[2];
    *(int *)(lVar2 + 0x100558) = (int)param_3[3];
  }
  else {
    if (*param_3 != 0x20002) goto LAB_14981614f;
    memset(&local_118,0,0xe0);
    local_117 = *(undefined1 *)((longlong)param_3 + 0x39);
    uVar1 = *(uint *)(param_3 + 0xe);
    lVar9 = (ulonglong)((*(uint *)(param_3 + 0x11) & 1) << 5) + lVar2;
    lVar3 = *(longlong *)(lVar9 + 0x100508);
    bVar11 = true;
    bVar10 = true;
    if (lVar3 == param_3[3]) {
      if (lVar3 == 0) {
        bVar10 = false;
      }
      else {
        bVar10 = *(longlong *)(lVar9 + 0x100510) != param_3[4];
      }
    }
    if (*(longlong *)(lVar9 + 0x100518) == param_3[5]) {
      if (*(longlong *)(lVar9 + 0x100518) == 0) {
        bVar11 = false;
      }
      else {
        bVar11 = *(longlong *)(lVar9 + 0x100520) != param_3[6];
      }
    }
    *(longlong *)(lVar9 + 0x100508) = param_3[3];
    *(longlong *)(lVar9 + 0x100518) = param_3[5];
    *(longlong *)(lVar9 + 0x100510) = param_3[4];
    *(longlong *)(lVar9 + 0x100520) = param_3[6];
    local_128 = (code *)0x0;
    lStack_120 = 0;
    if (param_3[5] != 0) {
      local_128 = FUN_14464ef06;
      lStack_120 = lVar2;
    }
    local_138 = (code *)0x0;
    lStack_130 = 0;
    if (param_3[3] != 0) {
      local_138 = FUN_14464f120;
      lStack_130 = lVar2;
    }
    local_40 = *(byte *)(param_3 + 0xe) >> 4 & 1;
    lVar3 = param_3[7];
    local_e4 = 0;
    uStack_dc = 0;
    local_d4 = 0;
    uStack_cc = 0;
    local_c4 = 0;
    uStack_bc = 0;
    local_b4 = 0;
    uStack_ac = 0;
    local_a4 = 0;
    uStack_9c = 0;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = 0;
    uStack_6c = 0;
    local_110 = param_3[8];
    local_e8 = (undefined4)param_3[0xd];
    local_108 = param_3[9];
    lStack_100 = param_3[10];
    local_f8 = param_3[0xb];
    lStack_f0 = param_3[0xc];
    local_64 = 0;
    local_5c = *(undefined1 *)((longlong)param_3 + 0x74);
    local_140 = param_3[2];
    local_54 = *(undefined4 *)((longlong)param_3 + 0x7c);
    local_58 = (undefined4)param_3[0xf];
    local_50 = (undefined4)param_3[0x10];
    local_4c = *(undefined4 *)((longlong)param_3 + 0x84);
    local_48 = param_3[0x11];
    *(uint *)(lVar2 + 0x100394) = uVar1;
    local_118 = (char)lVar3;
    local_60 = uVar1;
    memcpy((void *)(lVar2 + 0x100230),&local_110,0xb0);
    if ((uVar1 & 4) != 0) {
      local_5c = 1;
    }
    *(char *)(lVar2 + 0x100390) = (char)lVar3;
    if ((uVar1 & 8) == 0) {
      if ((*(longlong *)(lVar2 + 0x100548) + 1 == param_3[0x11]) || (!bVar10 && !bVar11)) {
LAB_149816393:
        iVar7 = (**(code **)(lVar2 + 0x1b0))(&local_140);
        if (iVar7 == 0) {
          *(longlong *)(lVar2 + 0x100548) = param_3[0x11];
          goto LAB_14981642c;
        }
      }
      else {
        memcpy(local_248,&local_140,0x108);
        local_240 = 0;
        uStack_238 = 0;
        local_230 = 0;
        uStack_228 = 0;
        iVar7 = (**(code **)(lVar2 + 0x1b0))(local_248);
        if (iVar7 == 0) goto LAB_149816393;
      }
      uVar8 = 3;
      goto LAB_14981614f;
    }
LAB_14981642c:
    memset((void *)(lVar2 + 0x1002e0),0,0xb0);
    do {
      if (((undefined1 *)*param_3 == &DAT_00020008) && (param_3[2] != 0)) {
        lVar6 = param_3[7];
        lVar3 = param_3[3];
        lVar9 = param_3[4];
        lVar4 = param_3[5];
        lVar5 = param_3[6];
        *(longlong *)(lVar2 + 0x1002e0) = param_3[2];
        *(longlong *)(lVar2 + 0x1002e8) = lVar3;
        *(longlong *)(lVar2 + 0x1002f0) = lVar9;
        *(longlong *)(lVar2 + 0x1002f8) = lVar4;
        *(longlong *)(lVar2 + 0x100300) = lVar5;
        *(int *)(lVar2 + 0x100308) = (int)lVar6;
        memset((void *)(lVar2 + 0x10030c),0,0x84);
      }
      param_3 = (longlong *)param_3[1];
    } while (param_3 != (longlong *)0x0);
  }
  uVar8 = 0;
LAB_14981614f:
  if ((local_38 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498164a0 FUN_1498164a0 body=227 status=ok
// SIG undefined FUN_1498164a0(void)

undefined8 FUN_1498164a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 6;
  if (((param_2 != (longlong *)0x0 && param_3 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0))
     && (uVar3 = 2, *param_3 == 0x20007)) {
    iVar2 = ffxFrameInterpolationContextGetGpuMemoryUsage(lVar1 + 0x801d8,&local_30);
    uVar3 = 3;
    if (iVar2 == 0) {
      iVar2 = ffxOpticalflowContextGetGpuMemoryUsage(lVar1 + 0x1d8,&local_40);
      if (iVar2 == 0) {
        iVar2 = ffxSharedContextGetGpuMemoryUsage(lVar1 + 0xf0,&local_50);
        if (iVar2 == 0) {
          *(longlong *)param_3[2] = local_40 + local_30 + local_50;
          *(longlong *)(param_3[2] + 8) = local_38 + local_28 + local_48;
          uVar3 = 0;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149816584 FUN_149816584 body=2243 status=ok
// SIG undefined FUN_149816584(void)

char FUN_149816584(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_7d8 [40];
  ulonglong local_7b0;
  longlong local_7a8;
  ulonglong local_7a0;
  longlong lStack_798;
  longlong local_790;
  undefined8 uStack_788;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined8 uStack_754;
  undefined8 uStack_74c;
  undefined8 local_744;
  undefined8 uStack_73c;
  undefined8 local_734;
  undefined8 uStack_72c;
  undefined8 local_724;
  undefined8 uStack_71c;
  undefined8 local_714;
  undefined8 uStack_70c;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined8 local_6f4;
  undefined8 uStack_6ec;
  undefined8 local_6e4;
  undefined8 uStack_6dc;
  undefined8 local_6d4;
  undefined8 uStack_6cc;
  longlong local_6c0;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined8 local_694;
  undefined8 uStack_68c;
  undefined8 local_684;
  undefined8 uStack_67c;
  undefined8 local_674;
  undefined8 uStack_66c;
  undefined8 local_664;
  undefined8 uStack_65c;
  undefined8 local_654;
  undefined8 uStack_64c;
  undefined8 local_644;
  undefined8 uStack_63c;
  undefined4 local_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined8 local_624;
  undefined8 uStack_61c;
  undefined4 uStack_614;
  longlong local_610;
  undefined4 local_608;
  undefined8 local_604;
  undefined8 uStack_5fc;
  undefined8 local_5f4;
  undefined8 uStack_5ec;
  undefined8 local_5e4;
  undefined8 uStack_5dc;
  undefined8 local_5d4;
  undefined8 uStack_5cc;
  undefined8 local_5c4;
  undefined8 uStack_5bc;
  undefined8 local_5b4;
  undefined8 uStack_5ac;
  undefined8 local_5a4;
  undefined8 uStack_59c;
  longlong local_594;
  undefined8 uStack_58c;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  int local_578;
  int local_574;
  undefined1 local_570 [24];
  undefined1 local_558 [152];
  undefined1 local_4c0 [24];
  undefined1 local_4a8 [160];
  float local_408;
  float local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  longlong local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  longlong local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 local_3cc;
  undefined1 local_320 [176];
  undefined1 local_270 [176];
  undefined1 local_1c0 [176];
  undefined1 local_110 [176];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  cVar4 = '\x06';
  if ((param_2 != (longlong *)0x0) && (lVar3 = *param_2, lVar3 != 0)) {
    if (param_3 == (longlong *)0x0 || *param_3 != 0x20003) {
      if (*param_3 != 0x20004 || param_3 == (longlong *)0x0) goto LAB_1498168ba;
      memcpy((void *)(lVar3 + (ulonglong)((uint)param_3[2] & 1) * 0xb8 + 0x100398),param_3,0xb8);
      uVar7 = ~*(uint *)(lVar3 + 0x10021c) & 1;
      *(uint *)(lVar3 + 0x10021c) = uVar7;
      memset(&local_7b0,0,1000);
      local_7b0 = CONCAT44(local_7b0._4_4_,(int)param_3[3]);
      local_7a8 = param_3[4];
      local_7a0 = param_3[5];
      lStack_798 = param_3[6];
      local_790 = param_3[7];
      uStack_788 = CONCAT44((int)param_3[9],(int)param_3[8]);
      local_780 = *(undefined4 *)((longlong)param_3 + 0x4c);
      local_77c = *(undefined4 *)((longlong)param_3 + 0x54);
      uStack_778 = (undefined4)param_3[10];
      local_6d4 = 0;
      uStack_6cc = 0;
      local_6e4 = 0;
      uStack_6dc = 0;
      local_6f4 = 0;
      uStack_6ec = 0;
      local_704 = 0;
      uStack_6fc = 0;
      local_714 = 0;
      uStack_70c = 0;
      local_724 = 0;
      uStack_71c = 0;
      local_734 = 0;
      uStack_72c = 0;
      local_744 = 0;
      uStack_73c = 0;
      uStack_758 = (undefined4)param_3[0xe];
      uStack_754 = *(undefined8 *)((longlong)param_3 + 0x74);
      uStack_74c = *(undefined8 *)((longlong)param_3 + 0x7c);
      uStack_770 = (undefined4)param_3[0xb];
      uStack_76c = (undefined4)((ulonglong)param_3[0xb] >> 0x20);
      uStack_768 = (undefined4)param_3[0xc];
      uStack_764 = (undefined4)((ulonglong)param_3[0xc] >> 0x20);
      uStack_760 = (undefined4)param_3[0xd];
      uStack_75c = (undefined4)((ulonglong)param_3[0xd] >> 0x20);
      local_694 = 0;
      uStack_68c = 0;
      local_684 = 0;
      uStack_67c = 0;
      local_674 = 0;
      uStack_66c = 0;
      local_664 = 0;
      uStack_65c = 0;
      local_654 = 0;
      uStack_64c = 0;
      local_644 = 0;
      uStack_63c = 0;
      local_634 = 0;
      uStack_630 = 0;
      uStack_62c = 0;
      uStack_628 = 0;
      local_624 = 0;
      uStack_61c = 0;
      local_6c0 = param_3[0x11];
      local_698 = (undefined4)param_3[0x16];
      local_6b8 = (undefined4)param_3[0x12];
      uStack_6b4 = *(undefined4 *)((longlong)param_3 + 0x94);
      uStack_6b0 = (undefined4)param_3[0x13];
      uStack_6ac = *(undefined4 *)((longlong)param_3 + 0x9c);
      local_6a8 = (undefined4)param_3[0x14];
      uStack_6a4 = *(undefined4 *)((longlong)param_3 + 0xa4);
      uStack_6a0 = (undefined4)param_3[0x15];
      uStack_69c = *(undefined4 *)((longlong)param_3 + 0xac);
      local_610 = param_3[2];
      lVar1 = lVar3 + 0xf0;
      (**(code **)(lVar3 + 0x128))
                (&local_608,lVar1,*(undefined4 *)((ulonglong)(uVar7 * 0xc) + 0x1001ec + lVar3));
      (**(code **)(lVar3 + 0x128))
                (local_110,lVar1,
                 *(undefined4 *)
                  (lVar3 + 0x1001d8 + (ulonglong)(*(int *)(lVar3 + 0x10021c) * 3 + 6) * 4));
      memcpy(local_558,local_110,0xb0);
      (**(code **)(lVar3 + 0x128))
                (local_110,lVar1,
                 *(undefined4 *)
                  (lVar3 + 0x1001d8 + (ulonglong)(*(int *)(lVar3 + 0x10021c) * 3 + 7) * 4));
      memcpy(local_4a8,local_110,0xb0);
      do {
        if (*param_3 == 0x2000a) {
          local_3f0 = (undefined4)param_3[3];
          local_3f8 = param_3[2];
          local_3e4 = *(undefined4 *)((longlong)param_3 + 0x24);
          local_3ec = *(undefined8 *)((longlong)param_3 + 0x1c);
          local_3d8 = (undefined4)param_3[6];
          local_3e0 = param_3[5];
          local_3cc = *(undefined4 *)((longlong)param_3 + 0x3c);
          uStack_3d4 = (undefined4)*(undefined8 *)((longlong)param_3 + 0x34);
          uStack_3d0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x34) >> 0x20);
        }
        param_3 = (longlong *)param_3[1];
      } while (param_3 != (longlong *)0x0);
      iVar5 = ffxFrameInterpolationPrepare(lVar3 + 0x801d8,&local_7b0);
    }
    else {
      lVar1 = param_3[0x26];
      memset((void *)((longlong)&uStack_6fc + 4),0,0x168);
      local_7b0 = param_3[2];
      uStack_70c = 0;
      local_704 = 0;
      uStack_71c = 0;
      local_714 = 0;
      uStack_72c = 0;
      local_724 = 0;
      uStack_73c = 0;
      local_734 = 0;
      uStack_74c = 0;
      local_744 = 0;
      uStack_75c = 0;
      uStack_758 = 0;
      uStack_754 = 0;
      uStack_76c = 0;
      uStack_768 = 0;
      uStack_764 = 0;
      uStack_760 = 0;
      local_77c = 0;
      uStack_778 = 0;
      uStack_774 = 0;
      uStack_770 = 0;
      local_7a8 = param_3[3];
      local_780 = (undefined4)param_3[8];
      local_7a0 = param_3[4];
      lStack_798 = param_3[5];
      local_790 = param_3[6];
      uStack_788 = param_3[7];
      uStack_6fc = uStack_6fc & 0xffffffff00000000;
      if (*(longlong *)(lVar3 + 0x100230) != 0) {
        memcpy(&local_7a8,(void *)(lVar3 + 0x100230),0xb0);
      }
      uStack_59c._0_5_ = CONCAT14(*(undefined1 *)((longlong)param_3 + 0x10c),(undefined4)uStack_59c)
      ;
      local_594 = param_3[0x22];
      uStack_58c = CONCAT44(uStack_58c._4_4_,(int)param_3[0x23]);
      lVar2 = lVar3 + 0xf0;
      (**(code **)(lVar3 + 0x128))
                ((void *)((longlong)&uStack_6fc + 4),lVar2,*(undefined4 *)(lVar3 + 0x1001dc));
      (**(code **)(lVar3 + 0x128))(local_110,lVar2,*(undefined4 *)(lVar3 + 0x1001e0));
      memcpy((void *)((longlong)&uStack_64c + 4),local_110,0xb0);
      iVar5 = ffxOpticalflowContextDispatch(lVar3 + 0x1d8);
      cVar4 = '\x03';
      if (iVar5 != 0) goto LAB_1498168ba;
      lVar1 = lVar3 + (ulonglong)((uint)lVar1 & 1) * 0xb8;
      uVar6 = 0;
      memset(&local_7b0,0,0x6a0);
      local_7a8 = param_3[2];
      local_780 = (undefined4)param_3[5];
      local_77c = *(undefined4 *)((longlong)param_3 + 0x2c);
      local_7a0 = param_3[5];
      local_6f4 = 0;
      uStack_6ec = 0;
      local_704 = 0;
      uStack_6fc = 0;
      local_714 = 0;
      uStack_70c = 0;
      local_724 = 0;
      uStack_71c = 0;
      local_734 = 0;
      uStack_72c = 0;
      local_744 = 0;
      uStack_73c = 0;
      uStack_754 = 0;
      uStack_74c = 0;
      uStack_764 = 0;
      uStack_760 = 0;
      uStack_75c = 0;
      uStack_758 = 0;
      uStack_768 = (undefined4)param_3[8];
      local_790 = param_3[3];
      uStack_788 = param_3[4];
      uStack_778 = (undefined4)param_3[6];
      uStack_774 = (undefined4)((ulonglong)param_3[6] >> 0x20);
      uStack_770 = (undefined4)param_3[7];
      uStack_76c = (undefined4)((ulonglong)param_3[7] >> 0x20);
      memcpy((void *)((longlong)&local_6e4 + 4),(void *)(lVar3 + 0x100230),0xb0);
      local_3ec._0_5_ = CONCAT14(*(undefined1 *)((longlong)param_3 + 0x10c),(undefined4)local_3ec);
      lStack_798 = *(longlong *)(lVar1 + 0x1003c0);
      local_594 = 0;
      uStack_58c = 0;
      local_5a4 = 0;
      uStack_59c = 0;
      local_5b4 = 0;
      uStack_5ac = 0;
      local_5c4 = 0;
      uStack_5bc = 0;
      local_5d4 = 0;
      uStack_5cc = 0;
      local_5e4 = 0;
      uStack_5dc = 0;
      local_5f4 = 0;
      uStack_5ec = 0;
      local_604 = 0;
      uStack_5fc = 0;
      local_608 = (undefined4)param_3[0xe];
      uStack_628 = (undefined4)param_3[10];
      local_624 = *(undefined8 *)((longlong)param_3 + 0x54);
      uStack_61c = *(undefined8 *)((longlong)param_3 + 0x5c);
      uStack_614 = *(undefined4 *)((longlong)param_3 + 100);
      local_610 = param_3[0xd];
      uStack_630 = (undefined4)param_3[9];
      uStack_62c = (undefined4)((ulonglong)param_3[9] >> 0x20);
      local_584 = 0;
      (**(code **)(lVar3 + 0x128))(local_110,lVar2,*(undefined4 *)(lVar3 + 0x1001dc));
      memcpy(local_570,local_110,0xb0);
      (**(code **)(lVar3 + 0x128))(local_110,lVar2,*(undefined4 *)(lVar3 + 0x1001e0));
      memcpy(local_4c0,local_110,0xb0);
      local_400 = 8;
      local_408 = 1.0 / (float)(local_7a0 & 0xffffffff);
      local_404 = 1.0 / (float)(local_7a0 >> 0x20);
      local_3ec = CONCAT44(local_3ec._4_4_,*(undefined4 *)(lVar1 + 0x1003d8));
      local_3fc = *(undefined4 *)(lVar1 + 0x1003e0);
      local_3f0 = *(undefined4 *)(lVar1 + 0x1003ec);
      local_3f8 = *(longlong *)(lVar1 + 0x1003e4);
      (**(code **)(lVar3 + 0x128))
                (local_110,lVar2,
                 *(undefined4 *)
                  (lVar3 + 0x1001d8 + (ulonglong)(*(int *)(lVar3 + 0x10021c) * 3 + 5) * 4));
      memcpy(&uStack_3d0,local_110,0xb0);
      (**(code **)(lVar3 + 0x128))
                (local_110,lVar2,
                 *(undefined4 *)
                  (lVar3 + 0x1001d8 + (ulonglong)(*(int *)(lVar3 + 0x10021c) * 3 + 6) * 4));
      memcpy(local_320,local_110,0xb0);
      (**(code **)(lVar3 + 0x128))
                (local_110,lVar2,
                 *(undefined4 *)
                  (lVar3 + 0x1001d8 + (ulonglong)(*(int *)(lVar3 + 0x10021c) * 3 + 7) * 4));
      memcpy(local_270,local_110,0xb0);
      local_578 = *(int *)((longlong)param_3 + 0x124);
      local_574 = (int)param_3[0x25];
      if (local_574 == 0 && local_578 == 0) {
        local_578 = (int)param_3[5];
        local_574 = *(int *)((longlong)param_3 + 0x2c);
        local_57c = 0;
      }
      else {
        uVar6 = *(undefined4 *)((longlong)param_3 + 0x11c);
        local_57c = (undefined4)param_3[0x24];
      }
      uVar7 = *(uint *)(lVar3 + 0x100394);
      if ((uVar7 & 1) != 0) {
        local_7b0 = local_7b0 | 1;
      }
      if ((uVar7 & 2) != 0) {
        local_7b0 = local_7b0 | 2;
      }
      if ((uVar7 & 4) != 0) {
        local_7b0 = local_7b0 | 4;
      }
      if ((uVar7 & 0x20) != 0) {
        local_7b0 = local_7b0 | 0x10;
      }
      if ((uVar7 & 0x40) != 0) {
        local_7b0 = local_7b0 | 0x20;
      }
      local_3e4 = (undefined4)param_3[0x22];
      local_3e0 = *(longlong *)((longlong)param_3 + 0x114);
      local_3d8 = (undefined4)param_3[0x26];
      uStack_3d4 = (undefined4)((ulonglong)param_3[0x26] >> 0x20);
      local_580 = uVar6;
      if (*(longlong *)(lVar3 + 0x1002e0) != 0) {
        memcpy(local_1c0,(void *)(lVar3 + 0x1002e0),0xb0);
      }
      iVar5 = ffxFrameInterpolationDispatch(lVar3 + 0x801d8,&local_7b0);
    }
    cVar4 = (iVar5 != 0) * '\x03';
  }
LAB_1498168ba:
  if ((local_60 ^ (ulonglong)auStack_7d8) == DAT_14c707940) {
    return cVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149816e48 FUN_149816e48 body=16 status=ok
// SIG undefined FUN_149816e48(void)

bool FUN_149816e48(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffff0000) == 0x10000;
}



// FUNCTION 149816e58 FUN_149816e58 body=11 status=ok
// SIG undefined FUN_149816e58(void)

undefined8 FUN_149816e58(void)

{
  return 0xf5a5ca1e00c01004;
}



// FUNCTION 149816e64 FUN_149816e64 body=8 status=ok
// SIG undefined FUN_149816e64(void)

char * FUN_149816e64(void)

{
  return "3.1.4";
}



// FUNCTION 149816e6c FUN_149816e6c body=613 status=ok
// SIG undefined FUN_149816e6c(void)

undefined8 FUN_149816e6c(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *_Src;
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_348 [40];
  undefined8 local_320 [5];
  undefined8 local_2f8;
  undefined8 local_2d0 [10];
  undefined8 local_280 [5];
  undefined8 local_258;
  undefined8 local_230 [5];
  undefined8 local_208;
  undefined8 local_1e0 [5];
  undefined8 local_1b8;
  undefined8 local_190 [5];
  undefined8 local_168;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [232];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_348;
  uVar4 = 6;
  if ((param_3 != (longlong *)0x0 && param_2 != (undefined8 *)0x0) &&
     (uVar4 = 2, *param_3 == 0x10000)) {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = malloc(0x80148);
    }
    else {
      puVar2 = (undefined8 *)(*(code *)puVar2[1])(*puVar2);
    }
    memset(puVar2,0,0x80148);
    uVar4 = 5;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      _Src = puVar2 + 1;
      local_140 = local_140 & 0xffffff00;
      iVar1 = FUN_149817a40(param_3,&local_140,_Src,param_4);
      uVar4 = 1;
      if ((iVar1 == 0) && ((char)local_140 != '\0')) {
        local_130 = 0;
        memcpy(local_120,_Src,0xe8);
        local_13c = *(undefined4 *)((longlong)param_3 + 0x14);
        local_138 = (undefined4)param_3[3];
        local_134 = *(undefined4 *)((longlong)param_3 + 0x1c);
        local_130 = CONCAT44(local_130._4_4_,(int)param_3[4]);
        local_140 = (*(uint *)(param_3 + 2) & 0x7f) + (*(uint *)(param_3 + 2) & 0x80) * 2;
        local_128 = param_3[5];
        puVar2[0x10027] = local_128;
        iVar1 = ffxFsr3UpscalerContextCreate((longlong)puVar2 + 0x134);
        uVar4 = 3;
        if (iVar1 == 0) {
          ffxFsr3UpscalerSetGlobalDebugMessage(param_3[5]);
          memset(local_230,0,0xf0);
          iVar1 = ffxFsr3UpscalerGetSharedResourceDescriptions((longlong)puVar2 + 0x134,local_230);
          if (iVar1 == 0) {
            puVar5 = local_1e0;
            puVar6 = local_280;
            for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            local_258 = local_1b8;
            iVar1 = (*(code *)puVar2[6])(_Src,local_280,0,(longlong)puVar2 + 0x104);
            if (iVar1 == 0) {
              puVar5 = local_190;
              puVar6 = local_2d0;
              for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              local_258 = local_168;
              iVar1 = (*(code *)puVar2[6])(_Src,local_2d0,0,puVar2 + 0x21);
              if (iVar1 == 0) {
                puVar5 = local_230;
                puVar6 = local_320;
                for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar6 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                }
                local_2f8 = local_208;
                iVar1 = (*(code *)puVar2[6])(_Src,local_320,0,(longlong)puVar2 + 0x10c);
                if (iVar1 == 0) {
                  *param_2 = puVar2;
                  uVar4 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498170d2 FUN_1498170d2 body=167 status=ok
// SIG undefined FUN_1498170d2(void)

undefined8 FUN_1498170d2(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Memory;
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 6;
  if ((param_2 != (undefined8 *)0x0) && (_Memory = (void *)*param_2, _Memory != (void *)0x0)) {
    lVar4 = 0x3c;
    uVar3 = 3;
    do {
      iVar2 = (**(code **)((longlong)_Memory + 0x60))
                        ((longlong)_Memory + 8,*(undefined4 *)((longlong)_Memory + lVar4 * 4),0);
      if (iVar2 != 0) {
        return 3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x4d);
    iVar2 = ffxFsr3UpscalerContextDestroy((longlong)_Memory + 0x134);
    if (iVar2 == 0) {
      puVar1 = (undefined8 *)*param_3;
      if (puVar1 == (undefined8 *)0x0) {
        free(*(void **)((longlong)_Memory + 0xd8));
      }
      else {
        (*(code *)puVar1[2])(*puVar1);
      }
      puVar1 = (undefined8 *)*param_3;
      if (puVar1 == (undefined8 *)0x0) {
        free(_Memory);
      }
      else {
        (*(code *)puVar1[2])(*puVar1,_Memory);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14981717a FUN_14981717a body=150 status=ok
// SIG undefined FUN_14981717a(void)

undefined8 FUN_14981717a(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == (longlong *)0x0) {
    return 6;
  }
  lVar1 = *param_2;
  if (param_3 == (undefined8 *)0x0 || lVar1 == 0) {
    return 6;
  }
  if ((undefined1 *)*param_3 == (undefined1 *)0x1) {
    iVar2 = ffxFsr3UpscalerSetGlobalDebugMessage(param_3[2],*(undefined4 *)(param_3 + 3));
    if (iVar2 != 0) {
      return 3;
    }
    *(undefined8 *)(lVar1 + 0x80138) = param_3[2];
    *(undefined4 *)(lVar1 + 0x80140) = *(undefined4 *)(param_3 + 3);
  }
  else {
    if ((undefined1 *)*param_3 != &DAT_00010007) {
      return 2;
    }
    iVar2 = ffxFsr3UpscalerSetConstant(lVar1 + 0x134,*(undefined4 *)(param_3 + 2),param_3[4]);
    if (iVar2 != 0) {
      return 3;
    }
  }
  return 0;
}



// FUNCTION 149817210 FUN_149817210 body=333 status=ok
// SIG undefined FUN_149817210(void)

undefined8 FUN_149817210(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = 6;
    goto switchD_14981724f_caseD_10006;
  }
  uVar4 = 2;
  switch(*param_3) {
  case 0x10002:
    local_18 = ffxFsr3UpscalerGetUpscaleRatioFromQualityMode(*(undefined4 *)(param_3 + 2));
    puVar1 = (undefined4 *)param_3[3];
    goto joined_r0x00014981734d;
  case 0x10003:
    local_28 = *(undefined4 *)(param_3 + 3);
    iVar3 = ffxFsr3UpscalerGetRenderResolutionFromQualityMode
                      (&local_14,&local_18,*(undefined4 *)(param_3 + 2),
                       *(undefined4 *)((longlong)param_3 + 0x14));
    if (iVar3 != 0) {
LAB_149817301:
      uVar4 = 3;
      goto switchD_14981724f_caseD_10006;
    }
    if ((undefined4 *)param_3[4] != (undefined4 *)0x0) {
      *(undefined4 *)param_3[4] = local_14;
    }
    if ((undefined4 *)param_3[5] != (undefined4 *)0x0) {
      *(undefined4 *)param_3[5] = local_18;
    }
    break;
  case 0x10004:
    uVar2 = ffxFsr3UpscalerGetJitterPhaseCount
                      (*(undefined4 *)(param_3 + 2),*(undefined4 *)((longlong)param_3 + 0x14));
    if ((undefined4 *)param_3[3] != (undefined4 *)0x0) {
      *(undefined4 *)param_3[3] = uVar2;
    }
    break;
  case 0x10005:
    iVar3 = ffxFsr3UpscalerGetJitterOffset
                      (&local_14,&local_18,*(undefined4 *)(param_3 + 2),
                       *(undefined4 *)((longlong)param_3 + 0x14));
    if (iVar3 != 0) goto LAB_149817301;
    if ((undefined4 *)param_3[3] != (undefined4 *)0x0) {
      *(undefined4 *)param_3[3] = local_14;
    }
    puVar1 = (undefined4 *)param_3[4];
joined_r0x00014981734d:
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_18;
    }
    break;
  default:
    goto switchD_14981724f_caseD_10006;
  case 0x10008:
    iVar3 = ffxFsr3UpscalerContextGetGpuMemoryUsage(*param_2 + 0x134,param_3[2]);
    uVar4 = 3;
    if (iVar3 != 0) goto switchD_14981724f_caseD_10006;
  }
  uVar4 = 0;
switchD_14981724f_caseD_10006:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981735e FUN_14981735e body=1761 status=ok
// SIG undefined FUN_14981735e(void)

undefined8 FUN_14981735e(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_838 [40];
  undefined1 local_810 [176];
  longlong local_760;
  longlong local_758;
  longlong local_750;
  longlong lStack_748;
  longlong local_740;
  longlong lStack_738;
  undefined4 local_730;
  undefined8 local_72c;
  undefined8 uStack_724;
  undefined8 local_71c;
  undefined8 uStack_714;
  undefined8 local_70c;
  undefined8 uStack_704;
  undefined8 local_6fc;
  undefined8 uStack_6f4;
  undefined8 local_6ec;
  undefined8 uStack_6e4;
  undefined8 local_6dc;
  undefined8 uStack_6d4;
  undefined8 local_6cc;
  undefined8 uStack_6c4;
  undefined8 local_6bc;
  undefined8 uStack_6b4;
  undefined4 local_6ac;
  longlong local_6a8;
  longlong local_6a0;
  longlong lStack_698;
  longlong local_690;
  longlong lStack_688;
  undefined4 local_680;
  undefined8 local_67c;
  undefined8 uStack_674;
  undefined8 local_66c;
  undefined8 uStack_664;
  undefined8 local_65c;
  undefined8 uStack_654;
  undefined8 local_64c;
  undefined8 uStack_644;
  undefined8 local_63c;
  undefined8 uStack_634;
  undefined8 local_62c;
  undefined8 uStack_624;
  undefined8 local_61c;
  undefined8 uStack_614;
  undefined8 local_60c;
  undefined8 uStack_604;
  undefined4 local_5fc;
  longlong local_5f8;
  longlong local_5f0;
  longlong lStack_5e8;
  longlong local_5e0;
  longlong lStack_5d8;
  undefined4 local_5d0;
  undefined8 local_5cc;
  undefined8 uStack_5c4;
  undefined8 local_5bc;
  undefined8 uStack_5b4;
  undefined8 local_5ac;
  undefined8 uStack_5a4;
  undefined8 local_59c;
  undefined8 uStack_594;
  undefined8 local_58c;
  undefined8 uStack_584;
  undefined8 local_57c;
  undefined8 uStack_574;
  undefined8 local_56c;
  undefined8 uStack_564;
  undefined8 local_55c;
  undefined8 uStack_554;
  undefined4 local_54c;
  longlong local_548;
  longlong local_540;
  longlong lStack_538;
  longlong local_530;
  longlong lStack_528;
  undefined4 local_520;
  undefined8 local_51c;
  undefined8 uStack_514;
  undefined8 local_50c;
  undefined8 uStack_504;
  undefined8 local_4fc;
  undefined8 uStack_4f4;
  undefined8 local_4ec;
  undefined8 uStack_4e4;
  undefined8 local_4dc;
  undefined8 uStack_4d4;
  undefined8 local_4cc;
  undefined8 uStack_4c4;
  undefined8 local_4bc;
  undefined8 uStack_4b4;
  undefined8 local_4ac;
  undefined8 uStack_4a4;
  undefined4 local_49c;
  longlong local_498;
  longlong local_490;
  longlong lStack_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined8 local_46c;
  undefined8 uStack_464;
  undefined8 local_45c;
  undefined8 uStack_454;
  undefined8 local_44c;
  undefined8 uStack_444;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined8 local_42c;
  undefined8 uStack_424;
  undefined8 local_41c;
  undefined8 uStack_414;
  undefined8 local_40c;
  undefined8 uStack_404;
  undefined8 local_3fc;
  undefined8 uStack_3f4;
  undefined4 local_3ec;
  longlong local_3e8;
  longlong local_3e0;
  longlong lStack_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined8 uStack_3b4;
  undefined8 local_3ac;
  undefined8 uStack_3a4;
  undefined8 local_39c;
  undefined8 uStack_394;
  undefined8 local_38c;
  undefined8 uStack_384;
  undefined8 local_37c;
  undefined8 uStack_374;
  undefined8 local_36c;
  undefined8 uStack_364;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined8 uStack_344;
  undefined1 local_338 [176];
  undefined1 local_288 [176];
  undefined1 local_1d8 [176];
  longlong local_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  longlong lStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_838;
  uVar4 = 6;
  if ((param_2 != (longlong *)0x0) && (lVar2 = *param_2, param_3 != (longlong *)0x0 && lVar2 != 0))
  {
    if (*param_3 == 0x10006) {
      local_760 = param_3[2];
      local_72c = 0;
      uStack_724 = 0;
      local_71c = 0;
      uStack_714 = 0;
      local_70c = 0;
      uStack_704 = 0;
      local_6fc = 0;
      uStack_6f4 = 0;
      local_6ec = 0;
      uStack_6e4 = 0;
      local_6dc = 0;
      uStack_6d4 = 0;
      local_6cc = 0;
      uStack_6c4 = 0;
      local_6bc = 0;
      uStack_6b4 = 0;
      local_758 = param_3[3];
      local_730 = (undefined4)param_3[8];
      local_750 = param_3[4];
      lStack_748 = param_3[5];
      local_740 = param_3[6];
      lStack_738 = param_3[7];
      local_6ac = 0;
      local_67c = 0;
      uStack_674 = 0;
      local_66c = 0;
      uStack_664 = 0;
      local_65c = 0;
      uStack_654 = 0;
      local_64c = 0;
      uStack_644 = 0;
      local_63c = 0;
      uStack_634 = 0;
      local_62c = 0;
      uStack_624 = 0;
      local_61c = 0;
      uStack_614 = 0;
      local_60c = 0;
      uStack_604 = 0;
      local_6a8 = param_3[9];
      local_680 = (undefined4)param_3[0xe];
      local_6a0 = param_3[10];
      lStack_698 = param_3[0xb];
      local_690 = param_3[0xc];
      lStack_688 = param_3[0xd];
      local_5fc = 0;
      local_5cc = 0;
      uStack_5c4 = 0;
      local_5bc = 0;
      uStack_5b4 = 0;
      local_5ac = 0;
      uStack_5a4 = 0;
      local_59c = 0;
      uStack_594 = 0;
      local_58c = 0;
      uStack_584 = 0;
      local_57c = 0;
      uStack_574 = 0;
      local_56c = 0;
      uStack_564 = 0;
      local_55c = 0;
      uStack_554 = 0;
      local_5f8 = param_3[0xf];
      local_5d0 = (undefined4)param_3[0x14];
      local_5f0 = param_3[0x10];
      lStack_5e8 = param_3[0x11];
      local_5e0 = param_3[0x12];
      lStack_5d8 = param_3[0x13];
      local_54c = 0;
      local_548 = param_3[0x15];
      local_540 = param_3[0x16];
      lStack_538 = param_3[0x17];
      iVar3 = ffxFsr3UpscalerContextGenerateReactiveMask(lVar2 + 0x134);
    }
    else {
      uVar4 = 2;
      if (*param_3 != 0x10001) goto LAB_14981739d;
      memset(&local_3d0,0,0x3a0);
      local_760 = param_3[2];
      local_6bc = 0;
      uStack_6b4 = 0;
      local_6cc = 0;
      uStack_6c4 = 0;
      local_6dc = 0;
      uStack_6d4 = 0;
      local_6ec = 0;
      uStack_6e4 = 0;
      local_6fc = 0;
      uStack_6f4 = 0;
      local_70c = 0;
      uStack_704 = 0;
      local_71c = 0;
      uStack_714 = 0;
      local_72c = 0;
      uStack_724 = 0;
      local_758 = param_3[3];
      local_730 = (undefined4)param_3[8];
      local_750 = param_3[4];
      lStack_748 = param_3[5];
      local_740 = param_3[6];
      lStack_738 = param_3[7];
      local_6ac = 0;
      local_67c = 0;
      uStack_674 = 0;
      local_66c = 0;
      uStack_664 = 0;
      local_65c = 0;
      uStack_654 = 0;
      local_64c = 0;
      uStack_644 = 0;
      local_63c = 0;
      uStack_634 = 0;
      local_62c = 0;
      uStack_624 = 0;
      local_61c = 0;
      uStack_614 = 0;
      local_60c = 0;
      uStack_604 = 0;
      local_6a8 = param_3[9];
      local_680 = (undefined4)param_3[0xe];
      local_6a0 = param_3[10];
      lStack_698 = param_3[0xb];
      local_690 = param_3[0xc];
      lStack_688 = param_3[0xd];
      local_5fc = 0;
      local_5cc = 0;
      uStack_5c4 = 0;
      local_5bc = 0;
      uStack_5b4 = 0;
      local_5ac = 0;
      uStack_5a4 = 0;
      local_59c = 0;
      uStack_594 = 0;
      local_58c = 0;
      uStack_584 = 0;
      local_57c = 0;
      uStack_574 = 0;
      local_56c = 0;
      uStack_564 = 0;
      local_55c = 0;
      uStack_554 = 0;
      local_5f8 = param_3[0xf];
      local_5d0 = (undefined4)param_3[0x14];
      local_5f0 = param_3[0x10];
      lStack_5e8 = param_3[0x11];
      local_5e0 = param_3[0x12];
      lStack_5d8 = param_3[0x13];
      local_54c = 0;
      local_51c = 0;
      uStack_514 = 0;
      local_50c = 0;
      uStack_504 = 0;
      local_4fc = 0;
      uStack_4f4 = 0;
      local_4ec = 0;
      uStack_4e4 = 0;
      local_4dc = 0;
      uStack_4d4 = 0;
      local_4cc = 0;
      uStack_4c4 = 0;
      local_4bc = 0;
      uStack_4b4 = 0;
      local_4ac = 0;
      uStack_4a4 = 0;
      local_548 = param_3[0x15];
      local_520 = (undefined4)param_3[0x1a];
      local_540 = param_3[0x16];
      lStack_538 = param_3[0x17];
      local_530 = param_3[0x18];
      lStack_528 = param_3[0x19];
      local_49c = 0;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      uStack_94 = 0;
      local_8c = 0;
      uStack_84 = 0;
      local_128 = param_3[0x27];
      local_100 = (undefined4)param_3[0x2c];
      local_120 = param_3[0x28];
      lStack_118 = param_3[0x29];
      local_110 = param_3[0x2a];
      lStack_108 = param_3[0x2b];
      local_46c = 0;
      uStack_464 = 0;
      local_45c = 0;
      uStack_454 = 0;
      local_44c = 0;
      uStack_444 = 0;
      local_43c = 0;
      uStack_434 = 0;
      local_42c = 0;
      uStack_424 = 0;
      local_41c = 0;
      uStack_414 = 0;
      local_40c = 0;
      uStack_404 = 0;
      local_3fc = 0;
      uStack_3f4 = 0;
      local_498 = param_3[0x1b];
      local_470 = (undefined4)param_3[0x20];
      local_490 = param_3[0x1c];
      lStack_488 = param_3[0x1d];
      local_480 = (undefined4)param_3[0x1e];
      uStack_47c = *(undefined4 *)((longlong)param_3 + 0xf4);
      uStack_478 = (undefined4)param_3[0x1f];
      uStack_474 = *(undefined4 *)((longlong)param_3 + 0xfc);
      local_3ec = 0;
      local_3bc = 0;
      uStack_3b4 = 0;
      local_3ac = 0;
      uStack_3a4 = 0;
      local_39c = 0;
      uStack_394 = 0;
      local_38c = 0;
      uStack_384 = 0;
      local_37c = 0;
      uStack_374 = 0;
      local_36c = 0;
      uStack_364 = 0;
      local_35c = 0;
      uStack_354 = 0;
      local_34c = 0;
      uStack_344 = 0;
      local_3e8 = param_3[0x21];
      local_3c0 = (undefined4)param_3[0x26];
      local_3e0 = param_3[0x22];
      lStack_3d8 = param_3[0x23];
      local_3d0 = (undefined4)param_3[0x24];
      uStack_3cc = *(undefined4 *)((longlong)param_3 + 0x124);
      uStack_3c8 = (undefined4)param_3[0x25];
      uStack_3c4 = *(undefined4 *)((longlong)param_3 + 300);
      local_78 = (undefined4)param_3[0x2d];
      local_74 = *(undefined4 *)((longlong)param_3 + 0x16c);
      local_70 = (undefined4)param_3[0x2e];
      local_6c = *(undefined4 *)((longlong)param_3 + 0x174);
      local_48 = (undefined1)param_3[0x33];
      local_58 = (undefined1)param_3[0x31];
      local_54 = *(undefined4 *)((longlong)param_3 + 0x18c);
      local_50 = (undefined4)param_3[0x32];
      local_4c = *(undefined4 *)((longlong)param_3 + 0x194);
      local_68 = (undefined4)param_3[0x2f];
      local_64 = *(undefined4 *)((longlong)param_3 + 0x17c);
      local_60 = (undefined4)param_3[0x30];
      local_5c = *(undefined4 *)((longlong)param_3 + 0x184);
      local_3c = *(undefined4 *)((longlong)param_3 + 0x1a4);
      local_40 = (undefined4)param_3[0x34];
      local_44 = *(undefined4 *)((longlong)param_3 + 0x19c);
      local_38 = (undefined4)param_3[0x35];
      local_34 = 0;
      lVar1 = lVar2 + 8;
      (**(code **)(lVar2 + 0x40))(local_810,lVar1,*(undefined4 *)(lVar2 + 0x104));
      memcpy(local_338,local_810,0xb0);
      (**(code **)(lVar2 + 0x40))(local_810,lVar1,*(undefined4 *)(lVar2 + 0x108));
      memcpy(local_288,local_810,0xb0);
      (**(code **)(lVar2 + 0x40))(local_810,lVar1,*(undefined4 *)(lVar2 + 0x10c));
      memcpy(local_1d8,local_810,0xb0);
      if ((*(byte *)((longlong)param_3 + 0x1ac) & 1) != 0) {
        local_34 = local_34 | 1;
      }
      iVar3 = ffxFsr3UpscalerContextDispatch(lVar2 + 0x134,&local_760);
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
  }
LAB_14981739d:
  if ((local_30 ^ (ulonglong)auStack_838) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149817a40 FUN_149817a40 body=523 status=ok
// SIG undefined FUN_149817a40(void)

undefined8 FUN_149817a40(longlong param_1,char *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void *_Dst;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 == (longlong *)0x0) {
LAB_149817c33:
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    do {
      if (*plVar3 == 4) {
        if (*param_2 != '\0') goto LAB_149817c33;
        *param_2 = '\x01';
        puVar1 = (undefined8 *)*param_4;
        if (puVar1 == (undefined8 *)0x0) {
          _Dst = malloc(0x59e460);
        }
        else {
          _Dst = (void *)(*(code *)puVar1[1])(*puVar1);
        }
        uVar2 = 0;
        memset(_Dst,0,0x59e460);
        *param_3 = &LAB_14464c83c;
        param_3[1] = &LAB_14464c842;
        param_3[2] = FUN_14464c845;
        param_3[3] = FUN_14464c8c5;
        param_3[4] = FUN_14464ca27;
        param_3[5] = FUN_14464ca8a;
        param_3[0xb] = FUN_14464d89d;
        param_3[0xc] = &LAB_14464d8f3;
        param_3[0xd] = &LAB_14464d8f6;
        param_3[7] = FUN_14464d8f9;
        param_3[6] = FUN_14464d961;
        param_3[8] = FUN_14464dc37;
        param_3[9] = &LAB_14464dcd1;
        param_3[10] = &LAB_14464dcd4;
        param_3[0xe] = FUN_14464dcf7;
        param_3[0xf] = FUN_14464dd94;
        param_3[0x10] = FUN_14464de71;
        param_3[0x11] = FUN_14464de94;
        param_3[0x12] = FUN_14464df42;
        param_3[0x13] = &LAB_14464e5b6;
        param_3[0x14] = &DAT_14464e5b9;
        param_3[0x15] = &DAT_14464e5ba;
        param_3[0x16] = &DAT_14464e5bb;
        param_3[0x17] = &LAB_14464e5bc;
        param_3[0x18] = &LAB_14464e5bf;
        param_3[0x19] = &DAT_14464e5c2;
        param_3[0x1a] = _Dst;
        param_3[0x1b] = 0x59e460;
        param_3[0x1c] = DAT_14ca83900;
        if ((undefined8 *)plVar3[2] != (undefined8 *)0x0) {
          *(undefined8 *)plVar3[2] = param_3;
        }
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar3 != (longlong *)0x0);
  }
  return uVar2;
}



// FUNCTION 149817c4c FUN_149817c4c body=195 status=ok
// SIG undefined FUN_149817c4c(void)

longlong FUN_149817c4c(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(ulonglong *)(param_1 + 0x4800 + (ulonglong)((uint)(param_3 >> 2) & 0x3ffffff0)) >>
       (param_3 & 0x3f) & 1) == 0) {
    local_38 = *(longlong **)(param_1 + 8 + (param_3 & 0xffffffff) * 0x48);
  }
  else {
    local_38 = (longlong *)0x0;
  }
  plVar1 = (longlong *)FUN_144b113f6(param_2 + 0x1d8);
  if ((plVar1 == (longlong *)0x0) || (lVar2 = *plVar1, lVar2 == 0)) {
    FUN_149817d10(param_1,&local_38,param_3 & 0xffffffff);
    lVar2 = FUN_14473c272(param_2,&local_38,0);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x38))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149817d10 FUN_149817d10 body=83 status=ok
// SIG undefined FUN_149817d10(void)

longlong * FUN_149817d10(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  
  *param_2 = 0;
  if ((((*(ulonglong *)(param_1 + 0x4800 + (ulonglong)(param_3 >> 2 & 0xfffffff0)) >>
         ((ulonglong)param_3 & 0x3f) & 1) == 0) &&
      (plVar1 = *(longlong **)(param_1 + 0x30 + (ulonglong)param_3 * 0x48),
      plVar1 != (longlong *)0x0)) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
    *param_2 = (longlong)plVar1;
    (**(code **)(*plVar1 + 0x30))();
  }
  return param_2;
}



// FUNCTION 149817d64 FUN_149817d64 body=100 status=ok
// SIG undefined FUN_149817d64(void)

longlong FUN_149817d64(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  if ((((uint)param_3 < 0x100) &&
      ((*(ulonglong *)(param_1 + 0x4800 + (ulonglong)((uint)(param_3 >> 2) & 0x3ffffff0)) >>
        (param_3 & 0x3f) & 1) == 0)) &&
     (*(int *)(param_1 + 0x10 + (param_3 & 0xffffffff) * 0x48) != 0)) {
    param_1 = param_1 + (param_3 & 0xffffffff) * 0x48;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      return *(longlong *)(param_1 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar1 = FUN_149817c4c();
      return lVar1;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar1 = FUN_1447ebf30(param_2,*(longlong *)(param_1 + 8),0,0);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 149817dc8 FUN_149817dc8 body=71 status=ok
// SIG undefined FUN_149817dc8(void)

undefined8 FUN_149817dc8(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if ((((uint)param_3 < 0x100) &&
      ((*(ulonglong *)(param_1 + 0x4800 + (ulonglong)((uint)(param_3 >> 2) & 0x3ffffff0)) >>
        (param_3 & 0x3f) & 1) == 0)) &&
     (*(int *)(param_1 + 0x10 + (param_3 & 0xffffffff) * 0x48) == 0)) {
    uVar1 = FUN_144735dd8(param_2,*(undefined8 *)(param_1 + (param_3 & 0xffffffff) * 0x48 + 0x40),0)
    ;
    return uVar1;
  }
  return 0;
}



// FUNCTION 149817e10 FUN_149817e10 body=235 status=ok
// SIG undefined FUN_149817e10(void)

void FUN_149817e10(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  if ((uint)param_2 < 0x100) {
    uVar8 = 1L << ((byte)param_2 & 0x3f);
    uVar10 = (ulonglong)((uint)(param_2 >> 2) & 0x3ffffff0);
    if ((*(ulonglong *)(param_1 + 0x4800 + uVar10) >> (param_2 & 0x3f) & 1) == 0) {
      lVar4 = param_1 + (param_2 & 0xffffffff) * 0x48;
      if (*(longlong *)(lVar4 + 8) != 0) {
        LOCK();
        puVar1 = (uint *)(*(longlong *)(lVar4 + 8) + 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar6 = *(longlong **)(lVar4 + 0x30);
      if (plVar6 != (longlong *)0x0) {
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar6 + 0x38))();
        }
        FUN_1400020a8(plVar6);
      }
      param_1 = param_1 + uVar10;
      puVar9 = (ulonglong *)(param_1 + 0x4800);
      plVar6 = *(longlong **)(lVar4 + 0x40);
      if (plVar6 != (longlong *)0x0) {
        puVar7 = (undefined8 *)*plVar6;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar7 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
        FUN_1400020a8(plVar6);
      }
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      puVar3 = (ulonglong *)(param_1 + 0x4808);
      *puVar3 = *puVar3 & ~uVar8;
      *puVar9 = *puVar9 | uVar8;
    }
  }
  return;
}



// FUNCTION 149817efc FUN_149817efc body=158 status=ok
// SIG undefined FUN_149817efc(void)

undefined8 FUN_149817efc(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 4;
  local_38 = 0;
  *(undefined8 **)(param_3 + 8) = &local_40;
  lVar1 = FUN_14001cc68(0x10,0x10);
  uVar2 = 1;
  if (lVar1 != 0) {
    local_30 = lVar1 + 8;
    uVar2 = ffxCreateContext(lVar1,param_3,param_1 + 8);
    if ((int)uVar2 == 0) {
      *param_2 = lVar1;
      uVar2 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149817f9c FUN_149817f9c body=88 status=ok
// SIG undefined FUN_149817f9c(void)

undefined8 FUN_149817f9c(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = 6;
  if ((param_2 != (longlong *)0x0) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    local_10 = param_1 + 8;
    uVar1 = (**(code **)(*(longlong *)**(undefined8 **)*param_2 + 0x28))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149818098 FUN_149818098 body=153 status=ok
// SIG undefined FUN_149818098(void)

longlong * FUN_149818098(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0x60);
    *param_2 = param_3;
    *(undefined4 *)(param_2 + 5) = param_4;
    uVar2 = FUN_14464ee4a(*(undefined1 *)(param_3 + 0x93),(uVar1 & 0x10) >> 4);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 0x84);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_3 + 0x88);
    *(uint *)(param_2 + 3) = (uint)*(ushort *)(param_3 + 0x8c);
    *(uint *)((longlong)param_2 + 0x1c) = (uint)*(byte *)(param_3 + 0x90);
    if (*(char *)(param_3 + 0x92) == '\x01') {
      *(undefined4 *)(param_2 + 1) = 2;
      *(uint *)(param_2 + 3) = (uint)*(ushort *)(param_3 + 0x8e);
    }
    else if (*(char *)(param_3 + 0x92) == '\0') {
      *(undefined4 *)(param_2 + 1) = 2;
    }
  }
  return param_2;
}



// FUNCTION 149818132 FUN_149818132 body=133 status=ok
// SIG undefined FUN_149818132(void)

ulonglong *
FUN_149818132(undefined8 param_1,ulonglong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  
  *param_2 = (ulonglong)param_3 | 1;
  *(undefined4 *)(param_2 + 5) = param_4;
  *(undefined4 *)(param_2 + 4) = 0;
  puVar2 = (uint *)(**(code **)(*param_3 + 8))(param_3);
  uVar1 = FUN_14464ee4a(*(undefined1 *)((longlong)puVar2 + 0x33),(*puVar2 & 0x10) >> 4);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  *(uint *)(param_2 + 2) = puVar2[9];
  *(uint *)((longlong)param_2 + 0x14) = puVar2[10];
  *(uint *)(param_2 + 3) = (uint)(ushort)puVar2[0xb];
  *(uint *)((longlong)param_2 + 0x1c) = (uint)(byte)puVar2[0xc];
  if (*(char *)((longlong)puVar2 + 0x32) == '\x01') {
    *(undefined4 *)(param_2 + 1) = 2;
    *(uint *)(param_2 + 3) = (uint)*(ushort *)((longlong)puVar2 + 0x2e);
  }
  else if (*(char *)((longlong)puVar2 + 0x32) == '\0') {
    *(undefined4 *)(param_2 + 1) = 2;
  }
  return param_2;
}



// FUNCTION 149818276 FUN_149818276 body=185 status=ok
// SIG undefined FUN_149818276(void)

undefined8
FUN_149818276(uint param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  FUN_141507a88();
  if (DAT_14cc28fc8 != DAT_14cc28ff4) {
    puVar4 = &DAT_14cc28ff8;
    if (DAT_14cc29000 != (undefined *)0x0) {
      puVar4 = DAT_14cc29000;
    }
    uVar2 = *(uint *)(puVar4 + (ulonglong)(DAT_14cc29008 - 1U & param_1) * 4);
    while (uVar2 != 0xffffffff) {
      puVar1 = (uint *)(DAT_14cc28fc0 + (longlong)(int)uVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
          return 0;
        }
        uVar3 = (**(code **)(puVar1 + 2))(param_2,param_3,param_4,param_5,param_6,param_7);
        return uVar3;
      }
      uVar2 = puVar1[4];
    }
  }
  return 0;
}



// FUNCTION 149818330 FUN_149818330 body=29 status=ok
// SIG undefined FUN_149818330(void)

undefined8 FUN_149818330(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981834e FUN_14981834e body=29 status=ok
// SIG undefined FUN_14981834e(void)

undefined8 FUN_14981834e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981836c FUN_14981836c body=29 status=ok
// SIG undefined FUN_14981836c(void)

undefined8 FUN_14981836c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981838a FUN_14981838a body=29 status=ok
// SIG undefined FUN_14981838a(void)

undefined8 FUN_14981838a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498183b4 FUN_1498183b4 body=31 status=ok
// SIG undefined FUN_1498183b4(void)

undefined8 FUN_1498183b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498183f0 FUN_1498183f0 body=93 status=ok
// SIG undefined FUN_1498183f0(void)

void FUN_1498183f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea2800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14981844e FUN_14981844e body=126 status=ok
// SIG undefined FUN_14981844e(void)

void FUN_14981844e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bea2800;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498184bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498184cc FUN_1498184cc body=21 status=ok
// SIG undefined FUN_1498184cc(void)

undefined8 FUN_1498184cc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498184e2 FUN_1498184e2 body=114 status=ok
// SIG undefined FUN_1498184e2(void)

void FUN_1498184e2(longlong *param_1,int param_2)

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



// FUNCTION 149818554 ffxGetSurfaceFormatDX12 body=20 status=ok
// SIG undefined ffxGetSurfaceFormatDX12(void)

undefined4 ffxGetSurfaceFormatDX12(uint param_1)

{
  undefined4 uVar1;
  
                    /* 0x9818554  605  ffxGetSurfaceFormatDX12 */
  uVar1 = 0;
  if (param_1 < 0x5c) {
    uVar1 = *(undefined4 *)(&DAT_14bea5e90 + (ulonglong)param_1 * 4);
  }
  return uVar1;
}



// FUNCTION 149818568 ffxGetDX12FormatFromSurfaceFormat body=20 status=ok
// SIG undefined ffxGetDX12FormatFromSurfaceFormat(void)

undefined4 ffxGetDX12FormatFromSurfaceFormat(uint param_1)

{
  undefined4 uVar1;
  
                    /* 0x9818568  603  ffxGetDX12FormatFromSurfaceFormat */
  uVar1 = 0;
  if (param_1 < 0x1d) {
    uVar1 = *(undefined4 *)(&DAT_14bea6000 + (ulonglong)param_1 * 4);
  }
  return uVar1;
}



// FUNCTION 14981857c ffxGetDX12StateFromResourceState body=125 status=ok
// SIG undefined ffxGetDX12StateFromResourceState(void)

undefined8 ffxGetDX12StateFromResourceState(int param_1)

{
                    /* 0x981857c  604  ffxGetDX12StateFromResourceState */
  if (param_1 < 0x10) {
    switch(param_1) {
    case 2:
      return 8;
    case 4:
      return 0x40;
    case 8:
      return 0x80;
    case 0xc:
      return 0xc0;
    }
  }
  else if (param_1 < 0x40) {
    if (param_1 == 0x10) {
      return 0x800;
    }
    if (param_1 == 0x14) {
      return 0xac3;
    }
    if (param_1 == 0x20) {
      return 0x400;
    }
  }
  else {
    if (param_1 == 0x40) {
      return 0x200;
    }
    if ((param_1 != 0x80) && (param_1 == 0x100)) {
      return 4;
    }
  }
  return 0;
}



// FUNCTION 1498185f9 FUN_1498185f9 body=879 status=ok
// SIG undefined FUN_1498185f9(void)

uint FUN_1498185f9(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  INT_PTR IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_4e8 [32];
  undefined *local_4c8;
  undefined8 *local_4c0;
  longlong *local_4b0;
  longlong *local_4a8;
  undefined8 local_4a0;
  undefined4 local_498 [2];
  undefined4 local_490;
  undefined4 *local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_468 [2];
  undefined4 local_460;
  undefined8 *local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined *local_428;
  undefined8 local_420;
  undefined *local_418;
  undefined8 local_410;
  undefined1 local_408 [80];
  undefined1 local_3b8 [328];
  undefined4 local_270;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined4 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_23c;
  undefined2 local_230;
  undefined4 local_22e;
  undefined4 uStack_22a;
  undefined4 uStack_226;
  undefined4 uStack_222;
  undefined2 local_21e;
  undefined1 *local_21c;
  undefined8 uStack_214;
  undefined1 *local_1f4;
  undefined4 local_1ec;
  undefined4 local_1c8;
  undefined2 uStack_19a;
  undefined2 local_198;
  undefined4 uStack_196;
  undefined2 uStack_192;
  undefined2 uStack_190;
  undefined4 uStack_18e;
  undefined2 uStack_18a;
  undefined8 local_188 [41];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  local_458 = &local_448;
  local_448 = 0x200000000;
  uStack_440 = 0;
  local_438 = 0xffffffff00000000;
  local_488 = local_468;
  local_468[0] = 0;
  local_450 = 5;
  local_460 = 1;
  local_498[0] = 2;
  local_490 = 1;
  local_480 = 0;
  local_478 = 0;
  local_470 = 1;
  local_4a8 = (longlong *)0x0;
  local_4b0 = (longlong *)0x0;
  hModule = GetModuleHandleW(L"D3D12.dll");
  uVar7 = 0x8000000d;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"D3D12SerializeVersionedRootSignature");
    if (pFVar2 != (FARPROC)0x0) {
      IVar3 = (*pFVar2)(local_498,&local_4a8,&local_4b0);
      if (-1 < (int)IVar3) {
        uVar4 = (**(code **)(*local_4a8 + 0x20))();
        uVar5 = (**(code **)(*local_4a8 + 0x18))();
        local_4c0 = &local_4a0;
        local_4c8 = &DAT_14a34da88;
        iVar1 = (**(code **)(*param_1 + 0x80))(param_1,0,uVar5,uVar4);
        if (local_4a8 != (longlong *)0x0) {
          (**(code **)(*local_4a8 + 0x10))();
          local_4a8 = (longlong *)0x0;
        }
        if (local_4b0 != (longlong *)0x0) {
          (**(code **)(*local_4b0 + 0x10))();
          local_4b0 = (longlong *)0x0;
        }
        if (-1 < iVar1) {
          local_188[0] = 0;
          lVar6 = 8;
          do {
            *(undefined8 *)((longlong)local_188 + lVar6 + 0x10) = 0x200000001;
            *(undefined1 **)((longlong)local_188 + lVar6 + 0x18) = &DAT_100000001;
            *(undefined8 *)((longlong)local_188 + lVar6) = 0;
            *(undefined1 **)((longlong)local_188 + lVar6 + 8) = &DAT_100000002;
            *(undefined8 *)((longlong)local_188 + lVar6 + 0x20) = 0xf00000004;
            lVar6 = lVar6 + 0x28;
          } while (lVar6 != 0x148);
          local_198 = 1;
          uStack_196 = 0x10000;
          uStack_192 = 0;
          uStack_190 = 1;
          uStack_18e = 0x80000;
          uStack_18a = 0;
          memset(local_408,0,0x268);
          local_26c = 0x300000003;
          local_264 = 0;
          uStack_25c = 0;
          local_254 = 1;
          local_250 = 0;
          uStack_248 = 0;
          memcpy(local_3b8,local_188,0x148);
          local_23c = 0x200000001;
          local_230 = 0xffff;
          local_22e = CONCAT22(local_198,uStack_19a);
          uStack_226 = CONCAT22(uStack_190,uStack_192);
          uStack_22a = uStack_196;
          uStack_222 = uStack_18e;
          local_21e = uStack_18a;
          local_21c = &DAT_100000001;
          uStack_214 = 0x800000001;
          local_270 = 0xffffffff;
          local_1f4 = &DAT_100000003;
          local_1c8 = 1;
          local_430 = local_4a0;
          DAT_14cc29018 = local_4a0;
          local_428 = &DAT_14bea2a60;
          local_420 = 0xb38;
          local_418 = &DAT_14bea35a0;
          local_410 = 0xe78;
          local_1ec = param_2;
          iVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_430,&DAT_14a354028,&DAT_14cc29020);
          if (iVar1 < 0) {
            uVar7 = 0x8000000d;
          }
          else {
            local_428 = &DAT_14bea4420;
            local_420 = 0xb38;
            local_418 = &DAT_14bea4f60;
            local_410 = 0xe6c;
            iVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_430,&DAT_14a354028,&DAT_14cc29028)
            ;
            uVar7 = iVar1 >> 0x1f & 0x8000000d;
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149818969 FUN_149818969 body=240 status=ok
// SIG undefined FUN_149818969(void)

undefined8 FUN_149818969(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((DAT_14cc29020 == 0) || (DAT_14cc29028 == 0)) &&
     (uVar2 = FUN_1498185f9(param_1), (int)uVar2 != 0)) goto LAB_1498189b2;
  if (DAT_14cc29038 == 0) {
    local_20 = 0;
    puStack_1c = &DAT_100000018;
    uStack_14 = 0;
    DAT_14cc29030 = 0;
    iVar1 = (**(code **)(*param_1 + 0x70))(param_1,&local_20,&DAT_14a34a3c0,&DAT_14cc29038);
    if (-1 < iVar1) goto LAB_1498189a6;
LAB_149818a03:
    uVar2 = 0x8000000d;
  }
  else {
LAB_1498189a6:
    if (DAT_14cc29048 == 0) {
      puStack_1c = (undefined1 *)0xc;
      local_20 = 2;
      uStack_14 = 0;
      iVar1 = (**(code **)(*param_1 + 0x70))(param_1,&local_20,&DAT_14a34a3c0,&DAT_14cc29048);
      if (iVar1 < 0) goto LAB_149818a03;
    }
    uVar2 = 0;
  }
LAB_1498189b2:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149818a5a ffxFrameInterpolationUiComposition body=1697 status=ok
// SIG int ffxFrameInterpolationUiComposition(FfxPresentCallbackDescription * param_1, void * param_2)

/* int __cdecl ffxFrameInterpolationUiComposition(struct FfxPresentCallbackDescription const *
   __ptr64,void * __ptr64) */

int __cdecl ffxFrameInterpolationUiComposition(FfxPresentCallbackDescription *param_1,void *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_248 [32];
  ulonglong local_228;
  int local_214;
  longlong *local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  float local_1dc;
  undefined8 local_1d8;
  undefined1 local_1d0 [16];
  ulonglong local_1c0;
  uint local_1b8;
  longlong local_198;
  undefined1 local_190 [30];
  undefined2 local_172;
  int local_158 [4];
  ulonglong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_100 [32];
  undefined4 local_e0;
  longlong *local_c8 [2];
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
                    /* 0x9818a5a  365
                       ?ffxFrameInterpolationUiComposition@@YAHPEBUFfxPresentCallbackDescription@@PEAX@Z
                        */
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar2 = *(longlong **)param_1;
  plVar3 = *(longlong **)(param_1 + 0x170);
  (**(code **)(*plVar3 + 0x50))(plVar3,local_100);
  iVar9 = FUN_149818969(plVar2,local_e0);
  if (iVar9 != 0) goto LAB_149818ab7;
  plVar4 = *(longlong **)(param_1 + 8);
  plVar5 = *(longlong **)(param_1 + 0x10);
  puVar12 = &DAT_14cc29020;
  if (param_1[0x221] != (FfxPresentCallbackDescription)0x0) {
    puVar12 = &DAT_14cc29028;
  }
  plVar6 = *(longlong **)(param_1 + 0xc0);
  local_c8[1] = plVar5;
  if (plVar6 == (longlong *)0x0) {
    local_c8[0] = (longlong *)0x0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    local_b8 = 0;
    uStack_b4._0_4_ = 0;
    uStack_b4._4_4_ = 0;
    uStack_ac = 0;
    uStack_b4._0_4_ = ffxGetDX12StateFromResourceState(*(undefined4 *)(param_1 + 0x38));
    uStack_b4._4_4_ = 0x800;
    plStack_a0 = plVar3;
    uStack_94 = ffxGetDX12StateFromResourceState(*(undefined4 *)(param_1 + 0x198));
    uStack_90 = 0x400;
    (**(code **)(*plVar4 + 0xd0))(plVar4,2,local_c8);
    (**(code **)(*plVar4 + 0x88))(plVar4,plVar3,plVar5);
    uVar8 = uStack_94;
    uVar7 = (int)uStack_b4;
    uStack_b4._0_4_ = uStack_b4._4_4_;
    uStack_b4._4_4_ = uVar7;
    uStack_94 = uStack_90;
    uStack_90 = uVar8;
    lVar14 = *plVar4;
    iVar9 = 2;
  }
  else {
    local_200 = *puVar12;
    local_c8[0] = (longlong *)0x0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    local_b8 = 0;
    uStack_b4._0_4_ = 0;
    uStack_b4._4_4_ = 0;
    uStack_ac = 0;
    uStack_b4._0_4_ = ffxGetDX12StateFromResourceState(*(undefined4 *)(param_1 + 0x38));
    uStack_b4._4_4_ = 0x80;
    bVar15 = (int)uStack_b4 != 0x80;
    uVar13 = (ulonglong)bVar15;
    *(undefined4 *)(local_c8 + uVar13 * 4) = 0;
    local_c8[uVar13 * 4 + 1] = plVar6;
    local_210 = plVar6;
    local_208 = plVar5;
    iVar9 = ffxGetDX12StateFromResourceState(*(undefined4 *)(param_1 + 0xe8));
    *(int *)(&uStack_b4 + uVar13 * 4) = iVar9;
    *(undefined4 *)((longlong)&uStack_b4 + uVar13 * 0x20 + 4) = 0x80;
    uVar11 = bVar15 + 1;
    if (iVar9 == 0x80) {
      uVar11 = (uint)bVar15;
    }
    uVar13 = (ulonglong)(uVar11 << 5);
    *(undefined4 *)((longlong)local_c8 + uVar13) = 0;
    *(longlong **)((longlong)local_c8 + uVar13 + 8) = plVar3;
    *(undefined8 *)((longlong)&uStack_b4 + uVar13) = 0x400000000;
    local_214 = uVar11 + 1;
    (**(code **)(*plVar4 + 0xd0))(plVar4,local_214,local_c8);
    (**(code **)(*plVar4 + 0xf0))(plVar4,DAT_14cc29018);
    local_108 = DAT_14cc29038;
    (**(code **)(*plVar4 + 0xe0))(plVar4,1,&local_108);
    local_110 = 0;
    local_120 = local_e0;
    local_11c = 4;
    local_114 = 0;
    (**(code **)(*local_108 + 0x50))(local_108,&local_128);
    iVar9 = DAT_14cc29030;
    iVar10 = (**(code **)(*plVar2 + 0x78))(plVar2,0);
    local_128 = local_128 + (ulonglong)(uint)(iVar10 * iVar9);
    (**(code **)(*local_108 + 0x48))();
    iVar9 = DAT_14cc29030;
    iVar10 = (**(code **)(*plVar2 + 0x78))(plVar2,0);
    local_130 = local_130 + (ulonglong)(uint)(iVar10 * iVar9);
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_158[2] = 0x1688;
    local_158[3] = 0;
    local_158[0] = ffxGetDX12FormatFromSurfaceFormat(*(undefined4 *)(param_1 + 0x1c));
    plVar6 = local_208;
    local_158[1] = 4;
    (**(code **)(*local_208 + 0x50))(local_208,local_190);
    plVar5 = local_210;
    uStack_148 = (ulonglong)CONCAT24(local_172,(undefined4)uStack_148);
    (**(code **)(*plVar2 + 0x90))(plVar2,plVar6,local_158,local_130);
    uVar11 = (**(code **)(*plVar2 + 0x78))(plVar2,0);
    local_130 = local_130 + (ulonglong)uVar11;
    (**(code **)(*plVar5 + 0x50))(plVar5,local_190);
    iVar9 = ffxGetDX12FormatFromSurfaceFormat(*(undefined4 *)(param_1 + 0xcc));
    if (iVar9 < 0x21) {
      if (iVar9 < 0x13) {
        if (iVar9 < 9) {
          if (iVar9 == 1) {
            local_158[0] = 2;
          }
          else {
            if (iVar9 != 5) goto switchD_149818e0a_caseD_29;
            local_158[0] = 6;
          }
        }
        else if (iVar9 == 9) {
          local_158[0] = 10;
        }
        else {
          if (iVar9 != 0xf) goto switchD_149818e0a_caseD_29;
          local_158[0] = 0x10;
        }
      }
      else {
        local_158[0] = 0x15;
        if (1 < iVar9 - 0x13U) {
          if (iVar9 == 0x17) {
            local_158[0] = 0x18;
          }
          else {
            if (iVar9 != 0x1b) goto switchD_149818e0a_caseD_29;
            local_158[0] = 0x1c;
          }
        }
      }
    }
    else {
      switch(iVar9) {
      case 0x27:
      case 0x28:
        local_158[0] = 0x29;
        break;
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2e:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x36:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
switchD_149818e0a_caseD_29:
        local_158[0] = iVar9;
        break;
      case 0x2c:
      case 0x2d:
      case 0x2f:
        local_158[0] = 0x2e;
        break;
      case 0x30:
        local_158[0] = 0x31;
        break;
      case 0x35:
        local_158[0] = 0x36;
        break;
      case 0x37:
        local_158[0] = 0x38;
        break;
      case 0x3c:
        local_158[0] = 0x3d;
        break;
      default:
        if (iVar9 == 0x21) {
          local_158[0] = 0x22;
        }
        else {
          if (iVar9 != 0x5a) goto switchD_149818e0a_caseD_29;
          local_158[0] = 0x57;
        }
      }
    }
    uStack_148 = (ulonglong)CONCAT24(local_172,(undefined4)uStack_148);
    (**(code **)(*plVar2 + 0x90))(plVar2,plVar5,local_158,local_130);
    DAT_14cc29030 = DAT_14cc29030 + ((DAT_14cc29030 + 2U) / 0x18) * -0x18 + 2;
    lVar14 = 0;
    (**(code **)(*plVar4 + 0x100))(plVar4,0,local_128);
    (**(code **)(*DAT_14cc29048 + 0x48))(DAT_14cc29048,&local_198);
    iVar9 = DAT_14cc29040;
    iVar10 = (**(code **)(*plVar2 + 0x78))(plVar2,2);
    local_198 = (ulonglong)(uint)(iVar9 * iVar10) + local_198;
    DAT_14cc29040 = DAT_14cc29040 + ((DAT_14cc29040 + 1U) / 0xc) * -0xc + 1;
    (**(code **)(*plVar2 + 0xa0))(plVar2,plVar3,&local_120,local_198);
    (**(code **)(*plVar3 + 0x50))(plVar3,local_1d0);
    local_1e8 = 0;
    local_1f0 = (undefined4)local_1c0;
    local_1e0 = (float)local_1c0;
    local_1dc = (float)local_1b8;
    local_1d8 = 0x3f80000000000000;
    local_1f8 = 0;
    local_1ec = local_1b8;
    local_228 = 0;
    (**(code **)(*plVar4 + 0x170))(plVar4,1,&local_198,1);
    (**(code **)(*plVar4 + 0xa0))(plVar4,4);
    (**(code **)(*plVar4 + 200))(plVar4,local_200);
    (**(code **)(*plVar4 + 0xa8))(plVar4,1,&local_1e8);
    (**(code **)(*plVar4 + 0xb0))(plVar4,1,&local_1f8);
    local_228 = local_228 & 0xffffffff00000000;
    (**(code **)(*plVar4 + 0x60))(plVar4,3,1,0);
    do {
      puVar1 = (ulonglong *)((longlong)&uStack_b4 + lVar14);
      *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
      lVar14 = lVar14 + 0x20;
    } while (uVar13 + 0x20 != lVar14);
    lVar14 = *plVar4;
    iVar9 = local_214;
  }
  (**(code **)(lVar14 + 0xd0))(plVar4,iVar9,local_c8);
  iVar9 = 0;
LAB_149818ab7:
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819100 FUN_149819100 body=36 status=ok
// SIG undefined FUN_149819100(void)

undefined8 FUN_149819100(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149819140 FUN_149819140 body=93 status=ok
// SIG undefined FUN_149819140(void)

void FUN_149819140(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea5de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14981919e FUN_14981919e body=123 status=ok
// SIG undefined FUN_14981919e(void)

void FUN_14981919e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bea5de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14981921a FUN_14981921a body=21 status=ok
// SIG undefined FUN_14981921a(void)

undefined8 FUN_14981921a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149819230 IAntiLag2Module body=14 status=ok
// SIG undefined IAntiLag2Module(IAntiLag2Module * this, IAntiLag2Module * param_1)

/* public: __cdecl IAntiLag2Module::IAntiLag2Module(class IAntiLag2Module const & __ptr64) __ptr64
    */

void __thiscall IAntiLag2Module::IAntiLag2Module(IAntiLag2Module *this,IAntiLag2Module *param_1)

{
                    /* 0x9819230  2  ??0IAntiLag2Module@@QEAA@AEBV0@@Z */
  *(undefined ***)this = &_vftable_;
  return;
}



// FUNCTION 14981923e IAntiLag2Module body=14 status=ok
// SIG undefined IAntiLag2Module(IAntiLag2Module * this, IAntiLag2Module * param_1)

/* public: __cdecl IAntiLag2Module::IAntiLag2Module(class IAntiLag2Module && __ptr64) __ptr64 */

void __thiscall IAntiLag2Module::IAntiLag2Module(IAntiLag2Module *this,IAntiLag2Module *param_1)

{
                    /* 0x981923e  1  ??0IAntiLag2Module@@QEAA@$$QEAV0@@Z */
  *(undefined ***)this = &_vftable_;
  return;
}



// FUNCTION 14981924c operator= body=4 status=ok
// SIG IAntiLag2Module * operator=(IAntiLag2Module * this, IAntiLag2Module * param_1)

/* public: class IAntiLag2Module & __ptr64 __cdecl IAntiLag2Module::operator=(class IAntiLag2Module
   const & __ptr64) __ptr64 */

IAntiLag2Module * __thiscall
IAntiLag2Module::operator=(IAntiLag2Module *this,IAntiLag2Module *param_1)

{
                    /* 0x981924c  20  ??4IAntiLag2Module@@QEAAAEAV0@AEBV0@@Z */
  return this;
}



// FUNCTION 149819250 operator= body=4 status=ok
// SIG IAntiLag2Module * operator=(IAntiLag2Module * this, IAntiLag2Module * param_1)

/* public: class IAntiLag2Module & __ptr64 __cdecl IAntiLag2Module::operator=(class IAntiLag2Module
   && __ptr64) __ptr64 */

IAntiLag2Module * __thiscall
IAntiLag2Module::operator=(IAntiLag2Module *this,IAntiLag2Module *param_1)

{
                    /* 0x9819250  19  ??4IAntiLag2Module@@QEAAAEAV0@$$QEAV0@@Z */
  return this;
}



// FUNCTION 149819254 ~IAntiLag2Module body=1 status=ok
// SIG void ~IAntiLag2Module(IAntiLag2Module * this)

/* public: virtual __cdecl IAntiLag2Module::~IAntiLag2Module(void) __ptr64 */

void __thiscall IAntiLag2Module::~IAntiLag2Module(IAntiLag2Module *this)

{
                    /* 0x9819254  13  ??1IAntiLag2Module@@UEAA@XZ */
  return;
}



// FUNCTION 149819256 IAntiLag2Module body=14 status=ok
// SIG undefined IAntiLag2Module(IAntiLag2Module * this)

/* public: __cdecl IAntiLag2Module::IAntiLag2Module(void) __ptr64 */

void __thiscall IAntiLag2Module::IAntiLag2Module(IAntiLag2Module *this)

{
                    /* 0x9819256  3  ??0IAntiLag2Module@@QEAA@XZ */
  *(undefined ***)this = &_vftable_;
  return;
}



// FUNCTION 14981926e FUN_14981926e body=122 status=ok
// SIG undefined FUN_14981926e(void)

void FUN_14981926e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 2;
  local_38 = 0;
  local_30 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
  *(undefined8 **)(param_3 + 8) = &local_40;
  (**(code **)(param_1 + 0x20))(param_2,param_3,param_1 + 8);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981931c FUN_14981931c body=114 status=ok
// SIG undefined FUN_14981931c(void)

longlong FUN_14981931c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)*param_2)(param_2,&DAT_14bea66c0,&local_20);
    if (local_20 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      lVar1 = local_20;
      goto LAB_149819371;
    }
  }
  lVar1 = 0;
LAB_149819371:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819390 FUN_149819390 body=26 status=ok
// SIG undefined FUN_149819390(void)

undefined8 FUN_149819390(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1498193aa(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
  return param_2;
}



// FUNCTION 1498193aa FUN_1498193aa body=362 status=ok
// SIG undefined FUN_1498193aa(void)

undefined8 *
FUN_1498193aa(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  int local_50 [4];
  undefined4 local_40;
  undefined4 local_38;
  ushort local_34;
  ushort local_32;
  int local_30;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = plVar3;
  *(undefined4 *)(param_2 + 5) = param_4;
  if (plVar3 == (longlong *)0x0) goto LAB_149819434;
  (**(code **)(*plVar3 + 0x50))(plVar3,local_50);
  *(undefined4 *)(param_2 + 4) = 0;
  if (local_50[0] == 1) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 2;
    *(undefined4 *)(param_2 + 2) = local_40;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_38;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    uVar2 = 6;
    uVar4 = 4;
    if (local_30 < 0x2d) {
      if (local_30 == 0x14) {
LAB_149819482:
        uVar2 = 0x26;
        uVar4 = 0x24;
      }
      else if (local_30 != 0x28) {
LAB_149819500:
        uVar2 = 2;
        uVar4 = 0;
      }
    }
    else if (local_30 != 0x37) {
      if (local_30 != 0x2d) goto LAB_149819500;
      goto LAB_149819482;
    }
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
    if ((local_20 & 4) != 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
    }
    puVar1 = param_2 + 1;
    *(undefined4 *)(param_2 + 2) = local_40;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_38;
    *(uint *)(param_2 + 3) = (uint)local_34;
    *(uint *)((longlong)param_2 + 0x1c) = (uint)local_32;
    if (local_50[0] == 4) {
      *(undefined4 *)puVar1 = 4;
    }
    else if (local_50[0] == 3) {
      if (local_34 == 6) {
        *(undefined4 *)puVar1 = 3;
      }
      else {
        *(undefined4 *)puVar1 = 2;
      }
    }
    else if (local_50[0] == 2) {
      *(undefined4 *)puVar1 = 1;
    }
  }
  uVar2 = FUN_1416a3386(local_30);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
LAB_149819434:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149819516 FUN_149819516 body=73 status=ok
// SIG undefined FUN_149819516(void)

void FUN_149819516(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar1 = (**(code **)(*plVar2 + 0x570))(plVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014981955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x538))(plVar2,param_2,uVar1,*(code **)(*plVar2 + 0x538));
  return;
}



// FUNCTION 149819560 FUN_149819560 body=183 status=ok
// SIG undefined FUN_149819560(void)

undefined8 FUN_149819560(void)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x3b8))();
  local_c = 0x66;
  iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,7,&local_c,4);
  uVar3 = 0;
  if (-1 < iVar1) {
    switch(local_c) {
    case 0x60:
      uVar3 = 1;
      break;
    case 0x61:
      uVar3 = 2;
      break;
    case 0x62:
      uVar3 = 3;
      break;
    case 99:
      uVar3 = 4;
      break;
    case 100:
      uVar3 = 5;
      break;
    case 0x65:
      uVar3 = 6;
      break;
    default:
      if (local_c != 0x51) {
        uVar3 = 7;
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 149819618 FUN_149819618 body=123 status=ok
// SIG undefined FUN_149819618(void)

byte FUN_149819618(void)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x3b8))();
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,0,&local_58,0x3c);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (byte)(((uint)uStack_50 & 2) >> 1) & -1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819694 FUN_149819694 body=115 status=ok
// SIG undefined FUN_149819694(void)

void FUN_149819694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_40;
  local_40 = 0xffffffffffffffff;
  local_38 = 0xffffffff;
  local_28 = 1;
  local_24 = 0;
  local_1c = 0;
  local_10 = 0;
  local_48 = 1;
  local_30 = param_3;
  local_20 = param_4;
  FUN_144760590(param_2,&local_50,0);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819754 FUN_149819754 body=110 status=ok
// SIG undefined FUN_149819754(void)

undefined8 * FUN_149819754(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0) {
    local_20 = 0;
    local_28 = 0x30004;
    local_18 = param_2;
    (**(code **)(param_1 + 0x38))(param_3 + 0x18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498197c4 FUN_1498197c4 body=114 status=ok
// SIG undefined FUN_1498197c4(void)

undefined8 FUN_1498197c4(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  if (param_2 == 0) {
    local_18 = 0;
  }
  else {
    local_28 = 0;
    local_30 = 0x30003;
    local_20 = &local_18;
    (**(code **)(param_1 + 0x38))(param_2 + 0x18,&local_30);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819838 FUN_149819838 body=129 status=ok
// SIG undefined FUN_149819838(void)

void FUN_149819838(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar4 = 0;
  puVar4[1] = param_3;
  puVar4[2] = param_2;
  puVar4[3] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar4;
    *puVar3 = puVar4;
  }
  if (param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1498198d6 FUN_1498198d6 body=322 status=ok
// SIG undefined FUN_1498198d6(void)

void FUN_1498198d6(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = *param_3;
  uVar2 = *param_4;
  local_98 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_90 = uVar1;
  uStack_84 = FUN_14981a086(*(undefined4 *)(param_3 + 5));
  uStack_80 = 0x800;
  uStack_70 = uVar2;
  uStack_64 = FUN_14981a086(*(undefined4 *)(param_4 + 5));
  uStack_60 = 0x400;
  (**(code **)(*param_2 + 0xd0))(param_2,2,&local_98);
  local_110 = &local_c8;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = uVar2;
  local_c8 = uVar1;
  (**(code **)(*param_2 + 0x80))(param_2,&local_f8,param_6 & 0xffffffff,param_6 >> 0x20);
  uVar4 = uStack_64;
  uVar3 = uStack_84;
  uStack_84 = uStack_80;
  uStack_80 = uVar3;
  uStack_64 = uStack_60;
  uStack_60 = uVar4;
  (**(code **)(*param_2 + 0xd0))(param_2,2,&local_98);
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819a1a FUN_149819a1a body=180 status=ok
// SIG undefined FUN_149819a1a(void)

void FUN_149819a1a(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  uStack_18 = param_2;
  if (*(char *)((longlong)param_3 + 100) == '\x01') {
    FUN_14981a0f2(&local_20,param_3);
  }
  else {
    puVar1 = (undefined8 *)(*param_3 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
    if ((undefined8 *)param_3[1] < puVar2) {
      FUN_140023dd8(param_3,0x28);
      puVar1 = (undefined8 *)(*param_3 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar1 + 4;
    }
    *param_3 = (ulonglong)puVar2;
    *(int *)(param_3 + 0xc) = (int)param_3[0xc] + 1;
    *(undefined8 **)param_3[6] = puVar1;
    param_3[6] = (ulonglong)(puVar1 + 1);
    puVar1[1] = 0;
    *puVar1 = &PTR_LAB_14bea6348;
    *(undefined4 *)(puVar1 + 2) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_20._4_4_;
    *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_18;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_18._4_4_;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819ad0 FUN_149819ad0 body=72 status=ok
// SIG undefined FUN_149819ad0(void)

undefined8 * FUN_149819ad0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bea6270;
  if ((HMODULE)param_1[9] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[9]);
  }
  FUN_146761f90(param_1 + 10);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 149819b18 FUN_149819b18 body=699 status=ok
// SIG undefined FUN_149819b18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_149819b18(longlong param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  LARGE_INTEGER local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined1 local_22c [132];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined1 local_17c [132];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_cc [132];
  char local_48;
  undefined1 local_47;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_48 = *(char *)(param_1 + 0xb0);
  if (local_48 == '\0') {
    FUN_149819dd4(*(undefined8 *)(param_1 + 0xb8));
    local_48 = *(char *)(param_1 + 0xb0);
  }
  local_268 = *(undefined8 *)(param_1 + 0x10);
  local_260 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined8 *)(param_1 + 0xb8);
  local_47 = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  local_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  local_250 = *(undefined8 *)(param_1 + 0x28);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar9 = 0;
  memset(local_22c,0,0x84);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  local_1a0 = *(undefined8 *)(param_1 + 0x58);
  uStack_198 = *(undefined8 *)(param_1 + 0x60);
  local_190 = *(undefined8 *)(param_1 + 0x68);
  uStack_188 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  local_258 = uVar10;
  local_230 = uVar1;
  memset(local_17c,0,0x84);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  local_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_e8 = *(undefined8 *)(param_1 + 0x90);
  local_e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa0);
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  local_1a8 = uVar3;
  local_180 = uVar2;
  memset(local_cc,0,0x84);
  local_f8 = uVar10;
  local_d0 = uVar1;
  ffxFrameInterpolationUiComposition((FfxPresentCallbackDescription *)&local_268,param_2);
  QueryPerformanceCounter(&local_270);
  lVar7 = DAT_14cc28e88;
  dVar5 = (double)local_270.QuadPart * DAT_14c83f420 + 16777216.0;
  DAT_14cc29060 = DAT_14cc29060 * 0.75 + (float)((dVar5 - _DAT_14cc29058) * 1000.0) * 0.25;
  DAT_14cc29064 = 1000.0 / DAT_14cc29060;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  _DAT_14cc29058 = dVar5;
  if (*(int *)(lVar4 + 0xc60) != 0x40000002) {
    bVar8 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar8 ^ 1);
  }
  lVar6 = DAT_14cc28e58;
  if (*(int *)(lVar7 + uVar9 * 4) != 0) {
    if (*(int *)(lVar4 + 0xc60) == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar8 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar8 ^ 1);
    }
    if (*(int *)(lVar6 + uVar9 * 4) != 0) {
      DAT_14cb0cbdc = DAT_14cc29060;
      DAT_14cb0d290 = DAT_14cc29064;
    }
  }
  FUN_147d7d58b(DAT_14cc29064);
  uVar10 = FUN_144a52528();
  FUN_1446f470e(&local_278,L"AntiLag2",1);
  plVar11 = (longlong *)FUN_1401e3324(uVar10,local_278);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x48))(plVar11,local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 149819dd4 FUN_149819dd4 body=226 status=ok
// SIG undefined FUN_149819dd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149819dd4(ulonglong param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong lStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = (longlong *)0x0;
  if (*DAT_14cc290c8 != 0) {
    do {
      local_38 = *(ulonglong *)(*DAT_14cc290c8 + 8);
      FUN_149819fa8(&lStack_30,*DAT_14cc290c8 + 0x10);
      uVar3 = local_38;
      if (param_1 < local_38) {
        uVar3 = 0;
      }
      if (param_1 - uVar3 < 4) break;
      FUN_149819eb8();
    } while (*DAT_14cc290c8 != 0);
  }
  _DAT_14cc290d0 = (undefined4)param_1;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if (lStack_30 != 0) {
    LOCK();
    puVar1 = (uint *)(lStack_30 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819eb8 FUN_149819eb8 body=239 status=ok
// SIG undefined FUN_149819eb8(void)

void FUN_149819eb8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong lStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  plVar4 = DAT_14cc290c8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)*DAT_14cc290c8;
  if (plVar3 != (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_38 = 0;
    lStack_30 = 0;
    DAT_14cc290c8 = plVar3;
    plVar3[1] = 0;
    FUN_14981a01e(plVar3 + 2,&lStack_30);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (lStack_30 != 0) {
      LOCK();
      puVar1 = (uint *)(lStack_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (plVar4 != (longlong *)0x0) {
      if ((longlong *)plVar4[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar4[3] + 0x10))();
      }
      if (plVar4[2] != 0) {
        LOCK();
        puVar1 = (uint *)(plVar4[2] + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      thunk_FUN_1400020a8(plVar4,0x20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149819fa8 FUN_149819fa8 body=117 status=ok
// SIG undefined FUN_149819fa8(void)

longlong * FUN_149819fa8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = *param_2;
  lVar4 = *param_1;
  if (lVar4 != lVar3) {
    *param_1 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  plVar6 = (longlong *)param_1[1];
  if (plVar6 != plVar5) {
    param_1[1] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}



// FUNCTION 14981a01e FUN_14981a01e body=104 status=ok
// SIG undefined FUN_14981a01e(void)

longlong * FUN_14981a01e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    plVar4 = (longlong *)param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 14981a086 FUN_14981a086 body=107 status=ok
// SIG undefined FUN_14981a086(void)

undefined8 FUN_14981a086(int param_1)

{
  if (param_1 < 0x10) {
    if (param_1 < 8) {
      if (param_1 == 2) {
        return 8;
      }
      if (param_1 == 4) {
        return 0x40;
      }
    }
    else {
      if (param_1 == 8) {
        return 0x80;
      }
      if (param_1 == 0xc) {
        return 0xc0;
      }
    }
  }
  else if (param_1 < 0x20) {
    if (param_1 == 0x10) {
      return 0x800;
    }
    if (param_1 == 0x14) {
      return 0xac3;
    }
  }
  else {
    if (param_1 == 0x20) {
      return 0x400;
    }
    if (param_1 == 0x40) {
      return 0x200;
    }
  }
  return 0;
}



// FUNCTION 14981a0f2 FUN_14981a0f2 body=139 status=ok
// SIG undefined FUN_14981a0f2(void)

void FUN_14981a0f2(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar1 = (**(code **)(*plVar3 + 0x570))(plVar3,*(undefined8 *)(param_1 + 8));
  uVar5 = *(undefined8 *)(param_1 + 8);
  plVar4 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar2 = (**(code **)(*plVar4 + 0x570))(plVar4,uVar5);
  uVar5 = (**(code **)(*plVar4 + 0x538))(plVar4,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00014981a17a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x5a8))(plVar3,param_2,uVar1,uVar5);
  return;
}



// FUNCTION 14981a19a FUN_14981a19a body=42 status=ok
// SIG undefined FUN_14981a19a(void)

int FUN_14981a19a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x18);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10,1);
  }
  return iVar2 + -1;
}



// FUNCTION 14981a226 FUN_14981a226 body=1044 status=ok
// SIG undefined FUN_14981a226(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_14981a226(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  HWND pHVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  char local_b1;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0 [2];
  undefined8 *local_90;
  longlong **local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar11 = DAT_14cc28f30;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = (longlong *)0x0;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar13 + 0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
  }
  cVar3 = '\x01';
  if (*(int *)(lVar11 + uVar7 * 4) == 0) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_14054d46e(&DAT_14c846b20,L"fsr3swapchain");
  }
  if ((HWND)param_3[6] == (HWND)0x0) {
    bVar14 = false;
  }
  else {
    pHVar8 = GetParent((HWND)param_3[6]);
    bVar14 = pHVar8 != (HWND)0x0;
  }
  if ((cVar3 == '\0') || (bVar14)) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                      (*(longlong **)(param_1 + 0x20),param_2,param_3,&local_68);
    plVar10 = (longlong *)0x0;
  }
  else {
    local_a0[1] = 0x30005;
    local_88 = &local_68;
    local_78 = *(undefined8 *)(param_1 + 0x20);
    plVar10 = (longlong *)0x0;
    local_a0[0] = 0;
    lVar11 = *(longlong *)(param_1 + 0x38);
    local_60 = 2;
    local_58 = 0;
    local_b1 = cVar3;
    local_b0 = param_2;
    local_a8 = lVar13;
    local_80 = param_3;
    local_70 = param_2;
    local_50 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
    local_90 = &local_60;
    iVar6 = (**(code **)(lVar11 + 0x20))(local_a0,local_a0 + 1,lVar11 + 8);
    param_2 = local_b0;
    lVar13 = local_a8;
    cVar3 = local_b1;
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
      plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
      lVar13 = *(longlong *)(param_1 + 0x38);
      plVar10[1] = (longlong)&PTR_FUN_149e002e8;
      *(undefined4 *)(plVar10 + 2) = 0;
      *plVar10 = (longlong)&PTR_FUN_14bea6570;
      plVar10[1] = (longlong)&PTR_FUN_14bea66b8;
      plVar10[3] = local_a0[0];
      plVar10[4] = (longlong)local_68;
      plVar10[5] = lVar13;
      LOCK();
      *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
      UNLOCK();
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar3 = FUN_14054d46e(&DAT_14c846b20,L"fsr3hudless");
      if (cVar3 != '\0') {
        FUN_140635eb8(DAT_14cc28eb0,1,0xd000000,0);
      }
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar4 = FUN_14054d46e(&DAT_14c846b20,L"fsr3async");
      param_2 = local_b0;
      lVar13 = local_a8;
      cVar3 = local_b1;
      if (cVar4 != '\0') {
        FUN_140635eb8(DAT_14cc28f40,1,0xd000000,0);
        param_2 = local_b0;
        lVar13 = local_a8;
        cVar3 = local_b1;
      }
    }
  }
  if (iVar6 != 0) goto LAB_14981a394;
  uVar1 = *param_3;
  local_d0 = FUN_1416a3386(*(undefined4 *)(param_3 + 2));
  local_e0 = plVar10;
  if (plVar10 == (longlong *)0x0) {
    local_e0 = local_68;
  }
  local_c8 = 0;
  local_e8 = uVar1;
  local_d8 = param_2;
  plVar9 = (longlong *)
           (**(code **)**(undefined8 **)(param_1 + 0x30))
                     (*(undefined8 **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),3,uVar1);
  if (plVar9 == (longlong *)0x0) {
    iVar6 = -0x7ff8fff2;
    goto LAB_14981a394;
  }
  if (plVar10 == (longlong *)0x0) {
    plVar10 = local_68;
  }
  *param_4 = plVar10;
  piVar2 = DAT_14cc28f48;
  iVar6 = 0;
  if (cVar3 == '\0') goto LAB_14981a394;
  if (*(int *)(lVar13 + 0xc60) == 0x40000002) {
    iVar12 = *DAT_14cc28f48;
LAB_14981a48a:
    uVar7 = 0;
    lVar11 = DAT_14cc28eb8;
  }
  else {
    bVar5 = FUN_144a61b4f();
    lVar11 = DAT_14cc28eb8;
    iVar12 = piVar2[bVar5 ^ 1];
    if (*(int *)(lVar13 + 0xc60) == 0x40000002) goto LAB_14981a48a;
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
  }
  if (iVar12 == 0 && *(int *)(lVar11 + uVar7 * 4) == 0) {
    (**(code **)(*plVar9 + 0x60))(plVar9,1);
  }
  else {
    (**(code **)(*plVar9 + 0x58))(plVar9,1);
  }
LAB_14981a394:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 14981a722 FUN_14981a722 body=49 status=ok
// SIG undefined FUN_14981a722(void)

void FUN_14981a722(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_14981a226(param_1 + -8,param_3,param_4,param_5);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14981a766 FUN_14981a766 body=294 status=ok
// SIG undefined FUN_14981a766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14981a766(longlong param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0x438c996151a371da;
  uStack_b0 = 0x307830f467e22181;
  local_a8 = 0;
  uStack_a0 = 0x46000000000000c0;
  local_98 = 0x463976f3aec22fb8;
  uStack_90 = 0x2e7aa643eb28e09b;
  local_88 = 0x4d58f9de3d3e0379;
  uStack_80 = 0xa6f19229d6186cbb;
  local_78 = 0x4c0ad2e7310d36a0;
  uStack_70 = 0x6a88b8239d6a04aa;
  local_68 = 0x48760d42790a45f7;
  uStack_60 = 0xaaf4e6cf550a3a98;
  local_58 = 0x4946199fa8be2ac4;
  uStack_50 = 0xe78db99f597931b3;
  local_48 = 0x4ab0f1f894d99bdb;
  uStack_40 = 0xb1da0e17a07d36b2;
  local_38 = 0x489ebd4a3d585d5a;
  uStack_30 = 0xfb2f45b6bc3df4b1;
  local_28 = 0x438c996151a371da;
  uStack_20 = 0x307830f467e22181;
  lVar1 = 0;
  do {
    local_c8 = *(undefined1 (*) [16])((longlong)&local_b8 + lVar1);
    if (*param_2 == local_c8) {
      LOCK();
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      UNLOCK();
      *param_3 = param_1;
      goto LAB_14981a867;
    }
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xa0);
  uVar2 = 0x80004002;
  if (*param_2 == _DAT_14bea6100) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
    *param_3 = *(longlong *)(param_1 + 0x20);
LAB_14981a867:
    uVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981aaac FUN_14981aaac body=36 status=ok
// SIG undefined FUN_14981aaac(void)

undefined8 FUN_14981aaac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14981aaec FUN_14981aaec body=93 status=ok
// SIG undefined FUN_14981aaec(void)

void FUN_14981aaec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea66d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14981ab4a FUN_14981ab4a body=126 status=ok
// SIG undefined FUN_14981ab4a(void)

void FUN_14981ab4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bea66d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014981abb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14981abc8 FUN_14981abc8 body=21 status=ok
// SIG undefined FUN_14981abc8(void)

undefined8 FUN_14981abc8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14981abde FUN_14981abde body=42 status=ok
// SIG undefined FUN_14981abde(void)

void FUN_14981abde(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981ac28 FUN_14981ac28 body=96 status=ok
// SIG undefined FUN_14981ac28(void)

undefined8 FUN_14981ac28(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f10666();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc2a4f8,1);
  return uVar3;
}



// FUNCTION 14981ac88 FUN_14981ac88 body=52 status=ok
// SIG undefined FUN_14981ac88(void)

void FUN_14981ac88(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981acbc FUN_14981acbc body=42 status=ok
// SIG undefined FUN_14981acbc(void)

void FUN_14981acbc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981ad06 FUN_14981ad06 body=96 status=ok
// SIG undefined FUN_14981ad06(void)

undefined8 FUN_14981ad06(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f61a18();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc2a580,1);
  return uVar3;
}



// FUNCTION 14981ad66 FUN_14981ad66 body=52 status=ok
// SIG undefined FUN_14981ad66(void)

void FUN_14981ad66(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981ad9a FUN_14981ad9a body=42 status=ok
// SIG undefined FUN_14981ad9a(void)

void FUN_14981ad9a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981ade4 FUN_14981ade4 body=96 status=ok
// SIG undefined FUN_14981ade4(void)

undefined8 FUN_14981ade4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e4d6dc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc2a608,1);
  return uVar3;
}



// FUNCTION 14981ae44 FUN_14981ae44 body=52 status=ok
// SIG undefined FUN_14981ae44(void)

void FUN_14981ae44(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981ae78 FUN_14981ae78 body=42 status=ok
// SIG undefined FUN_14981ae78(void)

void FUN_14981ae78(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981aec2 FUN_14981aec2 body=96 status=ok
// SIG undefined FUN_14981aec2(void)

undefined8 FUN_14981aec2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed6c10();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc2a690,1);
  return uVar3;
}



// FUNCTION 14981af22 FUN_14981af22 body=52 status=ok
// SIG undefined FUN_14981af22(void)

void FUN_14981af22(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981af56 FUN_14981af56 body=239 status=ok
// SIG undefined FUN_14981af56(void)

bool FUN_14981af56(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc295f0) && (FUN_144b3d300(&DAT_14cc295f0), DAT_14cc295f0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SSR.Temporal",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14cc295e8 = 0;
    }
    else {
      DAT_14cc295e8 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14cc295f0);
  }
  lVar1 = DAT_14cc295e8;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x3020) != 2) {
      return true;
    }
    if (DAT_14cc295e8 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar3 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar3 = (ulonglong)(bVar2 ^ 1);
      }
      return *(int *)(lVar1 + uVar3 * 4) != 0;
    }
  }
  return false;
}



// FUNCTION 14981b046 FUN_14981b046 body=36 status=ok
// SIG undefined FUN_14981b046(void)

void FUN_14981b046(void)

{
  if (*DAT_14cc28a68 == 0) {
    return;
  }
  FUN_14981b07c();
  FUN_14981b0c4();
  return;
}



// FUNCTION 14981b07c FUN_14981b07c body=72 status=ok
// SIG undefined FUN_14981b07c(void)

void FUN_14981b07c(void)

{
  longlong *plVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ScreenPercentage",1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014981b0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1);
    return;
  }
  return;
}


