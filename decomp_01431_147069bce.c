// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147069bce FUN_147069bce body=113 status=ok
// SIG undefined FUN_147069bce(void)

int FUN_147069bce(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_14706600c(lVar1 + (longlong)iVar4 * 0x98,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x90 + (longlong)iVar4 * 0x98);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147069c40 FUN_147069c40 body=122 status=ok
// SIG undefined FUN_147069c40(void)

void FUN_147069c40(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x98) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98 + 4) = uVar5;
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



// FUNCTION 147069cba FUN_147069cba body=306 status=ok
// SIG undefined FUN_147069cba(void)

undefined4 * FUN_147069cba(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147069dee(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  iVar5 = FUN_144a788f7();
  uVar9 = iVar5 + (int)((ulonglong)uVar2 >> 0x20);
  cVar4 = FUN_147069ed4(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1470692ae(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147069dee FUN_147069dee body=230 status=ok
// SIG undefined FUN_147069dee(void)

int * FUN_147069dee(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147069ed4 FUN_147069ed4 body=128 status=ok
// SIG undefined FUN_147069ed4(void)

undefined8 FUN_147069ed4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147069f54((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147069f54 FUN_147069f54 body=114 status=ok
// SIG undefined FUN_147069f54(void)

void FUN_147069f54(longlong *param_1,int param_2)

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



// FUNCTION 147069fc6 FUN_147069fc6 body=130 status=ok
// SIG undefined FUN_147069fc6(void)

void FUN_147069fc6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14706a049 FUN_14706a049 body=170 status=ok
// SIG undefined FUN_14706a049(void)

void FUN_14706a049(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_38,uVar3);
  lVar2 = *param_1;
  *(longlong *)(lVar2 + 0x80) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar2 + 0x88) = (undefined4)local_30;
  *(undefined4 *)(lVar2 + 0x8c) = local_30._4_4_;
  local_30 = 0;
  *(undefined1 *)(lVar2 + 0x90) = local_28;
  FUN_140b576f0();
  FUN_147068807(local_38,local_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706a0f4 FUN_14706a0f4 body=130 status=ok
// SIG undefined FUN_14706a0f4(void)

longlong * FUN_14706a0f4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a157580;
  FUN_1405d89e4(plVar3 + 2,param_2);
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
  return param_1;
}



// FUNCTION 14706a176 FUN_14706a176 body=9 status=ok
// SIG undefined FUN_14706a176(void)

void FUN_14706a176(longlong param_1)

{
  FUN_14706a19e(param_1 + 0x10);
  return;
}



// FUNCTION 14706a180 FUN_14706a180 body=29 status=ok
// SIG undefined FUN_14706a180(void)

undefined8 FUN_14706a180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706a19e FUN_14706a19e body=65 status=ok
// SIG undefined FUN_14706a19e(void)

void FUN_14706a19e(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    FUN_147068807(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140788a7e(param_1);
  return;
}



// FUNCTION 14706a1e0 FUN_14706a1e0 body=195 status=ok
// SIG undefined FUN_14706a1e0(void)

undefined8 FUN_14706a1e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14706a049(param_1 + 0x50,param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x68);
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  local_78 = *(undefined8 *)(lVar3 + 0x80);
  local_58 = 0;
  local_48 = 0;
  local_70 = param_1;
  FUN_142afd809(local_68);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706a2a4 FUN_14706a2a4 body=38 status=ok
// SIG undefined FUN_14706a2a4(void)

undefined8 FUN_14706a2a4(undefined8 param_1,int param_2)

{
  FUN_14706a340();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706a2ca FUN_14706a2ca body=66 status=ok
// SIG undefined FUN_14706a2ca(void)

void FUN_14706a2ca(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014706a302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 14706a316 FUN_14706a316 body=12 status=ok
// SIG undefined FUN_14706a316(void)

void FUN_14706a316(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014706a31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14706a322 FUN_14706a322 body=29 status=ok
// SIG undefined FUN_14706a322(void)

undefined8 FUN_14706a322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706a340 FUN_14706a340 body=141 status=ok
// SIG undefined FUN_14706a340(void)

void FUN_14706a340(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1575a0;
  plVar3 = (longlong *)param_1[0xe];
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
  plVar3 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar3 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x00014706a3c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 14706a3dc FUN_14706a3dc body=147 status=ok
// SIG undefined FUN_14706a3dc(void)

void FUN_14706a3dc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14706a48c FUN_14706a48c body=280 status=ok
// SIG undefined FUN_14706a48c(void)

void FUN_14706a48c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_14706a9e4(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      FUN_14706aab0(lVar1);
      FUN_1400020a8(lVar1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    FUN_14020fad6(param_1,&DAT_149dfb77a);
    local_38 = L"ClearSuccess";
    local_30 = 0xc;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"XmlParser";
    local_30 = 9;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"XmlFile was cleared successfully");
    uVar2 = FUN_1447a1f4a(&local_38);
    FUN_144a787a6(param_1 + 0x10,uVar2);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706a5a6 FUN_14706a5a6 body=638 status=ok
// SIG undefined FUN_14706a5a6(void)

void FUN_14706a5a6(longlong *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      iVar11 = *(int *)(*param_1 + 8 + lVar10 * 0x10);
      uVar5 = iVar11 - 1;
      if (iVar11 == 0) {
        uVar5 = 0;
      }
      uVar13 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        plVar9 = (longlong *)(*param_1 + lVar10 * 0x10);
        uVar14 = 0;
        do {
          if (0x20 < *(ushort *)(*plVar9 + uVar14 * 2)) {
            uVar13 = uVar14 & 0xffffffff;
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
        if ((int)uVar13 != 0) {
          FUN_14496493a(plVar9,0,uVar13,0);
          iVar8 = (int)param_1[1];
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
    if (0 < iVar8) {
      lVar16 = 0;
      lVar10 = 0;
      do {
        cVar7 = FUN_144a791f8(*param_1 + lVar16,L"<!DOCTYPE",9,1);
        if ((cVar7 != '\0') ||
           (cVar7 = FUN_144a791f8(*param_1 + lVar16,L"<?xml",5,1), cVar7 != '\0')) {
          FUN_14020fad6(*param_1 + lVar16,&DAT_149dfb77a);
        }
        lVar10 = lVar10 + 1;
        lVar16 = lVar16 + 0x10;
      } while (lVar10 < (int)param_1[1]);
      if (0 < (int)param_1[1]) {
        lVar10 = *param_1;
        iVar8 = -1;
        uVar13 = 0;
        uVar14 = 0xffffffff;
        bVar6 = false;
        do {
          lVar16 = uVar13 * 0x10;
          if ((((*(int *)(lVar10 + 8 + lVar16) == 4) && (bVar6)) &&
              (psVar3 = *(short **)(lVar10 + lVar16), *psVar3 == 0x2d)) &&
             ((psVar3[1] == 0x2d && (psVar3[2] == 0x3e)))) {
            FUN_14706ab0c(param_1,uVar14,uVar13 & 0xffffffff,iVar8,2);
            lVar10 = *param_1;
            bVar6 = false;
          }
          if ((0x80000002 < *(int *)(lVar10 + 8 + lVar16) + 0x7fffffffU) &&
             (*(int *)(lVar10 + 8 + lVar16) - 5U < 0x7ffffffc)) {
            lVar15 = 3;
            iVar11 = 0;
            do {
              lVar4 = *(longlong *)(lVar10 + lVar16);
              if (bVar6) {
                if (*(short *)(lVar4 + -4 + lVar15 * 2) == 0x2d) {
                  sVar1 = *(short *)(lVar4 + -2 + lVar15 * 2);
                  if (sVar1 == 0x2d) {
                    if (*(short *)(lVar4 + lVar15 * 2) == 0x3e) {
LAB_14706a7b3:
                      FUN_14706ab0c(param_1,uVar14,uVar13 & 0xffffffff,iVar8,(int)lVar15);
                      lVar10 = *param_1;
                      bVar6 = false;
                    }
                  }
                  else if ((sVar1 == 0x3e) && (*(short *)(lVar4 + -6 + lVar15 * 2) == 0x2d))
                  goto LAB_14706a7b3;
                }
              }
              else if ((((*(short *)(lVar4 + -6 + lVar15 * 2) == 0x3c) &&
                        (*(short *)(lVar4 + -4 + lVar15 * 2) == 0x21)) &&
                       (*(short *)(lVar4 + -2 + lVar15 * 2) == 0x2d)) &&
                      (*(short *)(lVar4 + lVar15 * 2) == 0x2d)) {
                bVar6 = true;
                uVar14 = uVar13 & 0xffffffff;
                iVar8 = iVar11;
              }
              lVar15 = lVar15 + 1;
              iVar2 = *(int *)(lVar10 + 8 + lVar16);
              iVar12 = iVar2 + -1;
              if (iVar2 == 0) {
                iVar12 = 0;
              }
              iVar11 = iVar11 + 1;
            } while (lVar15 < iVar12);
          }
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 < (longlong)(int)param_1[1]);
      }
    }
  }
  return;
}



// FUNCTION 14706a824 FUN_14706a824 body=184 status=ok
// SIG undefined FUN_14706a824(void)

undefined8 * FUN_14706a824(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = (int)param_3[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1408be2c4(param_2);
    if ((longlong)(int)param_3[1] != 0) {
      puVar3 = (undefined8 *)*param_3;
      puVar2 = puVar3 + (longlong)(int)param_3[1] * 2;
      do {
        local_48 = *puVar3;
        local_40 = *(int *)(puVar3 + 1) + -1;
        if (*(int *)(puVar3 + 1) == 0) {
          local_40 = 0;
        }
        FUN_14706ac34(param_1,&local_48,param_2);
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706a8de FUN_14706a8de body=261 status=ok
// SIG undefined FUN_14706a8de(void)

void FUN_14706a8de(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x29) = 0;
  local_48 = *param_2;
  local_40 = *(undefined4 *)(param_2 + 1);
  lVar1 = FUN_14706b076(param_1,&local_48);
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    local_38 = L"NodeCreateFail";
    local_30 = 0xe;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"XmlParser";
    local_30 = 9;
    FUN_1446e940c(local_50,&local_38);
    FUN_140208bae(&local_38,local_50,local_4c,L"Failed to parse the loaded document");
    uVar2 = FUN_1447a1f4a(&local_38);
    FUN_144a787a6(param_1 + 0x10,uVar2);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 1;
    FUN_14706bc80(lVar1);
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706a9e4 FUN_14706a9e4 body=203 status=ok
// SIG undefined FUN_14706a9e4(void)

void FUN_14706a9e4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  *param_1 = 0;
  local_30 = *(uint *)(param_1 + 1);
  local_2c = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      FUN_14706bcd2(&local_38,*(undefined8 *)(local_38 + uVar3 * 8));
      lVar2 = local_38;
      uVar3 = uVar3 + 1;
    } while (uVar3 != local_30);
    lVar4 = (longlong)(int)local_30;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar5);
      if (lVar1 != 0) {
        FUN_14706aab0(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706aab0 FUN_14706aab0 body=92 status=ok
// SIG undefined FUN_14706aab0(void)

void FUN_14706aab0(longlong *param_1)

{
  FUN_14706a9e4();
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14706bec3(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14706ab0c FUN_14706ab0c body=296 status=ok
// SIG undefined FUN_14706ab0c(void)

void FUN_14706ab0c(longlong *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_2 < (int)param_3) {
    lVar6 = *param_1;
    lVar1 = (longlong)(int)param_2 * 0x10;
    iVar3 = *(int *)(lVar6 + 8 + lVar1);
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    if (param_4 < iVar4) {
      lVar5 = (longlong)param_4;
      do {
        *(undefined2 *)(*(longlong *)(lVar6 + lVar1) + lVar5 * 2) = 0x20;
        lVar5 = lVar5 + 1;
        lVar6 = *param_1;
        iVar3 = *(int *)(lVar6 + 8 + lVar1);
        iVar4 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar4 = 0;
        }
      } while (lVar5 < iVar4);
    }
    if ((int)(param_2 + 1) < (int)param_3 && param_3 - param_2 != 1) {
      iVar3 = ~param_2 + param_3;
      lVar6 = (longlong)(int)(param_2 + 1) << 4;
      do {
        FUN_14020fad6(*param_1 + lVar6);
        lVar6 = lVar6 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (-1 < param_5) {
      uVar2 = 0;
      do {
        *(undefined2 *)(*(longlong *)(*param_1 + (longlong)(int)param_3 * 0x10) + uVar2 * 2) = 0x20;
        uVar2 = uVar2 + 1;
      } while (param_5 + 1 != uVar2);
    }
  }
  if (param_4 <= param_5 && param_3 == param_2) {
    lVar6 = (longlong)param_4;
    iVar3 = (param_5 - param_4) + 1;
    do {
      *(undefined2 *)(*(longlong *)(*param_1 + (longlong)(int)param_3 * 0x10) + lVar6 * 2) = 0x20;
      lVar6 = lVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 14706ac34 FUN_14706ac34 body=1089 status=ok
// SIG undefined FUN_14706ac34(void)

void FUN_14706ac34(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  lVar11 = (longlong)(int)param_2[1];
  local_60 = param_1;
  if (lVar11 != 0) {
    lVar9 = *param_2;
    local_70 = lVar11 * 2 + -2;
    lVar11 = lVar11 * 2;
    bVar4 = true;
    lVar8 = 0;
    bVar5 = false;
    local_68 = lVar11;
    do {
      uVar1 = *(ushort *)(lVar9 + lVar8);
      if (((0x20 < uVar1) || (bVar5)) || ((uVar1 == 10 && (*(char *)(local_60 + 0x2a) != '\0')))) {
        if ((uint)uStack_50 < 2) {
          FUN_140002184();
          if (*(ushort *)(lVar9 + lVar8) == 0x2f) {
            if ((local_70 == lVar8) || (*(short *)(lVar9 + 2 + lVar8) != 0x3e)) {
              if (lVar8 != 0) {
                uVar6 = *(ushort *)(lVar9 + -2 + lVar8);
                goto joined_r0x00014706ae15;
              }
              goto LAB_14706afdc;
            }
          }
          else {
            uVar6 = *(ushort *)(lVar9 + lVar8) & 0xfffd;
joined_r0x00014706ae15:
            if (uVar6 != 0x3c) {
LAB_14706afdc:
              bVar4 = true;
              goto LAB_14706afe2;
            }
          }
          if (uVar1 == 0x3e) goto LAB_14706ae25;
        }
        else {
          if (bVar4) {
            if (uVar1 == 0x2f) {
              if (((local_70 != lVar8) && (*(short *)(lVar9 + 2 + lVar8) == 0x3e)) ||
                 ((lVar8 != 0 && (*(short *)(lVar9 + -2 + lVar8) == 0x3c)))) {
                bVar12 = false;
LAB_14706ad2c:
                iVar2 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                  FUN_1447a1bd6(param_3,iVar2);
                }
                lVar11 = *param_3;
                lVar10 = (longlong)iVar2 * 0x10;
                bVar5 = false;
                *(undefined8 *)(lVar11 + lVar10) = 0;
                *(longlong *)(lVar11 + lVar10) = local_58;
                local_58 = 0;
                *(uint *)(lVar11 + 8 + lVar10) = (uint)uStack_50;
                *(undefined4 *)(lVar11 + 0xc + lVar10) = uStack_50._4_4_;
                uStack_50 = 0;
                FUN_140002184();
                lVar11 = local_68;
                bVar4 = false;
                if (bVar12) {
                  lVar10 = param_3[1];
                  uVar7 = (int)lVar10 + 1;
                  *(uint *)(param_3 + 1) = uVar7;
                  if (*(uint *)((longlong)param_3 + 0xc) < uVar7) {
                    FUN_1447a1bd6(param_3);
                  }
                  lVar3 = *param_3;
                  lVar10 = (longlong)(int)lVar10 * 0x10;
                  bVar5 = false;
                  *(undefined8 *)(lVar3 + lVar10) = 0;
                  *(longlong *)(lVar3 + lVar10) = local_58;
                  local_58 = 0;
                  *(uint *)(lVar3 + 8 + lVar10) = (uint)uStack_50;
                  *(undefined4 *)(lVar3 + 0xc + lVar10) = uStack_50._4_4_;
                  uStack_50 = 0;
                  goto LAB_14706afdc;
                }
                goto LAB_14706afe2;
              }
            }
            else {
              bVar12 = uVar1 == 0x3e;
              if (((uVar1 & 0xfffd) == 0x3c) && (!(bool)(bVar12 & bVar5))) goto LAB_14706ad2c;
            }
            bVar5 = (bool)(bVar5 ^ uVar1 == 0x22);
            FUN_140002184();
            bVar4 = true;
            lVar11 = local_68;
            goto LAB_14706afe2;
          }
          if (uVar1 == 0x2f) {
            if (((local_70 == lVar8) || (*(short *)(lVar9 + 2 + lVar8) != 0x3e)) &&
               ((lVar8 == 0 || (*(short *)(lVar9 + -2 + lVar8) != 0x3c)))) {
LAB_14706af83:
              lVar10 = param_3[1];
              uVar7 = (int)lVar10 + 1;
              *(uint *)(param_3 + 1) = uVar7;
              if (*(uint *)((longlong)param_3 + 0xc) < uVar7) {
                FUN_1447a1bd6(param_3);
              }
              lVar3 = *param_3;
              lVar10 = (longlong)(int)lVar10 * 0x10;
              *(undefined8 *)(lVar3 + lVar10) = 0;
              *(longlong *)(lVar3 + lVar10) = local_58;
              local_58 = 0;
              *(uint *)(lVar3 + 8 + lVar10) = (uint)uStack_50;
              *(undefined4 *)(lVar3 + 0xc + lVar10) = uStack_50._4_4_;
              uStack_50 = 0;
              FUN_140002184();
              goto LAB_14706afdc;
            }
            FUN_140002184();
          }
          else {
            if ((uVar1 & 0xfffd) != 0x3c) goto LAB_14706af83;
            FUN_140002184();
            if (uVar1 == 0x3e) {
              lVar10 = param_3[1];
              uVar7 = (int)lVar10 + 1;
              *(uint *)(param_3 + 1) = uVar7;
              if (*(uint *)((longlong)param_3 + 0xc) < uVar7) {
                FUN_1447a1bd6(param_3);
              }
              lVar3 = *param_3;
              lVar10 = (longlong)(int)lVar10 * 0x10;
              bVar4 = false;
              *(undefined8 *)(lVar3 + lVar10) = 0;
              *(longlong *)(lVar3 + lVar10) = local_58;
              local_58 = 0;
              *(uint *)(lVar3 + 8 + lVar10) = (uint)uStack_50;
              *(undefined4 *)(lVar3 + 0xc + lVar10) = uStack_50._4_4_;
              uStack_50 = 0;
              goto LAB_14706afe2;
            }
          }
        }
        bVar4 = false;
      }
      else if (1 < (uint)uStack_50) {
LAB_14706ae25:
        lVar10 = param_3[1];
        uVar7 = (int)lVar10 + 1;
        *(uint *)(param_3 + 1) = uVar7;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar7) {
          FUN_1447a1bd6(param_3);
        }
        lVar3 = *param_3;
        lVar10 = (longlong)(int)lVar10 * 0x10;
        *(undefined8 *)(lVar3 + lVar10) = 0;
        *(longlong *)(lVar3 + lVar10) = local_58;
        local_58 = 0;
        *(uint *)(lVar3 + 8 + lVar10) = (uint)uStack_50;
        *(undefined4 *)(lVar3 + 0xc + lVar10) = uStack_50._4_4_;
        uStack_50 = 0;
      }
LAB_14706afe2:
      lVar8 = lVar8 + 2;
    } while (lVar11 != lVar8);
    if (1 < (uint)uStack_50) {
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_3,iVar2);
      }
      lVar11 = *param_3;
      lVar9 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar11 + lVar9) = 0;
      *(longlong *)(lVar11 + lVar9) = local_58;
      local_58 = 0;
      *(uint *)(lVar11 + 8 + lVar9) = (uint)uStack_50;
      *(undefined4 *)(lVar11 + 0xc + lVar9) = uStack_50._4_4_;
      uStack_50 = 0;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706b076 FUN_14706b076 body=3001 status=ok
// SIG undefined FUN_14706b076(void)

/* WARNING: Removing unreachable block (ram,0x00014706b610) */
/* WARNING: Removing unreachable block (ram,0x00014706b61f) */

undefined8 * FUN_14706b076(longlong param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *unaff_RBP;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  byte local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  plVar17 = (longlong *)*param_2;
  plVar15 = plVar17 + (longlong)*(int *)(param_2 + 1) * 2;
  lVar9 = param_1 + 0x10;
  do {
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (plVar17 == plVar15) {
      plVar17 = plVar15;
      if ((int)uStack_b0 != 0) {
        *(undefined1 *)(param_1 + 0x29) = 1;
        local_98 = L"MalformedXMLFile";
        local_90._0_4_ = 0x10;
        FUN_1446e940c(&local_78,&local_98);
        local_98 = L"XmlParser";
        local_90 = CONCAT44(local_90._4_4_,9);
        FUN_1446e940c(local_a8,&local_98);
        FUN_140208bae(&local_98,local_a8,&local_78);
        uVar8 = FUN_1447a1f4a(&local_98);
        FUN_144a787a6(lVar9,uVar8);
        if (local_98 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_98 + 0x10))();
        }
      }
LAB_14706b173:
      cVar4 = '\x01';
      puVar16 = (undefined8 *)0x0;
    }
    else {
      puVar11 = &DAT_149dfb77a;
      if ((int)plVar17[1] != 0) {
        puVar11 = (undefined2 *)*plVar17;
      }
      iVar5 = FUN_144a80a00(puVar11,&DAT_149e06342);
      if (iVar5 == 0) {
LAB_14706b1f8:
        *(undefined1 *)(param_1 + 0x29) = 1;
        local_98 = L"MalformedXMLFile";
        local_90._0_4_ = 0x10;
        FUN_1446e940c(&local_78,&local_98);
        local_98 = L"XmlParser";
        local_90 = CONCAT44(local_90._4_4_,9);
        FUN_1446e940c(local_a8,&local_98);
        FUN_140208bae(&local_98,local_a8,&local_78);
        uVar8 = FUN_1447a1f4a(&local_98);
        FUN_144a787a6(lVar9,uVar8);
        if (local_98 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_98 + 0x10))();
        }
        goto LAB_14706b173;
      }
      puVar11 = &DAT_149dfb77a;
      if ((int)plVar17[1] != 0) {
        puVar11 = (undefined2 *)*plVar17;
      }
      iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579f8);
      if (iVar5 == 0) goto LAB_14706b1f8;
      puVar11 = &DAT_149dfb77a;
      if ((int)plVar17[1] != 0) {
        puVar11 = (undefined2 *)*plVar17;
      }
      iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579fe);
      puVar16 = unaff_RBP;
      if (iVar5 == 0) {
        plVar13 = plVar17 + 2;
        if (plVar13 != plVar15) {
          puVar11 = &DAT_149dfb77a;
          if ((int)plVar17[3] != 0) {
            puVar11 = (undefined2 *)*plVar13;
          }
          iVar5 = FUN_144a80a00(puVar11,&DAT_149e0633e);
          if (iVar5 != 0) {
            puVar11 = &DAT_149dfb77a;
            if ((int)plVar17[3] != 0) {
              puVar11 = (undefined2 *)*plVar13;
            }
            iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579fe);
            if (iVar5 != 0) {
              puVar11 = &DAT_149dfb77a;
              if ((int)plVar17[3] != 0) {
                puVar11 = (undefined2 *)*plVar13;
              }
              iVar5 = FUN_144a80a00(puVar11,&DAT_149e06342);
              if (iVar5 != 0) {
                puVar11 = &DAT_149dfb77a;
                if ((int)plVar17[3] != 0) {
                  puVar11 = (undefined2 *)*plVar13;
                }
                iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579f8);
                if (iVar5 != 0) {
                  plVar19 = plVar17 + 4;
                  FUN_144a787a6(&local_c8,plVar13);
                  do {
                    if (plVar19 == plVar15) goto LAB_14706b1f8;
                    puVar11 = &DAT_149dfb77a;
                    if ((int)plVar19[1] != 0) {
                      puVar11 = (undefined2 *)*plVar19;
                    }
                    iVar5 = FUN_144a80a00(puVar11,&DAT_149e0633e);
                    if (iVar5 == 0) goto LAB_14706b1f8;
                    puVar11 = &DAT_149dfb77a;
                    if ((int)plVar19[1] != 0) {
                      puVar11 = (undefined2 *)*plVar19;
                    }
                    iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579fe);
                    if (iVar5 == 0) goto LAB_14706b1f8;
                    puVar11 = &DAT_149dfb77a;
                    if ((int)plVar19[1] != 0) {
                      puVar11 = (undefined2 *)*plVar19;
                    }
                    iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579f8);
                    if (iVar5 == 0) goto LAB_14706b1f8;
                    puVar11 = &DAT_149dfb77a;
                    if ((int)plVar19[1] != 0) {
                      puVar11 = (undefined2 *)*plVar19;
                    }
                    plVar19 = plVar19 + 2;
                    iVar5 = FUN_144a80a00(puVar11,&DAT_149e06342);
                  } while (iVar5 != 0);
                  plVar17 = plVar19;
                  if ((int)uStack_b0 == 0) {
LAB_14706b9ea:
                    *(undefined1 *)(param_1 + 0x29) = 1;
                    local_98 = L"MalformedXMLFile";
                    local_90._0_4_ = 0x10;
                    FUN_1446e940c(&local_78,&local_98);
                    local_98 = L"XmlParser";
                    local_90 = CONCAT44(local_90._4_4_,9);
                    FUN_1446e940c(local_a8,&local_98);
                    FUN_140208bae(&local_98,local_a8,&local_78);
                    uVar8 = FUN_1447a1f4a(&local_98);
                    FUN_144a787a6(lVar9,uVar8);
                    if (local_98 != (wchar_t *)0x0) {
                      (**(code **)(*(longlong *)local_98 + 0x10))();
                    }
                    goto LAB_14706b173;
                  }
                  iVar5 = (int)uStack_b0 + -1;
                  iVar6 = *(int *)(local_b8[iVar5] + 0x28);
                  if (iVar6 == (int)uStack_c0) {
                    if (1 < iVar6) {
                      iVar5 = FUN_144a80a00(*(undefined8 *)(local_b8[iVar5] + 0x20),local_c8);
                      if (iVar5 != 0) goto LAB_14706b9ea;
                      iVar5 = (int)uStack_b0 + -1;
                    }
                  }
                  else if ((int)uStack_c0 + iVar6 != 1) goto LAB_14706b9ea;
                  puVar10 = (undefined8 *)local_b8[(longlong)(int)uStack_b0 + -1];
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar5);
                  FUN_14706bf00(&local_b8);
                  cVar4 = ((int)uStack_b0 != 0) * '\x02' + '\x01';
                  if ((int)uStack_b0 == 0) {
                    puVar16 = puVar10;
                  }
                  goto LAB_14706b175;
                }
              }
            }
          }
        }
        goto LAB_14706b1f8;
      }
      puVar11 = &DAT_149dfb77a;
      if ((int)plVar17[1] != 0) {
        puVar11 = (undefined2 *)*plVar17;
      }
      iVar5 = FUN_144a80a00(puVar11,&DAT_149e0633e);
      if (iVar5 == 0) {
        plVar13 = plVar17 + 2;
        if (plVar13 != plVar15) {
          puVar11 = &DAT_149dfb77a;
          if ((int)plVar17[3] != 0) {
            puVar11 = (undefined2 *)*plVar13;
          }
          iVar5 = FUN_144a80a00(puVar11,&DAT_149e0633e);
          if (iVar5 != 0) {
            puVar11 = &DAT_149dfb77a;
            if ((int)plVar17[3] != 0) {
              puVar11 = (undefined2 *)*plVar13;
            }
            iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579fe);
            if (iVar5 != 0) {
              puVar11 = &DAT_149dfb77a;
              if ((int)plVar17[3] != 0) {
                puVar11 = (undefined2 *)*plVar13;
              }
              iVar5 = FUN_144a80a00(puVar11,&DAT_149e06342);
              if (iVar5 != 0) {
                if ((int)plVar17[3] == 0) {
                  puVar11 = &DAT_149dfb77a;
                }
                else {
                  puVar11 = (undefined2 *)*plVar13;
                }
                iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579f8);
                if (iVar5 != 0) {
                  plVar19 = plVar17 + 4;
                  FUN_144a787a6(&local_c8,plVar13);
                  if (plVar19 != plVar15) {
LAB_14706b3b7:
                    local_e8 = lVar9;
                    puVar11 = &DAT_149dfb77a;
                    if ((int)plVar19[1] != 0) {
                      puVar11 = (undefined2 *)*plVar19;
                    }
                    plVar13 = plVar19 + 2;
                    iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579f8);
                    if (iVar5 == 0) {
LAB_14706ba8d:
                      puVar10 = (undefined8 *)FUN_14001cc68(0x48);
                      *puVar10 = 0;
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                      puVar10[3] = 0;
                      puVar10[4] = 0;
                      puVar10[5] = 0;
                      puVar10[6] = 0;
                      puVar10[7] = 0;
                      puVar10[8] = 0;
                      puVar10[4] = local_c8;
                      local_c8 = 0;
                      *(int *)(puVar10 + 5) = (int)uStack_c0;
                      *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_c0._4_4_;
                      uStack_c0 = 0;
                      FUN_14706bc30(puVar10 + 2,&local_d8);
                      plVar17 = plVar13;
                      if ((int)uStack_b0 == 0) {
                        cVar4 = '\x01';
                        puVar16 = puVar10;
                        lVar9 = local_e8;
                        iVar6 = 0;
                        if (iVar5 == 0) goto LAB_14706b175;
                      }
                      else {
                        plVar13 = (longlong *)local_b8[(int)uStack_b0 + -1];
                        lVar9 = plVar13[1];
                        uVar7 = (int)lVar9 + 1;
                        *(uint *)(plVar13 + 1) = uVar7;
                        if (*(uint *)((longlong)plVar13 + 0xc) < uVar7) {
                          local_e0 = plVar13;
                          FUN_14706bf9c(plVar13);
                          plVar13 = local_e0;
                        }
                        cVar4 = '\0';
                        *(undefined8 **)(*plVar13 + (longlong)(int)lVar9 * 8) = puVar10;
                        lVar9 = local_e8;
                        if (iVar5 == 0) goto LAB_14706b175;
                        iVar6 = (int)uStack_b0;
                      }
                      lVar9 = local_e8;
                      uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar6 + 1U);
                      if (uStack_b0._4_4_ < iVar6 + 1U) {
                        FUN_14706bf9c(&local_b8,iVar6);
                      }
                      local_b8[iVar6] = (longlong)puVar10;
                      cVar4 = '\0';
                      puVar16 = unaff_RBP;
                      goto LAB_14706b175;
                    }
                    puVar11 = &DAT_149dfb77a;
                    if ((int)plVar19[1] != 0) {
                      puVar11 = (undefined2 *)*plVar19;
                    }
                    iVar6 = FUN_144a80a00(puVar11,&DAT_149e06342);
                    lVar9 = local_e8;
                    if (iVar6 == 0) goto LAB_14706ba8d;
                    puVar11 = &DAT_149dfb77a;
                    if ((int)plVar19[1] != 0) {
                      puVar11 = (undefined2 *)*plVar19;
                    }
                    iVar5 = FUN_144a80a00(puVar11,&DAT_149e0633e);
                    if (iVar5 != 0) {
                      puVar11 = &DAT_149dfb77a;
                      if ((int)plVar19[1] != 0) {
                        puVar11 = (undefined2 *)*plVar19;
                      }
                      iVar5 = FUN_144a80a00(puVar11,&DAT_14a1579fe);
                      if (iVar5 != 0) {
                        if ((longlong)(int)plVar19[1] != 0) {
                          lVar9 = (longlong)(int)plVar19[1] * 2;
                          lVar18 = 0;
                          do {
                            if (*(short *)(*plVar19 + lVar18 * 2) == 0x3d) {
                              iVar5 = (int)lVar18;
                              if (iVar5 != -1) {
                                local_61 = 0;
                                FUN_144a49bb4(plVar19,&local_78,iVar5 + 1);
                                FUN_140db34e8(&local_78,&local_61);
                                if (local_61 == 0) {
                                  FUN_140db34f4(&local_78,0x27,&local_61);
                                }
                                pwVar1 = local_98;
                                uVar8 = local_90;
                                uVar2 = local_88;
                                uVar3 = local_80;
                                if ((local_61 & 1) == 0) goto LAB_14706b500;
                                if ((longlong)local_70 == 0) goto LAB_14706b52c;
                                uVar12 = 0;
                                goto LAB_14706b649;
                              }
                              break;
                            }
                            lVar18 = lVar18 + 1;
                            lVar9 = lVar9 + -2;
                          } while (lVar9 != 0);
                        }
                        goto LAB_14706b487;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_14706b1f8;
      }
      if ((int)uStack_b0 == 0) {
        if (*(char *)(param_1 + 0x2a) != '\x01') goto LAB_14706b1f8;
        lVar18 = *plVar17;
        iVar5 = (int)plVar17[1];
        if (lVar18 + (longlong)iVar5 * 2 + -2 != lVar18 && iVar5 != 0) {
          lVar14 = 0;
          do {
            if (0x20 < *(ushort *)(lVar18 + lVar14)) goto LAB_14706b1f8;
            lVar14 = lVar14 + 2;
          } while ((longlong)iVar5 * 2 + -2 != lVar14);
        }
        cVar4 = '\x03';
        plVar17 = plVar17 + 2;
      }
      else {
        lVar18 = local_b8[(int)uStack_b0 + -1] + 0x30;
        if ((*(int *)(local_b8[(int)uStack_b0 + -1] + 0x38) - 2U < 0x7fffffff) &&
           ((*(char *)(param_1 + 0x2a) != '\x01' ||
            (cVar4 = FUN_144a38768(lVar18,&DAT_149e01f72,1,1), cVar4 == '\0')))) {
          FUN_1400020e8(lVar18,&DAT_149e001d8,1);
        }
        iVar5 = (int)plVar17[1] + -1;
        if ((int)plVar17[1] == 0) {
          iVar5 = 0;
        }
        FUN_1400020e8(lVar18,*plVar17,iVar5);
        cVar4 = '\x03';
        plVar17 = plVar17 + 2;
      }
    }
LAB_14706b175:
    FUN_14706bec3(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    unaff_RBP = puVar16;
    if ((cVar4 != '\0') && (cVar4 != '\x03')) {
      if (((int)uStack_b0 != 0) && (lVar9 = *local_b8, lVar9 != 0)) {
        FUN_14706aab0(lVar9);
        FUN_1400020a8(lVar9);
      }
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return puVar16;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
  while (uVar12 = uVar12 + 2, (longlong)local_70 * 2 != uVar12) {
LAB_14706b649:
    if (*(short *)(local_78 + uVar12) == 0x26) {
      if ((int)(~uVar12 >> 1) != 0) {
        FUN_1448097c4(&local_78,L"&quot;",&DAT_149e01f5a,0);
        FUN_1448097c4(&local_78,L"&amp;",&DAT_149e05ec0);
        FUN_1448097c4(&local_78,L"&apos;",&DAT_149e0208a);
        FUN_1448097c4(&local_78,L"&lt;",&DAT_149e0633e);
        FUN_1448097c4(&local_78,L"&gt;",&DAT_149e06342);
      }
      break;
    }
  }
LAB_14706b52c:
  puVar11 = &DAT_149dfb77a;
  iVar6 = (int)plVar19[1] + -1;
  if ((int)plVar19[1] == 0) {
    iVar6 = 0;
  }
  else {
    puVar11 = (undefined2 *)*plVar19;
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  FUN_14006620a(local_a8,puVar11,iVar6);
  FUN_14706bda2(&local_98,local_a8,&local_78);
  uVar12 = uStack_d0;
  lVar9 = (longlong)(int)uStack_d0;
  uVar7 = (int)uStack_d0 + 1;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar7);
  if (uStack_d0._4_4_ < uVar7) {
    FUN_14706be3e(&local_d8,uVar12 & 0xffffffff);
  }
  lVar9 = lVar9 * 0x20;
  *(undefined8 *)(local_d8 + lVar9) = 0;
  *(wchar_t **)(local_d8 + lVar9) = local_98;
  *(undefined4 *)(local_d8 + 8 + lVar9) = (undefined4)local_90;
  *(undefined4 *)(local_d8 + 0xc + lVar9) = local_90._4_4_;
  *(undefined8 *)(local_d8 + 0x10 + lVar9) = 0;
  *(undefined8 *)(local_d8 + 0x10 + lVar9) = local_88;
  *(undefined4 *)(local_d8 + 0x18 + lVar9) = (undefined4)local_80;
  *(undefined4 *)(local_d8 + 0x1c + lVar9) = local_80._4_4_;
  local_80 = 0;
  uVar3 = local_80;
  local_88 = 0;
  uVar2 = local_88;
  local_90 = 0;
  uVar8 = local_90;
  local_98 = (wchar_t *)0x0;
  pwVar1 = local_98;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = (wchar_t *)0x0;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
    pwVar1 = local_98;
    uVar8 = local_90;
    uVar2 = local_88;
    uVar3 = local_80;
  }
LAB_14706b500:
  local_80 = uVar3;
  local_88 = uVar2;
  local_90 = uVar8;
  local_98 = pwVar1;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_14706b487:
  lVar9 = local_e8;
  plVar19 = plVar13;
  if (plVar13 == plVar15) goto LAB_14706b1f8;
  goto LAB_14706b3b7;
}



// FUNCTION 14706bc30 FUN_14706bc30 body=80 status=ok
// SIG undefined FUN_14706bc30(void)

longlong * FUN_14706bc30(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14706bec3(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14706bc80 FUN_14706bc80 body=81 status=ok
// SIG undefined FUN_14706bc80(void)

void FUN_14706bc80(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((param_1 != (longlong *)0x0) && (0 < (int)param_1[1])) {
    uVar2 = 0;
    do {
      FUN_14706bc80(*(undefined8 *)(*param_1 + uVar2 * 8));
      iVar1 = (int)param_1[1];
      if (uVar2 != iVar1 - 1) {
        *(undefined8 *)(*(longlong *)(*param_1 + uVar2 * 8) + 0x40) =
             *(undefined8 *)(*param_1 + 8 + uVar2 * 8);
        iVar1 = (int)param_1[1];
      }
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)iVar1);
  }
  return;
}



// FUNCTION 14706bcd2 FUN_14706bcd2 body=100 status=ok
// SIG undefined FUN_14706bcd2(void)

void FUN_14706bcd2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14706bf9c(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 14706bd36 FUN_14706bd36 body=108 status=ok
// SIG undefined FUN_14706bd36(void)

longlong FUN_14706bd36(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if (0 < (longlong)(int)lVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar4 * 8);
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + 0x28);
        if (iVar3 == *(int *)(param_2 + 1)) {
          if (iVar3 < 2) {
            return lVar1;
          }
          iVar3 = FUN_144a80a00(*(undefined8 *)(lVar1 + 0x20),*param_2);
          if (iVar3 == 0) {
            return *(longlong *)(*param_1 + lVar4 * 8);
          }
        }
        else if (*(int *)(param_2 + 1) + iVar3 == 1) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  return 0;
}



// FUNCTION 14706bda2 FUN_14706bda2 body=155 status=ok
// SIG undefined FUN_14706bda2(void)

undefined8 * FUN_14706bda2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14706be3e FUN_14706be3e body=132 status=ok
// SIG undefined FUN_14706be3e(void)

void FUN_14706be3e(longlong param_1,int param_2)

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



// FUNCTION 14706bec3 FUN_14706bec3 body=61 status=ok
// SIG undefined FUN_14706bec3(void)

void FUN_14706bec3(longlong param_1,int param_2)

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



// FUNCTION 14706bf00 FUN_14706bf00 body=62 status=ok
// SIG undefined FUN_14706bf00(void)

void FUN_14706bf00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14706bf3e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14706bf3e FUN_14706bf3e body=93 status=ok
// SIG undefined FUN_14706bf3e(void)

ulonglong FUN_14706bf3e(uint param_1,uint param_2)

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



// FUNCTION 14706bf9c FUN_14706bf9c body=132 status=ok
// SIG undefined FUN_14706bf9c(void)

void FUN_14706bf9c(longlong param_1,int param_2)

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



// FUNCTION 14706c022 FUN_14706c022 body=52 status=ok
// SIG undefined FUN_14706c022(void)

void FUN_14706c022(longlong *param_1)

{
  FUN_14706a48c();
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14706c056 FUN_14706c056 body=281 status=ok
// SIG undefined FUN_14706c056(void)

undefined8 *
FUN_14706c056(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a157a30;
  param_1[1] = &PTR_FUN_14a157a60;
  param_1[2] = &PTR_LAB_14a157a90;
  param_1[3] = &PTR_LAB_14a157ab0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 6) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  FUN_14706c170(param_1 + 8);
  param_1[0x13] = *param_3;
  lVar1 = param_3[1];
  param_1[0x14] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_1412e3d1e((longlong)param_1 + 0xac);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = *param_4;
  lVar1 = param_4[1];
  param_1[0x1b] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar5 = (**(code **)(*(longlong *)param_1[0x13] + 0x90))();
  local_48 = FUN_14706c2c4;
  local_40 = 0;
  FUN_14706c1d6(uVar5,local_38,param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706c170 FUN_14706c170 body=101 status=ok
// SIG undefined FUN_14706c170(void)

undefined8 * FUN_14706c170(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x28,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  *param_1 = lpCriticalSection;
  return param_1;
}



// FUNCTION 14706c1d6 FUN_14706c1d6 body=237 status=ok
// SIG undefined FUN_14706c1d6(void)

undefined8
FUN_14706c1d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14a158400;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706c2c4 FUN_14706c2c4 body=92 status=ok
// SIG undefined FUN_14706c2c4(void)

void FUN_14706c2c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)*param_1)();
  param_1[0x13] = 0;
  plVar3 = (longlong *)param_1[0x14];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x14] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014706c314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14706c320 FUN_14706c320 body=405 status=ok
// SIG undefined FUN_14706c320(void)

void FUN_14706c320(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a157a30;
  param_1[1] = &PTR_FUN_14a157a60;
  param_1[2] = &PTR_LAB_14a157a90;
  param_1[3] = &PTR_LAB_14a157ab0;
  FUN_14706c564();
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    uVar4 = (**(code **)(*(longlong *)param_1[0x13] + 0x90))();
    FUN_140457ffc(uVar4,param_1);
    (**(code **)(*(longlong *)param_1[0x13] + 0x60))((longlong *)param_1[0x13],param_1 + 6);
    local_38 = 0;
    uStack_30 = 0;
    FUN_14706c4b6(param_1 + 8,&local_38);
    if ((longlong)(int)uStack_30 != 0) {
      lVar5 = (longlong)(int)uStack_30 << 4;
      lVar6 = local_38;
      do {
        (**(code **)(*(longlong *)param_1[0x13] + 0x60))((longlong *)param_1[0x13],lVar6);
        lVar6 = lVar6 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  plVar3 = (longlong *)param_1[0x1b];
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
  plVar3 = (longlong *)param_1[0x19];
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
  plVar3 = (longlong *)param_1[0x14];
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
  FUN_14706c51c(param_1 + 8);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706c4b6 FUN_14706c4b6 body=102 status=ok
// SIG undefined FUN_14706c4b6(void)

void FUN_14706c4b6(undefined8 *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_14706f710(param_2,0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  EnterCriticalSection(lpCriticalSection);
  FUN_14706f5c2(param_1 + 1,param_2);
  FUN_14706f7f6(param_1 + 1);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014706c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 14706c51c FUN_14706c51c body=72 status=ok
// SIG undefined FUN_14706c51c(void)

void FUN_14706c51c(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    FUN_1400020a8(lpCriticalSection);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14706f97e(param_1 + 1);
  return;
}



// FUNCTION 14706c564 FUN_14706c564 body=65 status=ok
// SIG undefined FUN_14706c564(void)

void FUN_14706c564(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    if (*(undefined8 **)(param_1 + 0xc0) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0xc0))();
    }
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14706c5a6 FUN_14706c5a6 body=654 status=ok
// SIG undefined FUN_14706c5a6(void)

void FUN_14706c5a6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong local_68;
  longlong *plStack_60;
  undefined4 local_4c;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(char *)(param_1 + 0xa8) == '\0') && (*(longlong *)(param_1 + 0x98) != 0)) &&
      (plVar2 = *(longlong **)(param_1 + 0xd0), plVar2 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*plVar2 + 8))(plVar2,param_1 + 0x18), cVar6 != '\0')) {
    plVar2 = *(longlong **)(param_1 + 0x98);
    plStack_40 = *(longlong **)(param_1 + 0x28);
    if (plStack_40 == (longlong *)0x0) {
LAB_14706c653:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      bVar8 = true;
    }
    else {
      iVar7 = (int)plStack_40[1];
      do {
        if (iVar7 == 0) goto LAB_14706c653;
        LOCK();
        iVar5 = (int)plStack_40[1];
        bVar8 = iVar7 == iVar5;
        if (bVar8) {
          *(int *)(plStack_40 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_48 = *(longlong *)(param_1 + 0x20) + 8;
      if (*(longlong *)(param_1 + 0x20) == 0) {
        local_48 = 0;
      }
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      bVar8 = false;
    }
    plVar4 = plStack_40;
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1 + 0x30,&local_48);
    plVar2 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (!bVar8) {
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
    if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x98);
      local_4c = 0x20201;
      plStack_60 = *(longlong **)(param_1 + 0x28);
      if (plStack_60 == (longlong *)0x0) {
LAB_14706c72b:
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        bVar8 = true;
      }
      else {
        iVar7 = (int)plStack_60[1];
        do {
          if (iVar7 == 0) goto LAB_14706c72b;
          LOCK();
          iVar5 = (int)plStack_60[1];
          bVar8 = iVar7 == iVar5;
          if (bVar8) {
            *(int *)(plStack_60 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar8);
        local_68 = *(longlong *)(param_1 + 0x20) + 8;
        if (*(longlong *)(param_1 + 0x20) == 0) {
          local_68 = 0;
        }
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
        bVar8 = false;
      }
      plVar4 = plStack_60;
      local_78 = &local_4c;
      (**(code **)(*plVar2 + 0x40))(plVar2,&local_48,&local_68,&DAT_14c99f9f0);
      plVar2 = plStack_40;
      if ((longlong *)(param_1 + 0xc0) != &local_48) {
        *(longlong *)(param_1 + 0xc0) = local_48;
        local_48 = 0;
        plVar3 = *(longlong **)(param_1 + 200);
        if (plStack_40 != plVar3) {
          plStack_40 = (longlong *)0x0;
          *(longlong **)(param_1 + 200) = plVar2;
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
      plVar2 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (!bVar8) {
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
    else {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 8))();
    }
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706c83e FUN_14706c83e body=232 status=ok
// SIG undefined FUN_14706c83e(void)

int * FUN_14706c83e(longlong param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *local_40;
  undefined4 local_38;
  int *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    local_58 = *param_3;
    iStack_54 = param_3[1];
    iStack_50 = param_3[2];
    iStack_4c = param_3[3];
    local_40 = (int *)0x0;
    local_38 = 1;
    FUN_14707042c(&local_40,1,0);
    *local_40 = local_58;
    local_40[1] = iStack_54;
    local_40[2] = iStack_50;
    local_40[3] = iStack_4c;
    FUN_14706c928(param_1 + 0x40,&local_30,&local_40);
    if (local_40 != (int *)0x0) {
      FUN_1400020a8();
    }
    bVar1 = true;
    if ((0 < local_28) &&
       (((local_30[1] != 0 || *local_30 != 0) || local_30[2] != 0) || local_30[3] != 0)) {
      iVar2 = local_30[1];
      iVar3 = local_30[2];
      iVar4 = local_30[3];
      *param_2 = *local_30;
      param_2[1] = iVar2;
      param_2[2] = iVar3;
      param_2[3] = iVar4;
      bVar1 = false;
    }
    if (local_30 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar1) goto LAB_14706c86e;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
LAB_14706c86e:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14706c928 FUN_14706c928 body=169 status=ok
// SIG undefined FUN_14706c928(void)

undefined8 * FUN_14706c928(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  EnterCriticalSection(lpCriticalSection);
  if ((longlong)(int)param_3[1] != 0) {
    lVar4 = *param_3;
    lVar5 = (longlong)(int)param_3[1] << 4;
    do {
      uVar2 = FUN_1448eb174(lVar4,0x10,0);
      iVar3 = FUN_14706fa0c(param_1 + 1,uVar2);
      if ((iVar3 != -1) &&
         (lVar1 = param_1[1] + (longlong)iVar3 * 0x28, lVar1 != -0x10 && lVar1 != 0)) {
        FUN_140c608a8(param_2);
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_2;
}



// FUNCTION 14706c9d2 FUN_14706c9d2 body=193 status=ok
// SIG undefined FUN_14706c9d2(void)

undefined8 FUN_14706c9d2(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)**(undefined8 **)(param_1 + 200))(*(undefined8 **)(param_1 + 200),local_48);
  FUN_1400021e4(local_48,&local_40);
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  FUN_140002266(&local_30,L"FMessageBridge (%s)",puVar1);
  puVar1 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar1 = local_30;
  }
  FUN_1446f470e(param_2,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706cab6 FUN_14706cab6 body=149 status=ok
// SIG undefined FUN_14706cab6(void)

void FUN_14706cab6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14706cb4c(param_1 + 0x28,param_2,&local_38);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((longlong)(int)uStack_30 != 0) {
      lVar1 = (longlong)(int)uStack_30 << 4;
      lVar2 = local_38;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0x60))(*(longlong **)(param_1 + 0x80),lVar2);
        lVar2 = lVar2 + 0x10;
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706cb4c FUN_14706cb4c body=525 status=ok
// SIG undefined FUN_14706cb4c(void)

void FUN_14706cb4c(undefined8 *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  LPCRITICAL_SECTION local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_3 + 1) = 0;
  local_a0 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14706f710(param_3,0);
  }
  local_98 = (LPCRITICAL_SECTION)*param_1;
  EnterCriticalSection(local_98);
  plVar1 = param_1 + 1;
  puVar2 = param_1 + 3;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = puVar2;
  if (*(int *)(param_1 + 6) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 6);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != puVar2)) {
    do {
      lVar11 = *local_90;
      lVar9 = (longlong)iStack_74;
      if ((*(int *)(lVar11 + 0x10 + lVar9 * 0x28) == *param_2) &&
         (((*(int *)(lVar11 + 0x14 + lVar9 * 0x28) == param_2[1] &&
           (*(int *)(lVar11 + 0x18 + lVar9 * 0x28) == param_2[2])) &&
          (*(int *)(lVar11 + 0x1c + lVar9 * 0x28) == param_2[3])))) {
        iVar5 = (int)local_a0[1];
        *(uint *)(local_a0 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)local_a0 + 0xc) < iVar5 + 1U) {
          FUN_14706f770(local_a0,iVar5);
        }
        puVar3 = (undefined4 *)(lVar11 + lVar9 * 0x28);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar4 = (undefined4 *)(*local_a0 + (longlong)iVar5 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 ||
             ((undefined8 *)CONCAT44(uStack_7c,uStack_80) != puVar2 || iStack_74 != iVar10));
  }
  if ((longlong)(int)local_a0[1] != 0) {
    lVar11 = *local_a0;
    lVar9 = (longlong)(int)local_a0[1] << 4;
    do {
      FUN_14706fa80(plVar1,lVar11);
      lVar11 = lVar11 + 0x10;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  if (local_98 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706cd5a FUN_14706cd5a body=88 status=ok
// SIG undefined FUN_14706cd5a(void)

bool FUN_14706cd5a(undefined8 *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  EnterCriticalSection(lpCriticalSection);
  uVar1 = FUN_1448eb174(param_2,0x10,0);
  iVar2 = FUN_14706fa0c(param_1 + 1,uVar1,param_2);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar2 != -1;
}



// FUNCTION 14706cdb2 FUN_14706cdb2 body=104 status=ok
// SIG undefined FUN_14706cdb2(void)

void FUN_14706cdb2(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  EnterCriticalSection(lpCriticalSection);
  uVar4 = FUN_1448eb174(param_2,0x10,0);
  puVar1 = (undefined4 *)FUN_14706fbe6(param_1 + 1,uVar4,param_2);
  uVar4 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014706ce08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 14706ce1a FUN_14706ce1a body=272 status=ok
// SIG undefined FUN_14706ce1a(void)

undefined8 *
FUN_14706ce1a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 uVar3;
  
  *param_1 = &PTR_LAB_14a157bd0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar2 = param_2[1];
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_14707042c(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],_Src,(longlong)iVar1 << 4);
  }
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  uVar3 = param_3[1];
  param_1[0x14] = *param_3;
  param_1[0x15] = uVar3;
  *(undefined4 *)(param_1 + 0x16) = param_6;
  param_1[0x17] = *param_5;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 14706cf50 FUN_14706cf50 body=310 status=ok
// SIG undefined FUN_14706cf50(void)

void FUN_14706cf50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,4,0x10);
  local_38 = 4;
  *local_40 = &PTR_LAB_14a158390;
  local_40[1] = uVar3;
  local_40[2] = lVar4;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[3] = lVar6;
  *local_40 = &PTR_FUN_14a158320;
  local_40[4] = lVar2;
  local_40[5] = FUN_14706eb3c;
  *(undefined4 *)(local_40 + 6) = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0;
  FUN_14009d848(puVar5 + 1,&local_40);
  LOCK();
  puVar1 = *(undefined8 **)(lVar2 + 0x110);
  *(undefined8 **)(lVar2 + 0x110) = puVar5;
  UNLOCK();
  *puVar1 = puVar5;
  (**(code **)(**(longlong **)(lVar2 + 0x158) + 0x10))();
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706d088 FUN_14706d088 body=310 status=ok
// SIG undefined FUN_14706d088(void)

void FUN_14706d088(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,4,0x10);
  local_38 = 4;
  *local_40 = &PTR_LAB_14a158390;
  local_40[1] = uVar3;
  local_40[2] = lVar4;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[3] = lVar6;
  *local_40 = &PTR_FUN_14a158320;
  local_40[4] = lVar2;
  local_40[5] = FUN_14706eb72;
  *(undefined4 *)(local_40 + 6) = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0;
  FUN_14009d848(puVar5 + 1,&local_40);
  LOCK();
  puVar1 = *(undefined8 **)(lVar2 + 0x110);
  *(undefined8 **)(lVar2 + 0x110) = puVar5;
  UNLOCK();
  *puVar1 = puVar5;
  (**(code **)(**(longlong **)(lVar2 + 0x158) + 0x10))();
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706d1c6 FUN_14706d1c6 body=142 status=ok
// SIG undefined FUN_14706d1c6(void)

void FUN_14706d1c6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48 [2];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_3,local_48);
  uVar1 = FUN_1449e2fb2();
  local_58 = 0;
  FUN_146891db8(local_38,uVar1,local_48,0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706d256 FUN_14706d256 body=172 status=ok
// SIG undefined FUN_14706d256(void)

undefined8
FUN_14706d256(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_4,local_58);
  uVar1 = FUN_1449e2fb2();
  local_68 = 0;
  FUN_146891db8(local_48,uVar1,local_58,0);
  local_68 = param_5;
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706d304 FUN_14706d304 body=142 status=ok
// SIG undefined FUN_14706d304(void)

void FUN_14706d304(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48 [2];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_3,local_48);
  uVar1 = FUN_1449e2fb2();
  local_58 = 0;
  FUN_146891db8(local_38,uVar1,local_48,0);
  (**(code **)(*param_1 + 0x50))(param_1,param_2,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706d394 FUN_14706d394 body=142 status=ok
// SIG undefined FUN_14706d394(void)

void FUN_14706d394(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48 [2];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_3,local_48);
  uVar1 = FUN_1449e2fb2();
  local_58 = 0;
  FUN_146891db8(local_38,uVar1,local_48,0);
  (**(code **)(*param_1 + 0x68))(param_1,param_2,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706d424 FUN_14706d424 body=210 status=ok
// SIG undefined FUN_14706d424(void)

void FUN_14706d424(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a157bd0;
  if (param_1[0xe] != 0) {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2f0))(plVar3,param_1[0xe],1);
    }
    FUN_1400020a8(param_1[0xe]);
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  plVar3 = (longlong *)param_1[0xc];
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
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 1);
  return;
}



// FUNCTION 14706d510 FUN_14706d510 body=65 status=ok
// SIG undefined FUN_14706d510(void)

undefined8 * FUN_14706d510(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = *(longlong *)(param_1 + 0x60);
    param_2[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14706d642 FUN_14706d642 body=204 status=ok
// SIG undefined FUN_14706d642(void)

undefined8 *
FUN_14706d642(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_3;
  lVar3 = param_3[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = *param_4;
  lVar3 = param_4[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  param_1[5] = *param_5;
  lVar3 = param_5[1];
  param_1[6] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_3[1];
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
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 14706d70e FUN_14706d70e body=460 status=ok
// SIG undefined FUN_14706d70e(void)

void FUN_14706d70e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14706d81a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x30);
      bVar9 = true;
      if (plVar7 == (longlong *)0x0) {
LAB_14706d794:
        lVar8 = 0;
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_14706d794;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        lVar8 = *(longlong *)(param_1 + 0x28);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_50 = plVar4;
          local_48 = plVar3;
          FUN_14706d8f4(lVar8,param_1,&local_50,1);
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
        bVar9 = false;
      }
      (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
      if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
         (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_50 = plVar4;
        local_48 = plVar3;
        FUN_14706dadc(lVar8,param_1,&local_50);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_48)(local_48);
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
      if (!bVar9) {
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
LAB_14706d81a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706d8f4 FUN_14706d8f4 body=487 status=ok
// SIG undefined FUN_14706d8f4(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014706da99 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14706d8f4(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  LARGE_INTEGER LVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  LARGE_INTEGER local_78 [2];
  undefined8 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x1b9) == '\x01') {
    QueryPerformanceCounter(local_78);
    uStack_80 = (double)local_78[0].QuadPart * DAT_14c83f420;
    local_a8 = *param_2;
    local_a0 = param_2[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    uStack_80 = uStack_80 + 16777216.0;
    local_98 = *param_3;
    local_90 = param_3[1];
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    local_88 = CONCAT31(local_88._1_3_,param_4);
    local_78[0].QuadPart = 0;
    local_b0 = param_1;
    local_68 = (undefined8 *)FUN_14001cc68(0x40,8);
    *local_68 = &PTR_FUN_14a158640;
    local_68[1] = local_b0;
    local_68[2] = local_a8;
    local_68[3] = local_a0;
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_68[4] = local_98;
    local_68[5] = local_90;
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(local_68 + 6) = local_88;
    *(undefined4 *)((longlong)local_68 + 0x34) = uStack_84;
    *(undefined4 *)(local_68 + 7) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_80._4_4_;
    if (local_68 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78[0].QuadPart = (LONGLONG)FUN_142b01ade;
    }
    LVar2 = local_78[0];
    puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar3 = 0;
    ((LARGE_INTEGER *)(puVar3 + 2))->QuadPart = (LONGLONG)LVar2;
    puVar3[4] = local_68;
    local_68 = (undefined8 *)0x0;
    *(undefined4 *)(puVar3 + 8) = local_48;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
    *(undefined4 *)(puVar3 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
    *(undefined4 *)(puVar3 + 6) = local_58;
    *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
    *(undefined4 *)(puVar3 + 7) = uStack_50;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
    if ((code *)LVar2.QuadPart != (code *)0x0) {
      local_78[0].QuadPart = 0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar3;
      UNLOCK();
      LOCK();
      *puVar1 = puVar3;
      UNLOCK();
      if ((code *)local_78[0].QuadPart != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
      }
    }
    FUN_142b01120(&local_b0);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706dadc FUN_14706dadc body=470 status=ok
// SIG undefined FUN_14706dadc(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014706dc72 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14706dadc(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  LARGE_INTEGER LVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  double local_70;
  LARGE_INTEGER local_68 [2];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x1b9) == '\x01') {
    QueryPerformanceCounter(local_68);
    local_70 = (double)local_68[0].QuadPart * DAT_14c83f420;
    local_90 = *param_2;
    local_88 = param_2[1];
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    local_70 = local_70 + 16777216.0;
    local_80 = *param_3;
    local_78 = param_3[1];
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    local_68[0].QuadPart = 0;
    local_98 = param_1;
    local_58 = (undefined8 *)FUN_14001cc68(0x38,8);
    *local_58 = &PTR_FUN_14a158680;
    local_58[1] = local_98;
    local_58[2] = local_90;
    local_58[3] = local_88;
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    local_58[4] = local_80;
    local_58[5] = local_78;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    local_58[6] = local_70;
    if (local_58 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_68[0].QuadPart = (LONGLONG)FUN_142b01f92;
    }
    LVar2 = local_68[0];
    puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar3 = 0;
    ((LARGE_INTEGER *)(puVar3 + 2))->QuadPart = (LONGLONG)LVar2;
    puVar3[4] = local_58;
    local_58 = (undefined8 *)0x0;
    *(undefined4 *)(puVar3 + 8) = local_38;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_34;
    *(undefined4 *)(puVar3 + 9) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_2c;
    *(undefined4 *)(puVar3 + 6) = local_48;
    *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_44;
    *(undefined4 *)(puVar3 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_3c;
    if ((code *)LVar2.QuadPart != (code *)0x0) {
      local_68[0].QuadPart = 0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar3;
      UNLOCK();
      LOCK();
      *puVar1 = puVar3;
      UNLOCK();
      if ((code *)local_68[0].QuadPart != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
      }
    }
    FUN_142b01184(&local_98);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706dcb4 FUN_14706dcb4 body=99 status=ok
// SIG undefined FUN_14706dcb4(void)

void FUN_14706dcb4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 0x18,*(undefined1 *)(param_1 + 0x28));
    }
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
                    /* WARNING: Could not recover jumptable at 0x00014706dd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14706dd22 FUN_14706dd22 body=421 status=ok
// SIG undefined FUN_14706dd22(void)

void FUN_14706dd22(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *plStack_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = 0x20201;
  plVar7 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
  if ((longlong)(int)plVar7[1] != 0) {
    lVar10 = *plVar7;
    lVar11 = (longlong)(int)plVar7[1] * 0x10 + lVar10;
    plVar7 = (longlong *)(param_1 + 0x60);
    do {
      uVar5 = FUN_1448eb174(lVar10,0x10,0);
      iVar6 = FUN_1413e1950(plVar7,uVar5);
      if (((iVar6 == -1) || (lVar8 = (longlong)iVar6 * 0x28 + *plVar7, lVar8 == 0)) ||
         (plVar9 = *(longlong **)(lVar8 + 0x18), plVar9 == (longlong *)0x0)) {
        local_78 = (longlong *)0x0;
        plStack_70 = (longlong *)0x0;
LAB_14706ddc5:
        plVar9 = plStack_70;
        FUN_147071bd2(plVar7,lVar10);
      }
      else {
        plVar2 = *(longlong **)(lVar8 + 0x10);
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        local_78 = (longlong *)0x0;
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) {
            plStack_70 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar12 = iVar6 == iVar3;
          if (bVar12) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar3 = iVar6;
          }
          iVar6 = iVar3;
          UNLOCK();
          plStack_70 = plVar9;
        } while (!bVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        plVar9 = plStack_70;
        if (plStack_70 == (longlong *)0x0) {
          plVar2 = local_78;
        }
        local_78 = plVar2;
        if (local_78 == (longlong *)0x0) goto LAB_14706ddc5;
        cVar4 = (**(code **)(*local_78 + 0x18))(local_78);
        if (cVar4 == '\0') {
          uVar5 = (**(code **)(*(longlong *)*param_2 + 0x38))();
          cVar4 = FUN_14706e0ec(&local_64,uVar5);
          if (cVar4 != '\0') goto LAB_14706de6c;
        }
        else {
LAB_14706de6c:
          FUN_1470719a8(param_3,&local_78);
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != lVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706dec8 FUN_14706dec8 body=451 status=ok
// SIG undefined FUN_14706dec8(void)

void FUN_14706dec8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  if (0 < (int)param_1[1]) {
    iVar11 = 0;
    do {
      plVar10 = *(longlong **)(*param_1 + (longlong)iVar11 * 0x10);
      plVar3 = *(longlong **)(*param_1 + 8 + (longlong)iVar11 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      cVar4 = (**(code **)(*plVar10 + 0x28))(plVar10);
      if (cVar4 != '\0') {
        uVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
        cVar4 = FUN_14706e0ec(uVar8,uVar5);
        if (cVar4 != '\0') {
          puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x20))(plVar10);
          local_58 = (longlong *)0x0;
          plVar10 = (longlong *)puVar9[1];
          local_50 = plVar10;
          if (plVar10 == (longlong *)0x0) {
LAB_14706dfd6:
            plVar10 = (longlong *)0x0;
          }
          else {
            iVar6 = (int)plVar10[1];
            do {
              if (iVar6 == 0) {
                local_50 = (longlong *)0x0;
                goto LAB_14706dfd6;
              }
              LOCK();
              iVar7 = (int)plVar10[1];
              bVar12 = iVar6 == iVar7;
              if (bVar12) {
                *(int *)(plVar10 + 1) = iVar6 + 1;
                iVar7 = iVar6;
              }
              iVar6 = iVar7;
              UNLOCK();
            } while (!bVar12);
            if (plVar10 == (longlong *)0x0) goto LAB_14706dfd6;
            local_58 = (longlong *)*puVar9;
          }
          if (local_58 == (longlong *)0x0) {
            FUN_147071aae(param_1,iVar11);
            FUN_147071b36(param_1);
            iVar11 = iVar11 + -1;
          }
          else {
            if ((char)uVar5 == '\0') {
              iVar6 = (**(code **)(*local_58 + 0x10))();
              iVar7 = (**(code **)(*(longlong *)*param_2 + 0x58))();
              if (iVar6 != iVar7) goto LAB_14706e003;
            }
            FUN_1470719a8(param_3,&local_58);
          }
LAB_14706e003:
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar3 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706e08c FUN_14706e08c body=95 status=ok
// SIG undefined FUN_14706e08c(void)

undefined8 * FUN_14706e08c(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x18))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    cVar1 = FUN_144b00e3a(uVar3,0,1);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar3 = FUN_14479d2ce(uVar3);
      FUN_1414d7078(uVar3,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14706e0ec FUN_14706e0ec body=134 status=ok
// SIG undefined FUN_14706e0ec(void)

bool FUN_14706e0ec(char *param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char local_4 [2];
  char local_2 [2];
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    bVar2 = param_1[1];
    pcVar3 = param_1;
    if (param_2 <= bVar2) {
      if (param_2 < bVar2) {
        pcVar3 = local_2;
      }
      else {
        pcVar3 = local_2;
        if (cVar1 == '\x01') {
          pcVar3 = param_1;
        }
      }
    }
    if (*pcVar3 != cVar1) {
      return false;
    }
    if (pcVar3[1] != bVar2) {
      return false;
    }
  }
  cVar1 = param_1[2];
  if (cVar1 == '\x02') {
    return true;
  }
  bVar2 = param_1[3];
  pcVar3 = param_1 + 2;
  if (bVar2 <= param_2) {
    if (bVar2 < param_2) {
      pcVar3 = local_4;
    }
    else if (cVar1 != '\x01') {
      pcVar3 = local_4;
    }
  }
  if (*pcVar3 != cVar1) {
    return false;
  }
  return pcVar3[1] == bVar2;
}



// FUNCTION 14706e172 FUN_14706e172 body=98 status=ok
// SIG undefined FUN_14706e172(void)

void FUN_14706e172(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140212f8e(&local_28);
  *(undefined8 *)(param_1 + 0x118) = local_28;
  FUN_14085371c(param_1 + -8);
  FUN_14085383a(param_1 + -8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706e1d6 FUN_14706e1d6 body=380 status=ok
// SIG undefined FUN_14706e1d6(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014706e2fa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14706e1d6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  double dVar5;
  LARGE_INTEGER LVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78 [2];
  undefined8 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(local_78);
  dVar5 = (double)local_78[0].QuadPart * DAT_14c83f420;
  uVar8 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_78[0].QuadPart = 0;
  local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_68 = &PTR_FUN_14a158580;
  local_68[1] = param_1;
  local_68[2] = uVar8;
  local_68[3] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_68[4] = dVar5 + 16777216.0;
  if (local_68 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0].QuadPart = (LONGLONG)FUN_142b0150e;
  }
  LVar6 = local_78[0];
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar7 = 0;
  ((LARGE_INTEGER *)(puVar7 + 2))->QuadPart = (LONGLONG)LVar6;
  puVar7[4] = local_68;
  local_68 = (undefined8 *)0x0;
  *(undefined4 *)(puVar7 + 8) = local_48;
  *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_44;
  *(undefined4 *)(puVar7 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar7 + 6) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_54;
  *(undefined4 *)(puVar7 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_4c;
  if ((code *)LVar6.QuadPart != (code *)0x0) {
    local_78[0].QuadPart = 0;
  }
  uVar8 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x1d0);
    *(undefined8 **)(param_1 + 0x1d0) = puVar7;
    UNLOCK();
    LOCK();
    uVar8 = *puVar3;
    *puVar3 = puVar7;
    UNLOCK();
    if ((code *)local_78[0].QuadPart != (code *)0x0) {
      uVar8 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar8 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar8 = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706e354 FUN_14706e354 body=410 status=ok
// SIG undefined FUN_14706e354(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x00014706e491 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14706e354(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  double dVar5;
  LARGE_INTEGER LVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  LARGE_INTEGER local_88 [2];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  QueryPerformanceCounter(local_88);
  dVar5 = (double)local_88[0].QuadPart * DAT_14c83f420;
  uVar8 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  local_88[0].QuadPart = 0;
  local_78 = (undefined8 *)FUN_14001cc68(0x38,8);
  *local_78 = &PTR_FUN_14a1586c0;
  local_78[1] = param_1;
  local_78[2] = uVar8;
  local_78[3] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_78 + 4) = local_98;
  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
  *(undefined4 *)(local_78 + 5) = uStack_90;
  *(undefined4 *)((longlong)local_78 + 0x2c) = uStack_8c;
  local_78[6] = dVar5 + 16777216.0;
  if (local_78 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88[0].QuadPart = (LONGLONG)FUN_142b0283e;
  }
  LVar6 = local_88[0];
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar7 = 0;
  ((LARGE_INTEGER *)(puVar7 + 2))->QuadPart = (LONGLONG)LVar6;
  puVar7[4] = local_78;
  local_78 = (undefined8 *)0x0;
  *(undefined4 *)(puVar7 + 8) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_54;
  *(undefined4 *)(puVar7 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar7 + 6) = local_68;
  *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_64;
  *(undefined4 *)(puVar7 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_5c;
  if ((code *)LVar6.QuadPart != (code *)0x0) {
    local_88[0].QuadPart = 0;
  }
  uVar8 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x1d0);
    *(undefined8 **)(param_1 + 0x1d0) = puVar7;
    UNLOCK();
    LOCK();
    uVar8 = *puVar3;
    *puVar3 = puVar7;
    UNLOCK();
    if ((code *)local_88[0].QuadPart != (code *)0x0) {
      uVar8 = (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar8 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar8 = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706e4f0 FUN_14706e4f0 body=328 status=ok
// SIG undefined FUN_14706e4f0(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x00014706e5ff */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_14706e4f0(longlong param_1,undefined4 *param_2)

{
  double dVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  LARGE_INTEGER local_88 [2];
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  QueryPerformanceCounter(local_88);
  dVar1 = (double)local_88[0].QuadPart * DAT_14c83f420;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_88[0].QuadPart = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar2 = &PTR_FUN_14a1586e0;
  plVar5 = puVar2 + 1;
  *plVar5 = param_1;
  *(undefined4 *)(puVar2 + 2) = local_98;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_94;
  *(undefined4 *)(puVar2 + 3) = uStack_90;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_8c;
  puVar2[4] = dVar1 + 16777216.0;
  if (plVar5 == (longlong *)0x0) {
    pcVar6 = (code *)0x0;
  }
  else {
    pcVar6 = FUN_142b029be;
    local_88[0].QuadPart = (LONGLONG)FUN_142b029be;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = pcVar6;
  puVar3[4] = puVar2;
  local_78 = 0;
  *(undefined4 *)(puVar3 + 8) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_54;
  *(undefined4 *)(puVar3 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar3 + 6) = local_68;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_64;
  *(undefined4 *)(puVar3 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_5c;
  if (plVar5 != (longlong *)0x0) {
    local_88[0].QuadPart = 0;
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x1d0);
    *(undefined8 **)(param_1 + 0x1d0) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = puVar3;
    UNLOCK();
    if ((code *)local_88[0].QuadPart != (code *)0x0) {
      uVar4 = (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14706e63a FUN_14706e63a body=369 status=ok
// SIG undefined FUN_14706e63a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014706e759 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14706e63a(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  LARGE_INTEGER LVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  LARGE_INTEGER local_68 [2];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  uVar7 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = uVar7;
  if (*(char *)(param_1 + 0x1b9) == '\x01') {
    QueryPerformanceCounter(local_68);
    uVar4 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_68[0].QuadPart = 0;
    local_58 = (undefined8 *)FUN_14001cc68(0x30,8);
    *local_58 = &PTR_FUN_14a158700;
    local_58[1] = param_1;
    local_58[2] = uVar4;
    local_58[3] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(local_58 + 4) = local_78;
    *(undefined4 *)((longlong)local_58 + 0x24) = uStack_74;
    *(undefined4 *)(local_58 + 5) = uStack_70;
    *(undefined4 *)((longlong)local_58 + 0x2c) = uStack_6c;
    if (local_58 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_68[0].QuadPart = (LONGLONG)&DAT_142b02b60;
    }
    LVar6 = local_68[0];
    puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar8 = 0;
    ((LARGE_INTEGER *)(puVar8 + 2))->QuadPart = (LONGLONG)LVar6;
    puVar8[4] = local_58;
    local_58 = (undefined8 *)0x0;
    *(undefined4 *)(puVar8 + 8) = local_38;
    *(undefined4 *)((longlong)puVar8 + 0x44) = uStack_34;
    *(undefined4 *)(puVar8 + 9) = uStack_30;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_2c;
    *(undefined4 *)(puVar8 + 6) = local_48;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_44;
    *(undefined4 *)(puVar8 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_3c;
    if ((undefined *)LVar6.QuadPart != (undefined *)0x0) {
      local_68[0].QuadPart = 0;
    }
    uVar7 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      puVar3 = *(ulonglong **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar8;
      UNLOCK();
      LOCK();
      uVar7 = *puVar3;
      *puVar3 = (ulonglong)puVar8;
      UNLOCK();
      if ((undefined *)local_68[0].QuadPart != (undefined *)0x0) {
        uVar7 = (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        uVar7 = (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706e7ac FUN_14706e7ac body=438 status=ok
// SIG undefined FUN_14706e7ac(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014706e920 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14706e7ac(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  LARGE_INTEGER LVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78 [2];
  undefined8 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  uVar9 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = uVar9;
  if (*(char *)(param_1 + 0x1b9) == '\x01') {
    cVar8 = FUN_14706ebec();
    if (cVar8 != '\0') {
      *(undefined1 *)(param_1 + 0x58) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))
                (*(longlong **)(param_1 + 0x70),0xffffffff,0);
    }
    QueryPerformanceCounter(local_78);
    dVar6 = (double)local_78[0].QuadPart * DAT_14c83f420;
    uVar4 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78[0].QuadPart = 0;
    local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_68 = &PTR_FUN_14a158720;
    local_68[1] = param_1;
    local_68[2] = uVar4;
    local_68[3] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_68[4] = dVar6 + 16777216.0;
    if (local_68 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78[0].QuadPart = (LONGLONG)FUN_142b02c3a;
    }
    LVar7 = local_78[0];
    puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar10 = 0;
    ((LARGE_INTEGER *)(puVar10 + 2))->QuadPart = (LONGLONG)LVar7;
    puVar10[4] = local_68;
    local_68 = (undefined8 *)0x0;
    *(undefined4 *)(puVar10 + 8) = local_48;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_44;
    *(undefined4 *)(puVar10 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_3c;
    *(undefined4 *)(puVar10 + 6) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_54;
    *(undefined4 *)(puVar10 + 7) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_4c;
    if ((code *)LVar7.QuadPart != (code *)0x0) {
      local_78[0].QuadPart = 0;
    }
    uVar9 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      puVar3 = *(ulonglong **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar10;
      UNLOCK();
      LOCK();
      uVar9 = *puVar3;
      *puVar3 = (ulonglong)puVar10;
      UNLOCK();
      if ((code *)local_78[0].QuadPart != (code *)0x0) {
        uVar9 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        uVar9 = (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          uVar9 = (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706e964 FUN_14706e964 body=470 status=ok
// SIG undefined FUN_14706e964(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014706eafa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14706e964(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  LARGE_INTEGER LVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  double local_70;
  LARGE_INTEGER local_68 [2];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x1b9) == '\x01') {
    QueryPerformanceCounter(local_68);
    local_70 = (double)local_68[0].QuadPart * DAT_14c83f420;
    local_90 = *param_2;
    local_88 = param_2[1];
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    local_70 = local_70 + 16777216.0;
    local_80 = *param_3;
    local_78 = param_3[1];
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    local_68[0].QuadPart = 0;
    local_98 = param_1;
    local_58 = (undefined8 *)FUN_14001cc68(0x38,8);
    *local_58 = &PTR_FUN_14a1586a0;
    local_58[1] = local_98;
    local_58[2] = local_90;
    local_58[3] = local_88;
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    local_58[4] = local_80;
    local_58[5] = local_78;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    local_58[6] = local_70;
    if (local_58 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_68[0].QuadPart = (LONGLONG)FUN_142b02484;
    }
    LVar2 = local_68[0];
    puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar3 = 0;
    ((LARGE_INTEGER *)(puVar3 + 2))->QuadPart = (LONGLONG)LVar2;
    puVar3[4] = local_58;
    local_58 = (undefined8 *)0x0;
    *(undefined4 *)(puVar3 + 8) = local_38;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_34;
    *(undefined4 *)(puVar3 + 9) = uStack_30;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_2c;
    *(undefined4 *)(puVar3 + 6) = local_48;
    *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_44;
    *(undefined4 *)(puVar3 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_3c;
    if ((code *)LVar2.QuadPart != (code *)0x0) {
      local_68[0].QuadPart = 0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar3;
      UNLOCK();
      LOCK();
      *puVar1 = puVar3;
      UNLOCK();
      if ((code *)local_68[0].QuadPart != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
      }
    }
    FUN_142b011e8(&local_98);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706eb3c FUN_14706eb3c body=54 status=ok
// SIG undefined FUN_14706eb3c(void)

void FUN_14706eb3c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_147072bf0(param_1 + 0x100);
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014706eb67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14706eb72 FUN_14706eb72 body=104 status=ok
// SIG undefined FUN_14706eb72(void)

void FUN_14706eb72(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_147072dc2(param_1 + 0x100);
  if (*(longlong *)(param_2 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 8) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706ebec FUN_14706ebec body=110 status=ok
// SIG undefined FUN_14706ebec(void)

ulonglong FUN_14706ebec(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  cVar4 = FUN_144a53f06();
  if (cVar4 != '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(char *)(param_1 + 0x58) != '\0') goto LAB_14706ec4c;
    iVar1 = *(int *)(param_1 + 0x68);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      lVar6 = 0;
      do {
        cVar4 = (**(code **)**(undefined8 **)(lVar2 + lVar6))();
        if (cVar4 != '\0') {
          plVar3 = *(longlong **)(lVar2 + lVar6);
          cVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
          if (cVar4 != '\0') goto LAB_14706ec4c;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar6);
    }
  }
  uVar5 = 0;
LAB_14706ec4c:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14706ec5a FUN_14706ec5a body=394 status=ok
// SIG undefined FUN_14706ec5a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x00014706ed8c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_14706ec5a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  LARGE_INTEGER LVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78 [2];
  undefined8 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  uVar8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = uVar8;
  if (*(char *)(param_1 + 0x1b9) == '\x01') {
    QueryPerformanceCounter(local_78);
    dVar6 = (double)local_78[0].QuadPart * DAT_14c83f420;
    uVar4 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78[0].QuadPart = 0;
    local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_68 = &PTR_FUN_14a158740;
    local_68[1] = param_1;
    local_68[2] = uVar4;
    local_68[3] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_68[4] = dVar6 + 16777216.0;
    if (local_68 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78[0].QuadPart = (LONGLONG)FUN_142b02ee4;
    }
    LVar7 = local_78[0];
    puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar9 = 0;
    ((LARGE_INTEGER *)(puVar9 + 2))->QuadPart = (LONGLONG)LVar7;
    puVar9[4] = local_68;
    local_68 = (undefined8 *)0x0;
    *(undefined4 *)(puVar9 + 8) = local_48;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_44;
    *(undefined4 *)(puVar9 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_3c;
    *(undefined4 *)(puVar9 + 6) = local_58;
    *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_54;
    *(undefined4 *)(puVar9 + 7) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_4c;
    if ((code *)LVar7.QuadPart != (code *)0x0) {
      local_78[0].QuadPart = 0;
    }
    uVar8 = 0;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      puVar3 = *(ulonglong **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar9;
      UNLOCK();
      LOCK();
      uVar8 = *puVar3;
      *puVar3 = (ulonglong)puVar9;
      UNLOCK();
      if ((code *)local_78[0].QuadPart != (code *)0x0) {
        uVar8 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        uVar8 = (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          uVar8 = (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706ee12 FUN_14706ee12 body=29 status=ok
// SIG undefined FUN_14706ee12(void)

undefined4 FUN_14706ee12(longlong param_1,longlong param_2)

{
  FUN_14706ee30(param_1 + 200);
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 14706ee30 FUN_14706ee30 body=322 status=ok
// SIG undefined FUN_14706ee30(void)

void FUN_14706ee30(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  FUN_147075558(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar4 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147075646(param_2,iVar1);
      }
      lVar2 = lVar2 + (longlong)iVar4 * 0x28;
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706ef74 FUN_14706ef74 body=29 status=ok
// SIG undefined FUN_14706ef74(void)

undefined4 FUN_14706ef74(longlong param_1,longlong param_2)

{
  FUN_14706ef92(param_1 + 0x118);
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 14706ef92 FUN_14706ef92 body=322 status=ok
// SIG undefined FUN_14706ef92(void)

void FUN_14706ef92(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  FUN_1470756cc(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar4 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147074292(param_2,iVar1);
      }
      lVar2 = lVar2 + (longlong)iVar4 * 0x28;
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706f0d6 FUN_14706f0d6 body=29 status=ok
// SIG undefined FUN_14706f0d6(void)

undefined4 FUN_14706f0d6(longlong param_1,longlong param_2)

{
  FUN_14706f0f4(param_1 + 0x168);
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 14706f0f4 FUN_14706f0f4 body=322 status=ok
// SIG undefined FUN_14706f0f4(void)

void FUN_14706f0f4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  FUN_147075772(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar4 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147075860(param_2,iVar1);
      }
      lVar2 = lVar2 + (longlong)iVar4 * 0x28;
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706f26e FUN_14706f26e body=490 status=ok
// SIG undefined FUN_14706f26e(void)

void FUN_14706f26e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    FUN_1470758e6(param_1 + 0x118);
    FUN_147075a2a(param_1 + 0x118);
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    FUN_147075b42(param_1 + 0x168);
    FUN_147075c86(param_1 + 0x168);
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *local_90;
      lVar6 = (longlong)iStack_74;
      lVar5 = *(longlong *)(lVar4 + 0x10 + lVar6 * 0x28);
      iVar3 = *(int *)(lVar5 + 100);
      FUN_14596b11c(*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x60));
      *(undefined4 *)(lVar5 + 0x60) = 0;
      if ((iVar3 < 0) && (*(int *)(lVar5 + 100) != 0)) {
        FUN_147075712(lVar5 + 0x58,0);
      }
      lVar4 = *(longlong *)(lVar4 + lVar6 * 0x28 + 0x10);
      iVar3 = *(int *)(lVar4 + 0x7c);
      FUN_14596b11c(*(undefined8 *)(lVar4 + 0x70),*(undefined4 *)(lVar4 + 0x78));
      *(undefined4 *)(lVar4 + 0x78) = 0;
      if ((iVar3 < 0) && (*(int *)(lVar4 + 0x7c) != 0)) {
        FUN_147075712(lVar4 + 0x70,0);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  FUN_1447f69b6(param_1 + 0x1f8);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706f45a FUN_14706f45a body=38 status=ok
// SIG undefined FUN_14706f45a(void)

undefined8 FUN_14706f45a(undefined8 param_1,int param_2)

{
  FUN_14706c320();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f480 FUN_14706f480 body=45 status=ok
// SIG undefined FUN_14706f480(void)

longlong FUN_14706f480(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14706c320(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f4ae FUN_14706f4ae body=45 status=ok
// SIG undefined FUN_14706f4ae(void)

longlong FUN_14706f4ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_14706c320(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f4dc FUN_14706f4dc body=45 status=ok
// SIG undefined FUN_14706f4dc(void)

longlong FUN_14706f4dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_14706c320(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f50a FUN_14706f50a body=38 status=ok
// SIG undefined FUN_14706f50a(void)

undefined8 FUN_14706f50a(undefined8 param_1,int param_2)

{
  FUN_14596a392();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f530 FUN_14706f530 body=38 status=ok
// SIG undefined FUN_14706f530(void)

undefined8 FUN_14706f530(undefined8 param_1,int param_2)

{
  FUN_14706d424();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f556 FUN_14706f556 body=45 status=ok
// SIG undefined FUN_14706f556(void)

longlong FUN_14706f556(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14596a49e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f59c FUN_14706f59c body=38 status=ok
// SIG undefined FUN_14706f59c(void)

undefined8 FUN_14706f59c(undefined8 param_1,int param_2)

{
  FUN_14596aa06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706f5c2 FUN_14706f5c2 body=332 status=ok
// SIG undefined FUN_14706f5c2(void)

void FUN_14706f5c2(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
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
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar5) {
    FUN_14706f710(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      puVar6 = (undefined4 *)((longlong)iStack_54 * 0x28 + *local_70);
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_14706f770(param_2,iVar5);
      }
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
      *puVar1 = *puVar6;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14706f710 FUN_14706f710 body=96 status=ok
// SIG undefined FUN_14706f710(void)

void FUN_14706f710(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 14706f770 FUN_14706f770 body=132 status=ok
// SIG undefined FUN_14706f770(void)

void FUN_14706f770(longlong param_1,int param_2)

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



// FUNCTION 14706f7f6 FUN_14706f7f6 body=68 status=ok
// SIG undefined FUN_14706f7f6(void)

void FUN_14706f7f6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14706f83a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140957390(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14706f83a FUN_14706f83a body=322 status=ok
// SIG undefined FUN_14706f83a(void)

void FUN_14706f83a(longlong *param_1)

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



// FUNCTION 14706f97e FUN_14706f97e body=52 status=ok
// SIG undefined FUN_14706f97e(void)

void FUN_14706f97e(longlong *param_1)

{
  FUN_14706f9b2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14706f9b2 FUN_14706f9b2 body=89 status=ok
// SIG undefined FUN_14706f9b2(void)

void FUN_14706f9b2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14706fa0c FUN_14706fa0c body=115 status=ok
// SIG undefined FUN_14706fa0c(void)

int FUN_14706fa0c(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 14706fa80 FUN_14706fa80 body=155 status=ok
// SIG undefined FUN_14706fa80(void)

void FUN_14706fa80(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1448eb174(param_2,0x10,0);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x28) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x28) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x28) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x28) == param_2[3])) {
          FUN_14706fb1c(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14706fb1c FUN_14706fb1c body=87 status=ok
// SIG undefined FUN_14706fb1c(void)

void FUN_14706fb1c(longlong *param_1,int param_2)

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
  FUN_14706fb74();
  return;
}



// FUNCTION 14706fb74 FUN_14706fb74 body=114 status=ok
// SIG undefined FUN_14706fb74(void)

void FUN_14706fb74(longlong *param_1,int param_2)

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



// FUNCTION 14706fbe6 FUN_14706fbe6 body=135 status=ok
// SIG undefined FUN_14706fbe6(void)

longlong FUN_14706fbe6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14706fa0c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_14706fc20;
  }
  local_30 = param_3;
  FUN_14706fc6e(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14706fc20:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706fc6e FUN_14706fc6e body=277 status=ok
// SIG undefined FUN_14706fc6e(void)

undefined4 * FUN_14706fc6e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14706fd84(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_14706fe6a(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14706fec8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706fd84 FUN_14706fd84 body=230 status=ok
// SIG undefined FUN_14706fd84(void)

int * FUN_14706fd84(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14706fe6a FUN_14706fe6a body=93 status=ok
// SIG undefined FUN_14706fe6a(void)

undefined8 FUN_14706fe6a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_14706fa0c(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14706fb74(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 14706fec8 FUN_14706fec8 body=446 status=ok
// SIG undefined FUN_14706fec8(void)

void FUN_14706fec8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1448eb174(lVar2,0x10,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147070088 FUN_147070088 body=183 status=ok
// SIG undefined FUN_147070088(void)

longlong *
FUN_147070088(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a157e10;
  puVar3[1] = *param_4;
  lVar4 = param_4[1];
  puVar3[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[3] = lVar5;
  *puVar3 = &PTR_FUN_14a157da0;
  puVar3[4] = param_2;
  puVar3[5] = uVar2;
  *(undefined4 *)(puVar3 + 6) = uVar1;
  return param_1;
}



// FUNCTION 147070140 FUN_147070140 body=83 status=ok
// SIG undefined FUN_147070140(void)

undefined8 * FUN_147070140(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a157e10;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470701bc FUN_1470701bc body=126 status=ok
// SIG undefined FUN_1470701bc(void)

void FUN_1470701bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157e10;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a157da0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 14707023a FUN_14707023a body=126 status=ok
// SIG undefined FUN_14707023a(void)

void FUN_14707023a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157e10;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a157da0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1470702b8 FUN_1470702b8 body=164 status=ok
// SIG undefined FUN_1470702b8(void)

void FUN_1470702b8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a157e10;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a157da0;
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014707034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14707035c FUN_14707035c body=101 status=ok
// SIG undefined FUN_14707035c(void)

void FUN_14707035c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470703c2 FUN_1470703c2 body=103 status=ok
// SIG undefined FUN_1470703c2(void)

undefined8 FUN_1470703c2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707042c FUN_14707042c body=98 status=ok
// SIG undefined FUN_14707042c(void)

void FUN_14707042c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14707048e FUN_14707048e body=203 status=ok
// SIG undefined FUN_14707048e(void)

longlong *
FUN_14707048e(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a157ef0;
  puVar3[1] = *param_4;
  lVar4 = param_4[1];
  puVar3[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar5 = param_5[1];
  puVar3[3] = *param_5;
  puVar3[4] = uVar5;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[5] = lVar6;
  *puVar3 = &PTR_FUN_14a157e80;
  puVar3[6] = param_2;
  puVar3[7] = uVar2;
  *(undefined4 *)(puVar3 + 8) = uVar1;
  return param_1;
}



// FUNCTION 14707055a FUN_14707055a body=83 status=ok
// SIG undefined FUN_14707055a(void)

undefined8 * FUN_14707055a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a157ef0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470705d6 FUN_1470705d6 body=134 status=ok
// SIG undefined FUN_1470705d6(void)

void FUN_1470705d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157ef0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14a157e80;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 14707065c FUN_14707065c body=134 status=ok
// SIG undefined FUN_14707065c(void)

void FUN_14707065c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157ef0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14a157e80;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 1470706e2 FUN_1470706e2 body=172 status=ok
// SIG undefined FUN_1470706e2(void)

void FUN_1470706e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a157ef0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14a157e80;
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014707077e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14707078e FUN_14707078e body=115 status=ok
// SIG undefined FUN_14707078e(void)

void FUN_14707078e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147070802 FUN_147070802 body=117 status=ok
// SIG undefined FUN_147070802(void)

undefined8 FUN_147070802(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707087a FUN_14707087a body=68 status=ok
// SIG undefined FUN_14707087a(void)

undefined8 * FUN_14707087a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a157fd0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 1470708e6 FUN_1470708e6 body=134 status=ok
// SIG undefined FUN_1470708e6(void)

void FUN_1470708e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157fd0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14a157f60;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 14707096c FUN_14707096c body=172 status=ok
// SIG undefined FUN_14707096c(void)

void FUN_14707096c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a157fd0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14a157f60;
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147070a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147070a18 FUN_147070a18 body=116 status=ok
// SIG undefined FUN_147070a18(void)

undefined8 FUN_147070a18(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_1 + 8);
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  (*pcVar3)(lVar2 + iVar1,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147070ace FUN_147070ace body=126 status=ok
// SIG undefined FUN_147070ace(void)

void FUN_147070ace(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1580f0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a158080;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 147070b4c FUN_147070b4c body=164 status=ok
// SIG undefined FUN_147070b4c(void)

void FUN_147070b4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1580f0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a158080;
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147070be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147070bf0 FUN_147070bf0 body=103 status=ok
// SIG undefined FUN_147070bf0(void)

undefined8 FUN_147070bf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147070c5a FUN_147070c5a body=31 status=ok
// SIG undefined FUN_147070c5a(void)

undefined8 FUN_147070c5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147070ca2 FUN_147070ca2 body=109 status=ok
// SIG undefined FUN_147070ca2(void)

void FUN_147070ca2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1581d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a158160;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 147070d10 FUN_147070d10 body=142 status=ok
// SIG undefined FUN_147070d10(void)

void FUN_147070d10(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1581d0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a158160;
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar3;
  p_Var1->Flags = DVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1->SpareWORD = (short)((uint)uVar5 >> 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147070d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147070d9e FUN_147070d9e body=78 status=ok
// SIG undefined FUN_147070d9e(void)

undefined8 FUN_147070d9e(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  uStack_c = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x20));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147070df0 FUN_147070df0 body=64 status=ok
// SIG undefined FUN_147070df0(void)

undefined8 * FUN_147070df0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a1582b0;
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



// FUNCTION 147070e58 FUN_147070e58 body=134 status=ok
// SIG undefined FUN_147070e58(void)

void FUN_147070e58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1582b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14a158240;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 147070ede FUN_147070ede body=134 status=ok
// SIG undefined FUN_147070ede(void)

void FUN_147070ede(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1582b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar3;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14a158240;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 147070f64 FUN_147070f64 body=172 status=ok
// SIG undefined FUN_147070f64(void)

void FUN_147070f64(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int *piVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  _LIST_ENTRY *p_Var3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a1582b0;
  p_Var2->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var2->ProcessLocksList).Flink = p_Var3;
  if (p_Var3 != (_LIST_ENTRY *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)&p_Var3->Blink + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = (int)uVar4;
  p_Var2->ContentionCount = (int)((ulonglong)uVar4 >> 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
  *(undefined ***)p_Var2 = &PTR_FUN_14a158240;
  p_Var2[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  uVar8 = *(undefined4 *)(param_1 + 0x3c);
  p_Var2[1].Type = (short)uVar5;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar5 >> 0x10);
  *(undefined4 *)&p_Var2[1].field_0x4 = uVar6;
  *(undefined4 *)&p_Var2[1].CriticalSection = uVar7;
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147071000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147071010 FUN_147071010 body=115 status=ok
// SIG undefined FUN_147071010(void)

void FUN_147071010(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147071084 FUN_147071084 body=117 status=ok
// SIG undefined FUN_147071084(void)

undefined8 FUN_147071084(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470710fc FUN_1470710fc body=64 status=ok
// SIG undefined FUN_1470710fc(void)

undefined8 * FUN_1470710fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a158390;
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



// FUNCTION 147071164 FUN_147071164 body=126 status=ok
// SIG undefined FUN_147071164(void)

void FUN_147071164(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a158390;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a158320;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1470711e2 FUN_1470711e2 body=126 status=ok
// SIG undefined FUN_1470711e2(void)

void FUN_1470711e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a158390;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a158320;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 147071260 FUN_147071260 body=164 status=ok
// SIG undefined FUN_147071260(void)

void FUN_147071260(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int *piVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  _LIST_ENTRY *p_Var3;
  undefined8 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 uVar7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a158390;
  p_Var2->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var2->ProcessLocksList).Flink = p_Var3;
  if (p_Var3 != (_LIST_ENTRY *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)&p_Var3->Blink + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var2 = &PTR_FUN_14a158320;
  DVar5 = *(DWORD *)(param_1 + 0x24);
  DVar6 = *(DWORD *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->ContentionCount = DVar5;
  p_Var2->Flags = DVar6;
  p_Var2->CreatorBackTraceIndexHigh = (short)uVar7;
  p_Var2->SpareWORD = (short)((uint)uVar7 >> 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar4;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar4 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar4 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470712f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147071304 FUN_147071304 body=101 status=ok
// SIG undefined FUN_147071304(void)

void FUN_147071304(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707136a FUN_14707136a body=103 status=ok
// SIG undefined FUN_14707136a(void)

undefined8 FUN_14707136a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x20);
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar2 + iVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470713d4 FUN_1470713d4 body=73 status=ok
// SIG undefined FUN_1470713d4(void)

void FUN_1470713d4(longlong param_1,int param_2)

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



// FUNCTION 14707141e FUN_14707141e body=100 status=ok
// SIG undefined FUN_14707141e(void)

void FUN_14707141e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147071476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147071482 FUN_147071482 body=29 status=ok
// SIG undefined FUN_147071482(void)

undefined8 FUN_147071482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470714bc FUN_1470714bc body=101 status=ok
// SIG undefined FUN_1470714bc(void)

void FUN_1470714bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a158400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147071522 FUN_147071522 body=101 status=ok
// SIG undefined FUN_147071522(void)

void FUN_147071522(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a158400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147071588 FUN_147071588 body=134 status=ok
// SIG undefined FUN_147071588(void)

void FUN_147071588(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a158400;
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
                    /* WARNING: Could not recover jumptable at 0x0001470715ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14707161e FUN_14707161e body=25 status=ok
// SIG undefined FUN_14707161e(void)

undefined8 FUN_14707161e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147071638 FUN_147071638 body=25 status=ok
// SIG undefined FUN_147071638(void)

void FUN_147071638(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014707164d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147071652 FUN_147071652 body=29 status=ok
// SIG undefined FUN_147071652(void)

undefined8 FUN_147071652(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147071670 FUN_147071670 body=386 status=ok
// SIG undefined FUN_147071670(void)

undefined8 *
FUN_147071670(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined1 param_8,
             undefined4 param_9,undefined8 *param_10,undefined8 *param_11,undefined4 param_12)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_LAB_14a157bd0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_140bb2e20(param_1 + 1,param_4);
  param_1[0xb] = *param_5;
  lVar2 = param_5[1];
  param_1[0xc] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = *param_11;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_7 + 1);
  _Src = (void *)*param_7;
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_14707042c(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],_Src,(longlong)iVar1 << 4);
  }
  *(undefined1 *)(param_1 + 0x13) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_9;
  uVar3 = param_6[1];
  uVar4 = param_6[2];
  uVar5 = param_6[3];
  *(undefined4 *)(param_1 + 0x14) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
  *(undefined4 *)(param_1 + 0x16) = param_12;
  param_1[0x17] = *param_10;
  param_1[0x18] = 0;
  FUN_14485c47a(param_1 + 0x18,param_3);
  return param_1;
}



// FUNCTION 1470717f2 FUN_1470717f2 body=9 status=ok
// SIG undefined FUN_1470717f2(void)

void FUN_1470717f2(longlong param_1)

{
  FUN_14706d424(param_1 + 0x10);
  return;
}



// FUNCTION 1470717fc FUN_1470717fc body=29 status=ok
// SIG undefined FUN_1470717fc(void)

undefined8 FUN_1470717fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707181a FUN_14707181a body=114 status=ok
// SIG undefined FUN_14707181a(void)

void FUN_14707181a(longlong *param_1,int param_2)

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



// FUNCTION 14707188c FUN_14707188c body=73 status=ok
// SIG undefined FUN_14707188c(void)

void FUN_14707188c(longlong param_1,int param_2)

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



// FUNCTION 1470718d6 FUN_1470718d6 body=107 status=ok
// SIG undefined FUN_1470718d6(void)

void FUN_1470718d6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14706d70e(0xa8);
    FUN_147071942(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14706d70e(param_1 + 0x15);
  FUN_147071942(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147071936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147071942 FUN_147071942 body=101 status=ok
// SIG undefined FUN_147071942(void)

void FUN_147071942(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014707199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1470719a8 FUN_1470719a8 body=128 status=ok
// SIG undefined FUN_1470719a8(void)

void FUN_1470719a8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147071a28(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147071a28 FUN_147071a28 body=132 status=ok
// SIG undefined FUN_147071a28(void)

void FUN_147071a28(longlong param_1,int param_2)

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



// FUNCTION 147071aae FUN_147071aae body=136 status=ok
// SIG undefined FUN_147071aae(void)

void FUN_147071aae(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147071b36 FUN_147071b36 body=62 status=ok
// SIG undefined FUN_147071b36(void)

void FUN_147071b36(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147071b74(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147071b74 FUN_147071b74 body=93 status=ok
// SIG undefined FUN_147071b74(void)

ulonglong FUN_147071b74(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147071bd2 FUN_147071bd2 body=155 status=ok
// SIG undefined FUN_147071bd2(void)

void FUN_147071bd2(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1448eb174(param_2,0x10,0);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x28) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x28) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x28) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x28) == param_2[3])) {
          FUN_147071c6e(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147071c6e FUN_147071c6e body=87 status=ok
// SIG undefined FUN_147071c6e(void)

void FUN_147071c6e(longlong *param_1,int param_2)

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
  FUN_147071cc6();
  return;
}



// FUNCTION 147071cc6 FUN_147071cc6 body=59 status=ok
// SIG undefined FUN_147071cc6(void)

void FUN_147071cc6(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_147071d02(param_1,param_2);
  return;
}



// FUNCTION 147071d02 FUN_147071d02 body=114 status=ok
// SIG undefined FUN_147071d02(void)

void FUN_147071d02(longlong *param_1,int param_2)

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



// FUNCTION 147071d74 FUN_147071d74 body=439 status=ok
// SIG undefined FUN_147071d74(void)

void FUN_147071d74(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *_Dst;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147071f2c(param_2,*param_1);
  _Dst = (void *)*param_1;
  FUN_14596a703(_Dst,1);
  iVar12 = 0;
  iVar13 = (int)param_1[1] + -1;
  if (iVar13 != 0) {
    iVar12 = 1;
    if (iVar13 < 1) {
      iVar12 = iVar13;
    }
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)((int)param_1[1] - iVar12) * 0x18),
            (longlong)iVar12 * 0x18);
    iVar12 = (int)param_1[1] + -1;
  }
  *(int *)(param_1 + 1) = iVar12;
  FUN_147071f9a(param_1);
  iVar12 = (int)param_1[1];
  if (1 < iVar12) {
    lVar3 = *param_1;
    iVar13 = 0;
    iVar16 = 1;
    iVar14 = 0;
    do {
      iVar13 = iVar13 + 2;
      iVar15 = iVar16;
      if (iVar13 < iVar12) {
        plVar8 = (longlong *)
                 (**(code **)(**(longlong **)(lVar3 + (longlong)iVar13 * 0x18) + 0x68))();
        plVar9 = (longlong *)
                 (**(code **)(**(longlong **)(lVar3 + (longlong)iVar16 * 0x18) + 0x68))();
        bVar7 = *(longlong *)(lVar3 + 0x10 + (longlong)iVar16 * 0x18) <
                *(longlong *)(lVar3 + 0x10 + (longlong)iVar13 * 0x18);
        if (*plVar8 != *plVar9) {
          bVar7 = *plVar9 < *plVar8;
        }
        if (!bVar7) {
          iVar15 = iVar13;
        }
      }
      lVar10 = (longlong)iVar14;
      lVar11 = (longlong)iVar15;
      plVar8 = (longlong *)(**(code **)(**(longlong **)(lVar3 + lVar10 * 0x18) + 0x68))();
      plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar3 + lVar11 * 0x18) + 0x68))();
      bVar7 = *(longlong *)(lVar3 + 0x10 + lVar11 * 0x18) <
              *(longlong *)(lVar3 + 0x10 + lVar10 * 0x18);
      if (*plVar8 != *plVar9) {
        bVar7 = *plVar9 < *plVar8;
      }
      if (!bVar7) break;
      puVar1 = (undefined8 *)(lVar3 + lVar10 * 0x18);
      puVar2 = (undefined8 *)(lVar3 + lVar11 * 0x18);
      local_58 = puVar1[2];
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1[2] = puVar2[2];
      uVar6 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      puVar2[2] = local_58;
      local_68._0_4_ = (undefined4)uVar4;
      local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar5;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      iVar13 = iVar15 * 2;
      iVar16 = iVar15 * 2 + 1;
      iVar14 = iVar15;
      local_68 = uVar4;
      uStack_60 = uVar5;
    } while (iVar16 < iVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147071f2c FUN_147071f2c body=109 status=ok
// SIG undefined FUN_147071f2c(void)

undefined8 * FUN_147071f2c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 147071f9a FUN_147071f9a body=62 status=ok
// SIG undefined FUN_147071f9a(void)

void FUN_147071f9a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147071fd8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147071fd8 FUN_147071fd8 body=112 status=ok
// SIG undefined FUN_147071fd8(void)

ulonglong FUN_147071fd8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147072012;
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
LAB_147072012:
  return param_2 & 0xffffffff;
}



// FUNCTION 147072048 FUN_147072048 body=121 status=ok
// SIG undefined FUN_147072048(void)

longlong FUN_147072048(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1470720c2();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_14707211a(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 1470720c2 FUN_1470720c2 body=88 status=ok
// SIG undefined FUN_1470720c2(void)

longlong * FUN_1470720c2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if ((*plVar2 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar1 * 0x28) == param_3[1])) {
          return plVar2;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14707211a FUN_14707211a body=286 status=ok
// SIG undefined FUN_14707211a(void)

undefined4 * FUN_14707211a(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14707223a(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_1470713d4(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_147072320(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147072448(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707223a FUN_14707223a body=230 status=ok
// SIG undefined FUN_14707223a(void)

int * FUN_14707223a(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147072320 FUN_147072320 body=182 status=ok
// SIG undefined FUN_147072320(void)

undefined8 FUN_147072320(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if ((*plVar8 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar9 * 0x28) == param_3[1])) {
          FUN_1470713d4(plVar8[2],(int)plVar8[3]);
          if (plVar8[2] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_1470723d6(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1470723d6 FUN_1470723d6 body=114 status=ok
// SIG undefined FUN_1470723d6(void)

void FUN_1470723d6(longlong *param_1,int param_2)

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



// FUNCTION 147072448 FUN_147072448 body=574 status=ok
// SIG undefined FUN_147072448(void)

void FUN_147072448(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
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
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar6 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar3 = *local_80;
        lVar7 = (longlong)iVar6;
        uVar4 = *(undefined8 *)(lVar3 + lVar7 * 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar7 * 0x28);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar9 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar12 = (uint)uVar4 & 0xffff;
        uVar9 = ((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
                (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4);
        uVar12 = (uint)uVar5 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar9 * 0x40 +
                       (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar6 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147072688 FUN_147072688 body=125 status=ok
// SIG undefined FUN_147072688(void)

void FUN_147072688(longlong *param_1,longlong *param_2)

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
        if ((int)(~uVar3 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 0x10;
    } while (lVar4 << 4 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147072706(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 0x10) = *param_2;
  *(longlong *)(lVar2 + 8 + lVar4 * 0x10) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 147072706 FUN_147072706 body=132 status=ok
// SIG undefined FUN_147072706(void)

void FUN_147072706(longlong param_1,int param_2)

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



// FUNCTION 14707278c FUN_14707278c body=263 status=ok
// SIG undefined FUN_14707278c(void)

void FUN_14707278c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
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
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_1470713d4(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 147072894 FUN_147072894 body=121 status=ok
// SIG undefined FUN_147072894(void)

longlong FUN_147072894(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1470720c2();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_14707290e(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 14707290e FUN_14707290e body=286 status=ok
// SIG undefined FUN_14707290e(void)

undefined4 * FUN_14707290e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14707223a(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_1470713d4(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_147072320(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147072448(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147072a2e FUN_147072a2e body=300 status=ok
// SIG undefined FUN_147072a2e(void)

void FUN_147072a2e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_147072b5c(param_1,iVar3);
  }
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + lVar11 * 0x18) = *param_2;
  *(undefined8 *)(lVar4 + 8 + lVar11 * 0x18) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = param_2[2];
  if (1 < (int)param_1[1]) {
    lVar11 = *param_1;
    uVar12 = (ulonglong)((int)param_1[1] - 1);
    do {
      uVar14 = (int)uVar12 - 1;
      uVar13 = (ulonglong)(uVar14 >> 1);
      plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar11 + uVar13 * 0x18) + 0x68))();
      plVar10 = (longlong *)(**(code **)(**(longlong **)(lVar11 + uVar12 * 0x18) + 0x68))();
      bVar8 = *(longlong *)(lVar11 + 0x10 + uVar12 * 0x18) <
              *(longlong *)(lVar11 + 0x10 + uVar13 * 0x18);
      if (*plVar9 != *plVar10) {
        bVar8 = *plVar10 < *plVar9;
      }
      if (!bVar8) break;
      puVar1 = (undefined8 *)(lVar11 + uVar13 * 0x18);
      puVar2 = (undefined8 *)(lVar11 + uVar12 * 0x18);
      local_48 = puVar2[2];
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      puVar2[2] = puVar1[2];
      uVar7 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar1[2] = local_48;
      local_58._0_4_ = (undefined4)uVar5;
      local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar6;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      *(undefined4 *)puVar1 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar1 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_50._4_4_;
      uVar12 = uVar13;
      local_58 = uVar5;
      uStack_50 = uVar6;
    } while (1 < uVar14);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147072b5c FUN_147072b5c body=147 status=ok
// SIG undefined FUN_147072b5c(void)

void FUN_147072b5c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147072bf0 FUN_147072bf0 body=92 status=ok
// SIG undefined FUN_147072bf0(void)

void FUN_147072bf0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_147072c4c();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_147072d3c(param_1,iVar3);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x10) = *param_2;
    lVar2 = param_2[1];
    *(longlong *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 147072c4c FUN_147072c4c body=240 status=ok
// SIG undefined FUN_147072c4c(void)

ulonglong FUN_147072c4c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_147072c9a:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_147072c9a;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_147072ce0:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_147072ce0;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 147072d3c FUN_147072d3c body=132 status=ok
// SIG undefined FUN_147072d3c(void)

void FUN_147072d3c(longlong param_1,int param_2)

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



// FUNCTION 147072dc2 FUN_147072dc2 body=302 status=ok
// SIG undefined FUN_147072dc2(void)

void FUN_147072dc2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_147072ef0(param_2,lVar2);
    iVar9 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar12 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      lVar11 = lVar5 * 0x10;
      lVar13 = lVar2 + 0x10 + lVar11;
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar12;
        if (lVar10 <= lVar5) break;
        bVar4 = FUN_147072ef0(param_2,lVar13);
        iVar7 = iVar7 + 1;
        lVar13 = lVar13 + 0x10;
        iVar8 = iVar7;
      } while ((bVar3 & 1) == bVar4);
      iVar12 = iVar8 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (iVar9 != iVar6) {
          memmove((void *)((longlong)iVar9 * 0x10 + lVar2),(void *)(lVar11 + lVar2),
                  (longlong)iVar12 << 4);
        }
        iVar9 = iVar9 + iVar12;
      }
      else {
        FUN_14596a681(lVar11 + lVar2,iVar12);
      }
      iVar6 = iVar8;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar10);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 147072ef0 FUN_147072ef0 body=167 status=ok
// SIG undefined FUN_147072ef0(void)

bool FUN_147072ef0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  param_1 = (longlong *)*param_1;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
LAB_147072f1a:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_147072f1a;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  lVar6 = *param_2;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_147072f61;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
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
LAB_147072f61:
  if (plVar7 == (longlong *)0x0) {
    lVar6 = 0;
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
  return lVar6 == lVar8;
}



// FUNCTION 147072f98 FUN_147072f98 body=93 status=ok
// SIG undefined FUN_147072f98(void)

void FUN_147072f98(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14706dcb4(param_1 + 0x15);
  plVar2 = (longlong *)param_1[0x17];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147072feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147072ff6 FUN_147072ff6 body=95 status=ok
// SIG undefined FUN_147072ff6(void)

void FUN_147072ff6(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147073056 FUN_147073056 body=62 status=ok
// SIG undefined FUN_147073056(void)

void FUN_147073056(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147073094(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147073094 FUN_147073094 body=93 status=ok
// SIG undefined FUN_147073094(void)

ulonglong FUN_147073094(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1470730f2 FUN_1470730f2 body=31 status=ok
// SIG undefined FUN_1470730f2(void)

undefined8 FUN_1470730f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707312a FUN_14707312a body=93 status=ok
// SIG undefined FUN_14707312a(void)

void FUN_14707312a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a158510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147073188 FUN_147073188 body=126 status=ok
// SIG undefined FUN_147073188(void)

void FUN_147073188(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a158510;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470731f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147073206 FUN_147073206 body=21 status=ok
// SIG undefined FUN_147073206(void)

undefined8 FUN_147073206(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14707321c FUN_14707321c body=135 status=ok
// SIG undefined FUN_14707321c(void)

longlong FUN_14707321c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1470732a4();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_147073256;
  }
  local_30 = param_3;
  FUN_147073318(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_147073256:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470732a4 FUN_1470732a4 body=115 status=ok
// SIG undefined FUN_1470732a4(void)

int FUN_1470732a4(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 147073318 FUN_147073318 body=277 status=ok
// SIG undefined FUN_147073318(void)

undefined4 * FUN_147073318(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14707342e(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_147073514(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147073618(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707342e FUN_14707342e body=230 status=ok
// SIG undefined FUN_14707342e(void)

int * FUN_14707342e(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147073514 FUN_147073514 body=145 status=ok
// SIG undefined FUN_147073514(void)

undefined8 FUN_147073514(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
     (iVar12 = FUN_1470732a4(), iVar12 != -1)) {
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
    FUN_1470735a6(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 1470735a6 FUN_1470735a6 body=114 status=ok
// SIG undefined FUN_1470735a6(void)

void FUN_1470735a6(longlong *param_1,int param_2)

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



// FUNCTION 147073618 FUN_147073618 body=443 status=ok
// SIG undefined FUN_147073618(void)

void FUN_147073618(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470737d4 FUN_1470737d4 body=9 status=ok
// SIG undefined FUN_1470737d4(void)

void FUN_1470737d4(longlong param_1)

{
  FUN_1470737fc(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1470737de FUN_1470737de body=29 status=ok
// SIG undefined FUN_1470737de(void)

undefined8 FUN_1470737de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470737fc FUN_1470737fc body=58 status=ok
// SIG undefined FUN_1470737fc(void)

void FUN_1470737fc(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_14596b11c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147073836 FUN_147073836 body=114 status=ok
// SIG undefined FUN_147073836(void)

void FUN_147073836(longlong *param_1,int param_2)

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



// FUNCTION 1470738a8 FUN_1470738a8 body=115 status=ok
// SIG undefined FUN_1470738a8(void)

int FUN_1470738a8(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 14707391c FUN_14707391c body=114 status=ok
// SIG undefined FUN_14707391c(void)

void FUN_14707391c(longlong *param_1,int param_2)

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



// FUNCTION 14707398e FUN_14707398e body=114 status=ok
// SIG undefined FUN_14707398e(void)

void FUN_14707398e(longlong *param_1,int param_2)

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



// FUNCTION 147073a00 FUN_147073a00 body=228 status=ok
// SIG undefined FUN_147073a00(void)

int FUN_147073a00(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 147073ae4 FUN_147073ae4 body=9 status=ok
// SIG undefined FUN_147073ae4(void)

void FUN_147073ae4(longlong param_1)

{
  FUN_147073b0c(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 147073aee FUN_147073aee body=29 status=ok
// SIG undefined FUN_147073aee(void)

undefined8 FUN_147073aee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147073b0c FUN_147073b0c body=74 status=ok
// SIG undefined FUN_147073b0c(void)

void FUN_147073b0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 147073b56 FUN_147073b56 body=409 status=ok
// SIG undefined FUN_147073b56(void)

undefined4 * FUN_147073b56(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147073cf0(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  uVar10 = puVar3[1];
  local_40[1] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  local_40[2] = *puVar4;
  local_40[3] = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_147073dd6(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147074082(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147073cf0 FUN_147073cf0 body=230 status=ok
// SIG undefined FUN_147073cf0(void)

int * FUN_147073cf0(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147073dd6 FUN_147073dd6 body=240 status=ok
// SIG undefined FUN_147073dd6(void)

undefined8 FUN_147073dd6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_147073ec8(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_147073ec8(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_14707401e(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_147073fac(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_147073dfc;
    }
  }
  uVar13 = 0;
LAB_147073dfc:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147073ec8 FUN_147073ec8 body=228 status=ok
// SIG undefined FUN_147073ec8(void)

int FUN_147073ec8(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 147073fac FUN_147073fac body=114 status=ok
// SIG undefined FUN_147073fac(void)

void FUN_147073fac(longlong *param_1,int param_2)

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



// FUNCTION 14707401e FUN_14707401e body=100 status=ok
// SIG undefined FUN_14707401e(void)

void FUN_14707401e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147074076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147074082 FUN_147074082 body=527 status=ok
// SIG undefined FUN_147074082(void)

void FUN_147074082(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147074292 FUN_147074292 body=132 status=ok
// SIG undefined FUN_147074292(void)

void FUN_147074292(longlong param_1,int param_2)

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



// FUNCTION 147074318 FUN_147074318 body=134 status=ok
// SIG undefined FUN_147074318(void)

void FUN_147074318(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14707533c(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
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



// FUNCTION 1470743b0 FUN_1470743b0 body=134 status=ok
// SIG undefined FUN_1470743b0(void)

void FUN_1470743b0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14707544a(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
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



// FUNCTION 147074448 FUN_147074448 body=41 status=ok
// SIG undefined FUN_147074448(void)

void FUN_147074448(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_147074490(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 147074472 FUN_147074472 body=29 status=ok
// SIG undefined FUN_147074472(void)

undefined8 FUN_147074472(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147074490 FUN_147074490 body=174 status=ok
// SIG undefined FUN_147074490(void)

void FUN_147074490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x90);
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
  plVar3 = *(longlong **)(param_1 + 0x70);
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
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14707453e(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147074532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14707453e FUN_14707453e body=52 status=ok
// SIG undefined FUN_14707453e(void)

void FUN_14707453e(longlong *param_1)

{
  FUN_147074572();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147074572 FUN_147074572 body=307 status=ok
// SIG undefined FUN_147074572(void)

void FUN_147074572(longlong *param_1)

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
      FUN_14707401e((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470746a6 FUN_1470746a6 body=402 status=ok
// SIG undefined FUN_1470746a6(void)

undefined4 * FUN_1470746a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14707483a(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  local_40[1] = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  local_40[2] = *puVar4;
  local_40[3] = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_147074920(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147074a84(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707483a FUN_14707483a body=230 status=ok
// SIG undefined FUN_14707483a(void)

int * FUN_14707483a(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147074920 FUN_147074920 body=240 status=ok
// SIG undefined FUN_147074920(void)

undefined8 FUN_147074920(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_147073a00(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_147073a00(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_14707141e(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_147074a12(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_147074946;
    }
  }
  uVar13 = 0;
LAB_147074946:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147074a12 FUN_147074a12 body=114 status=ok
// SIG undefined FUN_147074a12(void)

void FUN_147074a12(longlong *param_1,int param_2)

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



// FUNCTION 147074a84 FUN_147074a84 body=527 status=ok
// SIG undefined FUN_147074a84(void)

void FUN_147074a84(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147074c94 FUN_147074c94 body=121 status=ok
// SIG undefined FUN_147074c94(void)

longlong FUN_147074c94(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147074d0e();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147074d66(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 147074d0e FUN_147074d0e body=88 status=ok
// SIG undefined FUN_147074d0e(void)

longlong * FUN_147074d0e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if ((*plVar2 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar1 * 0x28) == param_3[1])) {
          return plVar2;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147074d66 FUN_147074d66 body=277 status=ok
// SIG undefined FUN_147074d66(void)

undefined4 * FUN_147074d66(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147074e7c(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_147074f62(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14707509c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


