// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a4c282 FUN_147a4c282 body=108 status=ok
// SIG undefined FUN_147a4c282(void)

void FUN_147a4c282(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  
  plVar1 = (longlong *)*param_1;
  puVar2 = *(undefined1 **)plVar1[1];
  if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,1);
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
  }
  FUN_147a4c2ee(param_1,param_2 + 4);
  FUN_14021219d(*param_1,param_2 + 8);
  FUN_147a4c32e(param_1,param_2 + 0x18);
  return;
}



// FUNCTION 147a4c2ee FUN_147a4c2ee body=63 status=ok
// SIG undefined FUN_147a4c2ee(void)

void FUN_147a4c2ee(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 147a4c32e FUN_147a4c32e body=65 status=ok
// SIG undefined FUN_147a4c32e(void)

void FUN_147a4c32e(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    return;
  }
  FUN_1457251a8();
  return;
}



// FUNCTION 147a4c370 FUN_147a4c370 body=61 status=ok
// SIG undefined FUN_147a4c370(void)

void FUN_147a4c370(longlong *param_1)

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



// FUNCTION 147a4c3ae FUN_147a4c3ae body=63 status=ok
// SIG undefined FUN_147a4c3ae(void)

void FUN_147a4c3ae(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 147a4c3ee FUN_147a4c3ee body=65 status=ok
// SIG undefined FUN_147a4c3ee(void)

void FUN_147a4c3ee(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    return;
  }
  FUN_1457251a8();
  return;
}



// FUNCTION 147a4c430 FUN_147a4c430 body=63 status=ok
// SIG undefined FUN_147a4c430(void)

void FUN_147a4c430(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c45a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 147a4c470 FUN_147a4c470 body=115 status=ok
// SIG undefined FUN_147a4c470(void)

void FUN_147a4c470(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = (longlong)&PTR_FUN_14a5af930;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = (longlong)&PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 7)])(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a4c4e4 FUN_147a4c4e4 body=65 status=ok
// SIG undefined FUN_147a4c4e4(void)

void FUN_147a4c4e4(undefined8 *param_1,longlong param_2)

{
  FUN_14021219d(*param_1);
  FUN_14021219d(*param_1,param_2 + 0x10);
  FUN_146214c9d(*param_1,param_2 + 0x20);
  FUN_14021219d(*param_1,param_2 + 0x50);
  return;
}



// FUNCTION 147a4c526 FUN_147a4c526 body=87 status=ok
// SIG undefined FUN_147a4c526(void)

void FUN_147a4c526(longlong *param_1)

{
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



// FUNCTION 147a4c57e FUN_147a4c57e body=63 status=ok
// SIG undefined FUN_147a4c57e(void)

void FUN_147a4c57e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 147a4c5be FUN_147a4c5be body=63 status=ok
// SIG undefined FUN_147a4c5be(void)

void FUN_147a4c5be(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 147a4c5fe FUN_147a4c5fe body=84 status=ok
// SIG undefined FUN_147a4c5fe(void)

void FUN_147a4c5fe(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  
  plVar1 = (longlong *)*param_1;
  puVar2 = *(undefined1 **)plVar1[1];
  if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,1);
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
  }
  FUN_14021219d(*param_1,param_2 + 8);
  return;
}



// FUNCTION 147a4c652 FUN_147a4c652 body=65 status=ok
// SIG undefined FUN_147a4c652(void)

void FUN_147a4c652(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined8 **)param_1[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    return;
  }
  thunk_FUN_146821949();
  return;
}



// FUNCTION 147a4c694 FUN_147a4c694 body=63 status=ok
// SIG undefined FUN_147a4c694(void)

