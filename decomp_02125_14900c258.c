// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14900c258 FUN_14900c258 body=100 status=ok
// SIG undefined FUN_14900c258(void)

void FUN_14900c258(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14ba61b90;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14ba61b20;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014900c2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14900c2bc FUN_14900c2bc body=58 status=ok
// SIG undefined FUN_14900c2bc(void)

void FUN_14900c2bc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014900c2f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14900c2f6 FUN_14900c2f6 body=173 status=ok
// SIG undefined FUN_14900c2f6(void)

bool FUN_14900c2f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 14900c3a6 FUN_14900c3a6 body=29 status=ok
// SIG undefined FUN_14900c3a6(void)

undefined8 FUN_14900c3a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14900c3de FUN_14900c3de body=29 status=ok
// SIG undefined FUN_14900c3de(void)

bool FUN_14900c3de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14900c3fc FUN_14900c3fc body=26 status=ok
// SIG undefined FUN_14900c3fc(void)

bool FUN_14900c3fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14900c416 FUN_14900c416 body=24 status=ok
// SIG undefined FUN_14900c416(void)

bool FUN_14900c416(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14900c43a FUN_14900c43a body=60 status=ok
// SIG undefined FUN_14900c43a(void)

void FUN_14900c43a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba61c70;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61c00;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900c476 FUN_14900c476 body=60 status=ok
// SIG undefined FUN_14900c476(void)

void FUN_14900c476(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba61c70;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61c00;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900c4b2 FUN_14900c4b2 body=100 status=ok
// SIG undefined FUN_14900c4b2(void)

void FUN_14900c4b2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14ba61c70;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14ba61c00;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014900c507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14900c516 FUN_14900c516 body=58 status=ok
// SIG undefined FUN_14900c516(void)

void FUN_14900c516(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014900c54d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14900c550 FUN_14900c550 body=186 status=ok
// SIG undefined FUN_14900c550(void)

bool FUN_14900c550(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
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
    local_48 = param_5;
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



// FUNCTION 14900c60e FUN_14900c60e body=29 status=ok
// SIG undefined FUN_14900c60e(void)

undefined8 FUN_14900c60e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14900c646 FUN_14900c646 body=29 status=ok
// SIG undefined FUN_14900c646(void)

bool FUN_14900c646(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14900c664 FUN_14900c664 body=26 status=ok
// SIG undefined FUN_14900c664(void)

bool FUN_14900c664(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14900c67e FUN_14900c67e body=24 status=ok
// SIG undefined FUN_14900c67e(void)

bool FUN_14900c67e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14900c6a2 FUN_14900c6a2 body=60 status=ok
// SIG undefined FUN_14900c6a2(void)

void FUN_14900c6a2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba61d50;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61ce0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900c6de FUN_14900c6de body=60 status=ok
// SIG undefined FUN_14900c6de(void)

void FUN_14900c6de(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba61d50;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61ce0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900c71a FUN_14900c71a body=100 status=ok
// SIG undefined FUN_14900c71a(void)

void FUN_14900c71a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14ba61d50;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14ba61ce0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014900c76f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14900c77e FUN_14900c77e body=48 status=ok
// SIG undefined FUN_14900c77e(void)

void FUN_14900c77e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014900c7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14900c7ae FUN_14900c7ae body=163 status=ok
// SIG undefined FUN_14900c7ae(void)

bool FUN_14900c7ae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900c854 FUN_14900c854 body=139 status=ok
// SIG undefined FUN_14900c854(void)

int FUN_14900c854(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        iVar2 = *(int *)(lVar4 + 8 + lVar5);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14900c8e0 FUN_14900c8e0 body=319 status=ok
// SIG undefined FUN_14900c8e0(void)

undefined4 * FUN_14900c8e0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14900ca20(param_1,local_48);
  FUN_14900cb78(local_40,*param_3,param_3[1]);
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
  cVar3 = FUN_14900cb06(param_1,uVar4,local_40,&local_4c);
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
      FUN_14900cc60(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900ca20 FUN_14900ca20 body=229 status=ok
// SIG undefined FUN_14900ca20(void)

int * FUN_14900ca20(longlong *param_1,int *param_2)

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



// FUNCTION 14900cb06 FUN_14900cb06 body=114 status=ok
// SIG undefined FUN_14900cb06(void)

undefined8 FUN_14900cb06(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_14900c854(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14900cbee(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14900cb78 FUN_14900cb78 body=117 status=ok
// SIG undefined FUN_14900cb78(void)

undefined8 * FUN_14900cb78(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  lVar2 = *param_3;
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 14900cbee FUN_14900cbee body=114 status=ok
// SIG undefined FUN_14900cbee(void)

void FUN_14900cbee(longlong *param_1,int param_2)

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



// FUNCTION 14900cc60 FUN_14900cc60 body=476 status=ok
// SIG undefined FUN_14900cc60(void)

void FUN_14900cc60(longlong *param_1)

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



// FUNCTION 14900ce3e FUN_14900ce3e body=180 status=ok
// SIG undefined FUN_14900ce3e(void)

int FUN_14900ce3e(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_14900b2c6(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14900cecc;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14900cecc:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900cef4 FUN_14900cef4 body=325 status=ok
// SIG undefined FUN_14900cef4(void)

undefined4 * FUN_14900cef4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14900d03a(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(undefined8 *)*param_3;
  *local_40 = uVar5;
  lVar8 = *plVar1;
  local_40[1] = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar5 >> 0x20) ^ (uint)uVar5;
  cVar3 = FUN_14900d120(param_1,uVar9,local_40,&local_4c);
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
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14900d218(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900d03a FUN_14900d03a body=230 status=ok
// SIG undefined FUN_14900d03a(void)

int * FUN_14900d03a(longlong *param_1,int *param_2)

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



// FUNCTION 14900d120 FUN_14900d120 body=132 status=ok
// SIG undefined FUN_14900d120(void)

undefined8 FUN_14900d120(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_14900ce3e();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_14900d1a6(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_14900d144;
    }
  }
  uVar6 = 0;
LAB_14900d144:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900d1a6 FUN_14900d1a6 body=114 status=ok
// SIG undefined FUN_14900d1a6(void)

void FUN_14900d1a6(longlong *param_1,int param_2)

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



// FUNCTION 14900d218 FUN_14900d218 body=436 status=ok
// SIG undefined FUN_14900d218(void)

void FUN_14900d218(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14900d3ce FUN_14900d3ce body=139 status=ok
// SIG undefined FUN_14900d3ce(void)

int FUN_14900d3ce(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        iVar2 = *(int *)(lVar4 + 8 + lVar5);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14900d45a FUN_14900d45a body=319 status=ok
// SIG undefined FUN_14900d45a(void)

undefined4 * FUN_14900d45a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14900d59a(param_1,local_48);
  FUN_14900d6f2(local_40,*param_3,param_3[1]);
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
  cVar3 = FUN_14900d680(param_1,uVar4,local_40,&local_4c);
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
      FUN_14900d7da(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900d59a FUN_14900d59a body=229 status=ok
// SIG undefined FUN_14900d59a(void)

int * FUN_14900d59a(longlong *param_1,int *param_2)

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



// FUNCTION 14900d680 FUN_14900d680 body=114 status=ok
// SIG undefined FUN_14900d680(void)

undefined8 FUN_14900d680(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_14900d3ce(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14900d768(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14900d6f2 FUN_14900d6f2 body=117 status=ok
// SIG undefined FUN_14900d6f2(void)

undefined8 * FUN_14900d6f2(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  lVar2 = *param_3;
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 14900d768 FUN_14900d768 body=114 status=ok
// SIG undefined FUN_14900d768(void)

void FUN_14900d768(longlong *param_1,int param_2)

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



// FUNCTION 14900d7da FUN_14900d7da body=476 status=ok
// SIG undefined FUN_14900d7da(void)

void FUN_14900d7da(longlong *param_1)

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



// FUNCTION 14900d9b8 FUN_14900d9b8 body=198 status=ok
// SIG undefined FUN_14900d9b8(void)

void FUN_14900d9b8(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int *piVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = *(int *)(param_2 + 1);
    if (iVar3 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    iVar3 = FUN_144a49b4a(iVar2,puVar6);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
    iVar3 = *(int *)((longlong)plVar5 + uVar4 * 4);
    if (iVar3 != -1) {
      piVar7 = (int *)((longlong)plVar5 + uVar4 * 4);
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x20);
        iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar3 * 0x20);
        if (iVar2 == *(int *)(param_2 + 1)) {
          if (iVar2 < 2) {
LAB_14900da6d:
            FUN_14900da7e(param_1,iVar3);
            return;
          }
          iVar3 = FUN_144a80a00(*puVar1,*param_2);
          if (iVar3 == 0) {
            iVar3 = *piVar7;
            goto LAB_14900da6d;
          }
        }
        else if (*(int *)(param_2 + 1) + iVar2 == 1) goto LAB_14900da6d;
        iVar3 = *(int *)(puVar1 + 3);
        piVar7 = (int *)(puVar1 + 3);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14900da7e FUN_14900da7e body=90 status=ok
// SIG undefined FUN_14900da7e(void)

void FUN_14900da7e(longlong *param_1,int param_2)

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
  FUN_14900dad8();
  return;
}



// FUNCTION 14900dad8 FUN_14900dad8 body=51 status=ok
// SIG undefined FUN_14900dad8(void)

void FUN_14900dad8(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14900cbee(param_1,param_2);
  return;
}



// FUNCTION 14900db0c FUN_14900db0c body=29 status=ok
// SIG undefined FUN_14900db0c(void)

undefined8 FUN_14900db0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14900db44 FUN_14900db44 body=29 status=ok
// SIG undefined FUN_14900db44(void)

bool FUN_14900db44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14900db62 FUN_14900db62 body=26 status=ok
// SIG undefined FUN_14900db62(void)

bool FUN_14900db62(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14900db7c FUN_14900db7c body=24 status=ok
// SIG undefined FUN_14900db7c(void)

bool FUN_14900db7c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14900db94 FUN_14900db94 body=60 status=ok
// SIG undefined FUN_14900db94(void)

void FUN_14900db94(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba5bca0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61de0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900dbd0 FUN_14900dbd0 body=60 status=ok
// SIG undefined FUN_14900dbd0(void)

void FUN_14900dbd0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba5bca0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61de0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900dc0c FUN_14900dc0c body=100 status=ok
// SIG undefined FUN_14900dc0c(void)

void FUN_14900dc0c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14ba5bca0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14ba61de0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014900dc61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14900dc70 FUN_14900dc70 body=40 status=ok
// SIG undefined FUN_14900dc70(void)

void FUN_14900dc70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014900dc95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14900dc98 FUN_14900dc98 body=152 status=ok
// SIG undefined FUN_14900dc98(void)

bool FUN_14900dc98(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14900dd32 FUN_14900dd32 body=29 status=ok
// SIG undefined FUN_14900dd32(void)

undefined8 FUN_14900dd32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14900dd6a FUN_14900dd6a body=29 status=ok
// SIG undefined FUN_14900dd6a(void)

bool FUN_14900dd6a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14900dd88 FUN_14900dd88 body=26 status=ok
// SIG undefined FUN_14900dd88(void)

bool FUN_14900dd88(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14900dda2 FUN_14900dda2 body=24 status=ok
// SIG undefined FUN_14900dda2(void)

bool FUN_14900dda2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14900ddc6 FUN_14900ddc6 body=60 status=ok
// SIG undefined FUN_14900ddc6(void)

void FUN_14900ddc6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba61ec0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61e50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900de02 FUN_14900de02 body=60 status=ok
// SIG undefined FUN_14900de02(void)

void FUN_14900de02(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba61ec0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61e50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900de3e FUN_14900de3e body=100 status=ok
// SIG undefined FUN_14900de3e(void)

void FUN_14900de3e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14ba61ec0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14ba61e50;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014900de93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14900dea2 FUN_14900dea2 body=40 status=ok
// SIG undefined FUN_14900dea2(void)

void FUN_14900dea2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014900dec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14900deca FUN_14900deca body=152 status=ok
// SIG undefined FUN_14900deca(void)

bool FUN_14900deca(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14900df66 FUN_14900df66 body=29 status=ok
// SIG undefined FUN_14900df66(void)

undefined8 FUN_14900df66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14900df9e FUN_14900df9e body=29 status=ok
// SIG undefined FUN_14900df9e(void)

bool FUN_14900df9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14900dfbc FUN_14900dfbc body=26 status=ok
// SIG undefined FUN_14900dfbc(void)

bool FUN_14900dfbc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14900dfd6 FUN_14900dfd6 body=24 status=ok
// SIG undefined FUN_14900dfd6(void)

bool FUN_14900dfd6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14900dfee FUN_14900dfee body=60 status=ok
// SIG undefined FUN_14900dfee(void)

void FUN_14900dfee(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba5b670;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61f30;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900e02a FUN_14900e02a body=60 status=ok
// SIG undefined FUN_14900e02a(void)

void FUN_14900e02a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14ba5b670;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba61f30;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14900e066 FUN_14900e066 body=100 status=ok
// SIG undefined FUN_14900e066(void)

void FUN_14900e066(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14ba5b670;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14ba61f30;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014900e0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14900e0ca FUN_14900e0ca body=149 status=ok
// SIG undefined FUN_14900e0ca(void)

void FUN_14900e0ca(longlong param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_40 = *param_2;
  local_38 = *(undefined8 *)(param_2 + 2);
  local_30 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  local_28 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_20 = param_2[8];
  local_1c = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  (*pcVar1)(uVar2);
  FUN_148fce5a8(param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900e160 FUN_14900e160 body=228 status=ok
// SIG undefined FUN_14900e160(void)

ulonglong FUN_14900e160(longlong param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_50,0);
    lVar4 = CONCAT44(uStack_4c,local_50);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_50 = *param_2;
    local_48 = *(undefined8 *)(param_2 + 2);
    local_40 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    local_38 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    local_30 = param_2[8];
    local_2c = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    (*pcVar1)(lVar3);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  FUN_148fce5a8(param_2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900e245 FUN_14900e245 body=38 status=ok
// SIG undefined FUN_14900e245(void)

void FUN_14900e245(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14900e26c(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 14900e26c FUN_14900e26c body=167 status=ok
// SIG undefined FUN_14900e26c(void)

void FUN_14900e26c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x00014900e307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14900e314 FUN_14900e314 body=132 status=ok
// SIG undefined FUN_14900e314(void)

void FUN_14900e314(longlong param_1,int param_2)

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



// FUNCTION 14900e39a FUN_14900e39a body=294 status=ok
// SIG undefined FUN_14900e39a(void)

undefined4 * FUN_14900e39a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14900e4c2(param_1,local_48);
  FUN_14900e658(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0x38) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_147bede77(local_40);
  cVar2 = FUN_14900e5a8(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)(local_40 + 0x3c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x38) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14900e7a0(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900e4c2 FUN_14900e4c2 body=229 status=ok
// SIG undefined FUN_14900e4c2(void)

int * FUN_14900e4c2(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14900e5a8 FUN_14900e5a8 body=176 status=ok
// SIG undefined FUN_14900e5a8(void)

undefined8 FUN_14900e5a8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
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
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_14900e6c0(), iVar15 != -1)) {
    lVar2 = *param_1;
    lVar16 = (longlong)iVar15 * 0x40;
    puVar1 = (undefined8 *)(lVar2 + lVar16);
    *(undefined ***)(lVar2 + lVar16) = &PTR_FUN_14a5af930;
    if (*(longlong *)(lVar2 + 0x20 + lVar16) != 0) {
      FUN_1400020a8();
    }
    *puVar1 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar1 + 3)])(puVar1 + 1);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[8];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    puVar1[6] = *(undefined8 *)(param_3 + 0xc);
    *(undefined4 *)(puVar1 + 4) = uVar11;
    *(undefined4 *)((longlong)puVar1 + 0x24) = uVar12;
    *(undefined4 *)(puVar1 + 5) = uVar13;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar14;
    *(undefined4 *)(puVar1 + 2) = uVar7;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar8;
    *(undefined4 *)(puVar1 + 3) = uVar9;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar10;
    *(undefined4 *)puVar1 = uVar3;
    *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
    *(undefined4 *)(puVar1 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
    FUN_14900e72e(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 14900e658 FUN_14900e658 body=103 status=ok
// SIG undefined FUN_14900e658(void)

undefined8 * FUN_14900e658(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 0x18);
  *(byte *)(param_1 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14a5af930;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar2 = *param_3;
  param_1[6] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 14900e6c0 FUN_14900e6c0 body=110 status=ok
// SIG undefined FUN_14900e6c0(void)

int FUN_14900e6c0(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_140ba41f1(lVar4 + (longlong)iVar1 * 0x40,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x38 + (longlong)iVar1 * 0x40);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14900e72e FUN_14900e72e body=114 status=ok
// SIG undefined FUN_14900e72e(void)

void FUN_14900e72e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14900e7a0 FUN_14900e7a0 body=444 status=ok
// SIG undefined FUN_14900e7a0(void)

void FUN_14900e7a0(longlong *param_1)

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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = FUN_147bede77(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14900e95e FUN_14900e95e body=47 status=ok
// SIG undefined FUN_14900e95e(void)

void FUN_14900e95e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5d50);
                    /* WARNING: Could not recover jumptable at 0x00014900e98a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 14900e9a8 FUN_14900e9a8 body=47 status=ok
// SIG undefined FUN_14900e9a8(void)

void FUN_14900e9a8(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5d60);
                    /* WARNING: Could not recover jumptable at 0x00014900e9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 14900e9f2 FUN_14900e9f2 body=194 status=ok
// SIG undefined FUN_14900e9f2(void)

void FUN_14900e9f2(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  FUN_141238a10(&local_68);
  local_38 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5d70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  local_68 = &PTR_FUN_14a5af930;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900eabc FUN_14900eabc body=335 status=ok
// SIG undefined FUN_14900eabc(void)

void FUN_14900eabc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [44];
  int local_5c;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x690))(param_1,&local_58,local_5c != 0);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900ec0c FUN_14900ec0c body=220 status=ok
// SIG undefined FUN_14900ec0c(void)

void FUN_14900ec0c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a5dc74(&local_70);
  plVar2 = local_70;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  plVar1 = (longlong *)*param_2;
  if (local_70 != plVar1) {
    local_70 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_68 = (undefined4)param_2[1];
  FUN_141238a10(&local_60,param_3);
  uVar3 = FUN_14477b072(param_1,DAT_14cbf5d80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_70);
  FUN_14900ecea(&local_70);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900ecea FUN_14900ecea body=89 status=ok
// SIG undefined FUN_14900ecea(void)

void FUN_14900ecea(longlong *param_1)

{
  param_1[2] = (longlong)&PTR_FUN_14a5af930;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = (longlong)&PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 5)])(param_1 + 3);
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014900ed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14900ed44 FUN_14900ed44 body=349 status=ok
// SIG undefined FUN_14900ed44(void)

void FUN_14900ed44(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a5dc74(local_68);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x680))(param_1,local_68,&local_58);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900eea2 FUN_14900eea2 body=183 status=ok
// SIG undefined FUN_14900eea2(void)

void FUN_14900eea2(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141238a10(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5d90);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900ef5a FUN_14900ef5a body=249 status=ok
// SIG undefined FUN_14900ef5a(void)

void FUN_14900ef5a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x678))(param_1,&local_58);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f054 FUN_14900f054 body=167 status=ok
// SIG undefined FUN_14900f054(void)

void FUN_14900f054(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x700))(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f0fc FUN_14900f0fc body=171 status=ok
// SIG undefined FUN_14900f0fc(void)

void FUN_14900f0fc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_30);
  plVar2 = local_30;
  plVar1 = (longlong *)*param_2;
  if (local_30 != plVar1) {
    local_30 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_28 = (undefined4)param_2[1];
  uVar3 = FUN_14477b072(param_1,DAT_14cbf5db0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f1a8 FUN_14900f1a8 body=178 status=ok
// SIG undefined FUN_14900f1a8(void)

void FUN_14900f1a8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(local_28);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x688))(param_1,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f25c FUN_14900f25c body=216 status=ok
// SIG undefined FUN_14900f25c(void)

void FUN_14900f25c(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6f0))(param_1,local_28);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerCheat_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6f8))(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f336 FUN_14900f336 body=47 status=ok
// SIG undefined FUN_14900f336(void)

void FUN_14900f336(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5dd0);
                    /* WARNING: Could not recover jumptable at 0x00014900f362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 14900f366 FUN_14900f366 body=72 status=ok
// SIG undefined FUN_14900f366(void)

void FUN_14900f366(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6d0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014900f396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6d8))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerDisconnectFromLobby_Validate");
  return;
}



// FUNCTION 14900f3ae FUN_14900f3ae body=214 status=ok
// SIG undefined FUN_14900f3ae(void)

void FUN_14900f3ae(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  FUN_144a5dc74();
  FUN_141238a10(&local_68,param_2);
  plVar2 = local_38;
  plVar1 = (longlong *)*param_3;
  if (local_38 != plVar1) {
    local_38 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_30 = (undefined4)param_3[1];
  uVar3 = FUN_14477b072(param_1,DAT_14cbf5de0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_68);
  FUN_14900f486(&local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f486 FUN_14900f486 body=84 status=ok
// SIG undefined FUN_14900f486(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14900f486(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14900f4da FUN_14900f4da body=383 status=ok
// SIG undefined FUN_14900f4da(void)

void FUN_14900f4da(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_88 [40];
  longlong *local_60 [2];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = &PTR_FUN_14a5af930;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_144a5dc74(local_60);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6a8))(param_1,&local_50,local_60);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerKickPlayer_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6b0))(param_1,&local_50,local_60);
  }
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
  local_50 = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f65a FUN_14900f65a body=197 status=ok
// SIG undefined FUN_14900f65a(void)

void FUN_14900f65a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_144a787a6(&local_88);
  FUN_141238a10(&local_78,param_3);
  FUN_144a787a6(&local_48,param_4);
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5df0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_88);
  FUN_14900f720(&local_88);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f720 FUN_14900f720 body=101 status=ok
// SIG undefined FUN_14900f720(void)

void FUN_14900f720(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = (longlong)&PTR_FUN_14a5af930;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = (longlong)&PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 5)])(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14900f786 FUN_14900f786 body=488 status=ok
// SIG undefined FUN_14900f786(void)

void FUN_14900f786(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [5];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[2] = 0;
  local_78[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = &PTR_FUN_14a5af930;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6e0))(param_1,local_78 + 2,&local_50,local_78);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerLoginPlayer_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6e8))(param_1,local_78 + 2,&local_50,local_78);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900f970 FUN_14900f970 body=47 status=ok
// SIG undefined FUN_14900f970(void)

void FUN_14900f970(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5e00);
                    /* WARNING: Could not recover jumptable at 0x00014900f99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 14900f9a0 FUN_14900f9a0 body=72 status=ok
// SIG undefined FUN_14900f9a0(void)

void FUN_14900f9a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6c0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014900f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6c8))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerNotifyJoiningServer_Validate");
  return;
}



// FUNCTION 14900f9e8 FUN_14900f9e8 body=186 status=ok
// SIG undefined FUN_14900f9e8(void)

void FUN_14900f9e8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = &PTR_FUN_14a5af930;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141238a10(&local_88);
  FUN_141238a10(&local_58,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14cbf5e10);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_88);
  FUN_14900faa4(&local_88);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900faa4 FUN_14900faa4 body=116 status=ok
// SIG undefined FUN_14900faa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14900faa4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[6] = &PTR_FUN_14a5af930;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 9)])(param_1 + 7);
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14900fb18 FUN_14900fb18 body=441 status=ok
// SIG undefined FUN_14900fb18(void)

void FUN_14900fb18(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x698))(param_1,&local_60,&local_90);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetPartyOwner_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6a0))(param_1,&local_60,&local_90);
  }
  local_90 = &PTR_FUN_14a5af930;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_90 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])(&local_88);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900fcd6 FUN_14900fcd6 body=197 status=ok
// SIG undefined FUN_14900fcd6(void)

void FUN_14900fcd6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5e40) {
    FUN_144b3d300(&DAT_14cbf5e40);
    if (DAT_14cbf5e40 == -1) {
      FUN_1446f470e(&DAT_14cbf5e38,L"LobbyState",1);
      _Init_thread_footer(&DAT_14cbf5e40);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5e4c) {
    FUN_144b3d300(&DAT_14cbf5e4c);
    if (DAT_14cbf5e4c == -1) {
      FUN_1446f470e(&DAT_14cbf5e44,L"PlayerState",1);
      _Init_thread_footer(&DAT_14cbf5e4c);
      return;
    }
  }
  return;
}



// FUNCTION 14900fd9c FUN_14900fd9c body=226 status=ok
// SIG undefined FUN_14900fd9c(void)

void FUN_14900fd9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"LobbyState",1);
  uVar1 = FUN_1459f5c76();
  FUN_1459f5c76();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PlayerState",1);
  uVar1 = FUN_1459f5c76();
  FUN_1459f5c76();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14900fe80 FUN_14900fe80 body=87 status=ok
// SIG undefined FUN_14900fe80(void)

void FUN_14900fe80(longlong param_1)

{
  longlong *plVar1;
  
  FUN_148a398aa();
  plVar1 = *(longlong **)(param_1 + 0x428);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[0x81] == param_1) {
      plVar1[0x81] = 0;
      plVar1 = *(longlong **)(param_1 + 0x428);
    }
    if (plVar1[0x2d] == param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014900fed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x440))(plVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14900fed8 FUN_14900fed8 body=104 status=ok
// SIG undefined FUN_14900fed8(void)

void FUN_14900fed8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14497e828();
  plVar1 = *(longlong **)(lVar2 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145a86786();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = FUN_1447210f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014900ff3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x300))(plVar1,uVar3,param_2,*(code **)(*plVar1 + 0x300));
      return;
    }
  }
  return;
}



// FUNCTION 14900ff40 FUN_14900ff40 body=908 status=ok
// SIG undefined FUN_14900ff40(void)

void FUN_14900ff40(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined1 auStack_168 [40];
  longlong local_140;
  int local_138;
  longlong local_130;
  int local_128;
  longlong *local_120;
  uint local_118;
  undefined1 local_110 [104];
  undefined **local_a8;
  int local_a0 [4];
  byte local_90;
  longlong local_88;
  undefined **local_78;
  longlong *local_70;
  undefined8 uStack_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140245d8a(local_110,0,&DAT_149dfb77a,0);
  local_70 = (longlong *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  uVar7 = FUN_1447210f0(param_1);
  FUN_144a7d35a(uVar7,&local_120);
  if (-1 < (int)local_118) {
    do {
      if ((int)local_120[1] <= (int)local_118) break;
      lVar8 = FUN_14479d2ce((ulonglong)local_118 * 8 + *local_120);
      if ((lVar8 != 0) && (lVar2 = *(longlong *)(lVar8 + 0x398), lVar2 != 0)) {
        if ((&DAT_149fc1b6e)[*(byte *)(lVar2 + 0x3b8)] == '\x01') {
          if ((*(longlong **)(lVar2 + 0x3a8) != (longlong *)0x0) &&
             (cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x3a8) + 0x28))(), cVar5 != '\0')) {
LAB_149010051:
            if (*(longlong *)(lVar8 + 0x430) != 0) {
              uVar7 = FUN_1449db7f2();
              bVar6 = FUN_144a7ca96((longlong *)(lVar8 + 0x430),uVar7);
              plVar3 = *(longlong **)(lVar8 + 0x430);
              if ((plVar3 != (longlong *)0x0 & bVar6) == 1) {
                (**(code **)(*plVar3 + 0x330))(plVar3,&local_130);
                if (local_128 - 2U < 0x7fffffff) {
                  FUN_140002266(&local_a8,L"Name=%s",local_130);
                  ppuVar9 = (undefined **)&DAT_149dfb77a;
                  if (local_a0[0] != 0) {
                    ppuVar9 = local_a8;
                  }
                  FUN_141556918(local_110,ppuVar9);
                  if (local_a8 != (undefined **)0x0) {
                    FUN_1400020a8();
                  }
                }
                (**(code **)(*plVar3 + 0x338))(plVar3,&local_140);
                if (local_138 - 2U < 0x7fffffff) {
                  FUN_140002266(&local_a8,&DAT_149e0625e,local_140);
                  ppuVar9 = (undefined **)&DAT_149dfb77a;
                  if (local_a0[0] != 0) {
                    ppuVar9 = local_a8;
                  }
                  FUN_141556918(local_110,ppuVar9);
                  if (local_a8 != (undefined **)0x0) {
                    FUN_1400020a8();
                  }
                }
                (**(code **)(*plVar3 + 0x350))(plVar3,&local_a8);
                FUN_141238a10(&local_78,&local_a8);
                local_a8 = &PTR_FUN_14a5af930;
                if (local_88 != 0) {
                  FUN_1400020a8();
                }
                local_a8 = &PTR_FUN_14a184370;
                (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])(local_a0);
                FUN_141641396(local_110,&local_a8,0);
                if ((&DAT_149fc1b6e)[local_60] == '\x01') {
                  if ((local_70 != (longlong *)0x0) &&
                     (cVar5 = (**(code **)(*local_70 + 0x28))(), cVar5 != '\0')) {
LAB_1490101f9:
                    (**(code **)(*param_1 + 0x740))(param_1,param_1 + 0x87,&local_78,&local_a8);
                  }
                }
                else if (((ulonglong)local_70 & 0xffffff) != 0) goto LAB_1490101f9;
                if (local_a8 != (undefined **)0x0) {
                  FUN_1400020a8();
                }
                if (local_140 != 0) {
                  FUN_1400020a8();
                }
                if (local_130 != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
        }
        else if ((*(uint *)(lVar2 + 0x3a8) & 0xffffff) != 0) goto LAB_149010051;
      }
      uVar1 = local_118 + 1;
      bVar4 = -2 < (int)local_118;
      local_118 = uVar1;
    } while (bVar4);
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
  FUN_141238aee(local_110);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490102ce FUN_1490102ce body=80 status=ok
// SIG undefined FUN_1490102ce(void)

bool FUN_1490102ce(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  
  if (1 < *(int *)(param_2 + 8)) {
    if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
      if ((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
         (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar1 != '\0')) {
LAB_149010315:
        return 1 < *(int *)(param_4 + 8);
      }
    }
    else if ((*(uint *)(param_3 + 8) & 0xffffff) != 0) goto LAB_149010315;
  }
  return false;
}



// FUNCTION 149010324 FUN_149010324 body=96 status=ok
// SIG undefined FUN_149010324(void)

void FUN_149010324(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = param_1[0x2d], lVar1 != 0)) {
    lVar2 = FUN_1459f164e();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000149010381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x648))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14901038c FUN_14901038c body=109 status=ok
// SIG undefined FUN_14901038c(void)

ulonglong FUN_14901038c(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else if ((*(uint *)(param_2 + 8) & 0xffffff) == 0) {
    return 0;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] != '\x01') {
    return (ulonglong)((*(uint *)(param_3 + 8) & 0xffffff) != 0);
  }
  if (*(longlong **)(param_3 + 8) == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001490103e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))();
  return uVar2;
}



// FUNCTION 149010404 FUN_149010404 body=273 status=ok
// SIG undefined FUN_149010404(void)

undefined8 FUN_149010404(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x3b8) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x3a0);
  if (lVar2 != 0) {
    lVar1 = FUN_1411bcc5e();
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (lVar2 = *(longlong *)(param_1 + 0x3a0), lVar2 != 0)) {
      lVar1 = FUN_1411bcc5e();
      if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x3a0);
      }
      local_20 = *(undefined8 *)(lVar2 + 0x18);
      FUN_1400021e4(&local_20,&local_30);
      if ((longlong *)(param_1 + 0x390) == &local_30) {
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x390) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x390) = local_30;
        *(undefined4 *)(param_1 + 0x398) = local_28;
        *(undefined4 *)(param_1 + 0x39c) = local_24;
      }
      uVar3 = 1;
      goto LAB_149010452;
    }
  }
  uVar3 = 0;
LAB_149010452:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149010516 FUN_149010516 body=780 status=ok
// SIG undefined FUN_149010516(void)

void FUN_149010516(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(param_1 + 1000);
  if (lVar6 == 0) {
    lVar6 = param_1 + 0x3c0;
    lVar3 = FUN_14479d2ce(lVar6);
    if (lVar3 == 0) {
      if (*(longlong *)(param_1 + 0x3c8) != 0) {
        lVar3 = FUN_140007850();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar3 == 0) || (cVar2 == '\0')) {
          FUN_14485c47a(lVar6,lVar3);
          if (lVar3 == 0) goto LAB_1490105b5;
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
            FUN_14485c47a(lVar6,lVar3);
          }
        }
        if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_149010591;
      }
    }
    else {
LAB_149010591:
      lVar4 = FUN_144a797b2();
      if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
          (lVar4 = FUN_1458996a6(), lVar4 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        FUN_1411371f6(local_b8);
        local_a8 = param_1;
        uVar5 = FUN_1447210f0(param_1);
        lVar3 = FUN_14479d2ce(lVar6);
        if (lVar3 == 0) {
          if (*(longlong *)(param_1 + 0x3c8) != 0) {
            lVar3 = FUN_140007850();
            cVar2 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar3 == 0) || (cVar2 == '\0')) {
              FUN_14485c47a(lVar6,lVar3);
              if (lVar3 == 0) goto LAB_1490106d0;
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
                FUN_14485c47a(lVar6,lVar3);
              }
            }
            if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_1490106ab;
          }
LAB_1490106d0:
          lVar4 = 0;
        }
        else {
LAB_1490106ab:
          lVar6 = FUN_144a797b2();
          if ((((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) ||
              (lVar6 = FUN_1458996a6(), lVar6 == 0)) ||
             (*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1490106d0;
          lVar4 = 0;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar4 = lVar3;
          }
        }
        local_c8 = local_b8;
        lVar6 = FUN_141137228(uVar5,lVar4,&DAT_14c8464e0,&DAT_14c8464f8);
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar6);
        }
        *(longlong *)(param_1 + 1000) = lVar6;
        FUN_148a3abd4(param_1,&local_c0);
        FUN_1478c1472(lVar6,local_c0);
        if (local_78 != 0) {
          if (local_68 == (longlong *)0x0) {
            local_68 = local_58;
          }
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
LAB_1490105b5:
    lVar6 = *(longlong *)(param_1 + 1000);
    if (lVar6 == 0) goto LAB_14901054c;
  }
  *(undefined4 *)(lVar6 + 0x390) = param_2;
LAB_14901054c:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149010824 FUN_149010824 body=283 status=ok
// SIG undefined FUN_149010824(void)

ulonglong FUN_149010824(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447210f0();
  local_48 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      lVar5 = (**(code **)(*local_38 + 0x20))(local_38,*(undefined8 *)(param_1 + 0x3b8));
      if (((lVar5 != 0) && (*(longlong **)(lVar5 + 0x100) != (longlong *)0x0)) &&
         (1 < *(int *)(param_2 + 1))) {
        plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0x100) + 0x38))();
        plVar4 = &local_48;
        (**(code **)(*plVar6 + 0x30))(plVar6,plVar4);
        if (local_40 == *(int *)(param_2 + 1)) {
          plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
          if (1 < local_40) {
            iVar3 = FUN_144a80a00(local_48,*param_2);
            bVar7 = iVar3 == 0;
            goto LAB_14901092b;
          }
        }
        else {
          bVar7 = *(int *)(param_2 + 1) + local_40 == 1;
LAB_14901092b:
          plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),bVar7);
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1490108de;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1490108de:
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)plVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149010940 FUN_149010940 body=157 status=ok
// SIG undefined FUN_149010940(void)

void FUN_149010940(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      FUN_1447f69b6(param_1 + 0x4f0);
    }
    QueryPerformanceCounter(&local_20);
    *(double *)(param_1 + 0x3a0) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
    *(undefined1 *)(param_1 + 0x3a8) = 1;
    FUN_1447f69b6(param_1 + 0x4d8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490109e4 FUN_1490109e4 body=298 status=ok
// SIG undefined FUN_1490109e4(void)

void FUN_1490109e4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
      return;
    }
    cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))();
    if (cVar4 == '\0') {
      return;
    }
  }
  else if ((*(uint *)(param_2 + 8) & 0xffffff) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3a8);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if ((plVar3 != (longlong *)0x0) && (lVar5 = plVar3[0x85], lVar5 != 0)) {
        if ((&DAT_149fc1b6e)[*(byte *)(lVar5 + 0x3b8)] == '\x01') {
          if ((*(longlong **)(lVar5 + 0x3a8) != (longlong *)0x0) &&
             (cVar4 = (**(code **)(**(longlong **)(lVar5 + 0x3a8) + 0x28))(), cVar4 != '\0')) {
            lVar5 = plVar3[0x85];
LAB_149010aa0:
            cVar4 = FUN_140ba41f1(lVar5 + 0x3a0,param_2);
            if (cVar4 == '\0') {
              (**(code **)(*plVar3 + 0x778))(plVar3,param_2);
            }
          }
        }
        else if ((*(uint *)(lVar5 + 0x3a8) & 0xffffff) != 0) goto LAB_149010aa0;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  lVar2 = *(longlong *)(param_1 + 1000);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x178) == '\x03')) {
    FUN_1490111d2(lVar2 + 0x3b0,param_2);
    return;
  }
  return;
}



// FUNCTION 149010c2e FUN_149010c2e body=528 status=ok
// SIG undefined FUN_149010c2e(void)

void FUN_149010c2e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5ea0) {
    FUN_144b3d300(&DAT_14cbf5ea0);
    if (DAT_14cbf5ea0 == -1) {
      FUN_1446f470e(&DAT_14cbf5e98,L"DisplayName",1);
      _Init_thread_footer(&DAT_14cbf5ea0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5eac) {
    FUN_144b3d300(&DAT_14cbf5eac);
    if (DAT_14cbf5eac == -1) {
      FUN_1446f470e(&DAT_14cbf5ea4,L"UniqueId",1);
      _Init_thread_footer(&DAT_14cbf5eac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5eb8) {
    FUN_144b3d300(&DAT_14cbf5eb8);
    if (DAT_14cbf5eb8 == -1) {
      FUN_1446f470e(&DAT_14cbf5eb0,L"PartyOwnerUniqueId",1);
      _Init_thread_footer(&DAT_14cbf5eb8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5ec4) {
    FUN_144b3d300(&DAT_14cbf5ec4);
    if (DAT_14cbf5ec4 == -1) {
      FUN_1446f470e(&DAT_14cbf5ebc,L"bInLobby",1);
      _Init_thread_footer(&DAT_14cbf5ec4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5ed0) {
    FUN_144b3d300(&DAT_14cbf5ed0);
    if (DAT_14cbf5ed0 == -1) {
      FUN_1446f470e(&DAT_14cbf5ec8,L"ClientActor",1);
      _Init_thread_footer(&DAT_14cbf5ed0);
      return;
    }
  }
  return;
}



// FUNCTION 149010e44 FUN_149010e44 body=458 status=ok
// SIG undefined FUN_149010e44(void)

void FUN_149010e44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"DisplayName",1);
  uVar1 = FUN_1458d5eb0();
  FUN_1458d5eb0();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"UniqueId",1);
  uVar1 = FUN_1458d5eb0();
  FUN_1458d5eb0();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PartyOwnerUniqueId",1);
  uVar1 = FUN_1458d5eb0();
  FUN_1458d5eb0();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bInLobby",1);
  uVar1 = FUN_1458d5eb0();
  FUN_1458d5eb0();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  local_48 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  local_58 = 2;
  FUN_1446f470e(&local_60,L"ClientActor",1);
  uVar1 = FUN_1458d5eb0();
  FUN_1458d5eb0();
  uVar1 = FUN_140f1fabf(uVar1,local_60);
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149011010 FUN_149011010 body=58 status=ok
// SIG undefined FUN_149011010(void)

undefined8 FUN_149011010(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (((lVar1 != 0) && (lVar2 = FUN_1459f5c76(), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                    *(longlong *)
                     (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                    lVar2 + 0x30);
  }
  return 0;
}



// FUNCTION 1490110a2 FUN_1490110a2 body=304 status=ok
// SIG undefined FUN_1490110a2(void)

void FUN_1490110a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5f38) {
    FUN_144b3d300(&DAT_14cbf5f38);
    if (DAT_14cbf5f38 == -1) {
      FUN_1446f470e(&DAT_14cbf5f30,L"bLobbyStarted",1);
      _Init_thread_footer(&DAT_14cbf5f38);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5f44) {
    FUN_144b3d300(&DAT_14cbf5f44);
    if (DAT_14cbf5f44 == -1) {
      FUN_1446f470e(&DAT_14cbf5f3c,L"WaitForPlayersTimeRemaining",1);
      _Init_thread_footer(&DAT_14cbf5f44);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5f50) {
    FUN_144b3d300(&DAT_14cbf5f50);
    if (DAT_14cbf5f50 == -1) {
      FUN_1446f470e(&DAT_14cbf5f48,L"Players",1);
      _Init_thread_footer(&DAT_14cbf5f50);
      return;
    }
  }
  return;
}



// FUNCTION 1490111d2 FUN_1490111d2 body=301 status=ok
// SIG undefined FUN_1490111d2(void)

void FUN_1490111d2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if (0 < *(int *)(param_1 + 0x118)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x110);
      lVar2 = *(longlong *)(lVar1 + 0x10 + lVar7);
      if (((lVar2 != 0) && (cVar3 = FUN_140ba41f1(lVar2 + 0x3a0,param_2), cVar3 != '\0')) &&
         (iVar4 = FUN_14487fd02(*(undefined8 *)(lVar1 + 0x10 + lVar7)), iVar4 < 3)) {
        if (*(longlong *)(lVar1 + 0x10 + lVar7) == 0) {
          uVar6 = 0;
        }
        else {
          FUN_1490126bc(*(longlong *)(param_1 + 0x120) + 0x520);
          uVar6 = *(undefined8 *)(lVar1 + 0x10 + lVar7);
        }
        FUN_140aeefbc(uVar6,0,1);
        *(undefined8 *)(lVar1 + 0x10 + lVar7) = 0;
        iVar4 = *(int *)(param_1 + 0x118);
        if (iVar4 + -1 != (int)lVar9) {
          iVar5 = (iVar4 + -1) - (int)lVar9;
          iVar8 = 1;
          if (iVar5 < 1) {
            iVar8 = iVar5;
          }
          memmove((void *)(lVar7 + *(longlong *)(param_1 + 0x110)),
                  (void *)(*(longlong *)(param_1 + 0x110) + (longlong)(iVar4 - iVar8) * 0x18),
                  (longlong)iVar8 * 0x18);
          iVar4 = *(int *)(param_1 + 0x118);
        }
        *(int *)(param_1 + 0x118) = iVar4 + -1;
        FUN_1490121ee((longlong *)(param_1 + 0x110));
        FUN_1407058ce(param_1);
        FUN_140705914(param_1);
        *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
        return;
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar9 < *(int *)(param_1 + 0x118));
  }
  return;
}



// FUNCTION 149011300 FUN_149011300 body=97 status=ok
// SIG undefined FUN_149011300(void)

longlong FUN_149011300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (iVar2 = FUN_14487fd02(param_2), iVar2 < 3)) &&
     ((longlong)*(int *)(param_1 + 0x118) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10 + lVar3);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x408) == param_2)) {
        return lVar1;
      }
      lVar3 = lVar3 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x118) * 0x18 != lVar3);
  }
  return 0;
}



// FUNCTION 149011362 FUN_149011362 body=349 status=ok
// SIG undefined FUN_149011362(void)

void FUN_149011362(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  LARGE_INTEGER local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_141348dd0();
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar1 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
    uVar2 = FUN_144a3f946();
    puVar1[2] = uVar2;
    *puVar1 = &PTR_FUN_14ba65b60;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_1490114c0;
    uVar2 = FUN_1401b4c98(param_1);
    local_88.QuadPart = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    local_a8 = 1;
    local_a0 = 0xbf800000;
    FUN_1406f3fee(uVar2,param_1 + 0x538,&local_88,0x3f800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    QueryPerformanceCounter(&local_88);
    *(double *)(param_1 + 0x3a0) = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
    FUN_1449db362(&local_98);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490114c0 FUN_1490114c0 body=136 status=ok
// SIG undefined FUN_1490114c0(void)

void FUN_1490114c0(longlong *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[0x2f] == '\x03') {
    QueryPerformanceCounter(&local_20);
    dVar2 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar1 = (double)param_1[0x74];
    param_1[0x74] = (longlong)dVar2;
    (**(code **)(*param_1 + 0x650 + (ulonglong)*(byte *)(param_1 + 0x75) * 8))
              (param_1,dVar2 - dVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901154a FUN_14901154a body=58 status=ok
// SIG undefined FUN_14901154a(void)

undefined8 FUN_14901154a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (((lVar1 != 0) && (lVar2 = FUN_1459f5c76(), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                    *(longlong *)
                     (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                    lVar2 + 0x30);
  }
  return 0;
}



// FUNCTION 149011584 FUN_149011584 body=306 status=ok
// SIG undefined FUN_149011584(void)

void FUN_149011584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"Players",1);
  uVar1 = FUN_1458996a6();
  FUN_1458996a6();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = &LAB_1443e23aa;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bLobbyStarted",1);
  uVar1 = FUN_1458996a6();
  FUN_1458996a6();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = (undefined1 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"WaitForPlayersTimeRemaining",1);
  uVar1 = FUN_1458996a6();
  FUN_1458996a6();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = (undefined1 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490116b8 FUN_1490116b8 body=175 status=ok
// SIG undefined FUN_1490116b8(void)

void FUN_1490116b8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(lVar2 + 0x3ac);
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      FUN_1447f69b6(param_1 + 0x4f0);
    }
    QueryPerformanceCounter(&local_20);
    *(double *)(param_1 + 0x3a0) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149011768 FUN_149011768 body=110 status=ok
// SIG undefined FUN_149011768(void)

void FUN_149011768(longlong *param_1,double param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x640))();
  if ((cVar1 == '\0') && (0.0 < *(float *)((longlong)param_1 + 0x3ac))) {
    fVar2 = (float)((double)*(float *)((longlong)param_1 + 0x3ac) - param_2);
    *(float *)((longlong)param_1 + 0x3ac) = fVar2;
    if (fVar2 <= 0.0) {
      *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
      FUN_149010940(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1490117d8 FUN_1490117d8 body=421 status=ok
// SIG undefined FUN_1490117d8(void)

longlong FUN_1490117d8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [64];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = FUN_1447210f0();
  lVar5 = *(longlong *)(param_1 + 0x398);
  if (lVar5 != 0) {
    lVar4 = FUN_1458d5eb0();
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (*(longlong *)(param_1 + 0x398) != 0)) {
      FUN_1411371f6(local_b8);
      lVar5 = *(longlong *)(param_1 + 0x398);
      if (lVar5 == 0) {
LAB_149011891:
        uVar6 = 0;
      }
      else {
        lVar4 = FUN_1458d5eb0();
        if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) goto LAB_149011891;
        uVar6 = *(undefined8 *)(param_1 + 0x398);
      }
      local_c8 = local_b8;
      lVar5 = FUN_141137228(uVar3,uVar6,&DAT_14c8464e0,&DAT_14c8464f8);
      if (lVar5 != 0) {
        FUN_1478c1472(lVar5,*(undefined8 *)(param_1 + 0x170));
        plVar1 = (longlong *)*param_2;
        plVar2 = *(longlong **)(lVar5 + 0x390);
        if (plVar2 != plVar1) {
          *(longlong **)(lVar5 + 0x390) = plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(int *)(lVar5 + 0x398) = (int)param_2[1];
        FUN_141238a10(lVar5 + 0x3a0,param_3);
        *(undefined1 *)(lVar5 + 0x400) = 1;
      }
      if (local_78 != 0) {
        if (local_68 == (longlong *)0x0) {
          local_68 = local_58;
        }
        (**(code **)(*local_68 + 0x10))();
      }
      goto LAB_149011817;
    }
  }
  lVar5 = 0;
LAB_149011817:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490119ce FUN_1490119ce body=99 status=ok
// SIG undefined FUN_1490119ce(void)

undefined1 FUN_1490119ce(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      *param_2 = 0xffffffffffffffff;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
    lVar1 = param_3[2];
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = param_3[2];
      }
    }
    param_3 = param_3 + 3;
    param_2[2] = lVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 149011a5a FUN_149011a5a body=59 status=ok
// SIG undefined FUN_149011a5a(void)

undefined8 FUN_149011a5a(longlong *param_1)

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



// FUNCTION 149011afb FUN_149011afb body=91 status=ok
// SIG undefined FUN_149011afb(void)

longlong FUN_149011afb(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x38,0x10);
  FUN_149011b56(lVar1,*(undefined4 *)(param_3 + 800),param_1,param_2);
  if (lVar1 != 0) {
    FUN_146f183a6(lVar1,param_3,8);
  }
  return lVar1;
}



// FUNCTION 149011b56 FUN_149011b56 body=140 status=ok
// SIG undefined FUN_149011b56(void)

undefined8 * FUN_149011b56(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  void *_Dst;
  
  FUN_146f181f8();
  *param_1 = &PTR_FUN_14ba659c0;
  param_1[6] = 0;
  if ((param_2 & 0x40) != 0) {
    _Dst = (void *)FUN_14001cc68(0x128);
    memset(_Dst,0,0x128);
    FUN_140f23ff6(_Dst);
    *(undefined8 *)((longlong)_Dst + 0x110) = 0;
    *(undefined8 *)((longlong)_Dst + 0x118) = 0;
    *(undefined8 *)((longlong)_Dst + 0x120) = 0;
    uVar1 = param_1[6];
    param_1[6] = _Dst;
    FUN_14901208e(uVar1);
    FUN_14901208e(0);
  }
  return param_1;
}



// FUNCTION 149011be2 FUN_149011be2 body=60 status=ok
// SIG undefined FUN_149011be2(void)

undefined8 * FUN_149011be2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba659c0;
  FUN_14901208e(param_1[6]);
  FUN_147db8ea4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149011c1e FUN_149011c1e body=130 status=ok
// SIG undefined FUN_149011c1e(void)

void FUN_149011c1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(int *)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38) + 0x44) +
          *(longlong *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar4 = FUN_146f181e6();
  FUN_146f184b6(param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x18),uVar4);
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar4 = FUN_146f18364(param_1);
  FUN_1443e23b0(lVar5,lVar1 + lVar5,lVar2,lVar3 + lVar2,uVar4,param_2);
  return;
}



// FUNCTION 149011ca0 FUN_149011ca0 body=659 status=ok
// SIG undefined FUN_149011ca0(void)

void FUN_149011ca0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_18c;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = **(longlong **)(lVar1 + 0x40);
  if (lVar2 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
      local_148 = 0;
      local_140 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_13c = 0xffffffff00000080;
      local_134 = 0;
      local_128 = 0;
      local_120 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_e4 = 0xffffffff00000080;
      local_dc = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_94 = 0xffffffff00000080;
      local_8c = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xffffffffffffffff;
      local_60 = 0xffffffff;
      local_5c = 2;
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_278 = 0;
      local_270 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_26c = 0xffffffff00000080;
      local_264 = 0;
      local_258 = 0;
      local_250 = 0;
      local_220 = 0;
      local_218 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      local_214 = 0xffffffff00000080;
      local_20c = 0;
      local_200 = 0;
      local_1f8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1c4 = 0xffffffff00000080;
      local_1bc = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0xffffffffffffffff;
      local_190 = 0xffffffff;
      local_18c = 2;
      local_178 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uVar5 = FUN_146f181e6(param_1);
      FUN_146f18422(*(undefined8 *)(param_2 + 8),&local_168,*(undefined8 *)(param_2 + 0x18),uVar5);
      uVar5 = FUN_146f181e6(param_1);
      FUN_146f18598(*(undefined8 *)(param_2 + 8),&local_168,*(undefined8 *)(param_2 + 0x18),uVar5);
      plVar3 = (longlong *)**(undefined8 **)(lVar1 + 0x38);
      cVar4 = (**(code **)(*plVar3 + 200))(plVar3,&local_168,&local_298,0);
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      FUN_1409def00(&local_298);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1409def00(&local_168);
      if (cVar4 != '\0') goto LAB_149011cf2;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x248))(*(longlong **)(param_1 + 0x20),lVar2,0);
  }
LAB_149011cf2:
  if ((local_38 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149011f3c FUN_149011f3c body=336 status=ok
// SIG undefined FUN_149011f3c(void)

void FUN_149011f3c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffff;
  local_4c = 2;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = FUN_146f181e6(param_1);
  FUN_146f18422(*(undefined8 *)(param_3 + 8),&local_158,*(undefined8 *)(param_3 + 0x18),uVar1);
  uVar1 = FUN_146f181e6(param_1);
  FUN_146f186a0(param_2,&local_158,uVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(&local_158);
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901208e FUN_14901208e body=58 status=ok
// SIG undefined FUN_14901208e(void)

void FUN_14901208e(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_1400020a8();
    }
    FUN_1409def00(param_1);
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 1490120c8 FUN_1490120c8 body=147 status=ok
// SIG undefined FUN_1490120c8(void)

void FUN_1490120c8(longlong param_1,int param_2)

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



// FUNCTION 14901215c FUN_14901215c body=110 status=ok
// SIG undefined FUN_14901215c(void)

void FUN_14901215c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1490120c8(param_1,iVar1);
    }
    FUN_1490121cb((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1490121ee(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490121cb FUN_1490121cb body=35 status=ok
// SIG undefined FUN_1490121cb(void)

void FUN_1490121cb(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    param_1[2] = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1490121ee FUN_1490121ee body=62 status=ok
// SIG undefined FUN_1490121ee(void)

void FUN_1490121ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14901222c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14901222c FUN_14901222c body=112 status=ok
// SIG undefined FUN_14901222c(void)

ulonglong FUN_14901222c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149012266;
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
LAB_149012266:
  return param_2 & 0xffffffff;
}



// FUNCTION 14901229c FUN_14901229c body=59 status=ok
// SIG undefined FUN_14901229c(void)

void FUN_14901229c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x128);
  FUN_140f23ff6(param_2);
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  return;
}



// FUNCTION 1490122d8 FUN_1490122d8 body=43 status=ok
// SIG undefined FUN_1490122d8(void)

void FUN_1490122d8(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  return;
}



// FUNCTION 149012304 FUN_149012304 body=38 status=ok
// SIG undefined FUN_149012304(void)

void FUN_149012304(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_2);
  return;
}



// FUNCTION 149012348 FUN_149012348 body=63 status=ok
// SIG undefined FUN_149012348(void)

undefined1 FUN_149012348(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490124f8(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 1490123b0 FUN_1490123b0 body=59 status=ok
// SIG undefined FUN_1490123b0(void)

undefined8 FUN_1490123b0(longlong *param_1)

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



// FUNCTION 1490123fc FUN_1490123fc body=55 status=ok
// SIG undefined FUN_1490123fc(void)

void FUN_1490123fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    if (*(longlong *)(param_2 + 0x110) != 0) {
      FUN_1400020a8();
    }
    FUN_1409def00(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 149012482 FUN_149012482 body=68 status=ok
// SIG undefined FUN_149012482(void)

longlong FUN_149012482(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490120c8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1490121cb(lVar2,1);
  return lVar2;
}



// FUNCTION 1490124f8 FUN_1490124f8 body=154 status=ok
// SIG undefined FUN_1490124f8(void)

longlong FUN_1490124f8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  FUN_149012592(param_1 + 0x110,param_2 + 0x110);
  lVar4 = *(longlong *)(param_2 + 0x120);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x120);
    }
  }
  *(longlong *)(param_1 + 0x120) = lVar4;
  return param_1;
}



// FUNCTION 149012592 FUN_149012592 body=79 status=ok
// SIG undefined FUN_149012592(void)

undefined8 * FUN_149012592(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490125e2(param_1,iVar1);
      FUN_149012655(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1490125e2 FUN_1490125e2 body=115 status=ok
// SIG undefined FUN_1490125e2(void)

void FUN_1490125e2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149012655 FUN_149012655 body=101 status=ok
// SIG undefined FUN_149012655(void)

void FUN_149012655(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 8 + lVar3) = 0xffffffff;
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1490126bc FUN_1490126bc body=164 status=ok
// SIG undefined FUN_1490126bc(void)

void FUN_1490126bc(longlong *param_1,undefined8 param_2)

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
        goto LAB_14901273c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14901273c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 149012760 FUN_149012760 body=29 status=ok
// SIG undefined FUN_149012760(void)

undefined8 FUN_149012760(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149012798 FUN_149012798 body=29 status=ok
// SIG undefined FUN_149012798(void)

bool FUN_149012798(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1490127b6 FUN_1490127b6 body=26 status=ok
// SIG undefined FUN_1490127b6(void)

bool FUN_1490127b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1490127d0 FUN_1490127d0 body=24 status=ok
// SIG undefined FUN_1490127d0(void)

bool FUN_1490127d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1490127e8 FUN_1490127e8 body=93 status=ok
// SIG undefined FUN_1490127e8(void)

void FUN_1490127e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba65b60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149012846 FUN_149012846 body=93 status=ok
// SIG undefined FUN_149012846(void)

void FUN_149012846(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba65b60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490128a4 FUN_1490128a4 body=126 status=ok
// SIG undefined FUN_1490128a4(void)

void FUN_1490128a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba65b60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149012913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149012922 FUN_149012922 body=35 status=ok
// SIG undefined FUN_149012922(void)

void FUN_149012922(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149012941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 149012946 FUN_149012946 body=142 status=ok
// SIG undefined FUN_149012946(void)

bool FUN_149012946(longlong param_1)

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



// FUNCTION 1490129d6 FUN_1490129d6 body=31 status=ok
// SIG undefined FUN_1490129d6(void)

undefined8 FUN_1490129d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149012a12 FUN_149012a12 body=93 status=ok
// SIG undefined FUN_149012a12(void)

void FUN_149012a12(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba65bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149012a70 FUN_149012a70 body=126 status=ok
// SIG undefined FUN_149012a70(void)

void FUN_149012a70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba65bd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149012adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149012aee FUN_149012aee body=21 status=ok
// SIG undefined FUN_149012aee(void)

undefined8 FUN_149012aee(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149012b04 FUN_149012b04 body=346 status=ok
// SIG undefined FUN_149012b04(void)

longlong FUN_149012b04(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cbf5f60 != (longlong *)0x0) && (lVar3 = DAT_14cbf5f60[1], lVar3 != 0))
  goto LAB_149012c3f;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  local_48 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,L"PatchCheck",L"ModuleName");
  if (cVar1 == '\0') {
LAB_149012bf0:
    FUN_1446f470e(&local_38,L"PatchCheck",1);
    uVar2 = FUN_144a52528();
    DAT_14cbf5f60 = (longlong *)FUN_14493e38c(uVar2,local_38);
    lVar3 = (**(code **)(*DAT_14cbf5f60 + 0x40))(DAT_14cbf5f60);
  }
  else {
    uVar2 = FUN_144a52528();
    puVar4 = local_28;
    if ((int)uStack_20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    cVar1 = FUN_1457f751e(uVar2,puVar4,0);
    if (cVar1 != '\0') {
      puVar4 = local_28;
      if ((int)uStack_20 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_30,puVar4,1);
      uVar2 = FUN_144a52528();
      DAT_14cbf5f60 = (longlong *)FUN_1405f3750(uVar2,local_30,0);
    }
    if ((DAT_14cbf5f60 == (longlong *)0x0) || (lVar3 = DAT_14cbf5f60[1], lVar3 == 0))
    goto LAB_149012bf0;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_149012c3f:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 149012c60 FUN_149012c60 body=92 status=ok
// SIG undefined FUN_149012c60(void)

void FUN_149012c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba65ca0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_149013038(param_1 + 4);
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149012cbc FUN_149012cbc body=216 status=ok
// SIG undefined FUN_149012cbc(void)

void FUN_149012cbc(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14052bb08(DAT_14c872ce0,L"PatchCheck",L"bCheckPlatformOSSForUpdate",param_1 + 0x71,
                        &DAT_14c872ce8);
  if (cVar1 == '\0') {
    FUN_14052bb08(DAT_14c872ce0,L"/Script/Hotfix.UpdateManager",L"bCheckPlatformOSSForUpdate",
                  param_1 + 0x71,&DAT_14c872ce8);
  }
  cVar1 = FUN_14052bb08(DAT_14c872ce0,L"PatchCheck",L"bCheckOSSForUpdate",param_1 + 0x72,
                        &DAT_14c872ce8);
  if (cVar1 == '\0') {
    FUN_14052bb08(DAT_14c872ce0,L"/Script/Hotfix.UpdateManager",L"bCheckOSSForUpdate",param_1 + 0x72
                  ,&DAT_14c872ce8);
  }
  FUN_14052bb08(DAT_14c872ce0,L"PatchCheck",L"bPlatformEnvironmentDetectionEnabled",param_1 + 0x74,
                &DAT_14c872ce8);
  return;
}



// FUNCTION 149012d94 FUN_149012d94 body=38 status=ok
// SIG undefined FUN_149012d94(void)

void FUN_149012d94(longlong param_1)

{
  if (*(char *)(param_1 + 0x70) != '\0') {
    return;
  }
  FUN_149012cbc();
  FUN_1443e6188(param_1);
  return;
}



// FUNCTION 149012dba FUN_149012dba body=93 status=ok
// SIG undefined FUN_149012dba(void)

void FUN_149012dba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_30;
  local_30 = param_2;
  local_20 = param_3;
  FUN_1490131a4(param_1 + 0x20,local_14);
  FUN_1449db362(param_3);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149012e18 FUN_149012e18 body=9 status=ok
// SIG undefined FUN_149012e18(void)

void FUN_149012e18(longlong param_1)

{
  FUN_1490136ae(param_1 + 0x20);
  return;
}



// FUNCTION 149012e22 FUN_149012e22 body=109 status=ok
// SIG undefined FUN_149012e22(void)

byte FUN_149012e22(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  uVar5 = FUN_14118da1c();
  bVar2 = FUN_14054d46e(uVar5,L"ForcePatchCheck");
  (**(code **)(*param_1 + 0x20))(param_1);
  bVar3 = FUN_140b3f358();
  uVar5 = FUN_14118da1c();
  bVar4 = FUN_14054d46e(uVar5,L"SkipPatchCheck");
  bVar3 = bVar4 | bVar3;
  if (cVar1 == '\0') {
    bVar3 = bVar2 ^ 1;
  }
  if (bVar2 != 0) {
    bVar3 = bVar2 ^ 1;
  }
  return bVar3;
}



// FUNCTION 149012e90 FUN_149012e90 body=346 status=ok
// SIG undefined FUN_149012e90(void)

ulonglong FUN_149012e90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x28)) {
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar2 = param_1 + 0x30;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = lVar2;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_50);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x48);
    }
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar7 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != (int)uVar8) || (local_60 = uVar5, local_48 != lVar2)) {
      do {
        local_60 = uVar5;
        if (*(int *)(*local_78 + 0x10 + (longlong)iVar7 * 0x20) != 0) {
          lVar3 = *local_78 + (longlong)iVar7 * 0x20;
          plVar9 = (longlong *)(lVar3 + 8);
          plVar4 = (longlong *)*plVar9;
          if ((plVar4 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*plVar4 + 0x30))(), cVar6 != '\0')) {
            if (*(int *)(lVar3 + 0x10) == 0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)*plVar9;
            }
            cVar6 = (**(code **)(*plVar9 + 0x58))();
            if (cVar6 != '\0') {
              uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
              goto LAB_149012f40;
            }
          }
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar7 = local_60._4_4_;
        uVar5 = local_60;
      } while ((local_68 != lVar2 || local_60._4_4_ != (int)uVar8) || local_78 != plVar1);
    }
    uVar8 = 0;
  }
LAB_149012f40:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 149012ff0 FUN_149012ff0 body=27 status=ok
// SIG undefined FUN_149012ff0(void)

void FUN_149012ff0(longlong param_1)

{
  FUN_149013964(param_1 + 8);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 14901300c FUN_14901300c body=43 status=ok
// SIG undefined FUN_14901300c(void)

undefined8 FUN_14901300c(undefined8 param_1,int param_2)

{
  FUN_149012c60();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 149013038 FUN_149013038 body=52 status=ok
// SIG undefined FUN_149013038(void)

void FUN_149013038(longlong *param_1)

{
  FUN_14901306c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14901306c FUN_14901306c body=310 status=ok
// SIG undefined FUN_14901306c(void)

void FUN_14901306c(longlong *param_1)

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
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x20 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490131a4 FUN_1490131a4 body=329 status=ok
// SIG undefined FUN_1490131a4(void)

undefined4 * FUN_1490131a4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1490132ee(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  iVar5 = FUN_144a788f7();
  uVar9 = iVar5 + (int)((ulonglong)uVar2 >> 0x20);
  cVar4 = FUN_1490133d4(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1490134e2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490132ee FUN_1490132ee body=229 status=ok
// SIG undefined FUN_1490132ee(void)

int * FUN_1490132ee(longlong *param_1,int *param_2)

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



// FUNCTION 1490133d4 FUN_1490133d4 body=156 status=ok
// SIG undefined FUN_1490133d4(void)

undefined8 FUN_1490133d4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1449db362(puVar1 + 2);
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_149013470(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 149013470 FUN_149013470 body=114 status=ok
// SIG undefined FUN_149013470(void)

void FUN_149013470(longlong *param_1,int param_2)

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



// FUNCTION 1490134e2 FUN_1490134e2 body=458 status=ok
// SIG undefined FUN_1490134e2(void)

void FUN_1490134e2(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
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



// FUNCTION 1490136ae FUN_1490136ae body=245 status=ok
// SIG undefined FUN_1490136ae(void)

void FUN_1490136ae(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a788f7(param_2 & 0xffffffff);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)(iVar2 + (int)(param_2 >> 0x20)) & (longlong)(int)param_1[9] - 1U) *
                    4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          lVar1 = *param_1;
          lVar3 = (longlong)iVar2 * 0x20;
          plVar4 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar4 = (longlong *)param_1[8];
          }
          lVar7 = (longlong)*(int *)(lVar1 + 0x1c + lVar3);
          iVar6 = *(int *)((longlong)plVar4 + lVar7 * 4);
          if (iVar6 == iVar2) {
            puVar5 = (undefined4 *)((longlong)plVar4 + lVar7 * 4);
          }
          else {
            do {
              lVar7 = (longlong)iVar6;
              iVar6 = *(int *)(lVar1 + 0x18 + lVar7 * 0x20);
            } while (iVar6 != iVar2);
            puVar5 = (undefined4 *)(lVar1 + lVar7 * 0x20 + 0x18);
          }
          *puVar5 = *(undefined4 *)(lVar1 + lVar3 + 0x18);
          FUN_1449db362(*param_1 + lVar3 + 8);
          FUN_149013470(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1490137a4 FUN_1490137a4 body=34 status=ok
// SIG undefined FUN_1490137a4(void)

undefined8 FUN_1490137a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1490137ee FUN_1490137ee body=93 status=ok
// SIG undefined FUN_1490137ee(void)

void FUN_1490137ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba65e60;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba65df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14901384c FUN_14901384c body=93 status=ok
// SIG undefined FUN_14901384c(void)

void FUN_14901384c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba65e60;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ba65df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490138aa FUN_1490138aa body=123 status=ok
// SIG undefined FUN_1490138aa(void)

void FUN_1490138aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba65e60;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba65df0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149013926 FUN_149013926 body=29 status=ok
// SIG undefined FUN_149013926(void)

void FUN_149013926(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 149013944 FUN_149013944 body=30 status=ok
// SIG undefined FUN_149013944(void)

undefined8 FUN_149013944(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149013964 FUN_149013964 body=164 status=ok
// SIG undefined FUN_149013964(void)

void FUN_149013964(longlong *param_1,undefined4 param_2)

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
        goto LAB_1490139e4;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1490139e4:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 149013a08 FUN_149013a08 body=36 status=ok
// SIG undefined FUN_149013a08(void)

undefined8 FUN_149013a08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149013a48 FUN_149013a48 body=93 status=ok
// SIG undefined FUN_149013a48(void)

void FUN_149013a48(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba65ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149013aa6 FUN_149013aa6 body=123 status=ok
// SIG undefined FUN_149013aa6(void)

void FUN_149013aa6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba65ed0;
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



// FUNCTION 149013b22 FUN_149013b22 body=21 status=ok
// SIG undefined FUN_149013b22(void)

undefined8 FUN_149013b22(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149013b5c FUN_149013b5c body=156 status=ok
// SIG undefined FUN_149013b5c(void)

undefined8 * FUN_149013b5c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14494321d(0x78);
    *puVar2 = &PTR_FUN_14ba65ca0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 2;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x4c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x71) = 0x1010101;
    FUN_149012cbc(puVar2);
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
  }
  return puVar2;
}



// FUNCTION 149013c1c FUN_149013c1c body=1172 status=ok
// SIG undefined FUN_149013c1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_149013c1c(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *_Src;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *_Src_00;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _Src_00 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1443e67ef(0,param_2,_Src_00);
  iVar3 = (int)uStack_70;
  if ((int)uStack_70 < 2) {
    bVar11 = false;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbf60d0) && (FUN_144b3d300(&DAT_14cbf60d0), DAT_14cbf60d0 == -1)) {
      DAT_14cbf60c0 = (longlong *)0x0;
      _DAT_14cbf60c8 = 0;
      atexit((_func_5014 *)&LAB_1443ee8b5);
      _Init_thread_footer(&DAT_14cbf60d0);
    }
    if (DAT_14cbf60c8 < 2) {
      uVar4 = FUN_145a36572();
      FUN_140002266(&local_48,L"%s%d",&DAT_14ba6886a,uVar4);
      if (DAT_14cbf60c0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      _Src_00 = local_48;
      DAT_14cbf60c0 = local_48;
      _DAT_14cbf60c8 = uStack_40;
      local_48 = (longlong *)0x0;
      iVar6 = (int)uStack_40;
      if ((int)uStack_40 != 0) goto LAB_149013eb5;
      uStack_40 = uStack_40 & 0xffffffff;
      if ((int)uStack_70 == 0) {
        bVar11 = true;
        goto LAB_149013c64;
      }
      iVar6 = 0;
LAB_149013f41:
      bVar11 = (int)uStack_70 + iVar6 == 1;
    }
    else {
      uStack_40 = CONCAT44(uStack_40._4_4_,DAT_14cbf60c8);
      iVar6 = DAT_14cbf60c8;
LAB_149013eb5:
      _Src_00 = DAT_14cbf60c0;
      local_48 = (longlong *)0x0;
      FUN_1446dd670(&local_48,iVar6,0);
      memcpy(local_48,_Src_00,(longlong)iVar6 * 2);
      iVar6 = (int)uStack_40;
      if ((int)uStack_70 != (int)uStack_40) goto LAB_149013f41;
      bVar11 = true;
      if (1 < (int)uStack_40) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_78 + lVar8);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)local_48 + lVar8);
          uVar10 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149013f15;
            }
            iVar6 = uVar5 - uVar10;
            goto LAB_149014014;
          }
          if (uVar1 == 0) break;
LAB_149013f15:
          lVar8 = lVar8 + 2;
        }
        iVar6 = 0;
LAB_149014014:
        bVar11 = iVar6 == 0;
      }
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_149013c64:
  iVar6 = (int)uStack_80;
  if ((int)uStack_80 < 2) {
    bVar12 = false;
    goto LAB_149013c75;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf60e8) && (FUN_144b3d300(&DAT_14cbf60e8), DAT_14cbf60e8 == -1)) {
    DAT_14cbf60d8 = (longlong *)0x0;
    _DAT_14cbf60e0 = 0;
    atexit((_func_5014 *)&LAB_1443ee8c6);
    _Init_thread_footer(&DAT_14cbf60e8);
  }
  _Src_00 = (longlong *)(_DAT_14cbf60e0 & 0xffffffff);
  if (DAT_14cbf60e0 < 2) {
    lVar8 = FUN_144a8b586();
    local_98 = 1;
    FUN_140807d8e(lVar8 + 0x10,local_68,&DAT_149e06124,&DAT_149e065c6);
    FUN_144a06ecc(local_58,local_68);
    FUN_140ba7826(&local_48,L"Branch-",local_58);
    if (DAT_14cbf60d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    DAT_14cbf60d8 = local_48;
    _DAT_14cbf60e0 = uStack_40;
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    _Src_00 = (longlong *)(_DAT_14cbf60e0 & 0xffffffff);
    local_48 = (longlong *)0x0;
    uStack_40 = CONCAT44(uStack_40._4_4_,DAT_14cbf60e0);
    if (DAT_14cbf60e0 != 0) goto LAB_149013f71;
    uStack_40 = _DAT_14cbf60e0 & 0xffffffff;
    if ((int)uStack_80 == 0) {
      bVar12 = true;
      goto LAB_149013c75;
    }
    iVar7 = 0;
LAB_149013ff6:
    bVar12 = (int)uStack_80 + iVar7 == 1;
  }
  else {
    uStack_40 = CONCAT44(uStack_40._4_4_,DAT_14cbf60e0);
LAB_149013f71:
    _Src = DAT_14cbf60d8;
    local_48 = (longlong *)0x0;
    FUN_1446dd670(&local_48,_Src_00,0);
    memcpy(local_48,_Src,(longlong)(int)_Src_00 * 2);
    iVar7 = (int)uStack_40;
    if ((int)uStack_80 != (int)uStack_40) goto LAB_149013ff6;
    bVar12 = true;
    if (1 < (int)uStack_40) {
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_88 + lVar8);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_48 + lVar8);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149013fcd;
          }
          iVar7 = uVar5 - uVar10;
          goto LAB_14901401d;
        }
        if (uVar1 == 0) break;
LAB_149013fcd:
        lVar8 = lVar8 + 2;
      }
      iVar7 = 0;
LAB_14901401d:
      bVar12 = iVar7 == 0;
    }
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_149013c75:
  if ((bool)(1 < iVar3 & (bVar11 ^ 1U))) {
    uVar9 = 0;
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)_Src_00 >> 8),iVar6 < 2 | bVar12);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1490140b2 FUN_1490140b2 body=292 status=ok
// SIG undefined FUN_1490140b2(void)

void FUN_1490140b2(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar1 = param_1 + 0x20;
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar6);
  iVar4 = FUN_1490193b4(plVar1,uVar3,param_2);
  if (iVar4 != -1) {
    iVar4 = *(int *)(param_2 + 1);
    if (iVar4 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    uVar7 = 0;
    uVar5 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar5 = uVar7;
    }
    uVar3 = FUN_144a49b4a(uVar5,puVar6);
    iVar4 = FUN_1490193b4(plVar1,uVar3,param_2);
    if (iVar4 != -1) {
      uVar7 = (longlong)iVar4 * 0x20 + *plVar1;
    }
    iVar4 = *(int *)(param_2 + 1);
    if (iVar4 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    lVar8 = *(longlong *)(uVar7 + 0x10);
    uVar7 = 0;
    uVar5 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar5 = uVar7;
    }
    uVar3 = FUN_144a49b4a(uVar5,puVar6);
    iVar4 = FUN_1490193b4(plVar1,uVar3,param_2);
    if (iVar4 != -1) {
      uVar7 = (longlong)iVar4 * 0x20 + *plVar1;
    }
    *(longlong *)(uVar7 + 0x10) = param_3;
    lVar8 = (param_3 - lVar8) + param_1[0x40];
    param_1[0x40] = lVar8;
    (**(code **)(*param_1 + 0x2d8))
              (param_1,*(undefined4 *)((longlong)param_1 + 500),(int)param_1[0x3e],lVar8,
               param_1[0x3f]);
  }
  return;
}



// FUNCTION 1490141d6 FUN_1490141d6 body=244 status=ok
// SIG undefined FUN_1490141d6(void)

undefined8 FUN_1490141d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14ba69240;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1490142cc;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490142cc FUN_1490142cc body=220 status=ok
// SIG undefined FUN_1490142cc(void)

void FUN_1490142cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  iVar4 = *(int *)(param_1 + 0x2b0);
  if (iVar4 < 1) {
    return;
  }
  lVar8 = 0;
  bVar5 = false;
  do {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    uVar6 = (uint)lVar8;
    lVar8 = (longlong)(int)uVar6;
    lVar1 = lVar2 + lVar8 * 8;
    lVar10 = 0;
    while ((lVar3 = *(longlong *)(lVar1 + lVar10 * 8), lVar3 != 0 &&
           ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0))) {
      lVar3 = lVar8 + lVar10;
      lVar10 = lVar10 + 1;
      if ((longlong)iVar4 <= lVar3 + 1) {
        if (!bVar5) {
          return;
        }
        goto LAB_149014394;
      }
    }
    iVar9 = (int)lVar10;
    if (~uVar6 + iVar4 != iVar9) {
      iVar7 = (~uVar6 + iVar4) - iVar9;
      if (0 < iVar7) {
        iVar7 = 1;
      }
      memmove((void *)(lVar1 + lVar10 * 8),(void *)(lVar2 + (longlong)(iVar4 - iVar7) * 8),
              (longlong)iVar7 << 3);
      iVar4 = *(int *)(param_1 + 0x2b0);
    }
    lVar8 = lVar8 + lVar10;
    iVar4 = iVar4 + -1;
    *(int *)(param_1 + 0x2b0) = iVar4;
    bVar5 = true;
  } while ((int)(uVar6 + iVar9) < iVar4);
LAB_149014394:
  FUN_145d115d8((longlong *)(param_1 + 0x2a8));
  return;
}



// FUNCTION 1490143a8 FUN_1490143a8 body=232 status=ok
// SIG undefined FUN_1490143a8(void)

undefined8 FUN_1490143a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14ba69320;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14ba692b0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_149014492;
  FUN_149017a2c(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149014492 FUN_149014492 body=362 status=ok
// SIG undefined FUN_149014492(void)

void FUN_149014492(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  int local_70;
  longlong local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  puStack_60 = (undefined8 *)0x0;
  local_38 = param_4;
  local_40 = FUN_142777728(DAT_14c872ce0,*param_3,&local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    local_50 = &local_40;
    local_48 = &local_38;
    local_68 = param_2;
    puStack_60 = param_3;
    local_58 = param_1;
    FUN_1400b22c2(&local_78,"Windows");
    local_88 = 0;
    uStack_80 = 0;
    FUN_1443ed6a0(&local_68);
    FUN_1400b22c2(local_98,"Default");
    FUN_1443ed6a0(&local_68,local_98);
    _Src = local_78;
    local_a8 = (void *)0x0;
    local_a0 = local_70;
    if ((longlong)local_70 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,local_70,0);
      memcpy(local_a8,_Src,(longlong)local_70 * 2);
    }
    FUN_1443ed6a0(&local_68,&local_a8);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490145fe FUN_1490145fe body=491 status=ok
// SIG undefined FUN_1490145fe(void)

longlong FUN_1490145fe(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_145a56e3a();
  lVar4 = *(longlong *)(lVar1 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
  }
  if (*(int *)(lVar4 + 0x280) - 2U < 0x7fffffff) {
    FUN_1446f470e(&local_40,*(undefined8 *)(lVar4 + 0x278),1);
  }
  else {
    local_40 = (undefined2 *)0x0;
  }
  plVar2 = (longlong *)FUN_1401e3228(&local_40);
  if (plVar2 == (longlong *)0x0) {
    lVar1 = 0;
    goto LAB_149014682;
  }
  lVar1 = (**(code **)(*plVar2 + 0x110))(plVar2,DAT_14cbf5fd0);
  if (lVar1 == 0) {
LAB_1490146c7:
    local_40 = (undefined2 *)0x0;
    local_38 = *(int *)(lVar4 + 0x290);
    lVar1 = (longlong)local_38;
    _Src = *(void **)(lVar4 + 0x288);
    if (lVar1 == 0) {
      local_34 = 0;
LAB_1490146f3:
      puVar6 = &DAT_149dfb77a;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar1 * 2);
      puVar6 = local_40;
      if (local_38 == 0) goto LAB_1490146f3;
    }
    uVar3 = FUN_145a56e3a();
    local_50 = 0;
    local_58 = 0;
    lVar4 = FUN_141433b6f(uVar3,0,puVar6,0);
    if (lVar4 == 0) {
      lVar4 = FUN_145a56e3a();
    }
    uVar3 = FUN_1409ffe1d();
    lVar1 = FUN_1490147ea(uVar3,lVar4);
    (**(code **)(*plVar2 + 0x118))(plVar2,DAT_14cbf5fd0,lVar1);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar5 = FUN_145a56e3a();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1490146c7;
  }
  if (param_1 != 0) {
    FUN_14485c47a(lVar1 + 0x220,param_1);
  }
LAB_149014682:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1490147ea FUN_1490147ea body=175 status=ok
// SIG undefined FUN_1490147ea(void)

undefined8 FUN_1490147ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14901489a FUN_14901489a body=430 status=ok
// SIG undefined FUN_14901489a(void)

void FUN_14901489a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x208) = 1;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (*(uint *)(param_1 + 0x280) < 2) {
    local_40 = 0;
  }
  else {
    FUN_1446f470e(&local_40,*(undefined8 *)(param_1 + 0x278),0);
  }
  local_28 = local_40;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x88))(plVar3,&local_38);
  }
  plVar3 = plStack_30;
  if ((longlong *)(param_1 + 0x28) != &local_38) {
    *(longlong *)(param_1 + 0x28) = local_38;
    local_38 = 0;
    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plStack_30 != plVar2) {
      plStack_30 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x30) = plVar3;
      if (plVar2 != (longlong *)0x0) {
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_38,param_1 + 0x38);
    *(longlong *)(param_1 + 0x68) = local_38;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
              (*(longlong **)(param_1 + 0x28),&local_38,param_1 + 0x48);
    *(longlong *)(param_1 + 0x78) = local_38;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x60))
              (*(longlong **)(param_1 + 0x28),&local_38,param_1 + 0x58);
    *(longlong *)(param_1 + 0x80) = local_38;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149014a4a FUN_149014a4a body=197 status=ok
// SIG undefined FUN_149014a4a(void)

void FUN_149014a4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_149017dd8(param_1 + 0x100);
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))
              (*(longlong **)(param_1 + 0x28),param_1 + 0x68);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))
              (*(longlong **)(param_1 + 0x28),param_1 + 0x78);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
              (*(longlong **)(param_1 + 0x28),param_1 + 0x80);
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
  *(undefined1 *)(param_1 + 0x208) = 0;
  lVar4 = *(longlong *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (lVar4 == 0) {
    return;
  }
  FUN_1468861be(lVar4);
  FUN_1400020a8(lVar4);
  return;
}



// FUNCTION 149014b10 FUN_149014b10 body=151 status=ok
// SIG undefined FUN_149014b10(void)

void FUN_149014b10(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  
  if (0 < (int)param_1[0x2b]) {
    uVar3 = 0;
    do {
      cVar1 = (**(code **)(*param_1 + 0x358))(param_1,param_1[0x2a] + (longlong)(int)uVar3 * 0xa8);
      if (cVar1 == '\0') {
        _Dst = (void *)((longlong)(int)uVar3 * 0xa8 + param_1[0x2a]);
        FUN_148fc3128(_Dst);
        iVar2 = (int)param_1[0x2b];
        if (~uVar3 + iVar2 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0xa8),(longlong)(int)(~uVar3 + iVar2) * 0xa8);
          iVar2 = (int)param_1[0x2b];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 0x2b) = iVar2;
        uVar3 = uVar3 - 1;
      }
      else {
        iVar2 = (int)param_1[0x2b];
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  return;
}



// FUNCTION 149014ba8 FUN_149014ba8 body=185 status=ok
// SIG undefined FUN_149014ba8(void)

void FUN_149014ba8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ba69470;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_149018da4(puVar1 + 1,param_3);
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[3] = lVar3;
  *puVar1 = &PTR_FUN_14ba69400;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1 + 4,param_2);
  puVar1[5] = FUN_1443e7dfe;
  return;
}



// FUNCTION 149014c64 FUN_149014c64 body=587 status=ok
// SIG undefined FUN_149014c64(void)

longlong * FUN_149014c64(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  int iVar4;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1443e67ef(param_3);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x1b8) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x1b0);
    iVar2 = *(int *)(param_1 + 0x1b8) + -1;
  }
  cVar1 = FUN_144a791f8(param_2,puVar5,iVar2,1);
  if (cVar1 == '\0') {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x1c8) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)(param_1 + 0x1c0);
      iVar2 = *(int *)(param_1 + 0x1c8) + -1;
    }
    cVar1 = FUN_144a791f8(param_2,puVar5,iVar2,1);
    if (cVar1 == '\0') {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x1d8) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(param_1 + 0x1d0);
        iVar2 = *(int *)(param_1 + 0x1d8) + -1;
      }
      cVar1 = FUN_144a791f8(param_2,puVar5,iVar2,1);
      if (cVar1 == '\0') {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x2a0) == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        else {
          puVar5 = *(undefined2 **)(param_1 + 0x298);
          iVar2 = *(int *)(param_1 + 0x2a0) + -1;
        }
        cVar1 = FUN_144a791f8(param_2,puVar5,iVar2,1);
        if (cVar1 == '\0') goto LAB_149014d8e;
        iVar2 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          iVar2 = 0;
        }
        iVar4 = *(int *)(param_1 + 0x2a0);
      }
      else {
        iVar2 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          iVar2 = 0;
        }
        iVar4 = *(int *)(param_1 + 0x1d8);
      }
    }
    else {
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      iVar4 = *(int *)(param_1 + 0x1c8);
    }
  }
  else {
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x1b8);
  }
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  iVar4 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
    iVar4 = 0;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar6 = iVar4;
  if (iVar2 - iVar3 < iVar4) {
    iVar6 = iVar2 - iVar3;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  FUN_140056680(&local_58,(longlong)puVar5 + ((longlong)iVar4 * 2 - (ulonglong)(uint)(iVar6 * 2)));
  if (&local_58 == param_2) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
LAB_149014d8e:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149014eb0 FUN_149014eb0 body=122 status=ok
// SIG undefined FUN_149014eb0(void)

undefined8 FUN_149014eb0(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c50e86(&local_28,param_2,1);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_146804968(DAT_14c872ce0,param_1,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149014f2c FUN_149014f2c body=187 status=ok
// SIG undefined FUN_149014f2c(void)

undefined8 FUN_149014f2c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x350))(param_1,local_30,param_2);
  FUN_140c50e86(&local_40,local_30,1);
  uVar1 = DAT_14c872ce0;
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_48,puVar2,1);
  uVar1 = FUN_142777728(uVar1,local_48,&local_40);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 149014fe8 FUN_149014fe8 body=604 status=ok
// SIG undefined FUN_149014fe8(void)

ulonglong FUN_149014fe8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_168 [40];
  longlong local_140 [2];
  undefined8 local_130;
  undefined2 *local_128;
  int local_120;
  undefined2 *local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  (**(code **)(*param_1 + 0x350))(param_1,&local_118,param_2);
  FUN_140c50e86(&local_128,&local_118,1);
  uVar2 = DAT_14c872ce0;
  puVar6 = local_128;
  if (local_120 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_130,puVar6,0);
  cVar3 = FUN_1427778ec(uVar2,local_130);
  if ((cVar3 == '\0') || (uVar4 = FUN_141348652(DAT_14c872ce0,&local_128), uVar4 == 0)) {
    FUN_14626aeae(DAT_14c872ce0,&local_108);
    uVar4 = 0;
    if ((longlong)local_100 != 0) {
      plVar8 = local_108 + (longlong)local_100 * 2;
      plVar9 = local_108;
LAB_1490150c3:
      uVar7 = (ulonglong)(local_110 - 1);
      if (local_110 == 0) {
        uVar7 = uVar4;
      }
      puVar6 = &DAT_149dfb77a;
      if (local_110 != 0) {
        puVar6 = local_118;
      }
      cVar3 = FUN_144a38768(plVar9,puVar6,uVar7,1);
      if (cVar3 == '\0') {
        iVar1 = (int)plVar9[1];
        if (iVar1 == local_120) {
          if (1 < iVar1) {
            lVar10 = 0;
            do {
              uVar5 = *(ushort *)(*plVar9 + lVar10);
              uVar7 = (ulonglong)uVar5;
              uVar11 = *(ushort *)((longlong)local_128 + lVar10);
              if (uVar5 == uVar11) {
                if (uVar5 == 0) break;
              }
              else {
                if (0x7f < (uVar11 | uVar5)) goto LAB_14901515b;
                uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar12]) goto LAB_14901515b;
              }
              lVar10 = lVar10 + 2;
            } while( true );
          }
          goto LAB_149015162;
        }
        if (local_120 + iVar1 == 1) goto LAB_149015162;
        goto LAB_14901514c;
      }
      goto LAB_149015162;
    }
LAB_149015174:
    FUN_1447a1747(local_108,local_100);
    if (local_108 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (uVar4 == 0) {
      FUN_149014eb0(local_140,&local_118);
      FUN_1408e76da(&local_108);
      FUN_14680483a(DAT_14c872ce0,local_140,&local_108);
      uVar4 = FUN_14052bcbc(DAT_14c872ce0,local_140);
      FUN_1409263a6(&local_108);
      if (local_140[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  *(byte *)(uVar4 + 0x50) = *(byte *)(uVar4 + 0x50) | 2;
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
LAB_14901515b:
  if (uVar5 == uVar11) {
LAB_149015162:
    uVar4 = FUN_141348652(DAT_14c872ce0,plVar9);
    goto LAB_149015174;
  }
LAB_14901514c:
  plVar9 = plVar9 + 2;
  if (plVar9 == plVar8) goto LAB_149015174;
  goto LAB_1490150c3;
}



// FUNCTION 149015246 FUN_149015246 body=845 status=ok
// SIG undefined FUN_149015246(void)

undefined8 FUN_149015246(undefined2 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined4 local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  code *local_a8 [2];
  undefined8 *local_98;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14c948aa0 != (longlong *)0x0) {
    local_e0 = (undefined2 *)0x0;
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
    (**(code **)(*DAT_14c948aa0 + 0x60))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf6004) && (FUN_144b3d300(&DAT_14cbf6004), DAT_14cbf6004 == -1)) {
    iVar2 = (**(code **)(*DAT_14cbf5fe0 + 0xb0))();
    DAT_14cbf6000 = iVar2 != 0;
    _Init_thread_footer(&DAT_14cbf6004);
  }
  if (DAT_14cbf6000 == '\x01') {
    FUN_149014eb0(&local_e0,param_2);
    puVar5 = local_e0;
    if ((int)uStack_d8 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_b0,puVar5,1);
    if (local_e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68[0] = 0;
    local_58 = 0;
    uStack_d8 = local_b0;
    local_d0 = (undefined2 *)0x0;
    local_c8 = *(int *)(param_2 + 1);
    lVar6 = (longlong)local_c8;
    pvVar1 = (void *)*param_2;
    local_e0 = param_1;
    if (lVar6 == 0) {
      local_c4 = 0;
    }
    else {
      FUN_1446dd670(&local_d0,local_c8,0);
      memcpy(local_d0,pvVar1,lVar6 * 2);
    }
    local_c0 = (void *)0x0;
    local_b8 = *(int *)(param_3 + 1);
    lVar6 = (longlong)local_b8;
    pvVar1 = (void *)*param_3;
    if (lVar6 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1446dd670(&local_c0,local_b8,0);
      memcpy(local_c0,pvVar1,lVar6 * 2);
    }
    local_a8[0] = (code *)0x0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x38,8);
    puVar5 = local_d0;
    *puVar4 = &PTR_FUN_14ba69550;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_e0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_e0._4_4_;
    *(int *)(puVar4 + 2) = (int)uStack_d8;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_d8._4_4_;
    puVar4[3] = 0;
    lVar6 = (longlong)local_c8;
    *(int *)(puVar4 + 4) = local_c8;
    local_98 = puVar4;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(puVar4 + 3,local_c8,0);
      memcpy((void *)puVar4[3],puVar5,lVar6 * 2);
    }
    pvVar1 = local_c0;
    puVar4[5] = 0;
    lVar6 = (longlong)local_b8;
    *(int *)(puVar4 + 6) = local_b8;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
    }
    else {
      FUN_1446dd670(puVar4 + 5,local_b8,0);
      memcpy((void *)puVar4[5],pvVar1,lVar6 * 2);
    }
    if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_a8[0] = FUN_1443efc04;
    }
    FUN_14277dcb4(local_b0,local_a8,local_68);
    puVar5 = local_d0;
    if (local_c0 != (void *)0x0) {
      FUN_1400020a8();
      puVar5 = local_d0;
    }
  }
  else {
    lVar6 = FUN_149014fe8(param_1,param_2);
    lVar3 = FUN_149015594(param_1,param_2,lVar6);
    FUN_146802d48(lVar6,param_3,param_2);
    FUN_1400021e4(lVar6 + 0x54,&local_e0);
    FUN_1443e9252(param_3,&local_e0,lVar3 + 0xe8);
    puVar5 = local_e0;
  }
  if (puVar5 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 149015594 FUN_149015594 body=372 status=ok
// SIG undefined FUN_149015594(void)

longlong * FUN_149015594(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x350))(param_1,local_50,param_2);
  FUN_149014eb0(&local_40,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)param_1[0x35] == 0) {
LAB_1490156b4:
    iVar2 = FUN_14901570a(param_1 + 0x34);
    lVar8 = param_1[0x34];
    plVar4 = (longlong *)(lVar8 + (longlong)iVar2 * 0xf8);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(plVar4,local_40,iVar1);
    FUN_140d7b3ae(lVar8 + (longlong)iVar2 * 0xf8 + 0x10,param_3);
LAB_149015685:
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar4;
  }
  plVar4 = (longlong *)param_1[0x34];
  plVar3 = plVar4 + (longlong)(int)param_1[0x35] * 0x1f;
LAB_149015612:
  if ((int)plVar4[1] != local_38) {
    if ((int)plVar4[1] + local_38 == 1) goto LAB_149015680;
    goto LAB_14901566a;
  }
  if (1 < local_38) {
    lVar8 = 0;
    do {
      uVar6 = *(ushort *)(*plVar4 + lVar8);
      uVar7 = (ulonglong)uVar6;
      uVar5 = *(ushort *)(local_40 + lVar8);
      if (uVar6 == uVar5) {
        if (uVar6 == 0) break;
      }
      else {
        if (0x7f < (uVar5 | uVar6)) goto LAB_149015678;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar9]) goto LAB_149015678;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  goto LAB_149015680;
LAB_149015678:
  if (uVar6 == uVar5) {
LAB_149015680:
    if (plVar4 != (longlong *)0x0) goto LAB_149015685;
    goto LAB_1490156b4;
  }
LAB_14901566a:
  plVar4 = plVar4 + 0x1f;
  if (plVar4 == plVar3) goto LAB_1490156b4;
  goto LAB_149015612;
}



// FUNCTION 14901570a FUN_14901570a body=58 status=ok
// SIG undefined FUN_14901570a(void)

int FUN_14901570a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14901a51c(param_1,iVar1);
  }
  FUN_14901a4ed((longlong)iVar1 * 0xf8 + *param_1);
  return iVar1;
}



// FUNCTION 149015744 FUN_149015744 body=88 status=ok
// SIG undefined FUN_149015744(void)

void FUN_149015744(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0xf8 + *param_1);
  FUN_149017220(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xf8),(longlong)(int)(~param_2 + iVar1) * 0xf8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14901a5b4(param_1);
  return;
}



// FUNCTION 1490157a4 FUN_1490157a4 body=48 status=ok
// SIG undefined FUN_1490157a4(void)

undefined8 FUN_1490157a4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x220);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x220);
    return uVar2;
  }
  return 0;
}



// FUNCTION 149015822 FUN_149015822 body=172 status=ok
// SIG undefined FUN_149015822(void)

undefined4 FUN_149015822(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_76 = 1;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_14020fad6(&local_88,L"Adhoc");
  local_78 = CONCAT11(param_2,(undefined1)local_78);
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1,&local_88);
  FUN_145e17b70(&local_88);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490158d0 FUN_1490158d0 body=449 status=ok
// SIG undefined FUN_1490158d0(void)

undefined8 FUN_1490158d0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_1401cb356();
  local_88 = *param_3;
  local_78[0] = (longlong *)0x0;
  local_98 = param_1;
  if (local_88 != 0) {
    plVar5 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[2];
    }
    (**(code **)*plVar5)(plVar5,local_78);
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,7,0x10);
  puVar1 = local_a8;
  local_a0 = 7;
  *local_a8 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_a8[2] = lVar4;
  *local_a8 = &PTR_FUN_14ba69b90;
  local_a8[3] = 0;
  FUN_14485c47a(local_a8 + 3,param_1);
  puVar1[4] = local_98;
  puVar1[6] = local_88;
  puVar1[8] = local_78[0];
  local_78[0] = (longlong *)0x0;
  *(undefined4 *)(puVar1 + 0xc) = local_58;
  *(undefined4 *)((longlong)puVar1 + 100) = uStack_54;
  *(undefined4 *)(puVar1 + 0xd) = uStack_50;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = uStack_4c;
  *(undefined4 *)(puVar1 + 10) = local_68;
  *(undefined4 *)((longlong)puVar1 + 0x54) = uStack_64;
  *(undefined4 *)(puVar1 + 0xb) = uStack_60;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = uStack_5c;
  if (local_88 != 0) {
    local_88 = 0;
  }
  local_b8 = param_4;
  FUN_1405f67fc(uVar3,param_2,&local_a8,L"UUpdateManager_DelayResponse");
  FUN_1449db362(&local_a8);
  if (local_88 != 0) {
    plVar5 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar5 = (longlong *)&local_68;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149015a92 FUN_149015a92 body=676 status=ok
// SIG undefined FUN_149015a92(void)

void FUN_149015a92(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2b0))();
  (**(code **)(*param_1 + 0x328))(param_1,2);
  uVar5 = FUN_1400b4698();
  lVar6 = FUN_144a78ede(param_1,uVar5);
  if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 0x30) != 0)) &&
      (*(char *)(*(longlong *)(lVar6 + 0x30) + 0x2dc) != '\0')) || ((char)param_1[0x3e] == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  FUN_1464149b6(&local_30);
  if (local_30 != (longlong *)0x0) {
    cVar4 = (**(code **)(*local_30 + 0x120))();
    if (cVar4 == '\0') {
      FUN_149015dda(local_38,param_1);
      plVar1 = local_30;
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar3 = local_48;
      local_40 = 3;
      *local_48 = &DAT_149efe500;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_48[2] = lVar7;
      *local_48 = &PTR_FUN_14ba696f0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      puVar3[4] = &LAB_149015fb8;
      FUN_149015fc5(&local_50,param_1);
      (**(code **)(*plVar1 + 0x108))(plVar1,local_50,&local_48);
      (**(code **)(*local_30 + 0x100))();
      goto LAB_149015bf1;
    }
  }
  lVar6 = FUN_149012b04();
  FUN_149016084(lVar6 + 8,local_38,param_1);
  uVar5 = FUN_149012b04();
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar3 = local_60;
  local_58 = 3;
  *local_60 = &DAT_149efe500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_60[2] = lVar7;
  *local_60 = &PTR_FUN_14ba696f0;
  local_60[3] = 0;
  FUN_14485c47a(local_60 + 3,param_1);
  puVar3[4] = &LAB_149015fb8;
  FUN_149015fc5(&local_68,param_1);
  FUN_149012dba(uVar5,local_68,&local_60);
  uVar5 = FUN_149012b04();
  FUN_149012d94(uVar5);
LAB_149015bf1:
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149015dda FUN_149015dda body=232 status=ok
// SIG undefined FUN_149015dda(void)

undefined8 FUN_149015dda(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14ba69680;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14ba69610;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_149015ec4;
  FUN_14901b1fc(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149015ec4 FUN_149015ec4 body=242 status=ok
// SIG undefined FUN_149015ec4(void)

void FUN_149015ec4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1464149b6(&local_38);
  if (local_38 != (longlong *)0x0) {
    cVar4 = (**(code **)(*local_38 + 0x120))();
    if (cVar4 == '\0') {
      FUN_149015fc5(&local_40,param_1);
      (**(code **)(*local_38 + 0x110))(local_38,local_40);
    }
  }
  FUN_140457ffc(&DAT_14cb12780,param_1);
  *(int *)(param_1 + 0x17) = param_2;
  lVar3 = *param_1;
  if (param_2 == 3) {
    (**(code **)(lVar3 + 800))(param_1,8,1);
  }
  else if (param_2 == 0) {
    (**(code **)(lVar3 + 0x2e0))();
  }
  else {
    (**(code **)(lVar3 + 0x310))();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149015fc5 FUN_149015fc5 body=189 status=ok
// SIG undefined FUN_149015fc5(void)

undefined8 FUN_149015fc5(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined2 **)(param_2 + 0x18);
  FUN_1400021e4(&local_30,&local_40);
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  FUN_140002266(&local_30,L"Tag_%u_%s",*(undefined4 *)(param_2 + 0xc),puVar1);
  puVar1 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar1 = local_30;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149016084 FUN_149016084 body=244 status=ok
// SIG undefined FUN_149016084(void)

undefined8 FUN_149016084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14ba697d0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14ba69760;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_149015d48;
  FUN_14901b7f4(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490161ba FUN_1490161ba body=459 status=ok
// SIG undefined FUN_1490161ba(void)

void FUN_1490161ba(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  LARGE_INTEGER local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x328))(param_1,4);
  uVar6 = FUN_1401cb356();
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar3 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_38[2] = lVar7;
  *local_38 = &PTR_FUN_14ba69ab0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_1);
  puVar3[4] = &LAB_149016386;
  local_58 = 0;
  FUN_1405f67fc(uVar6,&local_48,&local_38,L"UUpdateManager_Tick");
  if ((LARGE_INTEGER *)(param_1 + 0x1f) != &local_48) {
    ((LARGE_INTEGER *)(param_1 + 0x1f))->QuadPart = (LONGLONG)local_48;
    local_48.QuadPart = 0;
    plVar2 = (longlong *)param_1[0x20];
    param_1[0x20] = (longlong)local_40;
    local_40 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  QueryPerformanceCounter(&local_48);
  param_1[0x1b] = (longlong)((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0);
  uVar5 = (**(code **)(*DAT_14c948aa0 + 0x70))();
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar5;
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149016394 FUN_149016394 body=109 status=ok
// SIG undefined FUN_149016394(void)

void FUN_149016394(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_1 + 0x328))(param_1,5);
  iVar1 = (int)param_1[0x17];
  if (iVar1 == 4) {
    uVar2 = 6;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else if (iVar1 == 1) {
    uVar2 = 5;
  }
  else {
    if (4 < *(byte *)((longlong)param_1 + 0xbc)) {
      return;
    }
    uVar2 = 0x403020107 >> ((*(byte *)((longlong)param_1 + 0xbc) & 7) << 3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001490163db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1,uVar2,1);
  return;
}



// FUNCTION 149016402 FUN_149016402 body=319 status=ok
// SIG undefined FUN_149016402(void)

void FUN_149016402(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined1 *local_c8;
  undefined1 local_bc [4];
  longlong local_b8 [2];
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + 0x1a0;
  FUN_14901c8fa(lVar1);
  uVar3 = *(uint *)(param_1 + 0x198);
  if ((uint)(*(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1d4)) < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_14901cc5c(lVar1,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x1e8) == 0) || (*(int *)(param_1 + 0x1e8) < iVar2)) {
      *(int *)(param_1 + 0x1e8) = iVar2;
      FUN_14901ca7e(lVar1);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x198) != 0) {
    lVar4 = *(longlong *)(param_1 + 400);
    lVar5 = (longlong)*(int *)(param_1 + 0x198) * 0x68;
    do {
      FUN_14901d24e(local_b8,lVar4,lVar4);
      local_d0 = local_b8;
      local_c8 = local_a8;
      FUN_14901cdfa(lVar1,local_bc,&local_d0);
      FUN_145e17b70(local_a8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x68;
      lVar5 = lVar5 + -0x68;
    } while (lVar5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149016550 FUN_149016550 body=244 status=ok
// SIG undefined FUN_149016550(void)

undefined8
FUN_149016550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14ba69b20;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149016662 FUN_149016662 body=76 status=ok
// SIG undefined FUN_149016662(void)

void FUN_149016662(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140212f8e(&local_20);
  *(undefined8 *)(param_1 + 0xa8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490166b0 FUN_1490166b0 body=117 status=ok
// SIG undefined FUN_1490166b0(void)

void FUN_1490166b0(longlong *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140212f8e(&local_20);
  if ((double)*(int *)((longlong)param_1 + 0xa4) < (double)(local_20 - param_1[0x15]) / 10000000.0)
  {
    (**(code **)(*param_1 + 0x2a8))(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149016726 FUN_149016726 body=37 status=ok
// SIG undefined FUN_149016726(void)

void FUN_149016726(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400b4698();
  uVar1 = FUN_144a78ede(param_1,uVar1);
  FUN_144a7af92(uVar1);
  return;
}



// FUNCTION 14901674c FUN_14901674c body=168 status=ok
// SIG undefined FUN_14901674c(void)

undefined8 * FUN_14901674c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_149018da4(&local_38,param_3);
  FUN_14901d354(param_1 + 0x88,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490167f6 FUN_1490167f6 body=41 status=ok
// SIG undefined FUN_1490167f6(void)

void FUN_1490167f6(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x88);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 149016838 FUN_149016838 body=168 status=ok
// SIG undefined FUN_149016838(void)

undefined8 * FUN_149016838(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14901d5c8(&local_38,param_3);
  FUN_14901d4e0(param_1 + 0xa0,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490168e2 FUN_1490168e2 body=41 status=ok
// SIG undefined FUN_1490168e2(void)

void FUN_1490168e2(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xa0);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 149016924 FUN_149016924 body=168 status=ok
// SIG undefined FUN_149016924(void)

undefined8 * FUN_149016924(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145ae44ae(&local_38,param_3);
  FUN_1458c6c8c(param_1 + 0xb8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490169ce FUN_1490169ce body=41 status=ok
// SIG undefined FUN_1490169ce(void)

void FUN_1490169ce(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xb8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 149016a10 FUN_149016a10 body=168 status=ok
// SIG undefined FUN_149016a10(void)

undefined8 * FUN_149016a10(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_146281d3c(&local_38,param_3);
  FUN_14134bd86(param_1 + 0xd0,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149016aba FUN_149016aba body=41 status=ok
// SIG undefined FUN_149016aba(void)

void FUN_149016aba(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xd0);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 149016afc FUN_149016afc body=168 status=ok
// SIG undefined FUN_149016afc(void)

undefined8 * FUN_149016afc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14901d734(&local_38,param_3);
  FUN_14901d64c(param_1 + 0xe8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149016ba6 FUN_149016ba6 body=41 status=ok
// SIG undefined FUN_149016ba6(void)

void FUN_149016ba6(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xe8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 149016bec FUN_149016bec body=25 status=ok
// SIG undefined FUN_149016bec(void)

undefined8 FUN_149016bec(undefined8 param_1,undefined8 param_2)

{
  FUN_140b74e96(param_2);
  return param_2;
}



// FUNCTION 149016c18 FUN_149016c18 body=239 status=ok
// SIG undefined FUN_149016c18(void)

undefined8 *
FUN_149016c18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  param_1[4] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 149016d08 FUN_149016d08 body=61 status=ok
// SIG undefined FUN_149016d08(void)

void FUN_149016d08(longlong *param_1)

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