void FUN_147a4c694(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c6be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 147a4c6d4 FUN_147a4c6d4 body=65 status=ok
// SIG undefined FUN_147a4c6d4(void)

void FUN_147a4c6d4(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1 = (longlong *)*param_1;
  puVar1 = *(undefined8 **)param_1[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4c6fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    return;
  }
  thunk_FUN_146821949();
  return;
}



// FUNCTION 147a4c716 FUN_147a4c716 body=174 status=ok
// SIG undefined FUN_147a4c716(void)

longlong * FUN_147a4c716(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1 + 0x1468;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  local_20 = 0;
  if (*(int *)(param_1 + 0x1480) != 0) {
    FUN_1449c0562(&local_38);
  }
  param_2[3] = local_28;
  *(undefined4 *)(param_2 + 4) = local_20;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_1c;
  param_2[1] = local_38;
  param_2[2] = local_30;
  *param_2 = param_1 + 0x1458;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4c7c6 FUN_147a4c7c6 body=189 status=ok
// SIG undefined FUN_147a4c7c6(void)

longlong * FUN_147a4c7c6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_147a4c866;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_147a4c884(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_147a4c866:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 147a4c884 FUN_147a4c884 body=302 status=ok
// SIG undefined FUN_147a4c884(void)

undefined4 *
FUN_147a4c884(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147a4c9b4(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_50 + 1) = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_147a4ca9a(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147a4cbb8(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4c9b4 FUN_147a4c9b4 body=230 status=ok
// SIG undefined FUN_147a4c9b4(void)

int * FUN_147a4c9b4(longlong *param_1,int *param_2)

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



// FUNCTION 147a4ca9a FUN_147a4ca9a body=148 status=ok
// SIG undefined FUN_147a4ca9a(void)

void FUN_147a4ca9a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147a4cb2e((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_147a4cb04;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_147a4cb04:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 147a4cb2e FUN_147a4cb2e body=138 status=ok
// SIG undefined FUN_147a4cb2e(void)

void FUN_147a4cb2e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 147a4cbb8 FUN_147a4cbb8 body=474 status=ok
// SIG undefined FUN_147a4cbb8(void)

void FUN_147a4cbb8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147a4cd94 FUN_147a4cd94 body=357 status=ok
// SIG undefined FUN_147a4cd94(void)

undefined8 FUN_147a4cd94(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 1);
    iVar10 = uVar4 - iVar3;
    iVar9 = iVar10;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar6 = *param_1;
      uVar12 = 0;
      iVar13 = (int)param_1[6];
      uVar14 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar13 * 0x18);
        if (iVar13 < iVar10) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar13 * 0x18);
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          puVar8 = (undefined8 *)(lVar6 + 0x18 + (longlong)(int)(uVar14 - 1) * 0x18);
          uVar11 = uVar14;
          do {
            puVar15 = puVar8;
            uVar14 = uVar11 - 1;
            uVar16 = uVar11 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar8 = puVar15 + -3;
            uVar11 = uVar14;
          } while ((*(uint *)((longlong)plVar17 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar12 = puVar15[-3];
          uVar7 = puVar15[-2];
          uVar11 = 1 << ((byte)iVar13 & 0x1f);
          puVar1[2] = puVar15[-1];
          *puVar1 = uVar12;
          puVar1[1] = uVar7;
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          iVar18 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar18 = iVar13;
          }
          puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | uVar11;
          uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
        }
        iVar13 = iVar5;
      } while (iVar5 != -1);
      iVar13 = (int)param_1[1] - uVar4;
      if (iVar13 != 0) {
        _Dst = (void *)((longlong)iVar10 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar13 * 0x18);
        iVar9 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
    FUN_144a6134a(param_1 + 2,iVar10,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 147a4cefa FUN_147a4cefa body=54 status=ok
// SIG undefined FUN_147a4cefa(void)

void FUN_147a4cefa(longlong *param_1)

{
  FUN_147a4cf30(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a4cf30 FUN_147a4cf30 body=128 status=ok
// SIG undefined FUN_147a4cf30(void)

void FUN_147a4cf30(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147a4d008 FUN_147a4d008 body=54 status=ok
// SIG undefined FUN_147a4d008(void)

undefined1 FUN_147a4d008(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147a4d11c(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147a4d066 FUN_147a4d066 body=59 status=ok
// SIG undefined FUN_147a4d066(void)

undefined8 FUN_147a4d066(longlong *param_1)

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



// FUNCTION 147a4d0ac FUN_147a4d0ac body=34 status=ok
// SIG undefined FUN_147a4d0ac(void)

void FUN_147a4d0ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_147a48a72(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147a4d11c FUN_147a4d11c body=98 status=ok
// SIG undefined FUN_147a4d11c(void)

undefined1 * FUN_147a4d11c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  param_1[0x58] = param_2[0x58];
  return param_1;
}



// FUNCTION 147a4d180 FUN_147a4d180 body=38 status=ok
// SIG undefined FUN_147a4d180(void)

undefined8 FUN_147a4d180(undefined8 param_1,int param_2)

{
  FUN_144b2385e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a4d1a6 FUN_147a4d1a6 body=94 status=ok
// SIG undefined FUN_147a4d1a6(void)

void FUN_147a4d1a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x18) != param_2) || (*(longlong *)(param_1 + 0x10) != 0)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(longlong *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147a4d1f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147a4d204 FUN_147a4d204 body=61 status=ok
// SIG undefined FUN_147a4d204(void)

void FUN_147a4d204(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x1348) & 0x3f) == 0) {
    cVar1 = FUN_147be4072(param_1,param_1 + 0x1230,param_1 + 0x50);
    if (cVar1 != '\0') {
      FUN_1435a915a(param_1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 147a4d2aa FUN_147a4d2aa body=59 status=ok
// SIG undefined FUN_147a4d2aa(void)

undefined8 FUN_147a4d2aa(longlong *param_1)

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



// FUNCTION 147a4d34a FUN_147a4d34a body=29 status=ok
// SIG undefined FUN_147a4d34a(void)

undefined8 FUN_147a4d34a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a4d396 FUN_147a4d396 body=100 status=ok
// SIG undefined FUN_147a4d396(void)

undefined1 FUN_147a4d396(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147a4d422 FUN_147a4d422 body=59 status=ok
// SIG undefined FUN_147a4d422(void)

undefined8 FUN_147a4d422(longlong *param_1)

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



// FUNCTION 147a4d4fc FUN_147a4d4fc body=103 status=ok
// SIG undefined FUN_147a4d4fc(void)

undefined1 FUN_147a4d4fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147a4d58c FUN_147a4d58c body=59 status=ok
// SIG undefined FUN_147a4d58c(void)

undefined8 FUN_147a4d58c(longlong *param_1)

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



// FUNCTION 147a4d62d FUN_147a4d62d body=257 status=ok
// SIG undefined FUN_147a4d62d(void)

void FUN_147a4d62d(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_147d136ce(*param_2,lVar11,param_4);
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



// FUNCTION 147a4d72e FUN_147a4d72e body=98 status=ok
// SIG undefined FUN_147a4d72e(void)

void FUN_147a4d72e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a4d790 FUN_147a4d790 body=132 status=ok
// SIG undefined FUN_147a4d790(void)

void FUN_147a4d790(longlong param_1,int param_2)

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



// FUNCTION 147a4d816 FUN_147a4d816 body=62 status=ok
// SIG undefined FUN_147a4d816(void)

void FUN_147a4d816(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4d854(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147a4d854 FUN_147a4d854 body=93 status=ok
// SIG undefined FUN_147a4d854(void)

ulonglong FUN_147a4d854(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147a4d8b2 FUN_147a4d8b2 body=114 status=ok
// SIG undefined FUN_147a4d8b2(void)

void FUN_147a4d8b2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147a4d924 FUN_147a4d924 body=69 status=ok
// SIG undefined FUN_147a4d924(void)

void FUN_147a4d924(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1406513ec(param_1);
    return;
  }
  return;
}



// FUNCTION 147a4d96a FUN_147a4d96a body=428 status=ok
// SIG undefined FUN_147a4d96a(void)

void FUN_147a4d96a(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147a4db18 FUN_147a4db18 body=90 status=ok
// SIG undefined FUN_147a4db18(void)

void FUN_147a4db18(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147a4d8b2();
  return;
}



// FUNCTION 147a4db72 FUN_147a4db72 body=63 status=ok
// SIG undefined FUN_147a4db72(void)

void FUN_147a4db72(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4dbb2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 147a4dbb2 FUN_147a4dbb2 body=97 status=ok
// SIG undefined FUN_147a4dbb2(void)

ulonglong FUN_147a4dbb2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147a4dc14 FUN_147a4dc14 body=79 status=ok
// SIG undefined FUN_147a4dc14(void)

void FUN_147a4dc14(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_2) {
          FUN_147a4db18();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147a4dc64 FUN_147a4dc64 body=318 status=ok
// SIG undefined FUN_147a4dc64(void)

int * FUN_147a4dc64(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_146f9ea2e(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 8) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 8) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 8) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 8);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 8);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 8) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 8) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 8 + *param_1;
  return param_2;
}



// FUNCTION 147a4dda2 FUN_147a4dda2 body=105 status=ok
// SIG undefined FUN_147a4dda2(void)

void FUN_147a4dda2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (longlong)param_2 * 8) = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar5 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147a4de0c FUN_147a4de0c body=66 status=ok
// SIG undefined FUN_147a4de0c(void)

void FUN_147a4de0c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14093cf00();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147a4de4e FUN_147a4de4e body=278 status=ok
// SIG undefined FUN_147a4de4e(void)

undefined4 * FUN_147a4de4e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_140650e40(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_140650dc4(param_1,uVar5,local_40,&local_4c);
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
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1406513ec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4df66 FUN_147a4df66 body=147 status=ok
// SIG undefined FUN_147a4df66(void)

void FUN_147a4df66(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a4dffa FUN_147a4dffa body=62 status=ok
// SIG undefined FUN_147a4dffa(void)

void FUN_147a4dffa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4e038(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147a4e038 FUN_147a4e038 body=112 status=ok
// SIG undefined FUN_147a4e038(void)

ulonglong FUN_147a4e038(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a4e072;
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
LAB_147a4e072:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a4e0a8 FUN_147a4e0a8 body=86 status=ok
// SIG undefined FUN_147a4e0a8(void)

void FUN_147a4e0a8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147a4e0fe FUN_147a4e0fe body=132 status=ok
// SIG undefined FUN_147a4e0fe(void)

void FUN_147a4e0fe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a4e19c FUN_147a4e19c body=45 status=ok
// SIG undefined FUN_147a4e19c(void)

undefined8
FUN_147a4e19c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  (*(code *)*param_2)(param_1,*param_3,*param_4,*param_5);
  return param_1;
}



// FUNCTION 147a4e1e8 FUN_147a4e1e8 body=62 status=ok
// SIG undefined FUN_147a4e1e8(void)

void FUN_147a4e1e8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4e226(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147a4e226 FUN_147a4e226 body=93 status=ok
// SIG undefined FUN_147a4e226(void)

ulonglong FUN_147a4e226(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147a4e284 FUN_147a4e284 body=96 status=ok
// SIG undefined FUN_147a4e284(void)

void FUN_147a4e284(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147a4e2e4 FUN_147a4e2e4 body=147 status=ok
// SIG undefined FUN_147a4e2e4(void)

void FUN_147a4e2e4(longlong param_1,int param_2)

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



// FUNCTION 147a4e378 FUN_147a4e378 body=90 status=ok
// SIG undefined FUN_147a4e378(void)

void FUN_147a4e378(longlong *param_1,uint param_2)

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



// FUNCTION 147a4e3d2 FUN_147a4e3d2 body=62 status=ok
// SIG undefined FUN_147a4e3d2(void)

void FUN_147a4e3d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4e410(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147a4e410 FUN_147a4e410 body=112 status=ok
// SIG undefined FUN_147a4e410(void)

ulonglong FUN_147a4e410(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a4e44a;
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
LAB_147a4e44a:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a4e480 FUN_147a4e480 body=350 status=ok
// SIG undefined FUN_147a4e480(void)

undefined4 * FUN_147a4e480(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147a3a286(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_147a3a36c(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a3a48a(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4e5e0 FUN_147a4e5e0 body=68 status=ok
// SIG undefined FUN_147a4e5e0(void)

void FUN_147a4e5e0(longlong param_1,uint param_2)

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
  FUN_147a3a48a(param_1);
  return;
}



// FUNCTION 147a4e624 FUN_147a4e624 body=132 status=ok
// SIG undefined FUN_147a4e624(void)

void FUN_147a4e624(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_3) goto LAB_147a4e634;
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_147a4e634:
  *param_2 = iVar1;
  return;
}



// FUNCTION 147a4e6a8 FUN_147a4e6a8 body=93 status=ok
// SIG undefined FUN_147a4e6a8(void)

void FUN_147a4e6a8(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147a3a400(param_1,param_2,1);
  return;
}



// FUNCTION 147a4e706 FUN_147a4e706 body=121 status=ok
// SIG undefined FUN_147a4e706(void)

ulonglong FUN_147a4e706(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_78 [32];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  bVar1 = FUN_14047b390(0,local_58);
  bVar1 = local_58[0] == 5 & bVar1;
  if (bVar1 == 1) {
    FUN_14047d664(param_2,&local_40);
  }
  FUN_1468423ea(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4e780 FUN_147a4e780 body=77 status=ok
// SIG undefined FUN_147a4e780(void)

void FUN_147a4e780(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14021219d(param_1,param_3);
  return;
}



// FUNCTION 147a4e7ce FUN_147a4e7ce body=77 status=ok
// SIG undefined FUN_147a4e7ce(void)

void FUN_147a4e7ce(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14021219d(param_1,param_3);
  return;
}



// FUNCTION 147a4e81c FUN_147a4e81c body=62 status=ok
// SIG undefined FUN_147a4e81c(void)

void FUN_147a4e81c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a4e843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    return;
  }
  thunk_FUN_146821949();
  return;
}



// FUNCTION 147a4e85a FUN_147a4e85a body=94 status=ok
// SIG undefined FUN_147a4e85a(void)

void FUN_147a4e85a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_147a4e81c(param_1,param_3);
  return;
}



// FUNCTION 147a4e8b8 FUN_147a4e8b8 body=147 status=ok
// SIG undefined FUN_147a4e8b8(void)

void FUN_147a4e8b8(longlong param_1,int param_2)

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



// FUNCTION 147a4e94c FUN_147a4e94c body=62 status=ok
// SIG undefined FUN_147a4e94c(void)

void FUN_147a4e94c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4e98a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147a4e98a FUN_147a4e98a body=112 status=ok
// SIG undefined FUN_147a4e98a(void)

ulonglong FUN_147a4e98a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a4e9c4;
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
LAB_147a4e9c4:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a4e9fa FUN_147a4e9fa body=181 status=ok
// SIG undefined FUN_147a4e9fa(void)

longlong FUN_147a4e9fa(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147a4ea92;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147a4eab0(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147a4ea92:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147a4eab0 FUN_147a4eab0 body=277 status=ok
// SIG undefined FUN_147a4eab0(void)

undefined4 * FUN_147a4eab0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a4ebc6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147a4ecac(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147a4edda(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4ebc6 FUN_147a4ebc6 body=229 status=ok
// SIG undefined FUN_147a4ebc6(void)

int * FUN_147a4ebc6(longlong *param_1,int *param_2)

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



// FUNCTION 147a4ecac FUN_147a4ecac body=164 status=ok
// SIG undefined FUN_147a4ecac(void)

undefined8 FUN_147a4ecac(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147a4ed50(param_1,*param_4,1);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a4ed50 FUN_147a4ed50 body=138 status=ok
// SIG undefined FUN_147a4ed50(void)

void FUN_147a4ed50(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147a4edda FUN_147a4edda body=450 status=ok
// SIG undefined FUN_147a4edda(void)

void FUN_147a4edda(longlong *param_1)

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
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147a4ef9e FUN_147a4ef9e body=132 status=ok
// SIG undefined FUN_147a4ef9e(void)

void FUN_147a4ef9e(longlong param_1,int param_2)

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



// FUNCTION 147a4f024 FUN_147a4f024 body=527 status=ok
// SIG undefined FUN_147a4f024(void)

void FUN_147a4f024(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x18);
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
        lVar4 = lVar4 + lVar6 * 0x18;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
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



// FUNCTION 147a4f234 FUN_147a4f234 body=48 status=ok
// SIG undefined FUN_147a4f234(void)

void FUN_147a4f234(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147a4f264 FUN_147a4f264 body=62 status=ok
// SIG undefined FUN_147a4f264(void)

void FUN_147a4f264(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4f2a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147a4f2a2 FUN_147a4f2a2 body=93 status=ok
// SIG undefined FUN_147a4f2a2(void)

ulonglong FUN_147a4f2a2(uint param_1,uint param_2)

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



// FUNCTION 147a4f300 FUN_147a4f300 body=95 status=ok
// SIG undefined FUN_147a4f300(void)

void FUN_147a4f300(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147a4f360 FUN_147a4f360 body=132 status=ok
// SIG undefined FUN_147a4f360(void)

void FUN_147a4f360(longlong param_1,int param_2)

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



// FUNCTION 147a4f3e6 FUN_147a4f3e6 body=413 status=ok
// SIG undefined FUN_147a4f3e6(void)

undefined4 * FUN_147a4f3e6(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147a4f584(param_1,local_48);
  uVar9 = *param_3;
  *local_40 = uVar9;
  uVar3 = param_3[1];
  local_40[1] = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
  }
  else {
    LOCK();
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)local_40[1];
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
    uVar9 = *local_40;
    if (plVar4 != (longlong *)0x0) {
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
  }
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  cVar6 = FUN_147a4f66a(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
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
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147a4f024(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4f584 FUN_147a4f584 body=230 status=ok
// SIG undefined FUN_147a4f584(void)

int * FUN_147a4f584(longlong *param_1,int *param_2)

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



// FUNCTION 147a4f66a FUN_147a4f66a body=274 status=ok
// SIG undefined FUN_147a4f66a(void)

undefined8 FUN_147a4f66a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar8 = FUN_147a4f77e(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar8 = FUN_147a4f77e(param_1);
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
    if (iVar8 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x18);
      plVar4 = *(longlong **)(puVar3 + 2);
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
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar3 = *(undefined4 *)param_3;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_147a4f862(param_1,*param_4);
      *param_4 = iVar8;
      uVar9 = 1;
      goto LAB_147a4f692;
    }
  }
  uVar9 = 0;
LAB_147a4f692:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a4f77e FUN_147a4f77e body=228 status=ok
// SIG undefined FUN_147a4f77e(void)

int FUN_147a4f77e(longlong *param_1,uint param_2,longlong *param_3)

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
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
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
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 147a4f862 FUN_147a4f862 body=114 status=ok
// SIG undefined FUN_147a4f862(void)

void FUN_147a4f862(longlong *param_1,int param_2)

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



// FUNCTION 147a4f8d4 FUN_147a4f8d4 body=132 status=ok
// SIG undefined FUN_147a4f8d4(void)

void FUN_147a4f8d4(longlong param_1,int param_2)

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



// FUNCTION 147a4f95a FUN_147a4f95a body=114 status=ok
// SIG undefined FUN_147a4f95a(void)

void FUN_147a4f95a(longlong *param_1,int param_2)

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



// FUNCTION 147a4f9cc FUN_147a4f9cc body=159 status=ok
// SIG undefined FUN_147a4f9cc(void)

undefined8 FUN_147a4f9cc(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_140c69f9a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a4fa6c FUN_147a4fa6c body=110 status=ok
// SIG undefined FUN_147a4fa6c(void)

void FUN_147a4fa6c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_1457a2d46(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147a4fada FUN_147a4fada body=76 status=ok
// SIG undefined FUN_147a4fada(void)

void FUN_147a4fada(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b56214();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147a4faee;
    }
  }
  lVar2 = 0;
LAB_147a4faee:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 147a4fb26 FUN_147a4fb26 body=70 status=ok
// SIG undefined FUN_147a4fb26(void)

void FUN_147a4fb26(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0x28);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a4fb6c FUN_147a4fb6c body=89 status=ok
// SIG undefined FUN_147a4fb6c(void)

void FUN_147a4fb6c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140442643(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147a4fbc6 FUN_147a4fbc6 body=62 status=ok
// SIG undefined FUN_147a4fbc6(void)

void FUN_147a4fbc6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4fc04(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147a4fc04 FUN_147a4fc04 body=93 status=ok
// SIG undefined FUN_147a4fc04(void)

ulonglong FUN_147a4fc04(uint param_1,uint param_2)

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



// FUNCTION 147a4fc62 FUN_147a4fc62 body=98 status=ok
// SIG undefined FUN_147a4fc62(void)

void FUN_147a4fc62(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_14044268e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147a4fcc4 FUN_147a4fcc4 body=62 status=ok
// SIG undefined FUN_147a4fcc4(void)

void FUN_147a4fcc4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4fd02(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147a4fd02 FUN_147a4fd02 body=112 status=ok
// SIG undefined FUN_147a4fd02(void)

ulonglong FUN_147a4fd02(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a4fd3c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_147a4fd3c:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a4fd72 FUN_147a4fd72 body=48 status=ok
// SIG undefined FUN_147a4fd72(void)

void FUN_147a4fd72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 147a4fda2 FUN_147a4fda2 body=203 status=ok
// SIG undefined FUN_147a4fda2(void)

undefined4 *
FUN_147a4fda2(undefined4 *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *(undefined4 *)(param_2 + 8);
  param_1[1] = *param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_4 + 0x98);
  _Src = *(void **)(param_4 + 0x90);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_4 + 0xa0);
  param_1[8] = param_5;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0xffffffff00000080;
  param_1[0x17] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  FUN_140492002(param_1 + 10,param_6);
  return param_1;
}



// FUNCTION 147a4fe6e FUN_147a4fe6e body=143 status=ok
// SIG undefined FUN_147a4fe6e(void)

void FUN_147a4fe6e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a4fefe FUN_147a4fefe body=62 status=ok
// SIG undefined FUN_147a4fefe(void)

void FUN_147a4fefe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a4ff3c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x78,8);
  }
  return;
}



// FUNCTION 147a4ff3c FUN_147a4ff3c body=104 status=ok
// SIG undefined FUN_147a4ff3c(void)

ulonglong FUN_147a4ff3c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x78) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a4ff72;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x78,8);
      param_2 = param_2 / 0x78;
    }
  }
LAB_147a4ff72:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a4ffa4 FUN_147a4ffa4 body=190 status=ok
// SIG undefined FUN_147a4ffa4(void)

longlong FUN_147a4ffa4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147a50045;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_147a50064(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147a50045:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147a50064 FUN_147a50064 body=302 status=ok
// SIG undefined FUN_147a50064(void)

undefined4 *
FUN_147a50064(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147a50194(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_147a5027a(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147a503c0(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a50194 FUN_147a50194 body=229 status=ok
// SIG undefined FUN_147a50194(void)

int * FUN_147a50194(longlong *param_1,int *param_2)

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



// FUNCTION 147a5027a FUN_147a5027a body=187 status=ok
// SIG undefined FUN_147a5027a(void)

void FUN_147a5027a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147a50336(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_147a502ed;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_147a502ed:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 147a50336 FUN_147a50336 body=138 status=ok
// SIG undefined FUN_147a50336(void)

void FUN_147a50336(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147a503c0 FUN_147a503c0 body=477 status=ok
// SIG undefined FUN_147a503c0(void)

void FUN_147a503c0(longlong *param_1)

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



// FUNCTION 147a5059e FUN_147a5059e body=132 status=ok
// SIG undefined FUN_147a5059e(void)

void FUN_147a5059e(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_3) goto LAB_147a505ae;
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_147a505ae:
  *param_2 = iVar1;
  return;
}



// FUNCTION 147a50622 FUN_147a50622 body=93 status=ok
// SIG undefined FUN_147a50622(void)

void FUN_147a50622(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1470e3eaa(param_1,param_2,1);
  return;
}



// FUNCTION 147a5067f FUN_147a5067f body=450 status=ok
// SIG undefined FUN_147a5067f(void)

undefined8 FUN_147a5067f(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined2 *puVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_80;
  wchar_t *local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(local_58,&DAT_149e3bec0);
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  iVar6 = 0;
  uVar3 = 0;
  if (*(int *)(param_2 + 8) - 2U < 0x7fffffff) {
    iVar6 = 0;
    local_80 = param_1;
    do {
      FUN_144a63a7c(param_2,&local_78,iVar6,1);
      pwVar7 = local_78;
      if (local_70 == 0) {
        pwVar7 = L"";
      }
      if (pwVar7 == (wchar_t *)0x0) {
LAB_147a50752:
        uVar1 = uStack_60;
        pwVar7 = local_78;
        lVar8 = (longlong)(int)uStack_60;
        uVar3 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        if (uStack_60._4_4_ < uVar3) {
          FUN_144a2dbb8(&local_68,uVar1 & 0xffffffff);
        }
        local_68[lVar8] = *pwVar7;
      }
      else {
        sVar4 = wcslen(pwVar7);
        local_90 = 0xffffffff;
        local_98 = 0;
        iVar2 = FUN_1447ee042(local_58,pwVar7,sVar4 & 0xffffffff,1);
        if (iVar2 == -1) goto LAB_147a50752;
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = iVar6 + 1;
      iVar2 = *(int *)(param_2 + 8) + -1;
      if (*(int *)(param_2 + 8) == 0) {
        iVar2 = 0;
      }
    } while (iVar6 < iVar2);
    param_1 = local_80;
    iVar6 = (int)uStack_60;
    uVar3 = uStack_60._4_4_;
  }
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar6 + 1U);
  if (uVar3 < iVar6 + 1U) {
    FUN_144a2dbb8(&local_68,iVar6);
  }
  local_68[iVar6] = 0;
  puVar5 = local_68;
  if ((int)uStack_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar5,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a50848 FUN_147a50848 body=231 status=ok
// SIG undefined FUN_147a50848(void)

void FUN_147a50848(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a50930(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a50930 FUN_147a50930 body=160 status=ok
// SIG undefined FUN_147a50930(void)

undefined8 FUN_147a50930(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  if (((param_1 != (longlong *)0x0) && (param_1[5] != 0)) &&
     (plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c0))(),
     (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    plVar4 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)plVar2[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*plVar2 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_2) {
          return CONCAT71((int7)((ulonglong)*plVar2 >> 8),plVar4 != (longlong *)0x0);
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a509d0 FUN_147a509d0 body=581 status=ok
// SIG undefined FUN_147a509d0(void)

void FUN_147a509d0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  longlong *local_60;
  longlong local_58 [3];
  undefined4 local_3c;
  undefined1 local_35;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  puVar2 = &local_35;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_58;
  local_68 = puVar1;
  FUN_147a50c16(local_28,local_30,local_34,puVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a50c16 FUN_147a50c16 body=152 status=ok
// SIG undefined FUN_147a50c16(void)

void FUN_147a50c16(longlong param_1,undefined8 param_2,undefined4 param_3,byte *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  local_50 = param_1;
  local_48 = param_2;
  bVar1 = FUN_1434a782a(&local_50,param_3,param_5,param_6);
  *param_4 = bVar1 ^ 1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a50cb0 FUN_147a50cb0 body=331 status=ok
// SIG undefined FUN_147a50cb0(void)

void FUN_147a50cb0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = local_30;
  if (local_30 == 0 || local_28 == 0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_147a516fe(&local_48,local_28,&local_20);
  }
  FUN_1410e5bda(param_3,&local_48);
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a50dfc FUN_147a50dfc body=259 status=ok
// SIG undefined FUN_147a50dfc(void)

void FUN_147a50dfc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a50f00(local_20,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a50f00 FUN_147a50f00 body=316 status=ok
// SIG undefined FUN_147a50f00(void)

/* WARNING: Removing unreachable block (ram,0x000147a5100f) */

void FUN_147a50f00(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1408be2c4(param_2,0);
  }
  if ((param_1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x28), lVar2 != 0)) {
    local_40 = *(longlong *)(lVar2 + 0x50);
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = lVar2;
    FUN_14688bc9a(&local_48);
    if (local_40 != 0) {
      do {
        FUN_140002850(local_40,&local_58);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(param_2,iVar1);
        }
        lVar2 = *param_2;
        lVar3 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar3) = 0;
        *(undefined8 *)(lVar2 + lVar3) = local_58;
        *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_50;
        *(undefined4 *)(lVar2 + 0xc + lVar3) = local_50._4_4_;
        local_50 = 0;
        local_58 = 0;
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_14688bc9a(&local_48);
      } while (local_40 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a51044 FUN_147a51044 body=335 status=ok
// SIG undefined FUN_147a51044(void)

void FUN_147a51044(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
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
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a51194(local_20,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a51194 FUN_147a51194 body=359 status=ok
// SIG undefined FUN_147a51194(void)

undefined8 FUN_147a51194(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (lVar4 = *(longlong *)(param_1 + 0x28), lVar4 != 0)) {
    local_40 = *(longlong *)(lVar4 + 0x50);
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = lVar4;
    FUN_14688bc9a(&local_48);
    if (local_40 != 0) {
LAB_147a5122a:
      FUN_140002850(local_40,&local_58);
      if (local_50 != (int)param_2[1]) {
        if ((int)param_2[1] + local_50 == 1) goto LAB_147a512d1;
        goto LAB_147a51297;
      }
      if (1 < local_50) {
        lVar4 = 0;
        do {
          uVar2 = *(ushort *)(local_58 + lVar4);
          uVar3 = (ulonglong)uVar2;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar2 == uVar5) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar5 | uVar2)) goto LAB_147a512ca;
            uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
            uVar6 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar6]) goto LAB_147a512ca;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      goto LAB_147a512d1;
    }
  }
LAB_147a511bc:
  uVar1 = 0;
LAB_147a511be:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
LAB_147a512ca:
  if (uVar2 == uVar5) {
LAB_147a512d1:
    if (local_40 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(local_40 + 0x20);
    }
    *param_3 = uVar1;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar1 = 1;
    goto LAB_147a511be;
  }
LAB_147a51297:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_40 = *(longlong *)(local_40 + 0x18);
  FUN_14688bc9a(&local_48);
  if (local_40 == 0) goto LAB_147a511bc;
  goto LAB_147a5122a;
}



// FUNCTION 147a512fc FUN_147a512fc body=248 status=ok
// SIG undefined FUN_147a512fc(void)

void FUN_147a512fc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  FUN_147a513f6(local_20,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a513f6 FUN_147a513f6 body=163 status=ok
// SIG undefined FUN_147a513f6(void)

void FUN_147a513f6(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  else {
    FUN_147a518a9(&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a514b0 FUN_147a514b0 body=248 status=ok
// SIG undefined FUN_147a514b0(void)

void FUN_147a514b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  FUN_147a515aa(local_20,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a515aa FUN_147a515aa body=154 status=ok
// SIG undefined FUN_147a515aa(void)

void FUN_147a515aa(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  else {
    FUN_147a49aec(param_1,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a51656 FUN_147a51656 body=164 status=ok
// SIG undefined FUN_147a51656(void)

void FUN_147a51656(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(local_20 + 0x28);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a516fe FUN_147a516fe body=426 status=ok
// SIG undefined FUN_147a516fe(void)

/* WARNING: Removing unreachable block (ram,0x000147a51858) */

longlong * FUN_147a516fe(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = local_68;
  if ((*param_3 != 0) && (lVar4 = FUN_147a49870(param_2,param_3), uVar2 = local_68, lVar4 != 0)) {
    local_80 = (longlong *)(**(code **)(*param_2 + 0x2c0))(param_2);
    local_50 = local_80 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)local_80[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_68 = local_48;
    uVar2 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar3 = local_68._4_4_;
      local_68 = uVar2;
      do {
        FUN_147a55288(&local_58,lVar4,*(undefined8 *)(*local_80 + 8 + (longlong)iVar3 * 0x18),0);
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(param_1,iVar3);
        }
        lVar1 = *param_1;
        lVar5 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar1 + lVar5) = 0;
        *(undefined8 *)(lVar1 + lVar5) = local_58;
        *(undefined4 *)(lVar1 + 8 + lVar5) = (undefined4)local_50;
        *(undefined4 *)(lVar1 + 0xc + lVar5) = local_50._4_4_;
        local_50 = (longlong *)0x0;
        local_58 = 0;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar3 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a518a9 FUN_147a518a9 body=202 status=ok
// SIG undefined FUN_147a518a9(void)

longlong * FUN_147a518a9(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(longlong *)(param_2 + 0x50);
  }
  local_30 = 0xffffffff;
  local_2c = 0x101;
  local_2a = 0;
  local_40 = param_2;
  FUN_14688bc9a(&local_40);
  if (local_38 != 0) {
    do {
      uVar2 = *(undefined8 *)(local_38 + 0x20);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      local_38 = *(longlong *)(local_38 + 0x18);
      FUN_14688bc9a(&local_40);
    } while (local_38 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a51974 FUN_147a51974 body=196 status=ok
// SIG undefined FUN_147a51974(void)

undefined8 * FUN_147a51974(undefined8 *param_1,longlong param_2)

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
  local_30 = *(int *)(param_2 + 0x90);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_2 + 0x88);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
    if (1 < local_30) {
      *param_1 = local_38;
      *(int *)(param_1 + 1) = local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
      goto LAB_147a51a15;
    }
  }
  FUN_140056680(param_1,L"Name");
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_147a51a15:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a51a3a FUN_147a51a3a body=15 status=ok
// SIG undefined FUN_147a51a3a(void)

undefined8 *
FUN_147a51a3a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 147a51a4a FUN_147a51a4a body=1 status=ok
// SIG undefined FUN_147a51a4a(void)

void FUN_147a51a4a(void)

{
  return;
}



// FUNCTION 147a51a4c FUN_147a51a4c body=911 status=ok
// SIG undefined FUN_147a51a4c(void)

/* WARNING: Removing unreachable block (ram,0x000147a51da0) */
/* WARNING: Removing unreachable block (ram,0x000147a51ae4) */
/* WARNING: Removing unreachable block (ram,0x000147a51c51) */

ulonglong FUN_147a51a4c(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1[1] + 8) < 2) {
    plVar5 = (longlong *)param_1[2];
    pwVar6 = L"Input data is empty.";
  }
  else {
    if (*(longlong *)(*param_1 + 0x28) != 0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_14047afda(&local_68);
      bVar4 = FUN_147a4e706(local_68,&local_58,0);
      bVar4 = (int)uStack_50 != 0 & bVar4;
      uVar10 = CONCAT71((int7)((ulonglong)&local_58 >> 8),bVar4);
      if (bVar4 == 0) {
        plVar5 = (longlong *)param_1[2];
        if (*(int *)(local_68 + 0x40) == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        else {
          puVar11 = *(undefined2 **)(local_68 + 0x38);
        }
        FUN_140002266(&local_78,L"Failed to parse the JSON data. Error: %s",puVar11);
        iVar2 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
          FUN_1447a1bd6(plVar5,iVar2);
        }
        lVar8 = *plVar5;
        lVar9 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar8 + lVar9) = 0;
        *(undefined8 *)(lVar8 + lVar9) = local_78;
        local_78 = 0;
        *(undefined4 *)(lVar8 + 8 + lVar9) = (undefined4)local_70;
        *(undefined4 *)(lVar8 + 0xc + lVar9) = local_70._4_4_;
        local_70 = 0;
      }
      plVar5 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (bVar4 == 0) {
        uVar7 = uStack_50 & 0xffffffff;
      }
      else {
        (**(code **)(*(longlong *)*param_1 + 0x2d0))();
        uVar7 = uStack_50 & 0xffffffff;
        if (0 < (int)uStack_50) {
          lVar8 = 0;
          uVar13 = 0;
          do {
            plVar5 = (longlong *)(**(code **)**(undefined8 **)(local_58 + lVar8))();
            lVar9 = *plVar5;
            plVar5 = (longlong *)plVar5[1];
            if (plVar5 == (longlong *)0x0) {
              if (lVar9 == 0) goto LAB_147a51be3;
              local_60 = (longlong *)0x0;
              local_68 = lVar9;
              FUN_147a51ddc(param_1,&local_68,uVar13 & 0xffffffff);
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              if (lVar9 == 0) {
LAB_147a51be3:
                plVar3 = (longlong *)param_1[2];
                FUN_140002266(&local_68,L"Row \'%d\' is not a valid JSON object.",
                              uVar13 & 0xffffffff);
                iVar2 = (int)plVar3[1];
                *(uint *)(plVar3 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
                  FUN_1447a1bd6(plVar3,iVar2);
                }
                lVar9 = *plVar3;
                lVar12 = (longlong)iVar2 * 0x10;
                *(undefined8 *)(lVar9 + lVar12) = 0;
                *(longlong *)(lVar9 + lVar12) = local_68;
                local_68 = 0;
                *(undefined4 *)(lVar9 + 8 + lVar12) = (undefined4)local_60;
                *(undefined4 *)(lVar9 + 0xc + lVar12) = local_60._4_4_;
                local_60 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
                local_68 = lVar9;
                local_60 = plVar5;
                FUN_147a51ddc(param_1,&local_68,uVar13 & 0xffffffff);
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar5 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
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
            }
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar5 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
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
            uVar13 = uVar13 + 1;
            uVar7 = (ulonglong)(int)uStack_50;
            lVar8 = lVar8 + 0x10;
          } while ((longlong)uVar13 < (longlong)uVar7);
        }
      }
      FUN_14047c710(local_58,uVar7);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_147a51aeb;
    }
    plVar5 = (longlong *)param_1[2];
    pwVar6 = L"No RowStruct specified.";
  }
  FUN_140056680(&local_58,pwVar6);
  iVar2 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar5,iVar2);
  }
  lVar8 = *plVar5;
  lVar9 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar8 + lVar9) = 0;
  *(longlong *)(lVar8 + lVar9) = local_58;
  *(int *)(lVar8 + 8 + lVar9) = (int)uStack_50;
  *(undefined4 *)(lVar8 + 0xc + lVar9) = uStack_50._4_4_;
  uStack_50 = 0;
  local_58 = 0;
  uVar10 = 0;
LAB_147a51aeb:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a51ddc FUN_147a51ddc body=1914 status=ok
// SIG undefined FUN_147a51ddc(void)

/* WARNING: Removing unreachable block (ram,0x000147a52200) */
/* WARNING: Removing unreachable block (ram,0x000147a52489) */

void FUN_147a51ddc(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  byte bVar19;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined2 *local_110;
  undefined8 *local_108;
  int local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_147a51974(&local_78);
  local_90 = local_78;
  local_88 = local_70 + -1;
  if (local_70 == 0) {
    local_88 = 0;
  }
  FUN_14047df9c(*param_2,&local_d0);
  FUN_147a5067f(&local_80,&local_d0);
  if (local_d0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 == 0) {
    plVar7 = (longlong *)param_1[2];
    puVar8 = local_78;
    if (local_70 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_d0,L"Row \'%d\' missing key field \'%s\'.",param_3,puVar8);
    iVar16 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar16 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar16 + 1U) {
      FUN_1447a1bd6(plVar7,iVar16);
    }
    lVar10 = *plVar7;
    lVar18 = (longlong)iVar16 * 0x10;
    *(undefined8 *)(lVar10 + lVar18) = 0;
    *(longlong **)(lVar10 + lVar18) = local_d0;
    *(undefined4 *)(lVar10 + 8 + lVar18) = (undefined4)local_c8;
    *(uint *)(lVar10 + 0xc + lVar18) = local_c8._4_4_;
    puVar8 = (undefined2 *)0x0;
LAB_147a52496:
    local_c8 = (undefined2 *)0x0;
    local_d0 = (longlong *)0x0;
    if (puVar8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar5 = (**(code **)(*(longlong *)*param_1 + 0x2c8))();
    if ((cVar5 == '\0') &&
       (plVar7 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x2b8))(),
       (int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34))) {
      uVar2 = (uint)((ulonglong)local_80 >> 0x10);
      uVar12 = (uint)local_80 & 0xffff;
      plVar9 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar7[8];
      }
      iVar16 = *(int *)((longlong)plVar9 +
                       (ulonglong)
                       ((int)plVar7[9] - 1U &
                       (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar12) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4)) * 4);
      if (iVar16 != -1) {
        do {
          plVar9 = (longlong *)(*plVar7 + (longlong)iVar16 * 0x18);
          if (*plVar9 == local_80) {
            if ((plVar9 != (longlong *)0x0) && (plVar9 != (longlong *)&DAT_fffffffffffffff8)) {
              plVar7 = (longlong *)param_1[2];
              FUN_1400021e4(&local_80,&local_68);
              puVar8 = local_68;
              if ((int)local_60 == 0) {
                puVar8 = &DAT_149dfb77a;
              }
              FUN_140002266(&local_d0,L"Duplicate row name \'%s\'.",puVar8);
              iVar16 = (int)plVar7[1];
              *(uint *)(plVar7 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar7 + 0xc) < iVar16 + 1U) {
                FUN_1447a1bd6(plVar7,iVar16);
              }
              lVar10 = *plVar7;
              lVar18 = (longlong)iVar16 * 0x10;
              *(undefined8 *)(lVar10 + lVar18) = 0;
              *(longlong **)(lVar10 + lVar18) = local_d0;
              *(undefined4 *)(lVar10 + 8 + lVar18) = (undefined4)local_c8;
              *(uint *)(lVar10 + 0xc + lVar18) = local_c8._4_4_;
              puVar8 = local_68;
              goto LAB_147a52496;
            }
            break;
          }
          iVar16 = (int)plVar9[2];
        } while (iVar16 != -1);
      }
    }
    lVar10 = *param_1;
    if ((*(byte *)(lVar10 + 0x80) & 2) == 0) {
      local_a8 = 0;
      uStack_a0 = 0;
      plVar9 = (longlong *)*param_2;
      plVar7 = plVar9 + 2;
      local_68 = (undefined2 *)0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar16 = 0;
      local_118 = param_2;
      local_60 = plVar7;
      if ((int)plVar9[5] != 0) {
        FUN_1449c0562(&local_68);
        iVar16 = (int)plVar9[5];
      }
      local_b8 = local_58;
      uVar4 = local_b8;
      local_b0 = local_50;
      local_ac = local_4c;
      local_c8 = local_68;
      local_c0 = local_60;
      local_b8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar6 = local_b8._4_4_;
      local_120 = param_1;
      local_d0 = plVar9;
      if ((local_b8._4_4_ != iVar16) || (local_b8 = uVar4, local_60 != plVar7)) {
        do {
          local_b8 = uVar4;
          plVar1 = (longlong *)(*local_d0 + (longlong)iVar6 * 0x28);
          iVar6 = (int)plVar1[1];
          if (iVar6 == local_70) {
            if (1 < iVar6) {
              lVar10 = 0;
              while( true ) {
                uVar11 = *(ushort *)(*plVar1 + lVar10);
                uVar13 = (ulonglong)uVar11;
                uVar14 = *(ushort *)((longlong)local_78 + lVar10);
                if (uVar11 != uVar14) break;
                if (uVar11 == 0) goto LAB_147a522c8;
LAB_147a52285:
                lVar10 = lVar10 + 2;
              }
              if ((uVar14 | uVar11) < 0x80) {
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                uVar15 = (ulonglong)uVar14;
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_147a52285;
              }
              if (uVar11 != uVar14) goto LAB_147a51ffa;
            }
          }
          else if (local_70 + iVar6 != 1) {
LAB_147a51ffa:
            FUN_147a5067f(&local_d8,plVar1);
            lVar10 = FUN_144a8e29b(*(undefined8 *)(*param_1 + 0x28),local_d8,3);
            local_68 = *(undefined2 **)(*param_1 + 0x28);
            if (local_68 == (undefined2 *)0x0) {
              local_60 = (longlong *)0x0;
            }
            else {
              local_60 = *(longlong **)(local_68 + 0x28);
            }
            local_58 = CONCAT17(local_58._7_1_,0x101ffffffff);
            FUN_144a2daf0(&local_68);
            bVar19 = lVar10 == 0;
            if ((bool)bVar19 && local_60 != (longlong *)0x0) {
              do {
                FUN_147a52557(local_60,&local_a8);
                bVar19 = FUN_144a23846(&local_a8,plVar1);
                plVar3 = local_60;
                local_60 = (longlong *)local_60[3];
                FUN_144a2daf0(&local_68);
                bVar19 = bVar19 ^ 1 | plVar3 == (longlong *)0x0;
              } while ((bVar19 & local_60 != (longlong *)0x0) != 0);
            }
            param_1 = local_120;
            if (bVar19 != 0) {
              plVar1 = (longlong *)local_120[2];
              local_68 = *(undefined2 **)(*(longlong *)(*local_120 + 0x28) + 0x18);
              FUN_1400021e4(&local_68,&local_e8);
              local_110 = &DAT_149dfb77a;
              if (local_e0 != 0) {
                local_110 = local_e8;
              }
              FUN_1400021e4(&local_80,&local_f8);
              puVar8 = &DAT_149dfb77a;
              if (local_f0 != 0) {
                puVar8 = local_f8;
              }
              FUN_1400021e4(&local_d8,&local_108);
              puVar17 = (undefined8 *)&DAT_149dfb77a;
              if (local_100 != 0) {
                puVar17 = local_108;
              }
              local_128 = local_110;
              FUN_140002266(&local_68,
                            L"Property \'%s\' on row \'%s\' cannot be found in struct \'%s\'.",
                            puVar17,puVar8);
              iVar6 = (int)plVar1[1];
              *(uint *)(plVar1 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)plVar1 + 0xc) < iVar6 + 1U) {
                FUN_1447a1bd6(plVar1,iVar6);
              }
              param_1 = local_120;
              lVar10 = *plVar1;
              lVar18 = (longlong)iVar6 * 0x10;
              *(undefined8 *)(lVar10 + lVar18) = 0;
              *(undefined2 **)(lVar10 + lVar18) = local_68;
              *(int *)(lVar10 + 8 + lVar18) = (int)local_60;
              *(undefined4 *)(lVar10 + 0xc + lVar18) = local_60._4_4_;
              local_60 = (longlong *)0x0;
              local_68 = (undefined2 *)0x0;
              if (local_108 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_f8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_e8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
LAB_147a522c8:
          local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~local_c8._4_4_);
          FUN_1449c0562(&local_c8);
          iVar6 = local_b8._4_4_;
          uVar4 = local_b8;
        } while (local_d0 != plVar9 || (local_c0 != plVar7 || local_b8._4_4_ != iVar16));
      }
      FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = *param_1;
      param_2 = local_118;
    }
    iVar16 = *(int *)(*(longlong *)(lVar10 + 0x28) + 0x5c);
    puVar8 = (undefined2 *)
             FUN_14001cc68((longlong)
                           (int)(-iVar16 &
                                (*(int *)(*(longlong *)(lVar10 + 0x28) + 0x58) + iVar16) - 1U),0);
    (**(code **)(**(longlong **)(*param_1 + 0x28) + 0x2e8))
              (*(longlong **)(*param_1 + 0x28),puVar8,1);
    (**(code **)(*(longlong *)*param_1 + 0x2a8))((longlong *)*param_1,local_80,puVar8);
    local_128 = puVar8;
    FUN_147a5261e(param_1,param_2,*(undefined8 *)(*param_1 + 0x28),local_80);
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a52557 FUN_147a52557 body=197 status=ok
// SIG undefined FUN_147a52557(void)

void FUN_147a52557(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  if (param_1 == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
  }
  else {
    FUN_1400021e4(param_1 + 0x20,local_38);
    FUN_1405e9454(param_2,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140002850(param_1,local_38);
  }
  FUN_1405e9454(param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5261e FUN_147a5261e body=1888 status=ok
// SIG undefined FUN_147a5261e(void)

/* WARNING: Removing unreachable block (ram,0x000147a52c75) */
/* WARNING: Removing unreachable block (ram,0x000147a52a2a) */
/* WARNING: Removing unreachable block (ram,0x000147a52886) */

ulonglong FUN_147a5261e(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                       wchar_t *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 unaff_RSI;
  ulonglong uVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  longlong local_f0;
  undefined *local_e8;
  longlong *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined8 local_b0;
  int local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if (param_3 == 0) {
    local_78 = 0;
  }
  else {
    local_78 = *(longlong *)(param_3 + 0x50);
  }
  local_70 = 0xffffffff;
  local_6c = 0x101;
  local_6a = 0;
  local_d8 = param_1;
  local_d0 = param_2;
  local_80 = param_3;
  local_50 = param_4;
  FUN_144a2daf0(&local_80);
  lVar9 = local_78;
  do {
    local_78 = lVar9;
    if (lVar9 == 0) {
      uVar14 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_147a52c18:
      FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar14 & 0xffffffff;
    }
    FUN_140002850(lVar9,&local_90);
    FUN_147a52557(lVar9,&local_68);
    if ((longlong)(int)uStack_60 == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      puVar18 = local_68 + (longlong)(int)uStack_60 * 2;
      plVar15 = (longlong *)0x0;
      puVar13 = local_68;
      do {
        local_b0 = *puVar13;
        local_a8 = *(int *)(puVar13 + 1) + -1;
        if (*(int *)(puVar13 + 1) == 0) {
          local_a8 = 0;
        }
        FUN_1449ba96e(*local_d0,&local_a0,&local_b0);
        plVar5 = local_98;
        plVar3 = local_a0;
        local_a0 = (longlong *)0x0;
        plVar17 = plVar15;
        if (local_98 == plVar15) {
LAB_147a52769:
          plVar15 = local_98;
          plVar5 = plVar17;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_98 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
        else {
          local_98 = (longlong *)0x0;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar15 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            plVar17 = plVar5;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            goto LAB_147a52769;
          }
        }
        plVar15 = plVar5;
        if (plVar3 != (longlong *)0x0) {
          if (*(int *)(lVar9 + 0x30) == 1) {
            local_e8 = (undefined *)((longlong)*(int *)(lVar9 + 0x44) + (longlong)param_5);
            local_a0 = plVar3;
            local_98 = plVar15;
            if (plVar15 == (longlong *)0x0) {
              local_f8 = param_5;
              local_f0 = lVar9;
              FUN_147a52d80(local_d8,&local_a0,local_50,&local_90);
            }
            else {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              local_f8 = param_5;
              local_f0 = lVar9;
              FUN_147a52d80(local_d8,&local_a0,local_50,&local_90);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar15 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar15 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
            }
            goto LAB_147a52c0d;
          }
          pwVar10 = L"Unknown";
          if ((ulonglong)*(uint *)(plVar3 + 1) < 7) {
            pwVar10 = (wchar_t *)(&PTR_DAT_14a8bd148)[*(uint *)(plVar3 + 1)];
          }
          cVar6 = (**(code **)(*plVar3 + 0x70))(plVar3,&local_c8);
          if (cVar6 == '\0') {
            plVar3 = (longlong *)local_d8[2];
            FUN_1400021e4(&local_50,&local_c0);
            puVar8 = &DAT_149dfb77a;
            if (local_b8 != 0) {
              puVar8 = local_c0;
            }
            puVar16 = &DAT_149dfb77a;
            if (local_88 != 0) {
              puVar16 = local_90;
            }
            local_f8 = pwVar10;
            FUN_140002266(&local_a0,
                          L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Array, got %s."
                          ,puVar16,puVar8);
            lVar9 = plVar3[1];
            uVar7 = (int)lVar9 + 1;
            *(uint *)(plVar3 + 1) = uVar7;
            if (*(uint *)((longlong)plVar3 + 0xc) < uVar7) {
              FUN_1447a1bd6(plVar3);
            }
            lVar11 = *plVar3;
            lVar9 = (longlong)(int)lVar9 * 0x10;
            *(undefined8 *)(lVar11 + lVar9) = 0;
            *(longlong **)(lVar11 + lVar9) = local_a0;
            *(undefined4 *)(lVar11 + 8 + lVar9) = (undefined4)local_98;
            *(undefined4 *)(lVar11 + 0xc + lVar9) = local_98._4_4_;
            local_98 = (longlong *)0x0;
            local_a0 = (longlong *)0x0;
            if (local_c0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            bVar4 = true;
          }
          else {
            iVar12 = *(int *)(lVar9 + 0x30);
            lVar11 = local_c8[1];
            if (iVar12 != (int)lVar11) {
              plVar3 = (longlong *)local_d8[2];
              FUN_1400021e4(&local_50,&local_c0);
              puVar8 = &DAT_149dfb77a;
              if (local_b8 != 0) {
                puVar8 = local_c0;
              }
              puVar16 = &DAT_149dfb77a;
              if (local_88 != 0) {
                puVar16 = local_90;
              }
              local_f0 = CONCAT44(local_f0._4_4_,(int)lVar11);
              local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,iVar12);
              FUN_140002266(&local_a0,
                            L"Property \'%s\' on row \'%s\' is a static sized array with %d elements, but we have %d values to import"
                            ,puVar16,puVar8);
              lVar11 = plVar3[1];
              uVar7 = (int)lVar11 + 1;
              *(uint *)(plVar3 + 1) = uVar7;
              if (*(uint *)((longlong)plVar3 + 0xc) < uVar7) {
                FUN_1447a1bd6(plVar3);
              }
              lVar19 = *plVar3;
              lVar11 = (longlong)(int)lVar11 * 0x10;
              *(undefined8 *)(lVar19 + lVar11) = 0;
              *(longlong **)(lVar19 + lVar11) = local_a0;
              *(undefined4 *)(lVar19 + 8 + lVar11) = (undefined4)local_98;
              *(undefined4 *)(lVar19 + 0xc + lVar11) = local_98._4_4_;
              local_98 = (longlong *)0x0;
              local_a0 = (longlong *)0x0;
              if (local_c0 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              iVar12 = *(int *)(lVar9 + 0x30);
            }
            if (0 < iVar12) {
              lVar11 = 8;
              lVar19 = 0;
              do {
                if (lVar19 < (int)local_c8[1]) {
                  local_e8 = (undefined *)
                             ((longlong)param_5 +
                             *(int *)(lVar9 + 0x34) * lVar19 + (longlong)*(int *)(lVar9 + 0x44));
                  local_a0 = *(longlong **)(*local_c8 + -8 + lVar11);
                  plVar3 = *(longlong **)(*local_c8 + lVar11);
                  local_98 = plVar3;
                  if (plVar3 == (longlong *)0x0) {
                    local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,(int)lVar19);
                    local_f0 = lVar9;
                    FUN_147a53e8a(local_d8,&local_a0,local_50,&local_90);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                    UNLOCK();
                    local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,(int)lVar19);
                    local_f0 = lVar9;
                    FUN_147a53e8a(local_d8,&local_a0,local_50,&local_90);
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
                  }
                  iVar12 = *(int *)(lVar9 + 0x30);
                }
                lVar19 = lVar19 + 1;
                lVar11 = lVar11 + 0x10;
              } while (lVar19 < iVar12);
            }
LAB_147a52c0d:
            bVar4 = false;
          }
          goto LAB_147a5289a;
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar18);
    }
    bVar4 = false;
    if ((*(byte *)(*local_d8 + 0x80) & 4) == 0) {
      puVar8 = &DAT_149dfb77a;
      if (local_88 != 0) {
        puVar8 = local_90;
      }
      plVar3 = (longlong *)local_d8[2];
      FUN_1400021e4(&local_50,&local_c0);
      puVar16 = &DAT_149dfb77a;
      if (local_b8 != 0) {
        puVar16 = local_c0;
      }
      FUN_140002266(&local_a0,L"Row \'%s\' is missing an entry for \'%s\'.",puVar16,puVar8);
      lVar9 = plVar3[1];
      uVar7 = (int)lVar9 + 1;
      *(uint *)(plVar3 + 1) = uVar7;
      if (*(uint *)((longlong)plVar3 + 0xc) < uVar7) {
        FUN_1447a1bd6(plVar3);
      }
      lVar11 = *plVar3;
      lVar9 = (longlong)(int)lVar9 * 0x10;
      *(undefined8 *)(lVar11 + lVar9) = 0;
      *(longlong **)(lVar11 + lVar9) = local_a0;
      *(undefined4 *)(lVar11 + 8 + lVar9) = (undefined4)local_98;
      *(undefined4 *)(lVar11 + 0xc + lVar9) = local_98._4_4_;
      local_98 = (longlong *)0x0;
      local_a0 = (longlong *)0x0;
      if (local_c0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_147a5289a:
    unaff_RSI = 0;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar15 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar4) {
      uVar14 = 0;
      goto LAB_147a52c18;
    }
    local_78 = *(longlong *)(local_78 + 0x18);
    FUN_144a2daf0(&local_80);
    lVar9 = local_78;
  } while( true );
}



// FUNCTION 147a52d80 FUN_147a52d80 body=4360 status=ok
// SIG undefined FUN_147a52d80(void)

/* WARNING: Removing unreachable block (ram,0x000147a53131) */
/* WARNING: Removing unreachable block (ram,0x000147a5304b) */
/* WARNING: Removing unreachable block (ram,0x000147a534af) */
/* WARNING: Removing unreachable block (ram,0x000147a53d5a) */
/* WARNING: Type propagation algorithm not settling */

void FUN_147a52d80(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6,ulonglong *******param_7)

{
  ulonglong *******pppppppuVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong ******ppppppuVar10;
  ulonglong *******pppppppuVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  ulonglong *******pppppppuVar14;
  ulonglong *****pppppuVar15;
  longlong *plVar16;
  byte bVar17;
  undefined2 *puVar18;
  ulonglong *******pppppppuVar19;
  ulonglong ******ppppppuVar20;
  bool bVar21;
  undefined1 auStack_158 [32];
  ulonglong *******local_138;
  ulonglong *******local_130;
  ulonglong ******local_128;
  int local_114;
  ulonglong *******local_110;
  ulonglong *******local_108;
  ulonglong *******local_100;
  int local_f8;
  ulonglong *******local_f0;
  undefined8 local_e8;
  ulonglong *******local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  ulonglong *******local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  byte local_98;
  undefined8 *local_88;
  ulonglong *******local_80;
  int local_78;
  undefined8 local_70;
  ulonglong *******local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((ulonglong)*(uint *)(*param_2 + 8) < 7) {
    pwVar13 = (wchar_t *)(&PTR_DAT_14a8bd148)[*(uint *)(*param_2 + 8)];
  }
  else {
    pwVar13 = L"Unknown";
  }
  lVar8 = param_6[1];
  local_70 = param_3;
  lVar7 = FUN_144a7add4();
  if (*(ulonglong *)(lVar7 + 8) == 0) {
    bVar21 = lVar8 != 0;
    if (lVar8 != lVar7 && bVar21) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar21 = lVar8 != 0;
        if (lVar8 == lVar7) break;
      } while (lVar8 != 0);
    }
    if (!bVar21) goto LAB_147a52ecf;
LAB_147a52e09:
    local_c8 = (ulonglong *******)0x0;
    uStack_c0 = (ulonglong *******)0x0;
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x58))();
    if (cVar3 != '\0') {
LAB_147a52e29:
      FUN_1434b9eec(&local_f0,&local_c8,param_6,param_5);
      pppppppuVar14 = local_f0;
      pppppppuVar11 = local_68;
      pppppppuVar19 = local_60;
      if (1 < (int)local_e8) {
        pppppppuVar14 = (ulonglong *******)&DAT_149dfb77a;
        pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
        if ((int)uStack_c0 != 0) {
          pppppppuVar11 = local_c8;
        }
        plVar16 = *(longlong **)(param_1 + 0x10);
        FUN_1400021e4(&local_70,&local_80);
        pppppppuVar19 = (ulonglong *******)&DAT_149dfb77a;
        if (local_78 != 0) {
          pppppppuVar19 = local_80;
        }
        if (*(int *)(param_4 + 1) != 0) {
          pppppppuVar14 = (ulonglong *******)*param_4;
        }
        pwVar13 = L"Property \'%s\' on row \'%s\' has invalid enum value: %s.";
        local_138 = pppppppuVar11;
        goto LAB_147a530c7;
      }
      goto LAB_147a52e54;
    }
    local_80 = (ulonglong *******)0x0;
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    if (cVar3 == '\0') {
LAB_147a52fa5:
      plVar16 = *(longlong **)(param_1 + 0x10);
      FUN_1400021e4(&local_70,&local_68);
      puVar18 = &DAT_149dfb77a;
      pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
      if ((int)local_60 != 0) {
        pppppppuVar11 = local_68;
      }
      if (*(int *)(param_4 + 1) != 0) {
        puVar18 = (undefined2 *)*param_4;
      }
      pwVar12 = L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Integer, got %s.";
LAB_147a52fee:
      local_138 = (ulonglong *******)pwVar13;
      FUN_140002266(&local_f0,pwVar12,puVar18,pppppppuVar11);
      iVar5 = (int)plVar16[1];
      *(uint *)(plVar16 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar16 + 0xc) < iVar5 + 1U) {
        FUN_1447a1bd6(plVar16,iVar5);
      }
      lVar8 = *plVar16;
      lVar7 = (longlong)iVar5 * 0x10;
      *(undefined8 *)(lVar8 + lVar7) = 0;
      *(ulonglong ********)(lVar8 + lVar7) = local_f0;
      local_f0 = (ulonglong *******)0x0;
      *(int *)(lVar8 + 8 + lVar7) = (int)local_e8;
      *(uint *)(lVar8 + 0xc + lVar7) = local_e8._4_4_;
      local_e8 = (ulonglong *******)0x0;
      pppppppuVar14 = local_68;
      pppppppuVar11 = local_68;
      pppppppuVar19 = local_60;
      goto LAB_147a52e54;
    }
    param_6 = (longlong *)param_6[0xe];
    lVar8 = *param_6;
LAB_147a52f92:
    (**(code **)(lVar8 + 0x1f8))(param_6,param_7,local_80);
    pppppppuVar11 = local_c8;
  }
  else {
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) goto LAB_147a52e09;
LAB_147a52ecf:
    lVar8 = param_6[1];
    lVar7 = FUN_14475b26a();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar21 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar21) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar21 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (!bVar21) goto LAB_147a53182;
LAB_147a52eef:
      local_c8 = (ulonglong *******)0x0;
      uStack_c0 = (ulonglong *******)0x0;
      lVar8 = (**(code **)(*param_6 + 0x1f0))(param_6);
      if ((lVar8 == 0) ||
         (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x58))((longlong *)*param_2,&local_c8),
         cVar3 == '\0')) {
        cVar3 = (**(code **)(*param_6 + 0x1e8))(param_6);
        if (cVar3 == '\0') {
          local_80 = (ulonglong *******)0x0;
          cVar3 = (**(code **)(*(longlong *)*param_2 + 0x50))();
          if (cVar3 != '\0') {
            (**(code **)(*param_6 + 0x208))(param_6,param_7,local_80);
            pppppppuVar11 = local_c8;
            goto LAB_147a52e66;
          }
          plVar16 = *(longlong **)(param_1 + 0x10);
          FUN_1400021e4(&local_70,&local_68);
          puVar18 = &DAT_149dfb77a;
          pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
          if ((int)local_60 != 0) {
            pppppppuVar11 = local_68;
          }
          if (*(int *)(param_4 + 1) != 0) {
            puVar18 = (undefined2 *)*param_4;
          }
          pwVar12 = L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Double, got %s."
          ;
          goto LAB_147a52fee;
        }
        local_80 = (ulonglong *******)0x0;
        cVar3 = (**(code **)(*(longlong *)*param_2 + 0x28))();
        if (cVar3 == '\0') goto LAB_147a52fa5;
        lVar8 = *param_6;
        goto LAB_147a52f92;
      }
      goto LAB_147a52e29;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) goto LAB_147a52eef;
LAB_147a53182:
    lVar8 = param_6[1];
    lVar7 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar21 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar21) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar21 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (!bVar21) goto LAB_147a53255;
LAB_147a531a2:
      local_68 = (ulonglong *******)((ulonglong)local_68 & 0xffffffffffffff00);
      cVar3 = (**(code **)(*(longlong *)*param_2 + 0x60))();
      if (cVar3 != '\0') {
        if ((char)local_68 == '\x01') {
          bVar17 = *(byte *)((longlong)param_6 + 0x72);
        }
        else {
          bVar17 = 0;
        }
        *(byte *)((longlong)param_7 + (ulonglong)*(byte *)((longlong)param_6 + 0x71)) =
             *(byte *)((longlong)param_7 + (ulonglong)*(byte *)((longlong)param_6 + 0x71)) &
             ~*(byte *)((longlong)param_6 + 0x73) | bVar17;
        goto LAB_147a52e70;
      }
      plVar16 = *(longlong **)(param_1 + 0x10);
      FUN_1400021e4(&local_70,&local_f0);
      puVar18 = &DAT_149dfb77a;
      pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
      if ((int)local_e8 != 0) {
        pppppppuVar11 = local_f0;
      }
      if (*(int *)(param_4 + 1) != 0) {
        puVar18 = (undefined2 *)*param_4;
      }
      pwVar12 = L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Boolean, got %s.";
LAB_147a5343d:
      local_138 = (ulonglong *******)pwVar13;
      FUN_140002266(&local_c8,pwVar12,puVar18,pppppppuVar11);
      iVar5 = (int)plVar16[1];
      *(uint *)(plVar16 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar16 + 0xc) < iVar5 + 1U) {
        FUN_1447a1bd6(plVar16,iVar5);
      }
      lVar8 = *plVar16;
      lVar7 = (longlong)iVar5 * 0x10;
      *(undefined8 *)(lVar8 + lVar7) = 0;
      *(ulonglong ********)(lVar8 + lVar7) = local_c8;
      local_c8 = (ulonglong *******)0x0;
      *(int *)(lVar8 + 8 + lVar7) = (int)uStack_c0;
      *(undefined4 *)(lVar8 + 0xc + lVar7) = uStack_c0._4_4_;
      uStack_c0 = (ulonglong *******)0x0;
      pppppppuVar11 = local_f0;
      goto LAB_147a52e66;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) goto LAB_147a531a2;
LAB_147a53255:
    lVar8 = param_6[1];
    lVar7 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar21 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar21) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar21 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (!bVar21) goto LAB_147a5353d;
LAB_147a53275:
      cVar3 = (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,&local_68);
      if (cVar3 != '\0') {
        lVar8 = param_6[0xe];
        uVar4 = (**(code **)(*(longlong *)param_6[0xf] + 0x178))();
        local_c8 = (ulonglong *******)param_6[0xf];
        local_b8 = (ulonglong *******)CONCAT44(uVar4,*(undefined4 *)((longlong)local_c8 + 0x34));
        uStack_b0 = CONCAT31(uStack_b0._1_3_,(char)lVar8);
        uStack_c0 = param_7;
        FUN_14474d2ba(&local_c8,0);
        if ((longlong)*(int *)(local_68 + 1) != 0) {
          ppppppuVar10 = *local_68;
          ppppppuVar20 = ppppppuVar10 + (longlong)*(int *)(local_68 + 1) * 2;
          do {
            local_e8 = (ulonglong *******)CONCAT44(local_e8._4_4_,1);
            local_f0 = (ulonglong *******)&local_c8;
            iVar5 = FUN_144a482cc(&local_c8,&local_f0);
            FUN_144ae1314(&local_c8,iVar5,1);
            if (*(int *)(uStack_c0 + 1) == 0) {
              local_128 = (ulonglong ******)0x0;
            }
            else {
              if ((uStack_b0 & 1) == 0) {
                local_128 = *uStack_c0;
              }
              else {
                local_128 = *uStack_c0;
                if (((ulonglong)local_128 & 1) != 0) {
                  local_128 = (ulonglong ******)
                              ((longlong)uStack_c0 + ((longlong)local_128 >> 0x18));
                }
              }
              local_128 = (ulonglong ******)
                          ((longlong)(int)local_b8 * (longlong)iVar5 + (longlong)local_128);
            }
            local_130 = (ulonglong *******)param_6[0xf];
            local_f0 = (ulonglong *******)*ppppppuVar10;
            local_e8 = (ulonglong *******)ppppppuVar10[1];
            if (local_e8 != (ulonglong *******)0x0) {
              LOCK();
              *(int *)(local_e8 + 1) = *(int *)(local_e8 + 1) + 1;
              UNLOCK();
            }
            local_138 = (ulonglong *******)CONCAT44(local_138._4_4_,iVar5);
            FUN_147a53e8a(param_1,&local_f0,local_70,param_4);
            pppppppuVar11 = local_e8;
            if (local_e8 != (ulonglong *******)0x0) {
              LOCK();
              pppppppuVar19 = local_e8 + 1;
              *(int *)pppppppuVar19 = *(int *)pppppppuVar19 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar19 == 0) {
                (*(code *)**local_e8)(local_e8);
                LOCK();
                piVar2 = (int *)((longlong)pppppppuVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
                }
              }
            }
            ppppppuVar10 = ppppppuVar10 + 2;
          } while (ppppppuVar10 != ppppppuVar20);
        }
        goto LAB_147a52e70;
      }
LAB_147a53694:
      plVar16 = *(longlong **)(param_1 + 0x10);
      FUN_1400021e4(&local_70,&local_f0);
      puVar18 = &DAT_149dfb77a;
      pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
      if ((int)local_e8 != 0) {
        pppppppuVar11 = local_f0;
      }
      if (*(int *)(param_4 + 1) != 0) {
        puVar18 = (undefined2 *)*param_4;
      }
      pwVar12 = L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Array, got %s.";
      goto LAB_147a5343d;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) goto LAB_147a53275;
LAB_147a5353d:
    lVar8 = param_6[1];
    lVar7 = FUN_144a7e162();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar21 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar21) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar21 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (!bVar21) goto LAB_147a53720;
LAB_147a5355d:
      cVar3 = (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,&local_68);
      if (cVar3 != '\0') {
        local_c8 = (ulonglong *******)param_6[0xe];
        uStack_c0 = param_7;
        local_b8 = (ulonglong *******)param_6[0xf];
        uStack_b0 = *(uint *)(param_6 + 0x10);
        uStack_ac = *(undefined4 *)((longlong)param_6 + 0x84);
        local_a8 = (int)param_6[0x11];
        FUN_1402608fa(&local_c8,0);
        if ((longlong)*(int *)(local_68 + 1) != 0) {
          ppppppuVar10 = *local_68;
          ppppppuVar20 = ppppppuVar10 + (longlong)*(int *)(local_68 + 1) * 2;
          do {
            iVar5 = FUN_14026089e(&local_c8);
            if (*(int *)(uStack_c0 + 1) == *(int *)((longlong)uStack_c0 + 0x34)) {
              local_128 = (ulonglong ******)0x0;
            }
            else {
              local_128 = (ulonglong ******)
                          ((longlong)iVar5 * (longlong)local_a8 + (longlong)*uStack_c0);
            }
            local_f0 = (ulonglong *******)*ppppppuVar10;
            local_e8 = (ulonglong *******)ppppppuVar10[1];
            if (local_e8 != (ulonglong *******)0x0) {
              LOCK();
              *(int *)(local_e8 + 1) = *(int *)(local_e8 + 1) + 1;
              UNLOCK();
            }
            local_130 = local_c8;
            local_138 = (ulonglong *******)CONCAT44(local_138._4_4_,iVar5);
            FUN_147a53e8a(param_1,&local_f0,local_70,param_4);
            pppppppuVar11 = local_e8;
            if (local_e8 != (ulonglong *******)0x0) {
              LOCK();
              pppppppuVar19 = local_e8 + 1;
              *(int *)pppppppuVar19 = *(int *)pppppppuVar19 + -1;
              UNLOCK();
              if (*(int *)pppppppuVar19 == 0) {
                (*(code *)**local_e8)(local_e8);
                LOCK();
                piVar2 = (int *)((longlong)pppppppuVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
                }
              }
            }
            ppppppuVar10 = ppppppuVar10 + 2;
          } while (ppppppuVar10 != ppppppuVar20);
        }
        FUN_14171a698(&local_c8);
        goto LAB_147a52e70;
      }
      goto LAB_147a53694;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) goto LAB_147a5355d;
LAB_147a53720:
    lVar8 = param_6[1];
    lVar7 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar7 + 8) != 0) {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147a538a1;
LAB_147a53740:
      cVar3 = (**(code **)(*(longlong *)*param_2 + 0x80))((longlong *)*param_2,&local_88);
      if (cVar3 != '\0') {
        local_98 = *(byte *)(param_6 + 0x13);
        local_c8 = (ulonglong *******)param_6[0xe];
        uStack_c0 = (ulonglong *******)param_6[0xf];
        uStack_b0 = *(uint *)(param_6 + 0x10);
        uStack_ac = *(undefined4 *)((longlong)param_6 + 0x84);
        local_a8 = (int)param_6[0x11];
        uStack_a4 = *(undefined4 *)((longlong)param_6 + 0x8c);
        local_a0 = param_6[0x12];
        local_b8 = param_7;
        iVar5 = 0;
        FUN_140458a4e(&local_c8,0);
        local_f0 = (ulonglong *******)*local_88;
        pppppppuVar11 = local_f0 + 2;
        local_68 = (ulonglong *******)&DAT_100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = pppppppuVar11;
        if (*(int *)(local_f0 + 5) != 0) {
          FUN_1449c0562(&local_68);
          iVar5 = *(int *)(local_f0 + 5);
        }
        local_d8 = local_58;
        uVar9 = local_d8;
        local_d0 = local_50;
        local_cc = local_4c;
        local_e8 = local_68;
        local_e0 = local_60;
        local_d8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        if ((local_d8._4_4_ != iVar5) || (local_60 != pppppppuVar11)) {
          iVar6 = local_d8._4_4_;
          local_114 = iVar5;
          local_110 = local_f0;
          local_108 = pppppppuVar11;
          local_d8 = uVar9;
          do {
            ppppppuVar20 = *local_f0 + (longlong)iVar6 * 5;
            local_68 = (ulonglong *******)&local_c8;
            uVar4 = FUN_140007ec8(&local_c8,&local_68);
            local_68 = (ulonglong *******)&local_c8;
            local_60._0_4_ = uVar4;
            uVar9 = FUN_144aff4d2(&local_c8,&local_68);
            local_60 = (ulonglong *******)CONCAT44(local_60._4_4_,uVar4);
            local_68 = (ulonglong *******)&local_c8;
            ppppppuVar10 = (ulonglong ******)FUN_1446ec24c(&local_c8,&local_68);
            FUN_147a549f7(&local_80,ppppppuVar20,local_c8,uVar9);
            if (local_78 - 2U < 0x7fffffff) {
              local_68 = (ulonglong *******)&local_c8;
              local_60 = (ulonglong *******)CONCAT44(1,uVar4);
              if ((local_98 & 1) == 0) {
                FUN_1456ab8bc();
              }
              else {
                FUN_1456ab932(&local_68,local_b8);
              }
              pppppuVar15 = (ulonglong *****)&DAT_149dfb77a;
              pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
              if (local_78 != 0) {
                pppppppuVar11 = local_80;
              }
              plVar16 = *(longlong **)(param_1 + 0x10);
              FUN_1400021e4(&local_70,&local_100);
              local_138 = (ulonglong *******)&DAT_149dfb77a;
              if (local_f8 != 0) {
                local_138 = local_100;
              }
              puVar18 = &DAT_149dfb77a;
              if (*(int *)(param_4 + 1) != 0) {
                puVar18 = (undefined2 *)*param_4;
              }
              if (*(int *)(ppppppuVar20 + 1) != 0) {
                pppppuVar15 = *ppppppuVar20;
              }
              local_130 = pppppppuVar11;
              FUN_140002266(&local_68,
                            L"Problem assigning key \'%s\' to property \'%s\' on row \'%s\' : %s",
                            pppppuVar15,puVar18);
              iVar5 = (int)plVar16[1];
              *(uint *)(plVar16 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)plVar16 + 0xc) < iVar5 + 1U) {
                FUN_1447a1bd6(plVar16,iVar5);
              }
              lVar8 = *plVar16;
              lVar7 = (longlong)iVar5 * 0x10;
              *(undefined8 *)(lVar8 + lVar7) = 0;
              *(ulonglong ********)(lVar8 + lVar7) = local_68;
              *(int *)(lVar8 + 8 + lVar7) = (int)local_60;
              *(undefined4 *)(lVar8 + 0xc + lVar7) = local_60._4_4_;
              local_60 = (ulonglong *******)0x0;
              local_68 = (ulonglong *******)0x0;
              pppppppuVar11 = local_80;
              if (local_100 != (ulonglong *******)0x0) {
                FUN_1400020a8();
                pppppppuVar11 = local_80;
              }
              goto LAB_147a52e66;
            }
            local_68 = (ulonglong *******)ppppppuVar20[2];
            pppppppuVar11 = (ulonglong *******)ppppppuVar20[3];
            local_128 = ppppppuVar10;
            local_60 = pppppppuVar11;
            if (pppppppuVar11 == (ulonglong *******)0x0) {
              local_130 = uStack_c0;
              local_138 = (ulonglong *******)CONCAT44(local_138._4_4_,uVar4);
              cVar3 = FUN_147a53e8a(param_1,&local_68,local_70,param_4);
              iVar5 = local_114;
              pppppppuVar19 = local_110;
              pppppppuVar14 = local_108;
            }
            else {
              LOCK();
              *(int *)(pppppppuVar11 + 1) = *(int *)(pppppppuVar11 + 1) + 1;
              UNLOCK();
              local_130 = uStack_c0;
              local_138 = (ulonglong *******)CONCAT44(local_138._4_4_,uVar4);
              cVar3 = FUN_147a53e8a(param_1,&local_68,local_70,param_4);
              iVar5 = local_114;
              pppppppuVar19 = local_110;
              pppppppuVar14 = local_108;
              if (pppppppuVar11 != (ulonglong *******)0x0) {
                LOCK();
                pppppppuVar1 = pppppppuVar11 + 1;
                *(int *)pppppppuVar1 = *(int *)pppppppuVar1 + -1;
                UNLOCK();
                if (*(int *)pppppppuVar1 == 0) {
                  (*(code *)**pppppppuVar11)(pppppppuVar11);
                  LOCK();
                  piVar2 = (int *)((longlong)pppppppuVar11 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  iVar5 = local_114;
                  pppppppuVar19 = local_110;
                  pppppppuVar14 = local_108;
                  if (*piVar2 == 0) {
                    (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
                    iVar5 = local_114;
                    pppppppuVar19 = local_110;
                    pppppppuVar14 = local_108;
                  }
                }
              }
            }
            local_114 = iVar5;
            local_110 = pppppppuVar19;
            local_108 = pppppppuVar14;
            if (cVar3 == '\0') {
              local_68 = (ulonglong *******)&local_c8;
              local_60 = (ulonglong *******)CONCAT44(1,uVar4);
              if ((local_98 & 1) == 0) {
                FUN_1456ab8bc();
                pppppppuVar11 = local_80;
              }
              else {
                FUN_1456ab932(&local_68,local_b8);
                pppppppuVar11 = local_80;
              }
              goto LAB_147a52e66;
            }
            if (local_80 != (ulonglong *******)0x0) {
              FUN_1400020a8();
            }
            local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
            FUN_1449c0562(&local_e8);
            iVar6 = local_d8._4_4_;
            uVar9 = local_d8;
          } while (local_f0 != pppppppuVar19 ||
                   (local_e0 != pppppppuVar14 || local_d8._4_4_ != iVar5));
        }
        local_d8 = uVar9;
        FUN_140458c30(&local_c8);
        goto LAB_147a52e70;
      }
      plVar16 = *(longlong **)(param_1 + 0x10);
      FUN_1400021e4(&local_70,&local_f0);
      puVar18 = &DAT_149dfb77a;
      pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
      if ((int)local_e8 != 0) {
        pppppppuVar11 = local_f0;
      }
      if (*(int *)(param_4 + 1) != 0) {
        puVar18 = (undefined2 *)*param_4;
      }
      pwVar12 = L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Object, got %s.";
      goto LAB_147a5343d;
    }
    bVar21 = lVar8 != 0;
    if (lVar8 != lVar7 && bVar21) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar21 = lVar8 != 0;
        if (lVar8 == lVar7) break;
      } while (lVar8 != 0);
    }
    if (bVar21) goto LAB_147a53740;
LAB_147a538a1:
    lVar8 = param_6[1];
    lVar7 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar21 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar21) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar21 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (bVar21) goto LAB_147a53933;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_147a53933:
      local_100 = (ulonglong *******)0x0;
      cVar3 = (**(code **)(*(longlong *)*param_2 + 0x80))();
      if (cVar3 != '\0') {
        lVar8 = param_6[0xe];
        local_c8 = (ulonglong *******)*local_100;
        pppppppuVar11 = (ulonglong *******)local_100[1];
        uStack_c0 = pppppppuVar11;
        if (pppppppuVar11 == (ulonglong *******)0x0) {
          local_138 = param_7;
          FUN_147a5261e(param_1,&local_c8,lVar8,param_3);
        }
        else {
          LOCK();
          *(int *)(pppppppuVar11 + 1) = *(int *)(pppppppuVar11 + 1) + 1;
          UNLOCK();
          local_138 = param_7;
          FUN_147a5261e(param_1,&local_c8,lVar8,param_3);
          if (pppppppuVar11 != (ulonglong *******)0x0) {
            LOCK();
            pppppppuVar19 = pppppppuVar11 + 1;
            *(int *)pppppppuVar19 = *(int *)pppppppuVar19 + -1;
            UNLOCK();
            if (*(int *)pppppppuVar19 == 0) {
              (*(code *)**pppppppuVar11)(pppppppuVar11);
              LOCK();
              piVar2 = (int *)((longlong)pppppppuVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
              }
            }
          }
        }
        goto LAB_147a52e70;
      }
    }
    local_c8 = (ulonglong *******)0x0;
    uStack_c0 = (ulonglong *******)0x0;
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x58))();
    if (cVar3 == '\0') {
      plVar16 = *(longlong **)(param_1 + 0x10);
      FUN_1400021e4(&local_70,&local_68);
      puVar18 = &DAT_149dfb77a;
      pppppppuVar11 = (ulonglong *******)&DAT_149dfb77a;
      if ((int)local_60 != 0) {
        pppppppuVar11 = local_68;
      }
      if (*(int *)(param_4 + 1) != 0) {
        puVar18 = (undefined2 *)*param_4;
      }
      pwVar12 = L"Property \'%s\' on row \'%s\' is the incorrect type. Expected String, got %s.";
      goto LAB_147a52fee;
    }
    FUN_1434b9eec(&local_f0,&local_c8,param_6,param_5);
    pppppppuVar14 = local_f0;
    pppppppuVar11 = local_68;
    pppppppuVar19 = local_60;
    if ((int)local_e8 + 0x7fffffffU < 0x80000001) goto LAB_147a52e54;
    plVar16 = *(longlong **)(param_1 + 0x10);
    pppppppuVar11 = local_f0;
    FUN_1400021e4(&local_70,&local_80);
    local_138 = (ulonglong *******)&DAT_149dfb77a;
    if (local_78 != 0) {
      local_138 = local_80;
    }
    pppppppuVar19 = (ulonglong *******)&DAT_149dfb77a;
    if (*(int *)(param_4 + 1) != 0) {
      pppppppuVar19 = (ulonglong *******)*param_4;
    }
    pppppppuVar14 = (ulonglong *******)&DAT_149dfb77a;
    if ((int)uStack_c0 != 0) {
      pppppppuVar14 = local_c8;
    }
    pwVar13 = L"Problem assigning string \'%s\' to property \'%s\' on row \'%s\' : %s";
    local_130 = pppppppuVar11;
LAB_147a530c7:
    FUN_140002266(&local_68,pwVar13,pppppppuVar14,pppppppuVar19);
    iVar5 = (int)plVar16[1];
    *(uint *)(plVar16 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)plVar16 + 0xc) < iVar5 + 1U) {
      FUN_1447a1bd6(plVar16,iVar5);
    }
    lVar8 = *plVar16;
    lVar7 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(ulonglong ********)(lVar8 + lVar7) = local_68;
    local_68 = (ulonglong *******)0x0;
    pppppppuVar11 = local_68;
    *(int *)(lVar8 + 8 + lVar7) = (int)local_60;
    *(undefined4 *)(lVar8 + 0xc + lVar7) = local_60._4_4_;
    local_60 = (ulonglong *******)0x0;
    pppppppuVar19 = local_60;
    local_60 = (ulonglong *******)0x0;
    local_68 = (ulonglong *******)0x0;
    pppppppuVar14 = local_f0;
    if (local_80 != (ulonglong *******)0x0) {
      FUN_1400020a8();
      pppppppuVar14 = local_f0;
      pppppppuVar11 = local_68;
      pppppppuVar19 = local_60;
    }
LAB_147a52e54:
    local_60 = pppppppuVar19;
    local_68 = pppppppuVar11;
    pppppppuVar11 = local_c8;
    if (pppppppuVar14 != (ulonglong *******)0x0) {
      FUN_1400020a8();
      pppppppuVar11 = local_c8;
    }
  }
LAB_147a52e66:
  if (pppppppuVar11 != (ulonglong *******)0x0) {
    FUN_1400020a8();
  }
LAB_147a52e70:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a53e8a FUN_147a53e8a body=2924 status=ok
// SIG undefined FUN_147a53e8a(void)

/* WARNING: Removing unreachable block (ram,0x000147a5445e) */
/* WARNING: Removing unreachable block (ram,0x000147a54588) */
/* WARNING: Removing unreachable block (ram,0x000147a54808) */
/* WARNING: Removing unreachable block (ram,0x000147a54725) */
/* WARNING: Removing unreachable block (ram,0x000147a540fc) */

ulonglong FUN_147a53e8a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                       undefined4 param_5,longlong *param_6,wchar_t *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  byte bVar14;
  undefined2 *puVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  undefined8 *local_a0;
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((ulonglong)*(uint *)(*param_2 + 8) < 7) {
    pwVar11 = (wchar_t *)(&PTR_DAT_14a8bd148)[*(uint *)(*param_2 + 8)];
  }
  else {
    pwVar11 = L"Unknown";
  }
  uVar13 = (undefined7)((ulonglong)pwVar11 >> 8);
  local_50 = param_3;
  if (param_6 == (longlong *)0x0) {
LAB_147a54398:
    local_68 = (wchar_t *)0x0;
    uStack_60 = (longlong *)0x0;
    cVar5 = (**(code **)(*(longlong *)*param_2 + 0x58))();
    if (cVar5 == '\0') {
      plVar10 = *(longlong **)(param_1 + 0x10);
      FUN_1400021e4(&local_50,&local_88);
      puVar15 = &DAT_149dfb77a;
      local_b8 = L"";
      if ((int)local_80 != 0) {
        local_b8 = local_88;
      }
      if (*(int *)(param_4 + 1) != 0) {
        puVar15 = (undefined2 *)*param_4;
      }
      local_b0 = pwVar11;
      FUN_140002266(&local_78,
                    L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected String, got %s."
                    ,param_5,puVar15);
      iVar3 = (int)plVar10[1];
      *(uint *)(plVar10 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(plVar10,iVar3);
      }
      lVar8 = *plVar10;
      lVar7 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar8 + lVar7) = 0;
      *(wchar_t **)(lVar8 + lVar7) = local_78;
      *(int *)(lVar8 + 8 + lVar7) = (int)local_70;
      *(undefined4 *)(lVar8 + 0xc + lVar7) = local_70._4_4_;
LAB_147a5444f:
      local_70 = 0;
      local_78 = (wchar_t *)0x0;
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar12 = 0;
    }
    else {
      FUN_147a549f7(&local_78,&local_68,param_6,param_7);
      pwVar9 = local_78;
      bVar16 = (int)local_70 + 0x7fffffffU < 0x80000001;
      uVar12 = CONCAT71(uVar13,bVar16);
      pwVar11 = local_88;
      uVar4 = local_80;
      if (!bVar16) {
        plVar10 = *(longlong **)(param_1 + 0x10);
        FUN_1400021e4(&local_50,&local_98);
        local_b0 = L"";
        if (local_90 != 0) {
          local_b0 = local_98;
        }
        local_b8 = L"";
        if (*(int *)(param_4 + 1) != 0) {
          local_b8 = (wchar_t *)*param_4;
        }
        pwVar11 = L"";
        if ((int)uStack_60 != 0) {
          pwVar11 = local_68;
        }
        local_a8 = pwVar9;
LAB_147a547b0:
        FUN_140002266(&local_88,
                      L"Problem assigning string \'%s\' to entry %d on property \'%s\' on row \'%s\' : %s"
                      ,pwVar11,param_5);
        iVar3 = (int)plVar10[1];
        *(uint *)(plVar10 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar10 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(plVar10,iVar3);
        }
        lVar8 = *plVar10;
        lVar7 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar8 + lVar7) = 0;
        *(wchar_t **)(lVar8 + lVar7) = local_88;
        local_88 = (wchar_t *)0x0;
        pwVar11 = local_88;
        *(int *)(lVar8 + 8 + lVar7) = (int)local_80;
        *(undefined4 *)(lVar8 + 0xc + lVar7) = local_80._4_4_;
        local_80 = 0;
        uVar4 = local_80;
        local_80 = 0;
        local_88 = (wchar_t *)0x0;
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
          pwVar11 = local_88;
          uVar4 = local_80;
        }
      }
LAB_147a54604:
      local_80 = uVar4;
      local_88 = pwVar11;
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar8 = param_6[1];
    lVar7 = FUN_144a7add4();
    if (*(ulonglong *)(lVar7 + 8) != 0) {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147a53fbe;
LAB_147a53f1f:
      local_68 = (wchar_t *)0x0;
      uStack_60 = (longlong *)0x0;
      cVar5 = (**(code **)(*(longlong *)*param_2 + 0x58))();
      if (cVar5 == '\0') {
        local_98 = (wchar_t *)0x0;
        cVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))();
        if (cVar5 == '\0') {
LAB_147a54053:
          plVar10 = *(longlong **)(param_1 + 0x10);
          FUN_1400021e4(&local_50,&local_88);
          puVar15 = &DAT_149dfb77a;
          local_b8 = L"";
          if ((int)local_80 != 0) {
            local_b8 = local_88;
          }
          if (*(int *)(param_4 + 1) != 0) {
            puVar15 = (undefined2 *)*param_4;
          }
          pwVar9 = 
          L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected Integer, got %s."
          ;
          goto LAB_147a5409c;
        }
        param_6 = (longlong *)param_6[0xe];
        lVar8 = *param_6;
LAB_147a53f6d:
        (**(code **)(lVar8 + 0x1f8))(param_6,param_7,local_98);
      }
      else {
LAB_147a54597:
        FUN_147a549f7(&local_78,&local_68,param_6,param_7);
        if (1 < (int)local_70) {
          puVar15 = &DAT_149dfb77a;
          pwVar11 = L"";
          if ((int)uStack_60 != 0) {
            pwVar11 = local_68;
          }
          plVar10 = *(longlong **)(param_1 + 0x10);
          FUN_1400021e4(&local_50,&local_98);
          local_b8 = L"";
          if (local_90 != 0) {
            local_b8 = local_98;
          }
          if (*(int *)(param_4 + 1) != 0) {
            puVar15 = (undefined2 *)*param_4;
          }
          local_b0 = pwVar11;
          FUN_140002266(&local_88,
                        L"Entry %d on property \'%s\' on row \'%s\' has invalid enum value: %s.",
                        param_5,puVar15);
          iVar3 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar3 + 1U) {
            FUN_1447a1bd6(plVar10,iVar3);
          }
          lVar8 = *plVar10;
          lVar7 = (longlong)iVar3 * 0x10;
          *(undefined8 *)(lVar8 + lVar7) = 0;
          *(wchar_t **)(lVar8 + lVar7) = local_88;
          *(int *)(lVar8 + 8 + lVar7) = (int)local_80;
          *(undefined4 *)(lVar8 + 0xc + lVar7) = local_80._4_4_;
          local_80 = 0;
          local_88 = (wchar_t *)0x0;
          pwVar11 = local_78;
          if (local_98 != (wchar_t *)0x0) {
            FUN_1400020a8();
            pwVar11 = local_78;
          }
          goto LAB_147a54106;
        }
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_147a53f76:
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
LAB_147a53f85:
      uVar12 = CONCAT71(uVar13,1);
      goto LAB_147a54121;
    }
    bVar16 = lVar8 != 0;
    if (lVar8 != lVar7 && bVar16) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar16 = lVar8 != 0;
        if (lVar8 == lVar7) break;
      } while (lVar8 != 0);
    }
    if (bVar16) goto LAB_147a53f1f;
LAB_147a53fbe:
    lVar8 = param_6[1];
    lVar7 = FUN_14475b26a();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar16 = lVar8 != 0;
      if (lVar8 != lVar7 && bVar16) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar16 = lVar8 != 0;
          if (lVar8 == lVar7) break;
        } while (lVar8 != 0);
      }
      if (bVar16) goto LAB_147a53fde;
LAB_147a54182:
      lVar8 = param_6[1];
      lVar7 = FUN_144a5ab96();
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar16 = lVar8 != 0;
        if (lVar8 != lVar7 && bVar16) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar16 = lVar8 != 0;
            if (lVar8 == lVar7) break;
          } while (lVar8 != 0);
        }
        if (bVar16) goto LAB_147a5419e;
      }
      else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_147a5419e:
        local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffffffffff00);
        cVar5 = (**(code **)(*(longlong *)*param_2 + 0x60))();
        if (cVar5 != '\0') {
          if ((char)local_88 == '\x01') {
            bVar14 = *(byte *)((longlong)param_6 + 0x72);
          }
          else {
            bVar14 = 0;
          }
          *(byte *)((longlong)param_7 + (ulonglong)*(byte *)((longlong)param_6 + 0x71)) =
               *(byte *)((longlong)param_7 + (ulonglong)*(byte *)((longlong)param_6 + 0x71)) &
               ~*(byte *)((longlong)param_6 + 0x73) | bVar14;
          goto LAB_147a53f85;
        }
        plVar10 = *(longlong **)(param_1 + 0x10);
        FUN_1400021e4(&local_50,&local_78);
        puVar15 = &DAT_149dfb77a;
        local_b8 = L"";
        if ((int)local_70 != 0) {
          local_b8 = local_78;
        }
        if (*(int *)(param_4 + 1) != 0) {
          puVar15 = (undefined2 *)*param_4;
        }
        local_b0 = pwVar11;
        FUN_140002266(&local_68,
                      L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected Boolean, got %s."
                      ,param_5,puVar15);
        iVar3 = (int)plVar10[1];
        *(uint *)(plVar10 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar10 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(plVar10,iVar3);
        }
        lVar8 = *plVar10;
        lVar7 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar8 + lVar7) = 0;
        *(wchar_t **)(lVar8 + lVar7) = local_68;
        local_68 = (wchar_t *)0x0;
        *(int *)(lVar8 + 8 + lVar7) = (int)uStack_60;
        *(undefined4 *)(lVar8 + 0xc + lVar7) = uStack_60._4_4_;
        uStack_60 = (longlong *)0x0;
        pwVar9 = local_78;
        goto LAB_147a54115;
      }
      lVar8 = param_6[1];
      lVar7 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar16 = lVar8 != 0;
        if (lVar8 != lVar7 && bVar16) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar16 = lVar8 != 0;
            if (lVar8 == lVar7) break;
          } while (lVar8 != 0);
        }
        if (!bVar16) goto LAB_147a5425d;
      }
      else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) {
LAB_147a5425d:
        lVar8 = param_6[1];
        lVar7 = FUN_144a7e162();
        if (*(ulonglong *)(lVar7 + 8) == 0) {
          bVar16 = lVar8 != 0;
          if (lVar8 != lVar7 && bVar16) {
            do {
              lVar8 = *(longlong *)(lVar8 + 0x30);
              bVar16 = lVar8 != 0;
              if (lVar8 == lVar7) break;
            } while (lVar8 != 0);
          }
          if (!bVar16) goto LAB_147a5427d;
        }
        else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) {
LAB_147a5427d:
          lVar8 = param_6[1];
          lVar7 = FUN_1446ebfd4();
          if (*(ulonglong *)(lVar7 + 8) == 0) {
            bVar16 = lVar8 != 0;
            if (lVar8 != lVar7 && bVar16) {
              do {
                lVar8 = *(longlong *)(lVar8 + 0x30);
                bVar16 = lVar8 != 0;
                if (lVar8 == lVar7) break;
              } while (lVar8 != 0);
            }
            if (!bVar16) goto LAB_147a5429d;
          }
          else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) {
LAB_147a5429d:
            lVar8 = param_6[1];
            lVar7 = FUN_1446dcc8c();
            if (*(ulonglong *)(lVar7 + 8) == 0) {
              bVar16 = lVar8 != 0;
              if (lVar8 != lVar7 && bVar16) {
                do {
                  lVar8 = *(longlong *)(lVar8 + 0x30);
                  bVar16 = lVar8 != 0;
                  if (lVar8 == lVar7) break;
                } while (lVar8 != 0);
              }
              bVar16 = !bVar16;
            }
            else {
              bVar16 = (*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0;
            }
            if (bVar16) goto LAB_147a54398;
            local_a0 = (undefined8 *)0x0;
            cVar5 = (**(code **)(*(longlong *)*param_2 + 0x80))();
            if (cVar5 != '\0') {
              lVar8 = param_6[0xe];
              local_68 = (wchar_t *)*local_a0;
              plVar10 = (longlong *)local_a0[1];
              uStack_60 = plVar10;
              if (plVar10 == (longlong *)0x0) {
                local_b8 = param_7;
                uVar6 = FUN_147a5261e(param_1,&local_68,lVar8,param_3);
                uVar12 = (ulonglong)uVar6;
              }
              else {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
                local_b8 = param_7;
                uVar6 = FUN_147a5261e(param_1,&local_68,lVar8,param_3);
                uVar12 = (ulonglong)uVar6;
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
              goto LAB_147a54121;
            }
            local_68 = (wchar_t *)0x0;
            uStack_60 = (longlong *)0x0;
            cVar5 = (**(code **)(*(longlong *)*param_2 + 0x58))();
            if (cVar5 != '\0') {
              FUN_147a549f7(&local_78,&local_68,param_6,param_7);
              bVar16 = (int)local_70 + 0x7fffffffU < 0x80000001;
              uVar12 = CONCAT71(uVar13,bVar16);
              pwVar11 = local_88;
              uVar4 = local_80;
              if (!bVar16) {
                plVar10 = *(longlong **)(param_1 + 0x10);
                pwVar9 = local_78;
                FUN_1400021e4(&local_50,&local_98);
                local_b0 = L"";
                if (local_90 != 0) {
                  local_b0 = local_98;
                }
                local_b8 = L"";
                if (*(int *)(param_4 + 1) != 0) {
                  local_b8 = (wchar_t *)*param_4;
                }
                pwVar11 = L"";
                local_a8 = pwVar9;
                if ((int)uStack_60 != 0) {
                  pwVar11 = local_68;
                }
                goto LAB_147a547b0;
              }
              goto LAB_147a54604;
            }
            plVar10 = *(longlong **)(param_1 + 0x10);
            FUN_1400021e4(&local_50,&local_88);
            puVar15 = &DAT_149dfb77a;
            pwVar9 = L"";
            if ((int)local_80 != 0) {
              pwVar9 = local_88;
            }
            if (*(int *)(param_4 + 1) != 0) {
              puVar15 = (undefined2 *)*param_4;
            }
            local_b8 = pwVar11;
            FUN_140002266(&local_78,
                          L"Property \'%s\' on row \'%s\' is the incorrect type. Expected String, got %s."
                          ,puVar15,pwVar9);
            iVar3 = (int)plVar10[1];
            *(uint *)(plVar10 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)plVar10 + 0xc) < iVar3 + 1U) {
              FUN_1447a1bd6(plVar10,iVar3);
            }
            lVar8 = *plVar10;
            lVar7 = (longlong)iVar3 * 0x10;
            *(undefined8 *)(lVar8 + lVar7) = 0;
            *(wchar_t **)(lVar8 + lVar7) = local_78;
            *(int *)(lVar8 + 8 + lVar7) = (int)local_70;
            *(undefined4 *)(lVar8 + 0xc + lVar7) = local_70._4_4_;
            goto LAB_147a5444f;
          }
        }
      }
    }
    else {
      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147a54182;
LAB_147a53fde:
      local_68 = (wchar_t *)0x0;
      uStack_60 = (longlong *)0x0;
      lVar8 = (**(code **)(*param_6 + 0x1f0))(param_6);
      if ((lVar8 != 0) &&
         (cVar5 = (**(code **)(*(longlong *)*param_2 + 0x58))((longlong *)*param_2,&local_68),
         cVar5 != '\0')) goto LAB_147a54597;
      cVar5 = (**(code **)(*param_6 + 0x1e8))(param_6);
      if (cVar5 != '\0') {
        local_98 = (wchar_t *)0x0;
        cVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))();
        if (cVar5 != '\0') {
          lVar8 = *param_6;
          goto LAB_147a53f6d;
        }
        goto LAB_147a54053;
      }
      local_98 = (wchar_t *)0x0;
      cVar5 = (**(code **)(*(longlong *)*param_2 + 0x50))();
      if (cVar5 != '\0') {
        (**(code **)(*param_6 + 0x208))(param_6,param_7,local_98);
        goto LAB_147a53f76;
      }
      plVar10 = *(longlong **)(param_1 + 0x10);
      FUN_1400021e4(&local_50,&local_88);
      puVar15 = &DAT_149dfb77a;
      local_b8 = L"";
      if ((int)local_80 != 0) {
        local_b8 = local_88;
      }
      if (*(int *)(param_4 + 1) != 0) {
        puVar15 = (undefined2 *)*param_4;
      }
      pwVar9 = 
      L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected Double, got %s.";
LAB_147a5409c:
      local_b0 = pwVar11;
      FUN_140002266(&local_78,pwVar9,param_5,puVar15);
      iVar3 = (int)plVar10[1];
      *(uint *)(plVar10 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(plVar10,iVar3);
      }
      lVar8 = *plVar10;
      lVar7 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar8 + lVar7) = 0;
      *(wchar_t **)(lVar8 + lVar7) = local_78;
      *(int *)(lVar8 + 8 + lVar7) = (int)local_70;
      *(undefined4 *)(lVar8 + 0xc + lVar7) = local_70._4_4_;
      local_70 = 0;
      local_78 = (wchar_t *)0x0;
      pwVar11 = local_88;
LAB_147a54106:
      pwVar9 = local_68;
      if (pwVar11 != (wchar_t *)0x0) {
        FUN_1400020a8();
        pwVar9 = local_68;
      }
LAB_147a54115:
      if (pwVar9 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar12 = 0;
  }
LAB_147a54121:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 147a549f7 FUN_147a549f7 body=251 status=ok
// SIG undefined FUN_147a549f7(void)

undefined8 *
FUN_147a549f7(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  void *_Src;
  char cVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined **local_50;
  undefined2 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  local_48 = 0;
  local_50 = &PTR_FUN_149e98010;
  if (param_3 != 0) {
    cVar1 = FUN_147a54b5d(param_3);
    if (cVar1 != '\0') {
      local_58 = &local_50;
      FUN_1434ba13b(param_2,param_3,param_4,0x40);
    }
  }
  _Src = local_40;
  *param_1 = 0;
  *(int *)(param_1 + 1) = local_38;
  if ((longlong)local_38 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,local_38,0);
    memcpy((void *)*param_1,_Src,(longlong)local_38 * 2);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a54af3 FUN_147a54af3 body=106 status=ok
// SIG undefined FUN_147a54af3(void)

undefined8 * FUN_147a54af3(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1467cf004(param_2);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_2);
  }
  *param_1 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 147a54b5d FUN_147a54b5d body=1639 status=ok
// SIG undefined FUN_147a54b5d(void)

bool FUN_147a54b5d(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    lVar1 = FUN_144a7452c();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_14475b26a();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a49fc8();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a64e42();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a63fc8();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a49f24();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a5ab96();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_1446f4b16();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_1446dcc8c();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_14475a8dc();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a4a07e();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_1446e6bbc();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a7e162();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_1446ebfd4();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_1446ef920();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_1446e6c6a();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_144a7add4();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return true;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return true;
    }
    lVar1 = FUN_140be4b84();
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) {
            return bVar3;
          }
        } while (lVar2 != 0);
      }
    }
    else {
      bVar3 = (*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0;
    }
  }
  return bVar3;
}



// FUNCTION 147a551c4 FUN_147a551c4 body=196 status=ok
// SIG undefined FUN_147a551c4(void)

void FUN_147a551c4(longlong param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_4 & 2) != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a4a07e();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (bVar5) goto LAB_147a5522a;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147a5522a:
      puVar3 = (undefined8 *)FUN_1447a1f4a(param_2);
      iVar1 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_5,*puVar3,iVar1);
      return;
    }
  }
  FUN_14280c87e(param_1,param_5,param_2,param_2,0,param_3,0);
  return;
}



// FUNCTION 147a55288 FUN_147a55288 body=217 status=ok
// SIG undefined FUN_147a55288(void)

undefined8 * FUN_147a55288(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    cVar1 = FUN_147a54b5d(param_2);
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 0x30) == 1) {
        FUN_147a551c4(param_2,param_3 + *(int *)(param_2 + 0x44),0x40,param_4,param_1);
      }
      else {
        FUN_140002184(param_1,0x28);
        if (0 < *(int *)(param_2 + 0x30)) {
          lVar3 = 0;
          do {
            FUN_147a551c4(param_2,*(int *)(param_2 + 0x34) * lVar3 +
                                  *(int *)(param_2 + 0x44) + param_3,0x41,param_4,param_1);
            lVar3 = lVar3 + 1;
            lVar2 = (longlong)*(int *)(param_2 + 0x30);
            if (lVar3 < lVar2) {
              FUN_140002184(param_1,0x2c);
              lVar2 = (longlong)*(int *)(param_2 + 0x30);
            }
          } while (lVar3 < lVar2);
        }
        FUN_140002184(param_1,0x29);
      }
    }
  }
  return param_1;
}



// FUNCTION 147a55362 FUN_147a55362 body=45 status=ok
// SIG undefined FUN_147a55362(void)

void FUN_147a55362(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0x968);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a55390 FUN_147a55390 body=162 status=ok
// SIG undefined FUN_147a55390(void)

void FUN_147a55390(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110 [256];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = *param_3;
  uStack_138 = param_3[1];
  local_130 = param_3[2];
  local_128 = *param_4;
  uStack_120 = param_4[1];
  local_118 = param_4[2];
  local_148 = param_2;
  memcpy(local_110,param_5,0x100);
  uVar1 = FUN_14477b072(param_1,DAT_14cad59b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_148);
  if ((local_10 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a55434 FUN_147a55434 body=168 status=ok
// SIG undefined FUN_147a55434(void)

void FUN_147a55434(longlong *param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x151) = local_1c;
  (**(code **)(*param_1 + 0xf30))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a55582 FUN_147a55582 body=3962 status=ok
// SIG undefined FUN_147a55582(void)

void FUN_147a55582(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  plVar5 = DAT_14c966ea8;
  uVar4 = DAT_14c966ea0;
  uVar3 = DAT_14c966e98;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14cad5a08 == '\0') {
    DAT_14cad5a08 = '\x01';
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_58,"DebugCamera_Select",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_58;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964de0;
    uVar4 = DAT_14c964dd8;
    uVar3 = DAT_14c964dd0;
    if (DAT_14c964de0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964de0 + 1) = (int)DAT_14c964de0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_60,"DebugCamera_Unselect",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_60;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965290;
    uVar4 = DAT_14c965288;
    uVar3 = DAT_14c965280;
    if (DAT_14c965290 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965290 + 1) = (int)DAT_14c965290[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_68,"DebugCamera_IncreaseSpeed",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_68;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964d08;
    uVar4 = DAT_14c964d00;
    uVar3 = DAT_14c964cf8;
    if (DAT_14c964d08 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964d08 + 1) = (int)DAT_14c964d08[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_70,"DebugCamera_IncreaseSpeed",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_70;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c9652a8;
    uVar4 = DAT_14c9652a0;
    uVar3 = DAT_14c965298;
    if (DAT_14c9652a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9652a8 + 1) = (int)DAT_14c9652a8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_78,"DebugCamera_DecreaseSpeed",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_78;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964d20;
    uVar4 = DAT_14c964d18;
    uVar3 = DAT_14c964d10;
    if (DAT_14c964d20 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964d20 + 1) = (int)DAT_14c964d20[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_80,"DebugCamera_DecreaseSpeed",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_80;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965518;
    uVar4 = DAT_14c965510;
    uVar3 = DAT_14c965508;
    if (DAT_14c965518 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965518 + 1) = (int)DAT_14c965518[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_88,"DebugCamera_IncreaseFOV",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_88;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965560;
    uVar4 = DAT_14c965558;
    uVar3 = DAT_14c965550;
    if (DAT_14c965560 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965560 + 1) = (int)DAT_14c965560[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_90,"DebugCamera_DecreaseFOV",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_90;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c966f50;
    uVar4 = DAT_14c966f48;
    uVar3 = DAT_14c966f40;
    if (DAT_14c966f50 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966f50 + 1) = (int)DAT_14c966f50[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_98,"DebugCamera_ToggleDisplay",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_98;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965008;
    uVar4 = DAT_14c965000;
    uVar3 = DAT_14c964ff8;
    if (DAT_14c965008 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965008 + 1) = (int)DAT_14c965008[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_a0,"DebugCamera_FreezeRendering",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_a0;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c9650e0;
    uVar4 = DAT_14c9650d8;
    uVar3 = DAT_14c9650d0;
    if (DAT_14c9650e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9650e0 + 1) = (int)DAT_14c9650e0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_a8,"DebugCamera_OrbitHitPoint",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_a8;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c9650e0;
    uVar4 = DAT_14c9650d8;
    uVar3 = DAT_14c9650d0;
    if (DAT_14c9650e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9650e0 + 1) = (int)DAT_14c9650e0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_b0,"DebugCamera_OrbitCenter",1);
    local_48 = (local_48 & 0xf0) + 1;
    local_50 = local_b0;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c966f20;
    uVar4 = DAT_14c966f18;
    uVar3 = DAT_14c966f10;
    if (DAT_14c966f20 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966f20 + 1) = (int)DAT_14c966f20[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_b8,"DebugCamera_FollowActor",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_b8;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965960;
    uVar4 = DAT_14c965958;
    uVar3 = DAT_14c965950;
    if (DAT_14c965960 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965960 + 1) = (int)DAT_14c965960[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_c0,"DebugCamera_Select",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_c0;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965930;
    uVar4 = DAT_14c965928;
    uVar3 = DAT_14c965920;
    if (DAT_14c965930 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965930 + 1) = (int)DAT_14c965930[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_c8,"DebugCamera_IncreaseSpeed",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_c8;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965918;
    uVar4 = DAT_14c965910;
    uVar3 = DAT_14c965908;
    if (DAT_14c965918 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965918 + 1) = (int)DAT_14c965918[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_d0,"DebugCamera_DecreaseSpeed",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_d0;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965978;
    uVar4 = DAT_14c965970;
    uVar3 = DAT_14c965968;
    if (DAT_14c965978 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965978 + 1) = (int)DAT_14c965978[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_d8,"DebugCamera_IncreaseFOV",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_d8;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965990;
    uVar4 = DAT_14c965988;
    uVar3 = DAT_14c965980;
    if (DAT_14c965990 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965990 + 1) = (int)DAT_14c965990[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_e0,"DebugCamera_DecreaseFOV",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_e0;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c9658e8;
    uVar4 = DAT_14c9658e0;
    uVar3 = DAT_14c9658d8;
    if (DAT_14c9658e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9658e8 + 1) = (int)DAT_14c9658e8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_e8,"DebugCamera_ToggleDisplay",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_e8;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965900;
    uVar4 = DAT_14c9658f8;
    uVar3 = DAT_14c9658f0;
    if (DAT_14c965900 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965900 + 1) = (int)DAT_14c965900[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_f0,"DebugCamera_FreezeRendering",1);
    local_48 = local_48 & 0xf0;
    local_50 = local_f0;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9437c(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a564fe FUN_147a564fe body=1124 status=ok
// SIG undefined FUN_147a564fe(void)

void FUN_147a564fe(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145af0eac();
  FUN_147a55582();
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_48,"DebugCamera_Select",1);
  local_58 = FUN_1434ba69a;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_48,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_60,"DebugCamera_Unselect",1);
  local_58 = (code *)&LAB_147a56a5e;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_60,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_68,"DebugCamera_IncreaseSpeed",1);
  local_58 = (code *)&LAB_147a56a6a;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_68,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_70,"DebugCamera_DecreaseSpeed",1);
  local_58 = (code *)&LAB_147a56a8c;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_70,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_78,"DebugCamera_IncreaseFOV",1);
  local_58 = FUN_147a56aba;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_78,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_80,"DebugCamera_IncreaseFOV",1);
  local_58 = FUN_147a56aba;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_80,2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_88,"DebugCamera_DecreaseFOV",1);
  local_58 = FUN_147a56afe;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_88,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_90,"DebugCamera_DecreaseFOV",1);
  local_58 = FUN_147a56afe;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_90,2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_98,"DebugCamera_ToggleDisplay",1);
  local_58 = (code *)&LAB_147a55520;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_98,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_a0,"DebugCamera_FreezeRendering",1);
  local_58 = (code *)&LAB_147a56b42;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_a0,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_a8,"DebugCamera_OrbitHitPoint",1);
  local_58 = (code *)&LAB_147a56b50;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_a8,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_b0,"DebugCamera_OrbitCenter",1);
  local_58 = (code *)&LAB_147a56b58;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_b0,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1446ddc76(&local_b8,"DebugCamera_FollowActor",1);
  local_58 = (code *)&LAB_147a56b60;
  local_50 = 0;
  local_c8 = &local_58;
  FUN_147a56964(uVar1,local_b8,0,param_1);
  local_58 = (code *)&LAB_147a56c76;
  local_50 = 0;
  FUN_147a56b80(*(undefined8 *)(param_1 + 0x188),0,param_1,&local_58);
  local_58 = (code *)&LAB_147a56c88;
  local_50 = 0;
  FUN_147a56b80(*(undefined8 *)(param_1 + 0x188),1,param_1,&local_58);
  local_58 = FUN_147a56c9e;
  local_50 = 0;
  FUN_147a56b80(*(undefined8 *)(param_1 + 0x188),2,param_1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a56964 FUN_147a56964 body=248 status=ok
// SIG undefined FUN_147a56964(void)

void FUN_147a56964(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = *(undefined4 *)(param_5 + 1);
  local_88 = *param_5;
  local_78 = 1;
  uStack_77 = 0;
  uStack_74 = (undefined4)param_2;
  uStack_70 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_6c = 0xffffffff;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_76 = param_3;
  FUN_147a6da90(&uStack_68,param_4);
  local_d0 = local_78;
  local_cf = CONCAT43(uStack_74,CONCAT12(uStack_75,CONCAT11(uStack_76,uStack_77)));
  uStack_c8 = (undefined1)uStack_70;
  uStack_c7 = (undefined7)(CONCAT44(uStack_6c,uStack_70) >> 8);
  uStack_c0 = uStack_68;
  local_b8 = uStack_60;
  uStack_b0 = local_58;
  uStack_68 = 0;
  uStack_60 = 0;
  local_a8 = (undefined4)uStack_50;
  uStack_a4 = uStack_50._4_4_;
  uStack_a0 = (undefined4)local_48;
  uStack_9c = local_48._4_4_;
  local_58 = 0;
  uStack_50 = 0;
  local_98 = uStack_40;
  local_48 = 0;
  uStack_40 = 0;
  local_90 = local_38;
  FUN_1479e08fa(param_1);
  FUN_14128edda(&uStack_68);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a56aba FUN_147a56aba body=68 status=ok
// SIG undefined FUN_147a56aba(void)

void FUN_147a56aba(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x6e8))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147a56af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x6f0))(plVar1,fVar2 + 1.0);
    return;
  }
  return;
}



// FUNCTION 147a56afe FUN_147a56afe body=68 status=ok
// SIG undefined FUN_147a56afe(void)

void FUN_147a56afe(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x6e8))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147a56b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x6f0))(plVar1,fVar2 + -1.0);
    return;
  }
  return;
}



// FUNCTION 147a56b80 FUN_147a56b80 body=245 status=ok
// SIG undefined FUN_147a56b80(void)

void FUN_147a56b80(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined4 *)(param_4 + 1);
  local_78 = *param_4;
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_67 = param_2;
  FUN_147a6df06(&local_60,param_3);
  iVar1 = *(int *)(param_1 + 0x128);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x128) = iVar1 + 1U;
  if (*(uint *)(param_1 + 300) < iVar1 + 1U) {
    FUN_147a6e446((longlong *)(param_1 + 0x120),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  *(undefined1 *)(lVar2 + lVar3 * 0x28) = local_68;
  *(undefined1 *)(lVar2 + 1 + lVar3 * 0x28) = local_67;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x28) = local_60;
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x28) = uStack_58;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x28) = local_50;
  *(undefined8 *)(lVar2 + 0x20 + lVar3 * 0x28) = uStack_48;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1479f6d2c(&local_60);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a56c9e FUN_147a56c9e body=157 status=ok
// SIG undefined FUN_147a56c9e(void)

void FUN_147a56c9e(longlong *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == 0) {
    dVar1 = (double)param_1[0x153];
    dVar2 = (double)param_1[0x154];
    if ((((dVar1 != 0.0) || (NAN(dVar1))) || (dVar2 != 0.0)) || (NAN(dVar2))) {
      dVar3 = param_3[1];
      (**(code **)(*param_1 + 0xc90))(param_1,(float)((*param_3 - dVar1) * 0.10000000149011612));
      (**(code **)(*param_1 + 0xc88))(param_1,(float)((dVar3 - dVar2) * 0.10000000149011612));
      dVar1 = param_3[1];
      param_1[0x153] = (longlong)*param_3;
      param_1[0x154] = (longlong)dVar1;
    }
  }
  return;
}



// FUNCTION 147a56d3c FUN_147a56d3c body=114 status=ok
// SIG undefined FUN_147a56d3c(void)

void FUN_147a56d3c(longlong param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14485cccc((longlong)param_2 + 0xb8);
  FUN_14485c47a(param_1 + 0x968,uVar1);
  *(undefined8 *)(param_1 + 0x970) = *(undefined8 *)((longlong)param_2 + 0xd8);
  memcpy((void *)(param_1 + 0x978),param_2,0x100);
  FUN_147a55390(param_1,uVar1,(longlong)param_2 + 0x28,(longlong)param_2 + 0x58,param_2);
  return;
}



// FUNCTION 147a56dae FUN_147a56dae body=671 status=ok
// SIG undefined FUN_147a56dae(void)

undefined8 FUN_147a56dae(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  wchar_t *_Dest;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  wchar_t *_Source;
  longlong lVar8;
  undefined1 auStack_b8 [39];
  char local_91;
  undefined8 local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  undefined **local_70;
  undefined2 local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    local_91 = param_4;
    local_90 = param_2;
    if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x40);
      if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
        FUN_1456cec3c(lVar8);
      }
    }
    FUN_140056680(&local_60,&DAT_149dfb77a);
    local_68 = 0;
    local_70 = &PTR_FUN_14a8bce60;
    iVar6 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar6 = 0;
    }
    lVar4 = (longlong)iVar6 * 2 + 2;
    local_50 = lVar8;
    _Dest = (wchar_t *)FUN_14001cc68(lVar4,0);
    uVar2 = FUN_14001cc68(lVar4,0);
    puVar5 = &DAT_149dfb77a;
    iVar7 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar7 = 0;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    if (iVar6 < iVar7) {
      iVar7 = iVar6;
    }
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    local_78 = _Dest;
    FUN_14006620a(&local_88,puVar5,iVar7);
    _Source = L"";
    if (local_80 != 0) {
      _Source = local_88;
    }
    wcscpy(_Dest,_Source);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    cVar1 = FUN_14121aa5c(&local_78,uVar2,iVar6 + 1,0);
    if (cVar1 != '\0') {
      do {
        lVar8 = *(longlong *)(param_1 + 0x430);
        uVar3 = FUN_1447210f0(param_1);
        cVar1 = (**(code **)(*(longlong *)(lVar8 + 0x28) + 8))(lVar8 + 0x28,uVar3,uVar2,&local_70);
        if (cVar1 == '\0') {
          lVar8 = *(longlong *)(param_1 + 0x430);
          lVar4 = *(longlong *)(param_1 + 0xa78);
          if (DAT_14c950c29 == '\x01') {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar4 = *(longlong *)(param_1 + 0xa78);
            }
          }
          *(longlong *)(lVar8 + 0x30) = lVar4;
          lVar8 = *(longlong *)(param_1 + 0x430);
          uVar3 = FUN_1447210f0(param_1);
          (**(code **)(*(longlong *)(lVar8 + 0x28) + 8))(lVar8 + 0x28,uVar3,uVar2,&local_70);
          lVar8 = *(longlong *)(param_1 + 0x430);
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar8 + 0x30) = param_1;
        }
        cVar1 = FUN_14121aa5c(&local_78,uVar2,iVar6 + 1,0);
      } while (cVar1 != '\0');
    }
    FUN_1400020a8(_Dest);
    FUN_1400020a8(uVar2);
    param_2 = local_90;
    cVar1 = local_91;
    if (local_91 == '\0') {
      puVar5 = local_60;
      if (local_58 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_140056680(local_90,puVar5);
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') goto LAB_147a57023;
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
LAB_147a57023:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a57068 FUN_147a57068 body=221 status=ok
// SIG undefined FUN_147a57068(void)

void FUN_147a57068(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_145bd0c76();
  if (param_1[0xf4] != 0) {
    FUN_1405e47c6(param_1[0xf4],0);
    *(byte *)(param_1[0xf4] + 0x3a) =
         *(byte *)(param_1[0xf4] + 0x3a) & 0xfe | *(byte *)(param_1 + 0xe0) >> 2 & 1;
    lVar1 = (**(code **)(*(longlong *)param_1[0xf4] + 0x638))();
    if (lVar1 != 0) {
      lVar2 = FUN_145c25d4c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        *(byte *)(lVar1 + 0x1f8) = *(byte *)(lVar1 + 0x1f8) | 1;
        *(byte *)(lVar1 + 0x4a) =
             *(byte *)(lVar1 + 0x4a) & 0xfe | *(byte *)(param_1 + 0xe0) >> 2 & 1;
        *(undefined4 *)((longlong)param_1 + 0xa8c) = *(undefined4 *)(lVar1 + 0x1e0);
        *(undefined4 *)(param_1 + 0x152) = *(undefined4 *)(lVar1 + 0x1e4);
        *(undefined4 *)((longlong)param_1 + 0xa94) = *(undefined4 *)(lVar1 + 0x1e8);
                    /* WARNING: Could not recover jumptable at 0x000147a5713e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xf30))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147a57150 FUN_147a57150 body=391 status=ok
// SIG undefined FUN_147a57150(void)

void FUN_147a57150(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined2 local_87;
  undefined1 local_85;
  undefined4 local_84;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_145ac420c();
  if (param_1[0x88] != 0) {
    FUN_140aeefbc(param_1[0x88],0,1);
  }
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_87 = 1;
  local_85 = 0;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  local_a8 = param_1;
  uStack_a0 = FUN_144a5270a(param_1);
  local_88 = 1;
  local_84 = 0x48;
  uVar1 = FUN_1447210f0(param_1);
  uVar2 = FUN_145b564d2();
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  lVar3 = FUN_141037e38(uVar1,uVar2,&local_118,&local_b8);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x88] = lVar3;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893054);
  if (local_78 != 0) {
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a572d8 FUN_147a572d8 body=1238 status=ok
// SIG undefined FUN_147a572d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a572d8(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined1 local_120;
  longlong local_118 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = param_2[0x86];
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = param_2[0x86];
    }
  }
  bVar6 = DAT_14c950c29;
  param_1[0x150] = lVar7;
  if ((param_2 != (longlong *)0x0) && ((bVar6 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x14f] = (longlong)param_2;
  (**(code **)(*param_2 + 0x718))(param_2,&local_b0,&local_c8);
  uVar9 = (**(code **)(*(longlong *)param_2[0x89] + 0x6e8))();
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893048);
  (**(code **)(*param_1 + 0x690))(param_1,&local_b0,&local_c8);
  plVar8 = (longlong *)param_1[0x89];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x6f0))(plVar8,uVar9);
    (**(code **)(*(longlong *)param_1[0x89] + 0x6a0))((longlong *)param_1[0x89],0);
  }
  lVar7 = param_1[300];
  if (lVar7 == 0) {
    lVar7 = FUN_147a577af(param_2[0x89]);
    if ((lVar7 == 0) || (DAT_14c950c29 == 0)) {
      param_1[300] = lVar7;
      if (lVar7 == 0) goto LAB_147a57683;
    }
    else {
      FUN_1456cec3c(lVar7);
      param_1[300] = lVar7;
    }
  }
  FUN_14045627c(lVar7,1,1);
  (**(code **)(*param_2 + 0x330))(param_2,0);
  (**(code **)(*(longlong *)param_2[0x89] + 0x330))((longlong *)param_2[0x89],0);
  *(int *)(param_1[300] + 0x628) = (int)uVar9;
  FUN_14057a3b2(param_1[300],1,1,0);
  lVar7 = param_1[300];
  local_d8 = local_a0;
  local_e8 = local_b0;
  uStack_e0 = uStack_a8;
  auVar10 = *(undefined1 (*) [16])(lVar7 + 0x1b0);
  dVar3 = auVar10._0_8_;
  dVar4 = auVar10._8_8_;
  dVar15 = *(double *)(lVar7 + 0x1c0);
  plVar8 = *(longlong **)(lVar7 + 0x230);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)FUN_14001cc68(0x40,0x10);
    lVar5 = DAT_14c8463d8;
    *plVar8 = DAT_14c8463d0;
    plVar8[1] = lVar5;
    lVar5 = DAT_14c8463e8;
    plVar8[2] = DAT_14c8463e0;
    plVar8[3] = lVar5;
    lVar5 = DAT_14c846500;
    plVar8[4] = DAT_14c8464f8;
    plVar8[5] = lVar5;
    plVar8[6] = DAT_14c846508;
    *(longlong **)(lVar7 + 0x230) = plVar8;
  }
  if (((((double)plVar8[4] != dVar3) || (NAN((double)plVar8[4]) || NAN(dVar3))) ||
      ((double)plVar8[5] != dVar4)) || (NAN((double)plVar8[5]) || NAN(dVar4))) {
LAB_147a574c4:
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar15;
    dVar1 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar10 = divpd(auVar10,_DAT_1499387d0);
    auVar13 = divpd(auVar18,_DAT_1499387d0);
    auVar10 = roundpd(auVar10,auVar10,3);
    auVar13 = roundpd(auVar13,auVar13,3);
    dVar3 = dVar3 - auVar10._0_8_ * dVar1;
    dVar4 = dVar4 - auVar10._8_8_ * dVar2;
    auVar19._0_8_ = dVar15 - auVar13._0_8_ * dVar1;
    auVar19._8_8_ = 0.0 - auVar13._8_8_ * dVar2;
    auVar17._0_8_ = dVar3 + dVar1;
    auVar17._8_8_ = dVar4 + dVar2;
    auVar16._0_8_ = dVar1 + auVar19._0_8_;
    auVar16._8_8_ = dVar2 + auVar19._8_8_;
    auVar13._8_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar13._0_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar10._8_4_ = SUB84(dVar4,0);
    auVar10._0_8_ = dVar3;
    auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar13 = blendvpd(auVar17,auVar10,auVar13);
    auVar11._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
    auVar11._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
    auVar10 = blendvpd(auVar16,auVar19,auVar11);
    auVar14._0_8_ = auVar13._0_8_ + -360.0;
    auVar14._8_8_ = auVar13._8_8_ + -360.0;
    auVar12._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
    auVar12._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
    auVar13 = blendvpd(auVar13,auVar14,auVar12);
    dVar15 = auVar10._0_8_;
    *(undefined1 (*) [16])(plVar8 + 4) = auVar13;
    plVar8[6] = ~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
                (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15);
    FUN_144a7484c(plVar8 + 4,&local_78);
    plVar8[2] = local_68;
    plVar8[3] = lStack_60;
    *plVar8 = (longlong)local_78;
    plVar8[1] = lStack_70;
  }
  else if (((double)plVar8[6] != dVar15) || (NAN((double)plVar8[6]) || NAN(dVar15)))
  goto LAB_147a574c4;
  local_78 = (longlong *)*plVar8;
  lStack_70 = plVar8[1];
  local_68 = plVar8[2];
  lStack_60 = plVar8[3];
  local_98 = local_e8;
  uStack_90 = uStack_e0;
  local_88 = local_d8;
  local_120 = 0;
  local_128 = 0;
  FUN_144927ad4(lVar7,&local_98,&local_78,0);
  local_f8 = local_b8;
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  local_128 = local_128 & 0xffffffffffffff00;
  FUN_14020f75c(param_1[300],&local_108,0,0);
  FUN_140b506a4(param_1[300]);
  FUN_140056680(&local_78,L"show camfrustums");
  (**(code **)(*param_1 + 0xd40))(param_1,local_118,&local_78,1);
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147a57683:
  uVar9 = FUN_1447210f0(param_1);
  FUN_145ac4650(uVar9,param_1);
  local_78 = param_2;
  uVar9 = FUN_14477b072(param_1,DAT_14cad59a8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar9,&local_78);
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a577af FUN_147a577af body=148 status=ok
// SIG undefined FUN_147a577af(void)

undefined8 FUN_147a577af(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459e95fa();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5784a FUN_147a5784a body=428 status=ok
// SIG undefined FUN_147a5784a(void)

void FUN_147a5784a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong *local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 299);
  if ((uVar2 & 2) != 0) {
    FUN_140056680(local_48,L"FreezeRendering");
    (**(code **)(*param_1 + 0xd40))(param_1,local_38,local_48,1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = *(uint *)(param_1 + 299) & 0xfffffffd;
  }
  *(uint *)(param_1 + 299) = uVar2 & 0xfffffffb;
  *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) & 0xfe;
  FUN_14045627c(param_1[300],0,1);
  FUN_140056680(local_48,L"show camfrustums");
  (**(code **)(*param_1 + 0xd40))(param_1,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401bf202(param_1[300]);
  (**(code **)(*param_2 + 0x330))(param_2,1);
  plVar1 = (longlong *)param_2[0x89];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x330))(plVar1,1);
  }
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893054);
  uVar3 = FUN_1447210f0(param_1);
  FUN_145a00b82(uVar3,param_1);
  local_48[0] = param_2;
  uVar3 = FUN_14477b072(param_1,DAT_14cad59c8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a579f8 FUN_147a579f8 body=136 status=ok
// SIG undefined FUN_147a579f8(void)

void FUN_147a579f8(longlong *param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_40,L"FreezeRendering");
  (**(code **)(*param_1 + 0xd40))(param_1,local_30,local_40,1);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) ^ 2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a57a94 FUN_147a57a94 body=90 status=ok
// SIG undefined FUN_147a57a94(void)

void FUN_147a57a94(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  if ((*(byte *)(param_1 + 0x958) & 4) != 0) {
    plVar4 = (longlong *)FUN_14364b714();
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x638))(plVar4);
      if (plVar4 != (longlong *)0x0) {
        plVar4[0x27] = DAT_14c8464f0;
        uVar3 = DAT_14c8464e8._4_4_;
        uVar2 = (undefined4)DAT_14c8464e8;
        uVar1 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(plVar4 + 0x25) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)((longlong)plVar4 + 300) = uVar1;
        *(undefined4 *)(plVar4 + 0x26) = uVar2;
        *(undefined4 *)((longlong)plVar4 + 0x134) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000147a57ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x4d0))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147a57b00 FUN_147a57b00 body=2178 status=ok
// SIG undefined FUN_147a57b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a57b00(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_100 [16];
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar5 = (longlong *)FUN_14364b714();
  if ((plVar5 == (longlong *)0x0) || ((*(uint *)(param_1 + 299) & 4) == 0)) goto LAB_147a58147;
  (**(code **)(*param_1 + 0x680))(param_1,&local_e8);
  FUN_147c454a0(plVar5,&local_128);
  if ((local_128 != 0.0) || (((NAN(local_128) || (dStack_120 != 0.0)) || (NAN(dStack_120))))) {
LAB_147a57d67:
    dVar7 = local_e8 * 0.01745329238474369;
    dVar18 = dStack_e0 * 0.01745329238474369;
    dVar21 = local_d8 * 0.01745329238474369;
    dVar16 = sin(dVar7);
    dVar22 = sin(dVar18);
    dVar8 = sin(dVar21);
    sin(0.0);
    dVar9 = cos(dVar7);
    dVar10 = cos(dVar18);
    dVar11 = cos(dVar21);
    cos(0.0);
    dVar18 = dVar16 * dVar8 * dVar10 - dVar22 * dVar11;
    dVar21 = dVar16 * dVar8 * dVar22 + dVar10 * dVar11;
    local_168._8_4_ = (int)extraout_XMM0_Qb;
    local_168._0_8_ = dVar8;
    local_168._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    lVar1 = plVar5[0x39];
    local_178 = DAT_14c8464f0;
    dVar20 = DAT_14c8464e0;
    dVar12 = DAT_14c8464e8;
    dVar7 = DAT_14c8464f0;
    if (lVar1 != 0) {
      dVar7 = *(double *)(lVar1 + 0x270);
      dVar20 = *(double *)(lVar1 + 0x260);
      dVar12 = *(double *)(lVar1 + 0x268);
    }
    local_188 = (double)param_1[0x157];
    local_180 = (double)param_1[0x155];
    local_190 = (double)param_1[0x156];
    dVar3 = (dVar7 - local_188) * dVar16 +
            (dVar12 - local_190) * dVar22 * dVar9 + (dVar20 - local_180) * dVar9 * dVar10 + 0.0;
    dVar7 = (dVar7 - local_188) * -dVar8 * dVar9 +
            (dVar12 - local_190) * dVar21 + (dVar20 - local_180) * dVar18 + 0.0;
    local_170 = dVar9;
    if (ABS(dVar7) <= 0.01) {
      if (dVar3 * 3.0 <= (double)(*(float *)(param_1 + 0x15b) + -30.0)) {
        fVar14 = (float)(dVar3 * -3.0 + (double)*(float *)(param_1 + 0x15b));
      }
      else {
        fVar14 = 30.0;
      }
      *(float *)(param_1 + 0x15b) = fVar14;
    }
    else {
      dVar7 = dVar7 + dVar7;
      local_f0 = ((double)param_1[0x15a] - local_188) -
                 (dVar16 * 0.0 + -dVar8 * dVar9 * dVar7 + dVar9 * dVar11 * 0.0 + DAT_14c8464f0 * 0.0
                 );
      puVar6 = local_100;
      local_100._8_8_ =
           ((double)param_1[0x159] - local_190) -
           (DAT_14c8464e8 * 0.0 +
           (dVar10 * dVar8 - dVar22 * dVar16 * dVar11) * 0.0 + dVar22 * dVar9 * 0.0 + dVar7 * dVar21
           );
      local_100._0_8_ =
           ((double)param_1[0x158] - local_180) -
           (DAT_14c8464e0 * 0.0 +
           -(dVar16 * dVar11 * dVar10 + dVar22 * dVar8) * 0.0 +
           dVar9 * dVar10 * 0.0 + dVar7 * dVar18);
LAB_147a58054:
      FUN_144a79a9c(puVar6,&local_128);
      local_d8 = local_118;
      local_e8 = local_128;
      dStack_e0 = dStack_120;
    }
  }
  else {
    if ((local_118 != 0.0) || (NAN(local_118))) goto LAB_147a57d67;
    cVar4 = FUN_144aa09e0(param_1 + 0xc2);
    if (cVar4 != '\0') goto LAB_147a58147;
    local_e8 = (double)param_1[0xc2] + local_e8;
    dStack_e0 = (double)param_1[0xc3] + dStack_e0;
    local_d8 = (double)param_1[0xc4] + local_d8;
    FUN_144a76660(&local_e8,&local_128);
    local_f0 = -local_118;
    local_100._8_4_ = SUB84(dStack_120,0);
    local_100._0_8_ = -local_128;
    local_100._12_4_ = (uint)((ulonglong)dStack_120 >> 0x20) ^ 0x80000000;
    FUN_14022d702(&local_128,&DAT_14c8462c0);
    uVar13 = SUB84(dStack_110,0);
    uVar15 = (undefined4)((ulonglong)dStack_110 >> 0x20);
    if (1.0 <= dStack_110) {
      uVar13 = 0;
      uVar15 = 0x3ff00000;
    }
    dVar7 = acos((double)(~-(ulonglong)(dStack_110 < -1.0) & CONCAT44(uVar15,uVar13) |
                         (ulonglong)((uint)(-(ulonglong)(dStack_110 < -1.0) >> 0x20) & 0xbff00000)
                         << 0x20));
    fVar14 = (float)(dVar7 + dVar7);
    if ((fVar14 < 0.17453294) || (2.9670599 < fVar14)) {
      dVar7 = local_128 * local_128 + local_118 * local_118;
      dVar18 = dStack_120 * dStack_120 + 0.0;
      auVar17._0_8_ = dVar7 + dVar18;
      auVar17._8_8_ = dVar7 + dVar18;
      auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar17._8_8_);
      auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar17._0_8_);
      auVar19 = sqrtpd(in_XMM4,auVar17);
      auVar19 = divpd(_DAT_149934d80,auVar19);
      if ((-(ulonglong)(1e-08 <= auVar17._0_8_) & 1) == 0) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = local_118 * auVar19._0_8_;
      }
      dVar18 = dStack_120 * auVar19._8_8_;
      auVar2._8_4_ = SUB84(dVar18,0);
      auVar2._0_8_ = local_128 * auVar19._0_8_;
      auVar2._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      auVar23 = blendvpd(ZEXT816(0x3ff0000000000000),auVar2,auVar23);
      if (2.9670599 <= fVar14) {
        fVar14 = 2.9670599;
      }
      if (fVar14 <= 0.17453294) {
        fVar14 = 0.17453294;
      }
      dVar18 = sin((double)fVar14 * 0.5);
      dVar12 = cos((double)fVar14 * 0.5);
      dVar22 = auVar23._0_8_ * dVar18;
      dVar21 = auVar23._8_8_ * dVar18;
      dVar7 = dVar7 * dVar18;
      dVar16 = dVar21 * DAT_14c8462d0 - DAT_14c8462c8 * dVar7;
      dVar16 = dVar16 + dVar16;
      dVar20 = dVar22 * DAT_14c8462c8 - DAT_14c8462c0 * dVar21;
      dVar20 = dVar20 + dVar20;
      dVar18 = dVar7 * DAT_14c8462c0 - DAT_14c8462d0 * dVar22;
      dVar18 = dVar18 + dVar18;
      local_f0 = (dVar22 * dVar18 - dVar16 * dVar21) + dVar12 * dVar20 + DAT_14c8462d0;
      local_100._8_8_ = (dVar7 * dVar16 - dVar20 * dVar22) + dVar12 * dVar18 + DAT_14c8462c8;
      local_100._0_8_ = (dVar21 * dVar20 - dVar18 * dVar7) + dVar12 * dVar16 + DAT_14c8462c0;
      local_130 = -local_f0;
      puVar6 = local_140;
      local_140._8_4_ = (int)local_100._8_8_;
      local_140._0_8_ = -(double)local_100._0_8_;
      local_140._12_4_ = (uint)((ulonglong)local_100._8_8_ >> 0x20) ^ 0x80000000;
      goto LAB_147a58054;
    }
  }
  FUN_144a76660(&local_e8,&local_128);
  dVar7 = (double)*(float *)(param_1 + 0x15b);
  param_1[0x155] = (longlong)((double)param_1[0x158] - dVar7 * local_128);
  param_1[0x156] = (longlong)((double)param_1[0x159] - dStack_120 * dVar7);
  param_1[0x157] = (longlong)((double)param_1[0x15a] - local_118 * dVar7);
  local_198 = 0;
  FUN_1413dd462(plVar5,param_1 + 0x155,0,0);
  (**(code **)(*param_1 + 0x688))(param_1,&local_e8,1);
  local_148 = local_d8;
  local_158 = local_e8;
  dStack_150 = dStack_e0;
  (**(code **)(*plVar5 + 0x730))(plVar5,&local_158,0);
LAB_147a58147:
  if ((local_d0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a58384 FUN_147a58384 body=753 status=ok
// SIG undefined FUN_147a58384(void)

undefined8 FUN_147a58384(longlong param_1,double *param_2)

{
  longlong *plVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [192];
  undefined1 *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar11 = FUN_144729dda(param_1 + 0x968);
  if (cVar11 != '\0') {
    if ((*(byte *)(param_1 + 0x958) & 8) == 0) {
      param_2[2] = *(double *)(param_1 + 0x998);
      dVar3 = *(double *)(param_1 + 0x990);
      *param_2 = *(double *)(param_1 + 0x988);
      param_2[1] = dVar3;
      uVar12 = 1;
      goto LAB_147a585fb;
    }
    lVar13 = FUN_14479d2ce(param_1 + 0x968);
    local_e0 = (undefined1 *)0x0;
    local_d8 = 0x1800000000;
    bVar2 = true;
    if (lVar13 != 0) {
      iVar15 = 0;
      FUN_1407fcdae(lVar13,local_1a0,0);
      if (0 < (int)local_d8) {
        lVar13 = 0;
        bVar10 = false;
        dVar5 = 0.0;
        dVar4 = 0.0;
        dVar3 = 0.0;
        dVar9 = 0.0;
        dVar6 = 0.0;
        dVar7 = 0.0;
        do {
          puVar14 = local_e0;
          if (local_e0 == (undefined1 *)0x0) {
            puVar14 = local_1a0;
          }
          plVar1 = *(longlong **)(puVar14 + lVar13 * 8);
          dVar17 = dVar5;
          dVar20 = dVar4;
          dVar21 = dVar3;
          dVar8 = dVar9;
          dVar19 = dVar6;
          dVar18 = dVar7;
          if (((*(byte *)((longlong)plVar1 + 0x9c) & 1) != 0) &&
             (cVar11 = (**(code **)(*plVar1 + 0x4e8))(plVar1), cVar11 != '\0')) {
            dVar16 = (double)plVar1[0x2e] + (double)plVar1[0x31];
            dVar18 = (double)plVar1[0x2d] + (double)plVar1[0x30];
            dVar19 = (double)plVar1[0x2c] + (double)plVar1[0x2f];
            dVar17 = (double)plVar1[0x2e] - (double)plVar1[0x31];
            dVar20 = (double)plVar1[0x2d] - (double)plVar1[0x30];
            dVar21 = (double)plVar1[0x2c] - (double)plVar1[0x2f];
            dVar8 = dVar16;
            if (bVar10) {
              if (dVar21 <= dVar3) {
                dVar3 = dVar21;
              }
              if (dVar20 <= dVar4) {
                dVar4 = dVar20;
              }
              if (dVar17 <= dVar5) {
                dVar5 = dVar17;
              }
              if (dVar6 <= dVar19) {
                dVar6 = dVar19;
              }
              if (dVar7 <= dVar18) {
                dVar7 = dVar18;
              }
              dVar8 = dVar9;
              dVar21 = dVar3;
              dVar20 = dVar4;
              dVar17 = dVar5;
              dVar19 = dVar6;
              dVar18 = dVar7;
              if (dVar9 <= dVar16) {
                dVar8 = dVar16;
              }
            }
            iVar15 = iVar15 + 1;
            bVar10 = true;
          }
          lVar13 = lVar13 + 1;
          dVar5 = dVar17;
          dVar4 = dVar20;
          dVar3 = dVar21;
          dVar9 = dVar8;
          dVar6 = dVar19;
          dVar7 = dVar18;
        } while (lVar13 < (int)local_d8);
        if (0 < iVar15) {
          *param_2 = (dVar21 + dVar19) * 0.5;
          param_2[1] = (dVar20 + dVar18) * 0.5;
          param_2[2] = (dVar17 + dVar8) * 0.5;
          bVar2 = false;
        }
      }
    }
    if (local_e0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar12 = 1;
    if (!bVar2) goto LAB_147a585fb;
  }
  uVar12 = 0;
LAB_147a585fb:
  if ((local_d0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 147a58676 FUN_147a58676 body=755 status=ok
// SIG undefined FUN_147a58676(void)

void FUN_147a58676(longlong *param_1,uint param_2)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  double *pdVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(uint *)(param_1 + 299) & 4) == 0) {
    plVar4 = (longlong *)FUN_14364b714(param_1);
    uVar6 = (*(uint *)(param_1 + 299) & 0xfffffff7) + (param_2 & 0xff) * 8;
    *(uint *)(param_1 + 299) = uVar6;
    if (plVar4 != (longlong *)0x0) {
      cVar3 = FUN_147a58384(param_1,param_1 + 0x158);
      uVar6 = *(uint *)(param_1 + 299);
      if (cVar3 != '\0') {
        *(uint *)(param_1 + 299) = uVar6 | 4;
        lVar1 = plVar4[0x39];
        if (lVar1 == 0) {
          pdVar5 = &DAT_14c8464e0;
          local_78 = DAT_14c8464f0;
        }
        else {
          pdVar5 = (double *)(lVar1 + 0x260);
          local_78 = *(double *)(lVar1 + 0x270);
        }
        local_88 = *pdVar5;
        dVar2 = pdVar5[1];
        local_80 = pdVar5[1];
        param_1[0x155] = (longlong)local_88;
        param_1[0x156] = (longlong)dVar2;
        param_1[0x157] = (longlong)local_78;
        local_78 = (double)param_1[0x15a] - local_78;
        local_80 = (double)param_1[0x159] - local_80;
        local_88 = (double)param_1[0x158] - local_88;
        dVar2 = local_78 * local_78 + local_88 * local_88 + local_80 * local_80;
        fVar10 = (float)SQRT(dVar2);
        if ((fVar10 != 0.0) || (NAN(fVar10))) {
          if (fVar10 < 30.0) {
            if (((dVar2 != 1.0) ||
                (dVar7 = local_78, dVar8 = local_88, dVar9 = local_80, NAN(dVar2))) &&
               (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar9 = DAT_14c8464e8,
               9.99999993922529e-09 <= dVar2)) {
              dVar2 = 1.0 / SQRT(dVar2);
              dVar7 = local_78 * dVar2;
              dVar8 = local_88 * dVar2;
              dVar9 = local_80 * dVar2;
            }
            param_1[0x155] = (longlong)((double)param_1[0x158] - dVar8 * 30.0);
            param_1[0x156] = (longlong)((double)param_1[0x159] - dVar9 * 30.0);
            param_1[0x157] = (longlong)((double)param_1[0x15a] - dVar7 * 30.0);
            local_c8 = 0;
            FUN_1413dd462(plVar4,param_1 + 0x155,0,0);
            fVar10 = 30.0;
          }
          *(float *)(param_1 + 0x15b) = fVar10;
          FUN_144a79a9c(&local_88,&local_a0);
          (**(code **)(*param_1 + 0x688))(param_1,&local_a0,1);
          local_a8 = local_90;
          local_b8 = local_a0;
          uStack_b4 = uStack_9c;
          uStack_b0 = uStack_98;
          uStack_ac = uStack_94;
          (**(code **)(*plVar4 + 0x730))(plVar4,&local_b8,0);
          param_1[0x161] = param_1[0x15a];
          *(int *)(param_1 + 0x15f) = (int)param_1[0x158];
          *(undefined4 *)((longlong)param_1 + 0xafc) = *(undefined4 *)((longlong)param_1 + 0xac4);
          *(int *)(param_1 + 0x160) = (int)param_1[0x159];
          *(undefined4 *)((longlong)param_1 + 0xb04) = *(undefined4 *)((longlong)param_1 + 0xacc);
          goto LAB_147a586fc;
        }
      }
    }
    *(uint *)(param_1 + 299) = uVar6 & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 299) = *(uint *)(param_1 + 299) & 0xfffffffb;
  }
LAB_147a586fc:
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a58972 FUN_147a58972 body=151 status=ok
// SIG undefined FUN_147a58972(void)

void FUN_147a58972(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x7a0) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x638))();
    if (lVar1 != 0) {
      lVar2 = FUN_145c25d4c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        *(float *)(lVar1 + 0x1e0) = *(float *)(param_1 + 0xa8c) * *(float *)(param_1 + 0xa88);
        *(float *)(lVar1 + 0x1e4) = *(float *)(param_1 + 0xa90) * *(float *)(param_1 + 0xa88);
        *(float *)(lVar1 + 0x1e8) = *(float *)(param_1 + 0xa94) * *(float *)(param_1 + 0xa88);
      }
    }
  }
  return;
}



// FUNCTION 147a58a0a FUN_147a58a0a body=398 status=ok
// SIG undefined FUN_147a58a0a(void)

void FUN_147a58a0a(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14364eb06();
  if ((*(byte *)(param_1 + 0x958) & 4) == 0) {
    *(uint *)(param_1 + 0xaf0) = *(uint *)(param_1 + 0xaf0) & 0xfffffffe;
  }
  else if ((*(uint *)(param_1 + 0xaf0) & 1) != 0) {
    lVar6 = FUN_14364b714(param_1);
    if (lVar6 != 0) {
      cVar5 = FUN_147a58384(param_1,(undefined4 *)(param_1 + 0xac0));
      if (cVar5 != '\0') {
        *(byte *)(param_1 + 0x958) = *(byte *)(param_1 + 0x958) | 4;
        cVar5 = FUN_144729dda(param_1 + 0x968);
        if (cVar5 != '\0') {
          lVar1 = *(longlong *)(lVar6 + 0x1c8);
          if (lVar1 == 0) {
            puVar7 = &DAT_14c8464e0;
            uVar9 = DAT_14c8464f0;
          }
          else {
            puVar7 = (undefined8 *)(lVar1 + 0x260);
            uVar9 = *(undefined8 *)(lVar1 + 0x270);
          }
          uVar2 = *(undefined4 *)((longlong)puVar7 + 4);
          uVar3 = *(undefined4 *)(puVar7 + 1);
          uVar4 = *(undefined4 *)((longlong)puVar7 + 0xc);
          *(undefined4 *)(param_1 + 0xaa8) = *(undefined4 *)puVar7;
          *(undefined4 *)(param_1 + 0xaac) = uVar2;
          *(undefined4 *)(param_1 + 0xab0) = uVar3;
          *(undefined4 *)(param_1 + 0xab4) = uVar4;
          *(undefined8 *)(param_1 + 0xab8) = uVar9;
          plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x968);
          (**(code **)(*plVar8 + 0x328))(plVar8,&local_58);
          dVar10 = (double)param_2;
          *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)(param_1 + 0xad0);
          *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_1 + 0xac0);
          *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_1 + 0xac4);
          *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_1 + 0xac8);
          *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(param_1 + 0xacc);
          local_48 = local_48 * dVar10 + *(double *)(param_1 + 0xab8);
          local_50 = local_50 * dVar10 + *(double *)(param_1 + 0xab0);
          local_58 = dVar10 * local_58 + *(double *)(param_1 + 0xaa8);
          local_68 = 0;
          FUN_1413dd462(lVar6,&local_58,0,0);
        }
        goto LAB_147a58a4a;
      }
    }
    *(byte *)(param_1 + 0x958) = *(byte *)(param_1 + 0x958) & 0xfb;
  }
LAB_147a58a4a:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a58ba2 FUN_147a58ba2 body=544 status=ok
// SIG undefined FUN_147a58ba2(void)

ulonglong FUN_147a58ba2(longlong param_1,float param_2,float *param_3,float param_4,
                       longlong *param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined1 *local_140;
  undefined8 local_130;
  undefined2 *local_128;
  int local_120;
  longlong local_118;
  int local_110;
  longlong local_108;
  int local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [64];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_5 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    local_148 = &local_d8;
    local_d8 = 0;
    uStack_d0 = 0;
    local_150 = &local_e8;
    local_e8 = 0;
    uStack_e0 = 0;
    local_158 = &local_f8;
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_147d8eaf4(*(undefined8 *)(param_1 + 0x3e0),local_c0,0,1);
    uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    iVar4 = (**(code **)(*param_5 + 0x7b0))(param_5);
    uVar7 = 0;
    if (0 < iVar4) {
      uVar7 = 0;
      iVar4 = 0;
      do {
        lVar6 = (**(code **)(*param_5 + 0x610))(param_5,iVar4);
        if (lVar6 != 0) {
          fVar1 = *param_3;
          *param_3 = fVar1 + param_4;
          uVar3 = *(undefined8 *)(param_1 + 0x3e0);
          local_130 = *(undefined8 *)(lVar6 + 0x18);
          FUN_1400021e4(&local_130,&local_128);
          puVar8 = &DAT_149dfb77a;
          if (local_120 != 0) {
            puVar8 = local_128;
          }
          FUN_140002266(&local_118,L"Material: \'%s\'",puVar8);
          local_108 = local_118;
          local_100 = local_110 + -1;
          if (local_110 == 0) {
            local_100 = 0;
          }
          local_140 = local_c0;
          local_148 = (undefined8 *)CONCAT44(local_148._4_4_,0x3f800000);
          local_150 = (undefined8 *)CONCAT44(local_150._4_4_,0x3f800000);
          local_158 = (undefined8 *)CONCAT44(local_158._4_4_,fVar1 + param_4);
          FUN_147d8e6b2(uVar3,uVar2,&local_108,param_2 + param_4);
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          if (local_128 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar7 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        }
        iVar4 = iVar4 + 1;
        iVar5 = (**(code **)(*param_5 + 0x7b0))(param_5);
      } while (iVar4 < iVar5);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar7 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a58dca FUN_147a58dca body=257 status=ok
// SIG undefined FUN_147a58dca(void)

void FUN_147a58dca(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar1 = local_38;
    local_30 = 3;
    *local_38 = &PTR_LAB_14a8bc3e0;
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
    *local_38 = &PTR_FUN_14a8bc370;
    local_38[3] = 0;
    FUN_14485c47a(local_38 + 3,param_1);
    puVar1[4] = FUN_147a58ecc;
    FUN_145bf3bbe(&local_28,&DAT_149e063b2,&local_38);
    *(undefined8 *)(param_1 + 0x40) = local_28;
    FUN_1449db362(&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a58ecc FUN_147a58ecc body=1249 status=ok
// SIG undefined FUN_147a58ecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a58ecc(longlong param_1,undefined8 param_2)

{
  LARGE_INTEGER *pLVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  double *_Dst;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  double *pdVar12;
  LARGE_INTEGER LVar13;
  undefined1 auStack_1a8 [40];
  longlong *local_180;
  undefined8 local_178;
  undefined8 local_170;
  LARGE_INTEGER local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_178 = param_2;
  LVar13.QuadPart = FUN_14689c99b();
  QueryPerformanceCounter(&local_168);
  dVar3 = (double)local_168.QuadPart * DAT_14c83f420;
  local_180 = (longlong *)(param_1 + 0x28);
  pdVar12 = *(double **)(param_1 + 0x30);
  if (((double)LVar13 != pdVar12[-2]) || (NAN((double)LVar13) || NAN(pdVar12[-2]))) {
    local_168.QuadPart = LVar13.QuadPart;
    dStack_160 = (double)FUN_14689c9a4();
    pLVar1 = *(LARGE_INTEGER **)(param_1 + 0x30);
    if (pLVar1 == *(LARGE_INTEGER **)(param_1 + 0x38)) {
      FUN_147a66af6(local_180,pLVar1,&local_168);
      pdVar12 = *(double **)(param_1 + 0x30);
    }
    else {
      *pLVar1 = local_168;
      pLVar1[1].QuadPart = (LONGLONG)dStack_160;
      pdVar12 = (double *)(*(longlong *)(param_1 + 0x30) + 0x10);
      *(double **)(param_1 + 0x30) = pdVar12;
    }
  }
  dVar3 = dVar3 + 16777216.0;
  _Dst = (double *)*local_180;
  if (_Dst != pdVar12) {
    do {
      if (dVar3 - *_Dst <= 30.0) break;
      memmove(_Dst,_Dst + 2,(longlong)pdVar12 - (longlong)(_Dst + 2));
      _Dst = *(double **)(param_1 + 0x28);
      pdVar12 = (double *)(*(longlong *)(param_1 + 0x30) + -0x10);
      *(double **)(param_1 + 0x30) = pdVar12;
    } while (_Dst != pdVar12);
  }
  uVar6 = local_178;
  local_170 = local_178;
  dStack_160 = 20.0;
  local_158 = 0x407a400000000000;
  local_140 = 0;
  local_150 = 0;
  local_148 = 0;
  local_168.QuadPart = (LONGLONG)&PTR_FUN_14a312d50;
  local_128 = 20.0;
  local_120 = 0x407a400000000000;
  local_118 = 0;
  local_110 = 420.0;
  local_108 = 420.0;
  local_100 = 0;
  local_138 = &DAT_3f8000003f800000;
  puStack_130 = &DAT_3f8000003f800000;
  local_f8 = 0x3f800000;
  FUN_140484502(local_178,&local_168);
  dStack_160 = 20.0;
  local_158 = 0x4034000000000000;
  local_140 = 0;
  local_150 = 0;
  local_148 = 0;
  local_168.QuadPart = (LONGLONG)&PTR_FUN_14a312d50;
  local_128 = 20.0;
  local_120 = 0x4034000000000000;
  local_118 = 0;
  local_110 = 20.0;
  local_108 = 420.0;
  local_100 = 0;
  local_138 = &DAT_3f8000003f800000;
  puStack_130 = &DAT_3f8000003f800000;
  local_f8 = 0x3f800000;
  FUN_140484502(uVar6,&local_168);
  dStack_160 = 420.0;
  local_158 = 0x4034000000000000;
  local_140 = 0;
  local_150 = 0;
  local_148 = 0;
  local_168.QuadPart = (LONGLONG)&PTR_FUN_14a312d50;
  local_128 = 420.0;
  local_120 = 0x4034000000000000;
  local_118 = 0;
  local_110 = 420.0;
  local_108 = 420.0;
  local_100 = 0;
  local_138 = &DAT_3f8000003f800000;
  puStack_130 = &DAT_3f8000003f800000;
  local_f8 = 0x3f800000;
  FUN_140484502(uVar6,&local_168);
  FUN_140056680(&local_168,L"GC Mark Durations");
  FUN_1434bab90(&local_170,&local_168,0xdc,0x1b4);
  if ((undefined **)local_168.QuadPart != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar7 = (int)((ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) >> 4) - 1
  ;
  if (-1 < (int)uVar7) {
    uVar11 = (ulonglong)uVar7 << 4 | 8;
    lVar9 = (ulonglong)uVar7 + 1;
    do {
      lVar10 = *local_180;
      dVar4 = (dVar3 - *(double *)(lVar10 + -8 + uVar11)) * -13.333333333333334 + 420.0;
      puVar8 = (undefined8 *)&DAT_149e1dd34;
      if (*(double *)(lVar10 + uVar11) <= (double)_DAT_14c7614d0 * 0.001) {
        puVar8 = (undefined8 *)&DAT_149e1dd14;
      }
      dVar5 = (*(double *)(lVar10 + uVar11) / -0.16666666666666666) * 400.0 + 420.0;
      local_158 = 0x407a300000000000;
      local_140 = 0;
      local_150 = 0;
      local_148 = 0;
      local_168.QuadPart = (LONGLONG)&PTR_FUN_14a312d50;
      local_120 = 0x407a300000000000;
      local_118 = 0;
      local_100 = 0;
      local_138 = (undefined1 *)*puVar8;
      puStack_130 = (undefined1 *)puVar8[1];
      local_f8 = 0x40400000;
      dStack_160 = dVar4;
      local_128 = dVar4;
      local_110 = dVar4;
      local_108 = dVar5;
      FUN_140484502(local_178,&local_168);
      FUN_140002266(&local_168,L"%dms",(int)(*(double *)(lVar10 + uVar11) * 1000.0));
      FUN_1434bab90(&local_170,&local_168,(int)dVar4,(int)(dVar5 + -11.0));
      if ((undefined **)local_168.QuadPart != (undefined **)0x0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 - 0x10;
      lVar10 = lVar9 + -1;
      bVar2 = 0 < lVar9;
      lVar9 = lVar10;
    } while (lVar10 != 0 && bVar2);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a593b8 FUN_147a593b8 body=17 status=ok
// SIG undefined FUN_147a593b8(void)

void FUN_147a593b8(longlong *param_1,longlong param_2)

{
  *(bool *)((longlong)param_1 + 0x24) = param_2 != 0;
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a593c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 147a593ca FUN_147a593ca body=681 status=ok
// SIG undefined FUN_147a593ca(void)

void FUN_147a593ca(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined1 *local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  int local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  double local_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [64];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [68];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_64 = *(undefined4 *)(param_2 + 0x38);
  local_1a8 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_1b0 = &local_c8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_1b8 = &local_d8;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_147d8eaf4(param_2,local_a8,1,0);
  local_1a8 = &local_128;
  local_128 = 0;
  uStack_120 = 0;
  local_1b0 = &local_138;
  local_138 = 0;
  uStack_130 = 0;
  local_1b8 = &local_148;
  local_148 = 0;
  uStack_140 = 0;
  FUN_147d8eaf4(param_2,local_118,1,1);
  FUN_147d8e5b4(param_2,&DAT_149e1e2cc);
  if (0 < *(int *)(param_1 + 0x30)) {
    local_190 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    lVar4 = *(longlong *)(param_2 + 0x2e8);
    lVar7 = 0x28;
    iVar8 = 0;
    do {
      if (lVar4 != 0) {
        cVar6 = FUN_144b22be2(lVar4 + 8000,*(longlong *)(param_1 + 0x28) + lVar7 + -0x18,
                              &DAT_14c8464e0);
        if (cVar6 != '\0') {
          FUN_147d8e5b4(param_2,*(longlong *)(param_1 + 0x28) + lVar7);
          local_168 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + lVar7);
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + -0x18 + lVar7);
          local_178 = *puVar1;
          uStack_174 = puVar1[1];
          uStack_170 = puVar1[2];
          uStack_16c = puVar1[3];
          FUN_147d8ea00(param_2,&local_160,&local_178,1);
          fVar2 = *(float *)(param_1 + 0x48);
          lVar5 = *(longlong *)(param_1 + 0x28);
          puVar9 = local_a8;
          if (0.0 <= fVar2) {
            dVar10 = *(double *)(lVar4 + 0x1048) - *(double *)(lVar5 + -0x18 + lVar7);
            dVar12 = *(double *)(lVar4 + 0x1050) - *(double *)(lVar5 + -0x10 + lVar7);
            dVar11 = *(double *)(lVar4 + 0x1058) - *(double *)(lVar5 + -8 + lVar7);
            if (dVar11 * dVar11 + dVar12 * dVar12 + dVar10 * dVar10 <= (double)(fVar2 * fVar2)) {
              puVar9 = local_118;
            }
          }
          FUN_147d8e5b4(param_2,lVar5 + lVar7);
          local_188 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -0x28 + lVar7);
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + -0x20 + lVar7);
          local_180 = iVar3 + -1;
          if (iVar3 == 0) {
            local_180 = 0;
          }
          local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,0x3f800000);
          local_1b0 = (undefined8 *)CONCAT44(local_1b0._4_4_,0x3f800000);
          local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,(float)local_158);
          local_1a0 = puVar9;
          FUN_147d8e6b2(param_2,local_190,&local_188,(float)local_160);
        }
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x30;
    } while (iVar8 < *(int *)(param_1 + 0x30));
  }
  FUN_147d8e5b4(param_2,&local_64);
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a59674 FUN_147a59674 body=1582 status=ok
// SIG undefined FUN_147a59674(void)

void FUN_147a59674(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,ulonglong param_7,ulonglong param_8)

{
  int iVar1;
  float fVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  longlong local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = param_6 + 10;
  if ((longlong *)param_6[0xc] != (longlong *)0x0) {
    plVar4 = (longlong *)param_6[0xc];
  }
  plVar4 = (longlong *)plVar4[param_3];
  local_e8 = local_e8 & 0xffffffffffffff00;
  (**(code **)(*plVar4 + 0x20))(plVar4,0,*(undefined4 *)(param_1 + 0x2a0),0);
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x298);
    lVar7 = (longlong)*(int *)(param_1 + 0x2a0) * 0x38;
    do {
      local_b0 = (double)CONCAT44((&DAT_14c758c60)[*(byte *)(lVar8 + 0x31)],
                                  (&DAT_14c758c60)[*(byte *)(lVar8 + 0x32)]);
      local_a8 = (double)CONCAT44((float)*(byte *)(lVar8 + 0x33) * 0.003921569,
                                  (&DAT_14c758c60)[*(byte *)(lVar8 + 0x30)]);
      local_d0 = (longlong *)CONCAT71(local_d0._1_7_,0.0 < *(float *)(lVar8 + 0x34));
      local_e0 = CONCAT44(local_e0._4_4_,*(float *)(lVar8 + 0x34));
      local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffff00000000);
      local_e8 = local_e8 & 0xffffffffffffff00;
      (**(code **)(*plVar4 + 0x30))(plVar4,lVar8,lVar8 + 0x18,&local_b0);
      lVar8 = lVar8 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x2b0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x2a8);
    lVar7 = (longlong)*(int *)(param_1 + 0x2b0) * 0x38;
    do {
      FUN_147a59ca4(lVar8,plVar4);
      lVar8 = lVar8 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  local_e8 = local_e8 & 0xffffffffffffff00;
  (**(code **)(*plVar4 + 0x20))(plVar4,0,*(int *)(param_1 + 0x2c0) * 5,0);
  if ((longlong)*(int *)(param_1 + 0x2c0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x2b8);
    lVar7 = (longlong)*(int *)(param_1 + 0x2c0) * 0x38;
    do {
      FUN_147a59d52(lVar8,plVar4);
      lVar8 = lVar8 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x2e0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x2d8);
    lVar7 = (longlong)*(int *)(param_1 + 0x2e0) << 5;
    do {
      local_b0 = (double)CONCAT44((&DAT_14c758c60)[*(byte *)(lVar8 + 0x19)],
                                  (&DAT_14c758c60)[*(byte *)(lVar8 + 0x1a)]);
      local_a8 = (double)CONCAT44((float)*(byte *)(lVar8 + 0x1b) * 0.003921569,
                                  (&DAT_14c758c60)[*(byte *)(lVar8 + 0x18)]);
      local_e8 = local_e8 & 0xffffffffffffff00;
      FUN_147cbb242(plVar4,lVar8,*(undefined4 *)(lVar8 + 0x1c),&local_b0);
      lVar8 = lVar8 + 0x20;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x2c8);
    lVar7 = (longlong)*(int *)(param_1 + 0x2d0) * 0x58;
    do {
      iVar1 = *(int *)(lVar8 + 0x3c);
      if (iVar1 == 3) {
        iVar1 = *(int *)(param_1 + 0x378);
      }
      local_d8 = param_6;
      local_e0 = CONCAT44(local_e0._4_4_,param_3);
      local_e8 = param_7;
      FUN_147a59f2c(lVar8,plVar4,iVar1,*(undefined4 *)(param_1 + 0x37c));
      lVar8 = lVar8 + 0x58;
      lVar7 = lVar7 + -0x58;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x2f0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x2e8);
    lVar7 = (longlong)*(int *)(param_1 + 0x2f0) * 0xb0;
    do {
      iVar1 = *(int *)(lVar8 + 0xa0);
      if (iVar1 == 3) {
        iVar1 = *(int *)(param_1 + 0x378);
      }
      local_d8 = param_6;
      local_e0 = CONCAT44(local_e0._4_4_,param_3);
      local_e8 = param_7;
      FUN_147a5a1b6(lVar8,plVar4,iVar1,*(undefined4 *)(param_1 + 0x37c));
      lVar8 = lVar8 + 0xb0;
      lVar7 = lVar7 + -0xb0;
    } while (lVar7 != 0);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  if ((longlong)*(int *)(param_1 + 800) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x318);
    lVar7 = (longlong)*(int *)(param_1 + 800) * 0x90;
    do {
      iVar1 = *(int *)(lVar8 + 0x8c);
      if (iVar1 == 3) {
        iVar1 = *(int *)(param_1 + 0x378);
      }
      local_d8 = param_6;
      local_e0 = CONCAT44(local_e0._4_4_,param_3);
      local_e8 = param_7;
      local_d0 = local_88;
      FUN_147a5a704(lVar8,plVar4,iVar1,*(undefined4 *)(param_1 + 0x37c));
      lVar8 = lVar8 + 0x90;
      lVar7 = lVar7 + -0x90;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x300) != 0) {
    pfVar9 = *(float **)(param_1 + 0x2f8);
    lVar8 = (longlong)*(int *)(param_1 + 0x300) * 0x28;
    do {
      local_b0 = (double)*pfVar9;
      local_a8 = local_b0;
      local_a0 = local_b0;
      if ((param_2 != 0) &&
         (cVar3 = FUN_144b22be2(param_2 + 8000,pfVar9 + 2,&local_b0), cVar3 != '\0')) {
        fVar2 = pfVar9[9];
        if (fVar2 == 4.2039e-45) {
          fVar2 = *(float *)(param_1 + 0x378);
        }
        local_d8 = param_6;
        local_e0 = CONCAT44(local_e0._4_4_,param_3);
        local_e8 = param_7;
        FUN_147a5a91c(pfVar9,plVar4,fVar2,*(undefined4 *)(param_1 + 0x37c));
      }
      pfVar9 = pfVar9 + 10;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x340) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x338);
    lVar7 = (longlong)*(int *)(param_1 + 0x340) * 0x78;
    do {
      if ((param_2 != 0) &&
         (cVar3 = FUN_144b22be2(param_2 + 8000,lVar8 + 8,&DAT_14c8464e0), cVar3 != '\0')) {
        iVar1 = *(int *)(lVar8 + 0x70);
        if (iVar1 == 3) {
          iVar1 = *(int *)(param_1 + 0x378);
        }
        local_d8 = param_6;
        local_e0 = CONCAT44(local_e0._4_4_,param_3);
        local_e8 = param_7;
        FUN_147a5aab8(lVar8,plVar4,iVar1,*(undefined4 *)(param_1 + 0x37c));
      }
      lVar8 = lVar8 + 0x78;
      lVar7 = lVar7 + -0x78;
    } while (lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x330) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x328);
    lVar8 = lVar7 + (longlong)*(int *)(param_1 + 0x330) * 0x28;
    do {
      local_e8 = local_e8 & 0xffffffffffffff00;
      local_e0 = 0;
      FUN_140d3493e(&local_b0,*(undefined4 *)(param_2 + 0x3090),1,0);
      FUN_147a7d62c(&local_b0,lVar7);
      FUN_147a7d6ae(&local_b0,lVar7 + 0x10);
      local_c0 = (&DAT_14c758c60)[*(byte *)(lVar7 + 0x22)];
      local_bc = (&DAT_14c758c60)[*(byte *)(lVar7 + 0x21)];
      local_b8 = (&DAT_14c758c60)[*(byte *)(lVar7 + 0x20)];
      uVar6 = param_7;
      if (*(byte *)(lVar7 + 0x23) == 0xff) {
        uVar6 = param_8;
      }
      local_b4 = (float)*(byte *)(lVar7 + 0x23) * 0.003921569;
      uVar5 = FUN_147a5ae5a(uVar6,&local_c0);
      local_d0 = param_6;
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,param_3);
      local_e0 = local_e0 & 0xffffffffffffff00;
      local_e8 = local_e8 & 0xffffffffffffff00;
      FUN_147a7d716(&local_b0,&DAT_14c846400,uVar5);
      FUN_1434d8cf8(&local_b0);
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != lVar8);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a59ca4 FUN_147a59ca4 body=172 status=ok
// SIG undefined FUN_147a59ca4(void)

void FUN_147a59ca4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  double local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (double)*(float *)(param_1 + 0x34);
  local_18 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x32)];
  local_14 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x31)];
  local_10 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x30)];
  local_c = (float)*(byte *)(param_1 + 0x33) * 0.003921569;
  local_28 = 0;
  local_30 = 0;
  FUN_147cbb44f(param_2,param_1,param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a59d52 FUN_147a59d52 body=472 status=ok
// SIG undefined FUN_147a59d52(void)

void FUN_147a59d52(double *param_1,undefined8 param_2)

{
  double dVar1;
  float fVar2;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = param_1[5] - param_1[2];
  local_d8 = param_1[4] - param_1[1];
  local_e0 = param_1[3] - *param_1;
  fVar2 = (float)SQRT(dVar1 * dVar1 + local_e0 * local_e0 + local_d8 * local_d8);
  dStack_d0 = 1.0 / (double)fVar2;
  local_e0 = local_e0 * dStack_d0;
  local_d8 = local_d8 * dStack_d0;
  dStack_d0 = dStack_d0 * dVar1;
  FUN_1467fc32a(&local_e0,&local_f8,&local_110);
  local_c8 = local_e0;
  local_c0 = local_d8;
  dStack_b8 = dStack_d0;
  local_b0 = 0;
  local_a8 = local_f8;
  local_a0 = local_f0;
  uStack_98 = uStack_e8;
  local_90 = 0;
  local_88 = local_110;
  uStack_80 = uStack_108;
  local_78 = local_100;
  local_70 = 0;
  local_68 = *param_1;
  local_60 = param_1[1];
  local_58 = param_1[2];
  local_50 = 0x3ff0000000000000;
  local_120 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x32)];
  local_11c = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x31)];
  local_118 = (&DAT_14c758c60)[*(byte *)(param_1 + 6)];
  local_114 = (float)*(byte *)((longlong)param_1 + 0x33) * 0.003921569;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0x41000000;
  FUN_147cbab7a(param_2,&local_c8,&local_120,fVar2);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a59f2c FUN_147a59f2c body=648 status=ok
// SIG undefined FUN_147a59f2c(void)

void FUN_147a59f2c(longlong param_1,undefined8 param_2,uint param_3,char param_4,undefined8 param_5,
                  uint param_6,undefined8 param_7)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_f8 [32];
  double local_d8;
  undefined4 *local_d0;
  double local_c8;
  double local_c0;
  uint local_b8;
  uint local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = (double)(param_1 + 0x18);
  FUN_1467fc32a(dVar1,local_50,local_68);
  if (param_3 - 1 < 2) {
    if (param_3 == 2) {
      fVar2 = *(float *)(param_1 + 0x30);
      local_b8 = 9;
      uVar3 = 0x40000000;
    }
    else {
      if (*(char *)(param_1 + 0x54) == '\x01') {
        fVar5 = (float)*(int *)(param_1 + 0x50);
        fVar4 = (float)*(int *)(param_1 + 0x48);
      }
      else {
        fVar4 = 16.0;
        fVar5 = 16.0;
      }
      fVar2 = *(float *)(param_1 + 0x30);
      fVar6 = (fVar2 + -100.0) / 9900.0;
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar4 = (fVar5 - fVar4) * fVar6 + fVar4;
      uVar3 = *(undefined4 *)(param_1 + 0x40);
      local_b8 = (int)ROUND(fVar4 + fVar4 + 0.5) >> 1;
    }
    local_c0 = (double)*(float *)(param_1 + 0x34);
    local_78 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x3a)];
    local_d0 = &local_78;
    local_74 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x39)];
    local_70 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x38)];
    local_c8 = (double)fVar2;
    local_6c = (float)*(byte *)(param_1 + 0x3b) * 0.003921569;
    local_a8 = CONCAT44(local_a8._4_4_,uVar3);
    local_98 = 1;
    local_a0 = local_a0 & 0xffffffff00000000;
    local_b0 = local_b0 & 0xffffff00;
    local_d8 = dVar1;
    FUN_147cb9340(param_2,param_1,local_50,local_68);
  }
  if ((param_3 & 0xfffffffd) == 0) {
    local_88 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x3a)];
    local_84 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x39)];
    local_80 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x38)];
    local_7c = (float)(byte)(*(char *)(param_1 + 0x3b) * param_4) * 0.003921569;
    local_c0 = (double)FUN_147a5ae5a(param_5);
    local_d0 = (undefined4 *)(double)*(float *)(param_1 + 0x34);
    local_d8 = (double)*(float *)(param_1 + 0x30);
    local_a8 = param_7;
    local_b0 = param_6;
    local_a0 = 0;
    local_b8 = local_b8 & 0xffffff00;
    local_c8 = (double)CONCAT44(local_c8._4_4_,0x10);
    FUN_147cb5f7c(param_1,local_50,local_68,dVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5a1b6 FUN_147a5a1b6 body=1356 status=ok
// SIG undefined FUN_147a5a1b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a5a1b6(double *param_1,undefined8 param_2,uint param_3,char param_4,undefined8 param_5,
                  uint param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_288 [32];
  uint local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined1 local_250;
  double local_240;
  double local_238;
  double local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  float local_21c;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
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
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_3 - 1 < 2) {
    local_198 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x39)],
                         (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x3a)]);
    uStack_190 = CONCAT44((float)*(byte *)((longlong)param_1 + 0x3b) * 0.003921569,
                          (&DAT_14c758c60)[*(byte *)(param_1 + 7)]);
    dVar2 = param_1[8];
    dVar3 = param_1[9];
    dVar1 = param_1[10];
    local_108 = param_1[0x10];
    dVar4 = param_1[0x11];
    dStack_d0 = param_1[0x12];
    dVar11 = dVar3 + dVar3;
    dVar7 = dVar1 + dVar1;
    dVar10 = dVar2 * (dVar2 + dVar2);
    local_118 = (1.0 - (dVar1 * dVar7 + dVar3 * dVar11)) * local_108;
    dVar1 = (1.0 - (dVar1 * dVar7 + dVar10)) * dVar4;
    local_c8 = (1.0 - (dVar10 + dVar3 * dVar11)) * dStack_d0;
    dVar10 = param_1[0xb];
    dVar8 = dVar7 * dVar10;
    dVar9 = (dVar2 + dVar2) * param_1[0xb];
    dVar10 = dVar11 * dVar10;
    dStack_110 = (dVar11 * dVar2 + dVar8) * local_108;
    local_e8 = (dVar7 * dVar3 + dVar9) * dVar4;
    local_d8 = (dVar10 + param_1[8] * dVar7) * dStack_d0;
    local_108 = (param_1[8] * dVar7 - dVar10) * local_108;
    dStack_d0 = (dVar7 * dVar3 - dVar9) * dStack_d0;
    uStack_100 = 0;
    local_f8._8_4_ = SUB84(dVar1,0);
    local_f8._0_8_ = (dVar11 * dVar2 - dVar8) * dVar4;
    local_f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_e0 = 0;
    uStack_c0 = 0;
    local_b8 = param_1[0xc];
    dStack_b0 = param_1[0xd];
    local_a8 = param_1[0xe];
    uStack_a0 = 0x3ff0000000000000;
    local_260 = CONCAT44(local_260._4_4_,(float)(byte)((param_3 == 2) * '\x02'));
    local_250 = 1;
    local_258 = local_258 & 0xffffffff00000000;
    local_268 = local_268 & 0xffffff00;
    FUN_147cb76de(param_2,&local_118,param_1);
  }
  if ((param_3 & 0xfffffffd) == 0) {
    local_228 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x3a)];
    local_224 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x39)];
    local_220 = (&DAT_14c758c60)[*(byte *)(param_1 + 7)];
    local_21c = (float)(byte)(*(char *)((longlong)param_1 + 0x3b) * param_4) * 0.003921569;
    uVar5 = FUN_147a5ae5a(param_5);
    local_230 = (param_1[5] - param_1[2]) * 0.5;
    local_238 = (param_1[4] - param_1[1]) * 0.5;
    local_240 = (param_1[3] - *param_1) * 0.5;
    auVar6._0_8_ = (param_1[5] + param_1[2]) * 0.5;
    auVar6._8_8_ = 0;
    dStack_130 = (param_1[4] + param_1[1]) * 0.5;
    local_138 = (param_1[3] + *param_1) * 0.5;
    local_198 = 0x3ff0000000000000;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0x3ff0000000000000;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_128 = blendpd(auVar6,_DAT_149935300,2);
    local_148 = 0x3ff0000000000000;
    uStack_140 = 0;
    dVar3 = param_1[8];
    dVar1 = param_1[9];
    dVar2 = param_1[10];
    local_208 = param_1[0x10];
    dVar4 = param_1[0x11];
    dVar7 = param_1[0x12];
    dVar12 = dVar1 + dVar1;
    dVar8 = dVar2 + dVar2;
    dVar10 = dVar3 * (dVar3 + dVar3);
    local_218 = (1.0 - (dVar2 * dVar8 + dVar1 * dVar12)) * local_208;
    dVar2 = (1.0 - (dVar2 * dVar8 + dVar10)) * dVar4;
    local_1c8 = (1.0 - (dVar10 + dVar1 * dVar12)) * dVar7;
    dVar10 = param_1[0xb];
    dVar9 = dVar8 * dVar10;
    dVar11 = (dVar3 + dVar3) * param_1[0xb];
    dVar10 = dVar12 * dVar10;
    dStack_210 = (dVar12 * dVar3 + dVar9) * local_208;
    local_1e8 = (dVar8 * dVar1 + dVar11) * dVar4;
    local_208 = (param_1[8] * dVar8 - dVar10) * local_208;
    dVar1 = (dVar8 * dVar1 - dVar11) * dVar7;
    uStack_200 = 0;
    local_1f8._8_4_ = SUB84(dVar2,0);
    local_1f8._0_8_ = (dVar12 * dVar3 - dVar9) * dVar4;
    local_1f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar1,0);
    local_1d8._0_8_ = (dVar10 + param_1[8] * dVar8) * dVar7;
    local_1d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_1c0 = 0;
    local_1b8 = param_1[0xc];
    dStack_1b0 = param_1[0xd];
    local_1a8 = param_1[0xe];
    uStack_1a0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_118);
    local_260 = param_7;
    local_268 = param_6;
    local_258 = 0;
    FUN_147cb2ad9(&local_118,&local_240,uVar5,0);
  }
  if ((local_90 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5a704 FUN_147a5a704 body=535 status=ok
// SIG undefined FUN_147a5a704(void)

void FUN_147a5a704(longlong param_1,undefined8 param_2,uint param_3,char param_4,undefined8 param_5,
                  undefined4 param_6,ulonglong param_7,longlong *param_8)

{
  undefined1 auStack_b8 [32];
  double local_98;
  uint local_90;
  undefined4 *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 - 1 < 2) {
    if (param_8 == (longlong *)0x0) {
      param_8 = local_38;
    }
    local_90 = 0x10;
    if (param_3 == 2) {
      local_90 = 9;
    }
    local_38[0] = 0;
    local_38[1] = 0;
    local_48 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x8a)];
    local_88 = &local_48;
    local_44 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x89)];
    local_40 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x88)];
    local_3c = (float)*(byte *)(param_1 + 0x8b) * 0.003921569;
    local_98 = (double)*(float *)(param_1 + 0x84);
    local_78 = CONCAT44(local_78._4_4_,(float)(byte)((param_3 == 2) * '\x02'));
    local_68 = 1;
    local_70 = 0;
    local_80 = local_80 & 0xffffffffffffff00;
    FUN_147cba4f3(param_2,param_8,param_1,0x3ff0000000000000);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((param_3 & 0xfffffffd) == 0) {
    local_58 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x8a)];
    local_54 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x89)];
    local_50 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x88)];
    local_4c = (float)(byte)(*(char *)(param_1 + 0x8b) * param_4) * 0.003921569;
    local_98 = (double)FUN_147a5ae5a(param_5);
    local_80 = param_7;
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,param_6);
    local_78 = 0;
    local_90 = local_90 & 0xffffff00;
    FUN_147cb5fef(param_1,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),0x10);
  }
  if ((local_38[2] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5a91c FUN_147a5a91c body=411 status=ok
// SIG undefined FUN_147a5a91c(void)

void FUN_147a5a91c(float *param_1,undefined8 param_2,uint param_3,char param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  float local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 - 1 < 2) {
    local_68 = (float)(byte)((param_3 == 2) * '\x02');
    local_50 = (double)CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x21)],
                                (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x22)]);
    local_48 = (double)CONCAT44(0x3f800000,(&DAT_14c758c60)[*(byte *)(param_1 + 8)]);
    local_58 = CONCAT71(local_58._1_7_,1);
    local_60 = 0;
    local_70 = 0;
    local_78 = CONCAT44(local_78._4_4_,0x14);
    FUN_147cb8959(param_2,param_1 + 2,&local_50,(double)*param_1);
  }
  if ((param_3 & 0xfffffffd) == 0) {
    local_38 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x22)];
    local_34 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x21)];
    local_30 = (&DAT_14c758c60)[*(byte *)(param_1 + 8)];
    local_2c = (float)(byte)(*(char *)((longlong)param_1 + 0x23) * param_4) * 0.003921569;
    local_78 = FUN_147a5ae5a();
    local_50 = (double)*param_1;
    local_58 = param_7;
    local_60 = param_6;
    local_68 = (float)((uint)local_68 & 0xffffff00);
    local_70 = 0;
    local_48 = local_50;
    local_40 = local_50;
    FUN_147cb3c06(param_1 + 2,&local_50,0x14,7);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5aab8 FUN_147a5aab8 body=929 status=ok
// SIG undefined FUN_147a5aab8(void)

void FUN_147a5aab8(float *param_1,undefined8 param_2,uint param_3,char param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_128 [32];
  float *local_108;
  undefined4 *local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  float local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 - 1 < 2) {
    fVar8 = param_1[9] - *param_1;
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    dVar1 = *(double *)(param_1 + 0x1a);
    local_f8 = (double)*param_1;
    dVar2 = *(double *)(param_1 + 0x18);
    dVar3 = *(double *)(param_1 + 0x16);
    local_88 = dVar1 * local_f8 + *(double *)(param_1 + 6);
    local_90 = dVar2 * local_f8 + *(double *)(param_1 + 4);
    local_98 = dVar3 * local_f8 + *(double *)(param_1 + 2);
    dVar4 = (double)(fVar8 + fVar8);
    dVar5 = (dVar1 * dVar4 + local_88) - local_88;
    dVar6 = (dVar2 * dVar4 + local_90) - local_90;
    dVar4 = (dVar4 * dVar3 + local_98) - local_98;
    dVar4 = (double)(float)(SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6) * 0.5);
    local_88 = dVar1 * dVar4 + local_88;
    local_90 = dVar2 * dVar4 + local_90;
    local_98 = dVar3 * dVar4 + local_98;
    uVar7 = 0x10;
    if (param_3 == 2) {
      uVar7 = 9;
    }
    local_d8 = (float)(byte)((param_3 == 2) * '\x02');
    local_a8 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x22)];
    local_100 = &local_a8;
    local_a4 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x21)];
    local_a0 = (&DAT_14c758c60)[*(byte *)(param_1 + 8)];
    local_f0 = (double)param_1[9];
    local_9c = (float)*(byte *)((longlong)param_1 + 0x23) * 0.003921569;
    local_108 = param_1 + 0x16;
    local_e8 = CONCAT44(local_e8._4_4_,uVar7);
    local_c8 = CONCAT71(local_c8._1_7_,1);
    local_d0 = 0;
    local_e0 = 0;
    FUN_147cb97ca(param_2,&local_98,param_1 + 10,param_1 + 0x10);
  }
  if ((param_3 & 0xfffffffd) == 0) {
    local_b8 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x22)];
    local_b4 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x21)];
    local_b0 = (&DAT_14c758c60)[*(byte *)(param_1 + 8)];
    local_ac = (float)(byte)(*(char *)((longlong)param_1 + 0x23) * param_4) * 0.003921569;
    local_e8 = FUN_147a5ae5a(param_5);
    local_f8 = (double)param_1[9];
    local_100 = (undefined4 *)(double)*param_1;
    local_108 = (float *)&local_98;
    local_98 = (double)CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x21)],
                                (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x22)]);
    local_90 = (double)CONCAT44((float)*(byte *)((longlong)param_1 + 0x23) * 0.003921569,
                                (&DAT_14c758c60)[*(byte *)(param_1 + 8)]);
    local_c8 = param_7;
    local_d0 = param_6;
    local_d8 = (float)((uint)local_d8 & 0xffffff00);
    local_e0 = 0;
    local_c0 = 0;
    local_f0 = (double)CONCAT44(local_f0._4_4_,0x10);
    FUN_147cb615a(param_1 + 2,param_1 + 10,param_1 + 0x10,param_1 + 0x16);
  }
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5ae5a FUN_147a5ae5a body=452 status=ok
// SIG undefined FUN_147a5ae5a(void)

undefined8 FUN_147a5ae5a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_78 [36];
  uint local_54;
  undefined8 local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_54 = FUN_1448eb174(param_2,0x10,0);
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[9];
    }
    uVar6 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[10] - 1U & local_54) * 4);
    if (uVar6 != 0xffffffff) {
      lVar1 = param_1[1];
      uVar9 = uVar6;
      do {
        if (*(uint *)(lVar1 + (longlong)(int)uVar9 * 0x18) == local_54) goto LAB_147a5af53;
        uVar9 = *(uint *)(lVar1 + (longlong)(int)uVar9 * 0x18 + 0x10);
      } while (uVar9 != 0xffffffff);
    }
  }
  if ((char)param_1[0xc] == '\x01') {
    cVar2 = FUN_144729dda(param_1 + 0xb);
    if (cVar2 == '\0') goto LAB_147a5af97;
    lVar1 = *param_1;
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0xb);
    uVar4 = (**(code **)(*plVar3 + 0x2f0))(plVar3);
    uVar5 = FUN_142dda456(*(undefined8 *)(lVar1 + 0xe8));
    FUN_1446ddc76(&local_48,"GizmoColor",1);
  }
  else {
LAB_147a5af97:
    lVar1 = *param_1;
    uVar4 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x498) + 0x2f0))();
    uVar5 = FUN_142dda456(*(undefined8 *)(lVar1 + 0xe8));
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_48 = (uint *)(ulonglong)DAT_14c892c38;
  }
  FUN_14089e406(uVar5,uVar4,param_2,local_48);
  puVar8 = (uint *)&local_50;
  local_48 = &local_54;
  local_50 = uVar5;
  local_40 = puVar8;
  FUN_147a6f1d0(param_1 + 1,local_34);
LAB_147a5af71:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined8 *)puVar8;
  while (uVar6 = puVar7[4], uVar6 != 0xffffffff) {
LAB_147a5af53:
    puVar7 = (uint *)(lVar1 + (longlong)(int)uVar6 * 0x18);
    if (*puVar7 == local_54) goto LAB_147a5af66;
  }
  puVar7 = (uint *)0x0;
LAB_147a5af66:
  puVar8 = puVar7 + 2;
  if (puVar7 == (uint *)0x0) {
    puVar8 = (uint *)0x0;
  }
  goto LAB_147a5af71;
}



// FUNCTION 147a5b090 FUN_147a5b090 body=869 status=ok
// SIG undefined FUN_147a5b090(void)

void FUN_147a5b090(longlong *param_1,longlong param_2,double *param_3,double *param_4,
                  undefined4 *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_130 = DAT_14c8463f0;
  uStack_128 = DAT_14c8463f8;
  local_110 = 0;
  local_120 = 0;
  local_118 = 0;
  local_138 = &PTR_FUN_14a312d50;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0.0;
  local_d8 = 0.0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_108 = *param_5;
  uStack_104 = param_5[1];
  uStack_100 = param_5[2];
  uStack_fc = param_5[3];
  if (param_6 == 0) {
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_148,param_4,param_2);
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_158,param_3,param_2);
    local_f8 = CONCAT44(uStack_154,local_158);
    uStack_f0 = CONCAT44(uStack_14c,uStack_150);
    uStack_e0 = local_148;
    local_d8 = dStack_140;
    (*(code *)local_138[3])(&local_138,*(undefined8 *)(param_2 + 0x2e0));
  }
  else {
    dVar1 = param_4[1] - param_3[1];
    dVar2 = *param_4 - *param_3;
    dVar4 = dVar2 * dVar2 + dVar1 * dVar1;
    if (9.99999993922529e-09 < dVar4) {
      dVar2 = dVar2 * (1.0 / SQRT(dVar4));
    }
    else {
      dVar2 = 0.0;
    }
    dVar1 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar4) &
                    (ulonglong)(dVar1 * (1.0 / SQRT(dVar4))));
    local_148 = *param_3;
    dStack_140 = param_3[1];
    if (0.0 < (*param_4 - local_148) * dVar2 + (param_4[1] - dStack_140) * dVar1) {
      dVar4 = (double)(5.0 / (float)*(int *)(param_2 + 0x40));
      dVar3 = dVar1 * dVar4;
      dVar4 = dVar4 * dVar2;
      do {
        local_160 = dStack_140 + dVar3;
        local_168 = local_148 + dVar4;
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_158,&local_168,param_2);
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_178,&local_148,param_2);
        local_f8 = local_178;
        uStack_f0 = uStack_170;
        uStack_e0 = (double)CONCAT44(uStack_154,local_158);
        local_d8 = (double)CONCAT44(uStack_14c,uStack_150);
        (*(code *)local_138[3])(&local_138,*(undefined8 *)(param_2 + 0x2e0));
        local_148 = local_148 + dVar4 + dVar4;
        dStack_140 = dStack_140 + dVar3 + dVar3;
      } while (0.0 < (*param_4 - local_148) * dVar2 + (param_4[1] - dStack_140) * dVar1);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a5b3f6 FUN_147a5b3f6 body=264 status=ok
// SIG undefined FUN_147a5b3f6(void)

void FUN_147a5b3f6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined **local_b0 [11];
  longlong local_58;
  ulonglong local_48;
  
  uVar1 = DAT_14ca94e18;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x2a8))(param_1,local_c0,param_5,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_d0,param_4,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_e0,param_3,param_2);
  local_e8 = uVar1;
  FUN_147a5b500(local_b0,local_e0,local_d0,local_c0);
  FUN_147d8fcda(local_b0,param_6);
  FUN_140484502(param_2,local_b0);
  local_b0[0] = &PTR_FUN_14a8bd0b0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5b500 FUN_147a5b500 body=269 status=ok
// SIG undefined FUN_147a5b500(void)

undefined8 *
FUN_147a5b500(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar2 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar2;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14a8bd0b0;
  param_1[8] = param_5;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar9 = DAT_14c8463f8;
  uVar8 = DAT_14c8463f0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = *param_4;
  uVar7 = param_4[1];
  *(undefined4 *)(param_1 + 0xc) = 1;
  FUN_147a66e18(param_1 + 0xb,0);
  puVar1 = (undefined8 *)param_1[0xb];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1[4] = &DAT_3f8000003f800000;
  puVar1[5] = &DAT_3f8000003f800000;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  puVar1[8] = uVar8;
  puVar1[9] = uVar9;
  puVar1[10] = &DAT_3f8000003f800000;
  puVar1[0xb] = &DAT_3f8000003f800000;
  puVar1[0xc] = uVar6;
  puVar1[0xd] = uVar7;
  puVar1[0xe] = uVar8;
  puVar1[0xf] = uVar9;
  puVar1[0x10] = &DAT_3f8000003f800000;
  puVar1[0x11] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 147a5b612 FUN_147a5b612 body=119 status=ok
// SIG undefined FUN_147a5b612(void)

void FUN_147a5b612(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x28) != '\x01') {
    return;
  }
  FUN_147a5b68a();
  if (*(int *)(param_1 + 0xac) == 1) {
    FUN_147a5bafe(param_1,param_2);
    FUN_147a5b7bc(param_1,param_2);
  }
  else if (*(int *)(param_1 + 0xac) == 0) {
    FUN_147a5b7bc(param_1,param_2);
    FUN_147a5bafe(param_1,param_2);
  }
  FUN_147a5c2ce(param_1,param_2);
  FUN_147a5c5c8(param_1,param_2);
  return;
}



// FUNCTION 147a5b68a FUN_147a5b68a body=305 status=ok
// SIG undefined FUN_147a5b68a(void)

void FUN_147a5b68a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  double local_118;
  double local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  undefined1 local_f8 [28];
  undefined4 local_dc;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_38,param_1 + 6,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,param_1 + 8,param_2);
  local_108 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0xba)];
  local_128 = &local_108;
  local_104 = (&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0xb9)];
  local_100 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x17)];
  local_fc = (float)*(byte *)((longlong)param_1 + 0xbb) * 0.003921569;
  local_110 = local_40 - local_30;
  local_118 = local_48 - local_38;
  FUN_147d8f1ec(local_f8,&local_38,DAT_14ca94e18);
  local_dc = 2;
  FUN_1417f77e6(param_2,local_f8,&local_38);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5b7bc FUN_147a5b7bc body=832 status=ok
// SIG undefined FUN_147a5b7bc(void)

void FUN_147a5b7bc(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined1 auStack_138 [32];
  float local_118;
  undefined1 local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  wchar_t *local_b8;
  int local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(*(longlong *)(param_2 + 0x2e0) + 0xa0) == '\0') {
    dVar5 = (double)*(float *)(*(longlong *)(param_2 + 0x2e0) + 0xb0);
  }
  else {
    dVar5 = 1.0;
  }
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar3 = *(double *)(param_1 + 0x40);
  dVar4 = *(double *)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
    uVar8 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  }
  else {
    uVar8 = FUN_14375bb62();
  }
  FUN_140002266(&local_b8,L"%.2f",*(undefined8 *)(param_1 + 0x60));
  local_a8 = local_b8;
  if (local_b0 == 0) {
    local_a8 = L"";
  }
  local_a0 = 0;
  if (local_a8 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_a8);
    local_a0 = (int)sVar9;
  }
  FUN_147d8e4df(uVar8,&local_94,&local_98);
  if (local_b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  fVar6 = ((float)(((double)*(int *)(param_2 + 0x40) * (dVar3 - dVar1)) / dVar5) * 0.7) /
          (float)local_94;
  iVar7 = -(int)((ulonglong)(longlong)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
  local_118 = (float)iVar7;
  *(int *)(param_1 + 0xa0) = iVar7;
  local_110 = 0;
  local_d8 = dVar1;
  local_d0 = dVar2;
  local_c8 = dVar3;
  local_c0 = dVar2;
  FUN_147a5c7f4(param_1,param_2);
  FUN_140002266(&local_b8,L"%.2f",*(undefined8 *)(param_1 + 0x68));
  local_e8 = local_b8;
  if (local_b0 == 0) {
    local_e8 = L"";
  }
  local_e0 = 0;
  if (local_e8 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_e8);
    local_e0 = (int)sVar9;
  }
  FUN_147d8e4df(uVar8,&local_94,&local_98);
  if (local_b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  fVar6 = ((float)(((double)*(int *)(param_2 + 0x44) * (dVar4 - dVar2)) / dVar5) * 0.7) /
          (float)local_98;
  iVar7 = -(int)((ulonglong)(longlong)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
  local_118 = (float)iVar7;
  *(int *)(param_1 + 0xa4) = iVar7;
  local_110 = 1;
  local_108 = dVar1;
  local_100 = dVar2;
  local_f8 = dVar1;
  local_f0 = dVar4;
  FUN_147a5c7f4(param_1,param_2);
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a5bafe FUN_147a5bafe body=1998 status=ok
// SIG undefined FUN_147a5bafe(void)

void FUN_147a5bafe(longlong *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  wchar_t *pwVar9;
  double dVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  size_t sVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1c8 [32];
  wchar_t **local_1a8;
  ulonglong local_1a0;
  undefined4 *local_198;
  longlong local_190;
  float local_188;
  float local_184;
  wchar_t **local_180;
  ulonglong local_178;
  longlong local_170;
  wchar_t *local_168;
  double local_160;
  wchar_t *local_158;
  undefined4 local_150;
  wchar_t *local_148;
  double local_140;
  wchar_t *local_138;
  double local_130;
  undefined2 *local_128;
  undefined4 local_120;
  undefined1 local_118 [4];
  int local_114;
  undefined1 local_110 [8];
  double local_108;
  undefined1 local_100 [8];
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_1 + 0x2a8))(param_1,local_100,param_1 + 6,param_2);
  local_190 = param_2;
  (**(code **)(*param_1 + 0x2a8))(param_1,local_110,param_1 + 8,param_2);
  dVar1 = (double)param_1[9];
  dVar2 = (double)param_1[7];
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    local_180 = *(wchar_t ***)(DAT_14cb0d2b0 + 0x58);
  }
  else {
    local_180 = (wchar_t **)FUN_14375bb62();
  }
  local_128 = &DAT_149e25dfc;
  local_120 = 1;
  FUN_147d8e4df(local_180,&local_114,local_118);
  if (((*(byte *)(param_1 + 0x18) & 4) != 0) && (*(int *)((longlong)param_1 + 0xac) == 0)) {
    dVar27 = ((double)*(float *)((longlong)param_1 + 0xbc) - (double)param_1[10]) /
             ((double)param_1[0xc] - (double)param_1[10]);
    if (1.0 <= dVar27) {
      dVar27 = 1.0;
    }
    if (dVar27 <= 0.0) {
      dVar27 = 0.0;
    }
    dVar23 = (double)param_1[0xb];
    dVar28 = (double)param_1[0xd] - dVar23;
    dVar23 = (dVar23 - dVar23) / dVar28;
    dVar28 = dVar28 / dVar28;
    if (1.0 <= dVar28) {
      dVar28 = 1.0;
    }
    local_148 = (wchar_t *)(((double)param_1[8] - (double)param_1[6]) * dVar27 + (double)param_1[6])
    ;
    local_140 = (double)param_1[7];
    local_130 = dVar28 * ((double)param_1[9] - local_140) + local_140;
    if (1.0 <= dVar23) {
      dVar23 = 1.0;
    }
    if (dVar23 <= 0.0) {
      dVar23 = 0.0;
    }
    local_140 = dVar23 * ((double)param_1[9] - local_140) + local_140;
    local_1a8 = (wchar_t **)&DAT_149e1e2f8;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    local_138 = local_148;
    FUN_147a5b090(param_1,local_190);
  }
  iVar16 = (int)param_1[0x11];
  if (0 < iVar16) {
    local_188 = (float)((double)(float)(dVar1 - dVar2) / ABS(local_108 - local_f8));
    lVar14 = param_1[0x10];
    fVar24 = 0.0;
    uVar18 = 0;
    dVar1 = 1.0;
    dVar2 = 0.0;
    do {
      fVar21 = fVar24;
      if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
        fVar21 = fVar24 + local_188;
      }
      if ((uVar18 & 1) != 0) {
        fVar24 = fVar21;
      }
      lVar17 = uVar18 * 0x50;
      if (1 < *(int *)(lVar14 + 8 + lVar17)) {
        dVar27 = (double)fVar24;
        if ((uVar18 & 1) == 0) {
          dVar27 = -dVar27;
        }
        lVar19 = 1;
        lVar20 = 0x18;
        local_170 = uVar18 * 0x50;
        local_184 = fVar24;
        local_178 = uVar18;
        do {
          lVar13 = local_170;
          lVar12 = local_190;
          lVar5 = *(longlong *)(lVar14 + lVar17);
          dVar23 = *(double *)(lVar5 + -0x18 + lVar20);
          dVar28 = *(double *)(lVar5 + -0x10 + lVar20);
          dVar25 = *(double *)(lVar5 + -8 + lVar20);
          dVar3 = *(double *)(lVar5 + lVar20);
          dVar26 = (double)param_1[10];
          dVar10 = (dVar23 - dVar26) / ((double)param_1[0xc] - dVar26);
          if (1.0 <= dVar10) {
            dVar10 = dVar1;
          }
          if (dVar10 <= 0.0) {
            dVar10 = dVar2;
          }
          dVar4 = (double)param_1[0xb];
          dVar22 = (dVar28 - dVar4) / ((double)param_1[0xd] - dVar4);
          if (1.0 <= dVar22) {
            dVar22 = 1.0;
          }
          if (dVar22 <= 0.0) {
            dVar22 = 0.0;
          }
          dVar8 = (dVar25 - dVar26) / ((double)param_1[0xc] - dVar26);
          dVar7 = (dVar3 - dVar4) / ((double)param_1[0xd] - dVar4);
          dVar26 = (double)param_1[6];
          if (1.0 <= dVar8) {
            dVar8 = dVar1;
          }
          if (dVar8 <= 0.0) {
            dVar8 = dVar2;
          }
          local_130 = (double)param_1[7];
          pwVar11 = (wchar_t *)(dVar10 * ((double)param_1[8] - dVar26) + dVar26);
          pwVar9 = (wchar_t *)(dVar8 * ((double)param_1[8] - dVar26) + dVar26);
          dVar26 = (double)param_1[9] - local_130;
          local_140 = dVar22 * dVar26 + local_130;
          if (1.0 <= dVar7) {
            dVar7 = dVar1;
          }
          if (dVar7 <= 0.0) {
            dVar7 = dVar2;
          }
          dVar10 = dVar7 * dVar26 + local_130;
          if (*(int *)((longlong)param_1 + 0xac) == 0) {
            local_1a8 = (wchar_t **)((longlong *)(lVar14 + lVar17) + 2);
            local_130 = dVar10 + dVar27;
            local_138 = (wchar_t *)((double)pwVar9 + dVar27);
            local_140 = local_140 + dVar27;
            local_148 = (wchar_t *)((double)pwVar11 + dVar27);
            local_1a0 = local_1a0 & 0xffffffff00000000;
            FUN_147a5b090(param_1,local_190,&local_148,&local_138);
            lVar14 = local_190;
            if ((((*(byte *)(param_1 + 0x18) & 4) != 0) &&
                (dVar26 = (double)*(float *)((longlong)param_1 + 0xbc), dVar23 <= dVar26)) &&
               (dVar26 < dVar25)) {
              dVar26 = (double)(float)((dVar26 - dVar23) / (dVar25 - dVar23));
              dVar28 = (dVar3 - dVar28) * dVar26 + dVar28;
              dVar23 = (((dVar25 - dVar23) * dVar26 + dVar23) - (double)param_1[10]) /
                       ((double)param_1[0xc] - (double)param_1[10]);
              if (1.0 <= dVar23) {
                dVar23 = dVar1;
              }
              if (dVar23 <= 0.0) {
                dVar23 = dVar2;
              }
              dVar25 = (dVar28 - (double)param_1[0xb]) /
                       ((double)param_1[0xd] - (double)param_1[0xb]);
              if (1.0 <= dVar25) {
                dVar25 = 1.0;
              }
              if (dVar25 <= 0.0) {
                dVar25 = 0.0;
              }
              local_148 = (wchar_t *)
                          (((double)param_1[8] - (double)param_1[6]) * dVar23 + (double)param_1[6]);
              local_140 = ((double)param_1[9] - (double)param_1[7]) * dVar25 + (double)param_1[7];
              (**(code **)(*param_1 + 0x2a8))(param_1,&local_138,&local_148,local_190);
              dVar23 = local_130 + dVar27;
              dVar25 = (double)local_138 + dVar27;
              uVar6 = *(undefined8 *)(lVar14 + 0x2e0);
              lVar14 = param_1[0x10];
              FUN_140002266(&local_138,L"%1.2f",dVar28);
              local_158 = L"";
              if (local_130._0_4_ != 0) {
                local_158 = local_138;
              }
              if (local_158 == (wchar_t *)0x0) {
                local_150 = 0;
              }
              else {
                sVar15 = wcslen(local_158);
                local_150 = (int)sVar15;
              }
              local_1a0 = lVar14 + lVar17 + 0x10;
              local_198 = &DAT_149e1e308;
              local_1a8 = local_180;
              FUN_147d8e230(uVar6,dVar25 + (double)local_114,dVar23,&local_158);
              if (local_138 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else {
            local_130 = dVar4 * dVar26 + local_130;
            local_1a0 = lVar14 + 0x10 + local_170;
            local_1a8 = &local_168;
            local_168 = pwVar11;
            local_160 = local_140;
            local_148 = pwVar9;
            local_140 = dVar10;
            local_138 = pwVar11;
            FUN_147a5b3f6(param_1,local_190,&local_138,&local_148);
            uVar18 = local_178;
            local_140 = ((double)param_1[9] - (double)param_1[7]) * (double)param_1[0xb] +
                        (double)param_1[7];
            local_1a0 = param_1[0x10] + 0x10 + lVar13;
            local_1a8 = &local_168;
            local_168 = pwVar9;
            local_160 = dVar10;
            local_148 = pwVar9;
            local_138 = pwVar11;
            local_130 = local_140;
            FUN_147a5b3f6(param_1,lVar12,&local_138,&local_148);
          }
          lVar19 = lVar19 + 1;
          lVar14 = param_1[0x10];
          lVar20 = lVar20 + 0x10;
        } while (lVar19 < *(int *)(lVar14 + 8 + lVar17));
        iVar16 = (int)param_1[0x11];
        fVar24 = local_184;
      }
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)iVar16);
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a5c2ce FUN_147a5c2ce body=760 status=ok
// SIG undefined FUN_147a5c2ce(void)

void FUN_147a5c2ce(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  int local_2dc;
  undefined8 local_2d8;
  longlong local_2d0 [2];
  longlong *local_2c0 [2];
  wchar_t *local_2b0;
  undefined4 local_2a8;
  double local_2a0;
  double local_298;
  wchar_t *local_290;
  undefined4 local_288;
  int local_280;
  undefined1 local_27c [4];
  longlong local_278;
  double dStack_270;
  undefined1 local_260 [48];
  undefined8 local_230;
  undefined8 uStack_228;
  byte local_218;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  dStack_270 = (double)param_1[9];
  local_278 = param_1[6];
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    uVar4 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  }
  else {
    uVar4 = FUN_14375bb62();
  }
  local_290 = L"99.99";
  local_288 = 5;
  FUN_147d8e4df(uVar4,&local_280,local_27c);
  if (0 < (int)param_1[0x11]) {
    local_2dc = -local_280;
    lVar8 = 0x48;
    lVar7 = 0;
    local_2d8 = param_2;
    do {
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_2a0,&local_278,param_2);
      iVar3 = local_2dc;
      if ((int)param_1[0x16] == 0) {
        if (*(int *)(param_1[0x10] + lVar8) == 0) {
          local_2b0 = L"";
LAB_147a5c551:
          sVar5 = wcslen(local_2b0);
          local_2a8 = (int)sVar5;
        }
        else {
          local_2b0 = *(wchar_t **)(param_1[0x10] + -8 + lVar8);
          if (local_2b0 != (wchar_t *)0x0) goto LAB_147a5c551;
          local_2a8 = 0;
        }
        FUN_147d8e4df(uVar4,&local_280,local_27c,&local_2b0);
        iVar3 = local_280 + 10;
      }
      *(float *)((longlong)param_1 + 0xb4) = (float)iVar3;
      lVar2 = param_1[0x10];
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + lVar8) != 0) {
        puVar6 = *(undefined2 **)(lVar2 + -8 + lVar8);
      }
      FUN_140056680(local_2d0,puVar6);
      FUN_140233b1a(local_2c0,local_2d0);
      local_2e8 = lVar2 + lVar8 + -0x38;
      FUN_140114bb6(local_260,&DAT_14c8463f0,local_2c0,uVar4);
      if (local_2c0[0] != (longlong *)0x0) {
        (**(code **)(*local_2c0[0] + 0x10))();
      }
      param_2 = local_2d8;
      if (local_2d0[0] != 0) {
        FUN_1400020a8();
      }
      local_1c8 = 0x3ff0000000000000;
      local_1c0 = 0x3ff0000000000000;
      local_1d8 = DAT_14c758c60;
      local_1d4 = DAT_14c758c60;
      local_1d0 = DAT_14c758c60;
      local_1cc = 0x3f800000;
      local_218 = local_218 | 2;
      puVar1 = (undefined8 *)(param_1[0x10] + -0x38 + lVar8);
      local_230 = *puVar1;
      uStack_228 = puVar1[1];
      FUN_147d8f278(param_2,local_260,
                    (float)(local_2a0 - (double)*(float *)((longlong)param_1 + 0xb4)),
                    (float)local_298);
      dStack_270 = dStack_270 -
                   ((double)param_1[9] - (double)param_1[7]) / (double)(int)param_1[0x11];
      FUN_140b2399e(local_260);
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x50;
    } while (lVar7 < (int)param_1[0x11]);
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a5c5c8 FUN_147a5c5c8 body=554 status=ok
// SIG undefined FUN_147a5c5c8(void)

void FUN_147a5c5c8(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined4 *local_c8;
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 uStack_90;
  double local_80;
  double dStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    uVar4 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  }
  else {
    uVar4 = FUN_14375bb62();
  }
  if (0 < (int)param_1[0xf]) {
    lVar7 = 0x20;
    lVar6 = 0;
    do {
      dVar3 = (double)*(float *)(param_1[0xe] + -0x20 + lVar7);
      if ((double)param_1[0xd] <= dVar3) break;
      dVar8 = (0.0 - (double)param_1[10]) / ((double)param_1[0xc] - (double)param_1[10]);
      if (1.0 <= dVar8) {
        dVar8 = 1.0;
      }
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
      dVar3 = (dVar3 - (double)param_1[0xb]) / ((double)param_1[0xd] - (double)param_1[0xb]);
      if (1.0 <= dVar3) {
        dVar3 = 1.0;
      }
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      local_98 = (double)param_1[8];
      local_80 = (local_98 - (double)param_1[6]) * dVar8 + (double)param_1[6];
      dStack_78 = ((double)param_1[9] - (double)param_1[7]) * dVar3 + (double)param_1[7];
      local_d8 = param_1[0xe] + -0x1c + lVar7;
      local_d0 = CONCAT44(local_d0._4_4_,1);
      uStack_90 = dStack_78;
      FUN_147a5b090(param_1,param_2,&local_80,&local_98);
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_a8,&local_98,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x2e0);
      lVar2 = param_1[0xe];
      if (*(int *)(lVar2 + lVar7) == 0) {
        local_b8 = L"";
LAB_147a5c74c:
        sVar5 = wcslen(local_b8);
        local_b0 = (int)sVar5;
      }
      else {
        local_b8 = *(wchar_t **)(lVar2 + -8 + lVar7);
        if (local_b8 != (wchar_t *)0x0) goto LAB_147a5c74c;
        local_b0 = 0;
      }
      local_d0 = lVar7 + lVar2 + -0x1c;
      local_c8 = &DAT_149e1e308;
      local_d8 = uVar4;
      FUN_147d8e230(uVar1,local_a8,local_a0,&local_b8);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lVar6 < (int)param_1[0xf]);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a5c7f4 FUN_147a5c7f4 body=2851 status=ok
// SIG undefined FUN_147a5c7f4(void)

void FUN_147a5c7f4(longlong *param_1,longlong param_2,double *param_3,double *param_4,float param_5,
                  char param_6)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  undefined4 uVar14;
  longlong *plVar15;
  size_t sVar16;
  wchar_t *_Str;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined4 uVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStack_228 [32];
  longlong *local_208;
  longlong *local_200;
  undefined4 *local_1f8;
  double *local_1e8;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  int local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined1 local_18c [4];
  wchar_t *local_188;
  undefined4 local_180;
  double local_178;
  double dStack_170;
  wchar_t *local_160;
  undefined4 local_158;
  wchar_t *local_150;
  double local_148;
  wchar_t *local_140;
  undefined4 local_138;
  int local_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar1 = param_1 + 0x12;
  local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
  local_208 = plVar1;
  FUN_147a5b090();
  dVar2 = *param_3;
  dVar22 = param_3[1];
  dVar3 = *param_4;
  dVar4 = param_4[1];
  dVar23 = SQRT((dVar2 - dVar3) * (dVar2 - dVar3) + (dVar22 - dVar4) * (dVar22 - dVar4));
  dVar10 = (double)param_5;
  dVar11 = dVar23 / dVar10;
  dVar5 = (double)param_1[0xc];
  dVar12 = (double)param_1[0xd] - (double)param_1[0xb];
  dVar6 = (double)param_1[10];
  local_108 = *param_3;
  dStack_100 = param_3[1];
  local_118 = param_1[0x12];
  uStack_110 = param_1[0x13];
  iVar19 = (int)param_1[0x15];
  if (iVar19 == 2) {
    local_118._4_4_ = (float)((ulonglong)local_118 >> 0x20);
    local_118 = CONCAT44(local_118._4_4_ * 0.125,(float)local_118 * 0.125);
    uStack_110._4_4_ = (float)((ulonglong)uStack_110 >> 0x20);
    uStack_110 = CONCAT44(uStack_110._4_4_ * 0.125,(float)uStack_110 * 0.125);
    uVar20 = 0;
    dVar9 = 0.0;
    if (param_6 != '\0') goto LAB_147a5ca98;
    dVar9 = dVar3 - dVar2;
  }
  else {
    uVar20 = 0;
    dVar9 = 0.0;
    if (iVar19 != 1) {
      dVar9 = 0.0;
      if (iVar19 == 0) {
        if (param_6 == '\0') {
          dVar9 = (dVar3 - dVar2) * -0.05000000074505806;
          uVar20 = SUB84(dVar9,0);
          dStack_100 = dVar9 * -0.5 + dStack_100;
        }
        else {
          local_108 = (dVar4 - dVar22) * -0.05000000074505806 * -0.5 + local_108;
          dVar9 = 0.0;
        }
        param_5 = 1.0;
        dVar11 = dVar23;
      }
      goto LAB_147a5ca98;
    }
    if (param_6 != '\0') {
      local_108 = (dVar4 - dVar22) * -0.05000000074505806 * -0.5 + local_108;
      goto LAB_147a5ca98;
    }
    dVar9 = (dVar3 - dVar2) * -0.05000000074505806;
    dStack_100 = dVar9 * -0.5 + dStack_100;
  }
  uVar20 = SUB84(dVar9,0);
LAB_147a5ca98:
  uVar24 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_1e8 = param_3;
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    plVar15 = *(longlong **)(DAT_14cb0d2b0 + 0x58);
  }
  else {
    plVar15 = (longlong *)FUN_14375bb62();
  }
  if (0.0 < param_5 + 1.0) {
    pdVar13 = (double *)(param_1 + 0xb);
    dVar2 = (double)param_1[8];
    dVar22 = (double)param_1[9];
    if (param_6 == '\0') {
      dVar12 = dVar5 - dVar6;
      pdVar13 = (double *)(param_1 + 10);
    }
    dVar3 = (double)param_1[6];
    dVar4 = (double)param_1[7];
    iVar19 = 1;
    do {
      FUN_140002266(&local_128,L"%1.2f",(double)(iVar19 + -1) * (1.0 / dVar10) * dVar12 + *pdVar13);
      local_140 = L"";
      if (iStack_120 != 0) {
        local_140 = (wchar_t *)CONCAT44(uStack_124,local_128);
      }
      uVar14 = 0;
      if (local_140 != (wchar_t *)0x0) {
        sVar16 = wcslen(local_140);
        uVar14 = (int)sVar16;
      }
      local_138 = uVar14;
      FUN_147d8e4df(plVar15,&local_1c0,&local_12c,&local_140);
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_150,&local_108,param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x2e0);
      _Str = L"";
      if (iStack_120 != 0) {
        _Str = (wchar_t *)CONCAT44(uStack_124,local_128);
      }
      uVar14 = 0;
      if (param_6 == '\0') {
        local_188 = _Str;
        if (_Str != (wchar_t *)0x0) {
          sVar16 = wcslen(_Str);
          uVar14 = (int)sVar16;
        }
        dVar5 = 5.0;
        if ((int)param_1[0x15] != 2) {
          dVar5 = (double)*(int *)(param_2 + 0x44) * -(double)CONCAT44(uVar24,uVar20);
        }
        local_1f8 = &DAT_149e1e308;
        local_208 = plVar15;
        local_200 = plVar1;
        local_180 = uVar14;
        FUN_147d8e230(uVar7,(double)((float)local_1c0 * -0.5) + (double)local_150,local_148 + dVar5,
                      &local_188);
        dStack_170 = dStack_100 + (dVar22 - dVar4);
        local_178 = local_108 + 0.0;
        local_208 = &local_118;
        local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
        FUN_147a5b090(param_1,param_2,&local_108,&local_178);
        local_108 = local_108 + (double)(float)dVar11;
      }
      else {
        local_160 = _Str;
        if (_Str != (wchar_t *)0x0) {
          sVar16 = wcslen(_Str);
          uVar14 = (int)sVar16;
        }
        local_1f8 = &DAT_149e1e308;
        local_208 = plVar15;
        local_200 = plVar1;
        local_158 = uVar14;
        FUN_147d8e230(uVar7,((double)local_150 - (double)local_1c0) + -4.0,
                      (double)((float)local_12c * -0.5) + local_148,&local_160);
        dStack_170 = dStack_100 + 0.0;
        local_178 = local_108 + (dVar2 - dVar3);
        local_208 = &local_118;
        local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
        FUN_147a5b090(param_1,param_2,&local_108,&local_178);
        dStack_100 = dStack_100 + (double)(float)dVar11;
      }
      if (CONCAT44(uStack_124,local_128) != 0) {
        FUN_1400020a8();
      }
      fVar21 = (float)iVar19;
      iVar19 = iVar19 + 1;
    } while (fVar21 < param_5 + 1.0);
  }
  if (((param_6 != '\0') && ((*(byte *)(param_1 + 0x18) & 8) != 0)) &&
     (iVar19 = (int)param_1[0x11], 0 < iVar19)) {
    dVar2 = -(double)CONCAT44(uVar24,uVar20);
    lVar17 = 0;
    lVar18 = 0;
    do {
      if (*(int *)(param_1[0x10] + 8 + lVar17) != 0) {
        dVar22 = (*local_1e8 - (double)param_1[10]) / ((double)param_1[0xc] - (double)param_1[10]);
        if (1.0 <= dVar22) {
          dVar22 = 1.0;
        }
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        dVar3 = (*(double *)(param_1[0x10] + 0x28 + lVar17) - (double)param_1[0xb]) /
                ((double)param_1[0xd] - (double)param_1[0xb]);
        if (1.0 <= dVar3) {
          dVar3 = 1.0;
        }
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        local_150 = (wchar_t *)
                    (((double)param_1[8] - (double)param_1[6]) * dVar22 + (double)param_1[6]);
        local_148 = ((double)param_1[9] - (double)param_1[7]) * dVar3 + (double)param_1[7];
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_128,&local_150,param_2);
        FUN_140002266(&local_150,L"%.2f",*(undefined8 *)(param_1[0x10] + 0x28 + lVar17));
        local_1a0 = L"";
        if (local_148._0_4_ != 0) {
          local_1a0 = local_150;
        }
        if (local_1a0 == (wchar_t *)0x0) {
          local_198 = 0;
        }
        else {
          sVar16 = wcslen(local_1a0);
          local_198 = (int)sVar16;
        }
        FUN_147d8e4df(plVar15,&local_12c,local_18c,&local_1a0);
        uVar7 = *(undefined8 *)(param_2 + 0x2e0);
        lVar8 = param_1[0x10];
        local_1b0 = L"";
        if (local_148._0_4_ != 0) {
          local_1b0 = local_150;
        }
        if (local_1b0 == (wchar_t *)0x0) {
          local_1a8 = 0;
        }
        else {
          sVar16 = wcslen(local_1b0);
          local_1a8 = (int)sVar16;
        }
        dVar22 = 5.0;
        if ((int)param_1[0x15] != 2) {
          dVar22 = (double)*(int *)(param_2 + 0x44) * dVar2;
        }
        local_200 = (longlong *)(lVar8 + lVar17 + 0x10);
        local_1f8 = &DAT_149e1e308;
        local_208 = plVar15;
        FUN_147d8e230(uVar7,(double)((float)local_12c * -0.5) +
                            (double)CONCAT44(uStack_124,local_128),
                      (double)CONCAT44(uStack_11c,iStack_120) + dVar22,&local_1b0);
        dVar22 = (*(double *)
                   (*(longlong *)(param_1[0x10] + lVar17) +
                    (longlong)*(int *)(param_1[0x10] + 8 + lVar17) * 0x10 + -8) -
                 (double)param_1[0xb]) / ((double)param_1[0xd] - (double)param_1[0xb]);
        if (1.0 <= dVar22) {
          dVar22 = 1.0;
        }
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        local_178 = (double)param_1[8];
        dStack_170 = ((double)param_1[9] - (double)param_1[7]) * dVar22 + (double)param_1[7];
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_1c0,&local_178,param_2);
        local_128 = local_1c0;
        uStack_124 = uStack_1bc;
        iStack_120 = iStack_1b8;
        uStack_11c = uStack_1b4;
        FUN_140002266(&local_1c0,L"%.2f",*(undefined8 *)(param_1[0x10] + 0x38 + lVar17));
        if (local_150 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_150 = (wchar_t *)CONCAT44(uStack_1bc,local_1c0);
        local_148._0_4_ = iStack_1b8;
        local_148._0_4_ = iStack_1b8;
        local_1d0 = local_150;
        if (iStack_1b8 == 0) {
          local_1d0 = L"";
        }
        if (local_1d0 == (wchar_t *)0x0) {
          local_1c8 = 0;
        }
        else {
          sVar16 = wcslen(local_1d0);
          local_1c8 = (int)sVar16;
        }
        FUN_147d8e4df(plVar15,&local_12c,local_18c,&local_1d0);
        uVar7 = *(undefined8 *)(param_2 + 0x2e0);
        lVar8 = param_1[0x10];
        local_1e0 = L"";
        if (local_148._0_4_ != 0) {
          local_1e0 = local_150;
        }
        if (local_1e0 == (wchar_t *)0x0) {
          local_1d8 = 0;
        }
        else {
          sVar16 = wcslen(local_1e0);
          local_1d8 = (int)sVar16;
        }
        dVar22 = 5.0;
        if ((int)param_1[0x15] != 2) {
          dVar22 = (double)*(int *)(param_2 + 0x44) * dVar2;
        }
        local_200 = (longlong *)(lVar8 + lVar17 + 0x10);
        local_1f8 = &DAT_149e1e308;
        local_208 = plVar15;
        FUN_147d8e230(uVar7,(double)((float)local_12c * -0.5) +
                            (double)CONCAT44(uStack_124,local_128),
                      (double)CONCAT44(uStack_11c,iStack_120) + dVar22,&local_1e0);
        if (local_150 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        iVar19 = (int)param_1[0x11];
      }
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x50;
    } while (lVar18 < iVar19);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5d37a FUN_147a5d37a body=42 status=ok
// SIG undefined FUN_147a5d37a(void)

void FUN_147a5d37a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x638))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a5d3a4 FUN_147a5d3a4 body=54 status=ok
// SIG undefined FUN_147a5d3a4(void)

void FUN_147a5d3a4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x390) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143477608();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a5d3da FUN_147a5d3da body=165 status=ok
// SIG undefined FUN_147a5d3da(void)

void FUN_147a5d3da(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_14084ef06(*(longlong *)(param_1 + 0x390),local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5d480 FUN_147a5d480 body=17 status=ok
// SIG undefined FUN_147a5d480(void)

void FUN_147a5d480(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar1[0x55] = param_2;
  (**(code **)(*plVar1 + 0x310))(plVar1);
  if ((~*(byte *)((longlong)plVar1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)((longlong)plVar1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_14084ef6d:
      *(byte *)((longlong)plVar1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(plVar1);
      FUN_14010586c(&DAT_14cad0140,plVar1);
      return;
    }
    if (plVar1[0x16] == 0) {
      lVar3 = FUN_1448abda6(plVar1);
      if (lVar3 == 0) {
        bVar2 = *(byte *)((longlong)plVar1 + 0x9d);
        goto LAB_14084ef6d;
      }
    }
  }
  return;
}



// FUNCTION 147a5d4c4 FUN_147a5d4c4 body=160 status=ok
// SIG undefined FUN_147a5d4c4(void)

void FUN_147a5d4c4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x7c8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5d566 FUN_147a5d566 body=160 status=ok
// SIG undefined FUN_147a5d566(void)

void FUN_147a5d566(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x7a8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5d608 FUN_147a5d608 body=160 status=ok
// SIG undefined FUN_147a5d608(void)

void FUN_147a5d608(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x7b0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5d6aa FUN_147a5d6aa body=160 status=ok
// SIG undefined FUN_147a5d6aa(void)

void FUN_147a5d6aa(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x7b8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5d74c FUN_147a5d74c body=160 status=ok
// SIG undefined FUN_147a5d74c(void)

void FUN_147a5d74c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x7c0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5d7f8 FUN_147a5d7f8 body=4406 status=ok
// SIG undefined FUN_147a5d7f8(void)

void FUN_147a5d7f8(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  plVar5 = DAT_14c966fe0;
  uVar4 = DAT_14c966fd8;
  uVar3 = DAT_14c966fd0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (DAT_14cad5c74 == '\0') {
    DAT_14cad5c74 = '\x01';
    if (DAT_14c966fe0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966fe0 + 1) = (int)DAT_14c966fe0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_58,"DefaultPawn_MoveForward",1);
    local_50 = local_58;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965140;
    uVar4 = DAT_14c965138;
    uVar3 = DAT_14c965130;
    if (DAT_14c965140 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965140 + 1) = (int)DAT_14c965140[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_60,"DefaultPawn_MoveForward",1);
    local_50 = local_60;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964e88;
    uVar4 = DAT_14c964e80;
    uVar3 = DAT_14c964e78;
    if (DAT_14c964e88 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964e88 + 1) = (int)DAT_14c964e88[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_68,"DefaultPawn_MoveForward",1);
    local_50 = local_68;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964eb8;
    uVar4 = DAT_14c964eb0;
    uVar3 = DAT_14c964ea8;
    if (DAT_14c964eb8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964eb8 + 1) = (int)DAT_14c964eb8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_70,"DefaultPawn_MoveForward",1);
    local_50 = local_70;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965798;
    uVar4 = DAT_14c965790;
    uVar3 = DAT_14c965788;
    if (DAT_14c965798 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965798 + 1) = (int)DAT_14c965798[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_78,"DefaultPawn_MoveForward",1);
    local_50 = local_78;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c966f98;
    uVar4 = DAT_14c966f90;
    uVar3 = DAT_14c966f88;
    if (DAT_14c966f98 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966f98 + 1) = (int)DAT_14c966f98[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_80,"DefaultPawn_MoveRight",1);
    local_50 = local_80;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c966f08;
    uVar4 = DAT_14c966f00;
    uVar3 = DAT_14c966ef8;
    if (DAT_14c966f08 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966f08 + 1) = (int)DAT_14c966f08[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_88,"DefaultPawn_MoveRight",1);
    local_50 = local_88;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965780;
    uVar4 = DAT_14c965778;
    uVar3 = DAT_14c965770;
    if (DAT_14c965780 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965780 + 1) = (int)DAT_14c965780[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_90,"DefaultPawn_MoveRight",1);
    local_50 = local_90;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965828;
    uVar4 = DAT_14c965820;
    uVar3 = DAT_14c965818;
    if (DAT_14c965828 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965828 + 1) = (int)DAT_14c965828[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_98,"DefaultPawn_MoveUp",1);
    local_50 = local_98;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965840;
    uVar4 = DAT_14c965838;
    uVar3 = DAT_14c965830;
    if (DAT_14c965840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965840 + 1) = (int)DAT_14c965840[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_a0,"DefaultPawn_MoveUp",1);
    local_50 = local_a0;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c9658b8;
    uVar4 = DAT_14c9658b0;
    uVar3 = DAT_14c9658a8;
    if (DAT_14c9658b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9658b8 + 1) = (int)DAT_14c9658b8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_a8,"DefaultPawn_MoveUp",1);
    local_50 = local_a8;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965458;
    uVar4 = DAT_14c965450;
    uVar3 = DAT_14c965448;
    if (DAT_14c965458 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965458 + 1) = (int)DAT_14c965458[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_b0,"DefaultPawn_MoveUp",1);
    local_50 = local_b0;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964df8;
    uVar4 = DAT_14c964df0;
    uVar3 = DAT_14c964de8;
    if (DAT_14c964df8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964df8 + 1) = (int)DAT_14c964df8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_b8,"DefaultPawn_MoveUp",1);
    local_50 = local_b8;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c966ed8;
    uVar4 = DAT_14c966ed0;
    uVar3 = DAT_14c966ec8;
    if (DAT_14c966ed8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ed8 + 1) = (int)DAT_14c966ed8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_c0,"DefaultPawn_MoveUp",1);
    local_50 = local_c0;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964ff0;
    uVar4 = DAT_14c964fe8;
    uVar3 = DAT_14c964fe0;
    if (DAT_14c964ff0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964ff0 + 1) = (int)DAT_14c964ff0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_c8,"DefaultPawn_MoveUp",1);
    local_50 = local_c8;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c965110;
    uVar4 = DAT_14c965108;
    uVar3 = DAT_14c965100;
    if (DAT_14c965110 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c965110 + 1) = (int)DAT_14c965110[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_d0,"DefaultPawn_MoveUp",1);
    local_50 = local_d0;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c9657c8;
    uVar4 = DAT_14c9657c0;
    uVar3 = DAT_14c9657b8;
    if (DAT_14c9657c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9657c8 + 1) = (int)DAT_14c9657c8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_d8,"DefaultPawn_TurnRate",1);
    local_50 = local_d8;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964e70;
    uVar4 = DAT_14c964e68;
    uVar3 = DAT_14c964e60;
    if (DAT_14c964e70 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964e70 + 1) = (int)DAT_14c964e70[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_e0,"DefaultPawn_TurnRate",1);
    local_50 = local_e0;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964ea0;
    uVar4 = DAT_14c964e98;
    uVar3 = DAT_14c964e90;
    if (DAT_14c964ea0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964ea0 + 1) = (int)DAT_14c964ea0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_e8,"DefaultPawn_TurnRate",1);
    local_50 = local_e8;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964cc0;
    uVar4 = DAT_14c964cb8;
    uVar3 = DAT_14c964cb0;
    if (DAT_14c964cc0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964cc0 + 1) = (int)DAT_14c964cc0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_f0,"DefaultPawn_Turn",1);
    local_50 = local_f0;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c9657e0;
    uVar4 = DAT_14c9657d8;
    uVar3 = DAT_14c9657d0;
    if (DAT_14c9657e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9657e0 + 1) = (int)DAT_14c9657e0[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_f8,"DefaultPawn_LookUpRate",1);
    local_50 = local_f8;
    local_48 = 0x3f800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = DAT_14c964cd8;
    uVar4 = DAT_14c964cd0;
    uVar3 = DAT_14c964cc8;
    if (DAT_14c964cd8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c964cd8 + 1) = (int)DAT_14c964cd8[1] + 1;
      UNLOCK();
    }
    FUN_1446ddc76(&local_100,"DefaultPawn_LookUp",1);
    local_50 = local_100;
    local_48 = 0xbf800000;
    local_40 = uVar3;
    local_38 = uVar4;
    local_30 = plVar5;
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
    FUN_147d9446a(&local_50);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5e930 FUN_147a5e930 body=509 status=ok
// SIG undefined FUN_147a5e930(void)

void FUN_147a5e930(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x448) & 1) != 0) {
    FUN_147a5d7f8();
    FUN_1446ddc76(&local_38,"DefaultPawn_MoveForward",1);
    local_48 = &LAB_147a5ec40;
    local_40 = 0;
    FUN_147a5eb2e(param_2,local_38,param_1,&local_48);
    FUN_1446ddc76(&local_50,"DefaultPawn_MoveRight",1);
    local_48 = &LAB_147a5ec4e;
    local_40 = 0;
    FUN_147a5eb2e(param_2,local_50,param_1,&local_48);
    FUN_1446ddc76(&local_58,"DefaultPawn_MoveUp",1);
    local_48 = &LAB_147a5ec5c;
    local_40 = 0;
    FUN_147a5eb2e(param_2,local_58,param_1,&local_48);
    FUN_1446ddc76(&local_60,"DefaultPawn_Turn",1);
    local_48 = &LAB_147a5ec6a;
    local_40 = 0;
    FUN_147a5eb2e(param_2,local_60,param_1,&local_48);
    FUN_1446ddc76(&local_68,"DefaultPawn_TurnRate",1);
    local_48 = &LAB_147a5ec78;
    local_40 = 0;
    FUN_147a5eb2e(param_2,local_68,param_1,&local_48);
    FUN_1446ddc76(&local_70,"DefaultPawn_LookUp",1);
    local_48 = &LAB_147a5ec86;
    local_40 = 0;
    FUN_147a5eb2e(param_2,local_70,param_1,&local_48);
    FUN_1446ddc76(&local_78,"DefaultPawn_LookUpRate",1);
    local_48 = &LAB_147a5ec94;
    local_40 = 0;
    FUN_147a5eb2e(param_2,local_78,param_1,&local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5eb2e FUN_147a5eb2e body=273 status=ok
// SIG undefined FUN_147a5eb2e(void)

void FUN_147a5eb2e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = *(undefined4 *)(param_4 + 1);
  local_88 = *param_4;
  local_78 = 1;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_74 = param_2;
  FUN_147a6f66c(&local_68,param_3);
  iVar1 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar1 + 1U) {
    FUN_145963e4e((longlong *)(param_1 + 0x130),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x130);
  lVar3 = (longlong)iVar1 * 0x38;
  *(undefined1 *)(lVar2 + lVar3) = local_78;
  *(undefined8 *)(lVar2 + 4 + lVar3) = local_74;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = local_68;
  *(undefined8 *)(lVar2 + 0x18 + lVar3) = uStack_60;
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(lVar2 + 0x20 + lVar3) = local_58;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined4 *)(lVar2 + 0x30 + lVar3) = local_48;
  FUN_1457dfb3e(&local_68);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5ecc4 FUN_147a5ecc4 body=503 status=ok
// SIG undefined FUN_147a5ecc4(void)

void FUN_147a5ecc4(longlong *param_1,float param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_2 != 0.0) || (NAN(param_2))) &&
     (plVar1 = (longlong *)param_1[0x78], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x680))(plVar1,&local_b8);
    dVar2 = sin(local_b8 * 0.01745329238474369);
    dVar3 = sin(dStack_b0 * 0.01745329238474369);
    dVar4 = sin(local_a8 * 0.01745329238474369);
    sin(0.0);
    dVar5 = cos(local_b8 * 0.01745329238474369);
    dVar6 = cos(dStack_b0 * 0.01745329238474369);
    dVar7 = cos(local_a8 * 0.01745329238474369);
    cos(0.0);
    local_d0 = dVar2 * dVar4 * dVar6 - dVar3 * dVar7;
    local_c8 = dVar2 * dVar4 * dVar3 + dVar6 * dVar7;
    local_c0 = -dVar4 * dVar5;
    (**(code **)(*param_1 + 0x768))(param_1,&local_d0,param_2,0);
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5eebc FUN_147a5eebc body=428 status=ok
// SIG undefined FUN_147a5eebc(void)

void FUN_147a5eebc(longlong *param_1,float param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_2 != 0.0) || (NAN(param_2))) &&
     (plVar1 = (longlong *)param_1[0x78], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x680))(plVar1,&local_a8);
    dVar2 = sin(local_a8 * 0.01745329238474369);
    dVar3 = sin(dStack_a0 * 0.01745329238474369);
    sin(local_98 * 0.01745329238474369);
    sin(0.0);
    dVar4 = cos(local_a8 * 0.01745329238474369);
    dVar5 = cos(dStack_a0 * 0.01745329238474369);
    cos(local_98 * 0.01745329238474369);
    cos(0.0);
    local_c0 = dVar5 * dVar4;
    local_b8 = dVar3 * dVar4;
    local_b0 = dVar2;
    (**(code **)(*param_1 + 0x768))(param_1,&local_c0,param_2,0);
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5f06a FUN_147a5f06a body=97 status=ok
// SIG undefined FUN_147a5f06a(void)

void FUN_147a5f06a(longlong *param_1,float param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    local_18 = DAT_14c8462d0;
    local_28 = (undefined4)DAT_14c8462c0;
    uStack_24 = DAT_14c8462c0._4_4_;
    uStack_20 = (undefined4)DAT_14c8462c8;
    uStack_1c = DAT_14c8462c8._4_4_;
    (**(code **)(*param_1 + 0x768))((undefined4)DAT_14c8462c0,&local_28,param_2,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5f0cc FUN_147a5f0cc body=71 status=ok
// SIG undefined FUN_147a5f0cc(void)

void FUN_147a5f0cc(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  
  fVar1 = *(float *)(param_1 + 0x85);
  lVar2 = FUN_1447210f0();
                    /* WARNING: Could not recover jumptable at 0x000147a5f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x780))
            (param_1,param_2 * fVar1 * *(float *)(lVar2 + 0x6f4) *
                     *(float *)((longlong)param_1 + 0x74));
  return;
}



// FUNCTION 147a5f114 FUN_147a5f114 body=71 status=ok
// SIG undefined FUN_147a5f114(void)

void FUN_147a5f114(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  
  fVar1 = *(float *)((longlong)param_1 + 0x42c);
  lVar2 = FUN_1447210f0();
                    /* WARNING: Could not recover jumptable at 0x000147a5f158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x778))
            (param_1,param_2 * fVar1 * *(float *)(lVar2 + 0x6f4) *
                     *(float *)((longlong)param_1 + 0x74));
  return;
}



// FUNCTION 147a5f188 FUN_147a5f188 body=509 status=ok
// SIG undefined FUN_147a5f188(void)

void FUN_147a5f188(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_147bd484a();
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x9a0) << 5,
             (longlong)*(int *)(param_1 + 0x9a4) << 5);
  iVar1 = *(int *)(param_1 + 0x9a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x998);
    lVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 8 + lVar3),
                 (longlong)*(int *)(lVar2 + 0xc + lVar3));
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x9f0) << 3,
             (longlong)*(int *)(param_1 + 0x9f4) << 3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xa00) << 4,
             (longlong)*(int *)(param_1 + 0xa04) << 4);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xa50) * 2,(longlong)*(int *)(param_1 + 0xa54) * 2
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xa70) * 0x28,
             (longlong)*(int *)(param_1 + 0xa74) * 0x28);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xaa0) << 4,
             (longlong)*(int *)(param_1 + 0xaa4) << 4);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xab0) << 4,
             (longlong)*(int *)(param_1 + 0xab4) << 4);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xad0) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xad4) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0xaf0) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xb10) * 0x28,
             (longlong)*(int *)(param_1 + 0xb14) * 0x28);
  iVar1 = *(int *)(param_1 + 0xb10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb08);
    lVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 8 + lVar3),
                 (longlong)*(int *)(lVar2 + 0xc + lVar3));
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  FUN_147cdf0e0(param_1 + 0xb40,param_2);
  return;
}



// FUNCTION 147a5f386 FUN_147a5f386 body=138 status=ok
// SIG undefined FUN_147a5f386(void)

void FUN_147a5f386(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145ad511d(*(undefined8 *)(param_1 + 0x9f8),*(undefined4 *)(param_1 + 0xa00));
  *(undefined4 *)(param_1 + 0xa00) = 0;
  if (*(int *)(param_1 + 0xa04) != 0) {
    FUN_147a6fd7a(param_1 + 0x9f8);
  }
  *(undefined8 *)(param_1 + 0xa08) = 0;
  plVar3 = *(longlong **)(param_1 + 0xa10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147a5f3f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147a5f410 FUN_147a5f410 body=181 status=ok
// SIG undefined FUN_147a5f410(void)

bool FUN_147a5f410(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0xa08);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
    bVar5 = true;
    if (local_38 == *param_2) goto LAB_147a5f454;
  }
  iVar1 = *(int *)(param_1 + 0xa00);
  if ((longlong)iVar1 == 0) {
    bVar5 = false;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x9f8);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
      bVar5 = local_38 == *param_2;
      if (bVar5) break;
      bVar6 = (longlong)iVar1 * 0x10 + -0x10 != lVar4;
      lVar4 = lVar4 + 0x10;
    } while (bVar6);
  }
LAB_147a5f454:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 147a5f4c6 FUN_147a5f4c6 body=1165 status=ok
// SIG undefined FUN_147a5f4c6(void)

undefined4
FUN_147a5f4c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_6;
  local_68 = param_5;
  uVar9 = FUN_143595812(param_1,param_2,param_3,param_4);
  if ((char)uVar9 != '\0') {
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined1 *)(param_1 + 0x9a8) = 0;
    *(undefined1 *)(param_1 + 0x9aa) = 0;
    *(undefined8 *)(param_1 + 0xa38) = 0;
    *(undefined4 *)(param_1 + 0xa40) = 0;
    *(undefined8 *)(param_1 + 0xa58) = 0xbf800000bf800000;
    *(undefined8 *)(param_1 + 0xa60) = 0;
    *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) & 0xf0 | 4;
    *(undefined4 *)(param_1 + 0xafc) = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20,L"skipreplayrollback");
    if (cVar7 != '\0') {
      *(undefined1 *)(param_1 + 0x15a0) = 1;
    }
    puVar6 = DAT_14cad5f20;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar14 + 0xc60) == 0x40000002) {
      *(undefined4 *)(param_1 + 0xb20) = *DAT_14cad5f20;
      uVar11 = 0;
      lVar14 = DAT_14cad5ff8;
    }
    else {
      bVar8 = FUN_144a61b4f();
      iVar10 = *(int *)(lVar14 + 0xc60);
      *(undefined4 *)(param_1 + 0xb20) = puVar6[bVar8 ^ 1];
      lVar14 = DAT_14cad5ff8;
      if (iVar10 == 0x40000002) {
        uVar11 = 0;
      }
      else {
        bVar8 = FUN_144a61b4f();
        uVar11 = (ulonglong)(bVar8 ^ 1);
      }
    }
    *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(lVar14 + uVar11 * 4);
    if ((*(float *)(param_1 + 0xd4) == 0.0) && (!NAN(*(float *)(param_1 + 0xd4)))) {
      *(undefined4 *)(param_1 + 0xd4) = 0x40a00000;
    }
    FUN_147a5f954(param_1);
    cVar7 = FUN_14045d4b6(param_4,L"MaxDesiredReplayRecordTimeMS");
    if (cVar7 != '\0') {
      pwVar12 = (wchar_t *)FUN_14045d4ce(param_4,L"MaxDesiredReplayRecordTimeMS=",0);
      dVar15 = _wtof(pwVar12);
      *(float *)(param_1 + 0xa58) = (float)dVar15;
    }
    cVar7 = FUN_14045d4b6(param_4,L"CheckpointSaveMaxMSPerFrame");
    if (cVar7 != '\0') {
      pwVar12 = (wchar_t *)FUN_14045d4ce(param_4,L"CheckpointSaveMaxMSPerFrame=",0);
      dVar15 = _wtof(pwVar12);
      *(float *)(param_1 + 0xa5c) = (float)dVar15;
    }
    cVar7 = FUN_14045d4b6(param_4,L"ActorPrioritizationEnabled");
    if (cVar7 != '\0') {
      pwVar12 = (wchar_t *)FUN_14045d4ce(param_4,L"ActorPrioritizationEnabled=",0);
      iVar10 = _wtoi(pwVar12);
      *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) & 0xf7 | (iVar10 != 0) << 3;
    }
    plVar3 = (longlong *)(param_1 + 0xb40);
    FUN_147cdcb6e(plVar3,&local_40,param_4);
    plVar1 = local_38;
    if ((undefined8 *)(param_1 + 0x8f8) != &local_40) {
      *(undefined8 *)(param_1 + 0x8f8) = local_40;
      local_40 = 0;
      plVar4 = *(longlong **)(param_1 + 0x900);
      if (local_38 != plVar4) {
        local_38 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x900) = plVar1;
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
    }
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    local_50 = *(undefined8 *)(param_1 + 0x188);
    local_48 = *(longlong *)(param_1 + 400);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    FUN_147cdff02(plVar3,&local_50);
    *(undefined4 *)(param_1 + 0xcc4) = *(undefined4 *)(param_1 + 0xa5c);
    if (*(int *)(param_1 + 0xb48) != 3) {
      FUN_1446efa72(plVar3,0,3,0x10);
      *(undefined4 *)(param_1 + 0xb48) = 3;
    }
    puVar5 = (undefined8 *)*plVar3;
    *puVar5 = &PTR_LAB_14a8bc5c0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    puVar5[2] = lVar13;
    *puVar5 = &PTR_FUN_14a8bc550;
    puVar5[3] = 0;
    FUN_14485c47a(puVar5 + 3,param_1);
    puVar5[4] = FUN_147a5f9ca;
    *(undefined4 *)(puVar5 + 5) = 0;
    if (*(int *)(param_1 + 0xb58) != 3) {
      FUN_1446efa72((longlong *)(param_1 + 0xb50),0,3,0x10);
      *(undefined4 *)(param_1 + 0xb58) = 3;
    }
    puVar5 = *(undefined8 **)(param_1 + 0xb50);
    *puVar5 = &PTR_LAB_14a8bc5c0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    puVar5[2] = lVar13;
    *puVar5 = &PTR_FUN_14a8bc550;
    puVar5[3] = 0;
    FUN_14485c47a(puVar5 + 3,param_1);
    puVar5[4] = FUN_147a5fa3c;
    *(undefined4 *)(puVar5 + 5) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a5f954 FUN_147a5f954 body=118 status=ok
// SIG undefined FUN_147a5f954(void)

void FUN_147a5f954(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xca8) = 0;
  *(undefined8 *)(param_1 + 0xaf8) = 0;
  *(undefined1 *)(param_1 + 0x9a8) = 0;
  *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) & 0xc9;
  *(undefined2 *)(param_1 + 0x9a9) = 0;
  FUN_145ad50ba(*(undefined8 *)(param_1 + 0x998),*(undefined4 *)(param_1 + 0x9a0));
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  if (*(int *)(param_1 + 0x9a4) != 0) {
    FUN_147a7015a(param_1 + 0x998);
  }
  FUN_147cdfbf4(param_1 + 0xb40);
  return;
}



// FUNCTION 147a5f9ca FUN_147a5f9ca body=113 status=ok
// SIG undefined FUN_147a5f9ca(void)

void FUN_147a5f9ca(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x100) < 1) || (**(longlong **)(param_1 + 0xf8) == 0)) {
    FUN_1434bc188(param_1);
    return;
  }
  iVar1 = *(int *)(**(longlong **)(param_1 + 0xf8) + 0x134);
  FUN_1434bc188(param_1);
  if ((iVar1 != 1) && (*(char *)(param_1 + 0x9e0) == '\0')) {
    FUN_147a6351e(param_1 + 0x9b0,param_2);
    return;
  }
  return;
}



// FUNCTION 147a5fa3c FUN_147a5fa3c body=147 status=ok
// SIG undefined FUN_147a5fa3c(void)

void FUN_147a5fa3c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(char *)(param_1 + 0xcbe) == '\0') {
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) != 1;
    }
  }
  FUN_147a75352(*(undefined8 *)(param_1 + 0x1a8));
  FUN_147a75410(*(undefined8 *)(param_1 + 0x1a8),param_2);
  FUN_1434bc188(param_1);
  if (((bVar2) && (*(longlong *)(param_1 + 0x1a8) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + 0x1f0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147a5faa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x340))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 147a5fad0 FUN_147a5fad0 body=39 status=ok
// SIG undefined FUN_147a5fad0(void)

undefined8 FUN_147a5fad0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x100) < 1) || (lVar1 = **(longlong **)(param_1 + 0xf8), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x134) != 1);
  }
  return uVar2;
}



// FUNCTION 147a5faf8 FUN_147a5faf8 body=40 status=ok
// SIG undefined FUN_147a5faf8(void)

bool FUN_147a5faf8(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(char *)(param_1 + 0xcbe) == '\0') {
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) != 1;
    }
  }
  return bVar1;
}



// FUNCTION 147a5fb20 FUN_147a5fb20 body=32 status=ok
// SIG undefined FUN_147a5fb20(void)

undefined8 FUN_147a5fb20(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147a5fb40 FUN_147a5fb40 body=1269 status=ok
// SIG undefined FUN_147a5fb40(void)

ulonglong FUN_147a5fb40(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  wchar_t *_Str;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d0;
  undefined4 uStack_c8;
  longlong *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 0x2b2) = 0;
  if ((param_1[0x35] != 0) && (*(longlong *)(param_1[0x35] + 0x1f0) != 0)) {
    local_f8 = local_f8 & 0xffffffffffffff00;
    local_f0 = param_4;
    cVar5 = (**(code **)(*param_1 + 0x2b0))(param_1,1,param_2,param_3);
    if (cVar5 != '\0') {
      FUN_147be7a78(param_1[0x37],2);
      *(bool *)(param_1[0x37] + 0x151) = 0 < *DAT_14cad5dd8;
      uVar8 = FUN_145b3bbc8();
      local_e8 = 0;
      uStack_e0 = 0;
      local_f0 = local_f0 & 0xffffffffffffff00;
      local_f8 = 0;
      plVar9 = (longlong *)FUN_147a6009f(DAT_14c951640,uVar8,0,0);
      if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar9);
      }
      param_1[0x1e] = (longlong)plVar9;
      local_f0 = local_f0 & 0xffffffff00000000;
      local_f8 = CONCAT44(local_f8._4_4_,1000000);
      (**(code **)(*plVar9 + 0x350))(plVar9,param_1,2,param_3);
      _Str = (wchar_t *)FUN_14045d4ce(param_3,L"LevelPrefixOverride=",0);
      if (_Str == (wchar_t *)0x0) {
        iVar6 = *(int *)((longlong)param_1 + 0x86c);
      }
      else {
        iVar6 = _wtoi(_Str);
        *(int *)((longlong)param_1 + 0x86c) = iVar6;
      }
      lVar10 = FUN_146125268(param_1[0x35],iVar6 != -1);
      if (lVar10 != 0) {
        if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        *(longlong **)(lVar10 + 0x18) = param_1;
      }
      *(byte *)((longlong)param_1 + 0x9ab) = *(byte *)((longlong)param_1 + 0x9ab) | 0x24;
      FUN_144a787a6(param_1 + 0x18d,param_3 + 0x28);
      local_58 = 0;
      uStack_50 = 0;
      FUN_14375df50(DAT_14cb0d2b0,&local_b8,param_1[0x35]);
      if (-1 < (longlong)(int)uStack_b0) {
        uVar11 = uStack_b0 & 0xffffffff;
        uVar14 = (longlong)(int)uStack_b0;
        if ((int)uStack_b0 < (int)local_b8[1]) {
          do {
            if (*(longlong *)(*local_b8 + uVar14 * 8) != 0) {
              uVar11 = uVar14 & 0xffffffff;
              break;
            }
            uVar11 = uVar14 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uVar14 + 1);
            uVar14 = uVar11;
          } while ((int)uVar11 < (int)local_b8[1]);
          if ((int)uVar11 < 0) goto LAB_147a5fe46;
        }
        plVar9 = local_b8;
        while (uVar14 = uStack_50, (int)uVar11 < (int)plVar9[1]) {
          lVar10 = *(longlong *)(*plVar9 + (uVar11 & 0xffffffff) * 8);
          uVar12 = uVar11;
          if (lVar10 != 0) {
            uVar2 = *(undefined4 *)(lVar10 + 0xe0);
            lVar10 = (longlong)(int)uStack_50;
            uVar7 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
            if (uStack_50._4_4_ < uVar7) {
              FUN_1446f48e2(&local_58,uVar14 & 0xffffffff);
            }
            *(undefined4 *)(local_58 + lVar10 * 4) = uVar2;
            uVar11 = uStack_b0 & 0xffffffff;
            uVar12 = uVar11;
            plVar9 = local_b8;
          }
          do {
            iVar6 = (int)uVar11;
            uVar7 = iVar6 + 1;
            uVar11 = (ulonglong)uVar7;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
            if ((int)uVar12 < -1) goto LAB_147a5fe46;
          } while (((int)uVar7 < (int)plVar9[1]) &&
                  (*(longlong *)(*plVar9 + (ulonglong)uVar7 * 8) == 0));
          if (iVar6 < -1) break;
        }
      }
LAB_147a5fe46:
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_a8 = 0;
      lStack_a0 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_68 = 0;
      FUN_144a787a6(&local_b8,param_3 + 0x28);
      FUN_141641396(param_1 + 0x180,&local_d0,0);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_88 = local_58;
      uStack_80 = uStack_50;
      local_58 = 0;
      uStack_50 = 0;
      local_60 = 0;
      FUN_146815e66(&local_d0);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_d0;
      plVar9 = (longlong *)param_1[0x11f];
      plVar3 = (longlong *)param_1[0x120];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_d0 = (undefined8 *)0x0;
      uStack_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar4 = local_d0;
      uStack_c8 = 3;
      *local_d0 = &PTR_LAB_14a8bcf80;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_d0[2] = lVar13;
      *local_d0 = &PTR_FUN_14a8bc630;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,param_1);
      puVar4[4] = FUN_1434bc2a4;
      *(undefined4 *)(puVar4 + 5) = 0;
      (**(code **)(*plVar9 + 8))(plVar9,&local_b8,&local_d0);
      FUN_1449db362(&local_d0);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar3 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      uVar14 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)((longlong)param_1 + 0x9ab))
               & 0xffffffffffffff04;
      FUN_147835db2(&local_b8);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar14 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 >> 2);
      goto LAB_147a5fcc1;
    }
  }
  FUN_147a60036(&local_b8,5);
  FUN_146efbfa6(param_1 + 0x27c,&local_b8);
  if (lStack_90 != 0) {
    (**(code **)(lStack_90 + -0x10))(lStack_90 + -0x10);
  }
  if (lStack_a0 != 0) {
    FUN_1400020a8();
  }
  uVar14 = 0;
LAB_147a5fcc1:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a60036 FUN_147a60036 body=105 status=ok
// SIG undefined FUN_147a60036(void)

ulonglong * FUN_147a60036(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_147be3f33();
  *param_1 = (ulonglong)param_2;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,uVar1);
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((param_2 != 0) && (param_2 != 0xb)) {
    uVar2 = FUN_147be3f6a(param_2);
    FUN_14020fad6(param_1 + 3,uVar2);
  }
  return param_1;
}



// FUNCTION 147a6009f FUN_147a6009f body=236 status=ok
// SIG undefined FUN_147a6009f(void)

undefined8
FUN_147a6009f(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6018c FUN_147a6018c body=248 status=ok
// SIG undefined FUN_147a6018c(void)

undefined8 FUN_147a6018c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a8bc6a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a60286 FUN_147a60286 body=165 status=ok
// SIG undefined FUN_147a60286(void)

void FUN_147a60286(longlong param_1,longlong param_2)

{
  if ((param_2 == 0) || (*(longlong *)(param_1 + 0x1a8) != param_2)) {
    return;
  }
  if (*(char *)(param_1 + 0xcbf) == '\x01') {
    if ((*(char *)(param_1 + 0xcbe) == '\0') &&
       ((*(longlong *)(param_1 + 0xf0) == 0 ||
        (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) == 1)))) {
      FUN_147a60b6e(param_1 + 0xb40);
    }
    else {
      FUN_147cdea6e(param_1 + 0xb40);
    }
  }
  if ((*(char *)(param_1 + 0xcbe) == '\0') &&
     ((*(longlong *)(param_1 + 0xf0) == 0 || (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) == 1))
     )) {
    FUN_147cdeb04(param_1 + 0xb40);
    return;
  }
  FUN_147cdeb10(param_1 + 0xb40);
  return;
}



// FUNCTION 147a6032c FUN_147a6032c body=95 status=ok
// SIG undefined FUN_147a6032c(void)

undefined8 * FUN_147a6032c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ad578d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a706e0(param_1,iVar1);
      FUN_147a70753(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a6038c FUN_147a6038c body=702 status=ok
// SIG undefined FUN_147a6038c(void)

void FUN_147a6038c(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [36];
  uint local_74;
  longlong local_70;
  longlong *local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1462469b6(*(undefined8 *)(param_1 + 0x1a8),&local_68);
  if (-1 < (int)local_60) {
    do {
      if ((int)local_68[1] <= (int)local_60) break;
      uVar7 = FUN_14479d2ce((ulonglong)local_60 * 8 + *local_68);
      uVar5 = uStack_50;
      lVar11 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_14095e928(&local_58,uVar5 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar11 * 8) = uVar7;
      uVar6 = local_60 + 1;
      bVar3 = -2 < (int)local_60;
      local_60 = uVar6;
    } while (bVar3);
  }
  local_74 = param_2;
  if (1 < *(int *)(param_1 + 0xa90)) {
    FUN_14164d430(param_1,0);
  }
  lVar11 = local_58;
  lVar10 = (longlong)(int)uStack_50;
  if (lVar10 != 0) {
    lVar9 = 0;
    do {
      lVar1 = *(longlong *)(lVar11 + lVar9);
      if (lVar1 != 0) {
        FUN_140aeefbc(lVar1,1,1);
        lVar8 = FUN_144a75eb4();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
          local_70 = 0;
        }
        else {
          local_70 = lVar1;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
        }
        local_68 = &local_70;
        FUN_14062a896(param_1 + 0xa88,&local_68);
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 0xa90) = 0;
  if (*(int *)(param_1 + 0xa94) != 0) {
    FUN_147a70b24(param_1 + 0xa88,0);
  }
  uVar6 = local_74;
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  if (((int)local_74 < 0) || (*(int *)(param_1 + 0xd58) <= (int)local_74)) {
    *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 0x10;
    plVar2 = *(longlong **)(param_1 + 0xc78);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    plVar4 = local_68;
    local_60 = 3;
    *local_68 = (longlong)&PTR_LAB_14a8bc780;
    *(uint *)(local_68 + 1) = uVar6;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_68[2] = lVar10;
    *local_68 = (longlong)&PTR_FUN_14a8bc710;
    local_68[3] = 0;
    FUN_14485c47a(local_68 + 3,param_1);
    plVar4[4] = (longlong)FUN_1434c1ea4;
    *(undefined4 *)(plVar4 + 5) = 0;
    (**(code **)(*plVar2 + 0xf0))(plVar2,&local_68);
    FUN_1449db362(&local_68);
  }
  else {
    FUN_146262238(*(undefined8 *)(param_1 + 0x1a8),
                  (ulonglong)local_74 * 0x18 + *(longlong *)(param_1 + 0xd50),1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a6064b FUN_147a6064b body=148 status=ok
// SIG undefined FUN_147a6064b(void)

undefined8 FUN_147a6064b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b3bcb2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a606e0 FUN_147a606e0 body=430 status=ok
// SIG undefined FUN_147a606e0(void)

undefined8
FUN_147a606e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             ulonglong param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  ulonglong local_50;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x2b2) = 1;
  local_50 = param_5;
  local_58 = CONCAT31(local_58._1_3_,param_4);
  uVar5 = 0;
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,0,param_2,param_3);
  if (cVar1 != '\0') {
    if ((*(longlong *)(param_1[0x35] + 0x30) == 0) ||
       (*(longlong *)(*(longlong *)(param_1[0x35] + 0x30) + 0x2b0) == 0)) {
      FUN_14020fad6(param_5,L"No WorldSettings!!");
      uVar5 = 0;
    }
    else {
      plVar2 = (longlong *)FUN_147a6088f(DAT_14c951640);
      local_50 = local_50 & 0xffffffff00000000;
      local_58 = 1000000;
      (**(code **)(*plVar2 + 0x350))(plVar2,param_1,3,param_3);
      FUN_14359e342(param_1,plVar2);
      lVar3 = FUN_144a79778(param_1[0x35]);
      FUN_14607446a(plVar2,*(undefined8 *)(lVar3 + 0x18));
      FUN_1400021e4(param_1 + 0x40,&local_40);
      puVar4 = (undefined1 *)FUN_14001cc68(0x50,0x10);
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)(puVar4 + 0x28) = 0;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      *(undefined8 *)(puVar4 + 0x38) = 0;
      *(longlong *)(puVar4 + 0x40) = local_40;
      local_40 = 0;
      *(undefined4 *)(puVar4 + 0x48) = (undefined4)local_38;
      *(undefined4 *)(puVar4 + 0x4c) = local_38._4_4_;
      local_38 = 0;
      FUN_147a683ee(puVar4);
      lVar3 = param_1[0x165];
      param_1[0x165] = (longlong)puVar4;
      if (lVar3 != 0) {
        FUN_147a6fbda(lVar3);
        FUN_1400020a8(lVar3);
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      FUN_147cdd1f0(param_1 + 0x168,plVar2);
      FUN_147a60924(param_1,plVar2);
      uVar5 = 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6088f FUN_147a6088f body=148 status=ok
// SIG undefined FUN_147a6088f(void)

undefined8 FUN_147a6088f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b3bbc8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a60924 FUN_147a60924 body=146 status=ok
// SIG undefined FUN_147a60924(void)

void FUN_147a60924(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_143685fee(param_1 + 0xb40);
  *(longlong *)(param_1 + 0x8f0) = lVar2;
  if (lVar2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
    iVar1 = *(int *)(param_1 + 0xa90);
    *(uint *)(param_1 + 0xa90) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xa94) < iVar1 + 1U) {
      FUN_14572fcec((longlong *)(param_1 + 0xa88),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xa88) + (longlong)iVar1 * 8) = lVar2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147a609b6 FUN_147a609b6 body=438 status=ok
// SIG undefined FUN_147a609b6(void)

void FUN_147a609b6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = local_70;
  if ((((param_2 != 0) && ((*(byte *)(param_2 + 0x242) & 1) == 0)) &&
      (*(char *)(param_1 + 0xcbf) == '\x01')) &&
     ((*(char *)(param_1 + 0xcbe) != '\0' ||
      ((*(longlong *)(param_1 + 0xf0) != 0 && (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x134) != 1)
       ))))) {
    lVar3 = FUN_144a79778(param_2);
    lVar3 = *(longlong *)(lVar3 + 0x18);
    local_88 = (longlong *)(param_1 + 0x928);
    local_40 = param_1 + 0x938;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x950) != 0) {
      FUN_1449c0562(&local_48);
    }
    local_70 = local_38;
    uVar2 = local_70;
    local_68 = local_30;
    local_64 = local_2c;
    local_80 = local_48;
    local_78 = local_40;
    local_50 = 0;
    local_70._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_60 = local_88;
    local_58 = local_88;
    if (local_70._4_4_ < *(int *)(local_40 + 0x18)) {
      iVar1 = local_70._4_4_;
      local_70 = uVar2;
      do {
        if (*(longlong *)(*local_88 + 0x68 + (longlong)iVar1 * 0xe8) == lVar3) {
          FUN_147a709fa(local_60);
          local_50 = CONCAT11(local_50._1_1_,1);
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar1 = local_70._4_4_;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
      uVar2 = local_70;
      if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
        FUN_147a707d0(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
        uVar2 = local_70;
      }
    }
  }
  local_70 = uVar2;
  FUN_14359a1e4(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a60b6e FUN_147a60b6e body=150 status=ok
// SIG undefined FUN_147a60b6e(void)

void FUN_147a60b6e(longlong param_1)

{
  FUN_145ad57f1(*(undefined8 *)(param_1 + 0x728),*(undefined4 *)(param_1 + 0x730));
  *(undefined4 *)(param_1 + 0x730) = 0;
  if (*(int *)(param_1 + 0x734) != 0) {
    FUN_147a67780(param_1 + 0x728,0);
  }
  FUN_14062e8ba(param_1 + 0x738,0);
  *(undefined4 *)(param_1 + 0x830) = 0;
  if (*(int *)(param_1 + 0x834) != 0) {
    FUN_14481578e(param_1 + 0x828,0);
  }
  FUN_147a67712(param_1 + 0x840,0);
  *(undefined4 *)(param_1 + 0x838) = 0;
  FUN_147a67b14(param_1 + 0x788);
  return;
}



// FUNCTION 147a60c04 FUN_147a60c04 body=373 status=ok
// SIG undefined FUN_147a60c04(void)

void FUN_147a60c04(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = local_78;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar6 = FUN_147a489fa();
    FUN_1434bca02(lVar6);
    plVar1 = (longlong *)(param_1 + 0xa8);
    lVar2 = param_1 + 0xb8;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0xd0) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(param_1 + 0xd0);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar9) || (uStack_60 != lVar2)) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *(longlong *)(*local_90 + 8 + (longlong)iVar5 * 0x20);
        lVar7 = *(longlong *)(lVar6 + 0x48);
        if (lVar7 == 0) {
          lVar7 = FUN_14479d2ce(lVar6 + 0xd8);
        }
        lVar8 = *(longlong *)(lVar3 + 0x48);
        if (lVar8 == 0) {
          lVar8 = FUN_14479d2ce(lVar3 + 0xd8);
        }
        if (lVar7 != lVar8) {
          FUN_1434bca02(lVar3);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar9));
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a60d7a FUN_147a60d7a body=218 status=ok
// SIG undefined FUN_147a60d7a(void)

undefined8 FUN_147a60d7a(longlong param_1)

{
  longlong *plVar1;
  
  if (0 < *(int *)(param_1 + 0x100)) {
    plVar1 = *(longlong **)(param_1 + 0xf8);
    if (((*plVar1 != 0) && (*(int *)(*plVar1 + 0x134) != 1)) &&
       (*(char *)(param_1 + 0xcc2) == '\x01')) {
      *(int *)(param_1 + 0xca0) = *(int *)(param_1 + 0xca0) + 1;
      *(undefined1 *)(param_1 + 0xcc2) = 0;
      if (*(longlong *)(param_1 + 0x8f0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x8f0) + 0x430) = 0;
        FUN_1412f3774(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x8f0),1,1);
        *(undefined4 *)(param_1 + 0xa90) = 0;
        if (*(int *)(param_1 + 0xa94) != 0) {
          FUN_147a70b24(param_1 + 0xa88,0);
        }
        *(undefined8 *)(param_1 + 0x8f0) = 0;
        plVar1 = *(longlong **)(param_1 + 0xf8);
      }
      FUN_147a60924(param_1,*plVar1);
      *(double *)(param_1 + 0xcb0) = (double)-*DAT_14cad6ee0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147a60e8a FUN_147a60e8a body=124 status=ok
// SIG undefined FUN_147a60e8a(void)

undefined8 FUN_147a60e8a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x538))();
    lVar1 = DAT_14cad6e68;
    if (cVar2 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar3 ^ 1);
      }
      if ((*(int *)(lVar1 + uVar4 * 4) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
        uVar5 = FUN_144b2c478();
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 147a60f06 FUN_147a60f06 body=57 status=ok
// SIG undefined FUN_147a60f06(void)

void FUN_147a60f06(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_147a60e8a();
  if (cVar1 != '\0') {
    return;
  }
  FUN_1434bca8a(param_1,param_2);
  return;
}



// FUNCTION 147a60f40 FUN_147a60f40 body=217 status=ok
// SIG undefined FUN_147a60f40(void)

void FUN_147a60f40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14048c20a();
  if (*(char *)(param_1 + 0x9e0) == '\x01') {
    bVar3 = 1;
    if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + 0x1f0), plVar1 != (longlong *)0x0))
    {
      FUN_147a60036(local_50,*(undefined4 *)(param_1 + 0x9b0));
      (**(code **)(*plVar1 + 0x350))(plVar1,local_50);
      if (local_28 != 0) {
        (**(code **)(local_28 + -0x10))(local_28 + -0x10);
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      bVar3 = *(byte *)(param_1 + 0x9e0);
    }
    if ((bVar3 & 1) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x9d8);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
      }
      if (*(longlong *)(param_1 + 0x9c8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x9e0) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a6101a FUN_147a6101a body=54 status=ok
// SIG undefined FUN_147a6101a(void)

void FUN_147a6101a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_147a60e8a();
  if (cVar1 != '\0') {
    FUN_1434bca8a(param_1,param_2);
    *(undefined1 *)(param_1 + 0x308) = 0;
  }
  return;
}



// FUNCTION 147a61066 FUN_147a61066 body=84 status=ok
// SIG undefined FUN_147a61066(void)

undefined1 FUN_147a61066(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14cad5d60;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x9a8);
  }
  return uVar3;
}



// FUNCTION 147a610ba FUN_147a610ba body=1715 status=ok
// SIG undefined FUN_147a610ba(void)

void FUN_147a610ba(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  int *piVar18;
  int *piVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_3a8 [36];
  int local_384;
  longlong local_380;
  longlong local_378;
  ulonglong local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  *(undefined4 *)(param_3 + 1) = 0;
  local_380 = param_1;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_147a6fb7a(param_3,0);
  }
  lVar17 = DAT_14cad5f98;
  local_370 = (ulonglong)*(uint *)(param_2 + 1);
  local_378 = *param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar20 = 0;
  }
  else {
    bVar7 = FUN_144a61b4f();
    uVar20 = (ulonglong)(bVar7 ^ 1);
  }
  if (0 < (int)local_370) {
    iVar23 = *(int *)(lVar17 + uVar20 * 4);
    local_360 = local_380 + 0xb40;
    lVar25 = -local_370;
    lVar17 = local_380;
    uVar20 = local_370;
    lVar22 = local_378;
    iVar12 = 0;
    local_384 = iVar23;
    local_368 = lVar25;
    do {
      lVar26 = (longlong)iVar12;
      lVar3 = *(longlong *)(lVar22 + 0x20 + lVar26 * 0x28);
      if (((iVar23 == 0) || (*(longlong *)(lVar17 + 0x1a8) == 0)) ||
         (*(longlong *)(*(longlong *)(lVar17 + 0x1a8) + 0x30) != lVar3)) {
        uVar14 = *(undefined4 *)(lVar22 + lVar26 * 0x28);
      }
      else {
        uVar14 = 0x7fffffff;
      }
      iVar13 = 0;
      if (lVar3 != 0) {
        FUN_144a7b8cc();
        lVar17 = FUN_147a6176e(local_360);
        iVar13 = *(int *)(lVar17 + 0x10) + 1;
        lVar17 = local_380;
        uVar20 = local_370;
        lVar22 = local_378;
        lVar25 = local_368;
        iVar23 = local_384;
      }
      iVar21 = iVar12;
      if (iVar12 < (int)uVar20) {
        plVar8 = (longlong *)(lVar22 + lVar26 * 0x28 + 0x20);
        lVar9 = 0;
        do {
          if (*plVar8 != lVar3) {
            iVar21 = iVar12 - (int)lVar9;
            break;
          }
          lVar9 = lVar9 + -1;
          plVar8 = plVar8 + 5;
          iVar21 = (int)uVar20;
        } while (lVar26 + lVar25 != lVar9);
      }
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_147a70b84(param_3,iVar2);
        lVar17 = local_380;
        uVar20 = local_370;
        lVar22 = local_378;
        lVar25 = local_368;
        iVar23 = local_384;
      }
      lVar3 = *param_3;
      lVar26 = (longlong)iVar2 * 0x10;
      *(undefined4 *)(lVar3 + lVar26) = uVar14;
      *(int *)(lVar3 + 4 + lVar26) = iVar12;
      *(int *)(lVar3 + 8 + lVar26) = iVar21 - iVar12;
      *(int *)(lVar3 + 0xc + lVar26) = iVar13;
      iVar12 = iVar21;
    } while (iVar21 < (int)uVar20);
  }
  iVar23 = (int)param_3[1];
  if (1 < (longlong)iVar23) {
    lVar17 = *param_3;
    memset(local_348,0,0x2f0);
    local_350 = (longlong)iVar23 * 0x10 + lVar17 + -0x10;
    local_358 = lVar17;
    fVar28 = logf((float)iVar23);
    local_348[0] = (int)(longlong)(fVar28 + fVar28);
    plVar8 = &local_358;
    do {
      piVar11 = (int *)*plVar8;
      piVar18 = (int *)plVar8[1];
      iVar23 = (int)plVar8[2];
      iVar12 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar11) >> 4);
      uVar24 = iVar12 + 1;
      if (iVar23 != 0) {
LAB_147a6132b:
        if (8 < (int)uVar24) {
          uVar4 = *(undefined8 *)(piVar11 + (ulonglong)(uVar24 >> 1) * 4);
          uVar5 = *(undefined8 *)(piVar11 + (ulonglong)(uVar24 >> 1) * 4 + 2);
          uVar6 = *(undefined8 *)(piVar11 + 2);
          *(undefined8 *)(piVar11 + (ulonglong)(uVar24 >> 1) * 4) = *(undefined8 *)piVar11;
          *(undefined8 *)(piVar11 + (ulonglong)(uVar24 >> 1) * 4 + 2) = uVar6;
          *(undefined8 *)piVar11 = uVar4;
          *(undefined8 *)(piVar11 + 2) = uVar5;
          piVar10 = piVar11;
          piVar19 = piVar18 + 4;
          do {
            piVar10 = piVar10 + 4;
            if (piVar10 <= piVar18) {
              do {
                if ((*piVar10 < *piVar11) || ((*piVar10 == *piVar11 && (piVar11[3] < piVar10[3]))))
                break;
                piVar10 = piVar10 + 4;
              } while (piVar10 <= piVar18);
            }
            piVar16 = piVar19 + -4;
            if (piVar11 < piVar16) {
              do {
                piVar15 = piVar16;
                piVar16 = piVar15;
                if (*piVar11 < piVar19[-4]) break;
                if ((*piVar11 == piVar19[-4]) && (piVar15[3] < piVar11[3])) {
                  piVar19 = piVar15 + 4;
                  break;
                }
                piVar16 = piVar15 + -4;
                piVar19 = piVar15;
              } while (piVar11 < piVar16);
            }
            if (piVar16 < piVar10) goto LAB_147a613ee;
            uVar4 = *(undefined8 *)piVar10;
            uVar5 = *(undefined8 *)(piVar10 + 2);
            uVar6 = *(undefined8 *)(piVar16 + 2);
            *(undefined8 *)piVar10 = *(undefined8 *)piVar16;
            *(undefined8 *)(piVar10 + 2) = uVar6;
            *(undefined8 *)piVar16 = uVar4;
            *(undefined8 *)(piVar16 + 2) = uVar5;
            piVar19 = piVar16;
          } while( true );
        }
        for (; piVar19 = piVar11, piVar10 = piVar11, piVar11 < piVar18; piVar18 = piVar18 + -4) {
          while (piVar10 = piVar10 + 4, piVar10 <= piVar18) {
            if ((*piVar10 < *piVar19) || ((*piVar10 == *piVar19 && (piVar19[3] < piVar10[3])))) {
              piVar19 = piVar10;
            }
          }
          local_58 = *(undefined8 *)piVar19;
          uStack_50 = *(undefined8 *)(piVar19 + 2);
          uVar5 = local_58;
          uVar6 = uStack_50;
          uVar4 = *(undefined8 *)(piVar18 + 2);
          *(undefined8 *)piVar19 = *(undefined8 *)piVar18;
          *(undefined8 *)(piVar19 + 2) = uVar4;
          local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
          *piVar18 = (int)local_58;
          piVar18[1] = local_58._4_4_;
          piVar18[2] = (int)uStack_50;
          piVar18[3] = uStack_50._4_4_;
          local_58 = uVar5;
          uStack_50 = uVar6;
        }
        goto LAB_147a6171f;
      }
LAB_147a6148b:
      if (uVar24 != 0) {
        iVar23 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
        iVar12 = iVar23;
joined_r0x000147a614b2:
        do {
          iVar13 = iVar23 * 2 + 1;
          if (iVar13 < (int)uVar24) {
            iVar21 = iVar23 * 2 + 2;
            if (iVar21 < (int)uVar24) {
              lVar17 = (longlong)iVar21;
              if ((piVar11[(longlong)iVar13 * 4] < piVar11[lVar17 * 4]) ||
                 ((piVar11[(longlong)iVar13 * 4] == piVar11[lVar17 * 4] &&
                  (piVar11[lVar17 * 4 + 3] < piVar11[(longlong)iVar13 * 4 + 3]))))
              goto LAB_147a614f4;
            }
            else {
LAB_147a614f4:
              lVar17 = (longlong)iVar13;
              iVar21 = iVar13;
            }
            piVar18 = piVar11 + (longlong)iVar23 * 4;
            piVar10 = piVar11 + lVar17 * 4;
            if ((piVar11[lVar17 * 4] < piVar11[(longlong)iVar23 * 4]) ||
               ((piVar11[lVar17 * 4] == piVar11[(longlong)iVar23 * 4] && (piVar18[3] < piVar10[3])))
               ) {
              local_58 = *(undefined8 *)piVar18;
              uStack_50 = *(undefined8 *)(piVar18 + 2);
              uVar5 = local_58;
              uVar6 = uStack_50;
              uVar4 = *(undefined8 *)(piVar10 + 2);
              *(undefined8 *)piVar18 = *(undefined8 *)piVar10;
              *(undefined8 *)(piVar18 + 2) = uVar4;
              local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
              *piVar10 = (int)local_58;
              piVar10[1] = local_58._4_4_;
              piVar10[2] = (int)uStack_50;
              piVar10[3] = uStack_50._4_4_;
              local_58 = uVar5;
              uStack_50 = uVar6;
              iVar23 = iVar21;
              goto joined_r0x000147a614b2;
            }
          }
          bVar27 = iVar12 != 0;
          iVar23 = iVar12 + -1;
          iVar12 = iVar23;
        } while (bVar27);
        if (1 < (int)uVar24) {
          uVar20 = (ulonglong)uVar24 - 1;
          local_58 = *(undefined8 *)piVar11;
          uStack_50 = *(undefined8 *)(piVar11 + 2);
          uVar5 = local_58;
          uVar6 = uStack_50;
          uVar4 = *(undefined8 *)(piVar11 + uVar20 * 4 + 2);
          *(undefined8 *)piVar11 = *(undefined8 *)(piVar11 + uVar20 * 4);
          *(undefined8 *)(piVar11 + 2) = uVar4;
          local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
          piVar18 = piVar11 + uVar20 * 4;
          *piVar18 = (int)local_58;
          piVar18[1] = local_58._4_4_;
          piVar18[2] = (int)uStack_50;
          piVar18[3] = uStack_50._4_4_;
          local_58 = uVar5;
          uStack_50 = uVar6;
          if (uVar24 != 2) {
            do {
              iVar12 = 0;
              iVar23 = 1;
              iVar13 = 0;
              do {
                iVar21 = iVar12 + 2;
                lVar17 = (longlong)iVar21;
                if (lVar17 < (longlong)uVar20) {
                  if ((piVar11[(longlong)iVar23 * 4] < piVar11[lVar17 * 4]) ||
                     ((piVar11[(longlong)iVar23 * 4] == piVar11[lVar17 * 4] &&
                      (piVar11[lVar17 * 4 + 3] < piVar11[(longlong)iVar23 * 4 + 3]))))
                  goto LAB_147a615f8;
                }
                else {
LAB_147a615f8:
                  lVar17 = (longlong)iVar23;
                  iVar21 = iVar23;
                }
                piVar18 = piVar11 + (longlong)iVar13 * 4;
                piVar10 = piVar11 + lVar17 * 4;
                if ((piVar11[(longlong)iVar13 * 4] <= piVar11[lVar17 * 4]) &&
                   ((piVar11[lVar17 * 4] != piVar11[(longlong)iVar13 * 4] ||
                    (piVar10[3] <= piVar18[3])))) break;
                uVar4 = *(undefined8 *)piVar18;
                uVar5 = *(undefined8 *)(piVar18 + 2);
                uVar6 = *(undefined8 *)(piVar10 + 2);
                *(undefined8 *)piVar18 = *(undefined8 *)piVar10;
                *(undefined8 *)(piVar18 + 2) = uVar6;
                *(undefined8 *)piVar10 = uVar4;
                *(undefined8 *)(piVar10 + 2) = uVar5;
                iVar12 = iVar21 * 2;
                iVar23 = iVar21 * 2 + 1;
                iVar13 = iVar21;
              } while ((longlong)iVar23 < (longlong)uVar20);
              uVar1 = uVar20 - 1;
              local_58 = *(undefined8 *)piVar11;
              uStack_50 = *(undefined8 *)(piVar11 + 2);
              uVar5 = local_58;
              uVar6 = uStack_50;
              uVar4 = *(undefined8 *)(piVar11 + uVar1 * 4 + 2);
              *(undefined8 *)piVar11 = *(undefined8 *)(piVar11 + uVar1 * 4);
              *(undefined8 *)(piVar11 + 2) = uVar4;
              local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
              piVar18 = piVar11 + uVar1 * 4;
              *piVar18 = (int)local_58;
              piVar18[1] = local_58._4_4_;
              piVar18[2] = (int)uStack_50;
              piVar18[3] = uStack_50._4_4_;
              bVar27 = 2 < uVar20;
              uVar20 = uVar1;
              local_58 = uVar5;
              uStack_50 = uVar6;
            } while (bVar27);
          }
        }
      }
LAB_147a6171f:
      plVar8 = plVar8 + -3;
    } while (&local_358 <= plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147a613ee:
  local_58 = *(undefined8 *)piVar11;
  uStack_50 = *(undefined8 *)(piVar11 + 2);
  uVar5 = local_58;
  uVar6 = uStack_50;
  uVar4 = *(undefined8 *)(piVar16 + 2);
  *(undefined8 *)piVar11 = *(undefined8 *)piVar16;
  *(undefined8 *)(piVar11 + 2) = uVar4;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar16 = (int)local_58;
  piVar16[1] = local_58._4_4_;
  piVar16[2] = (int)uStack_50;
  piVar16[3] = uStack_50._4_4_;
  iVar23 = iVar23 + -1;
  piVar19 = piVar19 + -8;
  local_58 = uVar5;
  uStack_50 = uVar6;
  if ((longlong)piVar19 - (longlong)piVar11 < (longlong)piVar18 - (longlong)piVar10) {
    if (piVar10 < piVar18) {
      *plVar8 = (longlong)piVar10;
      plVar8[1] = (longlong)piVar18;
      *(int *)(plVar8 + 2) = iVar23;
      plVar8 = plVar8 + 3;
    }
    if (piVar16 <= piVar11 + 4) goto LAB_147a6171f;
  }
  else {
    if (piVar11 + 4 < piVar16) {
      *plVar8 = (longlong)piVar11;
      plVar8[1] = (longlong)piVar19;
      *(int *)(plVar8 + 2) = iVar23;
      plVar8 = plVar8 + 3;
    }
    piVar19 = piVar18;
    piVar11 = piVar10;
    if (piVar18 <= piVar10) goto LAB_147a6171f;
  }
  iVar12 = (int)((ulonglong)((longlong)piVar19 - (longlong)piVar11) >> 4);
  uVar24 = iVar12 + 1;
  piVar18 = piVar19;
  if (iVar23 == 0) goto LAB_147a6148b;
  goto LAB_147a6132b;
}


